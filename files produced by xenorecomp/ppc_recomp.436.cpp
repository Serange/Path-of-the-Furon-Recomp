#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D7AFF0"))) PPC_WEAK_FUNC(sub_82D7AFF0);
PPC_FUNC_IMPL(__imp__sub_82D7AFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f5,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f13,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f4,f6,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f9,f3,f6,f7
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f8,f2,f6,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f7,f1,f0,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f6,f12,f0,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7B054"))) PPC_WEAK_FUNC(sub_82D7B054);
PPC_FUNC_IMPL(__imp__sub_82D7B054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B058"))) PPC_WEAK_FUNC(sub_82D7B058);
PPC_FUNC_IMPL(__imp__sub_82D7B058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f7,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f3,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f3,f13,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f9,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f8.f64));
	// lfs f13,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f1,f4,f6
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f6.f64));
	// lfs f8,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f12,f4,f5
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f5.f64));
	// lfs f1,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f31,60(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f7,f3,f0,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmadds f3,f13,f0,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f2,f8,f0,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f0,f5,f4,f9
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f9.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f13,f1,f11,f7
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f12,f12,f11,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f11,f31,f11,f2
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7B104"))) PPC_WEAK_FUNC(sub_82D7B104);
PPC_FUNC_IMPL(__imp__sub_82D7B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B108"))) PPC_WEAK_FUNC(sub_82D7B108);
PPC_FUNC_IMPL(__imp__sub_82D7B108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f3,f4,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f10.f64));
	// lfs f3,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f8.f64));
	// lfs f10,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f1,f4,f6
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f6.f64));
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f12,f13,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f13,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f9,f9,f0,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f7,f3,f0,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmadds f3,f10,f0,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f2,f6,f11,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f1,f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f0,f13,f11,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f13,f12,f11,f3
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f12,f31,f4,f2
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f4.f64 + ctx.f2.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7B1B4"))) PPC_WEAK_FUNC(sub_82D7B1B4);
PPC_FUNC_IMPL(__imp__sub_82D7B1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B1B8"))) PPC_WEAK_FUNC(sub_82D7B1B8);
PPC_FUNC_IMPL(__imp__sub_82D7B1B8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d7b1c8
	if (ctx.cr6.lt) goto loc_82D7B1C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7B1C8:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7B1E4"))) PPC_WEAK_FUNC(sub_82D7B1E4);
PPC_FUNC_IMPL(__imp__sub_82D7B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B1E8"))) PPC_WEAK_FUNC(sub_82D7B1E8);
PPC_FUNC_IMPL(__imp__sub_82D7B1E8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-1104
	ctx.r11.s64 = ctx.r11.s64 + -1104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x833b77d4
	ctx.lr = 0x82D7B210;
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82D7B228"))) PPC_WEAK_FUNC(sub_82D7B228);
PPC_FUNC_IMPL(__imp__sub_82D7B228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-1104
	ctx.r11.s64 = ctx.r11.s64 + -1104;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7B238"))) PPC_WEAK_FUNC(sub_82D7B238);
PPC_FUNC_IMPL(__imp__sub_82D7B238) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x833b77e4
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7B240"))) PPC_WEAK_FUNC(sub_82D7B240);
PPC_FUNC_IMPL(__imp__sub_82D7B240) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x833b77f4
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7B248"))) PPC_WEAK_FUNC(sub_82D7B248);
PPC_FUNC_IMPL(__imp__sub_82D7B248) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7b264
	if (ctx.cr6.eq) goto loc_82D7B264;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d7b264
	if (!ctx.cr0.eq) goto loc_82D7B264;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82d7b26c
	goto loc_82D7B26C;
loc_82D7B264:
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
loc_82D7B26C:
	// li r4,250
	ctx.r4.s64 = 250;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x833b7bf4
	__imp__XamCreateEnumeratorHandle(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7B278"))) PPC_WEAK_FUNC(sub_82D7B278);
PPC_FUNC_IMPL(__imp__sub_82D7B278) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7b2ac
	if (!ctx.cr6.eq) goto loc_82D7B2AC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82d7b2b0
	goto loc_82D7B2B0;
loc_82D7B2AC:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82D7B2B0:
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c04
	ctx.lr = 0x82D7B2B8;
	__imp__XMsgStartIORequestEx(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7B2C8"))) PPC_WEAK_FUNC(sub_82D7B2C8);
PPC_FUNC_IMPL(__imp__sub_82D7B2C8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// li r3,250
	ctx.r3.s64 = 250;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x833b7c14
	ctx.lr = 0x82D7B2F0;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7b318
	if (ctx.cr0.lt) goto loc_82D7B318;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d7b308
	if (!ctx.cr6.eq) goto loc_82D7B308;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7B308;
	sub_82E66B48(ctx, base);
loc_82D7B308:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d7b318
	if (ctx.cr6.lt) goto loc_82D7B318;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7b330
	goto loc_82D7B330;
loc_82D7B318:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7b330
	if (ctx.cr6.eq) goto loc_82D7B330;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7B330:
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

__attribute__((alias("__imp__sub_82D7B344"))) PPC_WEAK_FUNC(sub_82D7B344);
PPC_FUNC_IMPL(__imp__sub_82D7B344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B348"))) PPC_WEAK_FUNC(sub_82D7B348);
PPC_FUNC_IMPL(__imp__sub_82D7B348) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7b36c
	if (ctx.cr6.eq) goto loc_82D7B36C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82d7b360
	if (ctx.cr6.eq) goto loc_82D7B360;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7B360:
	// lis r3,8332
	ctx.r3.s64 = 546045952;
	// ori r3,r3,32769
	ctx.r3.u64 = ctx.r3.u64 | 32769;
	// blr 
	return;
loc_82D7B36C:
	// lis r3,8332
	ctx.r3.s64 = 546045952;
	// ori r3,r3,32770
	ctx.r3.u64 = ctx.r3.u64 | 32770;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7B378"))) PPC_WEAK_FUNC(sub_82D7B378);
PPC_FUNC_IMPL(__imp__sub_82D7B378) {
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
	// bl 0x833b7c24
	ctx.lr = 0x82D7B388;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// rlwinm r11,r3,0,8,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r10,r10,41216
	ctx.r10.u64 = ctx.r10.u64 | 41216;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7B3B0"))) PPC_WEAK_FUNC(sub_82D7B3B0);
PPC_FUNC_IMPL(__imp__sub_82D7B3B0) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r3,250
	ctx.r3.s64 = 250;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x833b7c14
	ctx.lr = 0x82D7B400;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7b428
	if (ctx.cr0.lt) goto loc_82D7B428;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d7b418
	if (!ctx.cr6.eq) goto loc_82D7B418;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7B418;
	sub_82E66B48(ctx, base);
loc_82D7B418:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d7b428
	if (ctx.cr6.lt) goto loc_82D7B428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82d7b440
	goto loc_82D7B440;
loc_82D7B428:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7b440
	if (ctx.cr6.eq) goto loc_82D7B440;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7B440:
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

__attribute__((alias("__imp__sub_82D7B458"))) PPC_WEAK_FUNC(sub_82D7B458);
PPC_FUNC_IMPL(__imp__sub_82D7B458) {
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
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,824
	ctx.r5.s64 = 824;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb16f0
	ctx.lr = 0x82D7B484;
	sub_82CB16F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r5,820
	ctx.r5.s64 = 820;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82D7B49C;
	sub_82CB1160(ctx, base);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,824
	ctx.r7.s64 = 824;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,59
	ctx.r4.u64 = ctx.r4.u64 | 59;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c14
	ctx.lr = 0x82D7B4B8;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7b4e0
	if (ctx.cr0.lt) goto loc_82D7B4E0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d7b4d0
	if (!ctx.cr6.eq) goto loc_82D7B4D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7B4D0;
	sub_82E66B48(ctx, base);
loc_82D7B4D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d7b4e0
	if (ctx.cr6.lt) goto loc_82D7B4E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7b4f8
	goto loc_82D7B4F8;
loc_82D7B4E0:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7b4f8
	if (ctx.cr6.eq) goto loc_82D7B4F8;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7B4F8:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
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

__attribute__((alias("__imp__sub_82D7B510"))) PPC_WEAK_FUNC(sub_82D7B510);
PPC_FUNC_IMPL(__imp__sub_82D7B510) {
	PPC_FUNC_PROLOGUE();
	// lis r4,7
	ctx.r4.s64 = 458752;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7b2c8
	sub_82D7B2C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7B524"))) PPC_WEAK_FUNC(sub_82D7B524);
PPC_FUNC_IMPL(__imp__sub_82D7B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B528"))) PPC_WEAK_FUNC(sub_82D7B528);
PPC_FUNC_IMPL(__imp__sub_82D7B528) {
	PPC_FUNC_PROLOGUE();
	// lis r4,7
	ctx.r4.s64 = 458752;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7b2c8
	sub_82D7B2C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7B53C"))) PPC_WEAK_FUNC(sub_82D7B53C);
PPC_FUNC_IMPL(__imp__sub_82D7B53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B540"))) PPC_WEAK_FUNC(sub_82D7B540);
PPC_FUNC_IMPL(__imp__sub_82D7B540) {
	PPC_FUNC_PROLOGUE();
	// lis r4,7
	ctx.r4.s64 = 458752;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7b2c8
	sub_82D7B2C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7B554"))) PPC_WEAK_FUNC(sub_82D7B554);
PPC_FUNC_IMPL(__imp__sub_82D7B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B558"))) PPC_WEAK_FUNC(sub_82D7B558);
PPC_FUNC_IMPL(__imp__sub_82D7B558) {
	PPC_FUNC_PROLOGUE();
	// lis r4,7
	ctx.r4.s64 = 458752;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7b2c8
	sub_82D7B2C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7B56C"))) PPC_WEAK_FUNC(sub_82D7B56C);
PPC_FUNC_IMPL(__imp__sub_82D7B56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B570"))) PPC_WEAK_FUNC(sub_82D7B570);
PPC_FUNC_IMPL(__imp__sub_82D7B570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D7B578;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d7b5a0
	if (ctx.cr0.eq) goto loc_82D7B5A0;
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// b 0x82d7b5a4
	goto loc_82D7B5A4;
loc_82D7B5A0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82D7B5A4:
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,5544
	ctx.r7.s64 = 5544;
	// ori r6,r6,39
	ctx.r6.u64 = ctx.r6.u64 | 39;
	// ori r5,r5,38
	ctx.r5.u64 = ctx.r5.u64 | 38;
	// li r4,250
	ctx.r4.s64 = 250;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x833b7bf4
	ctx.lr = 0x82D7B5CC;
	__imp__XamCreateEnumeratorHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82d7b5dc
	if (ctx.cr0.gt) goto loc_82D7B5DC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d7b5e4
	goto loc_82D7B5E4;
loc_82D7B5DC:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
loc_82D7B5E4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82d7b65c
	if (ctx.cr6.lt) goto loc_82D7B65C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x833b7c44
	ctx.lr = 0x82D7B5F8;
	__imp__XamGetPrivateEnumStructureFromHandle(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,5544
	ctx.r5.s64 = 5544;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82D7B61C;
	sub_82CB16F0(ctx, base);
	// mulli r11,r29,820
	ctx.r11.s64 = ctx.r29.s64 * 820;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c34
	ctx.lr = 0x82D7B63C;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82d7b64c
	if (!ctx.cr0.lt) goto loc_82D7B64C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bea4e0
	ctx.lr = 0x82D7B64C;
	sub_82BEA4E0(ctx, base);
loc_82D7B64C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82D7B654;
	__imp__ObDereferenceObject(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82d7b66c
	if (!ctx.cr6.lt) goto loc_82D7B66C;
loc_82D7B65C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x82d7b674
	if (ctx.cr6.lt) goto loc_82D7B674;
loc_82D7B66C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7b68c
	goto loc_82D7B68C;
loc_82D7B674:
	// rlwinm r11,r31,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7b68c
	if (ctx.cr6.eq) goto loc_82D7B68C;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7B68C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7B694"))) PPC_WEAK_FUNC(sub_82D7B694);
PPC_FUNC_IMPL(__imp__sub_82D7B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B698"))) PPC_WEAK_FUNC(sub_82D7B698);
PPC_FUNC_IMPL(__imp__sub_82D7B698) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,61
	ctx.r4.u64 = ctx.r4.u64 | 61;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c14
	ctx.lr = 0x82D7B6DC;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7b704
	if (ctx.cr0.lt) goto loc_82D7B704;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d7b6f4
	if (!ctx.cr6.eq) goto loc_82D7B6F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7B6F4;
	sub_82E66B48(ctx, base);
loc_82D7B6F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d7b704
	if (ctx.cr6.lt) goto loc_82D7B704;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7b71c
	goto loc_82D7B71C;
loc_82D7B704:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7b71c
	if (ctx.cr6.eq) goto loc_82D7B71C;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7B71C:
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

__attribute__((alias("__imp__sub_82D7B730"))) PPC_WEAK_FUNC(sub_82D7B730);
PPC_FUNC_IMPL(__imp__sub_82D7B730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82D7B738;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// ori r21,r11,2
	ctx.r21.u64 = ctx.r11.u64 | 2;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82d7b794
	if (!ctx.cr6.eq) goto loc_82D7B794;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// b 0x82d7b798
	goto loc_82D7B798;
loc_82D7B794:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_82D7B798:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,46
	ctx.r4.u64 = ctx.r4.u64 | 46;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c04
	ctx.lr = 0x82D7B7B4;
	__imp__XMsgStartIORequestEx(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82d7b8bc
	if (ctx.cr0.lt) goto loc_82D7B8BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7B7C4;
	sub_82E66B48(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82d7b8bc
	if (ctx.cr0.lt) goto loc_82D7B8BC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d7b7f0
	if (ctx.cr6.eq) goto loc_82D7B7F0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82d7b7e4
	if (ctx.cr6.eq) goto loc_82D7B7E4;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// b 0x82d7b7f8
	goto loc_82D7B7F8;
loc_82D7B7E4:
	// lis r22,8332
	ctx.r22.s64 = 546045952;
	// ori r22,r22,32769
	ctx.r22.u64 = ctx.r22.u64 | 32769;
	// b 0x82d7b7f8
	goto loc_82D7B7F8;
loc_82D7B7F0:
	// lis r22,8332
	ctx.r22.s64 = 546045952;
	// ori r22,r22,32770
	ctx.r22.u64 = ctx.r22.u64 | 32770;
loc_82D7B7F8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82299698
	ctx.lr = 0x82D7B804;
	sub_82299698(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82d7b814
	if (!ctx.cr0.eq) goto loc_82D7B814;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
loc_82D7B814:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82d7b898
	if (ctx.cr6.lt) goto loc_82D7B898;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// bne cr6,0x82d7b860
	if (!ctx.cr6.eq) goto loc_82D7B860;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// b 0x82d7b864
	goto loc_82D7B864;
loc_82D7B860:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_82D7B864:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,36
	ctx.r7.s64 = 36;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,13
	ctx.r4.u64 = ctx.r4.u64 | 13;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c04
	ctx.lr = 0x82D7B880;
	__imp__XMsgStartIORequestEx(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82d7b898
	if (ctx.cr0.lt) goto loc_82D7B898;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7B890;
	sub_82E66B48(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82d7b8b4
	if (!ctx.cr0.lt) goto loc_82D7B8B4;
loc_82D7B898:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d7b8ac
	if (ctx.cr6.eq) goto loc_82D7B8AC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x82D7B8AC;
	sub_822996C0(ctx, base);
loc_82D7B8AC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82d7b8bc
	if (ctx.cr6.lt) goto loc_82D7B8BC;
loc_82D7B8B4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// b 0x82d7b8d4
	goto loc_82D7B8D4;
loc_82D7B8BC:
	// rlwinm r11,r29,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7b8d4
	if (ctx.cr6.eq) goto loc_82D7B8D4;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7B8D4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7B8DC"))) PPC_WEAK_FUNC(sub_82D7B8DC);
PPC_FUNC_IMPL(__imp__sub_82D7B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B8E0"))) PPC_WEAK_FUNC(sub_82D7B8E0);
PPC_FUNC_IMPL(__imp__sub_82D7B8E0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bne cr6,0x82d7b92c
	if (!ctx.cr6.eq) goto loc_82D7B92C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82d7b930
	goto loc_82D7B930;
loc_82D7B92C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82D7B930:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c04
	ctx.lr = 0x82D7B94C;
	__imp__XMsgStartIORequestEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7b9a0
	if (ctx.cr0.lt) goto loc_82D7B9A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7B95C;
	sub_82E66B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7b9a0
	if (ctx.cr0.lt) goto loc_82D7B9A0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d7b988
	if (ctx.cr6.eq) goto loc_82D7B988;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82d7b97c
	if (ctx.cr6.eq) goto loc_82D7B97C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d7b990
	goto loc_82D7B990;
loc_82D7B97C:
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// b 0x82d7b990
	goto loc_82D7B990;
loc_82D7B988:
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
loc_82D7B990:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82D7B998;
	sub_822996C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7b9b8
	goto loc_82D7B9B8;
loc_82D7B9A0:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7b9b8
	if (ctx.cr6.eq) goto loc_82D7B9B8;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7B9B8:
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

__attribute__((alias("__imp__sub_82D7B9D0"))) PPC_WEAK_FUNC(sub_82D7B9D0);
PPC_FUNC_IMPL(__imp__sub_82D7B9D0) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,14
	ctx.r4.u64 = ctx.r4.u64 | 14;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c14
	ctx.lr = 0x82D7BA0C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7ba34
	if (ctx.cr0.lt) goto loc_82D7BA34;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d7ba24
	if (!ctx.cr6.eq) goto loc_82D7BA24;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7BA24;
	sub_82E66B48(ctx, base);
loc_82D7BA24:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d7ba34
	if (ctx.cr6.lt) goto loc_82D7BA34;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7ba4c
	goto loc_82D7BA4C;
loc_82D7BA34:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7ba4c
	if (ctx.cr6.eq) goto loc_82D7BA4C;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7BA4C:
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

__attribute__((alias("__imp__sub_82D7BA60"))) PPC_WEAK_FUNC(sub_82D7BA60);
PPC_FUNC_IMPL(__imp__sub_82D7BA60) {
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
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,250
	ctx.r3.s64 = 250;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x833b7c54
	ctx.lr = 0x82D7BAA4;
	__imp__XMsgSystemProcessCall(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BAB4"))) PPC_WEAK_FUNC(sub_82D7BAB4);
PPC_FUNC_IMPL(__imp__sub_82D7BAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BAB8"))) PPC_WEAK_FUNC(sub_82D7BAB8);
PPC_FUNC_IMPL(__imp__sub_82D7BAB8) {
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// ori r4,r4,86
	ctx.r4.u64 = ctx.r4.u64 | 86;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c54
	ctx.lr = 0x82D7BB08;
	__imp__XMsgSystemProcessCall(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BB18"))) PPC_WEAK_FUNC(sub_82D7BB18);
PPC_FUNC_IMPL(__imp__sub_82D7BB18) {
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
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c54
	ctx.lr = 0x82D7BB40;
	__imp__XMsgSystemProcessCall(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BB50"))) PPC_WEAK_FUNC(sub_82D7BB50);
PPC_FUNC_IMPL(__imp__sub_82D7BB50) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r6,8
	ctx.r6.s64 = 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c54
	ctx.lr = 0x82D7BB8C;
	__imp__XMsgSystemProcessCall(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BB9C"))) PPC_WEAK_FUNC(sub_82D7BB9C);
PPC_FUNC_IMPL(__imp__sub_82D7BB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BBA0"))) PPC_WEAK_FUNC(sub_82D7BBA0);
PPC_FUNC_IMPL(__imp__sub_82D7BBA0) {
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
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c54
	ctx.lr = 0x82D7BBC8;
	__imp__XMsgSystemProcessCall(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BBD8"))) PPC_WEAK_FUNC(sub_82D7BBD8);
PPC_FUNC_IMPL(__imp__sub_82D7BBD8) {
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
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c54
	ctx.lr = 0x82D7BC00;
	__imp__XMsgSystemProcessCall(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BC10"))) PPC_WEAK_FUNC(sub_82D7BC10);
PPC_FUNC_IMPL(__imp__sub_82D7BC10) {
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
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c54
	ctx.lr = 0x82D7BC38;
	__imp__XMsgSystemProcessCall(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BC48"))) PPC_WEAK_FUNC(sub_82D7BC48);
PPC_FUNC_IMPL(__imp__sub_82D7BC48) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c14
	ctx.lr = 0x82D7BC88;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7bcb0
	if (ctx.cr0.lt) goto loc_82D7BCB0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d7bca0
	if (!ctx.cr6.eq) goto loc_82D7BCA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7BCA0;
	sub_82E66B48(ctx, base);
loc_82D7BCA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d7bcb0
	if (ctx.cr6.lt) goto loc_82D7BCB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7bcc8
	goto loc_82D7BCC8;
loc_82D7BCB0:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7bcc8
	if (ctx.cr6.eq) goto loc_82D7BCC8;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7BCC8:
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

__attribute__((alias("__imp__sub_82D7BCDC"))) PPC_WEAK_FUNC(sub_82D7BCDC);
PPC_FUNC_IMPL(__imp__sub_82D7BCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BCE0"))) PPC_WEAK_FUNC(sub_82D7BCE0);
PPC_FUNC_IMPL(__imp__sub_82D7BCE0) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,250
	ctx.r3.s64 = 250;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,41
	ctx.r4.u64 = ctx.r4.u64 | 41;
	// bl 0x833b7c34
	ctx.lr = 0x82D7BD14;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7bd24
	if (ctx.cr0.lt) goto loc_82D7BD24;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7bd3c
	goto loc_82D7BD3C;
loc_82D7BD24:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7bd3c
	if (ctx.cr6.eq) goto loc_82D7BD3C;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7BD3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BD4C"))) PPC_WEAK_FUNC(sub_82D7BD4C);
PPC_FUNC_IMPL(__imp__sub_82D7BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BD50"))) PPC_WEAK_FUNC(sub_82D7BD50);
PPC_FUNC_IMPL(__imp__sub_82D7BD50) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c34
	ctx.lr = 0x82D7BD7C;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7bd8c
	if (ctx.cr0.lt) goto loc_82D7BD8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7bda4
	goto loc_82D7BDA4;
loc_82D7BD8C:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7bda4
	if (ctx.cr6.eq) goto loc_82D7BDA4;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7BDA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BDB4"))) PPC_WEAK_FUNC(sub_82D7BDB4);
PPC_FUNC_IMPL(__imp__sub_82D7BDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BDB8"))) PPC_WEAK_FUNC(sub_82D7BDB8);
PPC_FUNC_IMPL(__imp__sub_82D7BDB8) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c34
	ctx.lr = 0x82D7BDE4;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7bdf4
	if (ctx.cr0.lt) goto loc_82D7BDF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7be0c
	goto loc_82D7BE0C;
loc_82D7BDF4:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7be0c
	if (ctx.cr6.eq) goto loc_82D7BE0C;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7BE0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BE1C"))) PPC_WEAK_FUNC(sub_82D7BE1C);
PPC_FUNC_IMPL(__imp__sub_82D7BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BE20"))) PPC_WEAK_FUNC(sub_82D7BE20);
PPC_FUNC_IMPL(__imp__sub_82D7BE20) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,12
	ctx.r4.u64 = ctx.r4.u64 | 12;
	// li r3,250
	ctx.r3.s64 = 250;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x833b7c14
	ctx.lr = 0x82D7BE54;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7be7c
	if (ctx.cr0.lt) goto loc_82D7BE7C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d7be6c
	if (!ctx.cr6.eq) goto loc_82D7BE6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7BE6C;
	sub_82E66B48(ctx, base);
loc_82D7BE6C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d7be7c
	if (ctx.cr6.lt) goto loc_82D7BE7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7be94
	goto loc_82D7BE94;
loc_82D7BE7C:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7be94
	if (ctx.cr6.eq) goto loc_82D7BE94;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7BE94:
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

__attribute__((alias("__imp__sub_82D7BEA8"))) PPC_WEAK_FUNC(sub_82D7BEA8);
PPC_FUNC_IMPL(__imp__sub_82D7BEA8) {
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
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bne cr6,0x82d7bee8
	if (!ctx.cr6.eq) goto loc_82D7BEE8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82d7beec
	goto loc_82D7BEEC;
loc_82D7BEE8:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82D7BEEC:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c04
	ctx.lr = 0x82D7BF08;
	__imp__XMsgStartIORequestEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7bf28
	if (ctx.cr0.lt) goto loc_82D7BF28;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7BF18;
	sub_82E66B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7bf28
	if (ctx.cr0.lt) goto loc_82D7BF28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7bf40
	goto loc_82D7BF40;
loc_82D7BF28:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7bf40
	if (ctx.cr6.eq) goto loc_82D7BF40;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7BF40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BF50"))) PPC_WEAK_FUNC(sub_82D7BF50);
PPC_FUNC_IMPL(__imp__sub_82D7BF50) {
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
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bne cr6,0x82d7bf90
	if (!ctx.cr6.eq) goto loc_82D7BF90;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82d7bf94
	goto loc_82D7BF94;
loc_82D7BF90:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82D7BF94:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,104
	ctx.r4.u64 = ctx.r4.u64 | 104;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c04
	ctx.lr = 0x82D7BFB0;
	__imp__XMsgStartIORequestEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7bfd0
	if (ctx.cr0.lt) goto loc_82D7BFD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7BFC0;
	sub_82E66B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7bfd0
	if (ctx.cr0.lt) goto loc_82D7BFD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7bfe8
	goto loc_82D7BFE8;
loc_82D7BFD0:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7bfe8
	if (ctx.cr6.eq) goto loc_82D7BFE8;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7BFE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7BFF8"))) PPC_WEAK_FUNC(sub_82D7BFF8);
PPC_FUNC_IMPL(__imp__sub_82D7BFF8) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x833b7c34
	ctx.lr = 0x82D7C028;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7c038
	if (ctx.cr0.lt) goto loc_82D7C038;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7c050
	goto loc_82D7C050;
loc_82D7C038:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7c050
	if (ctx.cr6.eq) goto loc_82D7C050;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7C050:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C060"))) PPC_WEAK_FUNC(sub_82D7C060);
PPC_FUNC_IMPL(__imp__sub_82D7C060) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,250
	ctx.r3.s64 = 250;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x833b7c14
	ctx.lr = 0x82D7C0A4;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d7c0cc
	if (ctx.cr0.lt) goto loc_82D7C0CC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d7c0bc
	if (!ctx.cr6.eq) goto loc_82D7C0BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e66b48
	ctx.lr = 0x82D7C0BC;
	sub_82E66B48(ctx, base);
loc_82D7C0BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d7c0cc
	if (ctx.cr6.lt) goto loc_82D7C0CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82d7c0e4
	goto loc_82D7C0E4;
loc_82D7C0CC:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d7c0e4
	if (ctx.cr6.eq) goto loc_82D7C0E4;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82D7C0E4:
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

__attribute__((alias("__imp__sub_82D7C0FC"))) PPC_WEAK_FUNC(sub_82D7C0FC);
PPC_FUNC_IMPL(__imp__sub_82D7C0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C100"))) PPC_WEAK_FUNC(sub_82D7C100);
PPC_FUNC_IMPL(__imp__sub_82D7C100) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-1104
	ctx.r11.s64 = ctx.r11.s64 + -1104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82d7c12c
	if (ctx.cr0.eq) goto loc_82D7C12C;
	// bl 0x822990f0
	ctx.lr = 0x82D7C12C;
	sub_822990F0(ctx, base);
loc_82D7C12C:
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

__attribute__((alias("__imp__sub_82D7C144"))) PPC_WEAK_FUNC(sub_82D7C144);
PPC_FUNC_IMPL(__imp__sub_82D7C144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C148"))) PPC_WEAK_FUNC(sub_82D7C148);
PPC_FUNC_IMPL(__imp__sub_82D7C148) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7b730
	sub_82D7B730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C168"))) PPC_WEAK_FUNC(sub_82D7C168);
PPC_FUNC_IMPL(__imp__sub_82D7C168) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7b8e0
	sub_82D7B8E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C174"))) PPC_WEAK_FUNC(sub_82D7C174);
PPC_FUNC_IMPL(__imp__sub_82D7C174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C178"))) PPC_WEAK_FUNC(sub_82D7C178);
PPC_FUNC_IMPL(__imp__sub_82D7C178) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7b9d0
	sub_82D7B9D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C18C"))) PPC_WEAK_FUNC(sub_82D7C18C);
PPC_FUNC_IMPL(__imp__sub_82D7C18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C190"))) PPC_WEAK_FUNC(sub_82D7C190);
PPC_FUNC_IMPL(__imp__sub_82D7C190) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7c060
	sub_82D7C060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C1A0"))) PPC_WEAK_FUNC(sub_82D7C1A0);
PPC_FUNC_IMPL(__imp__sub_82D7C1A0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7bc48
	sub_82D7BC48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C1B8"))) PPC_WEAK_FUNC(sub_82D7C1B8);
PPC_FUNC_IMPL(__imp__sub_82D7C1B8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7bce0
	sub_82D7BCE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C1CC"))) PPC_WEAK_FUNC(sub_82D7C1CC);
PPC_FUNC_IMPL(__imp__sub_82D7C1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C1D0"))) PPC_WEAK_FUNC(sub_82D7C1D0);
PPC_FUNC_IMPL(__imp__sub_82D7C1D0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7bd50
	sub_82D7BD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C1DC"))) PPC_WEAK_FUNC(sub_82D7C1DC);
PPC_FUNC_IMPL(__imp__sub_82D7C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C1E0"))) PPC_WEAK_FUNC(sub_82D7C1E0);
PPC_FUNC_IMPL(__imp__sub_82D7C1E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d7bff8
	ctx.lr = 0x82D7C204;
	sub_82D7BFF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82d7c230
	if (!ctx.cr0.eq) goto loc_82D7C230;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7c228
	if (!ctx.cr6.eq) goto loc_82D7C228;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d7c22c
	if (ctx.cr6.eq) goto loc_82D7C22C;
loc_82D7C228:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7C22C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7C230:
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

__attribute__((alias("__imp__sub_82D7C244"))) PPC_WEAK_FUNC(sub_82D7C244);
PPC_FUNC_IMPL(__imp__sub_82D7C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C248"))) PPC_WEAK_FUNC(sub_82D7C248);
PPC_FUNC_IMPL(__imp__sub_82D7C248) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7bdb8
	sub_82D7BDB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C254"))) PPC_WEAK_FUNC(sub_82D7C254);
PPC_FUNC_IMPL(__imp__sub_82D7C254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C258"))) PPC_WEAK_FUNC(sub_82D7C258);
PPC_FUNC_IMPL(__imp__sub_82D7C258) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d7be20
	sub_82D7BE20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C264"))) PPC_WEAK_FUNC(sub_82D7C264);
PPC_FUNC_IMPL(__imp__sub_82D7C264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C268"))) PPC_WEAK_FUNC(sub_82D7C268);
PPC_FUNC_IMPL(__imp__sub_82D7C268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D7C270;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x833b7c24
	ctx.lr = 0x82D7C278;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// rlwinm r10,r3,0,8,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r11,r11,41216
	ctx.r11.u64 = ctx.r11.u64 | 41216;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82d7c320
	if (!ctx.cr6.lt) goto loc_82D7C320;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r28,r11,19836
	ctx.r28.s64 = ctx.r11.s64 + 19836;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x833b77e4
	ctx.lr = 0x82D7C29C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// lwz r11,-32272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32272);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d7c2b4
	if (!ctx.cr6.eq) goto loc_82D7C2B4;
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82d7c314
	goto loc_82D7C314;
loc_82D7C2B4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d7bff8
	ctx.lr = 0x82D7C2C4;
	sub_82D7BFF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lis r31,-31901
	ctx.r31.s64 = -2090663936;
	// bne 0x82d7c304
	if (!ctx.cr0.eq) goto loc_82D7C304;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,-32268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32268, ctx.r11.u32);
	// bl 0x82d7bea8
	ctx.lr = 0x82D7C2F4;
	sub_82D7BEA8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82d7c304
	if (!ctx.cr0.eq) goto loc_82D7C304;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7c310
	goto loc_82D7C310;
loc_82D7C304:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-32268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32268, ctx.r10.u32);
loc_82D7C310:
	// stw r11,-32272(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32272, ctx.r11.u32);
loc_82D7C314:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x82D7C31C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82d7c334
	goto loc_82D7C334;
loc_82D7C320:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d7bea8
	ctx.lr = 0x82D7C330;
	sub_82D7BEA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82D7C334:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C340"))) PPC_WEAK_FUNC(sub_82D7C340);
PPC_FUNC_IMPL(__imp__sub_82D7C340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D7C348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x833b7c24
	ctx.lr = 0x82D7C350;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// rlwinm r10,r3,0,8,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r11,r11,41216
	ctx.r11.u64 = ctx.r11.u64 | 41216;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82d7c3d0
	if (!ctx.cr6.lt) goto loc_82D7C3D0;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r28,r11,19836
	ctx.r28.s64 = ctx.r11.s64 + 19836;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x833b77e4
	ctx.lr = 0x82D7C374;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r31,-31901
	ctx.r31.s64 = -2090663936;
	// lwz r11,-32272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7c38c
	if (!ctx.cr6.eq) goto loc_82D7C38C;
	// li r29,1627
	ctx.r29.s64 = 1627;
	// b 0x82d7c3c4
	goto loc_82D7C3C4;
loc_82D7C38C:
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-32268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32268);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82d7c3ac
	if (ctx.cr6.eq) goto loc_82D7C3AC;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82D7C3AC:
	// bl 0x82d7bea8
	ctx.lr = 0x82D7C3B0;
	sub_82D7BEA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,-32268(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32268, ctx.r11.u32);
	// stw r10,-32272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32272, ctx.r10.u32);
loc_82D7C3C4:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x82D7C3CC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82d7c3e4
	goto loc_82D7C3E4;
loc_82D7C3D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d7bea8
	ctx.lr = 0x82D7C3E0;
	sub_82D7BEA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82D7C3E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C3F0"))) PPC_WEAK_FUNC(sub_82D7C3F0);
PPC_FUNC_IMPL(__imp__sub_82D7C3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C3F8"))) PPC_WEAK_FUNC(sub_82D7C3F8);
PPC_FUNC_IMPL(__imp__sub_82D7C3F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C418"))) PPC_WEAK_FUNC(sub_82D7C418);
PPC_FUNC_IMPL(__imp__sub_82D7C418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D7C41C:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82d7c438
	if (ctx.cr6.eq) goto loc_82D7C438;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82d7c41c
	if (!ctx.cr6.eq) goto loc_82D7C41C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7C438:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C440"))) PPC_WEAK_FUNC(sub_82D7C440);
PPC_FUNC_IMPL(__imp__sub_82D7C440) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82d7c45c
	if (!ctx.cr6.eq) goto loc_82D7C45C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82D7C45C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C464"))) PPC_WEAK_FUNC(sub_82D7C464);
PPC_FUNC_IMPL(__imp__sub_82D7C464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C468"))) PPC_WEAK_FUNC(sub_82D7C468);
PPC_FUNC_IMPL(__imp__sub_82D7C468) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r4.u32);
	// stw r5,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r5.u32);
	// stw r6,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C480"))) PPC_WEAK_FUNC(sub_82D7C480);
PPC_FUNC_IMPL(__imp__sub_82D7C480) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C490"))) PPC_WEAK_FUNC(sub_82D7C490);
PPC_FUNC_IMPL(__imp__sub_82D7C490) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C498"))) PPC_WEAK_FUNC(sub_82D7C498);
PPC_FUNC_IMPL(__imp__sub_82D7C498) {
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
	// lis r31,-31909
	ctx.r31.s64 = -2091188224;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,19872(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19872);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d7c4dc
	if (!ctx.cr6.eq) goto loc_82D7C4DC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d7c4e0
	if (ctx.cr6.eq) goto loc_82D7C4E0;
loc_82D7C4DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D7C4E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7c4f4
	if (!ctx.cr6.eq) goto loc_82D7C4F4;
	// li r3,32
	ctx.r3.s64 = 32;
	// b 0x82d7c604
	goto loc_82D7C604;
loc_82D7C4F4:
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d7c600
	if (!ctx.cr0.eq) goto loc_82D7C600;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d7c524
	if (ctx.cr6.eq) goto loc_82D7C524;
	// lis r11,-24576
	ctx.r11.s64 = -1610612736;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82d7c524
	if (!ctx.cr6.lt) goto loc_82D7C524;
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x82d7c604
	goto loc_82D7C604;
loc_82D7C524:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82d7c588
	if (ctx.cr6.eq) goto loc_82D7C588;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d7c600
	if (ctx.cr6.eq) goto loc_82D7C600;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82d7c600
	if (!ctx.cr6.eq) goto loc_82D7C600;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82d7c600
	if (!ctx.cr6.eq) goto loc_82D7C600;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82d7c600
	if (!ctx.cr6.eq) goto loc_82D7C600;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// blt cr6,0x82d7c600
	if (ctx.cr6.lt) goto loc_82D7C600;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x82d86828
	ctx.lr = 0x82D7C568;
	sub_82D86828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7c604
	if (!ctx.cr6.eq) goto loc_82D7C604;
	// lwz r11,19872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19872);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r30.u32);
	// stw r30,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r30.u32);
	// stw r30,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r30.u32);
	// b 0x82d7c604
	goto loc_82D7C604;
loc_82D7C588:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d7c600
	if (!ctx.cr6.eq) goto loc_82D7C600;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d7c5c0
	if (ctx.cr6.eq) goto loc_82D7C5C0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d7c600
	if (ctx.cr6.eq) goto loc_82D7C600;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d7c600
	if (ctx.cr6.eq) goto loc_82D7C600;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r5.u32);
	// stw r6,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r6.u32);
	// stw r7,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r7.u32);
	// b 0x82d7c604
	goto loc_82D7C604;
loc_82D7C5C0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82d7c600
	if (!ctx.cr6.eq) goto loc_82D7C600;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82d7c600
	if (!ctx.cr6.eq) goto loc_82D7C600;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// addi r8,r8,23640
	ctx.r8.s64 = ctx.r8.s64 + 23640;
	// addi r9,r9,23648
	ctx.r9.s64 = ctx.r9.s64 + 23648;
	// addi r10,r10,23656
	ctx.r10.s64 = ctx.r10.s64 + 23656;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r8.u32);
	// stw r9,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r9.u32);
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// b 0x82d7c604
	goto loc_82D7C604;
loc_82D7C600:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82D7C604:
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

__attribute__((alias("__imp__sub_82D7C61C"))) PPC_WEAK_FUNC(sub_82D7C61C);
PPC_FUNC_IMPL(__imp__sub_82D7C61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C620"))) PPC_WEAK_FUNC(sub_82D7C620);
PPC_FUNC_IMPL(__imp__sub_82D7C620) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// beq cr6,0x82d7c63c
	if (ctx.cr6.eq) goto loc_82D7C63C;
	// lwz r10,19872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82D7C63C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C65C"))) PPC_WEAK_FUNC(sub_82D7C65C);
PPC_FUNC_IMPL(__imp__sub_82D7C65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C660"))) PPC_WEAK_FUNC(sub_82D7C660);
PPC_FUNC_IMPL(__imp__sub_82D7C660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D7C668;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d7c684
	if (!ctx.cr6.eq) goto loc_82D7C684;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D7C684:
	// lis r31,-31909
	ctx.r31.s64 = -2091188224;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r28,r11,-1100
	ctx.r28.s64 = ctx.r11.s64 + -1100;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,19872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19872);
	// li r6,245
	ctx.r6.s64 = 245;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r4,r4,41816
	ctx.r4.u64 = ctx.r4.u64 | 41816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D7C6B0;
	sub_82D862B0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7c6c8
	if (ctx.cr6.eq) goto loc_82D7C6C8;
	// bl 0x82d906b0
	ctx.lr = 0x82D7C6C0;
	sub_82D906B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82d7c6cc
	goto loc_82D7C6CC;
loc_82D7C6C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82D7C6CC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// beq cr6,0x82d7c770
	if (ctx.cr6.eq) goto loc_82D7C770;
	// lwz r6,19872(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19872);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,38216
	ctx.r10.u64 = ctx.r10.u64 | 38216;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82d7c724
	if (ctx.cr6.eq) goto loc_82D7C724;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82D7C708:
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stb r5,-1(r8)
	PPC_STORE_U8(ctx.r8.u32 + -1, ctx.r5.u8);
	// bne cr6,0x82d7c708
	if (!ctx.cr6.eq) goto loc_82D7C708;
loc_82D7C724:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D7C728:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d7c748
	if (ctx.cr6.eq) goto loc_82D7C748;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x82d7c728
	if (ctx.cr6.lt) goto loc_82D7C728;
	// b 0x82d7c754
	goto loc_82D7C754;
loc_82D7C748:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stwx r9,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r6,19872(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19872);
loc_82D7C754:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82d7c77c
	if (!ctx.cr6.eq) goto loc_82D7C77C;
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,270
	ctx.r6.s64 = 270;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82d861b0
	ctx.lr = 0x82D7C770;
	sub_82D861B0(ctx, base);
loc_82D7C770:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D7C77C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C7A8"))) PPC_WEAK_FUNC(sub_82D7C7A8);
PPC_FUNC_IMPL(__imp__sub_82D7C7A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d7ff70
	sub_82D7FF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C7AC"))) PPC_WEAK_FUNC(sub_82D7C7AC);
PPC_FUNC_IMPL(__imp__sub_82D7C7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C7B0"))) PPC_WEAK_FUNC(sub_82D7C7B0);
PPC_FUNC_IMPL(__imp__sub_82D7C7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7C7C0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7c7ec
	if (ctx.cr6.eq) goto loc_82D7C7EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7c7c0
	if (!ctx.cr6.eq) goto loc_82D7C7C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7C7D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7c7f4
	if (!ctx.cr6.eq) goto loc_82D7C7F4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7C7EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7c7d8
	goto loc_82D7C7D8;
loc_82D7C7F4:
	// b 0x82d7ffa8
	sub_82D7FFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C7F8"))) PPC_WEAK_FUNC(sub_82D7C7F8);
PPC_FUNC_IMPL(__imp__sub_82D7C7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7C808:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7c834
	if (ctx.cr6.eq) goto loc_82D7C834;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7c808
	if (!ctx.cr6.eq) goto loc_82D7C808;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7C820:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7c83c
	if (!ctx.cr6.eq) goto loc_82D7C83C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7C834:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7c820
	goto loc_82D7C820;
loc_82D7C83C:
	// b 0x82d7fff0
	sub_82D7FFF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C840"))) PPC_WEAK_FUNC(sub_82D7C840);
PPC_FUNC_IMPL(__imp__sub_82D7C840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7C850:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7c87c
	if (ctx.cr6.eq) goto loc_82D7C87C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7c850
	if (!ctx.cr6.eq) goto loc_82D7C850;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7C868:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7c884
	if (!ctx.cr6.eq) goto loc_82D7C884;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7C87C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7c868
	goto loc_82D7C868;
loc_82D7C884:
	// b 0x82d80038
	sub_82D80038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C888"))) PPC_WEAK_FUNC(sub_82D7C888);
PPC_FUNC_IMPL(__imp__sub_82D7C888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7C898:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7c8c4
	if (ctx.cr6.eq) goto loc_82D7C8C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7c898
	if (!ctx.cr6.eq) goto loc_82D7C898;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7C8B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7c8cc
	if (!ctx.cr6.eq) goto loc_82D7C8CC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7C8C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7c8b0
	goto loc_82D7C8B0;
loc_82D7C8CC:
	// b 0x82d80080
	sub_82D80080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C8D0"))) PPC_WEAK_FUNC(sub_82D7C8D0);
PPC_FUNC_IMPL(__imp__sub_82D7C8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7C8E0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7c90c
	if (ctx.cr6.eq) goto loc_82D7C90C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7c8e0
	if (!ctx.cr6.eq) goto loc_82D7C8E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7C8F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7c914
	if (!ctx.cr6.eq) goto loc_82D7C914;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7C90C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7c8f8
	goto loc_82D7C8F8;
loc_82D7C914:
	// b 0x82d800d0
	sub_82D800D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C918"))) PPC_WEAK_FUNC(sub_82D7C918);
PPC_FUNC_IMPL(__imp__sub_82D7C918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7C928:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7c954
	if (ctx.cr6.eq) goto loc_82D7C954;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7c928
	if (!ctx.cr6.eq) goto loc_82D7C928;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7C940:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7c95c
	if (!ctx.cr6.eq) goto loc_82D7C95C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7C954:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7c940
	goto loc_82D7C940;
loc_82D7C95C:
	// b 0x82d80128
	sub_82D80128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C960"))) PPC_WEAK_FUNC(sub_82D7C960);
PPC_FUNC_IMPL(__imp__sub_82D7C960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7C970:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7c99c
	if (ctx.cr6.eq) goto loc_82D7C99C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7c970
	if (!ctx.cr6.eq) goto loc_82D7C970;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7C988:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7c9a4
	if (!ctx.cr6.eq) goto loc_82D7C9A4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7C99C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7c988
	goto loc_82D7C988;
loc_82D7C9A4:
	// b 0x82d80170
	sub_82D80170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C9A8"))) PPC_WEAK_FUNC(sub_82D7C9A8);
PPC_FUNC_IMPL(__imp__sub_82D7C9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7C9B8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7c9e4
	if (ctx.cr6.eq) goto loc_82D7C9E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7c9b8
	if (!ctx.cr6.eq) goto loc_82D7C9B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7C9D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7c9ec
	if (!ctx.cr6.eq) goto loc_82D7C9EC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7C9E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7c9d0
	goto loc_82D7C9D0;
loc_82D7C9EC:
	// b 0x82d801b8
	sub_82D801B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7C9F0"))) PPC_WEAK_FUNC(sub_82D7C9F0);
PPC_FUNC_IMPL(__imp__sub_82D7C9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CA00:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7ca2c
	if (ctx.cr6.eq) goto loc_82D7CA2C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7ca00
	if (!ctx.cr6.eq) goto loc_82D7CA00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CA18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7ca34
	if (!ctx.cr6.eq) goto loc_82D7CA34;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CA2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7ca18
	goto loc_82D7CA18;
loc_82D7CA34:
	// b 0x82d80208
	sub_82D80208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CA38"))) PPC_WEAK_FUNC(sub_82D7CA38);
PPC_FUNC_IMPL(__imp__sub_82D7CA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CA48:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7ca74
	if (ctx.cr6.eq) goto loc_82D7CA74;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7ca48
	if (!ctx.cr6.eq) goto loc_82D7CA48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CA60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7ca7c
	if (!ctx.cr6.eq) goto loc_82D7CA7C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CA74:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7ca60
	goto loc_82D7CA60;
loc_82D7CA7C:
	// b 0x82d80250
	sub_82D80250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CA80"))) PPC_WEAK_FUNC(sub_82D7CA80);
PPC_FUNC_IMPL(__imp__sub_82D7CA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CA90:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cabc
	if (ctx.cr6.eq) goto loc_82D7CABC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7ca90
	if (!ctx.cr6.eq) goto loc_82D7CA90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CAA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cac4
	if (!ctx.cr6.eq) goto loc_82D7CAC4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CABC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7caa8
	goto loc_82D7CAA8;
loc_82D7CAC4:
	// b 0x82d80298
	sub_82D80298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CAC8"))) PPC_WEAK_FUNC(sub_82D7CAC8);
PPC_FUNC_IMPL(__imp__sub_82D7CAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CAD8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cb04
	if (ctx.cr6.eq) goto loc_82D7CB04;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cad8
	if (!ctx.cr6.eq) goto loc_82D7CAD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CAF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cb0c
	if (!ctx.cr6.eq) goto loc_82D7CB0C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CB04:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7caf0
	goto loc_82D7CAF0;
loc_82D7CB0C:
	// b 0x82d802f0
	sub_82D802F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CB10"))) PPC_WEAK_FUNC(sub_82D7CB10);
PPC_FUNC_IMPL(__imp__sub_82D7CB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CB20:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cb4c
	if (ctx.cr6.eq) goto loc_82D7CB4C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cb20
	if (!ctx.cr6.eq) goto loc_82D7CB20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CB38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cb54
	if (!ctx.cr6.eq) goto loc_82D7CB54;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CB4C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cb38
	goto loc_82D7CB38;
loc_82D7CB54:
	// b 0x82d80350
	sub_82D80350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CB58"))) PPC_WEAK_FUNC(sub_82D7CB58);
PPC_FUNC_IMPL(__imp__sub_82D7CB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CB68:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cb94
	if (ctx.cr6.eq) goto loc_82D7CB94;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cb68
	if (!ctx.cr6.eq) goto loc_82D7CB68;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CB80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cb9c
	if (!ctx.cr6.eq) goto loc_82D7CB9C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CB94:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cb80
	goto loc_82D7CB80;
loc_82D7CB9C:
	// b 0x82d803a8
	sub_82D803A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CBA0"))) PPC_WEAK_FUNC(sub_82D7CBA0);
PPC_FUNC_IMPL(__imp__sub_82D7CBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CBB0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cbdc
	if (ctx.cr6.eq) goto loc_82D7CBDC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cbb0
	if (!ctx.cr6.eq) goto loc_82D7CBB0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CBC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cbe4
	if (!ctx.cr6.eq) goto loc_82D7CBE4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CBDC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cbc8
	goto loc_82D7CBC8;
loc_82D7CBE4:
	// b 0x82d80400
	sub_82D80400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CBE8"))) PPC_WEAK_FUNC(sub_82D7CBE8);
PPC_FUNC_IMPL(__imp__sub_82D7CBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CBF8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cc24
	if (ctx.cr6.eq) goto loc_82D7CC24;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cbf8
	if (!ctx.cr6.eq) goto loc_82D7CBF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CC10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cc2c
	if (!ctx.cr6.eq) goto loc_82D7CC2C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CC24:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cc10
	goto loc_82D7CC10;
loc_82D7CC2C:
	// b 0x82d80458
	sub_82D80458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CC30"))) PPC_WEAK_FUNC(sub_82D7CC30);
PPC_FUNC_IMPL(__imp__sub_82D7CC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CC40:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cc6c
	if (ctx.cr6.eq) goto loc_82D7CC6C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cc40
	if (!ctx.cr6.eq) goto loc_82D7CC40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CC58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cc74
	if (!ctx.cr6.eq) goto loc_82D7CC74;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CC6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cc58
	goto loc_82D7CC58;
loc_82D7CC74:
	// b 0x82d804a8
	sub_82D804A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CC78"))) PPC_WEAK_FUNC(sub_82D7CC78);
PPC_FUNC_IMPL(__imp__sub_82D7CC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CC88:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7ccb4
	if (ctx.cr6.eq) goto loc_82D7CCB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cc88
	if (!ctx.cr6.eq) goto loc_82D7CC88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CCA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7ccbc
	if (!ctx.cr6.eq) goto loc_82D7CCBC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CCB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cca0
	goto loc_82D7CCA0;
loc_82D7CCBC:
	// b 0x82d804f0
	sub_82D804F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CCC0"))) PPC_WEAK_FUNC(sub_82D7CCC0);
PPC_FUNC_IMPL(__imp__sub_82D7CCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CCD0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7ccfc
	if (ctx.cr6.eq) goto loc_82D7CCFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7ccd0
	if (!ctx.cr6.eq) goto loc_82D7CCD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CCE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cd04
	if (!ctx.cr6.eq) goto loc_82D7CD04;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CCFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cce8
	goto loc_82D7CCE8;
loc_82D7CD04:
	// b 0x82d80538
	sub_82D80538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CD08"))) PPC_WEAK_FUNC(sub_82D7CD08);
PPC_FUNC_IMPL(__imp__sub_82D7CD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CD18:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cd44
	if (ctx.cr6.eq) goto loc_82D7CD44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cd18
	if (!ctx.cr6.eq) goto loc_82D7CD18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CD30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cd4c
	if (!ctx.cr6.eq) goto loc_82D7CD4C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CD44:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cd30
	goto loc_82D7CD30;
loc_82D7CD4C:
	// b 0x82d80580
	sub_82D80580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CD50"))) PPC_WEAK_FUNC(sub_82D7CD50);
PPC_FUNC_IMPL(__imp__sub_82D7CD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CD60:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cd8c
	if (ctx.cr6.eq) goto loc_82D7CD8C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cd60
	if (!ctx.cr6.eq) goto loc_82D7CD60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CD78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cd94
	if (!ctx.cr6.eq) goto loc_82D7CD94;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CD8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cd78
	goto loc_82D7CD78;
loc_82D7CD94:
	// b 0x82d805f0
	sub_82D805F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CD98"))) PPC_WEAK_FUNC(sub_82D7CD98);
PPC_FUNC_IMPL(__imp__sub_82D7CD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CDA8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cdd4
	if (ctx.cr6.eq) goto loc_82D7CDD4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cda8
	if (!ctx.cr6.eq) goto loc_82D7CDA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CDC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cddc
	if (!ctx.cr6.eq) goto loc_82D7CDDC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CDD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cdc0
	goto loc_82D7CDC0;
loc_82D7CDDC:
	// b 0x82d80648
	sub_82D80648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CDE0"))) PPC_WEAK_FUNC(sub_82D7CDE0);
PPC_FUNC_IMPL(__imp__sub_82D7CDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CDF0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7ce1c
	if (ctx.cr6.eq) goto loc_82D7CE1C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cdf0
	if (!ctx.cr6.eq) goto loc_82D7CDF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CE08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7ce24
	if (!ctx.cr6.eq) goto loc_82D7CE24;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CE1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7ce08
	goto loc_82D7CE08;
loc_82D7CE24:
	// b 0x82d80690
	sub_82D80690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CE28"))) PPC_WEAK_FUNC(sub_82D7CE28);
PPC_FUNC_IMPL(__imp__sub_82D7CE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CE38:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7ce64
	if (ctx.cr6.eq) goto loc_82D7CE64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7ce38
	if (!ctx.cr6.eq) goto loc_82D7CE38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CE50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7ce6c
	if (!ctx.cr6.eq) goto loc_82D7CE6C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CE64:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7ce50
	goto loc_82D7CE50;
loc_82D7CE6C:
	// b 0x82d806d8
	sub_82D806D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CE70"))) PPC_WEAK_FUNC(sub_82D7CE70);
PPC_FUNC_IMPL(__imp__sub_82D7CE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CE80:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7ceac
	if (ctx.cr6.eq) goto loc_82D7CEAC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7ce80
	if (!ctx.cr6.eq) goto loc_82D7CE80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CE98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7ceb4
	if (!ctx.cr6.eq) goto loc_82D7CEB4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CEAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7ce98
	goto loc_82D7CE98;
loc_82D7CEB4:
	// b 0x82d80730
	sub_82D80730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CEB8"))) PPC_WEAK_FUNC(sub_82D7CEB8);
PPC_FUNC_IMPL(__imp__sub_82D7CEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CEC8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cef4
	if (ctx.cr6.eq) goto loc_82D7CEF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cec8
	if (!ctx.cr6.eq) goto loc_82D7CEC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CEE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cefc
	if (!ctx.cr6.eq) goto loc_82D7CEFC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CEF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cee0
	goto loc_82D7CEE0;
loc_82D7CEFC:
	// b 0x82d80788
	sub_82D80788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CF00"))) PPC_WEAK_FUNC(sub_82D7CF00);
PPC_FUNC_IMPL(__imp__sub_82D7CF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CF10:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cf3c
	if (ctx.cr6.eq) goto loc_82D7CF3C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cf10
	if (!ctx.cr6.eq) goto loc_82D7CF10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CF28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cf44
	if (!ctx.cr6.eq) goto loc_82D7CF44;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CF3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cf28
	goto loc_82D7CF28;
loc_82D7CF44:
	// b 0x82d807e0
	sub_82D807E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CF48"))) PPC_WEAK_FUNC(sub_82D7CF48);
PPC_FUNC_IMPL(__imp__sub_82D7CF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CF58:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cf84
	if (ctx.cr6.eq) goto loc_82D7CF84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cf58
	if (!ctx.cr6.eq) goto loc_82D7CF58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CF70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cf8c
	if (!ctx.cr6.eq) goto loc_82D7CF8C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CF84:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cf70
	goto loc_82D7CF70;
loc_82D7CF8C:
	// b 0x82d80828
	sub_82D80828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CF90"))) PPC_WEAK_FUNC(sub_82D7CF90);
PPC_FUNC_IMPL(__imp__sub_82D7CF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CFA0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7cfcc
	if (ctx.cr6.eq) goto loc_82D7CFCC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cfa0
	if (!ctx.cr6.eq) goto loc_82D7CFA0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7CFB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cfd4
	if (!ctx.cr6.eq) goto loc_82D7CFD4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7CFCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7cfb8
	goto loc_82D7CFB8;
loc_82D7CFD4:
	// b 0x82d80870
	sub_82D80870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7CFD8"))) PPC_WEAK_FUNC(sub_82D7CFD8);
PPC_FUNC_IMPL(__imp__sub_82D7CFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7CFE8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d014
	if (ctx.cr6.eq) goto loc_82D7D014;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7cfe8
	if (!ctx.cr6.eq) goto loc_82D7CFE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D000:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d01c
	if (!ctx.cr6.eq) goto loc_82D7D01C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D014:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d000
	goto loc_82D7D000;
loc_82D7D01C:
	// b 0x82d808b8
	sub_82D808B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D020"))) PPC_WEAK_FUNC(sub_82D7D020);
PPC_FUNC_IMPL(__imp__sub_82D7D020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D030:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d05c
	if (ctx.cr6.eq) goto loc_82D7D05C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d030
	if (!ctx.cr6.eq) goto loc_82D7D030;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D048:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d064
	if (!ctx.cr6.eq) goto loc_82D7D064;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D05C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d048
	goto loc_82D7D048;
loc_82D7D064:
	// b 0x82d80900
	sub_82D80900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D068"))) PPC_WEAK_FUNC(sub_82D7D068);
PPC_FUNC_IMPL(__imp__sub_82D7D068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D078:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d0a4
	if (ctx.cr6.eq) goto loc_82D7D0A4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d078
	if (!ctx.cr6.eq) goto loc_82D7D078;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D090:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d0ac
	if (!ctx.cr6.eq) goto loc_82D7D0AC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D0A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d090
	goto loc_82D7D090;
loc_82D7D0AC:
	// b 0x82d80938
	sub_82D80938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D0B0"))) PPC_WEAK_FUNC(sub_82D7D0B0);
PPC_FUNC_IMPL(__imp__sub_82D7D0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D0C0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d0ec
	if (ctx.cr6.eq) goto loc_82D7D0EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d0c0
	if (!ctx.cr6.eq) goto loc_82D7D0C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D0D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d0f4
	if (!ctx.cr6.eq) goto loc_82D7D0F4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D0EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d0d8
	goto loc_82D7D0D8;
loc_82D7D0F4:
	// b 0x82d80970
	sub_82D80970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D0F8"))) PPC_WEAK_FUNC(sub_82D7D0F8);
PPC_FUNC_IMPL(__imp__sub_82D7D0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D108:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d134
	if (ctx.cr6.eq) goto loc_82D7D134;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d108
	if (!ctx.cr6.eq) goto loc_82D7D108;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D120:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d13c
	if (!ctx.cr6.eq) goto loc_82D7D13C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D134:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d120
	goto loc_82D7D120;
loc_82D7D13C:
	// b 0x82d809d8
	sub_82D809D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D140"))) PPC_WEAK_FUNC(sub_82D7D140);
PPC_FUNC_IMPL(__imp__sub_82D7D140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D150:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d17c
	if (ctx.cr6.eq) goto loc_82D7D17C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d150
	if (!ctx.cr6.eq) goto loc_82D7D150;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D168:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d184
	if (!ctx.cr6.eq) goto loc_82D7D184;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D17C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d168
	goto loc_82D7D168;
loc_82D7D184:
	// b 0x82d80a20
	sub_82D80A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D188"))) PPC_WEAK_FUNC(sub_82D7D188);
PPC_FUNC_IMPL(__imp__sub_82D7D188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D198:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d1c4
	if (ctx.cr6.eq) goto loc_82D7D1C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d198
	if (!ctx.cr6.eq) goto loc_82D7D198;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D1B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d1cc
	if (!ctx.cr6.eq) goto loc_82D7D1CC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D1C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d1b0
	goto loc_82D7D1B0;
loc_82D7D1CC:
	// b 0x82d80a68
	sub_82D80A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D1D0"))) PPC_WEAK_FUNC(sub_82D7D1D0);
PPC_FUNC_IMPL(__imp__sub_82D7D1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D1E0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d20c
	if (ctx.cr6.eq) goto loc_82D7D20C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d1e0
	if (!ctx.cr6.eq) goto loc_82D7D1E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D1F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d214
	if (!ctx.cr6.eq) goto loc_82D7D214;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D20C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d1f8
	goto loc_82D7D1F8;
loc_82D7D214:
	// b 0x82d80ab0
	sub_82D80AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D218"))) PPC_WEAK_FUNC(sub_82D7D218);
PPC_FUNC_IMPL(__imp__sub_82D7D218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D228:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d254
	if (ctx.cr6.eq) goto loc_82D7D254;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d228
	if (!ctx.cr6.eq) goto loc_82D7D228;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d25c
	if (!ctx.cr6.eq) goto loc_82D7D25C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D254:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d240
	goto loc_82D7D240;
loc_82D7D25C:
	// b 0x82d80b08
	sub_82D80B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D260"))) PPC_WEAK_FUNC(sub_82D7D260);
PPC_FUNC_IMPL(__imp__sub_82D7D260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D270:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d29c
	if (ctx.cr6.eq) goto loc_82D7D29C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d270
	if (!ctx.cr6.eq) goto loc_82D7D270;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D288:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d2a4
	if (!ctx.cr6.eq) goto loc_82D7D2A4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D29C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d288
	goto loc_82D7D288;
loc_82D7D2A4:
	// b 0x82d80b60
	sub_82D80B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D2A8"))) PPC_WEAK_FUNC(sub_82D7D2A8);
PPC_FUNC_IMPL(__imp__sub_82D7D2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D2B8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d2e4
	if (ctx.cr6.eq) goto loc_82D7D2E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d2b8
	if (!ctx.cr6.eq) goto loc_82D7D2B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D2D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d2ec
	if (!ctx.cr6.eq) goto loc_82D7D2EC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D2E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d2d0
	goto loc_82D7D2D0;
loc_82D7D2EC:
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d80ba8
	sub_82D80BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D2FC"))) PPC_WEAK_FUNC(sub_82D7D2FC);
PPC_FUNC_IMPL(__imp__sub_82D7D2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7D300"))) PPC_WEAK_FUNC(sub_82D7D300);
PPC_FUNC_IMPL(__imp__sub_82D7D300) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D324:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d360
	if (ctx.cr6.eq) goto loc_82D7D360;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d324
	if (!ctx.cr6.eq) goto loc_82D7D324;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D33C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d368
	if (!ctx.cr6.eq) goto loc_82D7D368;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7D360:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d33c
	goto loc_82D7D33C;
loc_82D7D368:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82d80c20
	ctx.lr = 0x82D7D370;
	sub_82D80C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7d394
	if (!ctx.cr6.eq) goto loc_82D7D394;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7d394
	if (ctx.cr6.eq) goto loc_82D7D394;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7D394:
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

__attribute__((alias("__imp__sub_82D7D3A8"))) PPC_WEAK_FUNC(sub_82D7D3A8);
PPC_FUNC_IMPL(__imp__sub_82D7D3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D3B8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d3e4
	if (ctx.cr6.eq) goto loc_82D7D3E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d3b8
	if (!ctx.cr6.eq) goto loc_82D7D3B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D3D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d3ec
	if (!ctx.cr6.eq) goto loc_82D7D3EC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D3E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d3d0
	goto loc_82D7D3D0;
loc_82D7D3EC:
	// b 0x82d80c70
	sub_82D80C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D3F0"))) PPC_WEAK_FUNC(sub_82D7D3F0);
PPC_FUNC_IMPL(__imp__sub_82D7D3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D400:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d42c
	if (ctx.cr6.eq) goto loc_82D7D42C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d400
	if (!ctx.cr6.eq) goto loc_82D7D400;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D418:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d434
	if (!ctx.cr6.eq) goto loc_82D7D434;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D42C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d418
	goto loc_82D7D418;
loc_82D7D434:
	// b 0x82d80cc8
	sub_82D80CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D438"))) PPC_WEAK_FUNC(sub_82D7D438);
PPC_FUNC_IMPL(__imp__sub_82D7D438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D448:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d474
	if (ctx.cr6.eq) goto loc_82D7D474;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d448
	if (!ctx.cr6.eq) goto loc_82D7D448;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D460:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d47c
	if (!ctx.cr6.eq) goto loc_82D7D47C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D474:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d460
	goto loc_82D7D460;
loc_82D7D47C:
	// b 0x82d80d20
	sub_82D80D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D480"))) PPC_WEAK_FUNC(sub_82D7D480);
PPC_FUNC_IMPL(__imp__sub_82D7D480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D490:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d4bc
	if (ctx.cr6.eq) goto loc_82D7D4BC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d490
	if (!ctx.cr6.eq) goto loc_82D7D490;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D4A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d4c4
	if (!ctx.cr6.eq) goto loc_82D7D4C4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D4BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d4a8
	goto loc_82D7D4A8;
loc_82D7D4C4:
	// b 0x82d80d68
	sub_82D80D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D4C8"))) PPC_WEAK_FUNC(sub_82D7D4C8);
PPC_FUNC_IMPL(__imp__sub_82D7D4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D4D8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d504
	if (ctx.cr6.eq) goto loc_82D7D504;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d4d8
	if (!ctx.cr6.eq) goto loc_82D7D4D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D4F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d50c
	if (!ctx.cr6.eq) goto loc_82D7D50C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D504:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d4f0
	goto loc_82D7D4F0;
loc_82D7D50C:
	// b 0x82d80db0
	sub_82D80DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D510"))) PPC_WEAK_FUNC(sub_82D7D510);
PPC_FUNC_IMPL(__imp__sub_82D7D510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D520:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d54c
	if (ctx.cr6.eq) goto loc_82D7D54C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d520
	if (!ctx.cr6.eq) goto loc_82D7D520;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D538:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d554
	if (!ctx.cr6.eq) goto loc_82D7D554;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D54C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d538
	goto loc_82D7D538;
loc_82D7D554:
	// b 0x82d80df8
	sub_82D80DF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D558"))) PPC_WEAK_FUNC(sub_82D7D558);
PPC_FUNC_IMPL(__imp__sub_82D7D558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D568:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d594
	if (ctx.cr6.eq) goto loc_82D7D594;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d568
	if (!ctx.cr6.eq) goto loc_82D7D568;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D580:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d59c
	if (!ctx.cr6.eq) goto loc_82D7D59C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D594:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d580
	goto loc_82D7D580;
loc_82D7D59C:
	// b 0x82d80e40
	sub_82D80E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D5A0"))) PPC_WEAK_FUNC(sub_82D7D5A0);
PPC_FUNC_IMPL(__imp__sub_82D7D5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D5B0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d5dc
	if (ctx.cr6.eq) goto loc_82D7D5DC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d5b0
	if (!ctx.cr6.eq) goto loc_82D7D5B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D5C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d5e4
	if (!ctx.cr6.eq) goto loc_82D7D5E4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D5DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d5c8
	goto loc_82D7D5C8;
loc_82D7D5E4:
	// b 0x82d80e90
	sub_82D80E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D5E8"))) PPC_WEAK_FUNC(sub_82D7D5E8);
PPC_FUNC_IMPL(__imp__sub_82D7D5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D5F8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d624
	if (ctx.cr6.eq) goto loc_82D7D624;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d5f8
	if (!ctx.cr6.eq) goto loc_82D7D5F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D610:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d62c
	if (!ctx.cr6.eq) goto loc_82D7D62C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D624:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d610
	goto loc_82D7D610;
loc_82D7D62C:
	// b 0x82d80ed8
	sub_82D80ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D630"))) PPC_WEAK_FUNC(sub_82D7D630);
PPC_FUNC_IMPL(__imp__sub_82D7D630) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D7D650:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d68c
	if (ctx.cr6.eq) goto loc_82D7D68C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82d7d650
	if (!ctx.cr6.eq) goto loc_82D7D650;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d694
	if (!ctx.cr6.eq) goto loc_82D7D694;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7D68C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d668
	goto loc_82D7D668;
loc_82D7D694:
	// bl 0x82d80f20
	ctx.lr = 0x82D7D698;
	sub_82D80F20(ctx, base);
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

__attribute__((alias("__imp__sub_82D7D6AC"))) PPC_WEAK_FUNC(sub_82D7D6AC);
PPC_FUNC_IMPL(__imp__sub_82D7D6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7D6B0"))) PPC_WEAK_FUNC(sub_82D7D6B0);
PPC_FUNC_IMPL(__imp__sub_82D7D6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D6C0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d6ec
	if (ctx.cr6.eq) goto loc_82D7D6EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d6c0
	if (!ctx.cr6.eq) goto loc_82D7D6C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D6D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d6f4
	if (!ctx.cr6.eq) goto loc_82D7D6F4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D6EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d6d8
	goto loc_82D7D6D8;
loc_82D7D6F4:
	// b 0x82d80f88
	sub_82D80F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D6F8"))) PPC_WEAK_FUNC(sub_82D7D6F8);
PPC_FUNC_IMPL(__imp__sub_82D7D6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D708:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d734
	if (ctx.cr6.eq) goto loc_82D7D734;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d708
	if (!ctx.cr6.eq) goto loc_82D7D708;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D720:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d73c
	if (!ctx.cr6.eq) goto loc_82D7D73C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D734:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d720
	goto loc_82D7D720;
loc_82D7D73C:
	// b 0x82d80fd8
	sub_82D80FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D740"))) PPC_WEAK_FUNC(sub_82D7D740);
PPC_FUNC_IMPL(__imp__sub_82D7D740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D750:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d77c
	if (ctx.cr6.eq) goto loc_82D7D77C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d750
	if (!ctx.cr6.eq) goto loc_82D7D750;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d784
	if (!ctx.cr6.eq) goto loc_82D7D784;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D77C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d768
	goto loc_82D7D768;
loc_82D7D784:
	// b 0x82d81020
	sub_82D81020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D788"))) PPC_WEAK_FUNC(sub_82D7D788);
PPC_FUNC_IMPL(__imp__sub_82D7D788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D798:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d7c4
	if (ctx.cr6.eq) goto loc_82D7D7C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d798
	if (!ctx.cr6.eq) goto loc_82D7D798;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D7B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d7cc
	if (!ctx.cr6.eq) goto loc_82D7D7CC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D7C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d7b0
	goto loc_82D7D7B0;
loc_82D7D7CC:
	// b 0x82d81070
	sub_82D81070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D7D0"))) PPC_WEAK_FUNC(sub_82D7D7D0);
PPC_FUNC_IMPL(__imp__sub_82D7D7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D7E0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d80c
	if (ctx.cr6.eq) goto loc_82D7D80C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d7e0
	if (!ctx.cr6.eq) goto loc_82D7D7E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D7F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d814
	if (!ctx.cr6.eq) goto loc_82D7D814;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D80C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d7f8
	goto loc_82D7D7F8;
loc_82D7D814:
	// b 0x82d810c0
	sub_82D810C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D818"))) PPC_WEAK_FUNC(sub_82D7D818);
PPC_FUNC_IMPL(__imp__sub_82D7D818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D828:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d854
	if (ctx.cr6.eq) goto loc_82D7D854;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d828
	if (!ctx.cr6.eq) goto loc_82D7D828;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D840:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d85c
	if (!ctx.cr6.eq) goto loc_82D7D85C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D854:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d840
	goto loc_82D7D840;
loc_82D7D85C:
	// b 0x82d81118
	sub_82D81118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D860"))) PPC_WEAK_FUNC(sub_82D7D860);
PPC_FUNC_IMPL(__imp__sub_82D7D860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D870:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d89c
	if (ctx.cr6.eq) goto loc_82D7D89C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d870
	if (!ctx.cr6.eq) goto loc_82D7D870;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D888:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d8a4
	if (!ctx.cr6.eq) goto loc_82D7D8A4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D89C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d888
	goto loc_82D7D888;
loc_82D7D8A4:
	// b 0x82d81170
	sub_82D81170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D8A8"))) PPC_WEAK_FUNC(sub_82D7D8A8);
PPC_FUNC_IMPL(__imp__sub_82D7D8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D8B8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d8e4
	if (ctx.cr6.eq) goto loc_82D7D8E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d8b8
	if (!ctx.cr6.eq) goto loc_82D7D8B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D8D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d8ec
	if (!ctx.cr6.eq) goto loc_82D7D8EC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D8E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d8d0
	goto loc_82D7D8D0;
loc_82D7D8EC:
	// b 0x82d811c8
	sub_82D811C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D8F0"))) PPC_WEAK_FUNC(sub_82D7D8F0);
PPC_FUNC_IMPL(__imp__sub_82D7D8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D900:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d92c
	if (ctx.cr6.eq) goto loc_82D7D92C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d900
	if (!ctx.cr6.eq) goto loc_82D7D900;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D918:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d934
	if (!ctx.cr6.eq) goto loc_82D7D934;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D92C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d918
	goto loc_82D7D918;
loc_82D7D934:
	// b 0x82d81220
	sub_82D81220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D938"))) PPC_WEAK_FUNC(sub_82D7D938);
PPC_FUNC_IMPL(__imp__sub_82D7D938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D948:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d974
	if (ctx.cr6.eq) goto loc_82D7D974;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d948
	if (!ctx.cr6.eq) goto loc_82D7D948;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D960:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d97c
	if (!ctx.cr6.eq) goto loc_82D7D97C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D974:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d960
	goto loc_82D7D960;
loc_82D7D97C:
	// b 0x82d81278
	sub_82D81278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D980"))) PPC_WEAK_FUNC(sub_82D7D980);
PPC_FUNC_IMPL(__imp__sub_82D7D980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D990:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7d9bc
	if (ctx.cr6.eq) goto loc_82D7D9BC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d990
	if (!ctx.cr6.eq) goto loc_82D7D990;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D9A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d9c4
	if (!ctx.cr6.eq) goto loc_82D7D9C4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7D9BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7d9a8
	goto loc_82D7D9A8;
loc_82D7D9C4:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d812c0
	sub_82D812C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D9D4"))) PPC_WEAK_FUNC(sub_82D7D9D4);
PPC_FUNC_IMPL(__imp__sub_82D7D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7D9D8"))) PPC_WEAK_FUNC(sub_82D7D9D8);
PPC_FUNC_IMPL(__imp__sub_82D7D9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7D9E8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7da14
	if (ctx.cr6.eq) goto loc_82D7DA14;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7d9e8
	if (!ctx.cr6.eq) goto loc_82D7D9E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DA00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7da1c
	if (!ctx.cr6.eq) goto loc_82D7DA1C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DA14:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7da00
	goto loc_82D7DA00;
loc_82D7DA1C:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d81310
	sub_82D81310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DA2C"))) PPC_WEAK_FUNC(sub_82D7DA2C);
PPC_FUNC_IMPL(__imp__sub_82D7DA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DA30"))) PPC_WEAK_FUNC(sub_82D7DA30);
PPC_FUNC_IMPL(__imp__sub_82D7DA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DA40:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7da6c
	if (ctx.cr6.eq) goto loc_82D7DA6C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7da40
	if (!ctx.cr6.eq) goto loc_82D7DA40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DA58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7da74
	if (!ctx.cr6.eq) goto loc_82D7DA74;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DA6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7da58
	goto loc_82D7DA58;
loc_82D7DA74:
	// b 0x82d81360
	sub_82D81360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DA78"))) PPC_WEAK_FUNC(sub_82D7DA78);
PPC_FUNC_IMPL(__imp__sub_82D7DA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DA88:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7dab4
	if (ctx.cr6.eq) goto loc_82D7DAB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7da88
	if (!ctx.cr6.eq) goto loc_82D7DA88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DAA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7dabc
	if (!ctx.cr6.eq) goto loc_82D7DABC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DAB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7daa0
	goto loc_82D7DAA0;
loc_82D7DABC:
	// b 0x82d813b8
	sub_82D813B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DAC0"))) PPC_WEAK_FUNC(sub_82D7DAC0);
PPC_FUNC_IMPL(__imp__sub_82D7DAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DAD0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7dafc
	if (ctx.cr6.eq) goto loc_82D7DAFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dad0
	if (!ctx.cr6.eq) goto loc_82D7DAD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DAE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7db04
	if (!ctx.cr6.eq) goto loc_82D7DB04;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DAFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7dae8
	goto loc_82D7DAE8;
loc_82D7DB04:
	// b 0x82d81400
	sub_82D81400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DB08"))) PPC_WEAK_FUNC(sub_82D7DB08);
PPC_FUNC_IMPL(__imp__sub_82D7DB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DB18:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7db44
	if (ctx.cr6.eq) goto loc_82D7DB44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7db18
	if (!ctx.cr6.eq) goto loc_82D7DB18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DB30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7db4c
	if (!ctx.cr6.eq) goto loc_82D7DB4C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DB44:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7db30
	goto loc_82D7DB30;
loc_82D7DB4C:
	// b 0x82d81448
	sub_82D81448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DB50"))) PPC_WEAK_FUNC(sub_82D7DB50);
PPC_FUNC_IMPL(__imp__sub_82D7DB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DB60:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7db8c
	if (ctx.cr6.eq) goto loc_82D7DB8C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7db60
	if (!ctx.cr6.eq) goto loc_82D7DB60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DB78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7db94
	if (!ctx.cr6.eq) goto loc_82D7DB94;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DB8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7db78
	goto loc_82D7DB78;
loc_82D7DB94:
	// b 0x82d81490
	sub_82D81490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DB98"))) PPC_WEAK_FUNC(sub_82D7DB98);
PPC_FUNC_IMPL(__imp__sub_82D7DB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DBA8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7dbd4
	if (ctx.cr6.eq) goto loc_82D7DBD4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dba8
	if (!ctx.cr6.eq) goto loc_82D7DBA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DBC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7dbdc
	if (!ctx.cr6.eq) goto loc_82D7DBDC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DBD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7dbc0
	goto loc_82D7DBC0;
loc_82D7DBDC:
	// b 0x82d814d8
	sub_82D814D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DBE0"))) PPC_WEAK_FUNC(sub_82D7DBE0);
PPC_FUNC_IMPL(__imp__sub_82D7DBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DBF0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7dc1c
	if (ctx.cr6.eq) goto loc_82D7DC1C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dbf0
	if (!ctx.cr6.eq) goto loc_82D7DBF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DC08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7dc24
	if (!ctx.cr6.eq) goto loc_82D7DC24;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DC1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7dc08
	goto loc_82D7DC08;
loc_82D7DC24:
	// b 0x82d81520
	sub_82D81520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DC28"))) PPC_WEAK_FUNC(sub_82D7DC28);
PPC_FUNC_IMPL(__imp__sub_82D7DC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DC38:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7dc64
	if (ctx.cr6.eq) goto loc_82D7DC64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dc38
	if (!ctx.cr6.eq) goto loc_82D7DC38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DC50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7dc6c
	if (!ctx.cr6.eq) goto loc_82D7DC6C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DC64:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7dc50
	goto loc_82D7DC50;
loc_82D7DC6C:
	// b 0x82d81568
	sub_82D81568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DC70"))) PPC_WEAK_FUNC(sub_82D7DC70);
PPC_FUNC_IMPL(__imp__sub_82D7DC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DC80:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7dcac
	if (ctx.cr6.eq) goto loc_82D7DCAC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dc80
	if (!ctx.cr6.eq) goto loc_82D7DC80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DC98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7dcb4
	if (!ctx.cr6.eq) goto loc_82D7DCB4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DCAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7dc98
	goto loc_82D7DC98;
loc_82D7DCB4:
	// b 0x82d815b0
	sub_82D815B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DCB8"))) PPC_WEAK_FUNC(sub_82D7DCB8);
PPC_FUNC_IMPL(__imp__sub_82D7DCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DCC8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7dcf4
	if (ctx.cr6.eq) goto loc_82D7DCF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dcc8
	if (!ctx.cr6.eq) goto loc_82D7DCC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DCE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7dcfc
	if (!ctx.cr6.eq) goto loc_82D7DCFC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DCF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7dce0
	goto loc_82D7DCE0;
loc_82D7DCFC:
	// b 0x82d81608
	sub_82D81608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DD00"))) PPC_WEAK_FUNC(sub_82D7DD00);
PPC_FUNC_IMPL(__imp__sub_82D7DD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DD10:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7dd3c
	if (ctx.cr6.eq) goto loc_82D7DD3C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dd10
	if (!ctx.cr6.eq) goto loc_82D7DD10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DD28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7dd44
	if (!ctx.cr6.eq) goto loc_82D7DD44;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DD3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7dd28
	goto loc_82D7DD28;
loc_82D7DD44:
	// b 0x82d81640
	sub_82D81640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DD48"))) PPC_WEAK_FUNC(sub_82D7DD48);
PPC_FUNC_IMPL(__imp__sub_82D7DD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DD58:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7dd84
	if (ctx.cr6.eq) goto loc_82D7DD84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dd58
	if (!ctx.cr6.eq) goto loc_82D7DD58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DD70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7dd8c
	if (!ctx.cr6.eq) goto loc_82D7DD8C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DD84:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7dd70
	goto loc_82D7DD70;
loc_82D7DD8C:
	// b 0x82d81678
	sub_82D81678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DD90"))) PPC_WEAK_FUNC(sub_82D7DD90);
PPC_FUNC_IMPL(__imp__sub_82D7DD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DDA0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7ddcc
	if (ctx.cr6.eq) goto loc_82D7DDCC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dda0
	if (!ctx.cr6.eq) goto loc_82D7DDA0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DDB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7ddd4
	if (!ctx.cr6.eq) goto loc_82D7DDD4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DDCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7ddb8
	goto loc_82D7DDB8;
loc_82D7DDD4:
	// b 0x82d816d0
	sub_82D816D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DDD8"))) PPC_WEAK_FUNC(sub_82D7DDD8);
PPC_FUNC_IMPL(__imp__sub_82D7DDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DDE8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7de14
	if (ctx.cr6.eq) goto loc_82D7DE14;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dde8
	if (!ctx.cr6.eq) goto loc_82D7DDE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DE00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7de1c
	if (!ctx.cr6.eq) goto loc_82D7DE1C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DE14:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7de00
	goto loc_82D7DE00;
loc_82D7DE1C:
	// b 0x82d81718
	sub_82D81718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DE20"))) PPC_WEAK_FUNC(sub_82D7DE20);
PPC_FUNC_IMPL(__imp__sub_82D7DE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DE30:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7de5c
	if (ctx.cr6.eq) goto loc_82D7DE5C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7de30
	if (!ctx.cr6.eq) goto loc_82D7DE30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DE48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7de64
	if (!ctx.cr6.eq) goto loc_82D7DE64;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DE5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7de48
	goto loc_82D7DE48;
loc_82D7DE64:
	// b 0x82d81760
	sub_82D81760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DE68"))) PPC_WEAK_FUNC(sub_82D7DE68);
PPC_FUNC_IMPL(__imp__sub_82D7DE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DE78:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7dea4
	if (ctx.cr6.eq) goto loc_82D7DEA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7de78
	if (!ctx.cr6.eq) goto loc_82D7DE78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DE90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7deac
	if (!ctx.cr6.eq) goto loc_82D7DEAC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DEA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7de90
	goto loc_82D7DE90;
loc_82D7DEAC:
	// b 0x82d817a8
	sub_82D817A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DEB0"))) PPC_WEAK_FUNC(sub_82D7DEB0);
PPC_FUNC_IMPL(__imp__sub_82D7DEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DEC0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7deec
	if (ctx.cr6.eq) goto loc_82D7DEEC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dec0
	if (!ctx.cr6.eq) goto loc_82D7DEC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DED8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7def4
	if (!ctx.cr6.eq) goto loc_82D7DEF4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DEEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7ded8
	goto loc_82D7DED8;
loc_82D7DEF4:
	// b 0x82d817f8
	sub_82D817F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DEF8"))) PPC_WEAK_FUNC(sub_82D7DEF8);
PPC_FUNC_IMPL(__imp__sub_82D7DEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DF08:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7df34
	if (ctx.cr6.eq) goto loc_82D7DF34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7df08
	if (!ctx.cr6.eq) goto loc_82D7DF08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DF20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7df3c
	if (!ctx.cr6.eq) goto loc_82D7DF3C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DF34:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7df20
	goto loc_82D7DF20;
loc_82D7DF3C:
	// b 0x82d81848
	sub_82D81848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DF40"))) PPC_WEAK_FUNC(sub_82D7DF40);
PPC_FUNC_IMPL(__imp__sub_82D7DF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DF50:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7df7c
	if (ctx.cr6.eq) goto loc_82D7DF7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7df50
	if (!ctx.cr6.eq) goto loc_82D7DF50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DF68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7df84
	if (!ctx.cr6.eq) goto loc_82D7DF84;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DF7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7df68
	goto loc_82D7DF68;
loc_82D7DF84:
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d81890
	sub_82D81890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DF94"))) PPC_WEAK_FUNC(sub_82D7DF94);
PPC_FUNC_IMPL(__imp__sub_82D7DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DF98"))) PPC_WEAK_FUNC(sub_82D7DF98);
PPC_FUNC_IMPL(__imp__sub_82D7DF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7DFA8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7dfd4
	if (ctx.cr6.eq) goto loc_82D7DFD4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dfa8
	if (!ctx.cr6.eq) goto loc_82D7DFA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DFC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7dfdc
	if (!ctx.cr6.eq) goto loc_82D7DFDC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7DFD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7dfc0
	goto loc_82D7DFC0;
loc_82D7DFDC:
	// b 0x82d818e8
	sub_82D818E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DFE0"))) PPC_WEAK_FUNC(sub_82D7DFE0);
PPC_FUNC_IMPL(__imp__sub_82D7DFE0) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7E004:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7e040
	if (ctx.cr6.eq) goto loc_82D7E040;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7e004
	if (!ctx.cr6.eq) goto loc_82D7E004;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7E01C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7e048
	if (!ctx.cr6.eq) goto loc_82D7E048;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7E040:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7e01c
	goto loc_82D7E01C;
loc_82D7E048:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d81920
	ctx.lr = 0x82D7E050;
	sub_82D81920(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7e074
	if (!ctx.cr6.eq) goto loc_82D7E074;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7e074
	if (ctx.cr6.eq) goto loc_82D7E074;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7E074:
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

__attribute__((alias("__imp__sub_82D7E088"))) PPC_WEAK_FUNC(sub_82D7E088);
PPC_FUNC_IMPL(__imp__sub_82D7E088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7E098:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7e0c4
	if (ctx.cr6.eq) goto loc_82D7E0C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7e098
	if (!ctx.cr6.eq) goto loc_82D7E098;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7E0B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7e0cc
	if (!ctx.cr6.eq) goto loc_82D7E0CC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E0C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7e0b0
	goto loc_82D7E0B0;
loc_82D7E0CC:
	// b 0x82d81968
	sub_82D81968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E0D0"))) PPC_WEAK_FUNC(sub_82D7E0D0);
PPC_FUNC_IMPL(__imp__sub_82D7E0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7E0E0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7e10c
	if (ctx.cr6.eq) goto loc_82D7E10C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7e0e0
	if (!ctx.cr6.eq) goto loc_82D7E0E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7E0F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7e114
	if (!ctx.cr6.eq) goto loc_82D7E114;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E10C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7e0f8
	goto loc_82D7E0F8;
loc_82D7E114:
	// b 0x82d819b0
	sub_82D819B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E118"))) PPC_WEAK_FUNC(sub_82D7E118);
PPC_FUNC_IMPL(__imp__sub_82D7E118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7E128:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7e154
	if (ctx.cr6.eq) goto loc_82D7E154;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7e128
	if (!ctx.cr6.eq) goto loc_82D7E128;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7E140:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7e15c
	if (!ctx.cr6.eq) goto loc_82D7E15C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E154:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7e140
	goto loc_82D7E140;
loc_82D7E15C:
	// b 0x82d819f8
	sub_82D819F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E160"))) PPC_WEAK_FUNC(sub_82D7E160);
PPC_FUNC_IMPL(__imp__sub_82D7E160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7E170:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7e19c
	if (ctx.cr6.eq) goto loc_82D7E19C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7e170
	if (!ctx.cr6.eq) goto loc_82D7E170;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7E188:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7e1a4
	if (!ctx.cr6.eq) goto loc_82D7E1A4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E19C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7e188
	goto loc_82D7E188;
loc_82D7E1A4:
	// b 0x82d81a40
	sub_82D81A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E1A8"))) PPC_WEAK_FUNC(sub_82D7E1A8);
PPC_FUNC_IMPL(__imp__sub_82D7E1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7E1B8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7e1e4
	if (ctx.cr6.eq) goto loc_82D7E1E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7e1b8
	if (!ctx.cr6.eq) goto loc_82D7E1B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7E1D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7e1ec
	if (!ctx.cr6.eq) goto loc_82D7E1EC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E1E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7e1d0
	goto loc_82D7E1D0;
loc_82D7E1EC:
	// b 0x82d81a88
	sub_82D81A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E1F0"))) PPC_WEAK_FUNC(sub_82D7E1F0);
PPC_FUNC_IMPL(__imp__sub_82D7E1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7E200:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7e22c
	if (ctx.cr6.eq) goto loc_82D7E22C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7e200
	if (!ctx.cr6.eq) goto loc_82D7E200;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7E218:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7e234
	if (!ctx.cr6.eq) goto loc_82D7E234;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E22C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7e218
	goto loc_82D7E218;
loc_82D7E234:
	// b 0x82d81ad0
	sub_82D81AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E238"))) PPC_WEAK_FUNC(sub_82D7E238);
PPC_FUNC_IMPL(__imp__sub_82D7E238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7E248:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7e274
	if (ctx.cr6.eq) goto loc_82D7E274;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7e248
	if (!ctx.cr6.eq) goto loc_82D7E248;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7E260:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7e27c
	if (!ctx.cr6.eq) goto loc_82D7E27C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E274:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7e260
	goto loc_82D7E260;
loc_82D7E27C:
	// b 0x82d81b28
	sub_82D81B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E280"))) PPC_WEAK_FUNC(sub_82D7E280);
PPC_FUNC_IMPL(__imp__sub_82D7E280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7E290:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7e2bc
	if (ctx.cr6.eq) goto loc_82D7E2BC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7e290
	if (!ctx.cr6.eq) goto loc_82D7E290;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7E2A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7e2c4
	if (!ctx.cr6.eq) goto loc_82D7E2C4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E2BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7e2a8
	goto loc_82D7E2A8;
loc_82D7E2C4:
	// b 0x82d81b70
	sub_82D81B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E2C8"))) PPC_WEAK_FUNC(sub_82D7E2C8);
PPC_FUNC_IMPL(__imp__sub_82D7E2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7E2D8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7e304
	if (ctx.cr6.eq) goto loc_82D7E304;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7e2d8
	if (!ctx.cr6.eq) goto loc_82D7E2D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7E2F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7e30c
	if (!ctx.cr6.eq) goto loc_82D7E30C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E304:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7e2f0
	goto loc_82D7E2F0;
loc_82D7E30C:
	// b 0x82d81bb8
	sub_82D81BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E310"))) PPC_WEAK_FUNC(sub_82D7E310);
PPC_FUNC_IMPL(__imp__sub_82D7E310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D7E320:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7e34c
	if (ctx.cr6.eq) goto loc_82D7E34C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7e320
	if (!ctx.cr6.eq) goto loc_82D7E320;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7E338:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7e354
	if (!ctx.cr6.eq) goto loc_82D7E354;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E34C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7e338
	goto loc_82D7E338;
loc_82D7E354:
	// b 0x82d81c00
	sub_82D81C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E358"))) PPC_WEAK_FUNC(sub_82D7E358);
PPC_FUNC_IMPL(__imp__sub_82D7E358) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e368
	if (!ctx.cr6.eq) goto loc_82D7E368;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E368:
	// b 0x82d84718
	sub_82D84718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E36C"))) PPC_WEAK_FUNC(sub_82D7E36C);
PPC_FUNC_IMPL(__imp__sub_82D7E36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E370"))) PPC_WEAK_FUNC(sub_82D7E370);
PPC_FUNC_IMPL(__imp__sub_82D7E370) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e380
	if (!ctx.cr6.eq) goto loc_82D7E380;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E380:
	// b 0x82d84760
	sub_82D84760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E384"))) PPC_WEAK_FUNC(sub_82D7E384);
PPC_FUNC_IMPL(__imp__sub_82D7E384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E388"))) PPC_WEAK_FUNC(sub_82D7E388);
PPC_FUNC_IMPL(__imp__sub_82D7E388) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e398
	if (!ctx.cr6.eq) goto loc_82D7E398;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E398:
	// b 0x82d847b0
	sub_82D847B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E39C"))) PPC_WEAK_FUNC(sub_82D7E39C);
PPC_FUNC_IMPL(__imp__sub_82D7E39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E3A0"))) PPC_WEAK_FUNC(sub_82D7E3A0);
PPC_FUNC_IMPL(__imp__sub_82D7E3A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e3b0
	if (!ctx.cr6.eq) goto loc_82D7E3B0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E3B0:
	// b 0x82d84830
	sub_82D84830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E3B4"))) PPC_WEAK_FUNC(sub_82D7E3B4);
PPC_FUNC_IMPL(__imp__sub_82D7E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E3B8"))) PPC_WEAK_FUNC(sub_82D7E3B8);
PPC_FUNC_IMPL(__imp__sub_82D7E3B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e3c8
	if (!ctx.cr6.eq) goto loc_82D7E3C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E3C8:
	// b 0x82d848a0
	sub_82D848A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E3CC"))) PPC_WEAK_FUNC(sub_82D7E3CC);
PPC_FUNC_IMPL(__imp__sub_82D7E3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E3D0"))) PPC_WEAK_FUNC(sub_82D7E3D0);
PPC_FUNC_IMPL(__imp__sub_82D7E3D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e3e0
	if (!ctx.cr6.eq) goto loc_82D7E3E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E3E0:
	// b 0x82d84938
	sub_82D84938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E3E4"))) PPC_WEAK_FUNC(sub_82D7E3E4);
PPC_FUNC_IMPL(__imp__sub_82D7E3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E3E8"))) PPC_WEAK_FUNC(sub_82D7E3E8);
PPC_FUNC_IMPL(__imp__sub_82D7E3E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e3f8
	if (!ctx.cr6.eq) goto loc_82D7E3F8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E3F8:
	// b 0x82d849a8
	sub_82D849A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E3FC"))) PPC_WEAK_FUNC(sub_82D7E3FC);
PPC_FUNC_IMPL(__imp__sub_82D7E3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E400"))) PPC_WEAK_FUNC(sub_82D7E400);
PPC_FUNC_IMPL(__imp__sub_82D7E400) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e410
	if (!ctx.cr6.eq) goto loc_82D7E410;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E410:
	// b 0x82d84a30
	sub_82D84A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E414"))) PPC_WEAK_FUNC(sub_82D7E414);
PPC_FUNC_IMPL(__imp__sub_82D7E414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E418"))) PPC_WEAK_FUNC(sub_82D7E418);
PPC_FUNC_IMPL(__imp__sub_82D7E418) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e428
	if (!ctx.cr6.eq) goto loc_82D7E428;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E428:
	// b 0x82d84a98
	sub_82D84A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E42C"))) PPC_WEAK_FUNC(sub_82D7E42C);
PPC_FUNC_IMPL(__imp__sub_82D7E42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E430"))) PPC_WEAK_FUNC(sub_82D7E430);
PPC_FUNC_IMPL(__imp__sub_82D7E430) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e440
	if (!ctx.cr6.eq) goto loc_82D7E440;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E440:
	// b 0x82d84b10
	sub_82D84B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E444"))) PPC_WEAK_FUNC(sub_82D7E444);
PPC_FUNC_IMPL(__imp__sub_82D7E444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E448"))) PPC_WEAK_FUNC(sub_82D7E448);
PPC_FUNC_IMPL(__imp__sub_82D7E448) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e458
	if (!ctx.cr6.eq) goto loc_82D7E458;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E458:
	// b 0x82d84b88
	sub_82D84B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E45C"))) PPC_WEAK_FUNC(sub_82D7E45C);
PPC_FUNC_IMPL(__imp__sub_82D7E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E460"))) PPC_WEAK_FUNC(sub_82D7E460);
PPC_FUNC_IMPL(__imp__sub_82D7E460) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e470
	if (!ctx.cr6.eq) goto loc_82D7E470;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E470:
	// b 0x82d84c10
	sub_82D84C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E474"))) PPC_WEAK_FUNC(sub_82D7E474);
PPC_FUNC_IMPL(__imp__sub_82D7E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E478"))) PPC_WEAK_FUNC(sub_82D7E478);
PPC_FUNC_IMPL(__imp__sub_82D7E478) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e488
	if (!ctx.cr6.eq) goto loc_82D7E488;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E488:
	// b 0x82d84c78
	sub_82D84C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E48C"))) PPC_WEAK_FUNC(sub_82D7E48C);
PPC_FUNC_IMPL(__imp__sub_82D7E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E490"))) PPC_WEAK_FUNC(sub_82D7E490);
PPC_FUNC_IMPL(__imp__sub_82D7E490) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e4a0
	if (!ctx.cr6.eq) goto loc_82D7E4A0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E4A0:
	// b 0x82d84cf0
	sub_82D84CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E4A4"))) PPC_WEAK_FUNC(sub_82D7E4A4);
PPC_FUNC_IMPL(__imp__sub_82D7E4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E4A8"))) PPC_WEAK_FUNC(sub_82D7E4A8);
PPC_FUNC_IMPL(__imp__sub_82D7E4A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e4b8
	if (!ctx.cr6.eq) goto loc_82D7E4B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E4B8:
	// b 0x82d84d68
	sub_82D84D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E4BC"))) PPC_WEAK_FUNC(sub_82D7E4BC);
PPC_FUNC_IMPL(__imp__sub_82D7E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E4C0"))) PPC_WEAK_FUNC(sub_82D7E4C0);
PPC_FUNC_IMPL(__imp__sub_82D7E4C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e4d0
	if (!ctx.cr6.eq) goto loc_82D7E4D0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E4D0:
	// b 0x82d84de0
	sub_82D84DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E4D4"))) PPC_WEAK_FUNC(sub_82D7E4D4);
PPC_FUNC_IMPL(__imp__sub_82D7E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E4D8"))) PPC_WEAK_FUNC(sub_82D7E4D8);
PPC_FUNC_IMPL(__imp__sub_82D7E4D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e4e8
	if (!ctx.cr6.eq) goto loc_82D7E4E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E4E8:
	// b 0x82d84e58
	sub_82D84E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E4EC"))) PPC_WEAK_FUNC(sub_82D7E4EC);
PPC_FUNC_IMPL(__imp__sub_82D7E4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E4F0"))) PPC_WEAK_FUNC(sub_82D7E4F0);
PPC_FUNC_IMPL(__imp__sub_82D7E4F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e500
	if (!ctx.cr6.eq) goto loc_82D7E500;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E500:
	// b 0x82d84ed0
	sub_82D84ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E504"))) PPC_WEAK_FUNC(sub_82D7E504);
PPC_FUNC_IMPL(__imp__sub_82D7E504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E508"))) PPC_WEAK_FUNC(sub_82D7E508);
PPC_FUNC_IMPL(__imp__sub_82D7E508) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e518
	if (!ctx.cr6.eq) goto loc_82D7E518;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E518:
	// b 0x82d84f48
	sub_82D84F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E51C"))) PPC_WEAK_FUNC(sub_82D7E51C);
PPC_FUNC_IMPL(__imp__sub_82D7E51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E520"))) PPC_WEAK_FUNC(sub_82D7E520);
PPC_FUNC_IMPL(__imp__sub_82D7E520) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e530
	if (!ctx.cr6.eq) goto loc_82D7E530;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E530:
	// b 0x82d84fc0
	sub_82D84FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E534"))) PPC_WEAK_FUNC(sub_82D7E534);
PPC_FUNC_IMPL(__imp__sub_82D7E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E538"))) PPC_WEAK_FUNC(sub_82D7E538);
PPC_FUNC_IMPL(__imp__sub_82D7E538) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e548
	if (!ctx.cr6.eq) goto loc_82D7E548;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E548:
	// b 0x82d85030
	sub_82D85030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E54C"))) PPC_WEAK_FUNC(sub_82D7E54C);
PPC_FUNC_IMPL(__imp__sub_82D7E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E550"))) PPC_WEAK_FUNC(sub_82D7E550);
PPC_FUNC_IMPL(__imp__sub_82D7E550) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e560
	if (!ctx.cr6.eq) goto loc_82D7E560;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E560:
	// b 0x82d850a8
	sub_82D850A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E564"))) PPC_WEAK_FUNC(sub_82D7E564);
PPC_FUNC_IMPL(__imp__sub_82D7E564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E568"))) PPC_WEAK_FUNC(sub_82D7E568);
PPC_FUNC_IMPL(__imp__sub_82D7E568) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e578
	if (!ctx.cr6.eq) goto loc_82D7E578;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E578:
	// b 0x82d85120
	sub_82D85120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E57C"))) PPC_WEAK_FUNC(sub_82D7E57C);
PPC_FUNC_IMPL(__imp__sub_82D7E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E580"))) PPC_WEAK_FUNC(sub_82D7E580);
PPC_FUNC_IMPL(__imp__sub_82D7E580) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e5b4
	if (!ctx.cr6.eq) goto loc_82D7E5B4;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7E5B4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82d85188
	ctx.lr = 0x82D7E5BC;
	sub_82D85188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7e5e0
	if (!ctx.cr6.eq) goto loc_82D7E5E0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7e5e0
	if (ctx.cr6.eq) goto loc_82D7E5E0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7E5E0:
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

__attribute__((alias("__imp__sub_82D7E5F4"))) PPC_WEAK_FUNC(sub_82D7E5F4);
PPC_FUNC_IMPL(__imp__sub_82D7E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E5F8"))) PPC_WEAK_FUNC(sub_82D7E5F8);
PPC_FUNC_IMPL(__imp__sub_82D7E5F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e608
	if (!ctx.cr6.eq) goto loc_82D7E608;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E608:
	// b 0x82d851d8
	sub_82D851D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E60C"))) PPC_WEAK_FUNC(sub_82D7E60C);
PPC_FUNC_IMPL(__imp__sub_82D7E60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E610"))) PPC_WEAK_FUNC(sub_82D7E610);
PPC_FUNC_IMPL(__imp__sub_82D7E610) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e620
	if (!ctx.cr6.eq) goto loc_82D7E620;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E620:
	// b 0x82d85240
	sub_82D85240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E624"))) PPC_WEAK_FUNC(sub_82D7E624);
PPC_FUNC_IMPL(__imp__sub_82D7E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E628"))) PPC_WEAK_FUNC(sub_82D7E628);
PPC_FUNC_IMPL(__imp__sub_82D7E628) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e638
	if (!ctx.cr6.eq) goto loc_82D7E638;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E638:
	// b 0x82d852b8
	sub_82D852B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E63C"))) PPC_WEAK_FUNC(sub_82D7E63C);
PPC_FUNC_IMPL(__imp__sub_82D7E63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E640"))) PPC_WEAK_FUNC(sub_82D7E640);
PPC_FUNC_IMPL(__imp__sub_82D7E640) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e650
	if (!ctx.cr6.eq) goto loc_82D7E650;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E650:
	// b 0x82d85330
	sub_82D85330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E654"))) PPC_WEAK_FUNC(sub_82D7E654);
PPC_FUNC_IMPL(__imp__sub_82D7E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E658"))) PPC_WEAK_FUNC(sub_82D7E658);
PPC_FUNC_IMPL(__imp__sub_82D7E658) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e668
	if (!ctx.cr6.eq) goto loc_82D7E668;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E668:
	// b 0x82d853a8
	sub_82D853A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E66C"))) PPC_WEAK_FUNC(sub_82D7E66C);
PPC_FUNC_IMPL(__imp__sub_82D7E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E670"))) PPC_WEAK_FUNC(sub_82D7E670);
PPC_FUNC_IMPL(__imp__sub_82D7E670) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e680
	if (!ctx.cr6.eq) goto loc_82D7E680;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E680:
	// b 0x82d85420
	sub_82D85420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E684"))) PPC_WEAK_FUNC(sub_82D7E684);
PPC_FUNC_IMPL(__imp__sub_82D7E684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E688"))) PPC_WEAK_FUNC(sub_82D7E688);
PPC_FUNC_IMPL(__imp__sub_82D7E688) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e698
	if (!ctx.cr6.eq) goto loc_82D7E698;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E698:
	// b 0x82d85498
	sub_82D85498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E69C"))) PPC_WEAK_FUNC(sub_82D7E69C);
PPC_FUNC_IMPL(__imp__sub_82D7E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E6A0"))) PPC_WEAK_FUNC(sub_82D7E6A0);
PPC_FUNC_IMPL(__imp__sub_82D7E6A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7e6b0
	if (!ctx.cr6.eq) goto loc_82D7E6B0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7E6B0:
	// b 0x82d85510
	sub_82D85510(ctx, base);
	return;
}

