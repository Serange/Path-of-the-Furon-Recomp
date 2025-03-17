#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EAD814"))) PPC_WEAK_FUNC(sub_82EAD814);
PPC_FUNC_IMPL(__imp__sub_82EAD814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD818"))) PPC_WEAK_FUNC(sub_82EAD818);
PPC_FUNC_IMPL(__imp__sub_82EAD818) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAD820"))) PPC_WEAK_FUNC(sub_82EAD820);
PPC_FUNC_IMPL(__imp__sub_82EAD820) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD838"))) PPC_WEAK_FUNC(sub_82EAD838);
PPC_FUNC_IMPL(__imp__sub_82EAD838) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD860"))) PPC_WEAK_FUNC(sub_82EAD860);
PPC_FUNC_IMPL(__imp__sub_82EAD860) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,2(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2, ctx.r11.u32);
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lwz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 10);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD8E8"))) PPC_WEAK_FUNC(sub_82EAD8E8);
PPC_FUNC_IMPL(__imp__sub_82EAD8E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EADA58"))) PPC_WEAK_FUNC(sub_82EADA58);
PPC_FUNC_IMPL(__imp__sub_82EADA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EADAC8"))) PPC_WEAK_FUNC(sub_82EADAC8);
PPC_FUNC_IMPL(__imp__sub_82EADAC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r11,r10,16,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r11,r10,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r10,r9,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EADC18"))) PPC_WEAK_FUNC(sub_82EADC18);
PPC_FUNC_IMPL(__imp__sub_82EADC18) {
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
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r11.u16);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// bl 0x82eadac8
	ctx.lr = 0x82EADE60;
	sub_82EADAC8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EADEE4"))) PPC_WEAK_FUNC(sub_82EADEE4);
PPC_FUNC_IMPL(__imp__sub_82EADEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EADEE8"))) PPC_WEAK_FUNC(sub_82EADEE8);
PPC_FUNC_IMPL(__imp__sub_82EADEE8) {
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
	// bl 0x82ead4c0
	ctx.lr = 0x82EADF00;
	sub_82EAD4C0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eadf20
	if (ctx.cr6.eq) goto loc_82EADF20;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EADF20:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eadf34
	if (ctx.cr6.eq) goto loc_82EADF34;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EADF34;
	sub_822996C0(ctx, base);
loc_82EADF34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb53f8
	ctx.lr = 0x82EADF3C;
	sub_82EB53F8(ctx, base);
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

__attribute__((alias("__imp__sub_82EADF50"))) PPC_WEAK_FUNC(sub_82EADF50);
PPC_FUNC_IMPL(__imp__sub_82EADF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EADF58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eadfb0
	if (ctx.cr6.eq) goto loc_82EADFB0;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x82eadfb0
	if (ctx.cr6.eq) goto loc_82EADFB0;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x82eadfa4
	if (!ctx.cr6.eq) goto loc_82EADFA4;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x82ee3870
	ctx.lr = 0x82EADF88;
	sub_82EE3870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae000
	if (ctx.cr0.lt) goto loc_82EAE000;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x82eadffc
	goto loc_82EADFFC;
loc_82EADFA4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eae000
	goto loc_82EAE000;
loc_82EADFB0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82299698
	ctx.lr = 0x82EADFBC;
	sub_82299698(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eadfd4
	if (!ctx.cr0.eq) goto loc_82EADFD4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eae000
	goto loc_82EAE000;
loc_82EADFD4:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82eb5208
	ctx.lr = 0x82EADFEC;
	sub_82EB5208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae000
	if (ctx.cr0.lt) goto loc_82EAE000;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82EADFFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAE000:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE008"))) PPC_WEAK_FUNC(sub_82EAE008);
PPC_FUNC_IMPL(__imp__sub_82EAE008) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae03c
	if (ctx.cr6.eq) goto loc_82EAE03C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eae03c
	if (ctx.cr6.eq) goto loc_82EAE03C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EAE03C;
	sub_822996C0(ctx, base);
loc_82EAE03C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae05c
	if (ctx.cr6.eq) goto loc_82EAE05C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eae05c
	if (ctx.cr6.eq) goto loc_82EAE05C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EAE05C;
	sub_822996C0(ctx, base);
loc_82EAE05C:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae070
	if (ctx.cr6.eq) goto loc_82EAE070;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eae098
	ctx.lr = 0x82EAE070;
	sub_82EAE098(ctx, base);
loc_82EAE070:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae084
	if (ctx.cr6.eq) goto loc_82EAE084;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eae098
	ctx.lr = 0x82EAE084;
	sub_82EAE098(ctx, base);
loc_82EAE084:
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

__attribute__((alias("__imp__sub_82EAE098"))) PPC_WEAK_FUNC(sub_82EAE098);
PPC_FUNC_IMPL(__imp__sub_82EAE098) {
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
	// bl 0x82eae008
	ctx.lr = 0x82EAE0B8;
	sub_82EAE008(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eae0cc
	if (ctx.cr0.eq) goto loc_82EAE0CC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EAE0CC;
	sub_822996C0(ctx, base);
loc_82EAE0CC:
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

__attribute__((alias("__imp__sub_82EAE0E8"))) PPC_WEAK_FUNC(sub_82EAE0E8);
PPC_FUNC_IMPL(__imp__sub_82EAE0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EAE0F0;
	__savegprlr_29(ctx, base);
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae11c
	if (ctx.cr6.eq) goto loc_82EAE11C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eae11c
	if (ctx.cr6.eq) goto loc_82EAE11C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EAE11C;
	sub_822996C0(ctx, base);
loc_82EAE11C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae13c
	if (ctx.cr6.eq) goto loc_82EAE13C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eae13c
	if (ctx.cr6.eq) goto loc_82EAE13C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EAE13C;
	sub_822996C0(ctx, base);
loc_82EAE13C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EAE168;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// blt cr6,0x82eae1f4
	if (ctx.cr6.lt) goto loc_82EAE1F4;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eae1e8
	if (!ctx.cr6.gt) goto loc_82EAE1E8;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eae1f4
	if (!ctx.cr6.gt) goto loc_82EAE1F4;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eae1e8
	if (!ctx.cr6.gt) goto loc_82EAE1E8;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addi r11,r11,-338
	ctx.r11.s64 = ctx.r11.s64 + -338;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82eae1f4
	if (ctx.cr6.gt) goto loc_82EAE1F4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x82eae1f0
	goto loc_82EAE1F0;
loc_82EAE1E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82EAE1F0:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82EAE1F4:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// subf r10,r6,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE23C"))) PPC_WEAK_FUNC(sub_82EAE23C);
PPC_FUNC_IMPL(__imp__sub_82EAE23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE240"))) PPC_WEAK_FUNC(sub_82EAE240);
PPC_FUNC_IMPL(__imp__sub_82EAE240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EAE248;
	__savegprlr_25(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// ble cr6,0x82eae638
	if (!ctx.cr6.gt) goto loc_82EAE638;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,-3444
	ctx.r11.s64 = ctx.r11.s64 + -3444;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_82EAE268:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae288
	if (!ctx.cr0.eq) goto loc_82EAE288;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eae268
	if (!ctx.cr6.eq) goto loc_82EAE268;
loc_82EAE288:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae29c
	if (!ctx.cr0.eq) goto loc_82EAE29C;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x82eae2d8
	goto loc_82EAE2D8;
loc_82EAE29C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_82EAE2AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae2cc
	if (!ctx.cr0.eq) goto loc_82EAE2CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eae2ac
	if (!ctx.cr6.eq) goto loc_82EAE2AC;
loc_82EAE2CC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae638
	if (!ctx.cr0.eq) goto loc_82EAE638;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_82EAE2D8:
	// addi r30,r5,-3
	ctx.r30.s64 = ctx.r5.s64 + -3;
	// addi r29,r4,3
	ctx.r29.s64 = ctx.r4.s64 + 3;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 256, ctx.xer);
	// li r11,256
	ctx.r11.s64 = 256;
	// bgt cr6,0x82eae2f0
	if (ctx.cr6.gt) goto loc_82EAE2F0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EAE2F0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eae314
	if (ctx.cr6.eq) goto loc_82EAE314;
loc_82EAE2FC:
	// lbzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82eae318
	if (ctx.cr6.eq) goto loc_82EAE318;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eae2fc
	if (ctx.cr6.lt) goto loc_82EAE2FC;
loc_82EAE314:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EAE318:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82eae638
	if (ctx.cr6.eq) goto loc_82EAE638;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ead1c8
	ctx.lr = 0x82EAE330;
	sub_82EAD1C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-3456
	ctx.r4.s64 = ctx.r11.s64 + -3456;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb81f0
	ctx.lr = 0x82EAE34C;
	sub_82CB81F0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82eae638
	if (!ctx.cr6.eq) goto loc_82EAE638;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// beq 0x82eae638
	if (ctx.cr0.eq) goto loc_82EAE638;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 256, ctx.xer);
	// li r10,256
	ctx.r10.s64 = 256;
	// bgt cr6,0x82eae378
	if (ctx.cr6.gt) goto loc_82EAE378;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82EAE378:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eae39c
	if (ctx.cr6.eq) goto loc_82EAE39C;
loc_82EAE384:
	// lbzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x82eae474
	if (ctx.cr6.eq) goto loc_82EAE474;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eae384
	if (ctx.cr6.lt) goto loc_82EAE384;
loc_82EAE39C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EAE3A0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82eae638
	if (ctx.cr6.eq) goto loc_82EAE638;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ead1c8
	ctx.lr = 0x82EAE3B8;
	sub_82EAD1C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-3464
	ctx.r4.s64 = ctx.r11.s64 + -3464;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb81f0
	ctx.lr = 0x82EAE3D0;
	sub_82CB81F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82eae638
	if (!ctx.cr6.eq) goto loc_82EAE638;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82eae3f4
	if (ctx.cr6.lt) goto loc_82EAE3F4;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82EAE3F4:
	// cntlzw r8,r26
	ctx.r8.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// rlwinm r8,r8,28,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eae638
	if (ctx.cr6.lt) goto loc_82EAE638;
	// lis r9,6690
	ctx.r9.s64 = 438435840;
	// stw r11,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r10.u32);
	// ori r9,r9,43686
	ctx.r9.u64 = ctx.r9.u64 | 43686;
	// stw r28,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r11.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r8,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r8.u32);
	// stw r28,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EAE45C;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// bne 0x82eae47c
	if (!ctx.cr0.eq) goto loc_82EAE47C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eae640
	goto loc_82EAE640;
loc_82EAE474:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82eae3a0
	goto loc_82EAE3A0;
loc_82EAE47C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addic. r4,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// blt 0x82eae630
	if (ctx.cr0.lt) goto loc_82EAE630;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
loc_82EAE498:
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mullw r9,r4,r8
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x82eae548
	if (ctx.cr6.eq) goto loc_82EAE548;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82eae53c
	if (ctx.cr6.eq) goto loc_82EAE53C;
	// b 0x82eae514
	goto loc_82EAE514;
loc_82EAE4C8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r7,r9,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// rlwinm r6,r9,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82EAE514:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eae4c8
	if (!ctx.cr6.eq) goto loc_82EAE4C8;
	// b 0x82eae628
	goto loc_82EAE628;
loc_82EAE520:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82EAE53C:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eae520
	if (!ctx.cr6.eq) goto loc_82EAE520;
	// b 0x82eae628
	goto loc_82EAE628;
loc_82EAE548:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82eae620
	if (ctx.cr6.eq) goto loc_82EAE620;
	// b 0x82eae5f0
	goto loc_82EAE5F0;
loc_82EAE554:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82EAE5F0:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eae554
	if (!ctx.cr6.eq) goto loc_82EAE554;
	// b 0x82eae628
	goto loc_82EAE628;
loc_82EAE5FC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82EAE620:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eae5fc
	if (!ctx.cr6.eq) goto loc_82EAE5FC;
loc_82EAE628:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x82eae498
	if (!ctx.cr0.lt) goto loc_82EAE498;
loc_82EAE630:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eae640
	goto loc_82EAE640;
loc_82EAE638:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EAE640:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE648"))) PPC_WEAK_FUNC(sub_82EAE648);
PPC_FUNC_IMPL(__imp__sub_82EAE648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82EAE650;
	__savegprlr_18(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r24,10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 10, ctx.xer);
	// ble cr6,0x82eaf174
	if (!ctx.cr6.gt) goto loc_82EAF174;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-3384
	ctx.r10.s64 = ctx.r10.s64 + -3384;
	// addi r8,r4,10
	ctx.r8.s64 = ctx.r4.s64 + 10;
loc_82EAE684:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae6a4
	if (!ctx.cr0.eq) goto loc_82EAE6A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eae684
	if (!ctx.cr6.eq) goto loc_82EAE684;
loc_82EAE6A4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eaf174
	if (!ctx.cr0.eq) goto loc_82EAF174;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// lfs f29,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f29.f64 = double(temp.f32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// ble cr6,0x82eaf174
	if (!ctx.cr6.gt) goto loc_82EAF174;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// li r18,1
	ctx.r18.s64 = 1;
	// addi r22,r11,-3464
	ctx.r22.s64 = ctx.r11.s64 + -3464;
	// addi r21,r10,-3400
	ctx.r21.s64 = ctx.r10.s64 + -3400;
	// addi r20,r9,-3416
	ctx.r20.s64 = ctx.r9.s64 + -3416;
	// addi r27,r8,-3428
	ctx.r27.s64 = ctx.r8.s64 + -3428;
	// addi r26,r7,-3436
	ctx.r26.s64 = ctx.r7.s64 + -3436;
loc_82EAE6F4:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82eaea74
	if (ctx.cr6.eq) goto loc_82EAEA74;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE708:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae708
	if (!ctx.cr6.eq) goto loc_82EAE708;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82eae8a4
	if (!ctx.cr6.gt) goto loc_82EAE8A4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE734:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae734
	if (!ctx.cr6.eq) goto loc_82EAE734;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// rotlwi. r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// beq 0x82eae784
	if (ctx.cr0.eq) goto loc_82EAE784;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EAE764:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eae784
	if (!ctx.cr0.eq) goto loc_82EAE784;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82eae764
	if (!ctx.cr6.eq) goto loc_82EAE764;
loc_82EAE784:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eae8a4
	if (!ctx.cr0.eq) goto loc_82EAE8A4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE794:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae794
	if (!ctx.cr6.eq) goto loc_82EAE794;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r31,r10,r25
	ctx.r31.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_82EAE7BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eae7bc
	if (!ctx.cr6.eq) goto loc_82EAE7BC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r30,r11,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r11.s64;
loc_82EAE7DC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82eae7f4
	if (ctx.cr6.eq) goto loc_82EAE7F4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82eae804
	if (!ctx.cr6.eq) goto loc_82EAE804;
loc_82EAE7F4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82eaf174
	if (ctx.cr0.eq) goto loc_82EAF174;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82eae7dc
	goto loc_82EAE7DC;
loc_82EAE804:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82cb1160
	ctx.lr = 0x82EAE814;
	sub_82CB1160(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82cb1160
	ctx.lr = 0x82EAE824;
	sub_82CB1160(ctx, base);
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x82eaf174
	if (ctx.cr6.lt) goto loc_82EAF174;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,15
	ctx.r8.s64 = ctx.r31.s64 + 15;
loc_82EAE838:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae858
	if (!ctx.cr0.eq) goto loc_82EAE858;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eae838
	if (!ctx.cr6.eq) goto loc_82EAE838;
loc_82EAE858:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eae894
	if (ctx.cr0.eq) goto loc_82EAE894;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,15
	ctx.r8.s64 = ctx.r31.s64 + 15;
loc_82EAE86C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae88c
	if (!ctx.cr0.eq) goto loc_82EAE88C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eae86c
	if (!ctx.cr6.eq) goto loc_82EAE86C;
loc_82EAE88C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eaf174
	if (!ctx.cr0.eq) goto loc_82EAF174;
loc_82EAE894:
	// addi r25,r31,16
	ctx.r25.s64 = ctx.r31.s64 + 16;
	// addi r24,r30,-16
	ctx.r24.s64 = ctx.r30.s64 + -16;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// b 0x82eaea68
	goto loc_82EAEA68;
loc_82EAE8A4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE8AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae8ac
	if (!ctx.cr6.eq) goto loc_82EAE8AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82eaea30
	if (!ctx.cr6.gt) goto loc_82EAEA30;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE8D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae8d8
	if (!ctx.cr6.eq) goto loc_82EAE8D8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// rotlwi. r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// beq 0x82eae928
	if (ctx.cr0.eq) goto loc_82EAE928;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EAE908:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eae928
	if (!ctx.cr0.eq) goto loc_82EAE928;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82eae908
	if (!ctx.cr6.eq) goto loc_82EAE908;
loc_82EAE928:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eaea30
	if (!ctx.cr0.eq) goto loc_82EAEA30;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE938:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae938
	if (!ctx.cr6.eq) goto loc_82EAE938;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r30,r10,r25
	ctx.r30.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_82EAE960:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eae960
	if (!ctx.cr6.eq) goto loc_82EAE960;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r28,r11,r24
	ctx.r28.s64 = ctx.r24.s64 - ctx.r11.s64;
loc_82EAE980:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82eae998
	if (ctx.cr6.eq) goto loc_82EAE998;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82eae9a8
	if (!ctx.cr6.eq) goto loc_82EAE9A8;
loc_82EAE998:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82eaf174
	if (ctx.cr0.eq) goto loc_82EAF174;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82eae980
	goto loc_82EAE980;
loc_82EAE9A8:
	// cmpwi cr6,r28,256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 256, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x82eae9b8
	if (ctx.cr6.lt) goto loc_82EAE9B8;
	// li r11,256
	ctx.r11.s64 = 256;
loc_82EAE9B8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eae9dc
	if (ctx.cr6.eq) goto loc_82EAE9DC;
loc_82EAE9C4:
	// lbzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82eae9e0
	if (ctx.cr6.eq) goto loc_82EAE9E0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eae9c4
	if (ctx.cr6.lt) goto loc_82EAE9C4;
loc_82EAE9DC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82EAE9E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eaf174
	if (ctx.cr6.eq) goto loc_82EAF174;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ead1c8
	ctx.lr = 0x82EAE9F8;
	sub_82EAD1C8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82cb81f0
	ctx.lr = 0x82EAEA0C;
	sub_82CB81F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r31,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r31.s64;
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// addi r24,r10,-1
	ctx.r24.s64 = ctx.r10.s64 + -1;
	// b 0x82eaea68
	goto loc_82EAEA68;
loc_82EAEA30:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82eaea54
	if (ctx.cr6.eq) goto loc_82EAEA54;
loc_82EAEA3C:
	// lbzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82eaea58
	if (ctx.cr6.eq) goto loc_82EAEA58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82eaea3c
	if (ctx.cr6.lt) goto loc_82EAEA3C;
loc_82EAEA54:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82EAEA58:
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// subf r11,r11,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r11.s64;
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
loc_82EAEA68:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt cr6,0x82eae6f4
	if (ctx.cr6.gt) goto loc_82EAE6F4;
	// b 0x82eaea7c
	goto loc_82EAEA7C;
loc_82EAEA74:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
loc_82EAEA7C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82eaf174
	if (ctx.cr6.eq) goto loc_82EAF174;
	// cmpwi cr6,r24,256
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 256, ctx.xer);
	// li r10,256
	ctx.r10.s64 = 256;
	// bgt cr6,0x82eaea94
	if (ctx.cr6.gt) goto loc_82EAEA94;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82EAEA94:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eaeab8
	if (ctx.cr6.eq) goto loc_82EAEAB8;
loc_82EAEAA0:
	// lbzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x82eaeb08
	if (ctx.cr6.eq) goto loc_82EAEB08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eaeaa0
	if (ctx.cr6.lt) goto loc_82EAEAA0;
loc_82EAEAB8:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82EAEABC:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// ble cr6,0x82eaf174
	if (!ctx.cr6.gt) goto loc_82EAF174;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ead1c8
	ctx.lr = 0x82EAEAD4;
	sub_82EAD1C8(ctx, base);
	// lbz r11,209(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 209);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// bne cr6,0x82eaeb24
	if (!ctx.cr6.eq) goto loc_82EAEB24;
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82eaeb10
	if (!ctx.cr6.eq) goto loc_82EAEB10;
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x82eaeb5c
	goto loc_82EAEB5C;
loc_82EAEB08:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82eaeabc
	goto loc_82EAEABC;
loc_82EAEB10:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// b 0x82eaeb5c
	goto loc_82EAEB5C;
loc_82EAEB24:
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82eaeb4c
	if (!ctx.cr6.eq) goto loc_82EAEB4C;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// b 0x82eaeb58
	goto loc_82EAEB58;
loc_82EAEB4C:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82EAEB58:
	// lbz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82EAEB5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,210
	ctx.r3.s64 = ctx.r1.s64 + 210;
	// addi r31,r11,-3440
	ctx.r31.s64 = ctx.r11.s64 + -3440;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb81f0
	ctx.lr = 0x82EAEB70;
	sub_82CB81F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// lbz r11,210(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 210);
	// addi r10,r1,210
	ctx.r10.s64 = ctx.r1.s64 + 210;
	// b 0x82eaeb9c
	goto loc_82EAEB9C;
loc_82EAEB84:
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82eaeba4
	if (ctx.cr6.eq) goto loc_82EAEBA4;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82eaeba4
	if (ctx.cr6.eq) goto loc_82EAEBA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
loc_82EAEB9C:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eaeb84
	if (!ctx.cr0.eq) goto loc_82EAEB84;
loc_82EAEBA4:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaf174
	if (ctx.cr0.eq) goto loc_82EAF174;
	// addi r11,r11,-43
	ctx.r11.s64 = ctx.r11.s64 + -43;
	// clrlwi. r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// beq 0x82eaebcc
	if (ctx.cr0.eq) goto loc_82EAEBCC;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82eaebd4
	goto loc_82EAEBD4;
loc_82EAEBCC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82EAEBD4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaf174
	if (ctx.cr0.eq) goto loc_82EAF174;
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// beq cr6,0x82eaebf4
	if (ctx.cr6.eq) goto loc_82EAEBF4;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
loc_82EAEBF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// bl 0x82cb81f0
	ctx.lr = 0x82EAEC00;
	sub_82CB81F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// lis r9,6690
	ctx.r9.s64 = 438435840;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r28,r25
	ctx.r8.u64 = ctx.r28.u64 + ctx.r25.u64;
	// ori r6,r9,43686
	ctx.r6.u64 = ctx.r9.u64 | 43686;
	// stw r29,52(r19)
	PPC_STORE_U32(ctx.r19.u32 + 52, ctx.r29.u32);
	// subf r7,r28,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r28.s64;
	// stw r18,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r18.u32);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r6.u32);
	// mullw. r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r11.u32);
	// stw r10,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r10.u32);
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
	// stw r9,48(r19)
	PPC_STORE_U32(ctx.r19.u32 + 48, ctx.r9.u32);
	// addi r24,r7,-1
	ctx.r24.s64 = ctx.r7.s64 + -1;
	// beq 0x82eaf174
	if (ctx.cr0.eq) goto loc_82EAF174;
	// stw r18,56(r19)
	PPC_STORE_U32(ctx.r19.u32 + 56, ctx.r18.u32);
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EAEC5C;
	sub_82299698(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r11.u32);
	// bne 0x82eaec74
	if (!ctx.cr0.eq) goto loc_82EAEC74;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eaf17c
	goto loc_82EAF17C;
loc_82EAEC74:
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bne cr6,0x82eaec90
	if (!ctx.cr6.eq) goto loc_82EAEC90;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// beq cr6,0x82eaec98
	if (ctx.cr6.eq) goto loc_82EAEC98;
loc_82EAEC90:
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// b 0x82eaec9c
	goto loc_82EAEC9C;
loc_82EAEC98:
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_82EAEC9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eaed34
	if (ctx.cr6.eq) goto loc_82EAED34;
	// beq 0x82eaecc0
	if (ctx.cr0.eq) goto loc_82EAECC0;
	// clrlwi. r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eaecc0
	if (!ctx.cr0.eq) goto loc_82EAECC0;
	// lwz r10,48(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82eaed0c
	goto loc_82EAED0C;
loc_82EAECC0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eaed14
	if (!ctx.cr6.eq) goto loc_82EAED14;
	// clrlwi. r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eaece4
	if (!ctx.cr0.eq) goto loc_82EAECE4;
	// lwz r10,48(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// li r4,-4
	ctx.r4.s64 = -4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82eaedac
	goto loc_82EAEDAC;
loc_82EAECE4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eaed14
	if (!ctx.cr6.eq) goto loc_82EAED14;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eaed14
	if (ctx.cr0.eq) goto loc_82EAED14;
	// lwz r9,48(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r10,r9
	ctx.r10.s64 = -ctx.r9.s64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82EAED0C:
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82eaedc0
	goto loc_82EAEDC0;
loc_82EAED14:
	// lwz r9,48(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82eaedc0
	goto loc_82EAEDC0;
loc_82EAED34:
	// beq 0x82eaed5c
	if (ctx.cr0.eq) goto loc_82EAED5C;
	// clrlwi. r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eaed5c
	if (ctx.cr0.eq) goto loc_82EAED5C;
	// lwz r9,48(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// neg r5,r9
	ctx.r5.s64 = -ctx.r9.s64;
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r5,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82eaedbc
	goto loc_82EAEDBC;
loc_82EAED5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eaedb4
	if (!ctx.cr6.eq) goto loc_82EAEDB4;
	// clrlwi. r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eaed8c
	if (ctx.cr0.eq) goto loc_82EAED8C;
	// lwz r6,48(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// li r10,-4
	ctx.r10.s64 = -4;
	// mullw r9,r6,r8
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// neg r9,r6
	ctx.r9.s64 = -ctx.r6.s64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82eaedc0
	goto loc_82EAEDC0;
loc_82EAED8C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eaedb4
	if (!ctx.cr6.eq) goto loc_82EAEDB4;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82eaedb4
	if (!ctx.cr0.eq) goto loc_82EAEDB4;
	// lwz r9,48(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// li r10,-4
	ctx.r10.s64 = -4;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
loc_82EAEDAC:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// b 0x82eaedc0
	goto loc_82EAEDC0;
loc_82EAEDB4:
	// lwz r9,48(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
loc_82EAEDBC:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82EAEDC0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82eaf0b8
	if (!ctx.cr6.gt) goto loc_82EAF0B8;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82EAEDD8:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// blt cr6,0x82eaf164
	if (ctx.cr6.lt) goto loc_82EAF164;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r24,r24,-4
	ctx.r24.s64 = ctx.r24.s64 + -4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// beq cr6,0x82eaef88
	if (ctx.cr6.eq) goto loc_82EAEF88;
	// lbz r9,85(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x82eaee18
	if (!ctx.cr6.eq) goto loc_82EAEE18;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x82eaef88
	if (ctx.cr6.lt) goto loc_82EAEF88;
loc_82EAEE18:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f11,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lfd f0,152(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f12,200(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// std r10,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// lfd f13,184(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// ble cr6,0x82eaf0a0
	if (!ctx.cr6.gt) goto loc_82EAF0A0;
loc_82EAEE80:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// blt cr6,0x82eaf164
	if (ctx.cr6.lt) goto loc_82EAF164;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r24,r24,-4
	ctx.r24.s64 = ctx.r24.s64 + -4;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lbz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r6,85(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82eaef08
	if (!ctx.cr6.eq) goto loc_82EAEF08;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82eaef08
	if (!ctx.cr6.eq) goto loc_82EAEF08;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82eaef08
	if (!ctx.cr6.eq) goto loc_82EAEF08;
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x82eaf164
	if (ctx.cr6.gt) goto loc_82EAF164;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82eaef00
	if (!ctx.cr6.gt) goto loc_82EAEF00;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EAEEE4:
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bne 0x82eaeee4
	if (!ctx.cr0.eq) goto loc_82EAEEE4;
loc_82EAEF00:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// b 0x82eaef7c
	goto loc_82EAEF7C;
loc_82EAEF08:
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82EAEF7C:
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82eaee80
	if (ctx.cr6.lt) goto loc_82EAEE80;
	// b 0x82eaf0a0
	goto loc_82EAF0A0;
loc_82EAEF88:
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwinm r11,r10,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82eaf164
	if (!ctx.cr6.eq) goto loc_82EAF164;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82EAEFA4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82eaf090
	if (!ctx.cr6.gt) goto loc_82EAF090;
loc_82EAEFB4:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// blt cr6,0x82eaf164
	if (ctx.cr6.lt) goto loc_82EAF164;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// ble cr6,0x82eaf020
	if (!ctx.cr6.gt) goto loc_82EAF020;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x82eaf164
	if (ctx.cr6.gt) goto loc_82EAF164;
	// lbz r9,1(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x82eaf014
	if (ctx.cr6.eq) goto loc_82EAF014;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82EAEFFC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eaeffc
	if (ctx.cr6.lt) goto loc_82EAEFFC;
loc_82EAF014:
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r24,r24,-2
	ctx.r24.s64 = ctx.r24.s64 + -2;
	// b 0x82eaf088
	goto loc_82EAF088;
loc_82EAF020:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82eaf164
	if (ctx.cr6.lt) goto loc_82EAF164;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x82eaf164
	if (ctx.cr6.gt) goto loc_82EAF164;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eaf078
	if (ctx.cr6.eq) goto loc_82EAF078;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82EAF048:
	// add r27,r9,r5
	ctx.r27.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbz r27,1(r27)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r27.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// blt cr6,0x82eaf048
	if (ctx.cr6.lt) goto loc_82EAF048;
loc_82EAF078:
	// subf r9,r11,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r11.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r24,r9,-1
	ctx.r24.s64 = ctx.r9.s64 + -1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_82EAF088:
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82eaefb4
	if (ctx.cr6.lt) goto loc_82EAEFB4;
loc_82EAF090:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x82eaefa4
	if (ctx.cr6.lt) goto loc_82EAEFA4;
loc_82EAF0A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82eaedd8
	if (ctx.cr6.lt) goto loc_82EAEDD8;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82EAF0B8:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// mullw. r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eaf15c
	if (ctx.cr0.eq) goto loc_82EAF15C;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// fdivs f31,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f29.f64 / ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f30.f64 = double(temp.f32);
loc_82EAF0D4:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lfs f0,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r11,-136
	ctx.r30.s64 = ctx.r11.s64 + -136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb5328
	ctx.lr = 0x82EAF0F8;
	sub_82CB5328(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// bl 0x82cb5328
	ctx.lr = 0x82EAF114;
	sub_82CB5328(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// bl 0x82cb5328
	ctx.lr = 0x82EAF130;
	sub_82CB5328(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eaf0d4
	if (ctx.cr6.lt) goto loc_82EAF0D4;
loc_82EAF15C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eaf17c
	goto loc_82EAF17C;
loc_82EAF164:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// bl 0x822996c0
	ctx.lr = 0x82EAF170;
	sub_822996C0(ctx, base);
	// stw r29,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r29.u32);
loc_82EAF174:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EAF17C:
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF190"))) PPC_WEAK_FUNC(sub_82EAF190);
PPC_FUNC_IMPL(__imp__sub_82EAF190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EAF198;
	__savegprlr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// bge cr6,0x82eaf1bc
	if (!ctx.cr6.lt) goto loc_82EAF1BC;
loc_82EAF1B0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eafd3c
	goto loc_82EAFD3C;
loc_82EAF1BC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// bl 0x82cb1160
	ctx.lr = 0x82EAF1D0;
	sub_82CB1160(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ead8e8
	ctx.lr = 0x82EAF1DC;
	sub_82EAD8E8(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82eaf23c
	if (!ctx.cr6.eq) goto loc_82EAF23C;
	// lha r11,180(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 180));
	// li r10,12
	ctx.r10.s64 = 12;
	// lha r9,182(r1)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 182));
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lhz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 184);
	// lhz r7,186(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 186);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// sth r8,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r8.u16);
	// sth r7,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r7.u16);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// b 0x82eaf244
	goto loc_82EAF244;
loc_82EAF23C:
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
loc_82EAF244:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r15,8(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bgt cr6,0x82eaf260
	if (ctx.cr6.gt) goto loc_82EAF260;
	// neg r23,r15
	ctx.r23.s64 = -ctx.r15.s64;
loc_82EAF260:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r14,1
	ctx.r14.s64 = 1;
	// lhz r6,14(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// bgt cr6,0x82eaf29c
	if (ctx.cr6.gt) goto loc_82EAF29C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eaf29c
	if (!ctx.cr6.eq) goto loc_82EAF29C;
	// slw r11,r14,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r6.u8 & 0x3F));
loc_82EAF29C:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eaf1b0
	if (!ctx.cr6.eq) goto loc_82EAF1B0;
	// lwz r19,16(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// blt cr6,0x82eaf56c
	if (ctx.cr6.lt) goto loc_82EAF56C;
	// bne cr6,0x82eaf1b0
	if (!ctx.cr6.eq) goto loc_82EAF1B0;
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// lwz r16,48(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r10,56
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56, ctx.xer);
	// lwz r17,44(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r18,40(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// blt cr6,0x82eaf2ec
	if (ctx.cr6.lt) goto loc_82EAF2EC;
	// lwz r21,52(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x82eaf2f0
	goto loc_82EAF2F0;
loc_82EAF2EC:
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
loc_82EAF2F0:
	// lis r26,6690
	ctx.r26.s64 = 438435840;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// ori r26,r26,43686
	ctx.r26.u64 = ctx.r26.u64 | 43686;
	// beq cr6,0x82eaf484
	if (ctx.cr6.eq) goto loc_82EAF484;
	// cmpwi cr6,r6,24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 24, ctx.xer);
	// beq cr6,0x82eaf454
	if (ctx.cr6.eq) goto loc_82EAF454;
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// bne cr6,0x82eaf1b0
	if (!ctx.cr6.eq) goto loc_82EAF1B0;
	// cmplwi cr6,r16,255
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 255, ctx.xer);
	// bne cr6,0x82eaf348
	if (!ctx.cr6.eq) goto loc_82EAF348;
	// cmplwi cr6,r17,65280
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 65280, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82eaf478
	if (ctx.cr6.eq) goto loc_82EAF478;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,6184
	ctx.r26.s64 = 405274624;
	// b 0x82eaf47c
	goto loc_82EAF47C;
loc_82EAF348:
	// lis r10,16368
	ctx.r10.s64 = 1072693248;
	// cmplw cr6,r16,r10
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eaf380
	if (!ctx.cr6.eq) goto loc_82EAF380;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,64512
	ctx.r11.u64 = ctx.r11.u64 | 64512;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,1023
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 1023, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,6688
	ctx.r26.s64 = 438304768;
	// b 0x82eaf420
	goto loc_82EAF420;
loc_82EAF380:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf3c0
	if (!ctx.cr6.eq) goto loc_82EAF3C0;
	// cmplwi cr6,r17,65280
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 65280, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,255
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 255, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf3b0
	if (!ctx.cr6.eq) goto loc_82EAF3B0;
	// lis r26,6688
	ctx.r26.s64 = 438304768;
	// b 0x82eaf47c
	goto loc_82EAF47C;
loc_82EAF3B0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,10784
	ctx.r26.s64 = 706740224;
	// b 0x82eaf47c
	goto loc_82EAF47C;
loc_82EAF3C0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x82eaf3f0
	if (!ctx.cr6.eq) goto loc_82EAF3F0;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,65535
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 65535, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,11552
	ctx.r26.s64 = 757071872;
	// ori r26,r26,153
	ctx.r26.u64 = ctx.r26.u64 | 153;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF3F0:
	// cmplwi cr6,r16,1023
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 1023, ctx.xer);
	// bne cr6,0x82eaf428
	if (!ctx.cr6.eq) goto loc_82EAF428;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,64512
	ctx.r11.u64 = ctx.r11.u64 | 64512;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,6184
	ctx.r26.s64 = 405274624;
loc_82EAF420:
	// ori r26,r26,182
	ctx.r26.u64 = ctx.r26.u64 | 182;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF428:
	// cmplwi cr6,r16,65280
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 65280, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82eaf478
	goto loc_82EAF478;
loc_82EAF454:
	// cmplwi cr6,r16,255
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 255, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r17,65280
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 65280, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
loc_82EAF478:
	// lis r26,10280
	ctx.r26.s64 = 673710080;
loc_82EAF47C:
	// ori r26,r26,134
	ctx.r26.u64 = ctx.r26.u64 | 134;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF484:
	// cmplwi cr6,r16,255
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 255, ctx.xer);
	// bne cr6,0x82eaf4b0
	if (!ctx.cr6.eq) goto loc_82EAF4B0;
	// cmplwi cr6,r17,255
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 255, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,255
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 255, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,65280
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 65280, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,2048
	ctx.r26.s64 = 134217728;
	// ori r26,r26,74
	ctx.r26.u64 = ctx.r26.u64 | 74;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF4B0:
	// cmplwi cr6,r16,31
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 31, ctx.xer);
	// bne cr6,0x82eaf504
	if (!ctx.cr6.eq) goto loc_82EAF504;
	// cmplwi cr6,r17,2016
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 2016, ctx.xer);
	// bne cr6,0x82eaf4dc
	if (!ctx.cr6.eq) goto loc_82EAF4DC;
	// cmplwi cr6,r18,63488
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 63488, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,10280
	ctx.r26.s64 = 673710080;
	// ori r26,r26,68
	ctx.r26.u64 = ctx.r26.u64 | 68;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF4DC:
	// cmplwi cr6,r17,992
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 992, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,31744
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 31744, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82eaf5b0
	if (ctx.cr6.eq) goto loc_82EAF5B0;
	// cmplwi cr6,r21,32768
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 32768, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,6184
	ctx.r26.s64 = 405274624;
	// b 0x82eaf5b4
	goto loc_82EAF5B4;
loc_82EAF504:
	// cmplwi cr6,r16,15
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 15, ctx.xer);
	// bne cr6,0x82eaf540
	if (!ctx.cr6.eq) goto loc_82EAF540;
	// cmplwi cr6,r17,240
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 240, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,3840
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 3840, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,61440
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 61440, ctx.xer);
	// bne cr6,0x82eaf52c
	if (!ctx.cr6.eq) goto loc_82EAF52C;
	// lis r26,6184
	ctx.r26.s64 = 405274624;
	// b 0x82eaf538
	goto loc_82EAF538;
loc_82EAF52C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,10280
	ctx.r26.s64 = 673710080;
loc_82EAF538:
	// ori r26,r26,79
	ctx.r26.u64 = ctx.r26.u64 | 79;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF540:
	// cmplwi cr6,r16,65535
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 65535, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r17,65535
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 65535, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,65535
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 65535, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,10240
	ctx.r26.s64 = 671088640;
	// ori r26,r26,88
	ctx.r26.u64 = ctx.r26.u64 | 88;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF56C:
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// beq cr6,0x82eaf5a0
	if (ctx.cr6.eq) goto loc_82EAF5A0;
	// cmpwi cr6,r6,24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 24, ctx.xer);
	// beq cr6,0x82eaf584
	if (ctx.cr6.eq) goto loc_82EAF584;
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// bne cr6,0x82eaf1b0
	if (!ctx.cr6.eq) goto loc_82EAF1B0;
loc_82EAF584:
	// lis r26,10280
	ctx.r26.s64 = 673710080;
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r26,r26,134
	ctx.r26.u64 = ctx.r26.u64 | 134;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF5A0:
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAF5B0:
	// lis r26,10280
	ctx.r26.s64 = 673710080;
loc_82EAF5B4:
	// ori r26,r26,67
	ctx.r26.u64 = ctx.r26.u64 | 67;
loc_82EAF5B8:
	// rlwinm r9,r26,0,26,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r9,-449
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -449, ctx.xer);
	// beq cr6,0x82eaf1b0
	if (ctx.cr6.eq) goto loc_82EAF1B0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82eaf604
	if (ctx.cr6.eq) goto loc_82EAF604;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x82eaf5f8
	if (ctx.cr6.eq) goto loc_82EAF5F8;
	// cmpwi cr6,r6,24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 24, ctx.xer);
	// beq cr6,0x82eaf5ec
	if (ctx.cr6.eq) goto loc_82EAF5EC;
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r29,r11,r7
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82eaf610
	goto loc_82EAF610;
loc_82EAF5EC:
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r7,3
	ctx.r11.s64 = ctx.r7.s64 * 3;
	// b 0x82eaf610
	goto loc_82EAF610;
loc_82EAF5F8:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x82eaf60c
	goto loc_82EAF60C;
loc_82EAF604:
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82EAF60C:
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_82EAF610:
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r28,r10,43558
	ctx.r28.u64 = ctx.r10.u64 | 43558;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82eaf624
	if (!ctx.cr6.eq) goto loc_82EAF624;
	// rlwinm r29,r7,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
loc_82EAF624:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// rlwinm r24,r10,0,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x82eaf63c
	if (ctx.cr6.eq) goto loc_82EAF63C;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// bne cr6,0x82eaf654
	if (!ctx.cr6.eq) goto loc_82EAF654;
loc_82EAF63C:
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
loc_82EAF654:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82eaf6cc
	if (!ctx.cr6.eq) goto loc_82EAF6CC;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82eaf6cc
	if (!ctx.cr6.eq) goto loc_82EAF6CC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eaf6cc
	if (ctx.cr6.eq) goto loc_82EAF6CC;
	// add r9,r30,r20
	ctx.r9.u64 = ctx.r30.u64 + ctx.r20.u64;
loc_82EAF67C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82eaf6bc
	if (ctx.cr6.eq) goto loc_82EAF6BC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82EAF68C:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r4,r4,0,0,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82eaf6ac
	if (!ctx.cr0.eq) goto loc_82EAF6AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eaf68c
	if (ctx.cr6.lt) goto loc_82EAF68C;
	// b 0x82eaf6b4
	goto loc_82EAF6B4;
loc_82EAF6AC:
	// lis r26,6184
	ctx.r26.s64 = 405274624;
	// ori r26,r26,134
	ctx.r26.u64 = ctx.r26.u64 | 134;
loc_82EAF6B4:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eaf6cc
	if (ctx.cr6.lt) goto loc_82EAF6CC;
loc_82EAF6BC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82eaf67c
	if (ctx.cr6.lt) goto loc_82EAF67C;
loc_82EAF6CC:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// lwz r10,64(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r7,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r7.u32);
	// stw r23,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r23.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r5.u32);
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// stw r14,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r14.u32);
	// beq cr6,0x82eafd38
	if (ctx.cr6.eq) goto loc_82EAFD38;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82eaf708
	if (ctx.cr6.eq) goto loc_82EAF708;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// bne cr6,0x82eaf73c
	if (!ctx.cr6.eq) goto loc_82EAF73C;
loc_82EAF708:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bge cr6,0x82eaf73c
	if (!ctx.cr6.lt) goto loc_82EAF73C;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// blt cr6,0x82eaf73c
	if (ctx.cr6.lt) goto loc_82EAF73C;
	// cmplwi cr6,r6,24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 24, ctx.xer);
	// beq cr6,0x82eaf73c
	if (ctx.cr6.eq) goto loc_82EAF73C;
	// rlwinm r10,r26,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82eaf73c
	if (ctx.cr6.eq) goto loc_82EAF73C;
	// add r11,r30,r20
	ctx.r11.u64 = ctx.r30.u64 + ctx.r20.u64;
	// stw r5,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r5.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAF73C:
	// stw r14,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r14.u32);
	// mullw r3,r11,r23
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EAF74C;
	sub_82299698(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r22,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r22.u32);
	// bne 0x82eaf764
	if (!ctx.cr0.eq) goto loc_82EAF764;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eafd3c
	goto loc_82EAFD3C;
loc_82EAF764:
	// add r30,r30,r20
	ctx.r30.u64 = ctx.r30.u64 + ctx.r20.u64;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// add r25,r20,r25
	ctx.r25.u64 = ctx.r20.u64 + ctx.r25.u64;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bge cr6,0x82eaf788
	if (!ctx.cr6.lt) goto loc_82EAF788;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// b 0x82eaf798
	goto loc_82EAF798;
loc_82EAF788:
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// neg r15,r11
	ctx.r15.s64 = -ctx.r11.s64;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r31,r10,r22
	ctx.r31.u64 = ctx.r10.u64 + ctx.r22.u64;
loc_82EAF798:
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// add r23,r11,r22
	ctx.r23.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r19,2
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 2, ctx.xer);
	// bne cr6,0x82eaf920
	if (!ctx.cr6.eq) goto loc_82EAF920;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
loc_82EAF7B4:
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82eaf1b0
	if (!ctx.cr6.lt) goto loc_82EAF1B0;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82eaf8bc
	if (!ctx.cr0.eq) goto loc_82EAF8BC;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82eaf8b0
	if (ctx.cr6.lt) goto loc_82EAF8B0;
	// beq cr6,0x82eaf8a8
	if (ctx.cr6.eq) goto loc_82EAF8A8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82eaf884
	if (ctx.cr6.lt) goto loc_82EAF884;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eaf828
	if (ctx.cr6.eq) goto loc_82EAF828;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82eaf1b0
	if (!ctx.cr6.lt) goto loc_82EAF1B0;
loc_82EAF828:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82eaf868
	if (!ctx.cr6.gt) goto loc_82EAF868;
loc_82EAF834:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// beq 0x82eaf850
	if (ctx.cr0.eq) goto loc_82EAF850;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// b 0x82eaf854
	goto loc_82EAF854;
loc_82EAF850:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_82EAF854:
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82eaf834
	if (ctx.cr6.lt) goto loc_82EAF834;
loc_82EAF868:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82eaf910
	goto loc_82EAF910;
loc_82EAF884:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82eaf1b0
	if (!ctx.cr6.lt) goto loc_82EAF1B0;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82eaf90c
	goto loc_82EAF90C;
loc_82EAF8A8:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// b 0x82eaf910
	goto loc_82EAF910;
loc_82EAF8B0:
	// add r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 + ctx.r15.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82eaf910
	goto loc_82EAF910;
loc_82EAF8BC:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82eaf908
	if (!ctx.cr6.gt) goto loc_82EAF908;
loc_82EAF8DC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// beq 0x82eaf8f0
	if (ctx.cr0.eq) goto loc_82EAF8F0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// b 0x82eaf8f4
	goto loc_82EAF8F4;
loc_82EAF8F0:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_82EAF8F4:
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82eaf8dc
	if (ctx.cr6.lt) goto loc_82EAF8DC;
loc_82EAF908:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
loc_82EAF90C:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82EAF910:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eaf7b4
	if (!ctx.cr6.lt) goto loc_82EAF7B4;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAF920:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// bne cr6,0x82eafa28
	if (!ctx.cr6.eq) goto loc_82EAFA28;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
loc_82EAF930:
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82eaf1b0
	if (!ctx.cr6.lt) goto loc_82EAF1B0;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82eaf9f0
	if (!ctx.cr0.eq) goto loc_82EAF9F0;
	// lbz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82eaf9e4
	if (ctx.cr6.lt) goto loc_82EAF9E4;
	// beq cr6,0x82eaf9dc
	if (ctx.cr6.eq) goto loc_82EAF9DC;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x82eaf9b8
	if (ctx.cr6.lt) goto loc_82EAF9B8;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// add r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// add r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAF9A0;
	sub_82CB1160(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82eafa18
	goto loc_82EAFA18;
loc_82EAF9B8:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82eaf1b0
	if (!ctx.cr6.lt) goto loc_82EAF1B0;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82eafa14
	goto loc_82EAFA14;
loc_82EAF9DC:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// b 0x82eafa18
	goto loc_82EAFA18;
loc_82EAF9E4:
	// add r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 + ctx.r15.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82eafa18
	goto loc_82EAFA18;
loc_82EAF9F0:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// add r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82cb16f0
	ctx.lr = 0x82EAFA10;
	sub_82CB16F0(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
loc_82EAFA14:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82EAFA18:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eaf930
	if (!ctx.cr6.lt) goto loc_82EAF930;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAFA28:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82eafa94
	if (!ctx.cr6.eq) goto loc_82EAFA94;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAFA40:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eafa80
	if (ctx.cr6.eq) goto loc_82EAFA80;
loc_82EAFA54:
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// subfic r8,r8,7
	ctx.xer.ca = ctx.r8.u32 <= 7;
	ctx.r8.s64 = 7 - ctx.r8.s64;
	// lbzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eafa54
	if (ctx.cr6.lt) goto loc_82EAFA54;
loc_82EAFA80:
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eafa40
	if (!ctx.cr6.lt) goto loc_82EAFA40;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAFA94:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bne cr6,0x82eafafc
	if (!ctx.cr6.eq) goto loc_82EAFAFC;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAFAA8:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82eafae8
	if (ctx.cr6.eq) goto loc_82EAFAE8;
loc_82EAFABC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// beq 0x82eafad4
	if (ctx.cr0.eq) goto loc_82EAFAD4;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// b 0x82eafad8
	goto loc_82EAFAD8;
loc_82EAFAD4:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_82EAFAD8:
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eafabc
	if (ctx.cr6.lt) goto loc_82EAFABC;
loc_82EAFAE8:
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eafaa8
	if (!ctx.cr6.lt) goto loc_82EAFAA8;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAFAFC:
	// cmplwi cr6,r4,24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24, ctx.xer);
	// bne cr6,0x82eafb70
	if (!ctx.cr6.eq) goto loc_82EAFB70;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAFB10:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eafb5c
	if (ctx.cr6.eq) goto loc_82EAFB5C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82EAFB2C:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r6,255
	ctx.r6.s64 = 255;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// stb r6,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82eafb2c
	if (!ctx.cr0.eq) goto loc_82EAFB2C;
loc_82EAFB5C:
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eafb10
	if (!ctx.cr6.lt) goto loc_82EAFB10;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAFB70:
	// rlwinm r11,r26,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82eafcac
	if (!ctx.cr6.eq) goto loc_82EAFCAC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// lfs f13,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
loc_82EAFB98:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82eafc00
	if (ctx.cr6.eq) goto loc_82EAFC00;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eafbe0
	if (!ctx.cr0.eq) goto loc_82EAFBE0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EAFBC0:
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82eafbc0
	if (ctx.cr0.eq) goto loc_82EAFBC0;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_82EAFBE0:
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_82EAFC00:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82eafb98
	if (ctx.cr6.lt) goto loc_82EAFB98;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82eafc44
	if (!ctx.cr6.eq) goto loc_82EAFC44;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x82eafc44
	if (!ctx.cr6.eq) goto loc_82EAFC44;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x82eafc44
	if (!ctx.cr6.eq) goto loc_82EAFC44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r14.u32);
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82EAFC44:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAFC54:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eafd28
	if (ctx.cr6.eq) goto loc_82EAFD28;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82EAFC70:
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// beq cr6,0x82eafcb8
	if (ctx.cr6.eq) goto loc_82EAFCB8;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// bne cr6,0x82eafcc0
	if (!ctx.cr6.eq) goto loc_82EAFCC0;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82eafcc0
	goto loc_82EAFCC0;
loc_82EAFC8C:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAFCA4;
	sub_82CB1160(ctx, base);
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
loc_82EAFCAC:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eafc8c
	if (!ctx.cr6.lt) goto loc_82EAFC8C;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAFCB8:
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
loc_82EAFCC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EAFCC4:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eafd08
	if (ctx.cr6.eq) goto loc_82EAFD08;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// srw r3,r6,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r3.u8 & 0x3F));
	// and r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ctx.r10.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x82eafd0c
	goto loc_82EAFD0C;
loc_82EAFD08:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82EAFD0C:
	// stfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82eafcc4
	if (ctx.cr6.lt) goto loc_82EAFCC4;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x82eafc70
	if (!ctx.cr0.eq) goto loc_82EAFC70;
loc_82EAFD28:
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eafc54
	if (!ctx.cr6.lt) goto loc_82EAFC54;
loc_82EAFD38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAFD3C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAFD44"))) PPC_WEAK_FUNC(sub_82EAFD44);
PPC_FUNC_IMPL(__imp__sub_82EAFD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFD48"))) PPC_WEAK_FUNC(sub_82EAFD48);
PPC_FUNC_IMPL(__imp__sub_82EAFD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EAFD50;
	__savegprlr_23(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// li r5,108
	ctx.r5.s64 = 108;
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82EAFD88;
	sub_82CB16F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82eaff38
	if (ctx.cr6.gt) goto loc_82EAFF38;
	// beq cr6,0x82eafef0
	if (ctx.cr6.eq) goto loc_82EAFEF0;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eafec4
	if (ctx.cr6.eq) goto loc_82EAFEC4;
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eafea0
	if (ctx.cr0.eq) goto loc_82EAFEA0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82eafe90
	if (ctx.cr6.eq) goto loc_82EAFE90;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82eafe5c
	if (ctx.cr6.eq) goto loc_82EAFE5C;
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// beq cr6,0x82eafe48
	if (ctx.cr6.eq) goto loc_82EAFE48;
	// addis r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -33030144;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eafe24
	if (ctx.cr0.eq) goto loc_82EAFE24;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82eaff8c
	if (!ctx.cr6.eq) goto loc_82EAFF8C;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1023
	ctx.r9.s64 = 1023;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r10,16368
	ctx.r10.s64 = 1072693248;
loc_82EAFDFC:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r11,r11,64512
	ctx.r11.u64 = ctx.r11.u64 | 64512;
loc_82EAFE0C:
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// b 0x82eb0068
	goto loc_82EB0068;
loc_82EAFE24:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,255
	ctx.r9.s64 = 255;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 65280;
	// lis r9,-256
	ctx.r9.s64 = -16777216;
	// b 0x82eafe0c
	goto loc_82EAFE0C;
loc_82EAFE48:
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r9,16368
	ctx.r9.s64 = 1072693248;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r10,1023
	ctx.r10.s64 = 1023;
	// b 0x82eafdfc
	goto loc_82EAFDFC;
loc_82EAFE5C:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,3840
	ctx.r9.s64 = 3840;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r8,240
	ctx.r8.s64 = 240;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r9,r11,61440
	ctx.r9.u64 = ctx.r11.u64 | 61440;
loc_82EAFE7C:
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// b 0x82eb0064
	goto loc_82EB0064;
loc_82EAFE90:
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82eb0068
	goto loc_82EB0068;
loc_82EAFEA0:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,31744
	ctx.r9.s64 = 31744;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r8,992
	ctx.r8.s64 = 992;
	// li r10,31
	ctx.r10.s64 = 31;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// b 0x82eafe7c
	goto loc_82EAFE7C;
loc_82EAFEC4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// ori r8,r11,65280
	ctx.r8.u64 = ctx.r11.u64 | 65280;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// b 0x82eb0064
	goto loc_82EB0064;
loc_82EAFEF0:
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r27,1024
	ctx.r27.s64 = 1024;
	// sth r10,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r10.u16);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r9,r1,225
	ctx.r9.s64 = ctx.r1.s64 + 225;
loc_82EAFF10:
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r31,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r31.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// cmplwi cr6,r8,256
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 256, ctx.xer);
	// stb r7,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// blt cr6,0x82eaff10
	if (ctx.cr6.lt) goto loc_82EAFF10;
	// b 0x82eb0070
	goto loc_82EB0070;
loc_82EAFF38:
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// ori r10,r10,24
	ctx.r10.u64 = ctx.r10.u64 | 24;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eb003c
	if (ctx.cr6.eq) goto loc_82EB003C;
	// addis r11,r11,-10280
	ctx.r11.s64 = ctx.r11.s64 + -673710080;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb0030
	if (ctx.cr0.eq) goto loc_82EB0030;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82eb0010
	if (ctx.cr6.eq) goto loc_82EB0010;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82eafe90
	if (ctx.cr6.eq) goto loc_82EAFE90;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82eafff4
	if (ctx.cr6.eq) goto loc_82EAFFF4;
	// lis r10,504
	ctx.r10.s64 = 33030144;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eaffc4
	if (ctx.cr6.eq) goto loc_82EAFFC4;
	// lis r10,1272
	ctx.r10.s64 = 83361792;
	// ori r10,r10,22
	ctx.r10.u64 = ctx.r10.u64 | 22;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eaff98
	if (ctx.cr6.eq) goto loc_82EAFF98;
loc_82EAFF8C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb0284
	goto loc_82EB0284;
loc_82EAFF98:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// b 0x82eb0068
	goto loc_82EB0068;
loc_82EAFFC4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r8,r11,65280
	ctx.r8.u64 = ctx.r11.u64 | 65280;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r7,255
	ctx.r7.s64 = 16711680;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r11,52
	ctx.r11.s64 = 52;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// b 0x82eb0068
	goto loc_82EB0068;
loc_82EAFFF4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,3840
	ctx.r10.s64 = 3840;
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x82eb0058
	goto loc_82EB0058;
loc_82EB0010:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,63488
	ctx.r11.u64 = ctx.r11.u64 | 63488;
	// li r9,2016
	ctx.r9.s64 = 2016;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r8,31
	ctx.r8.s64 = 31;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x82eb0058
	goto loc_82EB0058;
loc_82EB0030:
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// b 0x82eb0064
	goto loc_82EB0064;
loc_82EB003C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82EB0058:
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
loc_82EB0064:
	// li r10,16
	ctx.r10.s64 = 16;
loc_82EB0068:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r10,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r10.u16);
loc_82EB0070:
	// rlwinm r29,r10,29,19,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFF;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mullw r28,r10,r29
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// sth r31,12(r9)
	PPC_STORE_U16(ctx.r9.u32 + 12, ctx.r31.u16);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 3;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r26,r10,0,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// li r8,2834
	ctx.r8.s64 = 2834;
	// mullw r10,r7,r26
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,14
	ctx.r9.s64 = ctx.r9.s64 + 14;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,218(r1)
	PPC_STORE_U32(ctx.r1.u32 + 218, ctx.r9.u32);
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// li r9,19778
	ctx.r9.s64 = 19778;
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// sth r9,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r9.u16);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// subf r25,r10,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r11,r25,r10
	ctx.r11.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r11,210(r1)
	PPC_STORE_U32(ctx.r1.u32 + 210, ctx.r11.u32);
	// bl 0x82ead860
	ctx.lr = 0x82EB0100;
	sub_82EAD860(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eadc18
	ctx.lr = 0x82EB010C;
	sub_82EADC18(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82eb0130
	if (ctx.cr6.eq) goto loc_82EB0130;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB0128;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaff8c
	if (ctx.cr0.lt) goto loc_82EAFF8C;
loc_82EB0130:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb0154
	if (ctx.cr6.eq) goto loc_82EB0154;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB014C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaff8c
	if (ctx.cr0.lt) goto loc_82EAFF8C;
loc_82EB0154:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb0178
	if (ctx.cr6.eq) goto loc_82EB0178;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB0170;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaff8c
	if (ctx.cr0.lt) goto loc_82EAFF8C;
loc_82EB0178:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB018C;
	sub_82299698(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82eb01a0
	if (!ctx.cr0.eq) goto loc_82EB01A0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb0284
	goto loc_82EB0284;
loc_82EB01A0:
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83204390
	ctx.lr = 0x82EB01C0;
	sub_83204390(ctx, base);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mullw r11,r8,r29
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82eb023c
	goto loc_82EB023C;
loc_82EB01F4:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB0208;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb028c
	if (ctx.cr0.lt) goto loc_82EB028C;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82eb0234
	if (!ctx.cr6.lt) goto loc_82EB0234;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// subf r5,r28,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r28.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB022C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb028c
	if (ctx.cr0.lt) goto loc_82EB028C;
loc_82EB0234:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82EB023C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82eb01f4
	if (!ctx.cr6.lt) goto loc_82EB01F4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eb0268
	if (ctx.cr6.eq) goto loc_82EB0268;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB0260;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb028c
	if (ctx.cr0.lt) goto loc_82EB028C;
loc_82EB0268:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb0280
	if (ctx.cr6.eq) goto loc_82EB0280;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB0280;
	sub_822996C0(ctx, base);
loc_82EB0280:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB0284:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82EB028C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eaff8c
	if (ctx.cr6.eq) goto loc_82EAFF8C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB02A4;
	sub_822996C0(ctx, base);
	// b 0x82eaff8c
	goto loc_82EAFF8C;
}

__attribute__((alias("__imp__sub_82EB02A8"))) PPC_WEAK_FUNC(sub_82EB02A8);
PPC_FUNC_IMPL(__imp__sub_82EB02A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB02B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-2112(r1)
	ea = -2112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,2132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2132, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,2140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2140, ctx.r4.u32);
	// stw r5,2148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2148, ctx.r5.u32);
	// beq cr6,0x82eb0584
	if (ctx.cr6.eq) goto loc_82EB0584;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eb0584
	if (ctx.cr6.eq) goto loc_82EB0584;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82f0c398
	ctx.lr = 0x82EB02D8;
	sub_82F0C398(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r11,r11,-10768
	ctx.r11.s64 = ctx.r11.s64 + -10768;
	// addi r10,r10,-10712
	ctx.r10.s64 = ctx.r10.s64 + -10712;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stw r11,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r11.u32);
	// stw r10,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r10.u32);
	// bl 0x82ff2180
	ctx.lr = 0x82EB02FC;
	sub_82FF2180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb03d8
	if (!ctx.cr0.eq) goto loc_82EB03D8;
	// li r5,472
	ctx.r5.s64 = 472;
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f08b20
	ctx.lr = 0x82EB0314;
	sub_82F08B20(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,2148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2148);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r7,2140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2140);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r6,-32021
	ctx.r6.s64 = -2098528256;
	// lis r5,-32021
	ctx.r5.s64 = -2098528256;
	// lis r4,-32015
	ctx.r4.s64 = -2098135040;
	// lis r3,-32021
	ctx.r3.s64 = -2098528256;
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// addi r10,r9,-10656
	ctx.r10.s64 = ctx.r9.s64 + -10656;
	// stw r7,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r4,-17160
	ctx.r11.s64 = ctx.r4.s64 + -17160;
	// addi r10,r3,-10584
	ctx.r10.s64 = ctx.r3.s64 + -10584;
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
	// addi r9,r6,-10648
	ctx.r9.s64 = ctx.r6.s64 + -10648;
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// addi r7,r5,-10616
	ctx.r7.s64 = ctx.r5.s64 + -10616;
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r7,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r7.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// bl 0x82f09230
	ctx.lr = 0x82EB03A0;
	sub_82F09230(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-10704
	ctx.r11.s64 = ctx.r11.s64 + -10704;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r11.u32);
	// bl 0x82f09788
	ctx.lr = 0x82EB03BC;
	sub_82F09788(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ori r29,r10,2
	ctx.r29.u64 = ctx.r10.u64 | 2;
	// beq cr6,0x82eb0404
	if (ctx.cr6.eq) goto loc_82EB0404;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82eb03e4
	if (ctx.cr6.eq) goto loc_82EB03E4;
loc_82EB03D8:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x82eb0574
	goto loc_82EB0574;
loc_82EB03E4:
	// lwz r31,2132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2132);
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// ori r10,r10,134
	ctx.r10.u64 = ctx.r10.u64 | 134;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// b 0x82eb0414
	goto loc_82EB0414;
loc_82EB0404:
	// lwz r31,2132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2132);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82EB0414:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82eb0570
	if (ctx.cr6.eq) goto loc_82EB0570;
	// lis r11,9345
	ctx.r11.s64 = 612433920;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB0450;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82eb048c
	if (ctx.cr0.eq) goto loc_82EB048C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82eb0498
	if (!ctx.cr0.eq) goto loc_82EB0498;
loc_82EB048C:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eb0574
	goto loc_82EB0574;
loc_82EB0498:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82eb04ec
	if (!ctx.cr6.eq) goto loc_82EB04EC;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82eb04d8
	goto loc_82EB04D8;
loc_82EB04B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f093b0
	ctx.lr = 0x82EB04C0;
	sub_82F093B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82cb1160
	ctx.lr = 0x82EB04D0;
	sub_82CB1160(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82EB04D8:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb04b0
	if (ctx.cr6.lt) goto loc_82EB04B0;
	// b 0x82eb0568
	goto loc_82EB0568;
loc_82EB04EC:
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,6
	ctx.r10.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82eb0568
	if (!ctx.cr6.eq) goto loc_82EB0568;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82eb0558
	goto loc_82EB0558;
loc_82EB0504:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f093b0
	ctx.lr = 0x82EB0514;
	sub_82F093B0(ctx, base);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// b 0x82eb0550
	goto loc_82EB0550;
loc_82EB0528:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82EB0550:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb0528
	if (ctx.cr6.lt) goto loc_82EB0528;
loc_82EB0558:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb0504
	if (ctx.cr6.lt) goto loc_82EB0504;
loc_82EB0568:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f090d8
	ctx.lr = 0x82EB0570;
	sub_82F090D8(ctx, base);
loc_82EB0570:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82EB0574:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f08c40
	ctx.lr = 0x82EB057C;
	sub_82F08C40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eb058c
	goto loc_82EB058C;
loc_82EB0584:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB058C:
	// addi r1,r1,2112
	ctx.r1.s64 = ctx.r1.s64 + 2112;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0594"))) PPC_WEAK_FUNC(sub_82EB0594);
PPC_FUNC_IMPL(__imp__sub_82EB0594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0598"))) PPC_WEAK_FUNC(sub_82EB0598);
PPC_FUNC_IMPL(__imp__sub_82EB0598) {
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
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82299698
	ctx.lr = 0x82EB05B8;
	sub_82299698(ctx, base);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EB05DC"))) PPC_WEAK_FUNC(sub_82EB05DC);
PPC_FUNC_IMPL(__imp__sub_82EB05DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB05E0"))) PPC_WEAK_FUNC(sub_82EB05E0);
PPC_FUNC_IMPL(__imp__sub_82EB05E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EB05E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-2064(r1)
	ea = -2064 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// stw r3,2084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2084, ctx.r3.u32);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,1432
	ctx.r11.s64 = ctx.r11.s64 + 1432;
	// addi r10,r10,-10576
	ctx.r10.s64 = ctx.r10.s64 + -10576;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r9,r9,-10496
	ctx.r9.s64 = ctx.r9.s64 + -10496;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82ea1f20
	ctx.lr = 0x82EB0630;
	sub_82EA1F20(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,384
	ctx.r5.s64 = 384;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82f0c408
	ctx.lr = 0x82EB064C;
	sub_82F0C408(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82f0c398
	ctx.lr = 0x82EB0654;
	sub_82F0C398(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r11,r11,-10768
	ctx.r11.s64 = ctx.r11.s64 + -10768;
	// addi r10,r10,-10712
	ctx.r10.s64 = ctx.r10.s64 + -10712;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r11,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r11.u32);
	// stw r10,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r10.u32);
	// bl 0x82ff2180
	ctx.lr = 0x82EB0678;
	sub_82FF2180(ctx, base);
	// lis r27,9345
	ctx.r27.s64 = 612433920;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb0690
	if (ctx.cr0.eq) goto loc_82EB0690;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x82eb0704
	goto loc_82EB0704;
loc_82EB0690:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x82f0dcf8
	ctx.lr = 0x82EB06A0;
	sub_82F0DCF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r31,2084(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2084);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfd f0,-3368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3368);
	// stfd f0,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f0.u64);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x82f0c970
	ctx.lr = 0x82EB06DC;
	sub_82F0C970(ctx, base);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mulli r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 * 3;
	// bl 0x82299698
	ctx.lr = 0x82EB06F0;
	sub_82299698(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb070c
	if (!ctx.cr0.eq) goto loc_82EB070C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
loc_82EB0704:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82eb07d8
	goto loc_82EB07D8;
loc_82EB070C:
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r11,r7,r6
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r5,r8
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82eb07c8
	if (!ctx.cr6.lt) goto loc_82EB07C8;
loc_82EB0748:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb07a8
	if (!ctx.cr6.gt) goto loc_82EB07A8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82EB0760:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r8,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r8,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stbx r6,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r5,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r4,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb0760
	if (ctx.cr6.lt) goto loc_82EB0760;
loc_82EB07A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f0ca50
	ctx.lr = 0x82EB07B8;
	sub_82F0CA50(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb0748
	if (ctx.cr6.lt) goto loc_82EB0748;
loc_82EB07C8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f0c5a8
	ctx.lr = 0x82EB07D0;
	sub_82F0C5A8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f0c520
	ctx.lr = 0x82EB07D8;
	sub_82F0C520(ctx, base);
loc_82EB07D8:
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822996c0
	ctx.lr = 0x82EB07E8;
	sub_822996C0(ctx, base);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822996c0
	ctx.lr = 0x82EB07F8;
	sub_822996C0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0804"))) PPC_WEAK_FUNC(sub_82EB0804);
PPC_FUNC_IMPL(__imp__sub_82EB0804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0808"))) PPC_WEAK_FUNC(sub_82EB0808);
PPC_FUNC_IMPL(__imp__sub_82EB0808) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 3);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,3(r3)
	PPC_STORE_U16(ctx.r3.u32 + 3, ctx.r11.u16);
	// lhz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 5);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,5(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5, ctx.r11.u16);
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB0884"))) PPC_WEAK_FUNC(sub_82EB0884);
PPC_FUNC_IMPL(__imp__sub_82EB0884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0888"))) PPC_WEAK_FUNC(sub_82EB0888);
PPC_FUNC_IMPL(__imp__sub_82EB0888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EB0890;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r31,18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 18, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x82cb1160
	ctx.lr = 0x82EB08C0;
	sub_82CB1160(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb0808
	ctx.lr = 0x82EB08CC;
	sub_82EB0808(ctx, base);
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// rlwinm. r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x82eb09d4
	if (!ctx.cr0.eq) goto loc_82EB09D4;
	// lbz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// andi. r9,r11,244
	ctx.r9.u64 = ctx.r11.u64 & 244;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eb09d4
	if (!ctx.cr0.eq) goto loc_82EB09D4;
	// lhz r19,108(r1)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// cmplwi r19,0
	ctx.cr0.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq 0x82eb09d4
	if (ctx.cr0.eq) goto loc_82EB09D4;
	// lhz r15,110(r1)
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// cmplwi r15,0
	ctx.cr0.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// beq 0x82eb09d4
	if (ctx.cr0.eq) goto loc_82EB09D4;
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// ori r24,r8,67
	ctx.r24.u64 = ctx.r8.u64 | 67;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r9,r9,134
	ctx.r9.u64 = ctx.r9.u64 | 134;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r8,r6,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x82eb0978
	if (ctx.cr6.eq) goto loc_82EB0978;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82eb0974
	if (ctx.cr6.eq) goto loc_82EB0974;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82eb0968
	if (ctx.cr6.eq) goto loc_82EB0968;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x82eb095c
	if (ctx.cr6.eq) goto loc_82EB095C;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82eb09d4
	if (!ctx.cr6.eq) goto loc_82EB09D4;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// b 0x82eb0978
	goto loc_82EB0978;
loc_82EB095C:
	// lis r25,10280
	ctx.r25.s64 = 673710080;
	// ori r25,r25,134
	ctx.r25.u64 = ctx.r25.u64 | 134;
	// b 0x82eb0978
	goto loc_82EB0978;
loc_82EB0968:
	// lis r25,6184
	ctx.r25.s64 = 405274624;
	// ori r25,r25,67
	ctx.r25.u64 = ctx.r25.u64 | 67;
	// b 0x82eb0978
	goto loc_82EB0978;
loc_82EB0974:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_82EB0978:
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82eb09fc
	if (ctx.cr6.eq) goto loc_82EB09FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82eb09b0
	if (ctx.cr6.eq) goto loc_82EB09B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82eb09d4
	if (!ctx.cr6.eq) goto loc_82EB09D4;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82eb09d4
	if (!ctx.cr6.eq) goto loc_82EB09D4;
	// lis r24,10240
	ctx.r24.s64 = 671088640;
	// ori r24,r24,2
	ctx.r24.u64 = ctx.r24.u64 | 2;
	// b 0x82eb0a1c
	goto loc_82EB0A1C;
loc_82EB09B0:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82eb0a1c
	if (ctx.cr6.eq) goto loc_82EB0A1C;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82eb09f0
	if (ctx.cr6.eq) goto loc_82EB09F0;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x82eb09e4
	if (ctx.cr6.eq) goto loc_82EB09E4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82eb0a18
	if (ctx.cr6.eq) goto loc_82EB0A18;
loc_82EB09D4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB09DC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82EB09E4:
	// lis r24,10280
	ctx.r24.s64 = 673710080;
	// ori r24,r24,134
	ctx.r24.u64 = ctx.r24.u64 | 134;
	// b 0x82eb0a1c
	goto loc_82EB0A1C;
loc_82EB09F0:
	// lis r24,6184
	ctx.r24.s64 = 405274624;
	// ori r24,r24,67
	ctx.r24.u64 = ctx.r24.u64 | 67;
	// b 0x82eb0a1c
	goto loc_82EB0A1C;
loc_82EB09FC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb09d4
	if (ctx.cr6.eq) goto loc_82EB09D4;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82eb09d4
	if (!ctx.cr6.eq) goto loc_82EB09D4;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82EB0A18:
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
loc_82EB0A1C:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r20,r11,29,3,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bne cr6,0x82eb0a38
	if (!ctx.cr6.eq) goto loc_82EB0A38;
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 3, ctx.xer);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// bne cr6,0x82eb0a3c
	if (!ctx.cr6.eq) goto loc_82EB0A3C;
loc_82EB0A38:
	// li r22,4
	ctx.r22.s64 = 4;
loc_82EB0A3C:
	// rlwinm r7,r7,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// lbz r9,113(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r10,r31,-18
	ctx.r10.s64 = ctx.r31.s64 + -18;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// rlwinm r17,r9,27,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r16,r7,28,31,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// lhz r31,101(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 101);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r26,r11,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mullw r27,r31,r8
	ctx.r27.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// addi r28,r9,18
	ctx.r28.s64 = ctx.r9.s64 + 18;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// li r21,255
	ctx.r21.s64 = 255;
	// ori r18,r10,3
	ctx.r18.u64 = ctx.r10.u64 | 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0c28
	if (ctx.cr6.eq) goto loc_82EB0C28;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0c28
	if (ctx.cr6.eq) goto loc_82EB0C28;
	// lhz r30,99(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 99);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bgt cr6,0x82eb09d4
	if (ctx.cr6.gt) goto loc_82EB09D4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x82299698
	ctx.lr = 0x82EB0AC0;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// bne 0x82eb0ad8
	if (!ctx.cr0.eq) goto loc_82EB0AD8;
loc_82EB0ACC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb09dc
	goto loc_82EB09DC;
loc_82EB0AD8:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stw r23,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r23.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82cb16f0
	ctx.lr = 0x82EB0AE8;
	sub_82CB16F0(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82eb0c0c
	if (!ctx.cr6.lt) goto loc_82EB0C0C;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r31,r25,0,26,22
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82EB0B20:
	// subf. r5,r18,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r18.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82eb0b9c
	if (ctx.cr0.eq) goto loc_82EB0B9C;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// beq cr6,0x82eb0b80
	if (ctx.cr6.eq) goto loc_82EB0B80;
	// addis r5,r5,-4096
	ctx.r5.s64 = ctx.r5.s64 + -268435456;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82eb0b5c
	if (ctx.cr0.eq) goto loc_82EB0B5C;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bne cr6,0x82eb0bd0
	if (!ctx.cr6.eq) goto loc_82EB0BD0;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x82eb0bd0
	goto loc_82EB0BD0;
loc_82EB0B5C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// rlwinm r7,r8,20,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x7;
	// rlwinm r6,r8,25,24,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xF8;
	// rlwinm r5,r8,25,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x7;
	// rlwinm r25,r8,30,24,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xF8;
	// rlwinm r15,r8,30,29,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x7;
	// rlwinm r14,r8,3,24,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// b 0x82eb0bc0
	goto loc_82EB0BC0;
loc_82EB0B80:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// rlwinm r8,r6,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r6,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// b 0x82eb0bd0
	goto loc_82EB0BD0;
loc_82EB0B9C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r8,r9,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r7,r9,20,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x7;
	// rlwinm r6,r9,25,24,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0xF8;
	// rlwinm r5,r9,25,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7;
	// rlwinm r25,r9,30,24,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xF8;
	// rlwinm r15,r9,30,29,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7;
	// rlwinm r14,r9,3,24,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// mulli r9,r8,255
	ctx.r9.s64 = ctx.r8.s64 * 255;
loc_82EB0BC0:
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r6,r15,r14
	ctx.r6.u64 = ctx.r15.u64 | ctx.r14.u64;
	// or r7,r5,r25
	ctx.r7.u64 = ctx.r5.u64 | ctx.r25.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82EB0BD0:
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// or r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 | ctx.r3.u64;
	// blt cr6,0x82eb0b20
	if (ctx.cr6.lt) goto loc_82EB0B20;
	// lwz r15,84(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r14,0
	ctx.r14.s64 = 0;
	// bne cr6,0x82eb0c28
	if (!ctx.cr6.eq) goto loc_82EB0C28;
loc_82EB0C0C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82eb0c20
	goto loc_82EB0C20;
loc_82EB0C18:
	// stb r21,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r21.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82EB0C20:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82eb0c18
	if (ctx.cr6.lt) goto loc_82EB0C18;
loc_82EB0C28:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mullw r10,r15,r19
	ctx.r10.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r19.s32);
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stw r19,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r19.u32);
	// stw r15,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r15.u32);
	// stw r14,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r14.u32);
	// stw r23,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r23.u32);
	// mullw r9,r19,r22
	ctx.r9.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r22.s32);
	// stw r9,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r9.u32);
	// subf r24,r27,r26
	ctx.r24.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mullw r3,r10,r22
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0f38
	if (ctx.cr6.eq) goto loc_82EB0F38;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eb0ca8
	if (!ctx.cr6.eq) goto loc_82EB0CA8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eb0ca8
	if (!ctx.cr6.eq) goto loc_82EB0CA8;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82eb0ca8
	if (ctx.cr6.eq) goto loc_82EB0CA8;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82eb0ca8
	if (ctx.cr6.eq) goto loc_82EB0CA8;
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 3, ctx.xer);
	// beq cr6,0x82eb0ca8
	if (ctx.cr6.eq) goto loc_82EB0CA8;
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stw r14,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r14.u32);
	// b 0x82eb0e38
	goto loc_82EB0E38;
loc_82EB0CA8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EB0CB0;
	sub_82299698(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb0acc
	if (ctx.cr0.eq) goto loc_82EB0ACC;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// stw r23,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r23.u32);
	// beq cr6,0x82eb0cd0
	if (ctx.cr6.eq) goto loc_82EB0CD0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82eb0ce0
	goto loc_82EB0CE0;
loc_82EB0CD0:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r10,r15,-1
	ctx.r10.s64 = ctx.r15.s64 + -1;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r25,r11,r3
	ctx.r25.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82EB0CE0:
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82eb0e38
	if (ctx.cr6.eq) goto loc_82EB0E38;
loc_82EB0CEC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82eb0cfc
	if (ctx.cr6.eq) goto loc_82EB0CFC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82eb0d08
	goto loc_82EB0D08;
loc_82EB0CFC:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82EB0D08:
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82eb0e14
	if (ctx.cr6.eq) goto loc_82EB0E14;
loc_82EB0D14:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0d58
	if (ctx.cr6.eq) goto loc_82EB0D58;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// subf r11,r26,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r26.s64;
	// clrlwi r10,r9,25
	ctx.r10.u64 = ctx.r9.u32 & 0x7F;
	// rlwinm r27,r9,0,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// blt cr6,0x82eb0d4c
	if (ctx.cr6.lt) goto loc_82EB0D4C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82EB0D4C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// b 0x82eb0d60
	goto loc_82EB0D60;
loc_82EB0D58:
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82EB0D60:
	// add r26,r30,r26
	ctx.r26.u64 = ctx.r30.u64 + ctx.r26.u64;
	// b 0x82eb0df4
	goto loc_82EB0DF4;
loc_82EB0D68:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0db4
	if (ctx.cr6.eq) goto loc_82EB0DB4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// b 0x82eb0dd0
	goto loc_82EB0DD0;
loc_82EB0DB4:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB0DC4;
	sub_82CB1160(ctx, base);
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 3, ctx.xer);
	// bne cr6,0x82eb0dd0
	if (!ctx.cr6.eq) goto loc_82EB0DD0;
	// stb r21,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r21.u8);
loc_82EB0DD0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82eb0de0
	if (!ctx.cr6.eq) goto loc_82EB0DE0;
	// add r28,r20,r28
	ctx.r28.u64 = ctx.r20.u64 + ctx.r28.u64;
	// subf r24,r20,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r20.s64;
loc_82EB0DE0:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82eb0df0
	if (ctx.cr6.eq) goto loc_82EB0DF0;
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// b 0x82eb0df4
	goto loc_82EB0DF4;
loc_82EB0DF0:
	// subf r31,r22,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r22.s64;
loc_82EB0DF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82eb0d68
	if (!ctx.cr6.eq) goto loc_82EB0D68;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82eb0e0c
	if (ctx.cr6.eq) goto loc_82EB0E0C;
	// add r28,r20,r28
	ctx.r28.u64 = ctx.r20.u64 + ctx.r28.u64;
	// subf r24,r20,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r20.s64;
loc_82EB0E0C:
	// cmplw cr6,r26,r19
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82eb0d14
	if (ctx.cr6.lt) goto loc_82EB0D14;
loc_82EB0E14:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82eb0e28
	if (ctx.cr6.eq) goto loc_82EB0E28;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x82eb0e2c
	goto loc_82EB0E2C;
loc_82EB0E28:
	// subf r25,r11,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r11.s64;
loc_82EB0E2C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r15
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82eb0cec
	if (ctx.cr6.lt) goto loc_82EB0CEC;
loc_82EB0E38:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// subf. r11,r18,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r18.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb0ec4
	if (ctx.cr0.eq) goto loc_82EB0EC4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82eb0f38
	if (!ctx.cr6.eq) goto loc_82EB0F38;
	// lwz r7,48(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82eb0eb4
	if (!ctx.cr6.lt) goto loc_82EB0EB4;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EB0E74:
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eb0ea4
	if (!ctx.cr6.lt) goto loc_82EB0EA4;
loc_82EB0E84:
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82eb0e9c
	if (!ctx.cr0.eq) goto loc_82EB0E9C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb0e84
	if (ctx.cr6.lt) goto loc_82EB0E84;
loc_82EB0E9C:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb0eb0
	if (ctx.cr6.lt) goto loc_82EB0EB0;
loc_82EB0EA4:
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb0e74
	if (ctx.cr6.lt) goto loc_82EB0E74;
loc_82EB0EB0:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
loc_82EB0EB4:
	// bne cr6,0x82eb0f38
	if (!ctx.cr6.eq) goto loc_82EB0F38;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,134
	ctx.r11.u64 = ctx.r11.u64 | 134;
	// b 0x82eb0f34
	goto loc_82EB0F34;
loc_82EB0EC4:
	// lwz r7,48(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82eb0f28
	if (!ctx.cr6.lt) goto loc_82EB0F28;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82EB0EE8:
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eb0f18
	if (!ctx.cr6.lt) goto loc_82EB0F18;
loc_82EB0EF8:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm. r5,r5,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82eb0f10
	if (!ctx.cr0.eq) goto loc_82EB0F10;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb0ef8
	if (ctx.cr6.lt) goto loc_82EB0EF8;
loc_82EB0F10:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb0f24
	if (ctx.cr6.lt) goto loc_82EB0F24;
loc_82EB0F18:
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb0ee8
	if (ctx.cr6.lt) goto loc_82EB0EE8;
loc_82EB0F24:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
loc_82EB0F28:
	// bne cr6,0x82eb0f38
	if (!ctx.cr6.eq) goto loc_82EB0F38;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,67
	ctx.r11.u64 = ctx.r11.u64 | 67;
loc_82EB0F34:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82EB0F38:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0f60
	if (ctx.cr6.eq) goto loc_82EB0F60;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb0f5c
	if (ctx.cr6.eq) goto loc_82EB0F5C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB0F58;
	sub_822996C0(ctx, base);
	// stw r14,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r14.u32);
loc_82EB0F5C:
	// stw r14,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r14.u32);
loc_82EB0F60:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb09dc
	goto loc_82EB09DC;
}

__attribute__((alias("__imp__sub_82EB0F68"))) PPC_WEAK_FUNC(sub_82EB0F68);
PPC_FUNC_IMPL(__imp__sub_82EB0F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82EB0F70;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x82eb1190
	if (ctx.cr6.lt) goto loc_82EB1190;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bne cr6,0x82eb1190
	if (!ctx.cr6.eq) goto loc_82EB1190;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,51
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51, ctx.xer);
	// bne cr6,0x82eb0fa4
	if (!ctx.cr6.eq) goto loc_82EB0FA4;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// b 0x82eb0fbc
	goto loc_82EB0FBC;
loc_82EB0FA4:
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bne cr6,0x82eb1190
	if (!ctx.cr6.eq) goto loc_82EB1190;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bne cr6,0x82eb1190
	if (!ctx.cr6.eq) goto loc_82EB1190;
	// li r21,0
	ctx.r21.s64 = 0;
loc_82EB0FBC:
	// addic. r29,r5,-2
	ctx.xer.ca = ctx.r5.u32 > 1;
	ctx.r29.s64 = ctx.r5.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r4,2
	ctx.r27.s64 = ctx.r4.s64 + 2;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,255
	ctx.r24.s64 = 255;
	// beq 0x82eb1190
	if (ctx.cr0.eq) goto loc_82EB1190;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EB0FDC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82eb0fec
	if (!ctx.cr6.eq) goto loc_82EB0FEC;
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 3, ctx.xer);
	// beq cr6,0x82eb11a0
	if (ctx.cr6.eq) goto loc_82EB11A0;
loc_82EB0FEC:
	// lbz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82cbdde8
	ctx.lr = 0x82EB0FF4;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb1028
	if (!ctx.cr0.eq) goto loc_82EB1028;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x82eb1034
	if (!ctx.cr6.eq) goto loc_82EB1034;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb1028
	if (ctx.cr6.eq) goto loc_82EB1028;
loc_82EB1010:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82eb1028
	if (ctx.cr6.eq) goto loc_82EB1028;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bne 0x82eb1010
	if (!ctx.cr0.eq) goto loc_82EB1010;
loc_82EB1028:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// b 0x82eb1188
	goto loc_82EB1188;
loc_82EB1034:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb107c
	if (ctx.cr6.eq) goto loc_82EB107C;
loc_82EB1040:
	// lbz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82cbdde8
	ctx.lr = 0x82EB1048;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb107c
	if (!ctx.cr0.eq) goto loc_82EB107C;
	// lbz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EB1058;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb1190
	if (ctx.cr0.eq) goto loc_82EB1190;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mulli r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 * 10;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r11,-48
	ctx.r31.s64 = ctx.r11.s64 + -48;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bne 0x82eb1040
	if (!ctx.cr0.eq) goto loc_82EB1040;
loc_82EB107C:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// blt cr6,0x82eb1178
	if (ctx.cr6.lt) goto loc_82EB1178;
	// beq cr6,0x82eb1118
	if (ctx.cr6.eq) goto loc_82EB1118;
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 3, ctx.xer);
	// blt cr6,0x82eb1110
	if (ctx.cr6.lt) goto loc_82EB1110;
	// beq cr6,0x82eb10ec
	if (ctx.cr6.eq) goto loc_82EB10EC;
	// cmplwi cr6,r23,5
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 5, ctx.xer);
	// blt cr6,0x82eb10cc
	if (ctx.cr6.lt) goto loc_82EB10CC;
	// bne cr6,0x82eb1184
	if (!ctx.cr6.eq) goto loc_82EB1184;
	// mulli r11,r31,255
	ctx.r11.s64 = ctx.r31.s64 * 255;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// divwu r11,r11,r24
	ctx.r11.u32 = ctx.r11.u32 / ctx.r24.u32;
	// twllei r24,0
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82eb1238
	if (ctx.cr6.eq) goto loc_82EB1238;
	// li r23,2
	ctx.r23.s64 = 2;
	// b 0x82eb1184
	goto loc_82EB1184;
loc_82EB10CC:
	// mulli r11,r31,255
	ctx.r11.s64 = ctx.r31.s64 * 255;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// divwu r11,r11,r24
	ctx.r11.u32 = ctx.r11.u32 / ctx.r24.u32;
	// twllei r24,0
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82eb1184
	goto loc_82EB1184;
loc_82EB10EC:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82eb1190
	if (!ctx.cr6.lt) goto loc_82EB1190;
	// mulli r11,r31,255
	ctx.r11.s64 = ctx.r31.s64 * 255;
	// divwu r11,r11,r24
	ctx.r11.u32 = ctx.r11.u32 / ctx.r24.u32;
	// lis r10,-256
	ctx.r10.s64 = -16777216;
	// twllei r24,0
	// rlwimi r10,r11,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x82eb1184
	goto loc_82EB1184;
loc_82EB1110:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x82eb117c
	goto loc_82EB117C;
loc_82EB1118:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb1190
	if (ctx.cr6.eq) goto loc_82EB1190;
	// mullw r11,r31,r25
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r25.s32);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299698
	ctx.lr = 0x82EB1134;
	sub_82299698(ctx, base);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1240
	if (ctx.cr0.eq) goto loc_82EB1240;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// stw r25,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r25.u32);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// ori r11,r11,134
	ctx.r11.u64 = ctx.r11.u64 | 134;
	// stw r22,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r22.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,48(r26)
	PPC_STORE_U32(ctx.r26.u32 + 48, ctx.r10.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,52(r26)
	PPC_STORE_U32(ctx.r26.u32 + 52, ctx.r9.u32);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r22,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r22.u32);
	// b 0x82eb1184
	goto loc_82EB1184;
loc_82EB1178:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82EB117C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb1190
	if (ctx.cr6.eq) goto loc_82EB1190;
loc_82EB1184:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_82EB1188:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82eb0fdc
	if (!ctx.cr6.eq) goto loc_82EB0FDC;
loc_82EB1190:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB1198:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82EB11A0:
	// cmplwi cr6,r24,255
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 255, ctx.xer);
	// bgt cr6,0x82eb1190
	if (ctx.cr6.gt) goto loc_82EB1190;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// ble cr6,0x82eb11c4
	if (!ctx.cr6.gt) goto loc_82EB11C4;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82eb11c4
	if (!ctx.cr6.eq) goto loc_82EB11C4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_82EB11C4:
	// addic. r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// beq 0x82eb1230
	if (ctx.cr0.eq) goto loc_82EB1230;
loc_82EB11D0:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82eb1234
	if (!ctx.cr6.lt) goto loc_82EB1234;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulli r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 * 255;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// divwu r9,r9,r24
	ctx.r9.u32 = ctx.r9.u32 / ctx.r24.u32;
	// mulli r7,r7,255
	ctx.r7.s64 = ctx.r7.s64 * 255;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// divwu r9,r7,r24
	ctx.r9.u32 = ctx.r7.u32 / ctx.r24.u32;
	// mulli r7,r6,255
	ctx.r7.s64 = ctx.r6.s64 * 255;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// divwu r8,r7,r24
	ctx.r8.u32 = ctx.r7.u32 / ctx.r24.u32;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// twllei r24,0
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// twllei r24,0
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// twllei r24,0
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82eb11d0
	if (!ctx.cr0.eq) goto loc_82EB11D0;
loc_82EB1230:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
loc_82EB1234:
	// bne cr6,0x82eb1190
	if (!ctx.cr6.eq) goto loc_82EB1190;
loc_82EB1238:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb1198
	goto loc_82EB1198;
loc_82EB1240:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb1198
	goto loc_82EB1198;
}

__attribute__((alias("__imp__sub_82EB124C"))) PPC_WEAK_FUNC(sub_82EB124C);
PPC_FUNC_IMPL(__imp__sub_82EB124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1250"))) PPC_WEAK_FUNC(sub_82EB1250);
PPC_FUNC_IMPL(__imp__sub_82EB1250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB1258;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r11,-10312
	ctx.r6.s64 = ctx.r11.s64 + -10312;
	// addi r3,r9,-3360
	ctx.r3.s64 = ctx.r9.s64 + -3360;
	// addi r5,r10,-10320
	ctx.r5.s64 = ctx.r10.s64 + -10320;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f0e9d0
	ctx.lr = 0x82EB1290;
	sub_82F0E9D0(ctx, base);
	// lis r28,9345
	ctx.r28.s64 = 612433920;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1404
	if (ctx.cr0.eq) goto loc_82EB1404;
	// bl 0x82f08a68
	ctx.lr = 0x82EB12A4;
	sub_82F08A68(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1404
	if (ctx.cr0.eq) goto loc_82EB1404;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ff2180
	ctx.lr = 0x82EB12B8;
	sub_82FF2180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb12cc
	if (ctx.cr0.eq) goto loc_82EB12CC;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x82eb140c
	goto loc_82EB140C;
loc_82EB12CC:
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82f0ed40
	ctx.lr = 0x82EB12F8;
	sub_82F0ED40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfd f1,-3368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3368);
	// bl 0x82f0ed18
	ctx.lr = 0x82EB130C;
	sub_82F0ED18(ctx, base);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 * 3;
	// bl 0x82299698
	ctx.lr = 0x82EB1320;
	sub_82299698(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1404
	if (ctx.cr0.eq) goto loc_82EB1404;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r11,-10224
	ctx.r6.s64 = ctx.r11.s64 + -10224;
	// addi r5,r10,-10304
	ctx.r5.s64 = ctx.r10.s64 + -10304;
	// bl 0x82f0ecb0
	ctx.lr = 0x82EB1348;
	sub_82F0ECB0(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0deb0
	ctx.lr = 0x82EB1354;
	sub_82F0DEB0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb13f0
	if (!ctx.cr6.gt) goto loc_82EB13F0;
loc_82EB1364:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82eb13d0
	if (!ctx.cr6.gt) goto loc_82EB13D0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82EB1388:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r6,r8,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r8,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stbx r6,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r5,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r4,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb1388
	if (ctx.cr6.lt) goto loc_82EB1388;
loc_82EB13D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82f0eb68
	ctx.lr = 0x82EB13E0;
	sub_82F0EB68(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1364
	if (ctx.cr6.lt) goto loc_82EB1364;
loc_82EB13F0:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0df48
	ctx.lr = 0x82EB13FC;
	sub_82F0DF48(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82eb140c
	goto loc_82EB140C;
loc_82EB1404:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82EB140C:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb1424
	if (ctx.cr6.eq) goto loc_82EB1424;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB1424;
	sub_822996C0(ctx, base);
loc_82EB1424:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb143c
	if (ctx.cr6.eq) goto loc_82EB143C;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f0ec10
	ctx.lr = 0x82EB143C;
	sub_82F0EC10(ctx, base);
loc_82EB143C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB1448"))) PPC_WEAK_FUNC(sub_82EB1448);
PPC_FUNC_IMPL(__imp__sub_82EB1448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82EB1450;
	__savegprlr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// bl 0x82f08868
	ctx.lr = 0x82EB1484;
	sub_82F08868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb1498
	if (ctx.cr0.eq) goto loc_82EB1498;
loc_82EB148C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb1954
	goto loc_82EB1954;
loc_82EB1498:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r11,-10328
	ctx.r6.s64 = ctx.r11.s64 + -10328;
	// addi r3,r9,-3360
	ctx.r3.s64 = ctx.r9.s64 + -3360;
	// addi r5,r10,-10336
	ctx.r5.s64 = ctx.r10.s64 + -10336;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f0ef58
	ctx.lr = 0x82EB14B8;
	sub_82F0EF58(ctx, base);
	// lis r18,9345
	ctx.r18.s64 = 612433920;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1908
	if (ctx.cr0.eq) goto loc_82EB1908;
	// bl 0x82f08a68
	ctx.lr = 0x82EB14CC;
	sub_82F08A68(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1908
	if (ctx.cr0.eq) goto loc_82EB1908;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ff2180
	ctx.lr = 0x82EB14E0;
	sub_82FF2180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb1830
	if (!ctx.cr0.eq) goto loc_82EB1830;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r5,r10,-10432
	ctx.r5.s64 = ctx.r10.s64 + -10432;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// bl 0x82f12c50
	ctx.lr = 0x82EB150C;
	sub_82F12C50(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0f1c8
	ctx.lr = 0x82EB1518;
	sub_82F0F1C8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82f10098
	ctx.lr = 0x82EB1540;
	sub_82F10098(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// lis r8,10240
	ctx.r8.s64 = 671088640;
	// lis r7,2048
	ctx.r7.s64 = 134217728;
	// ori r24,r10,134
	ctx.r24.u64 = ctx.r10.u64 | 134;
	// ori r21,r9,134
	ctx.r21.u64 = ctx.r9.u64 | 134;
	// li r20,1
	ctx.r20.s64 = 1;
	// ori r22,r8,2
	ctx.r22.u64 = ctx.r8.u64 | 2;
	// ori r27,r7,74
	ctx.r27.u64 = ctx.r7.u64 | 74;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb15b0
	if (ctx.cr6.eq) goto loc_82EB15B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82eb15a0
	if (ctx.cr6.eq) goto loc_82EB15A0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82eb1594
	if (ctx.cr6.eq) goto loc_82EB1594;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82eb148c
	if (!ctx.cr6.eq) goto loc_82EB148C;
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// b 0x82eb15b8
	goto loc_82EB15B8;
loc_82EB1594:
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x82eb15b8
	goto loc_82EB15B8;
loc_82EB15A0:
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// b 0x82eb15b8
	goto loc_82EB15B8;
loc_82EB15B0:
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_82EB15B8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// lis r9,13873
	ctx.r9.s64 = 909180928;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// lis r7,13873
	ctx.r7.s64 = 909180928;
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// ori r23,r10,6
	ctx.r23.u64 = ctx.r10.u64 | 6;
	// ori r28,r9,21024
	ctx.r28.u64 = ctx.r9.u64 | 21024;
	// ori r29,r8,90
	ctx.r29.u64 = ctx.r8.u64 | 90;
	// ori r30,r7,19521
	ctx.r30.u64 = ctx.r7.u64 | 19521;
	// ori r25,r6,10
	ctx.r25.u64 = ctx.r6.u64 | 10;
	// ori r26,r5,6
	ctx.r26.u64 = ctx.r5.u64 | 6;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82eb1648
	if (!ctx.cr6.eq) goto loc_82EB1648;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f10298
	ctx.lr = 0x82EB15FC;
	sub_82F10298(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82eb1644
	if (ctx.cr6.eq) goto loc_82EB1644;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82eb163c
	if (ctx.cr6.eq) goto loc_82EB163C;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x82eb162c
	if (ctx.cr6.eq) goto loc_82EB162C;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x82eb148c
	if (!ctx.cr6.eq) goto loc_82EB148C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82eb1648
	goto loc_82EB1648;
loc_82EB162C:
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// ori r11,r11,88
	ctx.r11.u64 = ctx.r11.u64 | 88;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eb1648
	goto loc_82EB1648;
loc_82EB163C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x82eb1648
	goto loc_82EB1648;
loc_82EB1644:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82EB1648:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82eb165c
	if (!ctx.cr6.lt) goto loc_82EB165C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f102b8
	ctx.lr = 0x82EB165C;
	sub_82F102B8(ctx, base);
loc_82EB165C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eb167c
	if (!ctx.cr6.eq) goto loc_82EB167C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82eb167c
	if (!ctx.cr6.lt) goto loc_82EB167C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f10da0
	ctx.lr = 0x82EB167C;
	sub_82F10DA0(ctx, base);
loc_82EB167C:
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f10058
	ctx.lr = 0x82EB168C;
	sub_82F10058(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// beq 0x82eb16a8
	if (ctx.cr0.eq) goto loc_82EB16A8;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82f0ee88
	ctx.lr = 0x82EB16A4;
	sub_82F0EE88(ctx, base);
	// b 0x82eb16cc
	goto loc_82EB16CC;
loc_82EB16A8:
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// bl 0x82f10018
	ctx.lr = 0x82EB16B0;
	sub_82F10018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb16cc
	if (ctx.cr0.eq) goto loc_82EB16CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfd f2,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f1,-3368(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3368);
	// bl 0x82f10d40
	ctx.lr = 0x82EB16CC;
	sub_82F10D40(ctx, base);
loc_82EB16CC:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0ff90
	ctx.lr = 0x82EB16DC;
	sub_82F0FF90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1740
	if (ctx.cr0.eq) goto loc_82EB1740;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f10db0
	ctx.lr = 0x82EB16EC;
	sub_82F10DB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// subf. r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb173c
	if (ctx.cr0.eq) goto loc_82EB173C;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x82eb1734
	if (ctx.cr6.eq) goto loc_82EB1734;
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eb172c
	if (ctx.cr6.eq) goto loc_82EB172C;
	// lis r10,3633
	ctx.r10.s64 = 238092288;
	// ori r10,r10,21022
	ctx.r10.u64 = ctx.r10.u64 | 21022;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eb1740
	if (!ctx.cr6.eq) goto loc_82EB1740;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x82eb1740
	goto loc_82EB1740;
loc_82EB172C:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// b 0x82eb1740
	goto loc_82EB1740;
loc_82EB1734:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82eb1740
	goto loc_82EB1740;
loc_82EB173C:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82EB1740:
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82eb1764
	if (!ctx.cr6.eq) goto loc_82EB1764;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82eb1764
	if (ctx.cr6.eq) goto loc_82EB1764;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82eb176c
	if (!ctx.cr6.eq) goto loc_82EB176C;
loc_82EB1764:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f10288
	ctx.lr = 0x82EB176C;
	sub_82F10288(ctx, base);
loc_82EB176C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82eb1788
	if (ctx.cr6.eq) goto loc_82EB1788;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82f10348
	ctx.lr = 0x82EB1784;
	sub_82F10348(ctx, base);
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
loc_82EB1788:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0f4e0
	ctx.lr = 0x82EB1794;
	sub_82F0F4E0(ctx, base);
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// ori r10,r11,24
	ctx.r10.u64 = ctx.r11.u64 | 24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82eb17e8
	if (ctx.cr6.gt) goto loc_82EB17E8;
	// beq cr6,0x82eb17d8
	if (ctx.cr6.eq) goto loc_82EB17D8;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82eb17e0
	if (ctx.cr6.eq) goto loc_82EB17E0;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82eb1814
	if (ctx.cr6.eq) goto loc_82EB1814;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,26
	ctx.r10.u64 = ctx.r10.u64 | 26;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82eb1814
	if (ctx.cr6.eq) goto loc_82EB1814;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x82eb1804
	if (!ctx.cr6.eq) goto loc_82EB1804;
loc_82EB17D8:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// b 0x82eb1818
	goto loc_82EB1818;
loc_82EB17E0:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82eb1818
	goto loc_82EB1818;
loc_82EB17E8:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82eb1814
	if (ctx.cr6.eq) goto loc_82EB1814;
	// addis r11,r11,-13873
	ctx.r11.s64 = ctx.r11.s64 + -909180928;
	// addic. r11,r11,-19457
	ctx.xer.ca = ctx.r11.u32 > 19456;
	ctx.r11.s64 = ctx.r11.s64 + -19457;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb17e0
	if (ctx.cr0.eq) goto loc_82EB17E0;
	// cmplwi cr6,r11,1567
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1567, ctx.xer);
	// beq cr6,0x82eb180c
	if (ctx.cr6.eq) goto loc_82EB180C;
loc_82EB1804:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// b 0x82eb1818
	goto loc_82EB1818;
loc_82EB180C:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82eb1818
	goto loc_82EB1818;
loc_82EB1814:
	// li r30,4
	ctx.r30.s64 = 4;
loc_82EB1818:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0ffd8
	ctx.lr = 0x82EB1824;
	sub_82F0FFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82eb1840
	if (ctx.cr6.eq) goto loc_82EB1840;
loc_82EB1830:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x82eb191c
	goto loc_82EB191C;
loc_82EB1840:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r20,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r20.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x82f0ffb8
	ctx.lr = 0x82EB1860;
	sub_82F0FFB8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r19,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r19.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x82eb1914
	if (ctx.cr6.eq) goto loc_82EB1914;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r3,r3,r11
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB1888;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82eb1904
	if (ctx.cr0.eq) goto loc_82EB1904;
	// stw r20,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r20.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x82EB18AC;
	sub_82299698(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// beq 0x82eb1908
	if (ctx.cr0.eq) goto loc_82EB1908;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb18f4
	if (ctx.cr6.eq) goto loc_82EB18F4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82EB18CC:
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb18cc
	if (ctx.cr6.lt) goto loc_82EB18CC;
loc_82EB18F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0fa90
	ctx.lr = 0x82EB1900;
	sub_82F0FA90(ctx, base);
	// b 0x82eb1918
	goto loc_82EB1918;
loc_82EB1904:
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82EB1908:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eb191c
	goto loc_82EB191C;
loc_82EB1914:
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82EB1918:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_82EB191C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb1938
	if (ctx.cr6.eq) goto loc_82EB1938;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f0fee8
	ctx.lr = 0x82EB1938;
	sub_82F0FEE8(ctx, base);
loc_82EB1938:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb1950
	if (ctx.cr6.eq) goto loc_82EB1950;
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB1950;
	sub_822996C0(ctx, base);
loc_82EB1950:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EB1954:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB195C"))) PPC_WEAK_FUNC(sub_82EB195C);
PPC_FUNC_IMPL(__imp__sub_82EB195C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1960"))) PPC_WEAK_FUNC(sub_82EB1960);
PPC_FUNC_IMPL(__imp__sub_82EB1960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB1A84"))) PPC_WEAK_FUNC(sub_82EB1A84);
PPC_FUNC_IMPL(__imp__sub_82EB1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1A88"))) PPC_WEAK_FUNC(sub_82EB1A88);
PPC_FUNC_IMPL(__imp__sub_82EB1A88) {
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
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// li r10,11
	ctx.r10.s64 = 11;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
loc_82EB1BAC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82eb1bac
	if (!ctx.cr0.eq) goto loc_82EB1BAC;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x82eb1960
	ctx.lr = 0x82EB1BE8;
	sub_82EB1960(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EB1CB4"))) PPC_WEAK_FUNC(sub_82EB1CB4);
PPC_FUNC_IMPL(__imp__sub_82EB1CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1CB8"))) PPC_WEAK_FUNC(sub_82EB1CB8);
PPC_FUNC_IMPL(__imp__sub_82EB1CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x82EB1CC0;
	__savegprlr_15(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x82eb2148
	if (ctx.cr6.lt) goto loc_82EB2148;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,8275
	ctx.r10.s64 = 542310400;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// ori r10,r10,17476
	ctx.r10.u64 = ctx.r10.u64 | 17476;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eb2148
	if (!ctx.cr6.eq) goto loc_82EB2148;
	// addi r30,r5,-4
	ctx.r30.s64 = ctx.r5.s64 + -4;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r30,124
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 124, ctx.xer);
	// blt cr6,0x82eb2148
	if (ctx.cr6.lt) goto loc_82EB2148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB1D20;
	sub_82CB1160(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb1a88
	ctx.lr = 0x82EB1D2C;
	sub_82EB1A88(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r19,r31,124
	ctx.r19.s64 = ctx.r31.s64 + 124;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r18,r30,-124
	ctx.r18.s64 = ctx.r30.s64 + -124;
	// rlwinm. r31,r11,0,8,8
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r10.u32);
	// stw r9,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r9.u32);
	// bne 0x82eb1d58
	if (!ctx.cr0.eq) goto loc_82EB1D58;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB1D58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82eb1d6c
	if (!ctx.cr6.eq) goto loc_82EB1D6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r11.u32);
loc_82EB1D6C:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm r11,r11,0,16,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC00;
	// cmplwi cr6,r11,64512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64512, ctx.xer);
	// bne cr6,0x82eb1d84
	if (!ctx.cr6.eq) goto loc_82EB1D84;
	// li r15,6
	ctx.r15.s64 = 6;
	// b 0x82eb1d90
	goto loc_82EB1D90;
loc_82EB1D84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb2148
	if (!ctx.cr6.eq) goto loc_82EB2148;
	// li r15,1
	ctx.r15.s64 = 1;
loc_82EB1D90:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb1da4
	if (!ctx.cr6.eq) goto loc_82EB1DA4;
	// li r16,1
	ctx.r16.s64 = 1;
loc_82EB1DA4:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb1db4
	if (ctx.cr0.eq) goto loc_82EB1DB4;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82EB1DB4:
	// lis r12,12
	ctx.r12.s64 = 786432;
	// lis r10,-31908
	ctx.r10.s64 = -2091122688;
	// ori r12,r12,17506
	ctx.r12.u64 = ctx.r12.u64 | 17506;
	// addi r9,r10,18592
	ctx.r9.s64 = ctx.r10.s64 + 18592;
	// and r7,r11,r12
	ctx.r7.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,14
	ctx.r12.s64 = 917504;
	// lwz r10,18592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18592);
	// clrlwi r4,r11,12
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFF;
	// ori r12,r12,16448
	ctx.r12.u64 = ctx.r12.u64 | 16448;
	// rlwinm r3,r10,0,26,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// and r6,r11,r12
	ctx.r6.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,12
	ctx.r12.s64 = 786432;
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// ori r12,r12,17472
	ctx.r12.u64 = ctx.r12.u64 | 17472;
	// rlwinm r4,r4,0,30,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFF80003;
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,12
	ctx.r12.s64 = 786432;
	// ori r12,r12,16448
	ctx.r12.u64 = ctx.r12.u64 | 16448;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x82eb1eb8
	goto loc_82EB1EB8;
loc_82EB1E04:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb1e34
	if (ctx.cr6.eq) goto loc_82EB1E34;
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r30,176(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
loc_82EB1E34:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82eb1e4c
	if (ctx.cr6.eq) goto loc_82EB1E4C;
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r30,180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
loc_82EB1E4C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82eb1e64
	if (ctx.cr6.eq) goto loc_82EB1E64;
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
loc_82EB1E64:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82eb1e7c
	if (ctx.cr6.eq) goto loc_82EB1E7C;
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r30,188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
loc_82EB1E7C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb1e94
	if (ctx.cr6.eq) goto loc_82EB1E94;
	// lwz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
loc_82EB1E94:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82eb1ec0
	if (ctx.cr6.eq) goto loc_82EB1EC0;
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r30,196(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb1ec0
	if (ctx.cr6.eq) goto loc_82EB1EC0;
loc_82EB1EAC:
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r3,r3,0,26,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
loc_82EB1EB8:
	// cmpwi cr6,r3,-449
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -449, ctx.xer);
	// bne cr6,0x82eb1e04
	if (!ctx.cr6.eq) goto loc_82EB1E04;
loc_82EB1EC0:
	// lwz r23,0(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r23,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// beq cr6,0x82eb2148
	if (ctx.cr6.eq) goto loc_82EB2148;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ea1f20
	ctx.lr = 0x82EB1ED8;
	sub_82EA1F20(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb1eec
	if (ctx.cr6.eq) goto loc_82EB1EEC;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x82eb1efc
	goto loc_82EB1EFC;
loc_82EB1EEC:
	// cmplwi cr6,r15,6
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 6, ctx.xer);
	// li r11,18
	ctx.r11.s64 = 18;
	// beq cr6,0x82eb1efc
	if (ctx.cr6.eq) goto loc_82EB1EFC;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82EB1EFC:
	// stw r11,68(r17)
	PPC_STORE_U32(ctx.r17.u32 + 68, ctx.r11.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82eb1f28
	if (!ctx.cr6.eq) goto loc_82EB1F28;
	// cmplwi cr6,r18,1024
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 1024, ctx.xer);
	// blt cr6,0x82eb2148
	if (ctx.cr6.lt) goto loc_82EB2148;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// addi r19,r19,1024
	ctx.r19.s64 = ctx.r19.s64 + 1024;
	// addi r18,r18,-1024
	ctx.r18.s64 = ctx.r18.s64 + -1024;
	// b 0x82eb1f2c
	goto loc_82EB1F2C;
loc_82EB1F28:
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
loc_82EB1F2C:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82eb2134
	if (ctx.cr6.eq) goto loc_82EB2134;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r22,-1
	ctx.r22.s64 = -1;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EB1F44:
	// lwz r30,12(r17)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r28,16(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// lwz r29,20(r17)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// bne cr6,0x82eb1f60
	if (!ctx.cr6.eq) goto loc_82EB1F60;
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// b 0x82eb1fac
	goto loc_82EB1FAC;
loc_82EB1F60:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82299698
	ctx.lr = 0x82EB1F6C;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1f98
	if (ctx.cr0.eq) goto loc_82EB1F98;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r27,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// stw r27,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r27.u32);
	// stw r27,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r27.u32);
	// stw r27,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r27.u32);
	// b 0x82eb1f9c
	goto loc_82EB1F9C;
loc_82EB1F98:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82EB1F9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb213c
	if (ctx.cr6.eq) goto loc_82EB213C;
	// stw r11,80(r21)
	PPC_STORE_U32(ctx.r21.u32 + 80, ctx.r11.u32);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_82EB1FAC:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82eb2128
	if (ctx.cr6.eq) goto loc_82EB2128;
loc_82EB1FB8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82eb1fc8
	if (!ctx.cr6.eq) goto loc_82EB1FC8;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// b 0x82eb2014
	goto loc_82EB2014;
loc_82EB1FC8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82299698
	ctx.lr = 0x82EB1FD4;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb2000
	if (ctx.cr0.eq) goto loc_82EB2000;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r27,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// stw r27,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r27.u32);
	// stw r27,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r27.u32);
	// stw r27,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r27.u32);
	// b 0x82eb2004
	goto loc_82EB2004;
loc_82EB2000:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82EB2004:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb213c
	if (ctx.cr6.eq) goto loc_82EB213C;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82EB2014:
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// rlwinm r11,r23,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82eb20a8
	if (ctx.cr6.lt) goto loc_82EB20A8;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb209c
	if (!ctx.cr6.gt) goto loc_82EB209C;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb20a8
	if (!ctx.cr6.gt) goto loc_82EB20A8;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb209c
	if (!ctx.cr6.gt) goto loc_82EB209C;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82eb2090
	if (ctx.cr6.eq) goto loc_82EB2090;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addi r11,r11,-19
	ctx.r11.s64 = ctx.r11.s64 + -19;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82eb20a8
	if (ctx.cr6.gt) goto loc_82EB20A8;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,2,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
loc_82EB2080:
	// addi r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x82eb20b8
	goto loc_82EB20B8;
loc_82EB2090:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,1,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFF8;
	// b 0x82eb2080
	goto loc_82EB2080;
loc_82EB209C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r11,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// b 0x82eb20b4
	goto loc_82EB20B4;
loc_82EB20A8:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
loc_82EB20B4:
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
loc_82EB20B8:
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// stw r19,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r19.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// rlwinm r8,r23,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmplw cr6,r18,r9
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// blt cr6,0x82eb2148
	if (ctx.cr6.lt) goto loc_82EB2148;
	// add r19,r9,r19
	ctx.r19.u64 = ctx.r9.u64 + ctx.r19.u64;
	// subf r18,r9,r18
	ctx.r18.s64 = ctx.r18.s64 - ctx.r9.s64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x82eb2104
	if (ctx.cr6.eq) goto loc_82EB2104;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
loc_82EB2104:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// beq cr6,0x82eb2110
	if (ctx.cr6.eq) goto loc_82EB2110;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
loc_82EB2110:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x82eb211c
	if (ctx.cr6.eq) goto loc_82EB211C;
	// rlwinm r29,r29,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
loc_82EB211C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x82eb1fb8
	if (ctx.cr6.lt) goto loc_82EB1FB8;
loc_82EB2128:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r15
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82eb1f44
	if (ctx.cr6.lt) goto loc_82EB1F44;
loc_82EB2134:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb2150
	goto loc_82EB2150;
loc_82EB213C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb2150
	goto loc_82EB2150;
loc_82EB2148:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB2150:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2158"))) PPC_WEAK_FUNC(sub_82EB2158);
PPC_FUNC_IMPL(__imp__sub_82EB2158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EB2160;
	__savegprlr_24(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eb218c
	if (ctx.cr6.eq) goto loc_82EB218C;
loc_82EB217C:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb217c
	if (!ctx.cr6.eq) goto loc_82EB217C;
loc_82EB218C:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r31,r11,18592
	ctx.r31.s64 = ctx.r11.s64 + 18592;
	// lwz r11,18592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18592);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// beq cr6,0x82eb21c8
	if (ctx.cr6.eq) goto loc_82EB21C8;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r10,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
loc_82EB21AC:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82eb21c8
	if (ctx.cr6.eq) goto loc_82EB21C8;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x82eb21ac
	if (!ctx.cr6.eq) goto loc_82EB21AC;
loc_82EB21C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x82eb21e4
	if (!ctx.cr6.eq) goto loc_82EB21E4;
loc_82EB21D8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb25e8
	goto loc_82EB25E8;
loc_82EB21E4:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82ea1f20
	ctx.lr = 0x82EB21EC;
	sub_82EA1F20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,17476
	ctx.r11.s64 = 1145307136;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,21280
	ctx.r11.u64 = ctx.r11.u64 | 21280;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r27,r10,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2218;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb21d8
	if (ctx.cr0.lt) goto loc_82EB21D8;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb16f0
	ctx.lr = 0x82EB2230;
	sub_82CB16F0(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r9,124
	ctx.r9.s64 = 124;
	// li r8,4103
	ctx.r8.s64 = 4103;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EB2260;
	sub_82CB1160(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// beq 0x82eb227c
	if (ctx.cr0.eq) goto loc_82EB227C;
	// li r11,4098
	ctx.r11.s64 = 4098;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_82EB227C:
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb228c
	if (ctx.cr0.eq) goto loc_82EB228C;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_82EB228C:
	// lwz r10,76(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb22b4
	if (ctx.cr6.eq) goto loc_82EB22B4;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// ori r10,r10,4103
	ctx.r10.u64 = ctx.r10.u64 | 4103;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_82EB22B4:
	// lwz r10,80(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb22d4
	if (ctx.cr6.eq) goto loc_82EB22D4;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// ori r10,r10,65024
	ctx.r10.u64 = ctx.r10.u64 | 65024;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
loc_82EB22D4:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82eb22fc
	if (!ctx.cr6.gt) goto loc_82EB22FC;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// oris r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 | 2097152;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
loc_82EB22FC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb1a88
	ctx.lr = 0x82EB2308;
	sub_82EB1A88(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB231C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb21d8
	if (ctx.cr0.lt) goto loc_82EB21D8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82eb2368
	if (!ctx.cr6.eq) goto loc_82EB2368;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83203f50
	ctx.lr = 0x82EB234C;
	sub_83203F50(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2360;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb21d8
	if (ctx.cr0.lt) goto loc_82EB21D8;
loc_82EB2368:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82EB236C:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eb25d8
	if (ctx.cr6.eq) goto loc_82EB25D8;
loc_82EB2378:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r3,r11,r9
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB2394;
	sub_82299698(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82eb25f0
	if (ctx.cr0.eq) goto loc_82EB25F0;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82eb23e0
	if (!ctx.cr6.gt) goto loc_82EB23E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x832043e8
	ctx.lr = 0x82EB23DC;
	sub_832043E8(ctx, base);
	// b 0x82eb23f8
	goto loc_82EB23F8;
loc_82EB23E0:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83204390
	ctx.lr = 0x82EB23F8;
	sub_83204390(ctx, base);
loc_82EB23F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb25b4
	if (!ctx.cr6.gt) goto loc_82EB25B4;
loc_82EB2408:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb25a4
	if (!ctx.cr6.gt) goto loc_82EB25A4;
loc_82EB2418:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82eb2544
	if (ctx.cr6.lt) goto loc_82EB2544;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb2504
	if (!ctx.cr6.gt) goto loc_82EB2504;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb2544
	if (!ctx.cr6.gt) goto loc_82EB2544;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb2504
	if (!ctx.cr6.gt) goto loc_82EB2504;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82eb24c4
	if (ctx.cr6.eq) goto loc_82EB24C4;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addi r11,r11,-19
	ctx.r11.s64 = ctx.r11.s64 + -19;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82eb2544
	if (ctx.cr6.gt) goto loc_82EB2544;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFF0;
	// rlwinm r5,r9,2,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFF0;
loc_82EB24BC:
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// b 0x82eb2578
	goto loc_82EB2578;
loc_82EB24C4:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r7,1,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFF8;
	// rlwinm r5,r9,1,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFF8;
	// b 0x82eb24bc
	goto loc_82EB24BC;
loc_82EB2504:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r6,r27
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r10,1,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFC;
	// b 0x82eb257c
	goto loc_82EB257C;
loc_82EB2544:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r9,r27
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// mullw r5,r6,r27
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
loc_82EB2578:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EB257C:
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB258C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb25fc
	if (ctx.cr0.lt) goto loc_82EB25FC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2418
	if (ctx.cr6.lt) goto loc_82EB2418;
loc_82EB25A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2408
	if (ctx.cr6.lt) goto loc_82EB2408;
loc_82EB25B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb25cc
	if (ctx.cr6.eq) goto loc_82EB25CC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB25CC;
	sub_822996C0(ctx, base);
loc_82EB25CC:
	// lwz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eb2378
	if (!ctx.cr6.eq) goto loc_82EB2378;
loc_82EB25D8:
	// lwz r25,80(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82eb236c
	if (!ctx.cr6.eq) goto loc_82EB236C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB25E8:
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82EB25F0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb25e8
	goto loc_82EB25E8;
loc_82EB25FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb21d8
	if (ctx.cr6.eq) goto loc_82EB21D8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB2614;
	sub_822996C0(ctx, base);
	// b 0x82eb21d8
	goto loc_82EB21D8;
}

__attribute__((alias("__imp__sub_82EB2618"))) PPC_WEAK_FUNC(sub_82EB2618);
PPC_FUNC_IMPL(__imp__sub_82EB2618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EB2620;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// ori r25,r9,16389
	ctx.r25.u64 = ctx.r9.u64 | 16389;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 * 12;
	// bl 0x82299698
	ctx.lr = 0x82EB264C;
	sub_82299698(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82eb2660
	if (!ctx.cr0.eq) goto loc_82EB2660;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb27cc
	goto loc_82EB27CC;
loc_82EB2660:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r27,r10,43558
	ctx.r27.u64 = ctx.r10.u64 | 43558;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82eb2684
	if (!ctx.cr6.eq) goto loc_82EB2684;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3444
	ctx.r4.s64 = ctx.r11.s64 + -3444;
	// b 0x82eb269c
	goto loc_82EB269C;
loc_82EB2684:
	// lis r10,11682
	ctx.r10.s64 = 765591552;
	// ori r10,r10,43556
	ctx.r10.u64 = ctx.r10.u64 | 43556;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82eb27bc
	if (!ctx.cr6.eq) goto loc_82EB27BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3448
	ctx.r4.s64 = ctx.r11.s64 + -3448;
loc_82EB269C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB26AC;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb27bc
	if (ctx.cr0.lt) goto loc_82EB27BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,-3352
	ctx.r5.s64 = ctx.r11.s64 + -3352;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eab788
	ctx.lr = 0x82EB26D0;
	sub_82EAB788(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EB26D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eb26d8
	if (!ctx.cr6.eq) goto loc_82EB26D8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2704;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb27bc
	if (ctx.cr0.lt) goto loc_82EB27BC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt 0x82eb27b8
	if (ctx.cr0.lt) goto loc_82EB27B8;
loc_82EB2728:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x82eb278c
	if (!ctx.cr6.eq) goto loc_82EB278C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb277c
	if (ctx.cr6.eq) goto loc_82EB277C;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
loc_82EB2754:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eb2754
	if (!ctx.cr6.eq) goto loc_82EB2754;
loc_82EB277C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// b 0x82eb2794
	goto loc_82EB2794;
loc_82EB278C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EB2794:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB27A0;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb27bc
	if (ctx.cr0.lt) goto loc_82EB27BC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bge 0x82eb2728
	if (!ctx.cr0.lt) goto loc_82EB2728;
loc_82EB27B8:
	// li r25,0
	ctx.r25.s64 = 0;
loc_82EB27BC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB27C8;
	sub_822996C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB27CC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB27D4"))) PPC_WEAK_FUNC(sub_82EB27D4);
PPC_FUNC_IMPL(__imp__sub_82EB27D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB27D8"))) PPC_WEAK_FUNC(sub_82EB27D8);
PPC_FUNC_IMPL(__imp__sub_82EB27D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82EB27E0;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6adc
	ctx.lr = 0x82EB27E8;
	__savefpr_25(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r20,-32768
	ctx.r20.s64 = -2147483648;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// ori r20,r20,16389
	ctx.r20.u64 = ctx.r20.u64 | 16389;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bgt cr6,0x82eb2d54
	if (ctx.cr6.gt) goto loc_82EB2D54;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bgt cr6,0x82eb2d54
	if (ctx.cr6.gt) goto loc_82EB2D54;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EB282C;
	sub_82299698(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82299698
	ctx.lr = 0x82EB283C;
	sub_82299698(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eb2d24
	if (ctx.cr6.eq) goto loc_82EB2D24;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82eb2d24
	if (ctx.cr6.eq) goto loc_82EB2D24;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// lwz r4,18584(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18584);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EB285C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eb285c
	if (!ctx.cr6.eq) goto loc_82EB285C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2884;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ff2768
	ctx.lr = 0x82EB2894;
	sub_82FF2768(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EB289C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eb289c
	if (!ctx.cr6.eq) goto loc_82EB289C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB28C8;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB28E8;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ff2560
	ctx.lr = 0x82EB28F8;
	sub_82FF2560(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EB2900:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eb2900
	if (!ctx.cr6.eq) goto loc_82EB2900;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB292C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-11748
	ctx.r4.s64 = ctx.r11.s64 + -11748;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB294C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r5,r11,-3332
	ctx.r5.s64 = ctx.r11.s64 + -3332;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eab788
	ctx.lr = 0x82EB2970;
	sub_82EAB788(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EB2978:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eb2978
	if (!ctx.cr6.eq) goto loc_82EB2978;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB29A4;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb2b48
	if (!ctx.cr6.gt) goto loc_82EB2B48;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f26,-16900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16900);
	ctx.f26.f64 = double(temp.f32);
	// lfd f25,-17608(r10)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17608);
	// lfs f27,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f27.f64 = double(temp.f32);
loc_82EB29D4:
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// mullw r9,r8,r30
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r9,r23
	ctx.r31.u64 = ctx.r9.u64 + ctx.r23.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eb2b38
	if (ctx.cr6.eq) goto loc_82EB2B38;
loc_82EB2A00:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82eb2a14
	if (!ctx.cr6.gt) goto loc_82EB2A14;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// b 0x82eb2a18
	goto loc_82EB2A18;
loc_82EB2A14:
	// fmr f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f27.f64;
loc_82EB2A18:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82eb2a2c
	if (!ctx.cr6.gt) goto loc_82EB2A2C;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x82eb2a30
	goto loc_82EB2A30;
loc_82EB2A2C:
	// fmr f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f27.f64;
loc_82EB2A30:
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82eb2a44
	if (!ctx.cr6.gt) goto loc_82EB2A44;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x82eb2a48
	goto loc_82EB2A48;
loc_82EB2A44:
	// fmr f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f27.f64;
loc_82EB2A48:
	// fcmpu cr6,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// ble cr6,0x82eb2a58
	if (!ctx.cr6.gt) goto loc_82EB2A58;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// b 0x82eb2a5c
	goto loc_82EB2A5C;
loc_82EB2A58:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_82EB2A5C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x82eb2a68
	if (ctx.cr6.gt) goto loc_82EB2A68;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_82EB2A68:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// fcmpu cr6,f1,f25
	ctx.cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// ble cr6,0x82eb2b10
	if (!ctx.cr6.gt) goto loc_82EB2B10;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82cb5200
	ctx.lr = 0x82EB2A7C;
	sub_82CB5200(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lbz r10,103(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lbz r9,103(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r11,111(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bne 0x82eb2aec
	if (!ctx.cr0.eq) goto loc_82EB2AEC;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb2aec
	if (!ctx.cr0.eq) goto loc_82EB2AEC;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x82eb2af0
	if (ctx.cr0.eq) goto loc_82EB2AF0;
loc_82EB2AEC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB2AF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2b04
	if (ctx.cr0.eq) goto loc_82EB2B04;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82eb2b08
	goto loc_82EB2B08;
loc_82EB2B04:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82EB2B08:
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// b 0x82eb2b20
	goto loc_82EB2B20;
loc_82EB2B10:
	// stb r22,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r22.u8);
	// stb r22,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r22.u8);
	// stb r22,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r22.u8);
	// stb r22,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r22.u8);
loc_82EB2B20:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2a00
	if (ctx.cr6.lt) goto loc_82EB2A00;
loc_82EB2B38:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb29d4
	if (ctx.cr6.lt) goto loc_82EB29D4;
loc_82EB2B48:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb2d1c
	if (!ctx.cr6.gt) goto loc_82EB2D1C;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82EB2B5C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stb r25,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r25.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r25,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r25.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2B88;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_82EB2B94:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r30,r10,r23
	ctx.r30.u64 = ctx.r10.u64 + ctx.r23.u64;
	// beq cr6,0x82eb2d00
	if (ctx.cr6.eq) goto loc_82EB2D00;
loc_82EB2BB4:
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb2bfc
	if (!ctx.cr6.lt) goto loc_82EB2BFC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82EB2BC8:
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// bge cr6,0x82eb2bfc
	if (!ctx.cr6.lt) goto loc_82EB2BFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82eb2bfc
	if (!ctx.cr6.eq) goto loc_82EB2BFC;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2bc8
	if (ctx.cr6.lt) goto loc_82EB2BC8;
loc_82EB2BFC:
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// ble cr6,0x82eb2c40
	if (!ctx.cr6.gt) goto loc_82EB2C40;
	// addi r11,r29,128
	ctx.r11.s64 = ctx.r29.s64 + 128;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2C2C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// b 0x82eb2cf0
	goto loc_82EB2CF0;
loc_82EB2C40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r11.u8);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb2ca8
	if (!ctx.cr6.lt) goto loc_82EB2CA8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB2C60:
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bge cr6,0x82eb2ca8
	if (!ctx.cr6.lt) goto loc_82EB2CA8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// lbz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82eb2ca8
	if (ctx.cr6.eq) goto loc_82EB2CA8;
	// stbx r10,r11,r21
	PPC_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u8);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb2c60
	if (ctx.cr6.lt) goto loc_82EB2C60;
loc_82EB2CA8:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2CBC;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2CD8;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82EB2CF0:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2bb4
	if (ctx.cr6.lt) goto loc_82EB2BB4;
loc_82EB2D00:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82eb2b94
	if (ctx.cr6.lt) goto loc_82EB2B94;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2b5c
	if (ctx.cr6.lt) goto loc_82EB2B5C;
loc_82EB2D1C:
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// b 0x82eb2d2c
	goto loc_82EB2D2C;
loc_82EB2D24:
	// lis r20,-32761
	ctx.r20.s64 = -2147024896;
	// ori r20,r20,14
	ctx.r20.u64 = ctx.r20.u64 | 14;
loc_82EB2D2C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eb2d40
	if (ctx.cr6.eq) goto loc_82EB2D40;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB2D40;
	sub_822996C0(ctx, base);
loc_82EB2D40:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82eb2d54
	if (ctx.cr6.eq) goto loc_82EB2D54;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB2D54;
	sub_822996C0(ctx, base);
loc_82EB2D54:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6b28
	ctx.lr = 0x82EB2D64;
	__restfpr_25(ctx, base);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2D68"))) PPC_WEAK_FUNC(sub_82EB2D68);
PPC_FUNC_IMPL(__imp__sub_82EB2D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EB2D70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// blt cr6,0x82eb2dcc
	if (ctx.cr6.lt) goto loc_82EB2DCC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x82cb1160
	ctx.lr = 0x82EB2D94;
	sub_82CB1160(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ead860
	ctx.lr = 0x82EB2DA0;
	sub_82EAD860(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,19778
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19778, ctx.xer);
	// bne cr6,0x82eb2dcc
	if (!ctx.cr6.eq) goto loc_82EB2DCC;
	// lwz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 82);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82eb2dcc
	if (ctx.cr6.gt) goto loc_82EB2DCC;
	// addi r5,r31,-14
	ctx.r5.s64 = ctx.r31.s64 + -14;
	// addi r4,r30,14
	ctx.r4.s64 = ctx.r30.s64 + 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaf190
	ctx.lr = 0x82EB2DC8;
	sub_82EAF190(ctx, base);
	// b 0x82eb2dd4
	goto loc_82EB2DD4;
loc_82EB2DCC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB2DD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2DDC"))) PPC_WEAK_FUNC(sub_82EB2DDC);
PPC_FUNC_IMPL(__imp__sub_82EB2DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2DE0"))) PPC_WEAK_FUNC(sub_82EB2DE0);
PPC_FUNC_IMPL(__imp__sub_82EB2DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82EB2DE8;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb31c8
	if (ctx.cr6.eq) goto loc_82EB31C8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eb31c8
	if (ctx.cr6.eq) goto loc_82EB31C8;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82eb2e28
	if (!ctx.cr6.eq) goto loc_82EB2E28;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82eb2e28
	if (!ctx.cr6.eq) goto loc_82EB2E28;
loc_82EB2E20:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb31d0
	goto loc_82EB31D0;
loc_82EB2E28:
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// li r23,3
	ctx.r23.s64 = 3;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r25,r1,112
	ctx.r25.s64 = ctx.r1.s64 + 112;
loc_82EB2E7C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// stw r20,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r20.u32);
	// stw r23,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r23.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bgt cr6,0x82eb2f78
	if (ctx.cr6.gt) goto loc_82EB2F78;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-3312
	ctx.r12.s64 = ctx.r12.s64 + -3312;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32021
	ctx.r12.s64 = -2098528256;
	// addi r12,r12,11968
	ctx.r12.s64 = ctx.r12.s64 + 11968;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82EB2EC0;
	case 1:
		goto loc_82EB2F00;
	case 2:
		goto loc_82EB2F50;
	case 3:
		goto loc_82EB2F14;
	case 4:
		goto loc_82EB2EEC;
	case 5:
		goto loc_82EB2ED4;
	case 6:
		goto loc_82EB2F64;
	case 7:
		goto loc_82EB2F3C;
	case 8:
		goto loc_82EB2F28;
	default:
		__builtin_unreachable();
	}
loc_82EB2EC0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb2d68
	ctx.lr = 0x82EB2ED0;
	sub_82EB2D68(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2ED4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb0f68
	ctx.lr = 0x82EB2EE4;
	sub_82EB0F68(ctx, base);
loc_82EB2EE4:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2EEC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb1cb8
	ctx.lr = 0x82EB2EFC;
	sub_82EB1CB8(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2F00:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb02a8
	ctx.lr = 0x82EB2F10;
	sub_82EB02A8(ctx, base);
	// b 0x82eb2ee4
	goto loc_82EB2EE4;
loc_82EB2F14:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb1448
	ctx.lr = 0x82EB2F24;
	sub_82EB1448(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2F28:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eae240
	ctx.lr = 0x82EB2F38;
	sub_82EAE240(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2F3C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eae648
	ctx.lr = 0x82EB2F4C;
	sub_82EAE648(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2F50:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb0888
	ctx.lr = 0x82EB2F60;
	sub_82EB0888(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2F64:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf190
	ctx.lr = 0x82EB2F74;
	sub_82EAF190(ctx, base);
loc_82EB2F74:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB2F78:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82eb3028
	if (!ctx.cr6.lt) goto loc_82EB3028;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb2fa0
	if (ctx.cr6.eq) goto loc_82EB2FA0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb2fa0
	if (ctx.cr6.eq) goto loc_82EB2FA0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB2FA0;
	sub_822996C0(ctx, base);
loc_82EB2FA0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb2fc0
	if (ctx.cr6.eq) goto loc_82EB2FC0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb2fc0
	if (ctx.cr6.eq) goto loc_82EB2FC0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB2FC0;
	sub_822996C0(ctx, base);
loc_82EB2FC0:
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb2fe0
	if (ctx.cr6.eq) goto loc_82EB2FE0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eae008
	ctx.lr = 0x82EB2FD4;
	sub_82EAE008(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB2FE0;
	sub_822996C0(ctx, base);
loc_82EB2FE0:
	// lwz r27,80(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb3000
	if (ctx.cr6.eq) goto loc_82EB3000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eae008
	ctx.lr = 0x82EB2FF4;
	sub_82EAE008(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB3000;
	sub_822996C0(ctx, base);
loc_82EB3000:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r21,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// stw r21,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r21.u32);
	// cmplwi cr6,r24,9
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 9, ctx.xer);
	// stw r21,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r21.u32);
	// stw r21,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r21.u32);
	// stw r21,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r21.u32);
	// blt cr6,0x82eb2e7c
	if (ctx.cr6.lt) goto loc_82EB2E7C;
loc_82EB3028:
	// cmplwi cr6,r24,9
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 9, ctx.xer);
	// bne cr6,0x82eb303c
	if (!ctx.cr6.eq) goto loc_82EB303C;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82eb31d0
	goto loc_82EB31D0;
loc_82EB303C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82eb30f4
	if (ctx.cr6.eq) goto loc_82EB30F4;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82eb30f4
	if (ctx.cr6.eq) goto loc_82EB30F4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EB3050:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eb30e8
	if (ctx.cr6.eq) goto loc_82EB30E8;
loc_82EB305C:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r11,r9
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB3078;
	sub_82299698(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82eb3150
	if (ctx.cr0.eq) goto loc_82EB3150;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,20(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x832043e8
	ctx.lr = 0x82EB30B8;
	sub_832043E8(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r28,r30,56
	ctx.r28.s64 = ctx.r30.s64 + 56;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb30d4
	if (ctx.cr6.eq) goto loc_82EB30D4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x82EB30D4;
	sub_822996C0(ctx, base);
loc_82EB30D4:
	// lwz r30,76(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r19,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r19.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82eb305c
	if (!ctx.cr6.eq) goto loc_82EB305C;
loc_82EB30E8:
	// lwz r26,80(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82eb3050
	if (!ctx.cr6.eq) goto loc_82EB3050;
loc_82EB30F4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82eb317c
	if (ctx.cr6.eq) goto loc_82EB317C;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82EB310C;
	sub_82CB16F0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r11.u32);
	// stw r19,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r19.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ea20e0
	ctx.lr = 0x82EB3130;
	sub_82EA20E0(ctx, base);
	// stw r3,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r3.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// stw r10,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r10.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,24(r22)
	PPC_STORE_U32(ctx.r22.u32 + 24, ctx.r10.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// b 0x82eb3174
	goto loc_82EB3174;
loc_82EB3150:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb31d0
	goto loc_82EB31D0;
loc_82EB315C:
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EB3174:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eb315c
	if (!ctx.cr6.eq) goto loc_82EB315C;
loc_82EB317C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb31b8
	if (ctx.cr6.eq) goto loc_82EB31B8;
loc_82EB3188:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r21,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r21.u32);
	// stw r21,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r21.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r21,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r21.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb3188
	if (!ctx.cr6.eq) goto loc_82EB3188;
loc_82EB31B8:
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eb317c
	if (!ctx.cr6.eq) goto loc_82EB317C;
	// b 0x82eb2e20
	goto loc_82EB2E20;
loc_82EB31C8:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EB31D0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB31D8"))) PPC_WEAK_FUNC(sub_82EB31D8);
PPC_FUNC_IMPL(__imp__sub_82EB31D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82EB31E0;
	__savegprlr_18(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// bl 0x82ead258
	ctx.lr = 0x82EB31FC;
	sub_82EAD258(ctx, base);
	// cmplwi cr6,r20,8
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 8, ctx.xer);
	// bgt cr6,0x82eb35d4
	if (ctx.cr6.gt) goto loc_82EB35D4;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-3296
	ctx.r12.s64 = ctx.r12.s64 + -3296;
	// lbzx r0,r12,r20
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r20.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32021
	ctx.r12.s64 = -2098528256;
	// addi r12,r12,12844
	ctx.r12.s64 = ctx.r12.s64 + 12844;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r20.u64) {
	case 0:
		goto loc_82EB322C;
	case 1:
		goto loc_82EB3248;
	case 2:
		goto loc_82EB35D4;
	case 3:
		goto loc_82EB3248;
	case 4:
		goto loc_82EB3238;
	case 5:
		goto loc_82EB35D4;
	case 6:
		goto loc_82EB322C;
	case 7:
		goto loc_82EB3258;
	case 8:
		goto loc_82EB3258;
	default:
		__builtin_unreachable();
	}
loc_82EB322C:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r31,r11,18344
	ctx.r31.s64 = ctx.r11.s64 + 18344;
	// b 0x82eb3264
	goto loc_82EB3264;
loc_82EB3238:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,18344
	ctx.r11.s64 = ctx.r11.s64 + 18344;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
	// b 0x82eb3264
	goto loc_82EB3264;
loc_82EB3248:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,18344
	ctx.r11.s64 = ctx.r11.s64 + 18344;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// b 0x82eb3264
	goto loc_82EB3264;
loc_82EB3258:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,18344
	ctx.r11.s64 = ctx.r11.s64 + 18344;
	// addi r31,r11,72
	ctx.r31.s64 = ctx.r11.s64 + 72;
loc_82EB3264:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x82ea1f20
	ctx.lr = 0x82EB326C;
	sub_82EA1F20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea2020
	ctx.lr = 0x82EB327C;
	sub_82EA2020(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x82eb32a0
	if (!ctx.cr6.eq) goto loc_82EB32A0;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EB3290:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eadee8
	ctx.lr = 0x82EB3298;
	sub_82EADEE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eb35e4
	goto loc_82EB35E4;
loc_82EB32A0:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// xor r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	// rlwinm. r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb345c
	if (ctx.cr0.eq) goto loc_82EB345C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb5410
	ctx.lr = 0x82EB32B8;
	sub_82EB5410(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ea1f20
	ctx.lr = 0x82EB32C0;
	sub_82EA1F20(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// rlwinm r23,r11,29,3,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EB32D4:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82eb3448
	if (ctx.cr6.eq) goto loc_82EB3448;
loc_82EB32E0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// mullw r3,r11,r9
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB3300;
	sub_82299698(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82eb347c
	if (ctx.cr0.eq) goto loc_82EB347C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EB3340;
	sub_82CB1160(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB3350;
	sub_82CB1160(ctx, base);
	// stw r24,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r24.u32);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EB33BC;
	sub_82CB1160(ctx, base);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb9060
	ctx.lr = 0x82EB33E4;
	sub_82EB9060(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82eb3490
	if (ctx.cr0.lt) goto loc_82EB3490;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3410
	if (ctx.cr6.eq) goto loc_82EB3410;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb3410
	if (ctx.cr6.eq) goto loc_82EB3410;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB340C;
	sub_822996C0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82EB3410:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB3428;
	sub_82CB1160(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r24,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r24.u32);
	// lwz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82eb32e0
	if (!ctx.cr6.eq) goto loc_82EB32E0;
loc_82EB3448:
	// lwz r22,80(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 80);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82eb32d4
	if (!ctx.cr6.eq) goto loc_82EB32D4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb6330
	ctx.lr = 0x82EB345C;
	sub_82EB6330(ctx, base);
loc_82EB345C:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eadf50
	ctx.lr = 0x82EB346C;
	sub_82EADF50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb34ac
	if (!ctx.cr0.lt) goto loc_82EB34AC;
loc_82EB3474:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82eb3290
	goto loc_82EB3290;
loc_82EB347C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb6330
	ctx.lr = 0x82EB3484;
	sub_82EB6330(ctx, base);
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eb3290
	goto loc_82EB3290;
loc_82EB3490:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB349C;
	sub_822996C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb6330
	ctx.lr = 0x82EB34A4;
	sub_82EB6330(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82eb3290
	goto loc_82EB3290;
loc_82EB34AC:
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 1, ctx.xer);
	// blt cr6,0x82eb3544
	if (ctx.cr6.lt) goto loc_82EB3544;
	// beq cr6,0x82eb3534
	if (ctx.cr6.eq) goto loc_82EB3534;
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 3, ctx.xer);
	// beq cr6,0x82eb3524
	if (ctx.cr6.eq) goto loc_82EB3524;
	// cmplwi cr6,r20,4
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 4, ctx.xer);
	// beq cr6,0x82eb3514
	if (ctx.cr6.eq) goto loc_82EB3514;
	// cmplwi cr6,r20,6
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 6, ctx.xer);
	// beq cr6,0x82eb350c
	if (ctx.cr6.eq) goto loc_82EB350C;
	// cmplwi cr6,r20,7
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 7, ctx.xer);
	// beq cr6,0x82eb34fc
	if (ctx.cr6.eq) goto loc_82EB34FC;
	// cmplwi cr6,r20,8
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 8, ctx.xer);
	// beq cr6,0x82eb34ec
	if (ctx.cr6.eq) goto loc_82EB34EC;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16385
	ctx.r31.u64 = ctx.r31.u64 | 16385;
	// b 0x82eb3558
	goto loc_82EB3558;
loc_82EB34EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eb2618
	ctx.lr = 0x82EB34F8;
	sub_82EB2618(ctx, base);
	// b 0x82eb3554
	goto loc_82EB3554;
loc_82EB34FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eb27d8
	ctx.lr = 0x82EB3508;
	sub_82EB27D8(ctx, base);
	// b 0x82eb3554
	goto loc_82EB3554;
loc_82EB350C:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82eb3548
	goto loc_82EB3548;
loc_82EB3514:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eb2158
	ctx.lr = 0x82EB3520;
	sub_82EB2158(ctx, base);
	// b 0x82eb3554
	goto loc_82EB3554;
loc_82EB3524:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eb1250
	ctx.lr = 0x82EB3530;
	sub_82EB1250(ctx, base);
	// b 0x82eb3554
	goto loc_82EB3554;
loc_82EB3534:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eb05e0
	ctx.lr = 0x82EB3540;
	sub_82EB05E0(ctx, base);
	// b 0x82eb3554
	goto loc_82EB3554;
loc_82EB3544:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82EB3548:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eafd48
	ctx.lr = 0x82EB3554;
	sub_82EAFD48(ctx, base);
loc_82EB3554:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EB3558:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ead4c0
	ctx.lr = 0x82EB3560;
	sub_82EAD4C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82eb3290
	if (ctx.cr6.lt) goto loc_82EB3290;
	// cmplwi cr6,r18,2
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 2, ctx.xer);
	// bne cr6,0x82eb35c4
	if (!ctx.cr6.eq) goto loc_82EB35C4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82ee3870
	ctx.lr = 0x82EB357C;
	sub_82EE3870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb3474
	if (ctx.cr0.lt) goto loc_82EB3474;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r30,0(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB35A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB35B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB35C4;
	sub_82CB1160(ctx, base);
loc_82EB35C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eadee8
	ctx.lr = 0x82EB35CC;
	sub_82EADEE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb35e4
	goto loc_82EB35E4;
loc_82EB35D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eadee8
	ctx.lr = 0x82EB35DC;
	sub_82EADEE8(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EB35E4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB35EC"))) PPC_WEAK_FUNC(sub_82EB35EC);
PPC_FUNC_IMPL(__imp__sub_82EB35EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB35F0"))) PPC_WEAK_FUNC(sub_82EB35F0);
PPC_FUNC_IMPL(__imp__sub_82EB35F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r9,r5,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r5.s64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f13,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
loc_82EB360C:
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfdx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eb3624
	if (ctx.cr6.lt) goto loc_82EB3624;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x82eb3628
	goto loc_82EB3628;
loc_82EB3624:
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82EB3628:
	// lfdx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stfd f0,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb360c
	if (!ctx.cr0.eq) goto loc_82EB360C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3640"))) PPC_WEAK_FUNC(sub_82EB3640);
PPC_FUNC_IMPL(__imp__sub_82EB3640) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cb1160
	sub_82CB1160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB3654"))) PPC_WEAK_FUNC(sub_82EB3654);
PPC_FUNC_IMPL(__imp__sub_82EB3654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3658"))) PPC_WEAK_FUNC(sub_82EB3658);
PPC_FUNC_IMPL(__imp__sub_82EB3658) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82EB3670:
	// lfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3670
	if (!ctx.cr0.eq) goto loc_82EB3670;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB368C"))) PPC_WEAK_FUNC(sub_82EB368C);
PPC_FUNC_IMPL(__imp__sub_82EB368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3690"))) PPC_WEAK_FUNC(sub_82EB3690);
PPC_FUNC_IMPL(__imp__sub_82EB3690) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lfd f0,-18352(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18352);
loc_82EB36B0:
	// lfdx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fdiv f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 / ctx.f13.f64;
	// stfd f13,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f13.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb36b0
	if (!ctx.cr0.eq) goto loc_82EB36B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB36CC"))) PPC_WEAK_FUNC(sub_82EB36CC);
PPC_FUNC_IMPL(__imp__sub_82EB36CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB36D0"))) PPC_WEAK_FUNC(sub_82EB36D0);
PPC_FUNC_IMPL(__imp__sub_82EB36D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EB36D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3718
	if (ctx.cr6.eq) goto loc_82EB3718;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB36F4:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfdx f1,r29,r31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x82cb2298
	ctx.lr = 0x82EB3700;
	sub_82CB2298(ctx, base);
	// lfdx f0,r29,r31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r31.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fsub f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 - ctx.f1.f64;
	// stfdx f0,r31,r27
	PPC_STORE_U64(ctx.r31.u32 + ctx.r27.u32, ctx.f0.u64);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb36f4
	if (!ctx.cr0.eq) goto loc_82EB36F4;
loc_82EB3718:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB3720"))) PPC_WEAK_FUNC(sub_82EB3720);
PPC_FUNC_IMPL(__imp__sub_82EB3720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB3728;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3770
	if (ctx.cr6.eq) goto loc_82EB3770;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfd f31,-18376(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18376);
loc_82EB3750:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfdx f2,r11,r31
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82cb59b0
	ctx.lr = 0x82EB3760;
	sub_82CB59B0(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb3750
	if (!ctx.cr0.eq) goto loc_82EB3750;
loc_82EB3770:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB377C"))) PPC_WEAK_FUNC(sub_82EB377C);
PPC_FUNC_IMPL(__imp__sub_82EB377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3780"))) PPC_WEAK_FUNC(sub_82EB3780);
PPC_FUNC_IMPL(__imp__sub_82EB3780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EB3788;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3800
	if (ctx.cr6.eq) goto loc_82EB3800;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfd f30,19424(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19424);
	// lfd f31,-18344(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
loc_82EB37C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82eb37ec
	if (ctx.cr6.eq) goto loc_82EB37EC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfdx f0,r11,r31
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fabs f1,f0
	ctx.f1.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// bl 0x82cb4db8
	ctx.lr = 0x82EB37E0;
	sub_82CB4DB8(ctx, base);
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64;
	// stfdx f0,r31,r27
	PPC_STORE_U64(ctx.r31.u32 + ctx.r27.u32, ctx.f0.u64);
	// b 0x82eb37f0
	goto loc_82EB37F0;
loc_82EB37EC:
	// stfdx f31,r31,r27
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r27.u32, ctx.f31.u64);
loc_82EB37F0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb37c0
	if (!ctx.cr0.eq) goto loc_82EB37C0;
loc_82EB3800:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB3810"))) PPC_WEAK_FUNC(sub_82EB3810);
PPC_FUNC_IMPL(__imp__sub_82EB3810) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lfd f0,-18352(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18352);
loc_82EB3830:
	// lfdx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fsqrt f13,f13
	ctx.f13.f64 = sqrt(ctx.f13.f64);
	// fdiv f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 / ctx.f13.f64;
	// stfd f13,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f13.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3830
	if (!ctx.cr0.eq) goto loc_82EB3830;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3854"))) PPC_WEAK_FUNC(sub_82EB3854);
PPC_FUNC_IMPL(__imp__sub_82EB3854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3858"))) PPC_WEAK_FUNC(sub_82EB3858);
PPC_FUNC_IMPL(__imp__sub_82EB3858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB3860;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3898
	if (ctx.cr6.eq) goto loc_82EB3898;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB387C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfdx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82EB3888;
	sub_82CB4860(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb387c
	if (!ctx.cr0.eq) goto loc_82EB387C;
loc_82EB3898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB38A0"))) PPC_WEAK_FUNC(sub_82EB38A0);
PPC_FUNC_IMPL(__imp__sub_82EB38A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB38A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb38e0
	if (ctx.cr6.eq) goto loc_82EB38E0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB38C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfdx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82cb4940
	ctx.lr = 0x82EB38D0;
	sub_82CB4940(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb38c4
	if (!ctx.cr0.eq) goto loc_82EB38C4;
loc_82EB38E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB38E8"))) PPC_WEAK_FUNC(sub_82EB38E8);
PPC_FUNC_IMPL(__imp__sub_82EB38E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB38F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3928
	if (ctx.cr6.eq) goto loc_82EB3928;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB390C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfdx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82cb43f8
	ctx.lr = 0x82EB3918;
	sub_82CB43F8(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb390c
	if (!ctx.cr0.eq) goto loc_82EB390C;
loc_82EB3928:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB3930"))) PPC_WEAK_FUNC(sub_82EB3930);
PPC_FUNC_IMPL(__imp__sub_82EB3930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB3938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3970
	if (ctx.cr6.eq) goto loc_82EB3970;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB3954:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfdx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82cb44c0
	ctx.lr = 0x82EB3960;
	sub_82CB44C0(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb3954
	if (!ctx.cr0.eq) goto loc_82EB3954;
loc_82EB3970:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB3978"))) PPC_WEAK_FUNC(sub_82EB3978);
PPC_FUNC_IMPL(__imp__sub_82EB3978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB3980;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb39b8
	if (ctx.cr6.eq) goto loc_82EB39B8;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB399C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfdx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82cb4590
	ctx.lr = 0x82EB39A8;
	sub_82CB4590(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb399c
	if (!ctx.cr0.eq) goto loc_82EB399C;
loc_82EB39B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB39C0"))) PPC_WEAK_FUNC(sub_82EB39C0);
PPC_FUNC_IMPL(__imp__sub_82EB39C0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EB39DC:
	// lfdx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eb39f0
	if (ctx.cr6.lt) goto loc_82EB39F0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB39F0:
	// stfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb39dc
	if (!ctx.cr0.eq) goto loc_82EB39DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3A04"))) PPC_WEAK_FUNC(sub_82EB3A04);
PPC_FUNC_IMPL(__imp__sub_82EB3A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3A08"))) PPC_WEAK_FUNC(sub_82EB3A08);
PPC_FUNC_IMPL(__imp__sub_82EB3A08) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EB3A24:
	// lfdx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82eb3a38
	if (ctx.cr6.gt) goto loc_82EB3A38;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB3A38:
	// stfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3a24
	if (!ctx.cr0.eq) goto loc_82EB3A24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3A4C"))) PPC_WEAK_FUNC(sub_82EB3A4C);
PPC_FUNC_IMPL(__imp__sub_82EB3A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3A50"))) PPC_WEAK_FUNC(sub_82EB3A50);
PPC_FUNC_IMPL(__imp__sub_82EB3A50) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lfd f12,-18344(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18344);
	// lfd f13,-18352(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + -18352);
loc_82EB3A7C:
	// lfdx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// lfd f11,0(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82eb3a94
	if (!ctx.cr6.lt) goto loc_82EB3A94;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eb3a98
	goto loc_82EB3A98;
loc_82EB3A94:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82EB3A98:
	// stfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3a7c
	if (!ctx.cr0.eq) goto loc_82EB3A7C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3AAC"))) PPC_WEAK_FUNC(sub_82EB3AAC);
PPC_FUNC_IMPL(__imp__sub_82EB3AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3AB0"))) PPC_WEAK_FUNC(sub_82EB3AB0);
PPC_FUNC_IMPL(__imp__sub_82EB3AB0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lfd f12,-18344(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18344);
	// lfd f13,-18352(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + -18352);
loc_82EB3ADC:
	// lfdx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// lfd f11,0(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82eb3af4
	if (ctx.cr6.lt) goto loc_82EB3AF4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eb3af8
	goto loc_82EB3AF8;
loc_82EB3AF4:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82EB3AF8:
	// stfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3adc
	if (!ctx.cr0.eq) goto loc_82EB3ADC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3B0C"))) PPC_WEAK_FUNC(sub_82EB3B0C);
PPC_FUNC_IMPL(__imp__sub_82EB3B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3B10"))) PPC_WEAK_FUNC(sub_82EB3B10);
PPC_FUNC_IMPL(__imp__sub_82EB3B10) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82EB3B2C:
	// lfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// stfdx f0,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + ctx.r11.u32, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3b2c
	if (!ctx.cr0.eq) goto loc_82EB3B2C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3B4C"))) PPC_WEAK_FUNC(sub_82EB3B4C);
PPC_FUNC_IMPL(__imp__sub_82EB3B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3B50"))) PPC_WEAK_FUNC(sub_82EB3B50);
PPC_FUNC_IMPL(__imp__sub_82EB3B50) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82EB3B6C:
	// lfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfdx f0,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + ctx.r11.u32, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3b6c
	if (!ctx.cr0.eq) goto loc_82EB3B6C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3B8C"))) PPC_WEAK_FUNC(sub_82EB3B8C);
PPC_FUNC_IMPL(__imp__sub_82EB3B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3B90"))) PPC_WEAK_FUNC(sub_82EB3B90);
PPC_FUNC_IMPL(__imp__sub_82EB3B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB3B98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3bd8
	if (ctx.cr6.eq) goto loc_82EB3BD8;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB3BB4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfdx f2,r11,r31
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// lfdx f1,r10,r31
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82cb4678
	ctx.lr = 0x82EB3BC8;
	sub_82CB4678(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb3bb4
	if (!ctx.cr0.eq) goto loc_82EB3BB4;
loc_82EB3BD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB3BE0"))) PPC_WEAK_FUNC(sub_82EB3BE0);
PPC_FUNC_IMPL(__imp__sub_82EB3BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfd f0,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82EB3C04:
	// lfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfd f12,0(r5)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fmadd f0,f0,f13,f12
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64;
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// bne 0x82eb3c04
	if (!ctx.cr0.eq) goto loc_82EB3C04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3C28"))) PPC_WEAK_FUNC(sub_82EB3C28);
PPC_FUNC_IMPL(__imp__sub_82EB3C28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rlwinm. r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfd f0,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82EB3C48:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfd f0,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfd f13,0(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfd f12,0(r7)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// fmadd f0,f13,f12,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64;
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// bne 0x82eb3c48
	if (!ctx.cr0.eq) goto loc_82EB3C48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3C78"))) PPC_WEAK_FUNC(sub_82EB3C78);
PPC_FUNC_IMPL(__imp__sub_82EB3C78) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EB3C90:
	// lfd f0,0(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eb3ca4
	if (ctx.cr6.lt) goto loc_82EB3CA4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB3CA4:
	// stfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3c90
	if (!ctx.cr0.eq) goto loc_82EB3C90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3CB8"))) PPC_WEAK_FUNC(sub_82EB3CB8);
PPC_FUNC_IMPL(__imp__sub_82EB3CB8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EB3CD0:
	// lfd f0,0(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82eb3ce4
	if (ctx.cr6.gt) goto loc_82EB3CE4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB3CE4:
	// stfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3cd0
	if (!ctx.cr0.eq) goto loc_82EB3CD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3CF8"))) PPC_WEAK_FUNC(sub_82EB3CF8);
PPC_FUNC_IMPL(__imp__sub_82EB3CF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// lfd f12,-18344(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18344);
	// lfd f13,-18352(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18352);
loc_82EB3D20:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfdx f11,r9,r11
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82eb3d38
	if (!ctx.cr6.lt) goto loc_82EB3D38;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eb3d3c
	goto loc_82EB3D3C;
loc_82EB3D38:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82EB3D3C:
	// stfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3d20
	if (!ctx.cr0.eq) goto loc_82EB3D20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3D50"))) PPC_WEAK_FUNC(sub_82EB3D50);
PPC_FUNC_IMPL(__imp__sub_82EB3D50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// lfd f12,-18344(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18344);
	// lfd f13,-18352(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18352);
loc_82EB3D78:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfdx f11,r9,r11
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82eb3d90
	if (ctx.cr6.lt) goto loc_82EB3D90;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eb3d94
	goto loc_82EB3D94;
loc_82EB3D90:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82EB3D94:
	// stfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3d78
	if (!ctx.cr0.eq) goto loc_82EB3D78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3DA8"))) PPC_WEAK_FUNC(sub_82EB3DA8);
PPC_FUNC_IMPL(__imp__sub_82EB3DA8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82EB3DC4:
	// lfdx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// stfd f0,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3dc4
	if (!ctx.cr0.eq) goto loc_82EB3DC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3DE4"))) PPC_WEAK_FUNC(sub_82EB3DE4);
PPC_FUNC_IMPL(__imp__sub_82EB3DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3DE8"))) PPC_WEAK_FUNC(sub_82EB3DE8);
PPC_FUNC_IMPL(__imp__sub_82EB3DE8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82EB3E04:
	// lfdx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfd f0,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3e04
	if (!ctx.cr0.eq) goto loc_82EB3E04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3E24"))) PPC_WEAK_FUNC(sub_82EB3E24);
PPC_FUNC_IMPL(__imp__sub_82EB3E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3E28"))) PPC_WEAK_FUNC(sub_82EB3E28);
PPC_FUNC_IMPL(__imp__sub_82EB3E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB3E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3e70
	if (ctx.cr6.eq) goto loc_82EB3E70;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB3E4C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfdx f2,r11,r31
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// lfd f1,0(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82cb4678
	ctx.lr = 0x82EB3E60;
	sub_82CB4678(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb3e4c
	if (!ctx.cr0.eq) goto loc_82EB3E4C;
loc_82EB3E70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB3E78"))) PPC_WEAK_FUNC(sub_82EB3E78);
PPC_FUNC_IMPL(__imp__sub_82EB3E78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfd f0,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82EB3E98:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfd f13,0(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfd f12,0(r5)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fmadd f0,f0,f13,f12
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64;
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// bne 0x82eb3e98
	if (!ctx.cr0.eq) goto loc_82EB3E98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3EBC"))) PPC_WEAK_FUNC(sub_82EB3EBC);
PPC_FUNC_IMPL(__imp__sub_82EB3EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3EC0"))) PPC_WEAK_FUNC(sub_82EB3EC0);
PPC_FUNC_IMPL(__imp__sub_82EB3EC0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82EB3EC8;
	__savegprlr_17(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb4158
	if (ctx.cr6.eq) goto loc_82EB4158;
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r24,164(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r25,156(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r23,148(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r22,140(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r21,132(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r20,116(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r19,108(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r18,84(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EB3EFC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb404c
	if (ctx.cr6.eq) goto loc_82EB404C;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82EB3F1C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// bne cr6,0x82eb3f64
	if (!ctx.cr6.eq) goto loc_82EB3F64;
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & ctx.r24.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r18
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r18.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f0.u64);
	// lwz r11,-140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
loc_82EB3F64:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82eb3f94
	if (!ctx.cr6.eq) goto loc_82EB3F94;
	// divwu r3,r11,r25
	ctx.r3.u32 = ctx.r11.u32 / ctx.r25.u32;
	// twllei r25,0
	// mullw r3,r3,r25
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r4.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f0.u64);
	// lwz r11,-140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// b 0x82eb4044
	goto loc_82EB4044;
loc_82EB3F94:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x82eb3fb8
	if (!ctx.cr6.eq) goto loc_82EB3FB8;
	// and r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 & ctx.r20.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r5
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r5.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f0.u64);
	// lwz r11,-140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// b 0x82eb4044
	goto loc_82EB4044;
loc_82EB3FB8:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bne cr6,0x82eb3fdc
	if (!ctx.cr6.eq) goto loc_82EB3FDC;
	// and r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & ctx.r19.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f0.u64);
	// lwz r11,-140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// b 0x82eb4044
	goto loc_82EB4044;
loc_82EB3FDC:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x82eb4000
	if (!ctx.cr6.eq) goto loc_82EB4000;
	// and r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 & ctx.r21.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f0.u64);
	// lwz r11,-140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// b 0x82eb4044
	goto loc_82EB4044;
loc_82EB4000:
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bne cr6,0x82eb4024
	if (!ctx.cr6.eq) goto loc_82EB4024;
	// and r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f0.u64);
	// lwz r11,-140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// b 0x82eb4044
	goto loc_82EB4044;
loc_82EB4024:
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// bne cr6,0x82eb4044
	if (!ctx.cr6.eq) goto loc_82EB4044;
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & ctx.r22.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f0.u64);
	// lwz r11,-140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
loc_82EB4044:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82eb3f1c
	if (!ctx.cr0.eq) goto loc_82EB3F1C;
loc_82EB404C:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// bne cr6,0x82eb4088
	if (!ctx.cr6.eq) goto loc_82EB4088;
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & ctx.r24.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// b 0x82eb4148
	goto loc_82EB4148;
loc_82EB4088:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82eb40a0
	if (!ctx.cr6.eq) goto loc_82EB40A0;
	// and r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 & ctx.r20.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x82eb4148
	goto loc_82EB4148;
loc_82EB40A0:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x82eb40b8
	if (!ctx.cr6.eq) goto loc_82EB40B8;
	// and r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & ctx.r19.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x82eb4148
	goto loc_82EB4148;
loc_82EB40B8:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82eb40e8
	if (!ctx.cr6.eq) goto loc_82EB40E8;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82eb414c
	if (!ctx.cr6.eq) goto loc_82EB414C;
	// divwu r3,r11,r25
	ctx.r3.u32 = ctx.r11.u32 / ctx.r25.u32;
	// twllei r25,0
	// mullw r3,r3,r25
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x82eb4148
	goto loc_82EB4148;
loc_82EB40E8:
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bne cr6,0x82eb4104
	if (!ctx.cr6.eq) goto loc_82EB4104;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x82eb4148
	goto loc_82EB4148;
loc_82EB4104:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82eb411c
	if (!ctx.cr6.eq) goto loc_82EB411C;
	// and r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 & ctx.r21.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82eb4148
	goto loc_82EB4148;
loc_82EB411C:
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bne cr6,0x82eb4134
	if (!ctx.cr6.eq) goto loc_82EB4134;
	// and r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82eb4148
	goto loc_82EB4148;
loc_82EB4134:
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bne cr6,0x82eb414c
	if (!ctx.cr6.eq) goto loc_82EB414C;
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & ctx.r22.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82EB4148:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB414C:
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82eb3efc
	if (!ctx.cr0.eq) goto loc_82EB3EFC;
loc_82EB4158:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB4160"))) PPC_WEAK_FUNC(sub_82EB4160);
PPC_FUNC_IMPL(__imp__sub_82EB4160) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb41ec
	if (ctx.cr6.eq) goto loc_82EB41EC;
loc_82EB416C:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bge cr6,0x82eb41f4
	if (!ctx.cr6.lt) goto loc_82EB41F4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82eb41bc
	if (ctx.cr6.eq) goto loc_82EB41BC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82EB4190:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bge cr6,0x82eb41f4
	if (!ctx.cr6.lt) goto loc_82EB41F4;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// beq cr6,0x82eb41f4
	if (ctx.cr6.eq) goto loc_82EB41F4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb4190
	if (ctx.cr6.lt) goto loc_82EB4190;
loc_82EB41BC:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x82eb41f4
	if (ctx.cr6.gt) goto loc_82EB41F4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82eb41f4
	if (ctx.cr6.gt) goto loc_82EB41F4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82eb416c
	if (ctx.cr6.lt) goto loc_82EB416C;
loc_82EB41EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EB41F4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4200"))) PPC_WEAK_FUNC(sub_82EB4200);
PPC_FUNC_IMPL(__imp__sub_82EB4200) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb4224
	if (ctx.cr6.eq) goto loc_82EB4224;
loc_82EB4218:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82EB4224:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82eb4218
	if (!ctx.cr6.lt) goto loc_82EB4218;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82eb4258
	if (ctx.cr6.eq) goto loc_82EB4258;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82eb4258
	if (ctx.cr6.eq) goto loc_82EB4258;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82eb4258
	if (ctx.cr6.eq) goto loc_82EB4258;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82eb4218
	if (!ctx.cr6.eq) goto loc_82EB4218;
loc_82EB4258:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4260"))) PPC_WEAK_FUNC(sub_82EB4260);
PPC_FUNC_IMPL(__imp__sub_82EB4260) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EB4268;
	__savegprlr_29(ctx, base);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r29,r7,4
	ctx.r29.s64 = ctx.r7.s64 + 4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bne cr6,0x82eb42ac
	if (!ctx.cr6.eq) goto loc_82EB42AC;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x82eb42f4
	goto loc_82EB42F4;
loc_82EB42AC:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x82eb42c4
	if (!ctx.cr6.eq) goto loc_82EB42C4;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82eb42f4
	goto loc_82EB42F4;
loc_82EB42C4:
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bne cr6,0x82eb42e0
	if (!ctx.cr6.eq) goto loc_82EB42E0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x82eb42f4
	goto loc_82EB42F4;
loc_82EB42E0:
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// bne cr6,0x82eb42f8
	if (!ctx.cr6.eq) goto loc_82EB42F8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82EB42F4:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82EB42F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB4300"))) PPC_WEAK_FUNC(sub_82EB4300);
PPC_FUNC_IMPL(__imp__sub_82EB4300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB4308;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r28,r31,r4
	ctx.r28.u64 = ctx.r31.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb4428
	if (ctx.cr6.lt) goto loc_82EB4428;
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// ori r10,r10,513
	ctx.r10.u64 = ctx.r10.u64 | 513;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82eb4350
	if (!ctx.cr6.gt) goto loc_82EB4350;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eb4428
	if (!ctx.cr6.eq) goto loc_82EB4428;
loc_82EB4350:
	// lis r4,17228
	ctx.r4.s64 = 1129054208;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,22598
	ctx.r4.u64 = ctx.r4.u64 | 22598;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ec9228
	ctx.lr = 0x82EB4368;
	sub_82EC9228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb4428
	if (ctx.cr0.lt) goto loc_82EB4428;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82eb4428
	if (ctx.cr6.eq) goto loc_82EB4428;
	// lis r4,21577
	ctx.r4.s64 = 1414070272;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,19523
	ctx.r4.u64 = ctx.r4.u64 | 19523;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ec9228
	ctx.lr = 0x82EB4390;
	sub_82EC9228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb4428
	if (ctx.cr0.lt) goto loc_82EB4428;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82eb4428
	if (ctx.cr6.eq) goto loc_82EB4428;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb4428
	if (ctx.cr6.eq) goto loc_82EB4428;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb4428
	if (ctx.cr6.eq) goto loc_82EB4428;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb4430
	if (ctx.cr6.eq) goto loc_82EB4430;
	// b 0x82eb43d8
	goto loc_82EB43D8;
loc_82EB43D4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EB43D8:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82eb4428
	if (!ctx.cr6.lt) goto loc_82EB4428;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82eb4160
	ctx.lr = 0x82EB43FC;
	sub_82EB4160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb4430
	if (ctx.cr0.lt) goto loc_82EB4430;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb4200
	ctx.lr = 0x82EB4410;
	sub_82EB4200(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb4430
	if (ctx.cr0.lt) goto loc_82EB4430;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82eb43d4
	if (ctx.cr6.lt) goto loc_82EB43D4;
	// b 0x82eb4430
	goto loc_82EB4430;
loc_82EB4428:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB4430:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB4438"))) PPC_WEAK_FUNC(sub_82EB4438);
PPC_FUNC_IMPL(__imp__sub_82EB4438) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb4494
	if (ctx.cr6.eq) goto loc_82EB4494;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_82EB4460:
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bge cr6,0x82eb44c0
	if (!ctx.cr6.lt) goto loc_82EB44C0;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lfdx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// blt cr6,0x82eb4460
	if (ctx.cr6.lt) goto loc_82EB4460;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82eb44c0
	if (!ctx.cr6.lt) goto loc_82EB44C0;
loc_82EB4494:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb44c0
	if (ctx.cr6.eq) goto loc_82EB44C0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EB44B4:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82eb44b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB44B4;
loc_82EB44C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f12cc0
	ctx.lr = 0x82EB44C8;
	sub_82F12CC0(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
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

__attribute__((alias("__imp__sub_82EB44E0"))) PPC_WEAK_FUNC(sub_82EB44E0);
PPC_FUNC_IMPL(__imp__sub_82EB44E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EB44E8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ae8
	ctx.lr = 0x82EB44F0;
	__savefpr_28(ctx, base);
	// stwu r1,-3392(r1)
	ea = -3392 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// lwz r17,0(r4)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r7,3444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3444, ctx.r7.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// stw r29,3428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3428, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,3436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3436, ctx.r28.u32);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82eb50f0
	if (ctx.cr6.eq) goto loc_82EB50F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r23,3516(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3516);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r22,3508(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3508);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r21,3500(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3500);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r16,3484(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3484);
	// lwz r15,3476(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3476);
	// lis r14,8256
	ctx.r14.s64 = 541065216;
	// lwz r25,132(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfd f28,19424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19424);
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfd f29,-18376(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18376);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfd f31,-18344(r9)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18344);
	// lfd f30,-18352(r8)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18352);
	// b 0x82eb458c
	goto loc_82EB458C;
loc_82EB4584:
	// lwz r28,3436(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3436);
	// lwz r29,3428(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3428);
loc_82EB458C:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi r10,r31,12
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFFF;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb47ec
	if (ctx.cr6.eq) goto loc_82EB47EC;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EB45B0:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82eb46ec
	if (ctx.cr6.eq) goto loc_82EB46EC;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82EB45C8:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bne cr6,0x82eb4600
	if (!ctx.cr6.eq) goto loc_82EB4600;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// addi r9,r1,1152
	ctx.r9.s64 = ctx.r1.s64 + 1152;
	// lfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EB4600:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82eb4634
	if (!ctx.cr6.eq) goto loc_82EB4634;
	// divwu r9,r11,r17
	ctx.r9.u32 = ctx.r11.u32 / ctx.r17.u32;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// twllei r17,0
	// mullw r9,r9,r17
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r17.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82eb46e4
	goto loc_82EB46E4;
loc_82EB4634:
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x82eb4658
	if (!ctx.cr6.eq) goto loc_82EB4658;
	// and r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 & ctx.r16.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r28.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82eb46e4
	goto loc_82EB46E4;
loc_82EB4658:
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x82eb467c
	if (!ctx.cr6.eq) goto loc_82EB467C;
	// and r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 & ctx.r15.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r29.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82eb46e4
	goto loc_82EB46E4;
loc_82EB467C:
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x82eb46a0
	if (!ctx.cr6.eq) goto loc_82EB46A0;
	// and r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 & ctx.r21.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r20
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r20.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82eb46e4
	goto loc_82EB46E4;
loc_82EB46A0:
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// bne cr6,0x82eb46c4
	if (!ctx.cr6.eq) goto loc_82EB46C4;
	// and r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r18
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r18.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82eb46e4
	goto loc_82EB46E4;
loc_82EB46C4:
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// bne cr6,0x82eb46e4
	if (!ctx.cr6.eq) goto loc_82EB46E4;
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & ctx.r22.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r11,r19
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r19.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EB46E4:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82eb45c8
	if (!ctx.cr0.eq) goto loc_82EB45C8;
loc_82EB46EC:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bne cr6,0x82eb471c
	if (!ctx.cr6.eq) goto loc_82EB471C;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// addi r9,r1,1152
	ctx.r9.s64 = ctx.r1.s64 + 1152;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82eb47d4
	goto loc_82EB47D4;
loc_82EB471C:
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x82eb4734
	if (!ctx.cr6.eq) goto loc_82EB4734;
	// and r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 & ctx.r16.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82eb47d4
	goto loc_82EB47D4;
loc_82EB4734:
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x82eb474c
	if (!ctx.cr6.eq) goto loc_82EB474C;
	// and r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 & ctx.r15.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82eb47d4
	goto loc_82EB47D4;
loc_82EB474C:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82eb4774
	if (!ctx.cr6.eq) goto loc_82EB4774;
	// divwu r9,r11,r17
	ctx.r9.u32 = ctx.r11.u32 / ctx.r17.u32;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// twllei r17,0
	// mullw r9,r9,r17
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r17.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82EB476C:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82eb47d4
	goto loc_82EB47D4;
loc_82EB4774:
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// bne cr6,0x82eb4790
	if (!ctx.cr6.eq) goto loc_82EB4790;
	// lwz r9,3492(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3492);
	// lwz r8,3444(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3444);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82eb476c
	goto loc_82EB476C;
loc_82EB4790:
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x82eb47a8
	if (!ctx.cr6.eq) goto loc_82EB47A8;
	// and r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 & ctx.r21.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// b 0x82eb47d4
	goto loc_82EB47D4;
loc_82EB47A8:
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// bne cr6,0x82eb47c0
	if (!ctx.cr6.eq) goto loc_82EB47C0;
	// and r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// b 0x82eb47d4
	goto loc_82EB47D4;
loc_82EB47C0:
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// bne cr6,0x82eb47d8
	if (!ctx.cr6.eq) goto loc_82EB47D8;
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & ctx.r22.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
loc_82EB47D4:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82EB47D8:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82eb45b0
	if (!ctx.cr0.eq) goto loc_82EB45B0;
	// lwz r25,132(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82EB47EC:
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// addi r24,r9,4
	ctx.r24.s64 = ctx.r9.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x82eb4818
	if (!ctx.cr6.eq) goto loc_82EB4818;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// addi r9,r1,1152
	ctx.r9.s64 = ctx.r1.s64 + 1152;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82eb485c
	goto loc_82EB485C;
loc_82EB4818:
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x82eb4830
	if (!ctx.cr6.eq) goto loc_82EB4830;
	// and r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 & ctx.r21.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r20
	ctx.r27.u64 = ctx.r11.u64 + ctx.r20.u64;
	// b 0x82eb485c
	goto loc_82EB485C;
loc_82EB4830:
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// bne cr6,0x82eb4848
	if (!ctx.cr6.eq) goto loc_82EB4848;
	// and r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r18
	ctx.r27.u64 = ctx.r11.u64 + ctx.r18.u64;
	// b 0x82eb485c
	goto loc_82EB485C;
loc_82EB4848:
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// bne cr6,0x82eb485c
	if (!ctx.cr6.eq) goto loc_82EB485C;
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & ctx.r22.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r19
	ctx.r27.u64 = ctx.r11.u64 + ctx.r19.u64;
loc_82EB485C:
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r31,0,1,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x7FF00000;
	// beq 0x82eb4a80
	if (ctx.cr0.eq) goto loc_82EB4A80;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bgt cr6,0x82eb49c4
	if (ctx.cr6.gt) goto loc_82EB49C4;
	// beq cr6,0x82eb4994
	if (ctx.cr6.eq) goto loc_82EB4994;
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb495c
	if (ctx.cr6.eq) goto loc_82EB495C;
	// lis r9,8208
	ctx.r9.s64 = 537919488;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4924
	if (ctx.cr6.eq) goto loc_82EB4924;
	// lis r9,8224
	ctx.r9.s64 = 538968064;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb48e4
	if (ctx.cr6.eq) goto loc_82EB48E4;
	// lis r9,8240
	ctx.r9.s64 = 540016640;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eb50d8
	if (!ctx.cr6.eq) goto loc_82EB50D8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r9,r27,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r27.s64;
loc_82EB48B4:
	// lfd f0,0(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// lfdx f13,r9,r11
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eb48cc
	if (ctx.cr6.lt) goto loc_82EB48CC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb48d0
	goto loc_82EB48D0;
loc_82EB48CC:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB48D0:
	// stfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb48b4
	if (!ctx.cr0.eq) goto loc_82EB48B4;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB48E4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r9,r27,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r27.s64;
loc_82EB48F4:
	// lfd f0,0(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// lfdx f13,r11,r9
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb490c
	if (!ctx.cr6.lt) goto loc_82EB490C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb4910
	goto loc_82EB4910;
loc_82EB490C:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB4910:
	// stfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb48f4
	if (!ctx.cr0.eq) goto loc_82EB48F4;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4924:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r9,r25,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r25.s64;
loc_82EB4934:
	// lfd f0,0(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82eb4948
	if (ctx.cr6.gt) goto loc_82EB4948;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB4948:
	// stfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb4934
	if (!ctx.cr0.eq) goto loc_82EB4934;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB495C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r9,r25,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r25.s64;
loc_82EB496C:
	// lfd f0,0(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eb4980
	if (ctx.cr6.lt) goto loc_82EB4980;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB4980:
	// stfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + ctx.r9.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb496c
	if (!ctx.cr0.eq) goto loc_82EB496C;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4994:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r9,r27,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r27.s64;
loc_82EB49A4:
	// lfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r26)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// stfd f0,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb49a4
	if (!ctx.cr0.eq) goto loc_82EB49A4;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB49C4:
	// lis r9,8272
	ctx.r9.s64 = 542113792;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4a50
	if (ctx.cr6.eq) goto loc_82EB4A50;
	// lis r9,8288
	ctx.r9.s64 = 543162368;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4a1c
	if (ctx.cr6.eq) goto loc_82EB4A1C;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eb50d8
	if (!ctx.cr6.eq) goto loc_82EB50D8;
	// stfd f31,0(r27)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.f31.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB49F8:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r26)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfd f12,0(r27)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// fmadd f0,f13,f0,f12
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64;
	// stfd f0,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.f0.u64);
	// bne 0x82eb49f8
	if (!ctx.cr0.eq) goto loc_82EB49F8;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4A1C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subf r29,r27,r25
	ctx.r29.s64 = ctx.r25.s64 - ctx.r27.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82EB4A30:
	// lfdx f2,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r29.u32);
	// lfd f1,0(r26)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// bl 0x82cb4678
	ctx.lr = 0x82EB4A3C;
	sub_82CB4678(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb4a30
	if (!ctx.cr0.eq) goto loc_82EB4A30;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4A50:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r9,r27,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r27.s64;
loc_82EB4A60:
	// lfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r26)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfd f0,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb4a60
	if (!ctx.cr0.eq) goto loc_82EB4A60;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4A80:
	// lis r9,4288
	ctx.r9.s64 = 281018368;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82eb4d6c
	if (ctx.cr6.gt) goto loc_82EB4D6C;
	// beq cr6,0x82eb4d3c
	if (ctx.cr6.eq) goto loc_82EB4D3C;
	// lis r9,4192
	ctx.r9.s64 = 274726912;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82eb4c0c
	if (ctx.cr6.gt) goto loc_82EB4C0C;
	// beq cr6,0x82eb4bb4
	if (ctx.cr6.eq) goto loc_82EB4BB4;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4ba0
	if (ctx.cr6.eq) goto loc_82EB4BA0;
	// lis r9,4112
	ctx.r9.s64 = 269484032;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4b74
	if (ctx.cr6.eq) goto loc_82EB4B74;
	// lis r9,4144
	ctx.r9.s64 = 271581184;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4b48
	if (ctx.cr6.eq) goto loc_82EB4B48;
	// lis r9,4160
	ctx.r9.s64 = 272629760;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4b10
	if (ctx.cr6.eq) goto loc_82EB4B10;
	// lis r9,4176
	ctx.r9.s64 = 273678336;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eb50d8
	if (!ctx.cr6.eq) goto loc_82EB50D8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subf r29,r27,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82EB4AF0:
	// lfdx f2,r29,r31
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r31.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82EB4AFC;
	sub_82CB59B0(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb4af0
	if (!ctx.cr0.eq) goto loc_82EB4AF0;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4B10:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// subf r29,r26,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r26.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82EB4B24:
	// lfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82cb2298
	ctx.lr = 0x82EB4B2C;
	sub_82CB2298(ctx, base);
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fsub f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 - ctx.f1.f64;
	// stfdx f0,r29,r31
	PPC_STORE_U64(ctx.r29.u32 + ctx.r31.u32, ctx.f0.u64);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb4b24
	if (!ctx.cr0.eq) goto loc_82EB4B24;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4B48:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r9,r27,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_82EB4B58:
	// lfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fdiv f0,f30,f0
	ctx.f0.f64 = ctx.f30.f64 / ctx.f0.f64;
	// stfd f0,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb4b58
	if (!ctx.cr0.eq) goto loc_82EB4B58;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4B74:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r9,r27,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_82EB4B84:
	// lfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb4b84
	if (!ctx.cr0.eq) goto loc_82EB4B84;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4BA0:
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB4BB0;
	sub_82CB1160(ctx, base);
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4BB4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// subf r28,r27,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82EB4BCC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82eb4bf4
	if (ctx.cr6.eq) goto loc_82EB4BF4;
	// lfdx f0,r31,r28
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r28.u32);
	// fabs f1,f0
	ctx.f1.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// bl 0x82cb4db8
	ctx.lr = 0x82EB4BE8;
	sub_82CB4DB8(ctx, base);
	// fmul f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f28.f64;
	// stfd f0,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
	// b 0x82eb4bf8
	goto loc_82EB4BF8;
loc_82EB4BF4:
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f31.u64);
loc_82EB4BF8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb4bcc
	if (!ctx.cr0.eq) goto loc_82EB4BCC;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4C0C:
	// lis r9,4208
	ctx.r9.s64 = 275775488;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4d08
	if (ctx.cr6.eq) goto loc_82EB4D08;
	// lis r9,4224
	ctx.r9.s64 = 276824064;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4cd8
	if (ctx.cr6.eq) goto loc_82EB4CD8;
	// lis r9,4240
	ctx.r9.s64 = 277872640;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4ca8
	if (ctx.cr6.eq) goto loc_82EB4CA8;
	// lis r9,4256
	ctx.r9.s64 = 278921216;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4c78
	if (ctx.cr6.eq) goto loc_82EB4C78;
	// lis r9,4272
	ctx.r9.s64 = 279969792;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eb50d8
	if (!ctx.cr6.eq) goto loc_82EB50D8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subf r29,r27,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82EB4C5C:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82cb44c0
	ctx.lr = 0x82EB4C64;
	sub_82CB44C0(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb4c5c
	if (!ctx.cr0.eq) goto loc_82EB4C5C;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4C78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subf r29,r27,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82EB4C8C:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82cb43f8
	ctx.lr = 0x82EB4C94;
	sub_82CB43F8(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb4c8c
	if (!ctx.cr0.eq) goto loc_82EB4C8C;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4CA8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subf r29,r27,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82EB4CBC:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82cb4940
	ctx.lr = 0x82EB4CC4;
	sub_82CB4940(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb4cbc
	if (!ctx.cr0.eq) goto loc_82EB4CBC;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4CD8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subf r29,r27,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82EB4CEC:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82EB4CF4;
	sub_82CB4860(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb4cec
	if (!ctx.cr0.eq) goto loc_82EB4CEC;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4D08:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r9,r27,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_82EB4D18:
	// lfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsqrt f0,f0
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// fdiv f0,f30,f0
	ctx.f0.f64 = ctx.f30.f64 / ctx.f0.f64;
	// stfd f0,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb4d18
	if (!ctx.cr0.eq) goto loc_82EB4D18;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4D3C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subf r29,r27,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82EB4D50:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82cb4590
	ctx.lr = 0x82EB4D58;
	sub_82CB4590(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb4d50
	if (!ctx.cr0.eq) goto loc_82EB4D50;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4D6C:
	// lis r9,8272
	ctx.r9.s64 = 542113792;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82eb4f1c
	if (ctx.cr6.gt) goto loc_82EB4F1C;
	// beq cr6,0x82eb4ee8
	if (ctx.cr6.eq) goto loc_82EB4EE8;
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4eac
	if (ctx.cr6.eq) goto loc_82EB4EAC;
	// lis r9,8208
	ctx.r9.s64 = 537919488;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4e70
	if (ctx.cr6.eq) goto loc_82EB4E70;
	// lis r9,8224
	ctx.r9.s64 = 538968064;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4e2c
	if (ctx.cr6.eq) goto loc_82EB4E2C;
	// lis r9,8240
	ctx.r9.s64 = 540016640;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4de8
	if (ctx.cr6.eq) goto loc_82EB4DE8;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x82eb50d8
	if (!ctx.cr6.eq) goto loc_82EB50D8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r9,r26,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r26.s64;
	// subf r8,r26,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r26.s64;
loc_82EB4DC8:
	// lfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// stfdx f0,r11,r8
	PPC_STORE_U64(ctx.r11.u32 + ctx.r8.u32, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb4dc8
	if (!ctx.cr0.eq) goto loc_82EB4DC8;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4DE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r8,r25,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r25.s64;
	// subf r9,r25,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r25.s64;
loc_82EB4DFC:
	// lfdx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eb4e14
	if (ctx.cr6.lt) goto loc_82EB4E14;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb4e18
	goto loc_82EB4E18;
loc_82EB4E14:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB4E18:
	// stfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + ctx.r9.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb4dfc
	if (!ctx.cr0.eq) goto loc_82EB4DFC;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4E2C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r8,r25,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r25.s64;
	// subf r9,r25,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r25.s64;
loc_82EB4E40:
	// lfdx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb4e58
	if (!ctx.cr6.lt) goto loc_82EB4E58;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb4e5c
	goto loc_82EB4E5C;
loc_82EB4E58:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB4E5C:
	// stfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + ctx.r9.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb4e40
	if (!ctx.cr0.eq) goto loc_82EB4E40;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4E70:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r8,r25,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r25.s64;
	// subf r9,r25,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r25.s64;
loc_82EB4E84:
	// lfdx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82eb4e98
	if (ctx.cr6.gt) goto loc_82EB4E98;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB4E98:
	// stfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + ctx.r9.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb4e84
	if (!ctx.cr0.eq) goto loc_82EB4E84;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4EAC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r8,r25,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r25.s64;
	// subf r9,r25,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r25.s64;
loc_82EB4EC0:
	// lfdx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eb4ed4
	if (ctx.cr6.lt) goto loc_82EB4ED4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB4ED4:
	// stfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb4ec0
	if (!ctx.cr0.eq) goto loc_82EB4EC0;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4EE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r9,r26,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r26.s64;
	// subf r8,r26,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r26.s64;
loc_82EB4EFC:
	// lfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfdx f0,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + ctx.r11.u32, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb4efc
	if (!ctx.cr0.eq) goto loc_82EB4EFC;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4F1C:
	// lis r9,8288
	ctx.r9.s64 = 543162368;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb50a4
	if (ctx.cr6.eq) goto loc_82EB50A4;
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb505c
	if (ctx.cr6.eq) goto loc_82EB505C;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb5024
	if (ctx.cr6.eq) goto loc_82EB5024;
	// lis r9,20512
	ctx.r9.s64 = 1344274432;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb4fa4
	if (ctx.cr6.eq) goto loc_82EB4FA4;
	// lis r10,28896
	ctx.r10.s64 = 1893728256;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eb50d8
	if (!ctx.cr6.eq) goto loc_82EB50D8;
	// stfd f31,0(r27)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.f31.u64);
	// rlwinm. r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb50d8
	if (ctx.cr0.eq) goto loc_82EB50D8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EB4F74:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfd f0,0(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfd f13,0(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfd f12,0(r7)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// fmadd f0,f13,f12,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64;
	// stfd f0,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.f0.u64);
	// bne 0x82eb4f74
	if (!ctx.cr0.eq) goto loc_82EB4F74;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB4FA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb4fe8
	if (ctx.cr6.eq) goto loc_82EB4FE8;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82EB4FB8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82eb5014
	if (!ctx.cr6.lt) goto loc_82EB5014;
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb4fb8
	if (ctx.cr6.lt) goto loc_82EB4FB8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82eb5014
	if (!ctx.cr6.lt) goto loc_82EB5014;
loc_82EB4FE8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5014
	if (ctx.cr6.eq) goto loc_82EB5014;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EB5008:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82eb5008
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB5008;
loc_82EB5014:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f12cc0
	ctx.lr = 0x82EB501C;
	sub_82F12CC0(ctx, base);
	// stfd f1,0(r27)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.f1.u64);
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB5024:
	// stfd f31,0(r27)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.f31.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r9,r26,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r26.s64;
loc_82EB5038:
	// lfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfd f12,0(r27)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// fmadd f0,f0,f13,f12
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64;
	// stfd f0,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.f0.u64);
	// bne 0x82eb5038
	if (!ctx.cr0.eq) goto loc_82EB5038;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB505C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r8,r25,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r25.s64;
	// subf r7,r25,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r25.s64;
	// subf r9,r25,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r25.s64;
loc_82EB5078:
	// lfdx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb508c
	if (ctx.cr6.lt) goto loc_82EB508C;
	// lfd f0,0(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x82eb5090
	goto loc_82EB5090;
loc_82EB508C:
	// lfdx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r11.u32);
loc_82EB5090:
	// stfdx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + ctx.r9.u32, ctx.f0.u64);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb5078
	if (!ctx.cr0.eq) goto loc_82EB5078;
	// b 0x82eb50d8
	goto loc_82EB50D8;
loc_82EB50A4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb50d8
	if (ctx.cr6.eq) goto loc_82EB50D8;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// subf r29,r26,r25
	ctx.r29.s64 = ctx.r25.s64 - ctx.r26.s64;
	// subf r28,r26,r27
	ctx.r28.s64 = ctx.r27.s64 - ctx.r26.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82EB50BC:
	// lfdx f2,r29,r31
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r31.u32);
	// lfd f1,0(r31)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82cb4678
	ctx.lr = 0x82EB50C8;
	sub_82CB4678(ctx, base);
	// stfdx f1,r28,r31
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r28.u32 + ctx.r31.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb50bc
	if (!ctx.cr0.eq) goto loc_82EB50BC;
loc_82EB50D8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb4584
	if (ctx.cr6.lt) goto loc_82EB4584;
loc_82EB50F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3392
	ctx.r1.s64 = ctx.r1.s64 + 3392;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b34
	ctx.lr = 0x82EB5100;
	__restfpr_28(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5104"))) PPC_WEAK_FUNC(sub_82EB5104);
PPC_FUNC_IMPL(__imp__sub_82EB5104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5108"))) PPC_WEAK_FUNC(sub_82EB5108);
PPC_FUNC_IMPL(__imp__sub_82EB5108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB510C"))) PPC_WEAK_FUNC(sub_82EB510C);
PPC_FUNC_IMPL(__imp__sub_82EB510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5110"))) PPC_WEAK_FUNC(sub_82EB5110);
PPC_FUNC_IMPL(__imp__sub_82EB5110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EB5118;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lwz r11,18108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eb51e8
	if (!ctx.cr6.eq) goto loc_82EB51E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,18108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18108, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82299698
	ctx.lr = 0x82EB5144;
	sub_82299698(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82299698
	ctx.lr = 0x82EB5154;
	sub_82299698(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb5170
	if (ctx.cr6.eq) goto loc_82EB5170;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb5170
	if (ctx.cr6.eq) goto loc_82EB5170;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82eb5174
	if (!ctx.cr6.eq) goto loc_82EB5174;
loc_82EB5170:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EB5174:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb5188
	if (ctx.cr6.eq) goto loc_82EB5188;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB5188;
	sub_822996C0(ctx, base);
loc_82EB5188:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb51a4
	if (ctx.cr6.eq) goto loc_82EB51A4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82eb51a4
	if (ctx.cr6.eq) goto loc_82EB51A4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB51A4;
	sub_822996C0(ctx, base);
loc_82EB51A4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822996c0
	ctx.lr = 0x82EB51B0;
	sub_822996C0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82eb51e8
	if (ctx.cr6.eq) goto loc_82EB51E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-3048
	ctx.r3.s64 = ctx.r11.s64 + -3048;
	// bl 0x82e67098
	ctx.lr = 0x82EB51C4;
	sub_82E67098(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-3144
	ctx.r3.s64 = ctx.r11.s64 + -3144;
	// bl 0x82e67098
	ctx.lr = 0x82EB51D0;
	sub_82E67098(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-3232
	ctx.r3.s64 = ctx.r11.s64 + -3232;
	// bl 0x82e67098
	ctx.lr = 0x82EB51DC;
	sub_82E67098(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-3284
	ctx.r3.s64 = ctx.r11.s64 + -3284;
	// bl 0x82e67098
	ctx.lr = 0x82EB51E8;
	sub_82E67098(ctx, base);
loc_82EB51E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB51F0"))) PPC_WEAK_FUNC(sub_82EB51F0);
PPC_FUNC_IMPL(__imp__sub_82EB51F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5208"))) PPC_WEAK_FUNC(sub_82EB5208);
PPC_FUNC_IMPL(__imp__sub_82EB5208) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82eb5234
	if (!ctx.cr6.eq) goto loc_82EB5234;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82eb5284
	goto loc_82EB5284;
loc_82EB5234:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82eb5248
	if (ctx.cr6.eq) goto loc_82EB5248;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb5284
	goto loc_82EB5284;
loc_82EB5248:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// bl 0x82bea2a0
	ctx.lr = 0x82EB5264;
	sub_82BEA2A0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82eb5280
	if (!ctx.cr6.eq) goto loc_82EB5280;
	// bl 0x82bf2188
	ctx.lr = 0x82EB5274;
	sub_82BF2188(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82eb5284
	goto loc_82EB5284;
loc_82EB5280:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB5284:
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

__attribute__((alias("__imp__sub_82EB5298"))) PPC_WEAK_FUNC(sub_82EB5298);
PPC_FUNC_IMPL(__imp__sub_82EB5298) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82eb52c8
	if (!ctx.cr6.eq) goto loc_82EB52C8;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82eb5378
	goto loc_82EB5378;
loc_82EB52C8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82eb52dc
	if (ctx.cr6.eq) goto loc_82EB52DC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb5378
	goto loc_82EB5378;
loc_82EB52DC:
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82bea2a0
	ctx.lr = 0x82EB52F8;
	sub_82BEA2A0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82eb5364
	if (ctx.cr6.eq) goto loc_82EB5364;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e65440
	ctx.lr = 0x82EB530C;
	sub_82E65440(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82eb5364
	if (ctx.cr6.eq) goto loc_82EB5364;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb533c
	if (ctx.cr6.eq) goto loc_82EB533C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EB532C;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82eb5364
	if (ctx.cr0.eq) goto loc_82EB5364;
	// b 0x82eb5340
	goto loc_82EB5340;
loc_82EB533C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82EB5340:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e654a8
	ctx.lr = 0x82EB535C;
	sub_82E654A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb5374
	if (!ctx.cr0.eq) goto loc_82EB5374;
loc_82EB5364:
	// bl 0x82bf2188
	ctx.lr = 0x82EB5368;
	sub_82BF2188(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82eb5378
	goto loc_82EB5378;
loc_82EB5374:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB5378:
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

__attribute__((alias("__imp__sub_82EB5390"))) PPC_WEAK_FUNC(sub_82EB5390);
PPC_FUNC_IMPL(__imp__sub_82EB5390) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb53c4
	if (ctx.cr6.eq) goto loc_82EB53C4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB53B8;
	sub_822996C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82EB53C4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82eb53dc
	if (ctx.cr6.eq) goto loc_82EB53DC;
	// bl 0x82bea4e0
	ctx.lr = 0x82EB53D4;
	sub_82BEA4E0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EB53DC:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82EB53F4"))) PPC_WEAK_FUNC(sub_82EB53F4);
PPC_FUNC_IMPL(__imp__sub_82EB53F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB53F8"))) PPC_WEAK_FUNC(sub_82EB53F8);
PPC_FUNC_IMPL(__imp__sub_82EB53F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82eb5390
	sub_82EB5390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5408"))) PPC_WEAK_FUNC(sub_82EB5408);
PPC_FUNC_IMPL(__imp__sub_82EB5408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB540C"))) PPC_WEAK_FUNC(sub_82EB540C);
PPC_FUNC_IMPL(__imp__sub_82EB540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5410"))) PPC_WEAK_FUNC(sub_82EB5410);
PPC_FUNC_IMPL(__imp__sub_82EB5410) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5420"))) PPC_WEAK_FUNC(sub_82EB5420);
PPC_FUNC_IMPL(__imp__sub_82EB5420) {
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

__attribute__((alias("__imp__sub_82EB5434"))) PPC_WEAK_FUNC(sub_82EB5434);
PPC_FUNC_IMPL(__imp__sub_82EB5434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5438"))) PPC_WEAK_FUNC(sub_82EB5438);
PPC_FUNC_IMPL(__imp__sub_82EB5438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EB5440;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb547c
	if (ctx.cr0.eq) goto loc_82EB547C;
loc_82EB5470:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb55dc
	goto loc_82EB55DC;
loc_82EB547C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,72(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r6,68(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r5,64(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82eb5470
	if (!ctx.cr0.eq) goto loc_82EB5470;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// addis r10,r10,-6688
	ctx.r10.s64 = ctx.r10.s64 + -438304768;
	// addic. r10,r10,-18
	ctx.xer.ca = ctx.r10.u32 > 17;
	ctx.r10.s64 = ctx.r10.s64 + -18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb54d4
	if (ctx.cr0.eq) goto loc_82EB54D4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82eb54cc
	if (ctx.cr6.eq) goto loc_82EB54CC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82eb5470
	if (!ctx.cr6.eq) goto loc_82EB5470;
loc_82EB54CC:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82eb54d8
	goto loc_82EB54D8;
loc_82EB54D4:
	// li r10,8
	ctx.r10.s64 = 8;
loc_82EB54D8:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r9,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r29,76(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mullw r5,r8,r6
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,64(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// lwz r8,96(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// lwz r28,76(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r27,60(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r26,104(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// lwz r7,32(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r23,112(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r24,r11,30,2,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r6,r28
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r4,r29
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// rlwinm r4,r27,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r6,r30,r10
	ctx.r6.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r26,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mullw r24,r5,r10
	ctx.r24.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// ble cr6,0x82eb55d8
	if (!ctx.cr6.gt) goto loc_82EB55D8;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
loc_82EB5564:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb55b0
	if (ctx.cr6.eq) goto loc_82EB55B0;
loc_82EB5578:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB5588;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb5578
	if (ctx.cr6.lt) goto loc_82EB5578;
loc_82EB55B0:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,100(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r8,112(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb5564
	if (ctx.cr6.lt) goto loc_82EB5564;
loc_82EB55D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB55DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB55E4"))) PPC_WEAK_FUNC(sub_82EB55E4);
PPC_FUNC_IMPL(__imp__sub_82EB55E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB55E8"))) PPC_WEAK_FUNC(sub_82EB55E8);
PPC_FUNC_IMPL(__imp__sub_82EB55E8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB55F4"))) PPC_WEAK_FUNC(sub_82EB55F4);
PPC_FUNC_IMPL(__imp__sub_82EB55F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB55F8"))) PPC_WEAK_FUNC(sub_82EB55F8);
PPC_FUNC_IMPL(__imp__sub_82EB55F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EB5600;
	__savegprlr_23(ctx, base);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r26,r11,r4
	ctx.r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82eb56e8
	if (!ctx.cr6.lt) goto loc_82EB56E8;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r7,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82EB561C:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82eb56d4
	if (!ctx.cr6.lt) goto loc_82EB56D4;
	// subf r10,r4,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r4.s64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r29,r7,-4
	ctx.r29.s64 = ctx.r7.s64 + -4;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82EB5640:
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r25,-4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// clrlwi r5,r6,8
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFFFF;
	// lwzx r24,r11,r7
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r31,r6,30,2,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFC0;
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r30,r25,30,2,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r6,r25,8
	ctx.r6.u64 = ctx.r25.u32 & 0xFFFFFF;
	// rlwinm r5,r5,0,24,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r6,r6,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r30,r30,0,18,9
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r31,r31,0,18,9
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r30,r24,30,2,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r5,r24,8
	ctx.r5.u64 = ctx.r24.u32 & 0xFFFFFF;
	// rlwinm r30,r30,0,18,9
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r5,r5,0,24,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r30,r23,30,2,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r5,r23,8
	ctx.r5.u64 = ctx.r23.u32 & 0xFFFFFF;
	// rlwinm r30,r30,0,18,9
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r5,r5,0,24,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addis r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 8388608;
	// addis r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 131072;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwimi r5,r6,30,24,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 30) & 0xFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF00);
	// rlwimi r5,r6,30,8,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 30) & 0xFF0000) | (ctx.r5.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82eb5640
	if (!ctx.cr0.eq) goto loc_82EB5640;
loc_82EB56D4:
	// add r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 + ctx.r4.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82eb561c
	if (ctx.cr6.lt) goto loc_82EB561C;
loc_82EB56E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB56F0"))) PPC_WEAK_FUNC(sub_82EB56F0);
PPC_FUNC_IMPL(__imp__sub_82EB56F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31908
	ctx.r10.s64 = -2091122688;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r11,20032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20032);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EB5720"))) PPC_WEAK_FUNC(sub_82EB5720);
PPC_FUNC_IMPL(__imp__sub_82EB5720) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EB5728;
	__savegprlr_23(ctx, base);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r26,r11,r4
	ctx.r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82eb57fc
	if (!ctx.cr6.lt) goto loc_82EB57FC;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r7,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82EB5744:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82eb57e8
	if (!ctx.cr6.lt) goto loc_82EB57E8;
	// subf r10,r4,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r4.s64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r29,r7,-4
	ctx.r29.s64 = ctx.r7.s64 + -4;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82EB5768:
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r25,-4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// clrlwi r31,r6,8
	ctx.r31.u64 = ctx.r6.u32 & 0xFFFFFF;
	// lwzx r24,r11,r7
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r30,r25,8
	ctx.r30.u64 = ctx.r25.u32 & 0xFFFFFF;
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r31,r31,0,24,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r30,r30,0,24,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r5,r6,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// clrlwi r30,r24,8
	ctx.r30.u64 = ctx.r24.u32 & 0xFFFFFF;
	// rlwinm r6,r25,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFF00;
	// rlwinm r30,r30,0,24,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// clrlwi r30,r23,8
	ctx.r30.u64 = ctx.r23.u32 & 0xFFFFFF;
	// rlwinm r5,r24,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFF00;
	// rlwinm r30,r30,0,24,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r5,r23,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFF00;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwimi r5,r6,0,14,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FC00) | (ctx.r5.u64 & 0xFFFFFFFFFFFC03FF);
	// rlwinm r6,r5,30,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFFFFFF;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82eb5768
	if (!ctx.cr0.eq) goto loc_82EB5768;
loc_82EB57E8:
	// add r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 + ctx.r4.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82eb5744
	if (ctx.cr6.lt) goto loc_82EB5744;
loc_82EB57FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5804"))) PPC_WEAK_FUNC(sub_82EB5804);
PPC_FUNC_IMPL(__imp__sub_82EB5804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5808"))) PPC_WEAK_FUNC(sub_82EB5808);
PPC_FUNC_IMPL(__imp__sub_82EB5808) {
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
	// lis r9,-31908
	ctx.r9.s64 = -2091122688;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lis r31,-31908
	ctx.r31.s64 = -2091122688;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// addi r10,r10,22304
	ctx.r10.s64 = ctx.r10.s64 + 22304;
	// stw r11,20032(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20032, ctx.r11.u32);
	// stw r10,20036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20036, ctx.r10.u32);
	// bl 0x82eb55f8
	ctx.lr = 0x82EB583C;
	sub_82EB55F8(ctx, base);
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

__attribute__((alias("__imp__sub_82EB5850"))) PPC_WEAK_FUNC(sub_82EB5850);
PPC_FUNC_IMPL(__imp__sub_82EB5850) {
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
	// lis r9,-31908
	ctx.r9.s64 = -2091122688;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lis r31,-31908
	ctx.r31.s64 = -2091122688;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// addi r10,r10,22304
	ctx.r10.s64 = ctx.r10.s64 + 22304;
	// stw r11,20032(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20032, ctx.r11.u32);
	// stw r10,20036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20036, ctx.r10.u32);
	// bl 0x82eb5720
	ctx.lr = 0x82EB5884;
	sub_82EB5720(ctx, base);
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

__attribute__((alias("__imp__sub_82EB5898"))) PPC_WEAK_FUNC(sub_82EB5898);
PPC_FUNC_IMPL(__imp__sub_82EB5898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31908
	ctx.r10.s64 = -2091122688;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r11,20036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EB58C8"))) PPC_WEAK_FUNC(sub_82EB58C8);
PPC_FUNC_IMPL(__imp__sub_82EB58C8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EB58D0;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82eb59ac
	goto loc_82EB59AC;
loc_82EB58F4:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82eb5990
	if (!ctx.cr6.lt) goto loc_82EB5990;
loc_82EB5918:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// andi. r31,r6,63519
	ctx.r31.u64 = ctx.r6.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r5,r28,63519
	ctx.r5.u64 = ctx.r28.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rlwinm r4,r6,0,21,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x7E0;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r6,r28,0,21,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x7E0;
	// andi. r31,r27,63519
	ctx.r31.u64 = ctx.r27.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r4,r27,0,21,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x7E0;
	// andi. r31,r26,63519
	ctx.r31.u64 = ctx.r26.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r4,r26,0,21,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x7E0;
	// addi r5,r5,4098
	ctx.r5.s64 = ctx.r5.s64 + 4098;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r5,r5,30,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFFFF;
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// rlwinm r5,r5,0,27,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFF81F;
	// rlwinm r6,r6,30,21,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x7E0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eb5918
	if (ctx.cr6.lt) goto loc_82EB5918;
loc_82EB5990:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EB59AC:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb58f4
	if (ctx.cr6.lt) goto loc_82EB58F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB59BC"))) PPC_WEAK_FUNC(sub_82EB59BC);
PPC_FUNC_IMPL(__imp__sub_82EB59BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB59C0"))) PPC_WEAK_FUNC(sub_82EB59C0);
PPC_FUNC_IMPL(__imp__sub_82EB59C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EB59C8;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82eb5aa4
	goto loc_82EB5AA4;
loc_82EB59EC:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82eb5a88
	if (!ctx.cr6.lt) goto loc_82EB5A88;
loc_82EB5A10:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r31,r6,0,22,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3E0;
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r4,r6,31775
	ctx.r4.u64 = ctx.r6.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// andi. r6,r28,31775
	ctx.r6.u64 = ctx.r28.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r5,r28,0,22,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x3E0;
	// andi. r4,r27,31775
	ctx.r4.u64 = ctx.r27.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r27,0,22,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3E0;
	// andi. r4,r26,31775
	ctx.r4.u64 = ctx.r26.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r26,0,22,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x3E0;
	// addi r6,r6,2050
	ctx.r6.s64 = ctx.r6.s64 + 2050;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r6,r6,30,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x7FFF;
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// rlwinm r6,r6,0,27,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// rlwinm r5,r5,30,22,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3E0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eb5a10
	if (ctx.cr6.lt) goto loc_82EB5A10;
loc_82EB5A88:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EB5AA4:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb59ec
	if (ctx.cr6.lt) goto loc_82EB59EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5AB4"))) PPC_WEAK_FUNC(sub_82EB5AB4);
PPC_FUNC_IMPL(__imp__sub_82EB5AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5AB8"))) PPC_WEAK_FUNC(sub_82EB5AB8);
PPC_FUNC_IMPL(__imp__sub_82EB5AB8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EB5AC0;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82eb5ba4
	goto loc_82EB5BA4;
loc_82EB5AE4:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82eb5b88
	if (!ctx.cr6.lt) goto loc_82EB5B88;
loc_82EB5B08:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// andi. r31,r6,33760
	ctx.r31.u64 = ctx.r6.u64 & 33760;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r4,r28,33760
	ctx.r4.u64 = ctx.r28.u64 & 33760;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// andi. r5,r6,31775
	ctx.r5.u64 = ctx.r6.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andi. r6,r28,31775
	ctx.r6.u64 = ctx.r28.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// andi. r31,r27,33760
	ctx.r31.u64 = ctx.r27.u64 & 33760;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// andi. r5,r27,31775
	ctx.r5.u64 = ctx.r27.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// andi. r31,r26,33760
	ctx.r31.u64 = ctx.r26.u64 & 33760;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// andi. r5,r26,31775
	ctx.r5.u64 = ctx.r26.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addis r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 65536;
	// addi r6,r6,2050
	ctx.r6.s64 = ctx.r6.s64 + 2050;
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// rlwinm r6,r6,30,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x7FFF;
	// rlwinm r5,r5,30,16,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFFE0;
	// rlwinm r6,r6,0,27,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// rlwinm r5,r5,0,22,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF83FF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eb5b08
	if (ctx.cr6.lt) goto loc_82EB5B08;
loc_82EB5B88:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EB5BA4:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb5ae4
	if (ctx.cr6.lt) goto loc_82EB5AE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5BB4"))) PPC_WEAK_FUNC(sub_82EB5BB4);
PPC_FUNC_IMPL(__imp__sub_82EB5BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5BB8"))) PPC_WEAK_FUNC(sub_82EB5BB8);
PPC_FUNC_IMPL(__imp__sub_82EB5BB8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EB5BC0;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82eb5ca0
	goto loc_82EB5CA0;
loc_82EB5BE4:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82eb5c84
	if (!ctx.cr6.lt) goto loc_82EB5C84;
loc_82EB5C08:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// andi. r31,r6,61680
	ctx.r31.u64 = ctx.r6.u64 & 61680;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r4,r6,3855
	ctx.r4.u64 = ctx.r6.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// andi. r5,r28,61680
	ctx.r5.u64 = ctx.r28.u64 & 61680;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andi. r6,r28,3855
	ctx.r6.u64 = ctx.r28.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// andi. r31,r27,61680
	ctx.r31.u64 = ctx.r27.u64 & 61680;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// andi. r4,r27,3855
	ctx.r4.u64 = ctx.r27.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// andi. r31,r26,61680
	ctx.r31.u64 = ctx.r26.u64 & 61680;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// andi. r4,r26,3855
	ctx.r4.u64 = ctx.r26.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// addi r6,r6,514
	ctx.r6.s64 = ctx.r6.s64 + 514;
	// addi r5,r5,8224
	ctx.r5.s64 = ctx.r5.s64 + 8224;
	// rlwinm r6,r6,30,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFFF;
	// rlwinm r5,r5,30,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFFF0;
	// rlwinm r6,r6,0,28,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// rlwinm r5,r5,0,24,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eb5c08
	if (ctx.cr6.lt) goto loc_82EB5C08;
loc_82EB5C84:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EB5CA0:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb5be4
	if (ctx.cr6.lt) goto loc_82EB5BE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5CB0"))) PPC_WEAK_FUNC(sub_82EB5CB0);
PPC_FUNC_IMPL(__imp__sub_82EB5CB0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EB5CB8;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82eb5d90
	goto loc_82EB5D90;
loc_82EB5CDC:
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82eb5d74
	if (!ctx.cr6.lt) goto loc_82EB5D74;
loc_82EB5CFC:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// andi. r31,r6,227
	ctx.r31.u64 = ctx.r6.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lbz r27,1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// andi. r5,r28,227
	ctx.r5.u64 = ctx.r28.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lbz r26,1(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r4,r6,0,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1C;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r6,r28,0,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1C;
	// andi. r31,r27,227
	ctx.r31.u64 = ctx.r27.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r4,r27,0,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1C;
	// andi. r31,r26,227
	ctx.r31.u64 = ctx.r26.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r4,r26,0,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x1C;
	// addi r5,r5,66
	ctx.r5.s64 = ctx.r5.s64 + 66;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r5,r5,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFF;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// rlwinm r5,r5,0,30,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// rlwinm r6,r6,30,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x1C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eb5cfc
	if (ctx.cr6.lt) goto loc_82EB5CFC;
loc_82EB5D74:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EB5D90:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb5cdc
	if (ctx.cr6.lt) goto loc_82EB5CDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5DA0"))) PPC_WEAK_FUNC(sub_82EB5DA0);
PPC_FUNC_IMPL(__imp__sub_82EB5DA0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r31,32(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82eb5e44
	goto loc_82EB5E44;
loc_82EB5DCC:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82eb5e28
	if (!ctx.cr6.lt) goto loc_82EB5E28;
loc_82EB5DEC:
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,30,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFF;
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// blt cr6,0x82eb5dec
	if (ctx.cr6.lt) goto loc_82EB5DEC;
loc_82EB5E28:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,96(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82EB5E44:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82eb5dcc
	if (ctx.cr6.lt) goto loc_82EB5DCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5E5C"))) PPC_WEAK_FUNC(sub_82EB5E5C);
PPC_FUNC_IMPL(__imp__sub_82EB5E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5E60"))) PPC_WEAK_FUNC(sub_82EB5E60);
PPC_FUNC_IMPL(__imp__sub_82EB5E60) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EB5E68;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82eb5f48
	goto loc_82EB5F48;
loc_82EB5E8C:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82eb5f2c
	if (!ctx.cr6.lt) goto loc_82EB5F2C;
loc_82EB5EB0:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// andi. r31,r6,227
	ctx.r31.u64 = ctx.r6.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r4,r6,65308
	ctx.r4.u64 = ctx.r6.u64 & 65308;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// andi. r5,r28,227
	ctx.r5.u64 = ctx.r28.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andi. r6,r28,65308
	ctx.r6.u64 = ctx.r28.u64 & 65308;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// andi. r31,r27,227
	ctx.r31.u64 = ctx.r27.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// andi. r4,r27,65308
	ctx.r4.u64 = ctx.r27.u64 & 65308;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// andi. r31,r26,227
	ctx.r31.u64 = ctx.r26.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// andi. r4,r26,65308
	ctx.r4.u64 = ctx.r26.u64 & 65308;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// addi r6,r6,520
	ctx.r6.s64 = ctx.r6.s64 + 520;
	// addi r5,r5,66
	ctx.r5.s64 = ctx.r5.s64 + 66;
	// rlwinm r6,r6,30,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFFFC;
	// rlwinm r5,r5,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFF;
	// rlwinm r6,r6,0,27,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F;
	// rlwinm r5,r5,0,30,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eb5eb0
	if (ctx.cr6.lt) goto loc_82EB5EB0;
loc_82EB5F2C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EB5F48:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb5e8c
	if (ctx.cr6.lt) goto loc_82EB5E8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5F58"))) PPC_WEAK_FUNC(sub_82EB5F58);
PPC_FUNC_IMPL(__imp__sub_82EB5F58) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EB5F60;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82eb603c
	goto loc_82EB603C;
loc_82EB5F84:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82eb6020
	if (!ctx.cr6.lt) goto loc_82EB6020;
loc_82EB5FA8:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r31,r6,0,24,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r4,r6,3855
	ctx.r4.u64 = ctx.r6.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// andi. r6,r28,3855
	ctx.r6.u64 = ctx.r28.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r5,r28,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF0;
	// andi. r4,r27,3855
	ctx.r4.u64 = ctx.r27.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r27,0,24,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0;
	// andi. r4,r26,3855
	ctx.r4.u64 = ctx.r26.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r26,0,24,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xF0;
	// addi r6,r6,514
	ctx.r6.s64 = ctx.r6.s64 + 514;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r6,r6,30,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFFF;
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// rlwinm r6,r6,0,28,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// rlwinm r5,r5,30,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xF0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eb5fa8
	if (ctx.cr6.lt) goto loc_82EB5FA8;
loc_82EB6020:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EB603C:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb5f84
	if (ctx.cr6.lt) goto loc_82EB5F84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB604C"))) PPC_WEAK_FUNC(sub_82EB604C);
PPC_FUNC_IMPL(__imp__sub_82EB604C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6050"))) PPC_WEAK_FUNC(sub_82EB6050);
PPC_FUNC_IMPL(__imp__sub_82EB6050) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB605C"))) PPC_WEAK_FUNC(sub_82EB605C);
PPC_FUNC_IMPL(__imp__sub_82EB605C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6060"))) PPC_WEAK_FUNC(sub_82EB6060);
PPC_FUNC_IMPL(__imp__sub_82EB6060) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB606C"))) PPC_WEAK_FUNC(sub_82EB606C);
PPC_FUNC_IMPL(__imp__sub_82EB606C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6070"))) PPC_WEAK_FUNC(sub_82EB6070);
PPC_FUNC_IMPL(__imp__sub_82EB6070) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EB6078;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82eb6150
	goto loc_82EB6150;
loc_82EB609C:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82eb6134
	if (!ctx.cr6.lt) goto loc_82EB6134;
loc_82EB60C0:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r31,r6,24
	ctx.r31.u64 = ctx.r6.u32 & 0xFF;
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r4,r6,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// rlwinm r6,r28,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFF00;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// clrlwi r31,r27,24
	ctx.r31.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r4,r27,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFF00;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// clrlwi r31,r26,24
	ctx.r31.u64 = ctx.r26.u32 & 0xFF;
	// rlwinm r4,r26,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFF00;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// rlwinm r5,r5,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFF;
	// rlwinm r6,r6,30,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFF00;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eb60c0
	if (ctx.cr6.lt) goto loc_82EB60C0;
loc_82EB6134:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EB6150:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb609c
	if (ctx.cr6.lt) goto loc_82EB609C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB6160"))) PPC_WEAK_FUNC(sub_82EB6160);
PPC_FUNC_IMPL(__imp__sub_82EB6160) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EB6168;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82eb623c
	goto loc_82EB623C;
loc_82EB618C:
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82eb6220
	if (!ctx.cr6.lt) goto loc_82EB6220;
loc_82EB61AC:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r31,r6,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// lbz r27,1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r4,r6,28
	ctx.r4.u64 = ctx.r6.u32 & 0xF;
	// lbz r26,1(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r5,r28,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r6,r28,28
	ctx.r6.u64 = ctx.r28.u32 & 0xF;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r27,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r4,r27,28
	ctx.r4.u64 = ctx.r27.u32 & 0xF;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r26,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r4,r26,28
	ctx.r4.u64 = ctx.r26.u32 & 0xF;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r5,r5,30,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xF0;
	// rlwinm r6,r6,30,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eb61ac
	if (ctx.cr6.lt) goto loc_82EB61AC;
loc_82EB6220:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EB623C:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb618c
	if (ctx.cr6.lt) goto loc_82EB618C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB624C"))) PPC_WEAK_FUNC(sub_82EB624C);
PPC_FUNC_IMPL(__imp__sub_82EB624C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6250"))) PPC_WEAK_FUNC(sub_82EB6250);
PPC_FUNC_IMPL(__imp__sub_82EB6250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f4,12(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6264"))) PPC_WEAK_FUNC(sub_82EB6264);
PPC_FUNC_IMPL(__imp__sub_82EB6264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6268"))) PPC_WEAK_FUNC(sub_82EB6268);
PPC_FUNC_IMPL(__imp__sub_82EB6268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB628C"))) PPC_WEAK_FUNC(sub_82EB628C);
PPC_FUNC_IMPL(__imp__sub_82EB628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6290"))) PPC_WEAK_FUNC(sub_82EB6290);
PPC_FUNC_IMPL(__imp__sub_82EB6290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB62D4"))) PPC_WEAK_FUNC(sub_82EB62D4);
PPC_FUNC_IMPL(__imp__sub_82EB62D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB62D8"))) PPC_WEAK_FUNC(sub_82EB62D8);
PPC_FUNC_IMPL(__imp__sub_82EB62D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB630C"))) PPC_WEAK_FUNC(sub_82EB630C);
PPC_FUNC_IMPL(__imp__sub_82EB630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6310"))) PPC_WEAK_FUNC(sub_82EB6310);
PPC_FUNC_IMPL(__imp__sub_82EB6310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6314"))) PPC_WEAK_FUNC(sub_82EB6314);
PPC_FUNC_IMPL(__imp__sub_82EB6314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6318"))) PPC_WEAK_FUNC(sub_82EB6318);
PPC_FUNC_IMPL(__imp__sub_82EB6318) {
	PPC_FUNC_PROLOGUE();
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6328"))) PPC_WEAK_FUNC(sub_82EB6328);
PPC_FUNC_IMPL(__imp__sub_82EB6328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB632C"))) PPC_WEAK_FUNC(sub_82EB632C);
PPC_FUNC_IMPL(__imp__sub_82EB632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6330"))) PPC_WEAK_FUNC(sub_82EB6330);
PPC_FUNC_IMPL(__imp__sub_82EB6330) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb6358
	if (ctx.cr6.eq) goto loc_82EB6358;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB6358;
	sub_822996C0(ctx, base);
loc_82EB6358:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb636c
	if (ctx.cr6.eq) goto loc_82EB636C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB636C;
	sub_822996C0(ctx, base);
loc_82EB636C:
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

__attribute__((alias("__imp__sub_82EB6380"))) PPC_WEAK_FUNC(sub_82EB6380);
PPC_FUNC_IMPL(__imp__sub_82EB6380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EB6388;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// rlwinm. r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb650c
	if (!ctx.cr0.eq) goto loc_82EB650C;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eb650c
	if (!ctx.cr6.eq) goto loc_82EB650C;
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// lwz r7,108(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,108(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82eb650c
	if (!ctx.cr6.eq) goto loc_82EB650C;
	// lwz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eb650c
	if (!ctx.cr6.eq) goto loc_82EB650C;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82eb650c
	if (!ctx.cr6.eq) goto loc_82EB650C;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eb6414
	if (!ctx.cr6.eq) goto loc_82EB6414;
	// bl 0x82eb5438
	ctx.lr = 0x82EB6410;
	sub_82EB5438(ctx, base);
	// b 0x82eb6514
	goto loc_82EB6514;
loc_82EB6414:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb645c
	if (ctx.cr6.eq) goto loc_82EB645C;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eb645c
	if (ctx.cr6.eq) goto loc_82EB645C;
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
loc_82EB6434:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eb6454
	if (!ctx.cr0.eq) goto loc_82EB6454;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82eb6434
	if (!ctx.cr6.eq) goto loc_82EB6434;
loc_82EB6454:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eb650c
	if (!ctx.cr0.eq) goto loc_82EB650C;
loc_82EB645C:
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r26.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82eb6504
	if (!ctx.cr6.gt) goto loc_82EB6504;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
loc_82EB6488:
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r8,100(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mullw r8,r8,r27
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// lwz r4,100(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// add r30,r6,r5
	ctx.r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r29,r8,r7
	ctx.r29.u64 = ctx.r8.u64 + ctx.r7.u64;
	// beq cr6,0x82eb64f0
	if (ctx.cr6.eq) goto loc_82EB64F0;
loc_82EB64B8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,116(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB64C8;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r8,96(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb64b8
	if (ctx.cr6.lt) goto loc_82EB64B8;
loc_82EB64F0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb6488
	if (ctx.cr6.lt) goto loc_82EB6488;
loc_82EB6504:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb6514
	goto loc_82EB6514;
loc_82EB650C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB6514:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB651C"))) PPC_WEAK_FUNC(sub_82EB651C);
PPC_FUNC_IMPL(__imp__sub_82EB651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6520"))) PPC_WEAK_FUNC(sub_82EB6520);
PPC_FUNC_IMPL(__imp__sub_82EB6520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EB6528;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,108(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,108(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82eb6654
	if (!ctx.cr6.eq) goto loc_82EB6654;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eb6654
	if (!ctx.cr6.eq) goto loc_82EB6654;
	// rlwinm r3,r9,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EB657C;
	sub_82299698(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82eb6654
	if (ctx.cr0.eq) goto loc_82EB6654;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb65b4
	if (ctx.cr6.eq) goto loc_82EB65B4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb65b4
	if (ctx.cr6.eq) goto loc_82EB65B4;
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
loc_82EB65B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82eb6640
	if (!ctx.cr6.gt) goto loc_82EB6640;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
loc_82EB65CC:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb662c
	if (ctx.cr6.eq) goto loc_82EB662C;
loc_82EB65D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB65F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb65d8
	if (ctx.cr6.lt) goto loc_82EB65D8;
loc_82EB662C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb65cc
	if (ctx.cr6.lt) goto loc_82EB65CC;
loc_82EB6640:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB664C;
	sub_822996C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb665c
	goto loc_82EB665C;
loc_82EB6654:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB665C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB6664"))) PPC_WEAK_FUNC(sub_82EB6664);
PPC_FUNC_IMPL(__imp__sub_82EB6664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6668"))) PPC_WEAK_FUNC(sub_82EB6668);
PPC_FUNC_IMPL(__imp__sub_82EB6668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EB6670;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82eb6690
	if (ctx.cr6.eq) goto loc_82EB6690;
loc_82EB6684:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb68b4
	goto loc_82EB68B4;
loc_82EB6690:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,104(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// lwz r10,104(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb66ac
	if (!ctx.cr6.gt) goto loc_82EB66AC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82EB66AC:
	// lwz r9,108(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	// lwz r8,108(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 108);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb66c4
	if (ctx.cr6.lt) goto loc_82EB66C4;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_82EB66C4:
	// lwz r9,112(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// lwz r8,112(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb66dc
	if (ctx.cr6.lt) goto loc_82EB66DC;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
loc_82EB66DC:
	// rlwinm r30,r11,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299698
	ctx.lr = 0x82EB66EC;
	sub_82299698(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82eb6684
	if (ctx.cr0.eq) goto loc_82EB6684;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB6708;
	sub_82299698(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne 0x82eb6720
	if (!ctx.cr0.eq) goto loc_82EB6720;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB671C;
	sub_822996C0(ctx, base);
	// b 0x82eb6684
	goto loc_82EB6684;
loc_82EB6720:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82EB672C;
	sub_82CB16F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb16f0
	ctx.lr = 0x82EB6744;
	sub_82CB16F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb6774
	if (ctx.cr6.eq) goto loc_82EB6774;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb6774
	if (ctx.cr6.eq) goto loc_82EB6774;
	// stw r24,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r24.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r24,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r24.u32);
loc_82EB6774:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eb682c
	if (ctx.cr6.eq) goto loc_82EB682C;
loc_82EB6780:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eb67d8
	if (ctx.cr6.eq) goto loc_82EB67D8;
loc_82EB678C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB67AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB67CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82eb678c
	if (ctx.cr6.lt) goto loc_82EB678C;
loc_82EB67D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb6820
	if (!ctx.cr6.lt) goto loc_82EB6820;
loc_82EB67EC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB680C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb67ec
	if (ctx.cr6.lt) goto loc_82EB67EC;
loc_82EB6820:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82eb6780
	if (ctx.cr6.lt) goto loc_82EB6780;
loc_82EB682C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82eb6898
	if (!ctx.cr6.lt) goto loc_82EB6898;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
loc_82EB6844:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb6884
	if (ctx.cr6.eq) goto loc_82EB6884;
loc_82EB6850:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6850
	if (ctx.cr6.lt) goto loc_82EB6850;
loc_82EB6884:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb6844
	if (ctx.cr6.lt) goto loc_82EB6844;
loc_82EB6898:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB68A4;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB68B0;
	sub_822996C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB68B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB68BC"))) PPC_WEAK_FUNC(sub_82EB68BC);
PPC_FUNC_IMPL(__imp__sub_82EB68BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB68C0"))) PPC_WEAK_FUNC(sub_82EB68C0);
PPC_FUNC_IMPL(__imp__sub_82EB68C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82EB68C8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82eb68e8
	if (ctx.cr6.eq) goto loc_82EB68E8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb6adc
	goto loc_82EB6ADC;
loc_82EB68E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB68FC;
	sub_82299698(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x82eb6910
	if (!ctx.cr0.eq) goto loc_82EB6910;
loc_82EB6904:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb6adc
	goto loc_82EB6ADC;
loc_82EB6910:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB6924;
	sub_82299698(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne 0x82eb693c
	if (!ctx.cr0.eq) goto loc_82EB693C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB6938;
	sub_822996C0(ctx, base);
	// b 0x82eb6904
	goto loc_82EB6904;
loc_82EB693C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb696c
	if (ctx.cr6.eq) goto loc_82EB696C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb696c
	if (ctx.cr6.eq) goto loc_82EB696C;
	// stw r19,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r19.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r19,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r19.u32);
loc_82EB696C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,108(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r6,104(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r5,108(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// divwu r23,r8,r6
	ctx.r23.u32 = ctx.r8.u32 / ctx.r6.u32;
	// lwz r9,112(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// twllei r6,0
	// divwu r22,r7,r5
	ctx.r22.u32 = ctx.r7.u32 / ctx.r5.u32;
	// twllei r5,0
	// divwu r21,r10,r9
	ctx.r21.u32 = ctx.r10.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82eb6ac0
	if (!ctx.cr6.gt) goto loc_82EB6AC0;
loc_82EB69C8:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6aa8
	if (!ctx.cr6.gt) goto loc_82EB6AA8;
loc_82EB69E0:
	// xor r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 ^ ctx.r30.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// rlwinm. r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// beq 0x82eb6a18
	if (ctx.cr0.eq) goto loc_82EB6A18;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// rlwinm r5,r24,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r30,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EB6A18:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6a70
	if (!ctx.cr6.gt) goto loc_82EB6A70;
	// addi r11,r18,8
	ctx.r11.s64 = ctx.r18.s64 + 8;
loc_82EB6A2C:
	// rlwinm r10,r28,20,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0xFFFF0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb6a2c
	if (ctx.cr6.lt) goto loc_82EB6A2C;
loc_82EB6A70:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb69e0
	if (ctx.cr6.lt) goto loc_82EB69E0;
loc_82EB6AA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r24,r24,r21
	ctx.r24.u64 = ctx.r24.u64 + ctx.r21.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb69c8
	if (ctx.cr6.lt) goto loc_82EB69C8;
loc_82EB6AC0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB6ACC;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB6AD8;
	sub_822996C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB6ADC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB6AE4"))) PPC_WEAK_FUNC(sub_82EB6AE4);
PPC_FUNC_IMPL(__imp__sub_82EB6AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6AE8"))) PPC_WEAK_FUNC(sub_82EB6AE8);
PPC_FUNC_IMPL(__imp__sub_82EB6AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EB6AF0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82eb6f80
	if (!ctx.cr6.eq) goto loc_82EB6F80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82eb6b34
	if (ctx.cr6.eq) goto loc_82EB6B34;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82eb6f80
	if (!ctx.cr6.eq) goto loc_82EB6F80;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82eb6f80
	if (!ctx.cr6.eq) goto loc_82EB6F80;
loc_82EB6B34:
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82eb6b58
	if (ctx.cr6.eq) goto loc_82EB6B58;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82eb6f80
	if (!ctx.cr6.eq) goto loc_82EB6F80;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82eb6f80
	if (!ctx.cr6.eq) goto loc_82EB6F80;
loc_82EB6B58:
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82eb6f80
	if (!ctx.cr6.eq) goto loc_82EB6F80;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82eb6f80
	if (!ctx.cr6.eq) goto loc_82EB6F80;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x82eb6ba0
	if (!ctx.cr6.gt) goto loc_82EB6BA0;
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb6ba0
	if (ctx.cr0.eq) goto loc_82EB6BA0;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_82EB6BA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82eb6bbc
	if (!ctx.cr6.gt) goto loc_82EB6BBC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_82EB6BBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb6d48
	if (!ctx.cr0.eq) goto loc_82EB6D48;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r10,0,26,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// rlwinm r10,r8,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82eb6d48
	if (!ctx.cr6.eq) goto loc_82EB6D48;
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x82eb6d48
	if (ctx.cr6.lt) goto loc_82EB6D48;
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x82eb6d48
	if (ctx.cr6.lt) goto loc_82EB6D48;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82eb6d48
	if (!ctx.cr6.eq) goto loc_82EB6D48;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82eb6d48
	if (!ctx.cr6.eq) goto loc_82EB6D48;
	// lis r9,10240
	ctx.r9.s64 = 671088640;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82eb6cd0
	if (ctx.cr6.gt) goto loc_82EB6CD0;
	// beq cr6,0x82eb6cc4
	if (ctx.cr6.eq) goto loc_82EB6CC4;
	// lis r9,1168
	ctx.r9.s64 = 76546048;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb6cc4
	if (ctx.cr6.eq) goto loc_82EB6CC4;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,10
	ctx.r9.u64 = ctx.r9.u64 | 10;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb6cb8
	if (ctx.cr6.eq) goto loc_82EB6CB8;
	// addis r10,r10,-6184
	ctx.r10.s64 = ctx.r10.s64 + -405274624;
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb6cac
	if (ctx.cr0.eq) goto loc_82EB6CAC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82eb6c78
	if (ctx.cr6.eq) goto loc_82EB6C78;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x82eb6ca0
	if (ctx.cr6.eq) goto loc_82EB6CA0;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eb6d48
	if (!ctx.cr6.eq) goto loc_82EB6D48;
loc_82EB6C78:
	// lis r9,-31908
	ctx.r9.s64 = -2091122688;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,20032(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20032);
loc_82EB6C88:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,96(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82eb6d38
	goto loc_82EB6D38;
loc_82EB6CA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb5bb8
	ctx.lr = 0x82EB6CA8;
	sub_82EB5BB8(ctx, base);
	// b 0x82eb6d38
	goto loc_82EB6D38;
loc_82EB6CAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb5ab8
	ctx.lr = 0x82EB6CB4;
	sub_82EB5AB8(ctx, base);
	// b 0x82eb6d38
	goto loc_82EB6D38;
loc_82EB6CB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb6070
	ctx.lr = 0x82EB6CC0;
	sub_82EB6070(ctx, base);
	// b 0x82eb6d38
	goto loc_82EB6D38;
loc_82EB6CC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb5da0
	ctx.lr = 0x82EB6CCC;
	sub_82EB5DA0(ctx, base);
	// b 0x82eb6d38
	goto loc_82EB6D38;
loc_82EB6CD0:
	// addis r10,r10,-10280
	ctx.r10.s64 = ctx.r10.s64 + -673710080;
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb6d30
	if (ctx.cr0.eq) goto loc_82EB6D30;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82eb6d24
	if (ctx.cr6.eq) goto loc_82EB6D24;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82eb6d04
	if (ctx.cr6.eq) goto loc_82EB6D04;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x82eb6d18
	if (ctx.cr6.eq) goto loc_82EB6D18;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eb6d48
	if (!ctx.cr6.eq) goto loc_82EB6D48;
loc_82EB6D04:
	// lis r9,-31908
	ctx.r9.s64 = -2091122688;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,20036(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20036);
	// b 0x82eb6c88
	goto loc_82EB6C88;
loc_82EB6D18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb5f58
	ctx.lr = 0x82EB6D20;
	sub_82EB5F58(ctx, base);
	// b 0x82eb6d38
	goto loc_82EB6D38;
loc_82EB6D24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb58c8
	ctx.lr = 0x82EB6D2C;
	sub_82EB58C8(ctx, base);
	// b 0x82eb6d38
	goto loc_82EB6D38;
loc_82EB6D30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb59c0
	ctx.lr = 0x82EB6D38;
	sub_82EB59C0(ctx, base);
loc_82EB6D38:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82eb6d48
	if (ctx.cr6.lt) goto loc_82EB6D48;
loc_82EB6D40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb6f88
	goto loc_82EB6F88;
loc_82EB6D48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB6D5C;
	sub_82299698(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82eb6d70
	if (!ctx.cr0.eq) goto loc_82EB6D70;
loc_82EB6D64:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb6f88
	goto loc_82EB6F88;
loc_82EB6D70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82eb6d9c
	if (!ctx.cr6.eq) goto loc_82EB6D9C;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB6D90;
	sub_82299698(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x82eb6db8
	goto loc_82EB6DB8;
loc_82EB6D9C:
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82299698
	ctx.lr = 0x82EB6DA4;
	sub_82299698(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82EB6DB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82eb6dd0
	if (!ctx.cr6.eq) goto loc_82EB6DD0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB6DCC;
	sub_822996C0(ctx, base);
	// b 0x82eb6d64
	goto loc_82EB6D64;
loc_82EB6DD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eb6dec
	if (!ctx.cr6.eq) goto loc_82EB6DEC;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x82eb6df4
	goto loc_82EB6DF4;
loc_82EB6DEC:
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// addi r26,r29,16
	ctx.r26.s64 = ctx.r29.s64 + 16;
loc_82EB6DF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6f64
	if (!ctx.cr6.gt) goto loc_82EB6F64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,7616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f31.f64 = double(temp.f32);
loc_82EB6E10:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r28,r25,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82eb6e5c
	if (ctx.cr6.eq) goto loc_82EB6E5C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB6E5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6f30
	if (!ctx.cr6.gt) goto loc_82EB6F30;
	// addi r10,r24,8
	ctx.r10.s64 = ctx.r24.s64 + 8;
loc_82EB6E74:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfsx f13,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lfsx f0,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfsx f10,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfsx f10,r11,r26
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6e74
	if (ctx.cr6.lt) goto loc_82EB6E74;
loc_82EB6F30:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6e10
	if (ctx.cr6.lt) goto loc_82EB6E10;
loc_82EB6F64:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB6F70;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB6F7C;
	sub_822996C0(ctx, base);
	// b 0x82eb6d40
	goto loc_82EB6D40;
loc_82EB6F80:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB6F88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB6F94"))) PPC_WEAK_FUNC(sub_82EB6F94);
PPC_FUNC_IMPL(__imp__sub_82EB6F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6F98"))) PPC_WEAK_FUNC(sub_82EB6F98);
PPC_FUNC_IMPL(__imp__sub_82EB6F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82EB6FA0;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6adc
	ctx.lr = 0x82EB6FA8;
	__savefpr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,11(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82eb6fd4
	if (ctx.cr6.eq) goto loc_82EB6FD4;
loc_82EB6FBC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB6FC4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6b28
	ctx.lr = 0x82EB6FD0;
	__restfpr_25(ctx, base);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82EB6FD4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82eb7000
	if (ctx.cr6.eq) goto loc_82EB7000;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82eb6fbc
	if (!ctx.cr6.eq) goto loc_82EB6FBC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82eb6fbc
	if (!ctx.cr6.eq) goto loc_82EB6FBC;
loc_82EB7000:
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82eb7024
	if (ctx.cr6.eq) goto loc_82EB7024;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82eb6fbc
	if (!ctx.cr6.eq) goto loc_82EB6FBC;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82eb6fbc
	if (!ctx.cr6.eq) goto loc_82EB6FBC;
loc_82EB7024:
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eb6fbc
	if (!ctx.cr6.eq) goto loc_82EB6FBC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x82eb7068
	if (!ctx.cr6.gt) goto loc_82EB7068;
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb7068
	if (ctx.cr0.eq) goto loc_82EB7068;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_82EB7068:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82eb7084
	if (!ctx.cr6.gt) goto loc_82EB7084;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_82EB7084:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82eb70a0
	if (!ctx.cr6.gt) goto loc_82EB70A0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_82EB70A0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB70B4;
	sub_82299698(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne 0x82eb70c8
	if (!ctx.cr0.eq) goto loc_82EB70C8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb6fc4
	goto loc_82EB6FC4;
loc_82EB70C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82eb710c
	if (!ctx.cr6.eq) goto loc_82EB710C;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82299698
	ctx.lr = 0x82EB70E8;
	sub_82299698(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x82eb713c
	goto loc_82EB713C;
loc_82EB710C:
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82299698
	ctx.lr = 0x82EB7114;
	sub_82299698(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 * 48;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r27,r9,r31
	ctx.r27.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r26,r8,r31
	ctx.r26.u64 = ctx.r8.u64 + ctx.r31.u64;
loc_82EB713C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eb7160
	if (!ctx.cr6.eq) goto loc_82EB7160;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82EB714C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB7158;
	sub_822996C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eb6fc4
	goto loc_82EB6FC4;
loc_82EB7160:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eb7180
	if (!ctx.cr6.eq) goto loc_82EB7180;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// b 0x82eb7190
	goto loc_82EB7190;
loc_82EB7180:
	// addi r25,r31,16
	ctx.r25.s64 = ctx.r31.s64 + 16;
	// addi r24,r29,16
	ctx.r24.s64 = ctx.r29.s64 + 16;
	// addi r23,r27,16
	ctx.r23.s64 = ctx.r27.s64 + 16;
	// addi r22,r26,16
	ctx.r22.s64 = ctx.r26.s64 + 16;
loc_82EB7190:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82eb7410
	if (!ctx.cr6.gt) goto loc_82EB7410;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f31,-18212(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18212);
	ctx.f31.f64 = double(temp.f32);
loc_82EB71AC:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm r21,r19,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb73fc
	if (!ctx.cr6.gt) goto loc_82EB73FC;
loc_82EB71C0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r30,r20,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB71E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82eb720c
	if (ctx.cr6.eq) goto loc_82EB720C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r21,1
	ctx.r5.s64 = ctx.r21.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB720C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB720C:
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82eb7234
	if (ctx.cr6.eq) goto loc_82EB7234;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB7234:
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82eb7264
	if (ctx.cr6.eq) goto loc_82EB7264;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82eb7264
	if (ctx.cr6.eq) goto loc_82EB7264;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r21,1
	ctx.r5.s64 = ctx.r21.s64 + 1;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB7264:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb73c8
	if (!ctx.cr6.gt) goto loc_82EB73C8;
	// addi r10,r18,8
	ctx.r10.s64 = ctx.r18.s64 + 8;
loc_82EB727C:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfsx f13,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lfsx f0,r11,r25
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f9,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f10,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfsx f10,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfsx f10,r11,r24
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// lfsx f9,r11,r27
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r11,r23
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// lfsx f29,r11,r26
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// lfsx f4,r11,r22
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f27,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fadds f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fadds f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f12.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fadds f12,f27,f12
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f12.f64));
	// fadds f13,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f13.f64));
	// fadds f11,f25,f11
	ctx.f11.f64 = double(float(ctx.f25.f64 + ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb727c
	if (ctx.cr6.lt) goto loc_82EB727C;
loc_82EB73C8:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB73E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb71c0
	if (ctx.cr6.lt) goto loc_82EB71C0;
loc_82EB73FC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb71ac
	if (ctx.cr6.lt) goto loc_82EB71AC;
loc_82EB7410:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB741C;
	sub_822996C0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82eb714c
	goto loc_82EB714C;
}

__attribute__((alias("__imp__sub_82EB7424"))) PPC_WEAK_FUNC(sub_82EB7424);
PPC_FUNC_IMPL(__imp__sub_82EB7424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7428"))) PPC_WEAK_FUNC(sub_82EB7428);
PPC_FUNC_IMPL(__imp__sub_82EB7428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EB7430;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82299698
	ctx.lr = 0x82EB744C;
	sub_82299698(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb745c
	if (!ctx.cr0.eq) goto loc_82EB745C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb7540
	goto loc_82EB7540;
loc_82EB745C:
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r9,0
	ctx.r9.s64 = 0;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// beq cr6,0x82eb7540
	if (ctx.cr6.eq) goto loc_82EB7540;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,6380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
loc_82EB74A8:
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fctiwz f10,f0
	ctx.f10.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// addic. r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fadds f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// bge 0x82eb7504
	if (!ctx.cr0.lt) goto loc_82EB7504;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// bne cr6,0x82eb7504
	if (!ctx.cr6.eq) goto loc_82EB7504;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82EB7504:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82eb751c
	if (ctx.cr6.lt) goto loc_82EB751C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82eb751c
	if (!ctx.cr6.eq) goto loc_82EB751C;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
loc_82EB751C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fsubs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82eb74a8
	if (ctx.cr6.lt) goto loc_82EB74A8;
loc_82EB7540:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7548"))) PPC_WEAK_FUNC(sub_82EB7548);
PPC_FUNC_IMPL(__imp__sub_82EB7548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82EB7550;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6ae4
	ctx.lr = 0x82EB7558;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82eb7894
	if (!ctx.cr6.eq) goto loc_82EB7894;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,112(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82eb7894
	if (!ctx.cr6.eq) goto loc_82EB7894;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82eb7894
	if (!ctx.cr6.eq) goto loc_82EB7894;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// lwz r4,104(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r5,r8,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// rlwinm r30,r11,15,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// bl 0x82eb7428
	ctx.lr = 0x82EB75B4;
	sub_82EB7428(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82eb7428
	ctx.lr = 0x82EB75D0;
	sub_82EB7428(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82eb7854
	if (ctx.cr6.eq) goto loc_82EB7854;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82eb7854
	if (ctx.cr6.eq) goto loc_82EB7854;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB75F8;
	sub_82299698(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x82eb7854
	if (ctx.cr0.eq) goto loc_82EB7854;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82299698
	ctx.lr = 0x82EB7614;
	sub_82299698(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x82eb7854
	if (ctx.cr0.eq) goto loc_82EB7854;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,-1
	ctx.r24.s64 = -1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// ble cr6,0x82eb784c
	if (!ctx.cr6.gt) goto loc_82EB784C;
	// addi r28,r19,8
	ctx.r28.s64 = ctx.r19.s64 + 8;
loc_82EB7654:
	// lwz r4,-8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r4,r25
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82eb76a4
	if (ctx.cr6.eq) goto loc_82EB76A4;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82eb7690
	if (ctx.cr6.eq) goto loc_82EB7690;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB768C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82eb76a4
	goto loc_82EB76A4;
loc_82EB7690:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82EB76A4:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82eb76d0
	if (ctx.cr6.eq) goto loc_82EB76D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB76D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB76D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb7814
	if (!ctx.cr6.gt) goto loc_82EB7814;
	// addi r11,r21,8
	ctx.r11.s64 = ctx.r21.s64 + 8;
	// addi r10,r20,8
	ctx.r10.s64 = ctx.r20.s64 + 8;
loc_82EB76E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,-4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r6,r8,r29
	ctx.r6.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lfsx f10,r9,r29
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lfsx f9,r8,r29
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfsx f2,r9,r30
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f7,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f6,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f1,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f31,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f30,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f3,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfsx f29,r8,r30
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f30,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f13,f29
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f28,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f27,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f28,f28,f13
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fadds f9,f5,f8
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fadds f8,f4,f7
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f7,f3,f6
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f6,f29,f2
	ctx.f6.f64 = double(float(ctx.f29.f64 + ctx.f2.f64));
	// fadds f5,f30,f1
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f1.f64));
	// fadds f4,f28,f31
	ctx.f4.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f7,f5,f11
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f6,f4,f11
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f13,-8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// fadds f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fadds f13,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r9,104(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb76e8
	if (ctx.cr6.lt) goto loc_82EB76E8;
loc_82EB7814:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb7654
	if (ctx.cr6.lt) goto loc_82EB7654;
loc_82EB784C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82eb785c
	goto loc_82EB785C;
loc_82EB7854:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82EB785C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB7868;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB7874;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB7880;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB788C;
	sub_822996C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eb789c
	goto loc_82EB789C;
loc_82EB7894:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB789C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6b30
	ctx.lr = 0x82EB78A8;
	__restfpr_27(ctx, base);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB78AC"))) PPC_WEAK_FUNC(sub_82EB78AC);
PPC_FUNC_IMPL(__imp__sub_82EB78AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB78B0"))) PPC_WEAK_FUNC(sub_82EB78B0);
PPC_FUNC_IMPL(__imp__sub_82EB78B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EB78B8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ad0
	ctx.lr = 0x82EB78C0;
	__savefpr_22(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82eb78ec
	if (ctx.cr6.eq) goto loc_82EB78EC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb7dd8
	goto loc_82EB7DD8;
loc_82EB78EC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r5,r9,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1;
	// rlwinm r30,r7,15,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r29,r11,14,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// lwz r4,104(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// bl 0x82eb7428
	ctx.lr = 0x82EB7918;
	sub_82EB7428(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82eb7428
	ctx.lr = 0x82EB7934;
	sub_82EB7428(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,112(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x82eb7428
	ctx.lr = 0x82EB7950;
	sub_82EB7428(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// beq cr6,0x82eb7d90
	if (ctx.cr6.eq) goto loc_82EB7D90;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82eb7d90
	if (ctx.cr6.eq) goto loc_82EB7D90;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eb7d90
	if (ctx.cr6.eq) goto loc_82EB7D90;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB7984;
	sub_82299698(ctx, base);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq 0x82eb7d90
	if (ctx.cr0.eq) goto loc_82EB7D90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82299698
	ctx.lr = 0x82EB79A0;
	sub_82299698(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x82eb7d90
	if (ctx.cr0.eq) goto loc_82EB7D90;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,112(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 * 48;
	// add r29,r10,r20
	ctx.r29.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r28,r9,r20
	ctx.r28.u64 = ctx.r9.u64 + ctx.r20.u64;
	// add r27,r8,r20
	ctx.r27.u64 = ctx.r8.u64 + ctx.r20.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x82eb7d88
	if (!ctx.cr6.gt) goto loc_82EB7D88;
	// addi r26,r25,8
	ctx.r26.s64 = ctx.r25.s64 + 8;
	// li r18,-1
	ctx.r18.s64 = -1;
loc_82EB79E8:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb7d70
	if (!ctx.cr6.gt) goto loc_82EB7D70;
	// addi r24,r14,8
	ctx.r24.s64 = ctx.r14.s64 + 8;
loc_82EB7A04:
	// lwz r23,-8(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r23,r21
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82eb7a84
	if (ctx.cr6.eq) goto loc_82EB7A84;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82eb7a64
	if (ctx.cr6.eq) goto loc_82EB7A64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// lwz r5,-8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82eb7a84
	goto loc_82EB7A84;
loc_82EB7A64:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82EB7A84:
	// lwz r23,0(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82eb7ad4
	if (ctx.cr6.eq) goto loc_82EB7AD4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// lwz r5,-8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB7AD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb7d34
	if (!ctx.cr6.gt) goto loc_82EB7D34;
	// addi r9,r15,8
	ctx.r9.s64 = ctx.r15.s64 + 8;
	// addi r8,r16,8
	ctx.r8.s64 = ctx.r16.s64 + 8;
loc_82EB7AEC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,-8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lfs f13,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,-4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f10,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + ctx.r27.u64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lfsx f8,r11,r27
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r10,r27
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f5,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f2,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f31,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f28,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f6,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f28,f28,f13
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// lfs f4,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f1,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f30,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f29,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f27,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f26,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f27,f27,f13
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// lfsx f25,r11,r28
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f26,f26,f13
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// lfsx f24,r10,r28
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f24,f24,f13
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f13.f64));
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// fadds f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// fadds f2,f28,f31
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fadds f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// fadds f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfsx f7,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f31,f27,f30
	ctx.f31.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// lfs f1,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f29,f26,f29
	ctx.f29.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// lfs f30,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f28,f24,f25
	ctx.f28.f64 = double(float(ctx.f24.f64 + ctx.f25.f64));
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmuls f29,f29,f11
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// fmuls f28,f28,f11
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f11.f64));
	// fadds f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f5,f31,f5
	ctx.f5.f64 = double(float(ctx.f31.f64 + ctx.f5.f64));
	// fadds f4,f29,f4
	ctx.f4.f64 = double(float(ctx.f29.f64 + ctx.f4.f64));
	// fadds f8,f28,f8
	ctx.f8.f64 = double(float(ctx.f28.f64 + ctx.f8.f64));
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfsx f8,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f29,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f28,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f29,f13
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// lfsx f2,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// lfs f27,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f26,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfsx f25,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f28,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lfs f24,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f26,f26,f0
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f25,f25,f9
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f9.f64));
	// lfs f23,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f28,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f24,f24,f9
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f9.f64));
	// lfs f22,-4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f23,f23,f9
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f9.f64));
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// fmuls f9,f28,f9
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f9.f64));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f7,f31,f3
	ctx.f7.f64 = double(float(ctx.f31.f64 + ctx.f3.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fadds f3,f29,f1
	ctx.f3.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// fadds f2,f25,f2
	ctx.f2.f64 = double(float(ctx.f25.f64 + ctx.f2.f64));
	// fadds f1,f24,f27
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f27.f64));
	// fadds f31,f23,f26
	ctx.f31.f64 = double(float(ctx.f23.f64 + ctx.f26.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f8,f7,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f7,f3,f12
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f12,f2,f11
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f3,f1,f11
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f2,f31,f11
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f11,f3,f8
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f9,f2,f7
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f13,f12,f22
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// fmuls f12,f11,f22
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f22.f64));
	// fmuls f11,f9,f22
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f22.f64));
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,-8(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f13,-4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// fadds f13,f11,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb7aec
	if (ctx.cr6.lt) goto loc_82EB7AEC;
loc_82EB7D34:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb7a04
	if (ctx.cr6.lt) goto loc_82EB7A04;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EB7D70:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb79e8
	if (ctx.cr6.lt) goto loc_82EB79E8;
loc_82EB7D88:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82eb7d98
	goto loc_82EB7D98;
loc_82EB7D90:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82EB7D98:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB7DA4;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB7DB0;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB7DBC;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB7DC8;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB7DD4;
	sub_822996C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EB7DD8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b1c
	ctx.lr = 0x82EB7DE4;
	__restfpr_22(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7DE8"))) PPC_WEAK_FUNC(sub_82EB7DE8);
PPC_FUNC_IMPL(__imp__sub_82EB7DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7DF4"))) PPC_WEAK_FUNC(sub_82EB7DF4);
PPC_FUNC_IMPL(__imp__sub_82EB7DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7DF8"))) PPC_WEAK_FUNC(sub_82EB7DF8);
PPC_FUNC_IMPL(__imp__sub_82EB7DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7E00"))) PPC_WEAK_FUNC(sub_82EB7E00);
PPC_FUNC_IMPL(__imp__sub_82EB7E00) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7E08"))) PPC_WEAK_FUNC(sub_82EB7E08);
PPC_FUNC_IMPL(__imp__sub_82EB7E08) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7E10"))) PPC_WEAK_FUNC(sub_82EB7E10);
PPC_FUNC_IMPL(__imp__sub_82EB7E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EB7E18;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6ac4
	ctx.lr = 0x82EB7E20;
	__savefpr_19(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb80fc
	if (ctx.cr6.eq) goto loc_82EB80FC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eb80fc
	if (ctx.cr6.eq) goto loc_82EB80FC;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// clrldi r10,r23,32
	ctx.r10.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cntlzw r10,r22
	ctx.r10.u64 = ctx.r22.u32 == 0 ? 32 : __builtin_clz(ctx.r22.u32);
	// frsp f21,f0
	ctx.f21.f64 = double(float(ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f24,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f24.f64 = double(temp.f32);
	// li r3,16
	ctx.r3.s64 = 16;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f26,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f26.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// frsp f22,f13
	ctx.f22.f64 = double(float(ctx.f13.f64));
	// fdivs f27,f22,f21
	ctx.f27.f64 = double(float(ctx.f22.f64 / ctx.f21.f64));
	// fdivs f19,f24,f27
	ctx.f19.f64 = double(float(ctx.f24.f64 / ctx.f27.f64));
	// beq cr6,0x82eb7f00
	if (ctx.cr6.eq) goto loc_82EB7F00;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EB7EB0:
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f24.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fadds f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// blt cr6,0x82eb7eb0
	if (ctx.cr6.lt) goto loc_82EB7EB0;
loc_82EB7F00:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EB7F08;
	sub_82299698(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82eb80fc
	if (ctx.cr0.eq) goto loc_82EB80FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,4
	ctx.r31.s64 = 4;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f25,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f25.f64 = double(temp.f32);
	// fmr f28,f25
	ctx.f28.f64 = ctx.f25.f64;
	// beq cr6,0x82eb80f0
	if (ctx.cr6.eq) goto loc_82EB80F0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f20,-18284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18284);
	ctx.f20.f64 = double(temp.f32);
loc_82EB7F38:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// add r24,r31,r27
	ctx.r24.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f23,f0
	ctx.f23.f64 = double(float(ctx.f0.f64));
loc_82EB7F5C:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
	// fsubs f29,f0,f24
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f24.f64));
	// fmuls f30,f29,f27
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// fadds f31,f30,f27
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// bne cr6,0x82eb7fa0
	if (!ctx.cr6.eq) goto loc_82EB7FA0;
	// fcmpu cr6,f30,f25
	ctx.cr6.compare(ctx.f30.f64, ctx.f25.f64);
	// bge cr6,0x82eb7f94
	if (!ctx.cr6.lt) goto loc_82EB7F94;
	// fmr f30,f25
	ctx.f30.f64 = ctx.f25.f64;
loc_82EB7F94:
	// fcmpu cr6,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f22.f64);
	// ble cr6,0x82eb7fa0
	if (!ctx.cr6.gt) goto loc_82EB7FA0;
	// fmr f31,f22
	ctx.f31.f64 = ctx.f22.f64;
loc_82EB7FA0:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb2298
	ctx.lr = 0x82EB7FA8;
	sub_82CB2298(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82eb80b4
	if (!ctx.cr6.lt) goto loc_82EB80B4;
	// subf r8,r23,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r23.s64;
loc_82EB7FD8:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// bge cr6,0x82eb7ff0
	if (!ctx.cr6.lt) goto loc_82EB7FF0;
	// add r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 + ctx.r23.u64;
	// b 0x82eb8000
	goto loc_82EB8000;
loc_82EB7FF0:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bge cr6,0x82eb8000
	if (!ctx.cr6.lt) goto loc_82EB8000;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82EB8000:
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82eb8028
	if (ctx.cr6.eq) goto loc_82EB8028;
	// fcmpu cr6,f28,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f20.f64);
	// ble cr6,0x82eb8020
	if (!ctx.cr6.gt) goto loc_82EB8020;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stfs f28,4(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82EB8020:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
loc_82EB8028:
	// fcmpu cr6,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bge cr6,0x82eb8034
	if (!ctx.cr6.lt) goto loc_82EB8034;
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
loc_82EB8034:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x82eb8040
	if (!ctx.cr6.gt) goto loc_82EB8040;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
loc_82EB8040:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82eb806c
	if (!ctx.cr6.eq) goto loc_82EB806C;
	// fcmpu cr6,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f25.f64);
	// bge cr6,0x82eb8058
	if (!ctx.cr6.lt) goto loc_82EB8058;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x82eb8074
	goto loc_82EB8074;
loc_82EB8058:
	// fadds f0,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f26.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// blt cr6,0x82eb806c
	if (ctx.cr6.lt) goto loc_82EB806C;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
	// b 0x82eb8074
	goto loc_82EB8074;
loc_82EB806C:
	// fadds f0,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmsubs f0,f0,f19,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f19.f64 - ctx.f29.f64));
loc_82EB8074:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eb8084
	if (ctx.cr6.eq) goto loc_82EB8084;
	// fsubs f13,f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// b 0x82eb8088
	goto loc_82EB8088;
loc_82EB8084:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82EB8088:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fsubs f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// fmadds f28,f12,f13,f28
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f28.f64));
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb7fd8
	if (ctx.cr6.lt) goto loc_82EB7FD8;
loc_82EB80B4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x82eb7f5c
	if (ctx.cr6.lt) goto loc_82EB7F5C;
	// fcmpu cr6,f28,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f20.f64);
	// ble cr6,0x82eb80d8
	if (!ctx.cr6.gt) goto loc_82EB80D8;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stfs f28,4(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82EB80D8:
	// subf r11,r25,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r25.s64;
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb7f38
	if (ctx.cr6.lt) goto loc_82EB7F38;
loc_82EB80F0:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82eb8100
	goto loc_82EB8100;
loc_82EB80FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB8100:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6b10
	ctx.lr = 0x82EB810C;
	__restfpr_19(ctx, base);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB8110"))) PPC_WEAK_FUNC(sub_82EB8110);
PPC_FUNC_IMPL(__imp__sub_82EB8110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB8118;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb8178
	if (ctx.cr0.eq) goto loc_82EB8178;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82eb815c
	if (ctx.cr0.lt) goto loc_82EB815C;
loc_82EB8144:
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x82EB8154;
	sub_822996C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82eb8144
	if (!ctx.cr0.lt) goto loc_82EB8144;
loc_82EB815C:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb8170
	if (ctx.cr0.eq) goto loc_82EB8170;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB8170;
	sub_822996C0(ctx, base);
loc_82EB8170:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82eb819c
	goto loc_82EB819C;
loc_82EB8178:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x82EB8184;
	sub_822996C0(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb8198
	if (ctx.cr0.eq) goto loc_82EB8198;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB8198;
	sub_822996C0(ctx, base);
loc_82EB8198:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EB819C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB81A4"))) PPC_WEAK_FUNC(sub_82EB81A4);
PPC_FUNC_IMPL(__imp__sub_82EB81A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB81A8"))) PPC_WEAK_FUNC(sub_82EB81A8);
PPC_FUNC_IMPL(__imp__sub_82EB81A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EB81B0;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// mr r20,r14
	ctx.r20.u64 = ctx.r14.u64;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r5,r8,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r31,r7,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// lwz r4,104(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// rlwinm r30,r11,14,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// bl 0x82eb7e10
	ctx.lr = 0x82EB8210;
	sub_82EB7E10(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq 0x82eb88e8
	if (ctx.cr0.eq) goto loc_82EB88E8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82eb7e10
	ctx.lr = 0x82EB8230;
	sub_82EB7E10(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x82eb88e8
	if (ctx.cr0.eq) goto loc_82EB88E8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,112(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x82eb7e10
	ctx.lr = 0x82EB8250;
	sub_82EB7E10(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq 0x82eb88e8
	if (ctx.cr0.eq) goto loc_82EB88E8;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r7,r9,21845
	ctx.r7.u64 = ctx.r9.u64 | 21845;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// add r16,r11,r17
	ctx.r16.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r15,r10,r20
	ctx.r15.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lwz r31,112(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// add r19,r9,r18
	ctx.r19.u64 = ctx.r9.u64 + ctx.r18.u64;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// ble cr6,0x82eb8294
	if (!ctx.cr6.gt) goto loc_82EB8294;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EB8294:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82eb82a4
	if (ctx.cr6.gt) goto loc_82EB82A4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82EB82A4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EB82AC;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb82e8
	if (ctx.cr0.eq) goto loc_82EB82E8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt 0x82eb82e0
	if (ctx.cr0.lt) goto loc_82EB82E0;
loc_82EB82C8:
	// stw r14,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r14.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r14,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r14.u32);
	// stw r14,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r14.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82eb82c8
	if (!ctx.cr0.lt) goto loc_82EB82C8;
loc_82EB82E0:
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// b 0x82eb82ec
	goto loc_82EB82EC;
loc_82EB82E8:
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
loc_82EB82EC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82eb88dc
	if (ctx.cr6.eq) goto loc_82EB88DC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB8308;
	sub_82299698(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb88dc
	if (ctx.cr0.eq) goto loc_82EB88DC;
	// addi r7,r18,4
	ctx.r7.s64 = ctx.r18.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x82eb8368
	if (!ctx.cr6.lt) goto loc_82EB8368;
loc_82EB8324:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82eb8354
	goto loc_82EB8354;
loc_82EB8334:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_82EB8354:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb8334
	if (ctx.cr6.lt) goto loc_82EB8334;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82eb8324
	if (ctx.cr6.lt) goto loc_82EB8324;
loc_82EB8368:
	// mr r21,r14
	ctx.r21.u64 = ctx.r14.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x82eb88d4
	if (!ctx.cr6.lt) goto loc_82EB88D4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f29,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f30.f64 = double(temp.f32);
loc_82EB8390:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 4;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eb8434
	if (!ctx.cr6.lt) goto loc_82EB8434;
loc_82EB83A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 * 12;
	// lwzx r11,r31,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb8428
	if (!ctx.cr6.eq) goto loc_82EB8428;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eb83e0
	if (ctx.cr6.eq) goto loc_82EB83E0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stwx r11,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r14,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r14.u32);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82eb8408
	goto loc_82EB8408;
loc_82EB83E0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB83FC;
	sub_82299698(ctx, base);
	// stwx r3,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb88dc
	if (ctx.cr0.eq) goto loc_82EB88DC;
loc_82EB8408:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb16f0
	ctx.lr = 0x82EB8428;
	sub_82CB16F0(ctx, base);
loc_82EB8428:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82eb83a8
	if (ctx.cr6.lt) goto loc_82EB83A8;
loc_82EB8434:
	// addi r30,r20,4
	ctx.r30.s64 = ctx.r20.s64 + 4;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x82eb85b0
	if (!ctx.cr6.lt) goto loc_82EB85B0;
	// addi r25,r17,4
	ctx.r25.s64 = ctx.r17.s64 + 4;
loc_82EB8448:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplw cr6,r25,r16
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x82eb859c
	if (!ctx.cr6.lt) goto loc_82EB859C;
	// addi r8,r28,8
	ctx.r8.s64 = ctx.r28.s64 + 8;
loc_82EB8484:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bge cr6,0x82eb858c
	if (!ctx.cr6.lt) goto loc_82EB858C;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
loc_82EB849C:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82eb8580
	if (!ctx.cr6.lt) goto loc_82EB8580;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
loc_82EB84AC:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwzx r9,r9,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x82eb8574
	if (!ctx.cr6.lt) goto loc_82EB8574;
loc_82EB84DC:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,-8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f13,f12,f0,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r6,r9,12
	ctx.r6.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// blt cr6,0x82eb84dc
	if (ctx.cr6.lt) goto loc_82EB84DC;
loc_82EB8574:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb84ac
	if (ctx.cr6.lt) goto loc_82EB84AC;
loc_82EB8580:
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r5,r23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82eb849c
	if (ctx.cr6.lt) goto loc_82EB849C;
loc_82EB858C:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x82eb8484
	if (ctx.cr6.lt) goto loc_82EB8484;
loc_82EB859C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r15
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82eb8448
	if (ctx.cr6.lt) goto loc_82EB8448;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EB85B0:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eb88c4
	if (!ctx.cr6.lt) goto loc_82EB88C4;
loc_82EB85BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r30,r11,r22
	ctx.r30.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne 0x82eb88b8
	if (!ctx.cr0.eq) goto loc_82EB88B8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82eb88ac
	if (!ctx.cr6.gt) goto loc_82EB88AC;
loc_82EB85EC:
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mullw r9,r31,r11
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x82eb87a8
	if (ctx.cr6.eq) goto loc_82EB87A8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82eb86e4
	if (ctx.cr6.eq) goto loc_82EB86E4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82eb8868
	if (!ctx.cr6.eq) goto loc_82EB8868;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb8868
	if (ctx.cr6.eq) goto loc_82EB8868;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
loc_82EB8630:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8644
	if (!ctx.cr6.lt) goto loc_82EB8644;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb8650
	goto loc_82EB8650;
loc_82EB8644:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8650
	if (ctx.cr6.lt) goto loc_82EB8650;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8650:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8668
	if (!ctx.cr6.lt) goto loc_82EB8668;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x82eb867c
	goto loc_82EB867C;
loc_82EB8668:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82eb8678
	if (!ctx.cr6.lt) goto loc_82EB8678;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82eb867c
	goto loc_82EB867C;
loc_82EB8678:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_82EB867C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8694
	if (!ctx.cr6.lt) goto loc_82EB8694;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb86a0
	goto loc_82EB86A0;
loc_82EB8694:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb86a0
	if (ctx.cr6.lt) goto loc_82EB86A0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB86A0:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb86b8
	if (!ctx.cr6.lt) goto loc_82EB86B8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb86c4
	goto loc_82EB86C4;
loc_82EB86B8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb86c4
	if (ctx.cr6.lt) goto loc_82EB86C4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB86C4:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,104(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb8630
	if (ctx.cr6.lt) goto loc_82EB8630;
	// b 0x82eb8868
	goto loc_82EB8868;
loc_82EB86E4:
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb8868
	if (ctx.cr6.eq) goto loc_82EB8868;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
loc_82EB86F4:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8708
	if (!ctx.cr6.lt) goto loc_82EB8708;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb8714
	goto loc_82EB8714;
loc_82EB8708:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8714
	if (ctx.cr6.lt) goto loc_82EB8714;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8714:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb872c
	if (!ctx.cr6.lt) goto loc_82EB872C;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x82eb8740
	goto loc_82EB8740;
loc_82EB872C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82eb873c
	if (!ctx.cr6.lt) goto loc_82EB873C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82eb8740
	goto loc_82EB8740;
loc_82EB873C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_82EB8740:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8758
	if (!ctx.cr6.lt) goto loc_82EB8758;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb8764
	goto loc_82EB8764;
loc_82EB8758:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8764
	if (ctx.cr6.lt) goto loc_82EB8764;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8764:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82eb877c
	if (!ctx.cr6.lt) goto loc_82EB877C;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82eb8788
	goto loc_82EB8788;
loc_82EB877C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8788
	if (ctx.cr6.lt) goto loc_82EB8788;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8788:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,104(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb86f4
	if (ctx.cr6.lt) goto loc_82EB86F4;
	// b 0x82eb8868
	goto loc_82EB8868;
loc_82EB87A8:
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb8868
	if (ctx.cr6.eq) goto loc_82EB8868;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
loc_82EB87B8:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82eb87cc
	if (!ctx.cr6.lt) goto loc_82EB87CC;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82eb87d8
	goto loc_82EB87D8;
loc_82EB87CC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb87d8
	if (ctx.cr6.lt) goto loc_82EB87D8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB87D8:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82eb87f0
	if (!ctx.cr6.lt) goto loc_82EB87F0;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// b 0x82eb8804
	goto loc_82EB8804;
loc_82EB87F0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82eb8800
	if (!ctx.cr6.lt) goto loc_82EB8800;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82eb8804
	goto loc_82EB8804;
loc_82EB8800:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_82EB8804:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82eb881c
	if (!ctx.cr6.lt) goto loc_82EB881C;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82eb8828
	goto loc_82EB8828;
loc_82EB881C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8828
	if (ctx.cr6.lt) goto loc_82EB8828;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8828:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82eb8840
	if (!ctx.cr6.lt) goto loc_82EB8840;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82eb884c
	goto loc_82EB884C;
loc_82EB8840:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb884c
	if (ctx.cr6.lt) goto loc_82EB884C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB884C:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,104(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb87b8
	if (ctx.cr6.lt) goto loc_82EB87B8;
loc_82EB8868:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82EB8898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb85ec
	if (ctx.cr6.lt) goto loc_82EB85EC;
loc_82EB88AC:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// rotlwi r28,r30,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82EB88B8:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82eb85bc
	if (ctx.cr6.lt) goto loc_82EB85BC;
loc_82EB88C4:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82eb8390
	if (ctx.cr6.lt) goto loc_82EB8390;
loc_82EB88D4:
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// b 0x82eb88f0
	goto loc_82EB88F0;
loc_82EB88DC:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eb88f0
	goto loc_82EB88F0;
loc_82EB88E8:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_82EB88F0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82eb8904
	if (ctx.cr6.eq) goto loc_82EB8904;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82eb8110
	ctx.lr = 0x82EB8904;
	sub_82EB8110(ctx, base);
loc_82EB8904:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB8910;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB891C;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB8928;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822996c0
	ctx.lr = 0x82EB8934;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822996c0
	ctx.lr = 0x82EB8940;
	sub_822996C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_82EB8958"))) PPC_WEAK_FUNC(sub_82EB8958);
PPC_FUNC_IMPL(__imp__sub_82EB8958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82EB8960;
	__savegprlr_18(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82eb9044
	if (!ctx.cr6.eq) goto loc_82EB9044;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82eb9044
	if (!ctx.cr6.eq) goto loc_82EB9044;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// rlwinm r5,r11,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// rlwinm r31,r10,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// bl 0x82eb7e10
	ctx.lr = 0x82EB89C8;
	sub_82EB7E10(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x82eb8ff0
	if (ctx.cr0.eq) goto loc_82EB8FF0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82eb7e10
	ctx.lr = 0x82EB89E8;
	sub_82EB7E10(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x82eb8ff0
	if (ctx.cr0.eq) goto loc_82EB8FF0;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// add r21,r11,r23
	ctx.r21.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r24,r10,r22
	ctx.r24.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lwz r31,108(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// ble cr6,0x82eb8a24
	if (!ctx.cr6.gt) goto loc_82EB8A24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EB8A24:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82eb8a34
	if (ctx.cr6.gt) goto loc_82EB8A34;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82EB8A34:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EB8A3C;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb8a78
	if (ctx.cr0.eq) goto loc_82EB8A78;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt 0x82eb8a70
	if (ctx.cr0.lt) goto loc_82EB8A70;
loc_82EB8A58:
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r20,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r20.u32);
	// stw r20,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82eb8a58
	if (!ctx.cr0.lt) goto loc_82EB8A58;
loc_82EB8A70:
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// b 0x82eb8a7c
	goto loc_82EB8A7C;
loc_82EB8A78:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_82EB8A7C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eb8fe4
	if (ctx.cr6.eq) goto loc_82EB8FE4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB8A98;
	sub_82299698(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq 0x82eb8fe4
	if (ctx.cr0.eq) goto loc_82EB8FE4;
	// addi r7,r22,4
	ctx.r7.s64 = ctx.r22.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82eb8af4
	if (!ctx.cr6.lt) goto loc_82EB8AF4;
loc_82EB8AB0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82eb8ae0
	goto loc_82EB8AE0;
loc_82EB8AC0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_82EB8AE0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb8ac0
	if (ctx.cr6.lt) goto loc_82EB8AC0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82eb8ab0
	if (ctx.cr6.lt) goto loc_82EB8AB0;
loc_82EB8AF4:
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82eb8fdc
	if (!ctx.cr6.lt) goto loc_82EB8FDC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f29,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f30.f64 = double(temp.f32);
loc_82EB8B1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82eb8ba8
	if (!ctx.cr6.lt) goto loc_82EB8BA8;
loc_82EB8B34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 * 12;
	// lwzx r11,r31,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb8b9c
	if (!ctx.cr6.eq) goto loc_82EB8B9C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82eb8b64
	if (ctx.cr6.eq) goto loc_82EB8B64;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// stwx r11,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// stw r20,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r20.u32);
	// lwz r19,4(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// b 0x82eb8b84
	goto loc_82EB8B84;
loc_82EB8B64:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EB8B78;
	sub_82299698(ctx, base);
	// stwx r3,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb8fe4
	if (ctx.cr0.eq) goto loc_82EB8FE4;
loc_82EB8B84:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb16f0
	ctx.lr = 0x82EB8B9C;
	sub_82CB16F0(ctx, base);
loc_82EB8B9C:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82eb8b34
	if (ctx.cr6.lt) goto loc_82EB8B34;
loc_82EB8BA8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x82eb8cb4
	if (!ctx.cr6.lt) goto loc_82EB8CB4;
	// addi r8,r18,8
	ctx.r8.s64 = ctx.r18.s64 + 8;
loc_82EB8BD8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82eb8ca4
	if (!ctx.cr6.lt) goto loc_82EB8CA4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82EB8BF0:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bge cr6,0x82eb8c98
	if (!ctx.cr6.lt) goto loc_82EB8C98;
loc_82EB8C08:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,-8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r9,12
	ctx.r5.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// blt cr6,0x82eb8c08
	if (ctx.cr6.lt) goto loc_82EB8C08;
loc_82EB8C98:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82eb8bf0
	if (ctx.cr6.lt) goto loc_82EB8BF0;
loc_82EB8CA4:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r21
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82eb8bd8
	if (ctx.cr6.lt) goto loc_82EB8BD8;
loc_82EB8CB4:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82eb8fcc
	if (!ctx.cr6.lt) goto loc_82EB8FCC;
loc_82EB8CC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x82eb8fc0
	if (!ctx.cr0.eq) goto loc_82EB8FC0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82eb8ebc
	if (ctx.cr6.eq) goto loc_82EB8EBC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82eb8ddc
	if (ctx.cr6.eq) goto loc_82EB8DDC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82eb8f98
	if (!ctx.cr6.eq) goto loc_82EB8F98;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb8f98
	if (!ctx.cr6.gt) goto loc_82EB8F98;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82EB8D14:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8d2c
	if (!ctx.cr6.lt) goto loc_82EB8D2C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb8d38
	goto loc_82EB8D38;
loc_82EB8D2C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8d38
	if (ctx.cr6.lt) goto loc_82EB8D38;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8D38:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8d58
	if (!ctx.cr6.lt) goto loc_82EB8D58;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb8d64
	goto loc_82EB8D64;
loc_82EB8D58:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8d64
	if (ctx.cr6.lt) goto loc_82EB8D64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8D64:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8d84
	if (!ctx.cr6.lt) goto loc_82EB8D84;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb8d90
	goto loc_82EB8D90;
loc_82EB8D84:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8d90
	if (ctx.cr6.lt) goto loc_82EB8D90;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8D90:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8db0
	if (!ctx.cr6.lt) goto loc_82EB8DB0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb8dbc
	goto loc_82EB8DBC;
loc_82EB8DB0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8dbc
	if (ctx.cr6.lt) goto loc_82EB8DBC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8DBC:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb8d14
	if (ctx.cr6.lt) goto loc_82EB8D14;
	// b 0x82eb8f98
	goto loc_82EB8F98;
loc_82EB8DDC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb8f98
	if (!ctx.cr6.gt) goto loc_82EB8F98;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82EB8DF4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8e0c
	if (!ctx.cr6.lt) goto loc_82EB8E0C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb8e18
	goto loc_82EB8E18;
loc_82EB8E0C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8e18
	if (ctx.cr6.lt) goto loc_82EB8E18;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8E18:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8e38
	if (!ctx.cr6.lt) goto loc_82EB8E38;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb8e44
	goto loc_82EB8E44;
loc_82EB8E38:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8e44
	if (ctx.cr6.lt) goto loc_82EB8E44;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8E44:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82eb8e64
	if (!ctx.cr6.lt) goto loc_82EB8E64;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82eb8e70
	goto loc_82EB8E70;
loc_82EB8E64:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8e70
	if (ctx.cr6.lt) goto loc_82EB8E70;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8E70:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82eb8e90
	if (!ctx.cr6.lt) goto loc_82EB8E90;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82eb8e9c
	goto loc_82EB8E9C;
loc_82EB8E90:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8e9c
	if (ctx.cr6.lt) goto loc_82EB8E9C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8E9C:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb8df4
	if (ctx.cr6.lt) goto loc_82EB8DF4;
	// b 0x82eb8f98
	goto loc_82EB8F98;
loc_82EB8EBC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb8f98
	if (!ctx.cr6.gt) goto loc_82EB8F98;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82EB8ED4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82eb8eec
	if (!ctx.cr6.lt) goto loc_82EB8EEC;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82eb8ef8
	goto loc_82EB8EF8;
loc_82EB8EEC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8ef8
	if (ctx.cr6.lt) goto loc_82EB8EF8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8EF8:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82eb8f18
	if (!ctx.cr6.lt) goto loc_82EB8F18;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82eb8f24
	goto loc_82EB8F24;
loc_82EB8F18:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8f24
	if (ctx.cr6.lt) goto loc_82EB8F24;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8F24:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82eb8f44
	if (!ctx.cr6.lt) goto loc_82EB8F44;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82eb8f50
	goto loc_82EB8F50;
loc_82EB8F44:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8f50
	if (ctx.cr6.lt) goto loc_82EB8F50;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8F50:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82eb8f70
	if (!ctx.cr6.lt) goto loc_82EB8F70;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82eb8f7c
	goto loc_82EB8F7C;
loc_82EB8F70:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82eb8f7c
	if (ctx.cr6.lt) goto loc_82EB8F7C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB8F7C:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb8ed4
	if (ctx.cr6.lt) goto loc_82EB8ED4;
loc_82EB8F98:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r19.u32);
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
loc_82EB8FC0:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82eb8cc0
	if (ctx.cr6.lt) goto loc_82EB8CC0;
loc_82EB8FCC:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82eb8b1c
	if (ctx.cr6.lt) goto loc_82EB8B1C;
loc_82EB8FDC:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x82eb8ff8
	goto loc_82EB8FF8;
loc_82EB8FE4:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eb8ff8
	goto loc_82EB8FF8;
loc_82EB8FF0:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_82EB8FF8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eb900c
	if (ctx.cr6.eq) goto loc_82EB900C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82eb8110
	ctx.lr = 0x82EB900C;
	sub_82EB8110(ctx, base);
loc_82EB900C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB9018;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB9024;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB9030;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822996c0
	ctx.lr = 0x82EB903C;
	sub_822996C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eb904c
	goto loc_82EB904C;
loc_82EB9044:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB904C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB9060"))) PPC_WEAK_FUNC(sub_82EB9060);
PPC_FUNC_IMPL(__imp__sub_82EB9060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EB9068;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bgt cr6,0x82eb91f4
	if (ctx.cr6.gt) goto loc_82EB91F4;
	// rlwinm. r11,r6,0,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb91f4
	if (!ctx.cr0.eq) goto loc_82EB91F4;
	// rlwinm r11,r6,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200000;
	// rlwinm r10,r6,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400000;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// rlwinm r9,r6,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000;
	// rlwinm r11,r6,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	// stw r10,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r10.u32);
	// stw r9,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r9.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r11.u32);
	// bl 0x82ec85d0
	ctx.lr = 0x82EB90C4;
	sub_82EC85D0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb919c
	if (ctx.cr0.eq) goto loc_82EB919C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ec85d0
	ctx.lr = 0x82EB90D8;
	sub_82EC85D0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// beq 0x82eb919c
	if (ctx.cr0.eq) goto loc_82EB919C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82eba988
	ctx.lr = 0x82EB90EC;
	sub_82EBA988(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb91a4
	if (ctx.cr0.lt) goto loc_82EB91A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb6380
	ctx.lr = 0x82EB90FC;
	sub_82EB6380(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb9194
	if (!ctx.cr0.lt) goto loc_82EB9194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb6520
	ctx.lr = 0x82EB910C;
	sub_82EB6520(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb9194
	if (!ctx.cr0.lt) goto loc_82EB9194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb6668
	ctx.lr = 0x82EB911C;
	sub_82EB6668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb9194
	if (!ctx.cr0.lt) goto loc_82EB9194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb68c0
	ctx.lr = 0x82EB912C;
	sub_82EB68C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb9194
	if (!ctx.cr0.lt) goto loc_82EB9194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb6ae8
	ctx.lr = 0x82EB913C;
	sub_82EB6AE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb9194
	if (!ctx.cr0.lt) goto loc_82EB9194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb6f98
	ctx.lr = 0x82EB914C;
	sub_82EB6F98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb9194
	if (!ctx.cr0.lt) goto loc_82EB9194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb7548
	ctx.lr = 0x82EB915C;
	sub_82EB7548(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb9194
	if (!ctx.cr0.lt) goto loc_82EB9194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb78b0
	ctx.lr = 0x82EB916C;
	sub_82EB78B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb9194
	if (!ctx.cr0.lt) goto loc_82EB9194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb8958
	ctx.lr = 0x82EB917C;
	sub_82EB8958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb9194
	if (!ctx.cr0.lt) goto loc_82EB9194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb81a8
	ctx.lr = 0x82EB918C;
	sub_82EB81A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb919c
	if (ctx.cr0.lt) goto loc_82EB919C;
loc_82EB9194:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82eb91a4
	goto loc_82EB91A4;
loc_82EB919C:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_82EB91A4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb91c8
	if (ctx.cr6.eq) goto loc_82EB91C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB91C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82EB91C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb91ec
	if (ctx.cr6.eq) goto loc_82EB91EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB91E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82EB91EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82eb91fc
	goto loc_82EB91FC;
loc_82EB91F4:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EB91FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB9204"))) PPC_WEAK_FUNC(sub_82EB9204);
PPC_FUNC_IMPL(__imp__sub_82EB9204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9208"))) PPC_WEAK_FUNC(sub_82EB9208);
PPC_FUNC_IMPL(__imp__sub_82EB9208) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9224"))) PPC_WEAK_FUNC(sub_82EB9224);
PPC_FUNC_IMPL(__imp__sub_82EB9224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9228"))) PPC_WEAK_FUNC(sub_82EB9228);
PPC_FUNC_IMPL(__imp__sub_82EB9228) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9234"))) PPC_WEAK_FUNC(sub_82EB9234);
PPC_FUNC_IMPL(__imp__sub_82EB9234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9238"))) PPC_WEAK_FUNC(sub_82EB9238);
PPC_FUNC_IMPL(__imp__sub_82EB9238) {
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
	// bl 0x82e865d0
	ctx.lr = 0x82EB9248;
	sub_82E865D0(ctx, base);
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

__attribute__((alias("__imp__sub_82EB925C"))) PPC_WEAK_FUNC(sub_82EB925C);
PPC_FUNC_IMPL(__imp__sub_82EB925C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9260"))) PPC_WEAK_FUNC(sub_82EB9260);
PPC_FUNC_IMPL(__imp__sub_82EB9260) {
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
	// bl 0x82e83f90
	ctx.lr = 0x82EB9270;
	sub_82E83F90(ctx, base);
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

__attribute__((alias("__imp__sub_82EB9284"))) PPC_WEAK_FUNC(sub_82EB9284);
PPC_FUNC_IMPL(__imp__sub_82EB9284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9288"))) PPC_WEAK_FUNC(sub_82EB9288);
PPC_FUNC_IMPL(__imp__sub_82EB9288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EB9290;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82e864a8
	ctx.lr = 0x82EB92A4;
	sub_82E864A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e86540
	ctx.lr = 0x82EB92B8;
	sub_82E86540(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e86540
	ctx.lr = 0x82EB92CC;
	sub_82E86540(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addi r11,r11,-18
	ctx.r11.s64 = ctx.r11.s64 + -18;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82eb92f4
	if (ctx.cr6.gt) goto loc_82EB92F4;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82EB92F4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82eb9308
	if (!ctx.cr6.lt) goto loc_82EB9308;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82EB9308:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb9350
	if (ctx.cr6.eq) goto loc_82EB9350;
loc_82EB9320:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB9330;
	sub_82CB1160(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb9320
	if (ctx.cr6.lt) goto loc_82EB9320;
loc_82EB9350:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e83f38
	ctx.lr = 0x82EB9358;
	sub_82E83F38(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e83f38
	ctx.lr = 0x82EB9360;
	sub_82E83F38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB936C"))) PPC_WEAK_FUNC(sub_82EB936C);
PPC_FUNC_IMPL(__imp__sub_82EB936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9370"))) PPC_WEAK_FUNC(sub_82EB9370);
PPC_FUNC_IMPL(__imp__sub_82EB9370) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb939c
	if (ctx.cr6.eq) goto loc_82EB939C;
	// bl 0x82e76d78
	ctx.lr = 0x82EB9394;
	sub_82E76D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EB939C:
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

__attribute__((alias("__imp__sub_82EB93B0"))) PPC_WEAK_FUNC(sub_82EB93B0);
PPC_FUNC_IMPL(__imp__sub_82EB93B0) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb93dc
	if (ctx.cr6.eq) goto loc_82EB93DC;
	// bl 0x82e68d68
	ctx.lr = 0x82EB93D4;
	sub_82E68D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EB93DC:
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

__attribute__((alias("__imp__sub_82EB93F0"))) PPC_WEAK_FUNC(sub_82EB93F0);
PPC_FUNC_IMPL(__imp__sub_82EB93F0) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82eb9420
	if (!ctx.cr6.eq) goto loc_82EB9420;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb9424
	if (ctx.cr6.eq) goto loc_82EB9424;
loc_82EB9420:
	// bl 0x82e83f38
	ctx.lr = 0x82EB9424;
	sub_82E83F38(ctx, base);
loc_82EB9424:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb9480
	if (ctx.cr6.eq) goto loc_82EB9480;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb9480
	if (ctx.cr6.eq) goto loc_82EB9480;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb9480
	if (ctx.cr6.eq) goto loc_82EB9480;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb9480
	if (!ctx.cr0.eq) goto loc_82EB9480;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82eb5108
	ctx.lr = 0x82EB945C;
	sub_82EB5108(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82eb5108
	ctx.lr = 0x82EB9464;
	sub_82EB5108(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82eb5108
	ctx.lr = 0x82EB946C;
	sub_82EB5108(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82eb9288
	ctx.lr = 0x82EB9478;
	sub_82EB9288(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82eb5108
	ctx.lr = 0x82EB9480;
	sub_82EB5108(ctx, base);
loc_82EB9480:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb9498
	if (ctx.cr6.eq) goto loc_82EB9498;
	// bl 0x82e76d78
	ctx.lr = 0x82EB9494;
	sub_82E76D78(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82EB9498:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb94ac
	if (ctx.cr6.eq) goto loc_82EB94AC;
	// bl 0x82e76d78
	ctx.lr = 0x82EB94A8;
	sub_82E76D78(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_82EB94AC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb94c0
	if (ctx.cr6.eq) goto loc_82EB94C0;
	// bl 0x82e68d68
	ctx.lr = 0x82EB94BC;
	sub_82E68D68(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82EB94C0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb94d4
	if (ctx.cr6.eq) goto loc_82EB94D4;
	// bl 0x82e76d78
	ctx.lr = 0x82EB94D0;
	sub_82E76D78(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82EB94D4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82EB94F0"))) PPC_WEAK_FUNC(sub_82EB94F0);
PPC_FUNC_IMPL(__imp__sub_82EB94F0) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb952c
	if (ctx.cr6.eq) goto loc_82EB952C;
	// bl 0x82e83f90
	ctx.lr = 0x82EB9514;
	sub_82E83F90(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb952c
	if (ctx.cr6.eq) goto loc_82EB952C;
	// bl 0x82e76d78
	ctx.lr = 0x82EB9524;
	sub_82E76D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EB952C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82EB9544"))) PPC_WEAK_FUNC(sub_82EB9544);
PPC_FUNC_IMPL(__imp__sub_82EB9544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9548"))) PPC_WEAK_FUNC(sub_82EB9548);
PPC_FUNC_IMPL(__imp__sub_82EB9548) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eb93f0
	sub_82EB93F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB954C"))) PPC_WEAK_FUNC(sub_82EB954C);
PPC_FUNC_IMPL(__imp__sub_82EB954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9550"))) PPC_WEAK_FUNC(sub_82EB9550);
PPC_FUNC_IMPL(__imp__sub_82EB9550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EB9558;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r8,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// bl 0x82eb93f0
	ctx.lr = 0x82EB957C;
	sub_82EB93F0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82e864a8
	ctx.lr = 0x82EB9588;
	sub_82E864A8(ctx, base);
	// li r14,1
	ctx.r14.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb9658
	if (ctx.cr6.eq) goto loc_82EB9658;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r20,112(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// blt cr6,0x82eb964c
	if (ctx.cr6.lt) goto loc_82EB964C;
	// lwz r18,120(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r18,r30
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82eb964c
	if (ctx.cr6.gt) goto loc_82EB964C;
	// cmpw cr6,r20,r18
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r18.s32, ctx.xer);
	// bgt cr6,0x82eb964c
	if (ctx.cr6.gt) goto loc_82EB964C;
	// lwz r19,116(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x82eb964c
	if (ctx.cr6.lt) goto loc_82EB964C;
	// lwz r22,124(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r28,156(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r22,r28
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82eb964c
	if (ctx.cr6.gt) goto loc_82EB964C;
	// cmpw cr6,r19,r22
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r22.s32, ctx.xer);
	// bgt cr6,0x82eb964c
	if (ctx.cr6.gt) goto loc_82EB964C;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82eb9628
	if (!ctx.cr6.eq) goto loc_82EB9628;
	// ld r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 116);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82eb9628
	if (!ctx.cr6.eq) goto loc_82EB9628;
	// cmplw cr6,r22,r28
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r28.u32, ctx.xer);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// beq cr6,0x82eb962c
	if (ctx.cr6.eq) goto loc_82EB962C;
loc_82EB9628:
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
loc_82EB962C:
	// clrlwi. r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb9644
	if (!ctx.cr0.eq) goto loc_82EB9644;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82eb9644
	if (!ctx.cr6.eq) goto loc_82EB9644;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// b 0x82eb9690
	goto loc_82EB9690;
loc_82EB9644:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// b 0x82eb9690
	goto loc_82EB9690;
loc_82EB964C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82eb9a34
	goto loc_82EB9A34;
loc_82EB9658:
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r28,156(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// not r11,r15
	ctx.r11.u64 = ~ctx.r15.u64;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// clrlwi r26,r11,31
	ctx.r26.u64 = ctx.r11.u32 & 0x1;
loc_82EB9690:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// rlwinm. r17,r15,0,15,15
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ori r25,r11,18
	ctx.r25.u64 = ctx.r11.u64 | 18;
	// beq 0x82eb97d8
	if (ctx.cr0.eq) goto loc_82EB97D8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82eb96d4
	if (ctx.cr6.gt) goto loc_82EB96D4;
	// or r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 | ctx.r30.u64;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb96d4
	if (ctx.cr0.eq) goto loc_82EB96D4;
loc_82EB96C4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82eb96c4
	if (!ctx.cr0.eq) goto loc_82EB96C4;
loc_82EB96D4:
	// addi r27,r21,16
	ctx.r27.s64 = ctx.r21.s64 + 16;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82e76df8
	ctx.lr = 0x82EB96E4;
	sub_82E76DF8(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// slw r3,r30,r31
	ctx.r3.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// li r10,3
	ctx.r10.s64 = 3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// slw r4,r28,r31
	ctx.r4.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r31.u8 & 0x3F));
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addi r30,r21,12
	ctx.r30.s64 = ctx.r21.s64 + 12;
	// bl 0x82e86250
	ctx.lr = 0x82EB971C;
	sub_82E86250(ctx, base);
	// stw r3,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb9790
	if (ctx.cr0.eq) goto loc_82EB9790;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r21,8
	ctx.r31.s64 = ctx.r21.s64 + 8;
	// bl 0x82e85dd8
	ctx.lr = 0x82EB9738;
	sub_82E85DD8(ctx, base);
	// stw r3,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb9790
	if (ctx.cr0.eq) goto loc_82EB9790;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82eb9780
	if (!ctx.cr6.eq) goto loc_82EB9780;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82eb5108
	ctx.lr = 0x82EB9754;
	sub_82EB5108(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82eb9288
	ctx.lr = 0x82EB9760;
	sub_82EB9288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82eb5108
	ctx.lr = 0x82EB976C;
	sub_82EB5108(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82eb9780
	if (!ctx.cr6.lt) goto loc_82EB9780;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82eb9a34
	goto loc_82EB9A34;
loc_82EB9780:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,156(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x82eb97dc
	goto loc_82EB97DC;
loc_82EB9790:
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb97a4
	if (ctx.cr6.eq) goto loc_82EB97A4;
	// bl 0x82e76d78
	ctx.lr = 0x82EB97A0;
	sub_82E76D78(ctx, base);
	// stw r23,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r23.u32);
loc_82EB97A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb97b8
	if (ctx.cr6.eq) goto loc_82EB97B8;
	// bl 0x82e76d78
	ctx.lr = 0x82EB97B4;
	sub_82E76D78(ctx, base);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_82EB97B8:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb97cc
	if (ctx.cr6.eq) goto loc_82EB97CC;
	// bl 0x82e68d68
	ctx.lr = 0x82EB97C8;
	sub_82E68D68(ctx, base);
	// stw r23,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r23.u32);
loc_82EB97CC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb9a34
	goto loc_82EB9A34;
loc_82EB97D8:
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
loc_82EB97DC:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r31,r15,4,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 4) & 0x10;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x82eb97f4
	if (!ctx.cr6.eq) goto loc_82EB97F4;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_82EB97F4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82eb9910
	if (ctx.cr6.eq) goto loc_82EB9910;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82eb98e8
	if (ctx.cr6.lt) goto loc_82EB98E8;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb9898
	if (!ctx.cr6.gt) goto loc_82EB9898;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82eb98e8
	if (ctx.cr6.gt) goto loc_82EB98E8;
	// addi r11,r18,3
	ctx.r11.s64 = ctx.r18.s64 + 3;
	// addi r10,r22,3
	ctx.r10.s64 = ctx.r22.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r19,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r20,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ble cr6,0x82eb9860
	if (!ctx.cr6.gt) goto loc_82EB9860;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
loc_82EB9860:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82eb9870
	if (!ctx.cr6.gt) goto loc_82EB9870;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_82EB9870:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82eb98e0
	if (!ctx.cr6.eq) goto loc_82EB98E0;
	// ld r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 100);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82eb98e0
	if (!ctx.cr6.eq) goto loc_82EB98E0;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
loc_82EB988C:
	// bne cr6,0x82eb98e0
	if (!ctx.cr6.eq) goto loc_82EB98E0;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// b 0x82eb9910
	goto loc_82EB9910;
loc_82EB9898:
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// rlwinm r10,r20,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82eb98c0
	if (!ctx.cr6.gt) goto loc_82EB98C0;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
loc_82EB98C0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82eb98e0
	if (!ctx.cr6.eq) goto loc_82EB98E0;
	// ld r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 100);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82eb98e0
	if (!ctx.cr6.eq) goto loc_82EB98E0;
	// cmplw cr6,r22,r28
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r28.u32, ctx.xer);
	// b 0x82eb988c
	goto loc_82EB988C;
loc_82EB98E0:
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// b 0x82eb9910
	goto loc_82EB9910;
loc_82EB98E8:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_82EB9910:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82eb994c
	if (!ctx.cr6.eq) goto loc_82EB994C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82eb5108
	ctx.lr = 0x82EB9920;
	sub_82EB5108(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82eb9930
	if (!ctx.cr6.eq) goto loc_82EB9930;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_82EB9930:
	// rlwinm r6,r31,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e86540
	ctx.lr = 0x82EB9940;
	sub_82E86540(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82eb5108
	ctx.lr = 0x82EB9948;
	sub_82EB5108(ctx, base);
	// b 0x82eb996c
	goto loc_82EB996C;
loc_82EB994C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82eb995c
	if (!ctx.cr6.eq) goto loc_82EB995C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_82EB995C:
	// rlwinm r6,r31,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e86540
	ctx.lr = 0x82EB996C;
	sub_82E86540(ctx, base);
loc_82EB996C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82eb999c
	if (ctx.cr6.eq) goto loc_82EB999C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r20
	ctx.r9.s64 = ctx.r20.s64 - ctx.r11.s64;
	// subf r8,r10,r19
	ctx.r8.s64 = ctx.r19.s64 - ctx.r10.s64;
	// subf r11,r11,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r11.s64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// subf r10,r10,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r10.s64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_82EB999C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,380(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,364(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// stw r7,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r7.u32);
	// stw r23,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r23.u32);
	// stw r23,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r23.u32);
	// stw r23,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r23.u32);
	// stw r6,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r6.u32);
	// stw r23,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r23.u32);
	// stw r14,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r14.u32);
	// stw r5,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r5.u32);
	// stw r4,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r4.u32);
	// stw r31,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r31.u32);
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// stw r23,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r23.u32);
	// stw r14,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r14.u32);
	// stw r14,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r14.u32);
	// stw r23,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r23.u32);
	// stw r23,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r23.u32);
	// stw r30,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r30.u32);
	// stw r28,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r28.u32);
	// stw r16,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r16.u32);
	// stw r15,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r15.u32);
	// bl 0x82e76d00
	ctx.lr = 0x82EB9A30;
	sub_82E76D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB9A34:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB9A3C"))) PPC_WEAK_FUNC(sub_82EB9A3C);
PPC_FUNC_IMPL(__imp__sub_82EB9A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9A40"))) PPC_WEAK_FUNC(sub_82EB9A40);
PPC_FUNC_IMPL(__imp__sub_82EB9A40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eb94f0
	sub_82EB94F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB9A44"))) PPC_WEAK_FUNC(sub_82EB9A44);
PPC_FUNC_IMPL(__imp__sub_82EB9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9A48"))) PPC_WEAK_FUNC(sub_82EB9A48);
PPC_FUNC_IMPL(__imp__sub_82EB9A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82EB9A50;
	__savegprlr_19(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb9a80
	if (ctx.cr6.eq) goto loc_82EB9A80;
	// bl 0x82eb94f0
	ctx.lr = 0x82EB9A80;
	sub_82EB94F0(ctx, base);
loc_82EB9A80:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e86588
	ctx.lr = 0x82EB9A8C;
	sub_82E86588(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb9b40
	if (ctx.cr6.eq) goto loc_82EB9B40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB9AA8;
	sub_82CB1160(ctx, base);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82eb9b34
	if (ctx.cr6.gt) goto loc_82EB9B34;
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82eb9b34
	if (ctx.cr6.gt) goto loc_82EB9B34;
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82eb9b34
	if (ctx.cr6.gt) goto loc_82EB9B34;
	// lwz r27,132(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82eb9b34
	if (ctx.cr6.gt) goto loc_82EB9B34;
	// lwz r30,148(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82eb9b34
	if (ctx.cr6.gt) goto loc_82EB9B34;
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82eb9b34
	if (ctx.cr6.gt) goto loc_82EB9B34;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82eb9b2c
	if (!ctx.cr6.eq) goto loc_82EB9B2C;
	// ld r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 132);
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82eb9b2c
	if (!ctx.cr6.eq) goto loc_82EB9B2C;
	// ld r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 140);
	// rldicr r10,r7,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82eb9b2c
	if (!ctx.cr6.eq) goto loc_82EB9B2C;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82eb9b7c
	if (ctx.cr6.eq) goto loc_82EB9B7C;
loc_82EB9B2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb9b80
	goto loc_82EB9B80;
loc_82EB9B34:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82eb9d08
	goto loc_82EB9D08;
loc_82EB9B40:
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// lwz r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
loc_82EB9B7C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82EB9B80:
	// rlwinm r24,r24,4,27,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb9d7c
	if (ctx.cr6.eq) goto loc_82EB9D7C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82eb9d68
	if (ctx.cr6.lt) goto loc_82EB9D68;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb9d10
	if (!ctx.cr6.gt) goto loc_82EB9D10;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addi r11,r11,-18
	ctx.r11.s64 = ctx.r11.s64 + -18;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82eb9d68
	if (ctx.cr6.gt) goto loc_82EB9D68;
	// addi r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 3;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 3;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r5,r27,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r25,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ble cr6,0x82eb9c00
	if (!ctx.cr6.gt) goto loc_82EB9C00;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_82EB9C00:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82eb9c0c
	if (!ctx.cr6.gt) goto loc_82EB9C0C;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
loc_82EB9C0C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82eb9c3c
	if (!ctx.cr6.eq) goto loc_82EB9C3C;
	// ld r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 100);
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82eb9c3c
	if (!ctx.cr6.eq) goto loc_82EB9C3C;
	// ld r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 108);
	// rldicr r10,r7,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
loc_82EB9C30:
	// bne cr6,0x82eb9c3c
	if (!ctx.cr6.eq) goto loc_82EB9C3C;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82eb9d7c
	if (ctx.cr6.eq) goto loc_82EB9D7C;
loc_82EB9C3C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e865d0
	ctx.lr = 0x82EB9C50;
	sub_82E865D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r8,r11,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r11.s64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subf r7,r10,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r10.s64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// subf r11,r9,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r9.s64;
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// subf r9,r9,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r9.s64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
loc_82EB9C8C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r22,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r22.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r22,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r22,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r22.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EB9CE0;
	sub_82CB1160(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r19,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r19.u32);
	// stw r20,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r20.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r22,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r22.u32);
	// stw r22,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r22.u32);
	// stw r23,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r23.u32);
	// bl 0x82e76d00
	ctx.lr = 0x82EB9D04;
	sub_82E76D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB9D08:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82EB9D10:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// rlwinm r10,r25,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// ble cr6,0x82eb9d40
	if (!ctx.cr6.gt) goto loc_82EB9D40;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_82EB9D40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eb9c3c
	if (!ctx.cr6.eq) goto loc_82EB9C3C;
	// ld r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 100);
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82eb9c3c
	if (!ctx.cr6.eq) goto loc_82EB9C3C;
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82eb9c3c
	if (!ctx.cr6.eq) goto loc_82EB9C3C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// b 0x82eb9c30
	goto loc_82EB9C30;
loc_82EB9D68:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82cb1160
	ctx.lr = 0x82EB9D78;
	sub_82CB1160(ctx, base);
	// b 0x82eb9c3c
	goto loc_82EB9C3C;
loc_82EB9D7C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e865d0
	ctx.lr = 0x82EB9D90;
	sub_82E865D0(ctx, base);
	// b 0x82eb9c8c
	goto loc_82EB9C8C;
}

__attribute__((alias("__imp__sub_82EB9D94"))) PPC_WEAK_FUNC(sub_82EB9D94);
PPC_FUNC_IMPL(__imp__sub_82EB9D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9D98"))) PPC_WEAK_FUNC(sub_82EB9D98);
PPC_FUNC_IMPL(__imp__sub_82EB9D98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9D9C"))) PPC_WEAK_FUNC(sub_82EB9D9C);
PPC_FUNC_IMPL(__imp__sub_82EB9D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9DA0"))) PPC_WEAK_FUNC(sub_82EB9DA0);
PPC_FUNC_IMPL(__imp__sub_82EB9DA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9DA4"))) PPC_WEAK_FUNC(sub_82EB9DA4);
PPC_FUNC_IMPL(__imp__sub_82EB9DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9DA8"))) PPC_WEAK_FUNC(sub_82EB9DA8);
PPC_FUNC_IMPL(__imp__sub_82EB9DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82eba20c
	if (ctx.cr6.eq) goto loc_82EBA20C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82eb9fe4
	if (ctx.cr6.eq) goto loc_82EB9FE4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82eba44c
	if (!ctx.cr6.eq) goto loc_82EBA44C;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82eb9f54
	if (ctx.cr6.eq) goto loc_82EB9F54;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82eb9ed0
	if (ctx.cr6.eq) goto loc_82EB9ED0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82eba44c
	if (!ctx.cr6.eq) goto loc_82EBA44C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eba44c
	if (!ctx.cr6.gt) goto loc_82EBA44C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// subfic r7,r4,-8
	ctx.xer.ca = ctx.r4.u32 <= 4294967288;
	ctx.r7.s64 = -8 - ctx.r4.s64;
	// lfs f12,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
loc_82EB9E08:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb9e1c
	if (!ctx.cr6.lt) goto loc_82EB9E1C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eb9e28
	goto loc_82EB9E28;
loc_82EB9E1C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82eb9e28
	if (ctx.cr6.lt) goto loc_82EB9E28;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82EB9E28:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb9e48
	if (!ctx.cr6.lt) goto loc_82EB9E48;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eb9e54
	goto loc_82EB9E54;
loc_82EB9E48:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82eb9e54
	if (ctx.cr6.lt) goto loc_82EB9E54;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82EB9E54:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb9e74
	if (!ctx.cr6.lt) goto loc_82EB9E74;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eb9e80
	goto loc_82EB9E80;
loc_82EB9E74:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82eb9e80
	if (ctx.cr6.lt) goto loc_82EB9E80;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82EB9E80:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb9ea0
	if (!ctx.cr6.lt) goto loc_82EB9EA0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eb9eac
	goto loc_82EB9EAC;
loc_82EB9EA0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82eb9eac
	if (ctx.cr6.lt) goto loc_82EB9EAC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82EB9EAC:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb9e08
	if (ctx.cr6.lt) goto loc_82EB9E08;
	// b 0x82eba44c
	goto loc_82EBA44C;
loc_82EB9ED0:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eba44c
	if (!ctx.cr6.gt) goto loc_82EBA44C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lfs f13,7676(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82EB9EF8:
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f12,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfsx f12,r8,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb9ef8
	if (ctx.cr6.lt) goto loc_82EB9EF8;
	// b 0x82eba44c
	goto loc_82EBA44C;
loc_82EB9F54:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eba44c
	if (!ctx.cr6.gt) goto loc_82EBA44C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lfs f13,7676(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82EB9F7C:
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f12,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfsx f12,r11,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb9f7c
	if (ctx.cr6.lt) goto loc_82EB9F7C;
	// b 0x82eba44c
	goto loc_82EBA44C;
loc_82EB9FE4:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82eba180
	if (ctx.cr6.eq) goto loc_82EBA180;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82eba0f8
	if (ctx.cr6.eq) goto loc_82EBA0F8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82eba44c
	if (!ctx.cr6.eq) goto loc_82EBA44C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eba44c
	if (!ctx.cr6.gt) goto loc_82EBA44C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// subfic r7,r4,-8
	ctx.xer.ca = ctx.r4.u32 <= 4294967288;
	ctx.r7.s64 = -8 - ctx.r4.s64;
	// lfs f11,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-18324(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -18324);
	ctx.f12.f64 = double(temp.f32);
loc_82EBA030:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82eba044
	if (!ctx.cr6.lt) goto loc_82EBA044;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82eba050
	goto loc_82EBA050;
loc_82EBA044:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eba050
	if (ctx.cr6.lt) goto loc_82EBA050;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EBA050:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82eba070
	if (!ctx.cr6.lt) goto loc_82EBA070;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82eba07c
	goto loc_82EBA07C;
loc_82EBA070:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eba07c
	if (ctx.cr6.lt) goto loc_82EBA07C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EBA07C:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82eba09c
	if (!ctx.cr6.lt) goto loc_82EBA09C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82eba0a8
	goto loc_82EBA0A8;
loc_82EBA09C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eba0a8
	if (ctx.cr6.lt) goto loc_82EBA0A8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EBA0A8:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82eba0c8
	if (!ctx.cr6.lt) goto loc_82EBA0C8;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x82eba0d4
	goto loc_82EBA0D4;
loc_82EBA0C8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eba0d4
	if (ctx.cr6.lt) goto loc_82EBA0D4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EBA0D4:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eba030
	if (ctx.cr6.lt) goto loc_82EBA030;
	// b 0x82eba44c
	goto loc_82EBA44C;
loc_82EBA0F8:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eba44c
	if (!ctx.cr6.gt) goto loc_82EBA44C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lfs f13,6380(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82EBA120:
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f12,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfsx f12,r11,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eba120
	if (ctx.cr6.lt) goto loc_82EBA120;
	// b 0x82eba44c
	goto loc_82EBA44C;
loc_82EBA180:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eba44c
	if (!ctx.cr6.gt) goto loc_82EBA44C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// lfs f13,7676(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82EBA1A8:
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f12,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfsx f12,r10,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eba1a8
	if (ctx.cr6.lt) goto loc_82EBA1A8;
	// b 0x82eba44c
	goto loc_82EBA44C;
loc_82EBA20C:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82eba3b8
	if (ctx.cr6.eq) goto loc_82EBA3B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82eba318
	if (ctx.cr6.eq) goto loc_82EBA318;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82eba44c
	if (!ctx.cr6.eq) goto loc_82EBA44C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eba44c
	if (!ctx.cr6.gt) goto loc_82EBA44C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// subfic r7,r4,-8
	ctx.xer.ca = ctx.r4.u32 <= 4294967288;
	ctx.r7.s64 = -8 - ctx.r4.s64;
	// lfs f13,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
loc_82EBA250:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eba264
	if (!ctx.cr6.lt) goto loc_82EBA264;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eba270
	goto loc_82EBA270;
loc_82EBA264:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82eba270
	if (ctx.cr6.lt) goto loc_82EBA270;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82EBA270:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eba290
	if (!ctx.cr6.lt) goto loc_82EBA290;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eba29c
	goto loc_82EBA29C;
loc_82EBA290:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82eba29c
	if (ctx.cr6.lt) goto loc_82EBA29C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82EBA29C:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eba2bc
	if (!ctx.cr6.lt) goto loc_82EBA2BC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eba2c8
	goto loc_82EBA2C8;
loc_82EBA2BC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82eba2c8
	if (ctx.cr6.lt) goto loc_82EBA2C8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82EBA2C8:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eba2e8
	if (!ctx.cr6.lt) goto loc_82EBA2E8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82eba2f4
	goto loc_82EBA2F4;
loc_82EBA2E8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82eba2f4
	if (ctx.cr6.lt) goto loc_82EBA2F4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82EBA2F4:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eba250
	if (ctx.cr6.lt) goto loc_82EBA250;
	// b 0x82eba44c
	goto loc_82EBA44C;
loc_82EBA318:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eba44c
	if (!ctx.cr6.gt) goto loc_82EBA44C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lfs f13,6380(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82EBA340:
	// lfs f12,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsx f12,r8,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eba340
	if (ctx.cr6.lt) goto loc_82EBA340;
	// b 0x82eba44c
	goto loc_82EBA44C;
loc_82EBA3B8:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eba44c
	if (!ctx.cr6.gt) goto loc_82EBA44C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// lfs f13,6380(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82EBA3E0:
	// lfs f12,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsx f12,r8,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eba3e0
	if (ctx.cr6.lt) goto loc_82EBA3E0;
loc_82EBA44C:
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA454"))) PPC_WEAK_FUNC(sub_82EBA454);
PPC_FUNC_IMPL(__imp__sub_82EBA454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA458"))) PPC_WEAK_FUNC(sub_82EBA458);
PPC_FUNC_IMPL(__imp__sub_82EBA458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA45C"))) PPC_WEAK_FUNC(sub_82EBA45C);
PPC_FUNC_IMPL(__imp__sub_82EBA45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA460"))) PPC_WEAK_FUNC(sub_82EBA460);
PPC_FUNC_IMPL(__imp__sub_82EBA460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA464"))) PPC_WEAK_FUNC(sub_82EBA464);
PPC_FUNC_IMPL(__imp__sub_82EBA464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA468"))) PPC_WEAK_FUNC(sub_82EBA468);
PPC_FUNC_IMPL(__imp__sub_82EBA468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r10,r4,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfs f0,-18120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA4E4"))) PPC_WEAK_FUNC(sub_82EBA4E4);
PPC_FUNC_IMPL(__imp__sub_82EBA4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA4E8"))) PPC_WEAK_FUNC(sub_82EBA4E8);
PPC_FUNC_IMPL(__imp__sub_82EBA4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA52C"))) PPC_WEAK_FUNC(sub_82EBA52C);
PPC_FUNC_IMPL(__imp__sub_82EBA52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA530"))) PPC_WEAK_FUNC(sub_82EBA530);
PPC_FUNC_IMPL(__imp__sub_82EBA530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA574"))) PPC_WEAK_FUNC(sub_82EBA574);
PPC_FUNC_IMPL(__imp__sub_82EBA574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA578"))) PPC_WEAK_FUNC(sub_82EBA578);
PPC_FUNC_IMPL(__imp__sub_82EBA578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eba5bc
	if (!ctx.cr6.eq) goto loc_82EBA5BC;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eba5bc
	if (!ctx.cr6.eq) goto loc_82EBA5BC;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eba5bc
	if (!ctx.cr6.eq) goto loc_82EBA5BC;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82EBA5BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA5C4"))) PPC_WEAK_FUNC(sub_82EBA5C4);
PPC_FUNC_IMPL(__imp__sub_82EBA5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA5C8"))) PPC_WEAK_FUNC(sub_82EBA5C8);
PPC_FUNC_IMPL(__imp__sub_82EBA5C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA5CC"))) PPC_WEAK_FUNC(sub_82EBA5CC);
PPC_FUNC_IMPL(__imp__sub_82EBA5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA5D0"))) PPC_WEAK_FUNC(sub_82EBA5D0);
PPC_FUNC_IMPL(__imp__sub_82EBA5D0) {
	PPC_FUNC_PROLOGUE();
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA5E0"))) PPC_WEAK_FUNC(sub_82EBA5E0);
PPC_FUNC_IMPL(__imp__sub_82EBA5E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA5E4"))) PPC_WEAK_FUNC(sub_82EBA5E4);
PPC_FUNC_IMPL(__imp__sub_82EBA5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA5E8"))) PPC_WEAK_FUNC(sub_82EBA5E8);
PPC_FUNC_IMPL(__imp__sub_82EBA5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBA5F0"))) PPC_WEAK_FUNC(sub_82EBA5F0);
PPC_FUNC_IMPL(__imp__sub_82EBA5F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r3,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA600"))) PPC_WEAK_FUNC(sub_82EBA600);
PPC_FUNC_IMPL(__imp__sub_82EBA600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsqrts f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// lfs f0,18924(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18924);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfsx f12,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f1,f11,f0,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA658"))) PPC_WEAK_FUNC(sub_82EBA658);
PPC_FUNC_IMPL(__imp__sub_82EBA658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,992
	ctx.r11.s64 = ctx.r11.s64 + 992;
	// lfs f0,18924(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18924);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfsx f12,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f1,f11,f0,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA6B0"))) PPC_WEAK_FUNC(sub_82EBA6B0);
PPC_FUNC_IMPL(__imp__sub_82EBA6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EBA6B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EBA710;
	sub_82CB1160(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// beq cr6,0x82eba72c
	if (ctx.cr6.eq) goto loc_82EBA72C;
	// addi r11,r11,20040
	ctx.r11.s64 = ctx.r11.s64 + 20040;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// b 0x82eba730
	goto loc_82EBA730;
loc_82EBA72C:
	// addi r10,r11,20040
	ctx.r10.s64 = ctx.r11.s64 + 20040;
loc_82EBA730:
	// cntlzw r9,r29
	ctx.r9.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r9,r29,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82eba808
	if (ctx.cr6.eq) goto loc_82EBA808;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwinm r7,r10,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r6,r10,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfs f0,-18120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_82EBA808:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82eba830
	if (!ctx.cr6.eq) goto loc_82EBA830;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r8,10784
	ctx.r8.s64 = 706740224;
	// ori r8,r8,2565
	ctx.r8.u64 = ctx.r8.u64 | 2565;
	// rlwinm r9,r9,0,26,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82eba830
	if (ctx.cr6.eq) goto loc_82EBA830;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82EBA830:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82eba83c
	if (!ctx.cr6.eq) goto loc_82EBA83C;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82EBA83C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mullw r3,r9,r8
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// subf r8,r6,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subf r7,r5,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// beq cr6,0x82eba8d0
	if (ctx.cr6.eq) goto loc_82EBA8D0;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// lwz r29,112(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mullw r9,r5,r4
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_82EBA8D0:
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eba914
	if (ctx.cr6.eq) goto loc_82EBA914;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EBA8F0;
	sub_82299698(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eba918
	if (ctx.cr0.eq) goto loc_82EBA918;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb16f0
	ctx.lr = 0x82EBA910;
	sub_82CB16F0(ctx, base);
	// b 0x82eba918
	goto loc_82EBA918;
loc_82EBA914:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_82EBA918:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBA924"))) PPC_WEAK_FUNC(sub_82EBA924);
PPC_FUNC_IMPL(__imp__sub_82EBA924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA928"))) PPC_WEAK_FUNC(sub_82EBA928);
PPC_FUNC_IMPL(__imp__sub_82EBA928) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBA930"))) PPC_WEAK_FUNC(sub_82EBA930);
PPC_FUNC_IMPL(__imp__sub_82EBA930) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x822996c0
	ctx.lr = 0x82EBA95C;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x822996c0
	ctx.lr = 0x82EBA968;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x822996c0
	ctx.lr = 0x82EBA974;
	sub_822996C0(ctx, base);
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

__attribute__((alias("__imp__sub_82EBA988"))) PPC_WEAK_FUNC(sub_82EBA988);
PPC_FUNC_IMPL(__imp__sub_82EBA988) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eba9c0
	if (ctx.cr6.eq) goto loc_82EBA9C0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82eba9c0
	if (ctx.cr6.eq) goto loc_82EBA9C0;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_82EBA9C0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eba9d8
	if (!ctx.cr6.eq) goto loc_82EBA9D8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebaa00
	if (ctx.cr6.eq) goto loc_82EBAA00;
loc_82EBA9D8:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EBA9E8;
	sub_82299698(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ebaa00
	if (!ctx.cr0.eq) goto loc_82EBAA00;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ebaa28
	goto loc_82EBAA28;
loc_82EBAA00:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebaa24
	if (ctx.cr6.eq) goto loc_82EBAA24;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebaa24
	if (ctx.cr6.eq) goto loc_82EBAA24;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82EBAA24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBAA28:
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

__attribute__((alias("__imp__sub_82EBAA40"))) PPC_WEAK_FUNC(sub_82EBAA40);
PPC_FUNC_IMPL(__imp__sub_82EBAA40) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82ebaa68
	if (ctx.cr6.eq) goto loc_82EBAA68;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82EBAA68:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebaa9c
	if (ctx.cr6.eq) goto loc_82EBAA9C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EBAA84;
	sub_82299698(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ebaa9c
	if (!ctx.cr0.eq) goto loc_82EBAA9C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ebaaa0
	goto loc_82EBAAA0;
loc_82EBAA9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBAAA0:
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

__attribute__((alias("__imp__sub_82EBAAB4"))) PPC_WEAK_FUNC(sub_82EBAAB4);
PPC_FUNC_IMPL(__imp__sub_82EBAAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBAAB8"))) PPC_WEAK_FUNC(sub_82EBAAB8);
PPC_FUNC_IMPL(__imp__sub_82EBAAB8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82299698
	ctx.lr = 0x82EBAAE0;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// bne 0x82ebaaf8
	if (!ctx.cr0.eq) goto loc_82EBAAF8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ebac14
	goto loc_82EBAC14;
loc_82EBAAF8:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82ebabd0
	if (ctx.cr6.eq) goto loc_82EBABD0;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-18120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
loc_82EBAB14:
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r10,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r8,3(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// blt cr6,0x82ebab14
	if (ctx.cr6.lt) goto loc_82EBAB14;
	// b 0x82ebac10
	goto loc_82EBAC10;
loc_82EBABD0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82EBABD8:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// blt cr6,0x82ebabd8
	if (ctx.cr6.lt) goto loc_82EBABD8;
loc_82EBAC10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBAC14:
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

__attribute__((alias("__imp__sub_82EBAC2C"))) PPC_WEAK_FUNC(sub_82EBAC2C);
PPC_FUNC_IMPL(__imp__sub_82EBAC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBAC30"))) PPC_WEAK_FUNC(sub_82EBAC30);
PPC_FUNC_IMPL(__imp__sub_82EBAC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EBAC38;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,-31908
	ctx.r8.s64 = -2091122688;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r8,20040
	ctx.r8.s64 = ctx.r8.s64 + 20040;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,104(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r28,116(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r26,52(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r25,24(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// beq cr6,0x82ebacb4
	if (ctx.cr6.eq) goto loc_82EBACB4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82ebacb4
	if (ctx.cr6.eq) goto loc_82EBACB4;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// bl 0x82eb9da8
	ctx.lr = 0x82EBACAC;
	sub_82EB9DA8(ctx, base);
	// stw r5,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r5.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_82EBACB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBACD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBACF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r26,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBAD14"))) PPC_WEAK_FUNC(sub_82EBAD14);
PPC_FUNC_IMPL(__imp__sub_82EBAD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBAD18"))) PPC_WEAK_FUNC(sub_82EBAD18);
PPC_FUNC_IMPL(__imp__sub_82EBAD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82EBAD48:
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82ebad98
	if (!ctx.cr6.eq) goto loc_82EBAD98;
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82ebad98
	if (!ctx.cr6.eq) goto loc_82EBAD98;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x82ebad98
	if (!ctx.cr6.eq) goto loc_82EBAD98;
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82ebad98
	if (!ctx.cr6.eq) goto loc_82EBAD98;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
loc_82EBAD98:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82ebad48
	if (!ctx.cr0.eq) goto loc_82EBAD48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBADA8"))) PPC_WEAK_FUNC(sub_82EBADA8);
PPC_FUNC_IMPL(__imp__sub_82EBADA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x82ebaec0
	if (ctx.cr6.eq) goto loc_82EBAEC0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82ebae44
	if (ctx.cr6.eq) goto loc_82EBAE44;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82ebae44
	if (ctx.cr6.eq) goto loc_82EBAE44;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ebb0dc
	if (!ctx.cr6.gt) goto loc_82EBB0DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
loc_82EBADE8:
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ebade8
	if (ctx.cr6.lt) goto loc_82EBADE8;
	// b 0x82ebb0dc
	goto loc_82EBB0DC;
loc_82EBAE44:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ebb0dc
	if (!ctx.cr6.gt) goto loc_82EBB0DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
loc_82EBAE5C:
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ebae5c
	if (ctx.cr6.lt) goto loc_82EBAE5C;
	// b 0x82ebb0dc
	goto loc_82EBB0DC;
loc_82EBAEC0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82ebaf94
	if (ctx.cr6.eq) goto loc_82EBAF94;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82ebaf94
	if (ctx.cr6.eq) goto loc_82EBAF94;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ebb0dc
	if (!ctx.cr6.gt) goto loc_82EBB0DC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// addi r8,r8,-32
	ctx.r8.s64 = ctx.r8.s64 + -32;
	// lfs f0,18924(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18924);
	ctx.f0.f64 = double(temp.f32);
loc_82EBAEF8:
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f13,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfsx f13,r7,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stfs f13,8(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f12.u64);
	// lwz r5,-44(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// std r4,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r4.u64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,12(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ebaef8
	if (ctx.cr6.lt) goto loc_82EBAEF8;
	// b 0x82ebb0dc
	goto loc_82EBB0DC;
loc_82EBAF94:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ebb0dc
	if (!ctx.cr6.gt) goto loc_82EBB0DC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// lfs f0,18924(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18924);
	ctx.f0.f64 = double(temp.f32);
loc_82EBAFBC:
	// lfs f13,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lwz r6,88(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f12.u64);
	// lwz r31,-36(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// std r30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r30.u64);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f11,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfd f12,-48(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfsx f13,r6,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f12.u64);
	// lwz r6,-36(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// std r31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r31.u64);
	// lfd f12,-32(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfsx f11,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f12.u64);
	// lwz r6,-36(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// std r5,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r5.u64);
	// lfd f12,-24(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfsx f11,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,8(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stfs f13,12(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ebafbc
	if (ctx.cr6.lt) goto loc_82EBAFBC;
loc_82EBB0DC:
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB0EC"))) PPC_WEAK_FUNC(sub_82EBB0EC);
PPC_FUNC_IMPL(__imp__sub_82EBB0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB0F0"))) PPC_WEAK_FUNC(sub_82EBB0F0);
PPC_FUNC_IMPL(__imp__sub_82EBB0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beq cr6,0x82ebb1ac
	if (ctx.cr6.eq) goto loc_82EBB1AC;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82ebb15c
	if (ctx.cr6.eq) goto loc_82EBB15C;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82ebb15c
	if (ctx.cr6.eq) goto loc_82EBB15C;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ebb360
	if (!ctx.cr6.lt) goto loc_82EBB360;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82EBB140:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82ebb140
	if (!ctx.cr0.eq) goto loc_82EBB140;
	// b 0x82ebb360
	goto loc_82EBB360;
loc_82EBB15C:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ebb360
	if (!ctx.cr6.lt) goto loc_82EBB360;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82EBB178:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82ebb178
	if (!ctx.cr0.eq) goto loc_82EBB178;
	// b 0x82ebb360
	goto loc_82EBB360;
loc_82EBB1AC:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82ebb244
	if (ctx.cr6.eq) goto loc_82EBB244;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82ebb244
	if (ctx.cr6.eq) goto loc_82EBB244;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ebb360
	if (!ctx.cr6.lt) goto loc_82EBB360;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lfs f0,18924(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18924);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,992
	ctx.r9.s64 = ctx.r9.s64 + 992;
loc_82EBB1E8:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f12.u64);
	// lwz r7,-44(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// std r6,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r6.u64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfsx f11,r7,r9
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82ebb1e8
	if (!ctx.cr0.eq) goto loc_82EBB1E8;
	// b 0x82ebb360
	goto loc_82EBB360;
loc_82EBB244:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ebb360
	if (!ctx.cr6.lt) goto loc_82EBB360;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lfs f0,18924(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18924);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r10,r10,992
	ctx.r10.s64 = ctx.r10.s64 + 992;
loc_82EBB270:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f10.u64);
	// lwz r5,-36(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f10,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f10.u64);
	// lwz r4,-36(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f10.u64);
	// lwz r3,-36(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// std r30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r30.u64);
	// lfd f9,-32(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// std r31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r31.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfd f10,-48(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r31.u64);
	// lfd f8,-24(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfsx f7,r3,r10
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfsx f10,r3,r8
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f11,f10,f11,f7
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f11,-8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// lfsx f11,r4,r10
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f9,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fmadds f12,f9,f12,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f12,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82ebb270
	if (!ctx.cr0.eq) goto loc_82EBB270;
loc_82EBB360:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB36C"))) PPC_WEAK_FUNC(sub_82EBB36C);
PPC_FUNC_IMPL(__imp__sub_82EBB36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB370"))) PPC_WEAK_FUNC(sub_82EBB370);
PPC_FUNC_IMPL(__imp__sub_82EBB370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ebb3ec
	if (!ctx.cr6.gt) goto loc_82EBB3EC;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// subfic r7,r4,-8
	ctx.xer.ca = ctx.r4.u32 <= 4294967288;
	ctx.r7.s64 = -8 - ctx.r4.s64;
loc_82EBB388:
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lfs f10,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ebb388
	if (ctx.cr6.lt) goto loc_82EBB388;
loc_82EBB3EC:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBB404"))) PPC_WEAK_FUNC(sub_82EBB404);
PPC_FUNC_IMPL(__imp__sub_82EBB404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

