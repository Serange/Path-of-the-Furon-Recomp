#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8312E830"))) PPC_WEAK_FUNC(sub_8312E830);
PPC_FUNC_IMPL(__imp__sub_8312E830) {
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

__attribute__((alias("__imp__sub_8312E844"))) PPC_WEAK_FUNC(sub_8312E844);
PPC_FUNC_IMPL(__imp__sub_8312E844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E848"))) PPC_WEAK_FUNC(sub_8312E848);
PPC_FUNC_IMPL(__imp__sub_8312E848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E85C"))) PPC_WEAK_FUNC(sub_8312E85C);
PPC_FUNC_IMPL(__imp__sub_8312E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E860"))) PPC_WEAK_FUNC(sub_8312E860);
PPC_FUNC_IMPL(__imp__sub_8312E860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E870"))) PPC_WEAK_FUNC(sub_8312E870);
PPC_FUNC_IMPL(__imp__sub_8312E870) {
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

__attribute__((alias("__imp__sub_8312E884"))) PPC_WEAK_FUNC(sub_8312E884);
PPC_FUNC_IMPL(__imp__sub_8312E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E888"))) PPC_WEAK_FUNC(sub_8312E888);
PPC_FUNC_IMPL(__imp__sub_8312E888) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E8A0"))) PPC_WEAK_FUNC(sub_8312E8A0);
PPC_FUNC_IMPL(__imp__sub_8312E8A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E8A8"))) PPC_WEAK_FUNC(sub_8312E8A8);
PPC_FUNC_IMPL(__imp__sub_8312E8A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E8B0"))) PPC_WEAK_FUNC(sub_8312E8B0);
PPC_FUNC_IMPL(__imp__sub_8312E8B0) {
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

__attribute__((alias("__imp__sub_8312E8C4"))) PPC_WEAK_FUNC(sub_8312E8C4);
PPC_FUNC_IMPL(__imp__sub_8312E8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E8C8"))) PPC_WEAK_FUNC(sub_8312E8C8);
PPC_FUNC_IMPL(__imp__sub_8312E8C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,36
	ctx.r10.s64 = 36;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E8E0"))) PPC_WEAK_FUNC(sub_8312E8E0);
PPC_FUNC_IMPL(__imp__sub_8312E8E0) {
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

__attribute__((alias("__imp__sub_8312E8F8"))) PPC_WEAK_FUNC(sub_8312E8F8);
PPC_FUNC_IMPL(__imp__sub_8312E8F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E900"))) PPC_WEAK_FUNC(sub_8312E900);
PPC_FUNC_IMPL(__imp__sub_8312E900) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E908"))) PPC_WEAK_FUNC(sub_8312E908);
PPC_FUNC_IMPL(__imp__sub_8312E908) {
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

__attribute__((alias("__imp__sub_8312E91C"))) PPC_WEAK_FUNC(sub_8312E91C);
PPC_FUNC_IMPL(__imp__sub_8312E91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E920"))) PPC_WEAK_FUNC(sub_8312E920);
PPC_FUNC_IMPL(__imp__sub_8312E920) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E934"))) PPC_WEAK_FUNC(sub_8312E934);
PPC_FUNC_IMPL(__imp__sub_8312E934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E938"))) PPC_WEAK_FUNC(sub_8312E938);
PPC_FUNC_IMPL(__imp__sub_8312E938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E948"))) PPC_WEAK_FUNC(sub_8312E948);
PPC_FUNC_IMPL(__imp__sub_8312E948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E954"))) PPC_WEAK_FUNC(sub_8312E954);
PPC_FUNC_IMPL(__imp__sub_8312E954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E958"))) PPC_WEAK_FUNC(sub_8312E958);
PPC_FUNC_IMPL(__imp__sub_8312E958) {
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
	// lwz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// lfs f0,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f13,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f12,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lwz r9,76(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// lfs f11,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f10,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f9,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// lfs f8,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,96(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f7,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,100(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f6,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,104(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lwz r7,108(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// lfs f5,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,112(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f4,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,116(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f3,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,120(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lwz r6,124(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r6,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EA5C"))) PPC_WEAK_FUNC(sub_8312EA5C);
PPC_FUNC_IMPL(__imp__sub_8312EA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EA60"))) PPC_WEAK_FUNC(sub_8312EA60);
PPC_FUNC_IMPL(__imp__sub_8312EA60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EA68"))) PPC_WEAK_FUNC(sub_8312EA68);
PPC_FUNC_IMPL(__imp__sub_8312EA68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EA70"))) PPC_WEAK_FUNC(sub_8312EA70);
PPC_FUNC_IMPL(__imp__sub_8312EA70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EA94"))) PPC_WEAK_FUNC(sub_8312EA94);
PPC_FUNC_IMPL(__imp__sub_8312EA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EA98"))) PPC_WEAK_FUNC(sub_8312EA98);
PPC_FUNC_IMPL(__imp__sub_8312EA98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EAB8"))) PPC_WEAK_FUNC(sub_8312EAB8);
PPC_FUNC_IMPL(__imp__sub_8312EAB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EABC"))) PPC_WEAK_FUNC(sub_8312EABC);
PPC_FUNC_IMPL(__imp__sub_8312EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EAC0"))) PPC_WEAK_FUNC(sub_8312EAC0);
PPC_FUNC_IMPL(__imp__sub_8312EAC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EAC4"))) PPC_WEAK_FUNC(sub_8312EAC4);
PPC_FUNC_IMPL(__imp__sub_8312EAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EAC8"))) PPC_WEAK_FUNC(sub_8312EAC8);
PPC_FUNC_IMPL(__imp__sub_8312EAC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EADC"))) PPC_WEAK_FUNC(sub_8312EADC);
PPC_FUNC_IMPL(__imp__sub_8312EADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EAE0"))) PPC_WEAK_FUNC(sub_8312EAE0);
PPC_FUNC_IMPL(__imp__sub_8312EAE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EAE8"))) PPC_WEAK_FUNC(sub_8312EAE8);
PPC_FUNC_IMPL(__imp__sub_8312EAE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EAF0"))) PPC_WEAK_FUNC(sub_8312EAF0);
PPC_FUNC_IMPL(__imp__sub_8312EAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EB14"))) PPC_WEAK_FUNC(sub_8312EB14);
PPC_FUNC_IMPL(__imp__sub_8312EB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EB18"))) PPC_WEAK_FUNC(sub_8312EB18);
PPC_FUNC_IMPL(__imp__sub_8312EB18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EB38"))) PPC_WEAK_FUNC(sub_8312EB38);
PPC_FUNC_IMPL(__imp__sub_8312EB38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EB3C"))) PPC_WEAK_FUNC(sub_8312EB3C);
PPC_FUNC_IMPL(__imp__sub_8312EB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EB40"))) PPC_WEAK_FUNC(sub_8312EB40);
PPC_FUNC_IMPL(__imp__sub_8312EB40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EB44"))) PPC_WEAK_FUNC(sub_8312EB44);
PPC_FUNC_IMPL(__imp__sub_8312EB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EB48"))) PPC_WEAK_FUNC(sub_8312EB48);
PPC_FUNC_IMPL(__imp__sub_8312EB48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EB68"))) PPC_WEAK_FUNC(sub_8312EB68);
PPC_FUNC_IMPL(__imp__sub_8312EB68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EB6C"))) PPC_WEAK_FUNC(sub_8312EB6C);
PPC_FUNC_IMPL(__imp__sub_8312EB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EB70"))) PPC_WEAK_FUNC(sub_8312EB70);
PPC_FUNC_IMPL(__imp__sub_8312EB70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EB74"))) PPC_WEAK_FUNC(sub_8312EB74);
PPC_FUNC_IMPL(__imp__sub_8312EB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EB78"))) PPC_WEAK_FUNC(sub_8312EB78);
PPC_FUNC_IMPL(__imp__sub_8312EB78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EB80"))) PPC_WEAK_FUNC(sub_8312EB80);
PPC_FUNC_IMPL(__imp__sub_8312EB80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EBA4"))) PPC_WEAK_FUNC(sub_8312EBA4);
PPC_FUNC_IMPL(__imp__sub_8312EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EBA8"))) PPC_WEAK_FUNC(sub_8312EBA8);
PPC_FUNC_IMPL(__imp__sub_8312EBA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EBB0"))) PPC_WEAK_FUNC(sub_8312EBB0);
PPC_FUNC_IMPL(__imp__sub_8312EBB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EBB4"))) PPC_WEAK_FUNC(sub_8312EBB4);
PPC_FUNC_IMPL(__imp__sub_8312EBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EBB8"))) PPC_WEAK_FUNC(sub_8312EBB8);
PPC_FUNC_IMPL(__imp__sub_8312EBB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EBC0"))) PPC_WEAK_FUNC(sub_8312EBC0);
PPC_FUNC_IMPL(__imp__sub_8312EBC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EBC8"))) PPC_WEAK_FUNC(sub_8312EBC8);
PPC_FUNC_IMPL(__imp__sub_8312EBC8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EBE8"))) PPC_WEAK_FUNC(sub_8312EBE8);
PPC_FUNC_IMPL(__imp__sub_8312EBE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EBEC"))) PPC_WEAK_FUNC(sub_8312EBEC);
PPC_FUNC_IMPL(__imp__sub_8312EBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EBF0"))) PPC_WEAK_FUNC(sub_8312EBF0);
PPC_FUNC_IMPL(__imp__sub_8312EBF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EBF4"))) PPC_WEAK_FUNC(sub_8312EBF4);
PPC_FUNC_IMPL(__imp__sub_8312EBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EBF8"))) PPC_WEAK_FUNC(sub_8312EBF8);
PPC_FUNC_IMPL(__imp__sub_8312EBF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EC18"))) PPC_WEAK_FUNC(sub_8312EC18);
PPC_FUNC_IMPL(__imp__sub_8312EC18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EC1C"))) PPC_WEAK_FUNC(sub_8312EC1C);
PPC_FUNC_IMPL(__imp__sub_8312EC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EC20"))) PPC_WEAK_FUNC(sub_8312EC20);
PPC_FUNC_IMPL(__imp__sub_8312EC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EC24"))) PPC_WEAK_FUNC(sub_8312EC24);
PPC_FUNC_IMPL(__imp__sub_8312EC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EC28"))) PPC_WEAK_FUNC(sub_8312EC28);
PPC_FUNC_IMPL(__imp__sub_8312EC28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EC30"))) PPC_WEAK_FUNC(sub_8312EC30);
PPC_FUNC_IMPL(__imp__sub_8312EC30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EC38"))) PPC_WEAK_FUNC(sub_8312EC38);
PPC_FUNC_IMPL(__imp__sub_8312EC38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EC58"))) PPC_WEAK_FUNC(sub_8312EC58);
PPC_FUNC_IMPL(__imp__sub_8312EC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EC5C"))) PPC_WEAK_FUNC(sub_8312EC5C);
PPC_FUNC_IMPL(__imp__sub_8312EC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EC60"))) PPC_WEAK_FUNC(sub_8312EC60);
PPC_FUNC_IMPL(__imp__sub_8312EC60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EC64"))) PPC_WEAK_FUNC(sub_8312EC64);
PPC_FUNC_IMPL(__imp__sub_8312EC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EC68"))) PPC_WEAK_FUNC(sub_8312EC68);
PPC_FUNC_IMPL(__imp__sub_8312EC68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EC88"))) PPC_WEAK_FUNC(sub_8312EC88);
PPC_FUNC_IMPL(__imp__sub_8312EC88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EC8C"))) PPC_WEAK_FUNC(sub_8312EC8C);
PPC_FUNC_IMPL(__imp__sub_8312EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EC90"))) PPC_WEAK_FUNC(sub_8312EC90);
PPC_FUNC_IMPL(__imp__sub_8312EC90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EC94"))) PPC_WEAK_FUNC(sub_8312EC94);
PPC_FUNC_IMPL(__imp__sub_8312EC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EC98"))) PPC_WEAK_FUNC(sub_8312EC98);
PPC_FUNC_IMPL(__imp__sub_8312EC98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312ECA0"))) PPC_WEAK_FUNC(sub_8312ECA0);
PPC_FUNC_IMPL(__imp__sub_8312ECA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312ECA8"))) PPC_WEAK_FUNC(sub_8312ECA8);
PPC_FUNC_IMPL(__imp__sub_8312ECA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312ECC8"))) PPC_WEAK_FUNC(sub_8312ECC8);
PPC_FUNC_IMPL(__imp__sub_8312ECC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312ECCC"))) PPC_WEAK_FUNC(sub_8312ECCC);
PPC_FUNC_IMPL(__imp__sub_8312ECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312ECD0"))) PPC_WEAK_FUNC(sub_8312ECD0);
PPC_FUNC_IMPL(__imp__sub_8312ECD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312ECD4"))) PPC_WEAK_FUNC(sub_8312ECD4);
PPC_FUNC_IMPL(__imp__sub_8312ECD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312ECD8"))) PPC_WEAK_FUNC(sub_8312ECD8);
PPC_FUNC_IMPL(__imp__sub_8312ECD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312ECF0"))) PPC_WEAK_FUNC(sub_8312ECF0);
PPC_FUNC_IMPL(__imp__sub_8312ECF0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31901
	ctx.r9.s64 = -2090663936;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,-32308(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32308);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312ED1C"))) PPC_WEAK_FUNC(sub_8312ED1C);
PPC_FUNC_IMPL(__imp__sub_8312ED1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312ED20"))) PPC_WEAK_FUNC(sub_8312ED20);
PPC_FUNC_IMPL(__imp__sub_8312ED20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312ED40"))) PPC_WEAK_FUNC(sub_8312ED40);
PPC_FUNC_IMPL(__imp__sub_8312ED40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312ED44"))) PPC_WEAK_FUNC(sub_8312ED44);
PPC_FUNC_IMPL(__imp__sub_8312ED44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312ED48"))) PPC_WEAK_FUNC(sub_8312ED48);
PPC_FUNC_IMPL(__imp__sub_8312ED48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312ED4C"))) PPC_WEAK_FUNC(sub_8312ED4C);
PPC_FUNC_IMPL(__imp__sub_8312ED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312ED50"))) PPC_WEAK_FUNC(sub_8312ED50);
PPC_FUNC_IMPL(__imp__sub_8312ED50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312ED70"))) PPC_WEAK_FUNC(sub_8312ED70);
PPC_FUNC_IMPL(__imp__sub_8312ED70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312ED74"))) PPC_WEAK_FUNC(sub_8312ED74);
PPC_FUNC_IMPL(__imp__sub_8312ED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312ED78"))) PPC_WEAK_FUNC(sub_8312ED78);
PPC_FUNC_IMPL(__imp__sub_8312ED78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312ED7C"))) PPC_WEAK_FUNC(sub_8312ED7C);
PPC_FUNC_IMPL(__imp__sub_8312ED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312ED80"))) PPC_WEAK_FUNC(sub_8312ED80);
PPC_FUNC_IMPL(__imp__sub_8312ED80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EDA0"))) PPC_WEAK_FUNC(sub_8312EDA0);
PPC_FUNC_IMPL(__imp__sub_8312EDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EDA4"))) PPC_WEAK_FUNC(sub_8312EDA4);
PPC_FUNC_IMPL(__imp__sub_8312EDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EDA8"))) PPC_WEAK_FUNC(sub_8312EDA8);
PPC_FUNC_IMPL(__imp__sub_8312EDA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EDAC"))) PPC_WEAK_FUNC(sub_8312EDAC);
PPC_FUNC_IMPL(__imp__sub_8312EDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EDB0"))) PPC_WEAK_FUNC(sub_8312EDB0);
PPC_FUNC_IMPL(__imp__sub_8312EDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// lhz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 44);
	// sth r10,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EE14"))) PPC_WEAK_FUNC(sub_8312EE14);
PPC_FUNC_IMPL(__imp__sub_8312EE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EE18"))) PPC_WEAK_FUNC(sub_8312EE18);
PPC_FUNC_IMPL(__imp__sub_8312EE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312ee2c
	if (!ctx.cr6.eq) goto loc_8312EE2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312EE2C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EE3C"))) PPC_WEAK_FUNC(sub_8312EE3C);
PPC_FUNC_IMPL(__imp__sub_8312EE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EE40"))) PPC_WEAK_FUNC(sub_8312EE40);
PPC_FUNC_IMPL(__imp__sub_8312EE40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8312EE48:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bne 0x8312ee48
	if (!ctx.cr0.eq) goto loc_8312EE48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EE68"))) PPC_WEAK_FUNC(sub_8312EE68);
PPC_FUNC_IMPL(__imp__sub_8312EE68) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8312EE74:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8312ee74
	if (!ctx.cr6.eq) goto loc_8312EE74;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EE98"))) PPC_WEAK_FUNC(sub_8312EE98);
PPC_FUNC_IMPL(__imp__sub_8312EE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,282
	ctx.r5.s64 = 282;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312EEB8"))) PPC_WEAK_FUNC(sub_8312EEB8);
PPC_FUNC_IMPL(__imp__sub_8312EEB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312eecc
	if (!ctx.cr6.eq) goto loc_8312EECC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312EECC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EEDC"))) PPC_WEAK_FUNC(sub_8312EEDC);
PPC_FUNC_IMPL(__imp__sub_8312EEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EEE0"))) PPC_WEAK_FUNC(sub_8312EEE0);
PPC_FUNC_IMPL(__imp__sub_8312EEE0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8312EEE8:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bne 0x8312eee8
	if (!ctx.cr0.eq) goto loc_8312EEE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EF08"))) PPC_WEAK_FUNC(sub_8312EF08);
PPC_FUNC_IMPL(__imp__sub_8312EF08) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8312EF14:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8312ef14
	if (!ctx.cr6.eq) goto loc_8312EF14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EF38"))) PPC_WEAK_FUNC(sub_8312EF38);
PPC_FUNC_IMPL(__imp__sub_8312EF38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8312EF40:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x8312ef40
	if (!ctx.cr0.eq) goto loc_8312EF40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EF58"))) PPC_WEAK_FUNC(sub_8312EF58);
PPC_FUNC_IMPL(__imp__sub_8312EF58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312ef6c
	if (!ctx.cr6.eq) goto loc_8312EF6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312EF6C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EF7C"))) PPC_WEAK_FUNC(sub_8312EF7C);
PPC_FUNC_IMPL(__imp__sub_8312EF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EF80"))) PPC_WEAK_FUNC(sub_8312EF80);
PPC_FUNC_IMPL(__imp__sub_8312EF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8312EF88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8312efb8
	if (ctx.cr6.eq) goto loc_8312EFB8;
loc_8312EFA0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312e958
	ctx.lr = 0x8312EFAC;
	sub_8312E958(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bne 0x8312efa0
	if (!ctx.cr0.eq) goto loc_8312EFA0;
loc_8312EFB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312EFC0"))) PPC_WEAK_FUNC(sub_8312EFC0);
PPC_FUNC_IMPL(__imp__sub_8312EFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8312EFC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8312effc
	if (ctx.cr6.eq) goto loc_8312EFFC;
loc_8312EFE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312e958
	ctx.lr = 0x8312EFEC;
	sub_8312E958(ctx, base);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8312efe0
	if (!ctx.cr6.eq) goto loc_8312EFE0;
loc_8312EFFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F008"))) PPC_WEAK_FUNC(sub_8312F008);
PPC_FUNC_IMPL(__imp__sub_8312F008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8312F010;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8312f030
	if (!ctx.cr6.eq) goto loc_8312F030;
loc_8312F024:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8312F030:
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8312F050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,136
	ctx.r11.s64 = ctx.r3.s64 + 136;
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addic. r30,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r30.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// beq 0x8312f024
	if (ctx.cr0.eq) goto loc_8312F024;
	// lwz r5,-8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8312f084
	if (ctx.cr6.lt) goto loc_8312F084;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8312F084:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8312F090;
	sub_82CB1160(ctx, base);
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312f0b0
	if (ctx.cr6.eq) goto loc_8312F0B0;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8312F0B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312F0B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F0BC"))) PPC_WEAK_FUNC(sub_8312F0BC);
PPC_FUNC_IMPL(__imp__sub_8312F0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F0C0"))) PPC_WEAK_FUNC(sub_8312F0C0);
PPC_FUNC_IMPL(__imp__sub_8312F0C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,-4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312F0EC"))) PPC_WEAK_FUNC(sub_8312F0EC);
PPC_FUNC_IMPL(__imp__sub_8312F0EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F0F0"))) PPC_WEAK_FUNC(sub_8312F0F0);
PPC_FUNC_IMPL(__imp__sub_8312F0F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312f104
	if (!ctx.cr6.eq) goto loc_8312F104;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312F104:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r3,r8,r9
	ctx.r3.s32 = ctx.r8.s32 / ctx.r9.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F118"))) PPC_WEAK_FUNC(sub_8312F118);
PPC_FUNC_IMPL(__imp__sub_8312F118) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8312F124:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8312f124
	if (!ctx.cr6.eq) goto loc_8312F124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F150"))) PPC_WEAK_FUNC(sub_8312F150);
PPC_FUNC_IMPL(__imp__sub_8312F150) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312F178"))) PPC_WEAK_FUNC(sub_8312F178);
PPC_FUNC_IMPL(__imp__sub_8312F178) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312f18c
	if (!ctx.cr6.eq) goto loc_8312F18C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312F18C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,48
	ctx.r9.s64 = 48;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r3,r8,r9
	ctx.r3.s32 = ctx.r8.s32 / ctx.r9.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F1A0"))) PPC_WEAK_FUNC(sub_8312F1A0);
PPC_FUNC_IMPL(__imp__sub_8312F1A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312f1b4
	if (!ctx.cr6.eq) goto loc_8312F1B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312F1B4:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F1C4"))) PPC_WEAK_FUNC(sub_8312F1C4);
PPC_FUNC_IMPL(__imp__sub_8312F1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F1C8"))) PPC_WEAK_FUNC(sub_8312F1C8);
PPC_FUNC_IMPL(__imp__sub_8312F1C8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8312F1D4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8312f1d4
	if (!ctx.cr6.eq) goto loc_8312F1D4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F1F8"))) PPC_WEAK_FUNC(sub_8312F1F8);
PPC_FUNC_IMPL(__imp__sub_8312F1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,282
	ctx.r5.s64 = 282;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312F218"))) PPC_WEAK_FUNC(sub_8312F218);
PPC_FUNC_IMPL(__imp__sub_8312F218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// lhz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 44);
	// sth r10,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F27C"))) PPC_WEAK_FUNC(sub_8312F27C);
PPC_FUNC_IMPL(__imp__sub_8312F27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F280"))) PPC_WEAK_FUNC(sub_8312F280);
PPC_FUNC_IMPL(__imp__sub_8312F280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,282
	ctx.r5.s64 = 282;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312F2A0"))) PPC_WEAK_FUNC(sub_8312F2A0);
PPC_FUNC_IMPL(__imp__sub_8312F2A0) {
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
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312F2D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r10,136
	ctx.r11.s64 = ctx.r10.s64 + 136;
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8312F30C"))) PPC_WEAK_FUNC(sub_8312F30C);
PPC_FUNC_IMPL(__imp__sub_8312F30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F310"))) PPC_WEAK_FUNC(sub_8312F310);
PPC_FUNC_IMPL(__imp__sub_8312F310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312f324
	if (!ctx.cr6.eq) goto loc_8312F324;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312F324:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,20
	ctx.r9.s64 = 20;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r3,r8,r9
	ctx.r3.s32 = ctx.r8.s32 / ctx.r9.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F338"))) PPC_WEAK_FUNC(sub_8312F338);
PPC_FUNC_IMPL(__imp__sub_8312F338) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8312F344:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8312F354:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8312f354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8312F354;
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8312f344
	if (!ctx.cr6.eq) goto loc_8312F344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F37C"))) PPC_WEAK_FUNC(sub_8312F37C);
PPC_FUNC_IMPL(__imp__sub_8312F37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F380"))) PPC_WEAK_FUNC(sub_8312F380);
PPC_FUNC_IMPL(__imp__sub_8312F380) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312F3A8"))) PPC_WEAK_FUNC(sub_8312F3A8);
PPC_FUNC_IMPL(__imp__sub_8312F3A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312f3bc
	if (!ctx.cr6.eq) goto loc_8312F3BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312F3BC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F3CC"))) PPC_WEAK_FUNC(sub_8312F3CC);
PPC_FUNC_IMPL(__imp__sub_8312F3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F3D0"))) PPC_WEAK_FUNC(sub_8312F3D0);
PPC_FUNC_IMPL(__imp__sub_8312F3D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8312F3DC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8312f3dc
	if (!ctx.cr6.eq) goto loc_8312F3DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F400"))) PPC_WEAK_FUNC(sub_8312F400);
PPC_FUNC_IMPL(__imp__sub_8312F400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,282
	ctx.r5.s64 = 282;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312F420"))) PPC_WEAK_FUNC(sub_8312F420);
PPC_FUNC_IMPL(__imp__sub_8312F420) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312F448"))) PPC_WEAK_FUNC(sub_8312F448);
PPC_FUNC_IMPL(__imp__sub_8312F448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312f45c
	if (!ctx.cr6.eq) goto loc_8312F45C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312F45C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,36
	ctx.r9.s64 = 36;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r3,r8,r9
	ctx.r3.s32 = ctx.r8.s32 / ctx.r9.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F470"))) PPC_WEAK_FUNC(sub_8312F470);
PPC_FUNC_IMPL(__imp__sub_8312F470) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8312F47C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8312F48C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8312f48c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8312F48C;
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8312f47c
	if (!ctx.cr6.eq) goto loc_8312F47C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F4B4"))) PPC_WEAK_FUNC(sub_8312F4B4);
PPC_FUNC_IMPL(__imp__sub_8312F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F4B8"))) PPC_WEAK_FUNC(sub_8312F4B8);
PPC_FUNC_IMPL(__imp__sub_8312F4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312F4E0"))) PPC_WEAK_FUNC(sub_8312F4E0);
PPC_FUNC_IMPL(__imp__sub_8312F4E0) {
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
loc_8312F4F8:
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// bgt cr6,0x8312f57c
	if (ctx.cr6.gt) goto loc_8312F57C;
loc_8312F518:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8312f534
	if (!ctx.cr6.lt) goto loc_8312F534;
loc_8312F524:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8312f524
	if (ctx.cr6.lt) goto loc_8312F524;
loc_8312F534:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8312f550
	if (!ctx.cr6.lt) goto loc_8312F550;
loc_8312F540:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8312f540
	if (ctx.cr6.lt) goto loc_8312F540;
loc_8312F550:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x8312f57c
	if (ctx.cr6.gt) goto loc_8312F57C;
	// beq cr6,0x8312f56c
	if (ctx.cr6.eq) goto loc_8312F56C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_8312F56C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x8312f518
	if (!ctx.cr6.gt) goto loc_8312F518;
loc_8312F57C:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8312f588
	if (!ctx.cr6.lt) goto loc_8312F588;
	// bl 0x8312f4e0
	ctx.lr = 0x8312F588;
	sub_8312F4E0(ctx, base);
loc_8312F588:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8312f4f8
	if (ctx.cr6.lt) goto loc_8312F4F8;
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

__attribute__((alias("__imp__sub_8312F5AC"))) PPC_WEAK_FUNC(sub_8312F5AC);
PPC_FUNC_IMPL(__imp__sub_8312F5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F5B0"))) PPC_WEAK_FUNC(sub_8312F5B0);
PPC_FUNC_IMPL(__imp__sub_8312F5B0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312f5e8
	if (ctx.cr6.eq) goto loc_8312F5E8;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312F5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312F5E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8312F60C"))) PPC_WEAK_FUNC(sub_8312F60C);
PPC_FUNC_IMPL(__imp__sub_8312F60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F610"))) PPC_WEAK_FUNC(sub_8312F610);
PPC_FUNC_IMPL(__imp__sub_8312F610) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312f648
	if (ctx.cr6.eq) goto loc_8312F648;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312F648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312F648:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8312F66C"))) PPC_WEAK_FUNC(sub_8312F66C);
PPC_FUNC_IMPL(__imp__sub_8312F66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F670"))) PPC_WEAK_FUNC(sub_8312F670);
PPC_FUNC_IMPL(__imp__sub_8312F670) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312f6a8
	if (ctx.cr6.eq) goto loc_8312F6A8;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312F6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312F6A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8312F6CC"))) PPC_WEAK_FUNC(sub_8312F6CC);
PPC_FUNC_IMPL(__imp__sub_8312F6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F6D0"))) PPC_WEAK_FUNC(sub_8312F6D0);
PPC_FUNC_IMPL(__imp__sub_8312F6D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F6DC"))) PPC_WEAK_FUNC(sub_8312F6DC);
PPC_FUNC_IMPL(__imp__sub_8312F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F6E0"))) PPC_WEAK_FUNC(sub_8312F6E0);
PPC_FUNC_IMPL(__imp__sub_8312F6E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F6EC"))) PPC_WEAK_FUNC(sub_8312F6EC);
PPC_FUNC_IMPL(__imp__sub_8312F6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F6F0"))) PPC_WEAK_FUNC(sub_8312F6F0);
PPC_FUNC_IMPL(__imp__sub_8312F6F0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312f728
	if (ctx.cr6.eq) goto loc_8312F728;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312F728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312F728:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8312F74C"))) PPC_WEAK_FUNC(sub_8312F74C);
PPC_FUNC_IMPL(__imp__sub_8312F74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F750"))) PPC_WEAK_FUNC(sub_8312F750);
PPC_FUNC_IMPL(__imp__sub_8312F750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F75C"))) PPC_WEAK_FUNC(sub_8312F75C);
PPC_FUNC_IMPL(__imp__sub_8312F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F760"))) PPC_WEAK_FUNC(sub_8312F760);
PPC_FUNC_IMPL(__imp__sub_8312F760) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312f798
	if (ctx.cr6.eq) goto loc_8312F798;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312F798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312F798:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8312F7BC"))) PPC_WEAK_FUNC(sub_8312F7BC);
PPC_FUNC_IMPL(__imp__sub_8312F7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F7C0"))) PPC_WEAK_FUNC(sub_8312F7C0);
PPC_FUNC_IMPL(__imp__sub_8312F7C0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312f7f8
	if (ctx.cr6.eq) goto loc_8312F7F8;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312F7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312F7F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8312F81C"))) PPC_WEAK_FUNC(sub_8312F81C);
PPC_FUNC_IMPL(__imp__sub_8312F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F820"))) PPC_WEAK_FUNC(sub_8312F820);
PPC_FUNC_IMPL(__imp__sub_8312F820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F82C"))) PPC_WEAK_FUNC(sub_8312F82C);
PPC_FUNC_IMPL(__imp__sub_8312F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F830"))) PPC_WEAK_FUNC(sub_8312F830);
PPC_FUNC_IMPL(__imp__sub_8312F830) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312f868
	if (ctx.cr6.eq) goto loc_8312F868;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312F868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312F868:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8312F88C"))) PPC_WEAK_FUNC(sub_8312F88C);
PPC_FUNC_IMPL(__imp__sub_8312F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F890"))) PPC_WEAK_FUNC(sub_8312F890);
PPC_FUNC_IMPL(__imp__sub_8312F890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F89C"))) PPC_WEAK_FUNC(sub_8312F89C);
PPC_FUNC_IMPL(__imp__sub_8312F89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F8A0"))) PPC_WEAK_FUNC(sub_8312F8A0);
PPC_FUNC_IMPL(__imp__sub_8312F8A0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312f8d8
	if (ctx.cr6.eq) goto loc_8312F8D8;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312F8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312F8D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8312F8FC"))) PPC_WEAK_FUNC(sub_8312F8FC);
PPC_FUNC_IMPL(__imp__sub_8312F8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F900"))) PPC_WEAK_FUNC(sub_8312F900);
PPC_FUNC_IMPL(__imp__sub_8312F900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F90C"))) PPC_WEAK_FUNC(sub_8312F90C);
PPC_FUNC_IMPL(__imp__sub_8312F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F910"))) PPC_WEAK_FUNC(sub_8312F910);
PPC_FUNC_IMPL(__imp__sub_8312F910) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312f948
	if (ctx.cr6.eq) goto loc_8312F948;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312F948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312F948:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8312F96C"))) PPC_WEAK_FUNC(sub_8312F96C);
PPC_FUNC_IMPL(__imp__sub_8312F96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F970"))) PPC_WEAK_FUNC(sub_8312F970);
PPC_FUNC_IMPL(__imp__sub_8312F970) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312f9a8
	if (ctx.cr6.eq) goto loc_8312F9A8;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312F9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312F9A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8312F9CC"))) PPC_WEAK_FUNC(sub_8312F9CC);
PPC_FUNC_IMPL(__imp__sub_8312F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F9D0"))) PPC_WEAK_FUNC(sub_8312F9D0);
PPC_FUNC_IMPL(__imp__sub_8312F9D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F9DC"))) PPC_WEAK_FUNC(sub_8312F9DC);
PPC_FUNC_IMPL(__imp__sub_8312F9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312F9E0"))) PPC_WEAK_FUNC(sub_8312F9E0);
PPC_FUNC_IMPL(__imp__sub_8312F9E0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312fa18
	if (ctx.cr6.eq) goto loc_8312FA18;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312FA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312FA18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8312FA3C"))) PPC_WEAK_FUNC(sub_8312FA3C);
PPC_FUNC_IMPL(__imp__sub_8312FA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312FA40"))) PPC_WEAK_FUNC(sub_8312FA40);
PPC_FUNC_IMPL(__imp__sub_8312FA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8312FA48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312fa68
	if (ctx.cr6.eq) goto loc_8312FA68;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
loc_8312FA68:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8312fb14
	if (!ctx.cr6.lt) goto loc_8312FB14;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8312FA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8312facc
	if (ctx.cr6.eq) goto loc_8312FACC;
loc_8312FAAC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8312faac
	if (!ctx.cr6.eq) goto loc_8312FAAC;
loc_8312FACC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312faec
	if (ctx.cr6.eq) goto loc_8312FAEC;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8312FAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312FAEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8312FB14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312FB1C"))) PPC_WEAK_FUNC(sub_8312FB1C);
PPC_FUNC_IMPL(__imp__sub_8312FB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312FB20"))) PPC_WEAK_FUNC(sub_8312FB20);
PPC_FUNC_IMPL(__imp__sub_8312FB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8312FB28;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8312fcc0
	if (ctx.cr6.eq) goto loc_8312FCC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312fb54
	if (!ctx.cr6.eq) goto loc_8312FB54;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8312fb60
	goto loc_8312FB60;
loc_8312FB54:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
loc_8312FB60:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8312fc50
	if (!ctx.cr6.lt) goto loc_8312FC50;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r27,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312fb98
	if (ctx.cr6.eq) goto loc_8312FB98;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
loc_8312FB98:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8312fc44
	if (!ctx.cr6.lt) goto loc_8312FC44;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8312FBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8312fbfc
	if (ctx.cr6.eq) goto loc_8312FBFC;
loc_8312FBDC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8312fbdc
	if (!ctx.cr6.eq) goto loc_8312FBDC;
loc_8312FBFC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312fc1c
	if (ctx.cr6.eq) goto loc_8312FC1C;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8312FC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312FC1C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8312FC44:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8312FC50:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r26,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8312fc88
	if (ctx.cr6.eq) goto loc_8312FC88;
loc_8312FC68:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8312fc68
	if (!ctx.cr6.eq) goto loc_8312FC68;
loc_8312FC88:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8312fcb4
	if (ctx.cr6.eq) goto loc_8312FCB4;
loc_8312FC98:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x8312fc98
	if (!ctx.cr0.eq) goto loc_8312FC98;
loc_8312FCB4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8312FCC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312FCC8"))) PPC_WEAK_FUNC(sub_8312FCC8);
PPC_FUNC_IMPL(__imp__sub_8312FCC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8312fcfc
	if (!ctx.cr6.lt) goto loc_8312FCFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r10,r5,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_8312FCDC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8312fcdc
	if (!ctx.cr6.eq) goto loc_8312FCDC;
loc_8312FCFC:
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FD18"))) PPC_WEAK_FUNC(sub_8312FD18);
PPC_FUNC_IMPL(__imp__sub_8312FD18) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8312fd4c
	if (!ctx.cr6.lt) goto loc_8312FD4C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r10,r5,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_8312FD2C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8312fd2c
	if (!ctx.cr6.eq) goto loc_8312FD2C;
loc_8312FD4C:
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FD68"))) PPC_WEAK_FUNC(sub_8312FD68);
PPC_FUNC_IMPL(__imp__sub_8312FD68) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8312fd90
	if (!ctx.cr6.lt) goto loc_8312FD90;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_8312FD7C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8312fd7c
	if (!ctx.cr6.eq) goto loc_8312FD7C;
loc_8312FD90:
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FDAC"))) PPC_WEAK_FUNC(sub_8312FDAC);
PPC_FUNC_IMPL(__imp__sub_8312FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312FDB0"))) PPC_WEAK_FUNC(sub_8312FDB0);
PPC_FUNC_IMPL(__imp__sub_8312FDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8312FDB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8312fdf4
	if (!ctx.cr6.lt) goto loc_8312FDF4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// subf r28,r30,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r30.s64;
loc_8312FDDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r28,r31
	ctx.r3.u64 = ctx.r28.u64 + ctx.r31.u64;
	// bl 0x8312e958
	ctx.lr = 0x8312FDE8;
	sub_8312E958(ctx, base);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8312fddc
	if (!ctx.cr6.eq) goto loc_8312FDDC;
loc_8312FDF4:
	// subf r11,r26,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r26.s64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312FE14"))) PPC_WEAK_FUNC(sub_8312FE14);
PPC_FUNC_IMPL(__imp__sub_8312FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312FE18"))) PPC_WEAK_FUNC(sub_8312FE18);
PPC_FUNC_IMPL(__imp__sub_8312FE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8312FE20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r31,r4,7,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8312fe40
	if (!ctx.cr6.eq) goto loc_8312FE40;
loc_8312FE34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8312FE40:
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8312FE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,136
	ctx.r11.s64 = ctx.r3.s64 + 136;
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addic. r30,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r30.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// beq 0x8312fe34
	if (ctx.cr0.eq) goto loc_8312FE34;
	// lwz r5,-8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8312fe94
	if (ctx.cr6.lt) goto loc_8312FE94;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8312FE94:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8312FEA0;
	sub_82CB1160(ctx, base);
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312fec0
	if (ctx.cr6.eq) goto loc_8312FEC0;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8312FEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312FEC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312FECC"))) PPC_WEAK_FUNC(sub_8312FECC);
PPC_FUNC_IMPL(__imp__sub_8312FECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312FED0"))) PPC_WEAK_FUNC(sub_8312FED0);
PPC_FUNC_IMPL(__imp__sub_8312FED0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,-4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312FEFC"))) PPC_WEAK_FUNC(sub_8312FEFC);
PPC_FUNC_IMPL(__imp__sub_8312FEFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FF00"))) PPC_WEAK_FUNC(sub_8312FF00);
PPC_FUNC_IMPL(__imp__sub_8312FF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8312FF08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,12
	ctx.r27.s64 = 12;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312ff2c
	if (ctx.cr6.eq) goto loc_8312FF2C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = ctx.r9.s32 / ctx.r27.s32;
loc_8312FF2C:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8312fff0
	if (!ctx.cr6.lt) goto loc_8312FFF0;
	// lis r28,-31901
	ctx.r28.s64 = -2090663936;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312FF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8312ffa0
	if (ctx.cr6.eq) goto loc_8312FFA0;
loc_8312FF78:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8312ff78
	if (!ctx.cr6.eq) goto loc_8312FF78;
loc_8312FFA0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312ffc0
	if (ctx.cr6.eq) goto loc_8312FFC0;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8312FFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312FFC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r27
	ctx.r11.s32 = ctx.r8.s32 / ctx.r27.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8312FFF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312FFF8"))) PPC_WEAK_FUNC(sub_8312FFF8);
PPC_FUNC_IMPL(__imp__sub_8312FFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83130000;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83130020
	if (ctx.cr6.eq) goto loc_83130020;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
loc_83130020:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831300cc
	if (!ctx.cr6.lt) goto loc_831300CC;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8313004C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83130084
	if (ctx.cr6.eq) goto loc_83130084;
loc_83130064:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83130064
	if (!ctx.cr6.eq) goto loc_83130064;
loc_83130084:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831300a4
	if (ctx.cr6.eq) goto loc_831300A4;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831300A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831300A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_831300CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831300D4"))) PPC_WEAK_FUNC(sub_831300D4);
PPC_FUNC_IMPL(__imp__sub_831300D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831300D8"))) PPC_WEAK_FUNC(sub_831300D8);
PPC_FUNC_IMPL(__imp__sub_831300D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831300E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83130100
	if (ctx.cr6.eq) goto loc_83130100;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
loc_83130100:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831301ac
	if (!ctx.cr6.lt) goto loc_831301AC;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8313012C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83130164
	if (ctx.cr6.eq) goto loc_83130164;
loc_83130144:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83130144
	if (!ctx.cr6.eq) goto loc_83130144;
loc_83130164:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83130184
	if (ctx.cr6.eq) goto loc_83130184;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83130184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83130184:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_831301AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831301B4"))) PPC_WEAK_FUNC(sub_831301B4);
PPC_FUNC_IMPL(__imp__sub_831301B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831301B8"))) PPC_WEAK_FUNC(sub_831301B8);
PPC_FUNC_IMPL(__imp__sub_831301B8) {
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
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// rlwinm r31,r4,7,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x831301EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r10,136
	ctx.r11.s64 = ctx.r10.s64 + 136;
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83130224"))) PPC_WEAK_FUNC(sub_83130224);
PPC_FUNC_IMPL(__imp__sub_83130224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130228"))) PPC_WEAK_FUNC(sub_83130228);
PPC_FUNC_IMPL(__imp__sub_83130228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83130230;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,20
	ctx.r27.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83130254
	if (ctx.cr6.eq) goto loc_83130254;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = ctx.r9.s32 / ctx.r27.s32;
loc_83130254:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83130324
	if (!ctx.cr6.lt) goto loc_83130324;
	// lis r28,-31901
	ctx.r28.s64 = -2090663936;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83130288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x831302d4
	if (ctx.cr6.eq) goto loc_831302D4;
loc_831302A0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_831302B0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x831302b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831302B0;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x831302a0
	if (!ctx.cr6.eq) goto loc_831302A0;
loc_831302D4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831302f4
	if (ctx.cr6.eq) goto loc_831302F4;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831302F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831302F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r27
	ctx.r11.s32 = ctx.r8.s32 / ctx.r27.s32;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83130324:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313032C"))) PPC_WEAK_FUNC(sub_8313032C);
PPC_FUNC_IMPL(__imp__sub_8313032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130330"))) PPC_WEAK_FUNC(sub_83130330);
PPC_FUNC_IMPL(__imp__sub_83130330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83130338;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83130358
	if (ctx.cr6.eq) goto loc_83130358;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
loc_83130358:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83130404
	if (!ctx.cr6.lt) goto loc_83130404;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83130384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831303bc
	if (ctx.cr6.eq) goto loc_831303BC;
loc_8313039C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8313039c
	if (!ctx.cr6.eq) goto loc_8313039C;
loc_831303BC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831303dc
	if (ctx.cr6.eq) goto loc_831303DC;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831303DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831303DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83130404:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313040C"))) PPC_WEAK_FUNC(sub_8313040C);
PPC_FUNC_IMPL(__imp__sub_8313040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130410"))) PPC_WEAK_FUNC(sub_83130410);
PPC_FUNC_IMPL(__imp__sub_83130410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// addi r9,r6,16
	ctx.r9.s64 = ctx.r6.s64 + 16;
	// addi r8,r6,28
	ctx.r8.s64 = ctx.r6.s64 + 28;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
loc_83130428:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f6,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,24(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f5,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,28(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lhz r3,44(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 44);
	// sth r3,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r3.u16);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x83130428
	if (!ctx.cr0.eq) goto loc_83130428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313049C"))) PPC_WEAK_FUNC(sub_8313049C);
PPC_FUNC_IMPL(__imp__sub_8313049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831304A0"))) PPC_WEAK_FUNC(sub_831304A0);
PPC_FUNC_IMPL(__imp__sub_831304A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
loc_831304B4:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,24(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,28(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lhz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// sth r8,32(r10)
	PPC_STORE_U16(ctx.r10.u32 + 32, ctx.r8.u16);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bne cr6,0x831304b4
	if (!ctx.cr6.eq) goto loc_831304B4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130530"))) PPC_WEAK_FUNC(sub_83130530);
PPC_FUNC_IMPL(__imp__sub_83130530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83130538;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,36
	ctx.r27.s64 = 36;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8313055c
	if (ctx.cr6.eq) goto loc_8313055C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = ctx.r9.s32 / ctx.r27.s32;
loc_8313055C:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8313062c
	if (!ctx.cr6.lt) goto loc_8313062C;
	// lis r28,-31901
	ctx.r28.s64 = -2090663936;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83130590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x831305dc
	if (ctx.cr6.eq) goto loc_831305DC;
loc_831305A8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_831305B8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x831305b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831305B8;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x831305a8
	if (!ctx.cr6.eq) goto loc_831305A8;
loc_831305DC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831305fc
	if (ctx.cr6.eq) goto loc_831305FC;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831305FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831305FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r27
	ctx.r11.s32 = ctx.r8.s32 / ctx.r27.s32;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8313062C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83130634"))) PPC_WEAK_FUNC(sub_83130634);
PPC_FUNC_IMPL(__imp__sub_83130634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130638"))) PPC_WEAK_FUNC(sub_83130638);
PPC_FUNC_IMPL(__imp__sub_83130638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,18864
	ctx.r10.s64 = ctx.r11.s64 + 18864;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130648"))) PPC_WEAK_FUNC(sub_83130648);
PPC_FUNC_IMPL(__imp__sub_83130648) {
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

__attribute__((alias("__imp__sub_8313065C"))) PPC_WEAK_FUNC(sub_8313065C);
PPC_FUNC_IMPL(__imp__sub_8313065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130660"))) PPC_WEAK_FUNC(sub_83130660);
PPC_FUNC_IMPL(__imp__sub_83130660) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83130698
	if (ctx.cr6.eq) goto loc_83130698;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83130698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83130698:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831306BC"))) PPC_WEAK_FUNC(sub_831306BC);
PPC_FUNC_IMPL(__imp__sub_831306BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831306C0"))) PPC_WEAK_FUNC(sub_831306C0);
PPC_FUNC_IMPL(__imp__sub_831306C0) {
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

__attribute__((alias("__imp__sub_831306D4"))) PPC_WEAK_FUNC(sub_831306D4);
PPC_FUNC_IMPL(__imp__sub_831306D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831306D8"))) PPC_WEAK_FUNC(sub_831306D8);
PPC_FUNC_IMPL(__imp__sub_831306D8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83130710
	if (ctx.cr6.eq) goto loc_83130710;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83130710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83130710:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83130734"))) PPC_WEAK_FUNC(sub_83130734);
PPC_FUNC_IMPL(__imp__sub_83130734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130738"))) PPC_WEAK_FUNC(sub_83130738);
PPC_FUNC_IMPL(__imp__sub_83130738) {
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

__attribute__((alias("__imp__sub_8313074C"))) PPC_WEAK_FUNC(sub_8313074C);
PPC_FUNC_IMPL(__imp__sub_8313074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130750"))) PPC_WEAK_FUNC(sub_83130750);
PPC_FUNC_IMPL(__imp__sub_83130750) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83130788
	if (ctx.cr6.eq) goto loc_83130788;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83130788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83130788:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831307AC"))) PPC_WEAK_FUNC(sub_831307AC);
PPC_FUNC_IMPL(__imp__sub_831307AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831307B0"))) PPC_WEAK_FUNC(sub_831307B0);
PPC_FUNC_IMPL(__imp__sub_831307B0) {
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

__attribute__((alias("__imp__sub_831307C4"))) PPC_WEAK_FUNC(sub_831307C4);
PPC_FUNC_IMPL(__imp__sub_831307C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831307C8"))) PPC_WEAK_FUNC(sub_831307C8);
PPC_FUNC_IMPL(__imp__sub_831307C8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83130800
	if (ctx.cr6.eq) goto loc_83130800;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83130800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83130800:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83130824"))) PPC_WEAK_FUNC(sub_83130824);
PPC_FUNC_IMPL(__imp__sub_83130824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130828"))) PPC_WEAK_FUNC(sub_83130828);
PPC_FUNC_IMPL(__imp__sub_83130828) {
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

__attribute__((alias("__imp__sub_8313083C"))) PPC_WEAK_FUNC(sub_8313083C);
PPC_FUNC_IMPL(__imp__sub_8313083C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130840"))) PPC_WEAK_FUNC(sub_83130840);
PPC_FUNC_IMPL(__imp__sub_83130840) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83130878
	if (ctx.cr6.eq) goto loc_83130878;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83130878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83130878:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8313089C"))) PPC_WEAK_FUNC(sub_8313089C);
PPC_FUNC_IMPL(__imp__sub_8313089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831308A0"))) PPC_WEAK_FUNC(sub_831308A0);
PPC_FUNC_IMPL(__imp__sub_831308A0) {
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

__attribute__((alias("__imp__sub_831308B4"))) PPC_WEAK_FUNC(sub_831308B4);
PPC_FUNC_IMPL(__imp__sub_831308B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831308B8"))) PPC_WEAK_FUNC(sub_831308B8);
PPC_FUNC_IMPL(__imp__sub_831308B8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831308f0
	if (ctx.cr6.eq) goto loc_831308F0;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x831308F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831308F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83130914"))) PPC_WEAK_FUNC(sub_83130914);
PPC_FUNC_IMPL(__imp__sub_83130914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130918"))) PPC_WEAK_FUNC(sub_83130918);
PPC_FUNC_IMPL(__imp__sub_83130918) {
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

__attribute__((alias("__imp__sub_8313092C"))) PPC_WEAK_FUNC(sub_8313092C);
PPC_FUNC_IMPL(__imp__sub_8313092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130930"))) PPC_WEAK_FUNC(sub_83130930);
PPC_FUNC_IMPL(__imp__sub_83130930) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83130968
	if (ctx.cr6.eq) goto loc_83130968;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83130968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83130968:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8313098C"))) PPC_WEAK_FUNC(sub_8313098C);
PPC_FUNC_IMPL(__imp__sub_8313098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130990"))) PPC_WEAK_FUNC(sub_83130990);
PPC_FUNC_IMPL(__imp__sub_83130990) {
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

__attribute__((alias("__imp__sub_831309A4"))) PPC_WEAK_FUNC(sub_831309A4);
PPC_FUNC_IMPL(__imp__sub_831309A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831309A8"))) PPC_WEAK_FUNC(sub_831309A8);
PPC_FUNC_IMPL(__imp__sub_831309A8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831309e0
	if (ctx.cr6.eq) goto loc_831309E0;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x831309E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831309E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83130A04"))) PPC_WEAK_FUNC(sub_83130A04);
PPC_FUNC_IMPL(__imp__sub_83130A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130A08"))) PPC_WEAK_FUNC(sub_83130A08);
PPC_FUNC_IMPL(__imp__sub_83130A08) {
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

__attribute__((alias("__imp__sub_83130A1C"))) PPC_WEAK_FUNC(sub_83130A1C);
PPC_FUNC_IMPL(__imp__sub_83130A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130A20"))) PPC_WEAK_FUNC(sub_83130A20);
PPC_FUNC_IMPL(__imp__sub_83130A20) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83130a58
	if (ctx.cr6.eq) goto loc_83130A58;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83130A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83130A58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83130A7C"))) PPC_WEAK_FUNC(sub_83130A7C);
PPC_FUNC_IMPL(__imp__sub_83130A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83130A80"))) PPC_WEAK_FUNC(sub_83130A80);
PPC_FUNC_IMPL(__imp__sub_83130A80) {
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

