#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FE5B28"))) PPC_WEAK_FUNC(sub_82FE5B28);
PPC_FUNC_IMPL(__imp__sub_82FE5B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5B38"))) PPC_WEAK_FUNC(sub_82FE5B38);
PPC_FUNC_IMPL(__imp__sub_82FE5B38) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5B40"))) PPC_WEAK_FUNC(sub_82FE5B40);
PPC_FUNC_IMPL(__imp__sub_82FE5B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5B48"))) PPC_WEAK_FUNC(sub_82FE5B48);
PPC_FUNC_IMPL(__imp__sub_82FE5B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5B50"))) PPC_WEAK_FUNC(sub_82FE5B50);
PPC_FUNC_IMPL(__imp__sub_82FE5B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5B58"))) PPC_WEAK_FUNC(sub_82FE5B58);
PPC_FUNC_IMPL(__imp__sub_82FE5B58) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5B60"))) PPC_WEAK_FUNC(sub_82FE5B60);
PPC_FUNC_IMPL(__imp__sub_82FE5B60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5B68"))) PPC_WEAK_FUNC(sub_82FE5B68);
PPC_FUNC_IMPL(__imp__sub_82FE5B68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5B70"))) PPC_WEAK_FUNC(sub_82FE5B70);
PPC_FUNC_IMPL(__imp__sub_82FE5B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5B80"))) PPC_WEAK_FUNC(sub_82FE5B80);
PPC_FUNC_IMPL(__imp__sub_82FE5B80) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5B88"))) PPC_WEAK_FUNC(sub_82FE5B88);
PPC_FUNC_IMPL(__imp__sub_82FE5B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5B98"))) PPC_WEAK_FUNC(sub_82FE5B98);
PPC_FUNC_IMPL(__imp__sub_82FE5B98) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BA0"))) PPC_WEAK_FUNC(sub_82FE5BA0);
PPC_FUNC_IMPL(__imp__sub_82FE5BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BA8"))) PPC_WEAK_FUNC(sub_82FE5BA8);
PPC_FUNC_IMPL(__imp__sub_82FE5BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BB0"))) PPC_WEAK_FUNC(sub_82FE5BB0);
PPC_FUNC_IMPL(__imp__sub_82FE5BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BB8"))) PPC_WEAK_FUNC(sub_82FE5BB8);
PPC_FUNC_IMPL(__imp__sub_82FE5BB8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BC0"))) PPC_WEAK_FUNC(sub_82FE5BC0);
PPC_FUNC_IMPL(__imp__sub_82FE5BC0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BC8"))) PPC_WEAK_FUNC(sub_82FE5BC8);
PPC_FUNC_IMPL(__imp__sub_82FE5BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BD0"))) PPC_WEAK_FUNC(sub_82FE5BD0);
PPC_FUNC_IMPL(__imp__sub_82FE5BD0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BD8"))) PPC_WEAK_FUNC(sub_82FE5BD8);
PPC_FUNC_IMPL(__imp__sub_82FE5BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BE0"))) PPC_WEAK_FUNC(sub_82FE5BE0);
PPC_FUNC_IMPL(__imp__sub_82FE5BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BE8"))) PPC_WEAK_FUNC(sub_82FE5BE8);
PPC_FUNC_IMPL(__imp__sub_82FE5BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BF0"))) PPC_WEAK_FUNC(sub_82FE5BF0);
PPC_FUNC_IMPL(__imp__sub_82FE5BF0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5BF8"))) PPC_WEAK_FUNC(sub_82FE5BF8);
PPC_FUNC_IMPL(__imp__sub_82FE5BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C00"))) PPC_WEAK_FUNC(sub_82FE5C00);
PPC_FUNC_IMPL(__imp__sub_82FE5C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C08"))) PPC_WEAK_FUNC(sub_82FE5C08);
PPC_FUNC_IMPL(__imp__sub_82FE5C08) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C10"))) PPC_WEAK_FUNC(sub_82FE5C10);
PPC_FUNC_IMPL(__imp__sub_82FE5C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C18"))) PPC_WEAK_FUNC(sub_82FE5C18);
PPC_FUNC_IMPL(__imp__sub_82FE5C18) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C20"))) PPC_WEAK_FUNC(sub_82FE5C20);
PPC_FUNC_IMPL(__imp__sub_82FE5C20) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C28"))) PPC_WEAK_FUNC(sub_82FE5C28);
PPC_FUNC_IMPL(__imp__sub_82FE5C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C30"))) PPC_WEAK_FUNC(sub_82FE5C30);
PPC_FUNC_IMPL(__imp__sub_82FE5C30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C38"))) PPC_WEAK_FUNC(sub_82FE5C38);
PPC_FUNC_IMPL(__imp__sub_82FE5C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C40"))) PPC_WEAK_FUNC(sub_82FE5C40);
PPC_FUNC_IMPL(__imp__sub_82FE5C40) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C48"))) PPC_WEAK_FUNC(sub_82FE5C48);
PPC_FUNC_IMPL(__imp__sub_82FE5C48) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C50"))) PPC_WEAK_FUNC(sub_82FE5C50);
PPC_FUNC_IMPL(__imp__sub_82FE5C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C58"))) PPC_WEAK_FUNC(sub_82FE5C58);
PPC_FUNC_IMPL(__imp__sub_82FE5C58) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C60"))) PPC_WEAK_FUNC(sub_82FE5C60);
PPC_FUNC_IMPL(__imp__sub_82FE5C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C68"))) PPC_WEAK_FUNC(sub_82FE5C68);
PPC_FUNC_IMPL(__imp__sub_82FE5C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C78"))) PPC_WEAK_FUNC(sub_82FE5C78);
PPC_FUNC_IMPL(__imp__sub_82FE5C78) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C80"))) PPC_WEAK_FUNC(sub_82FE5C80);
PPC_FUNC_IMPL(__imp__sub_82FE5C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C88"))) PPC_WEAK_FUNC(sub_82FE5C88);
PPC_FUNC_IMPL(__imp__sub_82FE5C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C90"))) PPC_WEAK_FUNC(sub_82FE5C90);
PPC_FUNC_IMPL(__imp__sub_82FE5C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5C98"))) PPC_WEAK_FUNC(sub_82FE5C98);
PPC_FUNC_IMPL(__imp__sub_82FE5C98) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5CA0"))) PPC_WEAK_FUNC(sub_82FE5CA0);
PPC_FUNC_IMPL(__imp__sub_82FE5CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f9,f13,f10,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5CE4"))) PPC_WEAK_FUNC(sub_82FE5CE4);
PPC_FUNC_IMPL(__imp__sub_82FE5CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE5CE8"))) PPC_WEAK_FUNC(sub_82FE5CE8);
PPC_FUNC_IMPL(__imp__sub_82FE5CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lfs f0,18836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5D10"))) PPC_WEAK_FUNC(sub_82FE5D10);
PPC_FUNC_IMPL(__imp__sub_82FE5D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6ae0
	ctx.lr = 0x82FE5D24;
	__savefpr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f26,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f26.f64 = double(temp.f32);
	// lfs f0,18836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18836);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// bge cr6,0x82fe5d58
	if (!ctx.cr6.lt) goto loc_82FE5D58;
	// fdivs f28,f13,f31
	ctx.f28.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// b 0x82fe5d5c
	goto loc_82FE5D5C;
loc_82FE5D58:
	// fmr f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f0.f64;
loc_82FE5D5C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fsubs f13,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,22080(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// lfd f30,-16744(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16744);
	// lfs f0,6708(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fdiv f8,f10,f11
	ctx.f8.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f27,f8
	ctx.f27.f64 = double(float(ctx.f8.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82FE5D9C;
	sub_82CB59B0(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfd f29,-18360(r8)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18360);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE5DB0;
	sub_82CB59B0(ctx, base);
	// fmuls f7,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f0,10764(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10764);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82FE5DCC;
	sub_82CB59B0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE5DDC;
	sub_82CB59B0(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,22072(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22072);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82fe5e54
	if (!ctx.cr6.lt) goto loc_82FE5E54;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82cb4940
	ctx.lr = 0x82FE5DFC;
	sub_82CB4940(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f11,f31,f31
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f0,-18352(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// lfd f13,-18376(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18376);
	// fsub f10,f0,f31
	ctx.f10.f64 = ctx.f0.f64 - ctx.f31.f64;
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsub f8,f0,f12
	ctx.f8.f64 = ctx.f0.f64 - ctx.f12.f64;
	// fmuls f7,f12,f31
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fsub f5,f0,f9
	ctx.f5.f64 = ctx.f0.f64 - ctx.f9.f64;
	// fmul f4,f8,f31
	ctx.f4.f64 = ctx.f8.f64 * ctx.f31.f64;
	// fsub f3,f0,f7
	ctx.f3.f64 = ctx.f0.f64 - ctx.f7.f64;
	// fmul f2,f5,f11
	ctx.f2.f64 = ctx.f5.f64 * ctx.f11.f64;
	// fmsub f1,f4,f13,f2
	ctx.f1.f64 = ctx.f4.f64 * ctx.f13.f64 - ctx.f2.f64;
	// fsqrt f0,f1
	ctx.f0.f64 = sqrt(ctx.f1.f64);
	// fsub f13,f3,f0
	ctx.f13.f64 = ctx.f3.f64 - ctx.f0.f64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f12,f6
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f6.f64));
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x82fe5e58
	goto loc_82FE5E58;
loc_82FE5E54:
	// stfs f26,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82FE5E58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b2c
	ctx.lr = 0x82FE5E64;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5E74"))) PPC_WEAK_FUNC(sub_82FE5E74);
PPC_FUNC_IMPL(__imp__sub_82FE5E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE5E78"))) PPC_WEAK_FUNC(sub_82FE5E78);
PPC_FUNC_IMPL(__imp__sub_82FE5E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,2048
	ctx.r10.s64 = 2048;
loc_82FE5E80:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82fe5e80
	if (!ctx.cr0.eq) goto loc_82FE5E80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5ED8"))) PPC_WEAK_FUNC(sub_82FE5ED8);
PPC_FUNC_IMPL(__imp__sub_82FE5ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,64
	ctx.r10.s64 = 64;
loc_82FE5EE0:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82fe5ee0
	if (!ctx.cr0.eq) goto loc_82FE5EE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5F38"))) PPC_WEAK_FUNC(sub_82FE5F38);
PPC_FUNC_IMPL(__imp__sub_82FE5F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82FE5F40:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82fe5f40
	if (!ctx.cr0.eq) goto loc_82FE5F40;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5F98"))) PPC_WEAK_FUNC(sub_82FE5F98);
PPC_FUNC_IMPL(__imp__sub_82FE5F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,256
	ctx.r10.s64 = 256;
loc_82FE5FA0:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82fe5fa0
	if (!ctx.cr0.eq) goto loc_82FE5FA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE5FF8"))) PPC_WEAK_FUNC(sub_82FE5FF8);
PPC_FUNC_IMPL(__imp__sub_82FE5FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,32
	ctx.r10.s64 = 32;
loc_82FE6000:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82fe6000
	if (!ctx.cr0.eq) goto loc_82FE6000;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE6058"))) PPC_WEAK_FUNC(sub_82FE6058);
PPC_FUNC_IMPL(__imp__sub_82FE6058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82FE6060:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82fe6060
	if (!ctx.cr0.eq) goto loc_82FE6060;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE60B8"))) PPC_WEAK_FUNC(sub_82FE60B8);
PPC_FUNC_IMPL(__imp__sub_82FE60B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,512
	ctx.r10.s64 = 512;
loc_82FE60C0:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82fe60c0
	if (!ctx.cr0.eq) goto loc_82FE60C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE6118"))) PPC_WEAK_FUNC(sub_82FE6118);
PPC_FUNC_IMPL(__imp__sub_82FE6118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE611C"))) PPC_WEAK_FUNC(sub_82FE611C);
PPC_FUNC_IMPL(__imp__sub_82FE611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6120"))) PPC_WEAK_FUNC(sub_82FE6120);
PPC_FUNC_IMPL(__imp__sub_82FE6120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE6124"))) PPC_WEAK_FUNC(sub_82FE6124);
PPC_FUNC_IMPL(__imp__sub_82FE6124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6128"))) PPC_WEAK_FUNC(sub_82FE6128);
PPC_FUNC_IMPL(__imp__sub_82FE6128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE612C"))) PPC_WEAK_FUNC(sub_82FE612C);
PPC_FUNC_IMPL(__imp__sub_82FE612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6130"))) PPC_WEAK_FUNC(sub_82FE6130);
PPC_FUNC_IMPL(__imp__sub_82FE6130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE6134"))) PPC_WEAK_FUNC(sub_82FE6134);
PPC_FUNC_IMPL(__imp__sub_82FE6134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6138"))) PPC_WEAK_FUNC(sub_82FE6138);
PPC_FUNC_IMPL(__imp__sub_82FE6138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE6148"))) PPC_WEAK_FUNC(sub_82FE6148);
PPC_FUNC_IMPL(__imp__sub_82FE6148) {
	PPC_FUNC_PROLOGUE();
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE6150"))) PPC_WEAK_FUNC(sub_82FE6150);
PPC_FUNC_IMPL(__imp__sub_82FE6150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE6164"))) PPC_WEAK_FUNC(sub_82FE6164);
PPC_FUNC_IMPL(__imp__sub_82FE6164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6168"))) PPC_WEAK_FUNC(sub_82FE6168);
PPC_FUNC_IMPL(__imp__sub_82FE6168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82fe617c
	if (!ctx.cr6.eq) goto loc_82FE617C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82fe61b0
	goto loc_82FE61B0;
loc_82FE617C:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lfs f13,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,6480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_82FE61B0:
	// addis r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 327680;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,-20080
	ctx.r11.s64 = ctx.r11.s64 + -20080;
	// lfs f0,18836(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18836);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82fe61dc
	if (!ctx.cr6.eq) goto loc_82FE61DC;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82FE61DC:
	// addis r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 327680;
	// addi r11,r11,-19024
	ctx.r11.s64 = ctx.r11.s64 + -19024;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE6204"))) PPC_WEAK_FUNC(sub_82FE6204);
PPC_FUNC_IMPL(__imp__sub_82FE6204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6208"))) PPC_WEAK_FUNC(sub_82FE6208);
PPC_FUNC_IMPL(__imp__sub_82FE6208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,18820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x82fe5d10
	ctx.lr = 0x82FE624C;
	sub_82FE5D10(ctx, base);
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

__attribute__((alias("__imp__sub_82FE6264"))) PPC_WEAK_FUNC(sub_82FE6264);
PPC_FUNC_IMPL(__imp__sub_82FE6264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6268"))) PPC_WEAK_FUNC(sub_82FE6268);
PPC_FUNC_IMPL(__imp__sub_82FE6268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// b 0x82fe5d10
	sub_82FE5D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE6270"))) PPC_WEAK_FUNC(sub_82FE6270);
PPC_FUNC_IMPL(__imp__sub_82FE6270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x82fe5d10
	sub_82FE5D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE6278"))) PPC_WEAK_FUNC(sub_82FE6278);
PPC_FUNC_IMPL(__imp__sub_82FE6278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82fe5d10
	sub_82FE5D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE6280"))) PPC_WEAK_FUNC(sub_82FE6280);
PPC_FUNC_IMPL(__imp__sub_82FE6280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82fe5d10
	sub_82FE5D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE6288"))) PPC_WEAK_FUNC(sub_82FE6288);
PPC_FUNC_IMPL(__imp__sub_82FE6288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lfs f0,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE62AC"))) PPC_WEAK_FUNC(sub_82FE62AC);
PPC_FUNC_IMPL(__imp__sub_82FE62AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE62B0"))) PPC_WEAK_FUNC(sub_82FE62B0);
PPC_FUNC_IMPL(__imp__sub_82FE62B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE62DC"))) PPC_WEAK_FUNC(sub_82FE62DC);
PPC_FUNC_IMPL(__imp__sub_82FE62DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE62E0"))) PPC_WEAK_FUNC(sub_82FE62E0);
PPC_FUNC_IMPL(__imp__sub_82FE62E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lfs f0,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE6308"))) PPC_WEAK_FUNC(sub_82FE6308);
PPC_FUNC_IMPL(__imp__sub_82FE6308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lfs f0,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE632C"))) PPC_WEAK_FUNC(sub_82FE632C);
PPC_FUNC_IMPL(__imp__sub_82FE632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6330"))) PPC_WEAK_FUNC(sub_82FE6330);
PPC_FUNC_IMPL(__imp__sub_82FE6330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lfs f0,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE6358"))) PPC_WEAK_FUNC(sub_82FE6358);
PPC_FUNC_IMPL(__imp__sub_82FE6358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fe5e78
	ctx.lr = 0x82FE637C;
	sub_82FE5E78(ctx, base);
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

__attribute__((alias("__imp__sub_82FE6394"))) PPC_WEAK_FUNC(sub_82FE6394);
PPC_FUNC_IMPL(__imp__sub_82FE6394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6398"))) PPC_WEAK_FUNC(sub_82FE6398);
PPC_FUNC_IMPL(__imp__sub_82FE6398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE63BC;
	sub_82FE5ED8(ctx, base);
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

__attribute__((alias("__imp__sub_82FE63D4"))) PPC_WEAK_FUNC(sub_82FE63D4);
PPC_FUNC_IMPL(__imp__sub_82FE63D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE63D8"))) PPC_WEAK_FUNC(sub_82FE63D8);
PPC_FUNC_IMPL(__imp__sub_82FE63D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fe5f38
	ctx.lr = 0x82FE63FC;
	sub_82FE5F38(ctx, base);
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

__attribute__((alias("__imp__sub_82FE6414"))) PPC_WEAK_FUNC(sub_82FE6414);
PPC_FUNC_IMPL(__imp__sub_82FE6414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6418"))) PPC_WEAK_FUNC(sub_82FE6418);
PPC_FUNC_IMPL(__imp__sub_82FE6418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE643C;
	sub_82FE5F98(ctx, base);
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

__attribute__((alias("__imp__sub_82FE6454"))) PPC_WEAK_FUNC(sub_82FE6454);
PPC_FUNC_IMPL(__imp__sub_82FE6454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6458"))) PPC_WEAK_FUNC(sub_82FE6458);
PPC_FUNC_IMPL(__imp__sub_82FE6458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fe5ff8
	ctx.lr = 0x82FE647C;
	sub_82FE5FF8(ctx, base);
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

__attribute__((alias("__imp__sub_82FE6494"))) PPC_WEAK_FUNC(sub_82FE6494);
PPC_FUNC_IMPL(__imp__sub_82FE6494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6498"))) PPC_WEAK_FUNC(sub_82FE6498);
PPC_FUNC_IMPL(__imp__sub_82FE6498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fe6058
	ctx.lr = 0x82FE64BC;
	sub_82FE6058(ctx, base);
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

__attribute__((alias("__imp__sub_82FE64D4"))) PPC_WEAK_FUNC(sub_82FE64D4);
PPC_FUNC_IMPL(__imp__sub_82FE64D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE64D8"))) PPC_WEAK_FUNC(sub_82FE64D8);
PPC_FUNC_IMPL(__imp__sub_82FE64D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fe60b8
	ctx.lr = 0x82FE64FC;
	sub_82FE60B8(ctx, base);
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

__attribute__((alias("__imp__sub_82FE6514"))) PPC_WEAK_FUNC(sub_82FE6514);
PPC_FUNC_IMPL(__imp__sub_82FE6514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE6518"))) PPC_WEAK_FUNC(sub_82FE6518);
PPC_FUNC_IMPL(__imp__sub_82FE6518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82FE6520;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ab0
	ctx.lr = 0x82FE6528;
	__savefpr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FE6540;
	sub_82CB1160(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f14,6480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6480);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,96(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x82fe6560
	if (!ctx.cr6.eq) goto loc_82FE6560;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fe658c
	goto loc_82FE658C;
loc_82FE6560:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f9,f10,f14
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f14.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82FE658C:
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6590;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,4095
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4095, ctx.xer);
	// ble cr6,0x82fe659c
	if (!ctx.cr6.gt) goto loc_82FE659C;
	// li r3,4095
	ctx.r3.s64 = 4095;
loc_82FE659C:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r6,r10,61380
	ctx.r6.u64 = ctx.r10.u64 | 61380;
	// ori r7,r11,40712
	ctx.r7.u64 = ctx.r11.u64 | 40712;
	// ori r5,r9,41056
	ctx.r5.u64 = ctx.r9.u64 | 41056;
	// ori r4,r8,20736
	ctx.r4.u64 = ctx.r8.u64 | 20736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stwx r3,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r3.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stwx r3,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// stwx r3,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r3.u32);
	// stwx r3,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r3.u32);
	// lfs f0,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,9904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9904);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r11,18864
	ctx.r31.s64 = ctx.r11.s64 + 18864;
	// lfs f15,18836(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18836);
	ctx.f15.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// stfs f15,80(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// blt cr6,0x82fe6620
	if (ctx.cr6.lt) goto loc_82FE6620;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,7712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,22172(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7644(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7644);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f25,f9,f13
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// b 0x82fe6658
	goto loc_82FE6658;
loc_82FE6620:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,16388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16388);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f0,f13,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,7712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7712);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,22172(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22172);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,7644(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7644);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f25,f7,f12
	ctx.f25.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
loc_82FE6658:
	// fcmpu cr6,f25,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// bge cr6,0x82fe6664
	if (!ctx.cr6.lt) goto loc_82FE6664;
	// fmr f25,f0
	ctx.f25.f64 = ctx.f0.f64;
loc_82FE6664:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f25,f13
	ctx.f30.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82fe6680
	if (!ctx.cr6.lt) goto loc_82FE6680;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x82fe668c
	goto loc_82FE668C;
loc_82FE6680:
	// fcmpu cr6,f30,f15
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f15.f64);
	// ble cr6,0x82fe668c
	if (!ctx.cr6.gt) goto loc_82FE668C;
	// fmr f30,f15
	ctx.f30.f64 = ctx.f15.f64;
loc_82FE668C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16936(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16936);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82fe66c0
	if (ctx.cr6.lt) goto loc_82FE66C0;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f29,f15
	ctx.f29.f64 = ctx.f15.f64;
	// fmr f28,f15
	ctx.f28.f64 = ctx.f15.f64;
	// fmr f27,f15
	ctx.f27.f64 = ctx.f15.f64;
	// lfs f0,-16908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16908);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82fe6728
	goto loc_82FE6728;
loc_82FE66C0:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// blt cr6,0x82fe66ec
	if (ctx.cr6.lt) goto loc_82FE66EC;
	// fsubs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-16908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16908);
	ctx.f0.f64 = double(temp.f32);
	// fmr f28,f15
	ctx.f28.f64 = ctx.f15.f64;
	// fmr f27,f15
	ctx.f27.f64 = ctx.f15.f64;
	// lfs f31,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82fe6728
	goto loc_82FE6728;
loc_82FE66EC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18072);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f31,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// blt cr6,0x82fe671c
	if (ctx.cr6.lt) goto loc_82FE671C;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-16908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16908);
	ctx.f0.f64 = double(temp.f32);
	// fmr f27,f15
	ctx.f27.f64 = ctx.f15.f64;
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82fe6728
	goto loc_82FE6728;
loc_82FE671C:
	// lfs f13,-16908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16908);
	ctx.f13.f64 = double(temp.f32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmuls f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82FE6728:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,22168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6748;
	sub_82FE90E0(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,240
	ctx.r8.u64 = ctx.r10.u64 | 240;
	// ori r7,r9,252
	ctx.r7.u64 = ctx.r9.u64 | 252;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stwx r3,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r3.u32);
	// stwx r6,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r6.u32);
	// lfs f0,22164(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 22164);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6780;
	sub_82FE90E0(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r4,2868
	ctx.r10.u64 = ctx.r4.u64 | 2868;
	// ori r9,r11,2880
	ctx.r9.u64 = ctx.r11.u64 | 2880;
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r8,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subfic r6,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r5,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,28,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC0F;
	// addi r11,r11,1020
	ctx.r11.s64 = ctx.r11.s64 + 1020;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f10,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fe90e0
	ctx.lr = 0x82FE67E0;
	sub_82FE90E0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,14224
	ctx.r10.u64 = ctx.r11.u64 | 14224;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fe90e0
	ctx.lr = 0x82FE67F4;
	sub_82FE90E0(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r9,18360
	ctx.r7.u64 = ctx.r9.u64 | 18360;
	// ori r6,r8,18372
	ctx.r6.u64 = ctx.r8.u64 | 18372;
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stwx r3,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// stwx r5,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// lfs f0,22160(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 22160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f30,f0
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f5.f64));
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE682C;
	sub_82FE90E0(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,20988
	ctx.r8.u64 = ctx.r10.u64 | 20988;
	// ori r7,r9,21000
	ctx.r7.u64 = ctx.r9.u64 | 21000;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r6,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6854;
	sub_82FE90E0(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmuls f26,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// ori r11,r5,32344
	ctx.r11.u64 = ctx.r5.u64 | 32344;
	// lfs f0,22156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 22156);
	ctx.f0.f64 = double(temp.f32);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// fmuls f3,f26,f0
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f3.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6880;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe688c
	if (!ctx.cr6.eq) goto loc_82FE688C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE688C:
	// addis r16,r30,3
	ctx.r16.s64 = ctx.r30.s64 + 196608;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r16,r16,-29064
	ctx.r16.s64 = ctx.r16.s64 + -29064;
	// addis r15,r30,3
	ctx.r15.s64 = ctx.r30.s64 + 196608;
	// addi r15,r15,-26992
	ctx.r15.s64 = ctx.r15.s64 + -26992;
	// lfs f0,22152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22152);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r3.u32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE68BC;
	sub_82FE90E0(ctx, base);
	// fmuls f12,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f25.f64));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r3.u32);
	// lfs f0,22148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE68E0;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe68ec
	if (!ctx.cr6.eq) goto loc_82FE68EC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE68EC:
	// addis r14,r30,3
	ctx.r14.s64 = ctx.r30.s64 + 196608;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r14,r14,-24836
	ctx.r14.s64 = ctx.r14.s64 + -24836;
	// lfs f0,22144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22144);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r3.u32);
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6914;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe6920
	if (!ctx.cr6.eq) goto loc_82FE6920;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE6920:
	// addis r18,r30,3
	ctx.r18.s64 = ctx.r30.s64 + 196608;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r18,r18,-8396
	ctx.r18.s64 = ctx.r18.s64 + -8396;
	// addis r17,r30,3
	ctx.r17.s64 = ctx.r30.s64 + 196608;
	// addi r17,r17,-6324
	ctx.r17.s64 = ctx.r17.s64 + -6324;
	// lfs f0,22140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22140);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r3.u32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6950;
	sub_82FE90E0(ctx, base);
	// fmuls f12,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r3.u32);
	// lfs f0,22136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6974;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe6980
	if (!ctx.cr6.eq) goto loc_82FE6980;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE6980:
	// addis r19,r30,3
	ctx.r19.s64 = ctx.r30.s64 + 196608;
	// fmuls f28,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r19,r19,-4168
	ctx.r19.s64 = ctx.r19.s64 + -4168;
	// lfs f0,22132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22132);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r3.u32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE69AC;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe69b8
	if (!ctx.cr6.eq) goto loc_82FE69B8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE69B8:
	// fmuls f31,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addis r20,r30,3
	ctx.r20.s64 = ctx.r30.s64 + 196608;
	// addi r20,r20,12272
	ctx.r20.s64 = ctx.r20.s64 + 12272;
	// lfs f0,22128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22128);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r3.u32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE69E4;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe69f0
	if (!ctx.cr6.eq) goto loc_82FE69F0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE69F0:
	// addis r22,r30,3
	ctx.r22.s64 = ctx.r30.s64 + 196608;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r22,r22,20488
	ctx.r22.s64 = ctx.r22.s64 + 20488;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addis r21,r30,3
	ctx.r21.s64 = ctx.r30.s64 + 196608;
	// addi r21,r21,28708
	ctx.r21.s64 = ctx.r21.s64 + 28708;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// lfs f0,22124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6A24;
	sub_82FE90E0(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
	// lfs f0,22120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f26,f0
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6A44;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe6a50
	if (!ctx.cr6.eq) goto loc_82FE6A50;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE6A50:
	// fmuls f13,f27,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f25.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addis r25,r30,4
	ctx.r25.s64 = ctx.r30.s64 + 262144;
	// addi r25,r25,-28612
	ctx.r25.s64 = ctx.r25.s64 + -28612;
	// lfs f0,22116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22116);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6A7C;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe6a88
	if (!ctx.cr6.eq) goto loc_82FE6A88;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE6A88:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addis r23,r30,4
	ctx.r23.s64 = ctx.r30.s64 + 262144;
	// addi r23,r23,-24492
	ctx.r23.s64 = ctx.r23.s64 + -24492;
	// lfs f0,22112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6AB0;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe6abc
	if (!ctx.cr6.eq) goto loc_82FE6ABC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE6ABC:
	// addis r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 262144;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r24,r24,-8048
	ctx.r24.s64 = ctx.r24.s64 + -8048;
	// lfs f0,22108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22108);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6AE4;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe6af0
	if (!ctx.cr6.eq) goto loc_82FE6AF0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE6AF0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addis r26,r30,4
	ctx.r26.s64 = ctx.r30.s64 + 262144;
	// addi r26,r26,168
	ctx.r26.s64 = ctx.r26.s64 + 168;
	// lfs f0,22104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6B18;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe6b24
	if (!ctx.cr6.eq) goto loc_82FE6B24;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE6B24:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addis r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 262144;
	// addis r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 262144;
	// addi r28,r28,8388
	ctx.r28.s64 = ctx.r28.s64 + 8388;
	// addi r27,r27,16604
	ctx.r27.s64 = ctx.r27.s64 + 16604;
	// lfs f0,22100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6B54;
	sub_82FE90E0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lfs f0,22096(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22096);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f25,f0
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE6B74;
	sub_82FE90E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fe6b80
	if (!ctx.cr6.eq) goto loc_82FE6B80;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE6B80:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ori r24,r8,20724
	ctx.r24.u64 = ctx.r8.u64 | 20724;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r7,0(r14)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lfd f30,-16744(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r4.u32 + -16744);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r6,0(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r5,0(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lfd f0,22088(r28)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r28.u32 + 22088);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r4,0(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,0(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r28,0(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r3,r30,r24
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r3.u32);
	// lfs f12,72(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// fdiv f7,f12,f8
	ctx.f7.f64 = ctx.f12.f64 / ctx.f8.f64;
	// fdiv f2,f0,f7
	ctx.f2.f64 = ctx.f0.f64 / ctx.f7.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE6C44;
	sub_82CB59B0(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,-18360(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18360);
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmul f6,f1,f0
	ctx.f6.f64 = ctx.f1.f64 * ctx.f0.f64;
	// lfs f0,13184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7508(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7508);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,6380(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6380);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,888
	ctx.r11.s64 = ctx.r31.s64 + 888;
	// addi r10,r31,376
	ctx.r10.s64 = ctx.r31.s64 + 376;
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// addi r8,r31,504
	ctx.r8.s64 = ctx.r31.s64 + 504;
	// addi r7,r31,632
	ctx.r7.s64 = ctx.r31.s64 + 632;
	// addi r5,r31,760
	ctx.r5.s64 = ctx.r31.s64 + 760;
	// lfsx f28,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f28.f64 = double(temp.f32);
	// addi r4,r31,504
	ctx.r4.s64 = ctx.r31.s64 + 504;
	// lfsx f5,r3,r10
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r3,r9
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsqrts f12,f6
	ctx.f12.f64 = double(float(sqrt(ctx.f6.f64)));
	// lfsx f1,r28,r8
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f25,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f25.f64 = double(temp.f32);
	// lfsx f24,r28,r5
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	ctx.f24.f64 = double(temp.f32);
	// lfsx f23,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f23.f64 = double(temp.f32);
	// fnmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r7,r31,376
	ctx.r7.s64 = ctx.r31.s64 + 376;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r24,r31,192
	ctx.r24.s64 = ctx.r31.s64 + 192;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,36(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f8,f5,f13
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfsx f10,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfsx f9,r5,r24
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r31,888
	ctx.r7.s64 = ctx.r31.s64 + 888;
	// fmuls f21,f4,f13
	ctx.f21.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// addi r23,r31,760
	ctx.r23.s64 = ctx.r31.s64 + 760;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f17,f9,f13
	ctx.f17.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f0,-16632(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16632);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f27,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f27.f64 = double(temp.f32);
	// addi r7,r31,632
	ctx.r7.s64 = ctx.r31.s64 + 632;
	// lfsx f10,r6,r23
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r31,1016
	ctx.r5.s64 = ctx.r31.s64 + 1016;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// fmuls f22,f28,f0
	ctx.f22.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// addi r6,r31,1536
	ctx.r6.s64 = ctx.r31.s64 + 1536;
	// fmuls f20,f8,f0
	ctx.f20.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// addi r24,r31,2056
	ctx.r24.s64 = ctx.r31.s64 + 2056;
	// fmuls f19,f7,f0
	ctx.f19.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfsx f16,r28,r7
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	ctx.f16.f64 = double(temp.f32);
	// addi r23,r31,2600
	ctx.r23.s64 = ctx.r31.s64 + 2600;
	// lfsx f5,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r22,r31,132
	ctx.r22.s64 = ctx.r31.s64 + 132;
	// lfsx f4,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r31,3144
	ctx.r7.s64 = ctx.r31.s64 + 3144;
	// lfsx f3,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r31,3144
	ctx.r5.s64 = ctx.r31.s64 + 3144;
	// rlwinm r3,r26,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f18,f27,f0
	ctx.f18.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f2,r8,r24
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f29,r8,r23
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfsx f26,r10,r22
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	ctx.f26.f64 = double(temp.f32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfsx f0,r3,r7
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f31,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82fe6dc0
	if (!ctx.cr6.eq) goto loc_82FE6DC0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82fe6dec
	goto loc_82FE6DEC;
loc_82FE6DC0:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f9,f14
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f14.f64));
	// fctidz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82FE6DEC:
	// addi r11,r30,104
	ctx.r11.s64 = ctx.r30.s64 + 104;
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bne cr6,0x82fe6e0c
	if (!ctx.cr6.eq) goto loc_82FE6E0C;
	// stfs f15,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82FE6E0C:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fe6e30
	if (!ctx.cr6.eq) goto loc_82FE6E30;
	// stfs f15,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82FE6E30:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// ori r5,r11,244
	ctx.r5.u64 = ctx.r11.u64 | 244;
	// fneg f15,f0
	ctx.f15.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// fneg f14,f31
	ctx.f14.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r3,r9,268
	ctx.r3.u64 = ctx.r9.u64 | 268;
	// ori r4,r10,256
	ctx.r4.u64 = ctx.r10.u64 | 256;
	// stfsx f13,r30,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// addi r11,r11,2332
	ctx.r11.s64 = ctx.r11.s64 + 2332;
	// ori r9,r7,2884
	ctx.r9.u64 = ctx.r7.u64 | 2884;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stfsx f1,r30,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// ori r10,r8,2872
	ctx.r10.u64 = ctx.r8.u64 | 2872;
	// stfsx f10,r30,r4
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// ori r8,r6,2896
	ctx.r8.u64 = ctx.r6.u64 | 2896;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f15,4(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stfsx f9,r30,r9
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r9,r9,11104
	ctx.r9.s64 = ctx.r9.s64 + 11104;
	// stfsx f13,r30,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// stfsx f22,r30,r8
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r8,r8,12152
	ctx.r8.s64 = ctx.r8.s64 + 12152;
	// ori r5,r5,232
	ctx.r5.u64 = ctx.r5.u64 | 232;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stfs f15,4(r9)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// ori r7,r7,14228
	ctx.r7.u64 = ctx.r7.u64 | 14228;
	// stfs f15,4(r8)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// ori r6,r6,14240
	ctx.r6.u64 = ctx.r6.u64 | 14240;
	// stfsx f25,r30,r5
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// lis r28,2
	ctx.r28.s64 = 131072;
	// ori r4,r4,236
	ctx.r4.u64 = ctx.r4.u64 | 236;
	// ori r3,r3,18364
	ctx.r3.u64 = ctx.r3.u64 | 18364;
	// stfsx f21,r30,r7
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// ori r11,r11,18376
	ctx.r11.u64 = ctx.r11.u64 | 18376;
	// stfsx f8,r30,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// ori r10,r10,18388
	ctx.r10.u64 = ctx.r10.u64 | 18388;
	// addi r9,r9,20452
	ctx.r9.s64 = ctx.r9.s64 + 20452;
	// ori r8,r28,20992
	ctx.r8.u64 = ctx.r28.u64 | 20992;
	// stfsx f24,r30,r4
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// lis r26,2
	ctx.r26.s64 = 131072;
	// stfsx f13,r30,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// lis r24,2
	ctx.r24.s64 = 131072;
	// stfsx f10,r30,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// addis r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 131072;
	// stfsx f23,r30,r10
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// ori r7,r26,21004
	ctx.r7.u64 = ctx.r26.u64 | 21004;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// ori r6,r24,21016
	ctx.r6.u64 = ctx.r24.u64 | 21016;
	// stfs f15,4(r9)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r5,r5,29224
	ctx.r5.s64 = ctx.r5.s64 + 29224;
	// stfsx f13,r30,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// stfsx f9,r30,r7
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stfsx f18,r30,r6
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfs f15,4(r5)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r8,30272
	ctx.r8.s64 = ctx.r8.s64 + 30272;
	// ori r7,r4,32348
	ctx.r7.u64 = ctx.r4.u64 | 32348;
	// ori r5,r11,18352
	ctx.r5.u64 = ctx.r11.u64 | 18352;
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// ori r6,r3,32360
	ctx.r6.u64 = ctx.r3.u64 | 32360;
	// stfs f15,4(r8)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// ori r4,r10,18356
	ctx.r4.u64 = ctx.r10.u64 | 18356;
	// stfsx f17,r30,r7
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// ori r3,r9,40620
	ctx.r3.u64 = ctx.r9.u64 | 40620;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfsx f16,r30,r5
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r5,r11,40644
	ctx.r5.u64 = ctx.r11.u64 | 40644;
	// stfsx f7,r30,r6
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfsx f0,r30,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stfs f31,8(r16)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r16.u32 + 8, temp.u32);
	// ori r11,r9,40652
	ctx.r11.u64 = ctx.r9.u64 | 40652;
	// stfs f14,4(r16)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r16.u32 + 4, temp.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stfs f31,8(r15)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r15.u32 + 8, temp.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stfs f14,4(r15)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r15.u32 + 4, temp.u32);
	// ori r4,r10,40648
	ctx.r4.u64 = ctx.r10.u64 | 40648;
	// stfsx f4,r30,r5
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// ori r10,r8,40680
	ctx.r10.u64 = ctx.r8.u64 | 40680;
	// stfsx f5,r30,r3
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// ori r9,r7,40684
	ctx.r9.u64 = ctx.r7.u64 | 40684;
	// stfsx f2,r30,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// ori r8,r6,57120
	ctx.r8.u64 = ctx.r6.u64 | 57120;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stfsx f3,r30,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stfsx f29,r30,r10
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// ori r7,r7,61288
	ctx.r7.u64 = ctx.r7.u64 | 61288;
	// stfsx f26,r30,r9
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// ori r6,r6,61312
	ctx.r6.u64 = ctx.r6.u64 | 61312;
	// stfsx f12,r30,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stfs f31,8(r18)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r18.u32 + 8, temp.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stfs f14,4(r18)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r18.u32 + 4, temp.u32);
	// ori r5,r5,61316
	ctx.r5.u64 = ctx.r5.u64 | 61316;
	// stfs f31,8(r17)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r17.u32 + 8, temp.u32);
	// ori r3,r3,61320
	ctx.r3.u64 = ctx.r3.u64 | 61320;
	// stfs f14,4(r17)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r17.u32 + 4, temp.u32);
	// ori r11,r11,61348
	ctx.r11.u64 = ctx.r11.u64 | 61348;
	// stfsx f5,r30,r7
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfsx f4,r30,r6
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// stfsx f3,r30,r5
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// stfsx f2,r30,r3
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// ori r10,r10,61352
	ctx.r10.u64 = ctx.r10.u64 | 61352;
	// stfsx f29,r30,r11
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// ori r9,r9,12252
	ctx.r9.u64 = ctx.r9.u64 | 12252;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// ori r5,r8,57468
	ctx.r5.u64 = ctx.r8.u64 | 57468;
	// ori r4,r4,57472
	ctx.r4.u64 = ctx.r4.u64 | 57472;
	// stfsx f26,r30,r10
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// ori r3,r7,37148
	ctx.r3.u64 = ctx.r7.u64 | 37148;
	// stfsx f12,r30,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// ori r11,r6,37152
	ctx.r11.u64 = ctx.r6.u64 | 37152;
	// stfs f31,8(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// stfs f14,4(r25)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfsx f11,r30,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// stfsx f11,r30,r4
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// stfs f31,8(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f14,4(r27)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfsx f6,r30,r3
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// stfsx f6,r30,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// lfd f29,-16352(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16352);
	// lfs f13,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmul f2,f13,f29
	ctx.f2.f64 = ctx.f13.f64 * ctx.f29.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE70B8;
	sub_82CB59B0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,2
	ctx.r9.s64 = 131072;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ori r8,r9,40716
	ctx.r8.u64 = ctx.r9.u64 | 40716;
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// stfsx f11,r30,r8
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// lfs f10,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fmul f2,f10,f29
	ctx.f2.f64 = ctx.f10.f64 * ctx.f29.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE70DC;
	sub_82CB59B0(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r7,2
	ctx.r7.s64 = 131072;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ori r6,r7,61384
	ctx.r6.u64 = ctx.r7.u64 | 61384;
	// fmuls f8,f9,f27
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// stfsx f8,r30,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// lfs f7,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fmul f2,f7,f29
	ctx.f2.f64 = ctx.f7.f64 * ctx.f29.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE7100;
	sub_82CB59B0(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lis r5,3
	ctx.r5.s64 = 196608;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ori r4,r5,41060
	ctx.r4.u64 = ctx.r5.u64 | 41060;
	// fmuls f5,f6,f20
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f20.f64));
	// stfsx f5,r30,r4
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// lfs f4,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// fmul f2,f4,f29
	ctx.f2.f64 = ctx.f4.f64 * ctx.f29.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE7124;
	sub_82CB59B0(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lis r3,4
	ctx.r3.s64 = 262144;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ori r11,r3,20740
	ctx.r11.u64 = ctx.r3.u64 | 20740;
	// fmuls f2,f3,f19
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f19.f64));
	// stfsx f2,r30,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,64(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmul f2,f0,f29
	ctx.f2.f64 = ctx.f0.f64 * ctx.f29.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE7148;
	sub_82CB59B0(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// addis r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 327680;
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,96(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// addi r10,r10,-28368
	ctx.r10.s64 = ctx.r10.s64 + -28368;
	// addis r9,r30,5
	ctx.r9.s64 = ctx.r30.s64 + 327680;
	// addis r8,r30,5
	ctx.r8.s64 = ctx.r30.s64 + 327680;
	// addis r7,r30,5
	ctx.r7.s64 = ctx.r30.s64 + 327680;
	// addi r9,r9,-26296
	ctx.r9.s64 = ctx.r9.s64 + -26296;
	// addi r8,r8,-24224
	ctx.r8.s64 = ctx.r8.s64 + -24224;
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// addi r7,r7,-22152
	ctx.r7.s64 = ctx.r7.s64 + -22152;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,4(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f11,4(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f11,4(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f10,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82fe5d10
	ctx.lr = 0x82FE71B4;
	sub_82FE5D10(ctx, base);
	// lfs f9,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe5d10
	ctx.lr = 0x82FE71C4;
	sub_82FE5D10(ctx, base);
	// lfs f8,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe5d10
	ctx.lr = 0x82FE71D4;
	sub_82FE5D10(ctx, base);
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// lfs f7,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82fe5d10
	ctx.lr = 0x82FE71EC;
	sub_82FE5D10(ctx, base);
	// lfs f6,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe5d10
	ctx.lr = 0x82FE71FC;
	sub_82FE5D10(ctx, base);
	// lfs f5,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82fe5d10
	ctx.lr = 0x82FE720C;
	sub_82FE5D10(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fe7220
	if (!ctx.cr6.eq) goto loc_82FE7220;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82fe7250
	goto loc_82FE7250;
loc_82FE7220:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82FE7250:
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r11,r11,-20080
	ctx.r11.s64 = ctx.r11.s64 + -20080;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fe7278
	if (!ctx.cr6.eq) goto loc_82FE7278;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82FE7278:
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r11,r11,-19024
	ctx.r11.s64 = ctx.r11.s64 + -19024;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fe72a0
	if (!ctx.cr6.eq) goto loc_82FE72A0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82FE72A0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6afc
	ctx.lr = 0x82FE72AC;
	__restfpr_14(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE72B0"))) PPC_WEAK_FUNC(sub_82FE72B0);
PPC_FUNC_IMPL(__imp__sub_82FE72B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FE72B8;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r8,r8,136
	ctx.r8.s64 = ctx.r8.s64 + 136;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// stfs f30,104(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f0,22172(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22172);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f29,f30,f0
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmadds f9,f13,f10,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f31.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// fdivs f4,f30,f7
	ctx.f4.f64 = double(float(ctx.f30.f64 / ctx.f7.f64));
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// stfs f30,0(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmadds f2,f4,f3,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f31.f64));
	// fctidz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// stfs f30,0(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// bl 0x82fe5d10
	ctx.lr = 0x82FE7370;
	sub_82FE5D10(ctx, base);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// stfs f30,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// bl 0x82fe5d10
	ctx.lr = 0x82FE7380;
	sub_82FE5D10(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,22168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f29,f0,f31
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fe90e0
	ctx.lr = 0x82FE73A0;
	sub_82FE90E0(ctx, base);
	// fadds f12,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r9,240
	ctx.r6.u64 = ctx.r9.u64 | 240;
	// ori r5,r8,252
	ctx.r5.u64 = ctx.r8.u64 | 252;
	// ori r4,r7,264
	ctx.r4.u64 = ctx.r7.u64 | 264;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r29,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u32);
	// lfs f0,22208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22208);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f29,f0,f31
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE73F4;
	sub_82FE90E0(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// ori r7,r9,2332
	ctx.r7.u64 = ctx.r9.u64 | 2332;
	// lfs f0,22164(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 22164);
	ctx.f0.f64 = double(temp.f32);
	// stwx r3,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// fmadds f8,f29,f0,f31
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE741C;
	sub_82FE90E0(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r6,2868
	ctx.r4.u64 = ctx.r6.u64 | 2868;
	// ori r11,r5,2880
	ctx.r11.u64 = ctx.r5.u64 | 2880;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// stwx r3,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lfs f0,-18296(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18296);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f29,f0,f31
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7458;
	sub_82FE90E0(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// ori r6,r8,2892
	ctx.r6.u64 = ctx.r8.u64 | 2892;
	// lfs f0,22204(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22204);
	ctx.f0.f64 = double(temp.f32);
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// fmadds f4,f29,f0,f31
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7480;
	sub_82FE90E0(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r5,11104
	ctx.r4.u64 = ctx.r5.u64 | 11104;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stwx r3,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lfs f0,22200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22200);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f29,f0,f31
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE74A8;
	sub_82FE90E0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,22196(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22196);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// fmadds f0,f29,f0,f31
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r9,12152
	ctx.r6.u64 = ctx.r9.u64 | 12152;
	// ori r5,r8,14224
	ctx.r5.u64 = ctx.r8.u64 | 14224;
	// ori r4,r7,14236
	ctx.r4.u64 = ctx.r7.u64 | 14236;
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r29,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE74EC;
	sub_82FE90E0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,18360
	ctx.r8.u64 = ctx.r11.u64 | 18360;
	// ori r7,r10,18372
	ctx.r7.u64 = ctx.r10.u64 | 18372;
	// ori r6,r9,18384
	ctx.r6.u64 = ctx.r9.u64 | 18384;
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stwx r3,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// stwx r5,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r29,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// lfs f0,-15648(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15648);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f29,f0,f31
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7530;
	sub_82FE90E0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,22160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22160);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// fmadds f10,f29,f0,f31
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// ori r9,r10,20452
	ctx.r9.u64 = ctx.r10.u64 | 20452;
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7558;
	sub_82FE90E0(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r6,r8,20988
	ctx.r6.u64 = ctx.r8.u64 | 20988;
	// ori r5,r7,21000
	ctx.r5.u64 = ctx.r7.u64 | 21000;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7580;
	sub_82FE90E0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// ori r9,r11,21012
	ctx.r9.u64 = ctx.r11.u64 | 21012;
	// lfs f0,22192(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22192);
	ctx.f0.f64 = double(temp.f32);
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// fmadds f8,f29,f0,f31
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE75A8;
	sub_82FE90E0(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r8,29224
	ctx.r7.u64 = ctx.r8.u64 | 29224;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stwx r3,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lfs f0,22188(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22188);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f29,f0,f31
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE75D0;
	sub_82FE90E0(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r5,30272
	ctx.r10.u64 = ctx.r5.u64 | 30272;
	// ori r9,r4,32344
	ctx.r9.u64 = ctx.r4.u64 | 32344;
	// ori r8,r11,32356
	ctx.r8.u64 = ctx.r11.u64 | 32356;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// stwx r29,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r29.u32);
	// lfs f0,22156(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22156);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f29,f0,f31
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7610;
	sub_82FE90E0(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r6,36472
	ctx.r5.u64 = ctx.r6.u64 | 36472;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stwx r3,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// lfs f0,22152(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 22152);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f29,f0,f31
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7638;
	sub_82FE90E0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r11,38544
	ctx.r7.u64 = ctx.r11.u64 | 38544;
	// ori r6,r10,40616
	ctx.r6.u64 = ctx.r10.u64 | 40616;
	// ori r5,r9,40640
	ctx.r5.u64 = ctx.r9.u64 | 40640;
	// ori r4,r8,40672
	ctx.r4.u64 = ctx.r8.u64 | 40672;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stwx r3,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// stwx r29,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// stwx r29,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// stwx r29,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u32);
	// lfs f0,22148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22148);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f29,f0,f31
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7684;
	sub_82FE90E0(ctx, base);
	// addis r30,r31,3
	ctx.r30.s64 = ctx.r31.s64 + 196608;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r30,r30,-24824
	ctx.r30.s64 = ctx.r30.s64 + -24824;
	// ori r9,r10,40700
	ctx.r9.u64 = ctx.r10.u64 | 40700;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f9,f10,f29,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f31.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE76C0;
	sub_82FE90E0(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// ori r4,r5,57116
	ctx.r4.u64 = ctx.r5.u64 | 57116;
	// lfs f0,22144(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22144);
	ctx.f0.f64 = double(temp.f32);
	// stwx r29,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u32);
	// fmadds f7,f29,f0,f31
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE76EC;
	sub_82FE90E0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r11,57140
	ctx.r9.u64 = ctx.r11.u64 | 57140;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// lfs f0,22140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22140);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f29,f0,f31
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f5.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7714;
	sub_82FE90E0(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r4,r8,59212
	ctx.r4.u64 = ctx.r8.u64 | 59212;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r11,r7,61284
	ctx.r11.u64 = ctx.r7.u64 | 61284;
	// stwx r3,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lfs f0,22136(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 22136);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r6,61308
	ctx.r10.u64 = ctx.r6.u64 | 61308;
	// fmadds f3,f29,f0,f31
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// ori r9,r5,61340
	ctx.r9.u64 = ctx.r5.u64 | 61340;
	// stwx r29,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// stwx r29,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u32);
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7760;
	sub_82FE90E0(ctx, base);
	// addis r30,r31,3
	ctx.r30.s64 = ctx.r31.s64 + 196608;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r30,r30,-4156
	ctx.r30.s64 = ctx.r30.s64 + -4156;
	// ori r4,r6,61368
	ctx.r4.u64 = ctx.r6.u64 | 61368;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r3,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmadds f12,f13,f29,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f31.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE779C;
	sub_82FE90E0(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// ori r9,r11,12248
	ctx.r9.u64 = ctx.r11.u64 | 12248;
	// lfs f0,22132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22132);
	ctx.f0.f64 = double(temp.f32);
	// stwx r29,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u32);
	// fmadds f10,f29,f0,f31
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE77C8;
	sub_82FE90E0(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lfs f0,22128(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22128);
	ctx.f0.f64 = double(temp.f32);
	// ori r6,r8,12272
	ctx.r6.u64 = ctx.r8.u64 | 12272;
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// fmadds f8,f29,f0,f31
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE77F0;
	sub_82FE90E0(ctx, base);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// ori r11,r4,20488
	ctx.r11.u64 = ctx.r4.u64 | 20488;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lfs f0,22124(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 22124);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f29,f0,f31
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7818;
	sub_82FE90E0(ctx, base);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r8,r9,28708
	ctx.r8.u64 = ctx.r9.u64 | 28708;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stwx r3,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lfs f0,22120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22120);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f29,f0,f31
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7840;
	sub_82FE90E0(ctx, base);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// ori r5,r7,36924
	ctx.r5.u64 = ctx.r7.u64 | 36924;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stwx r3,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// lfs f0,22116(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22116);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f29,f0,f31
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7868;
	sub_82FE90E0(ctx, base);
	// addis r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 262144;
	// addi r30,r30,-24480
	ctx.r30.s64 = ctx.r30.s64 + -24480;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r9,r11,41044
	ctx.r9.u64 = ctx.r11.u64 | 41044;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f29,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f31.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE78A4;
	sub_82FE90E0(ctx, base);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// ori r6,r8,57460
	ctx.r6.u64 = ctx.r8.u64 | 57460;
	// lfs f0,22112(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22112);
	ctx.f0.f64 = double(temp.f32);
	// stwx r29,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// fmadds f9,f29,f0,f31
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE78D0;
	sub_82FE90E0(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// ori r4,r5,57488
	ctx.r4.u64 = ctx.r5.u64 | 57488;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stwx r3,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lfs f0,22108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22108);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f29,f0,f31
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE78F8;
	sub_82FE90E0(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lfs f0,22104(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 22104);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// fmadds f5,f29,f0,f31
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// ori r9,r10,168
	ctx.r9.u64 = ctx.r10.u64 | 168;
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f5.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7920;
	sub_82FE90E0(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r5,r7,8388
	ctx.r5.u64 = ctx.r7.u64 | 8388;
	// lfs f0,22100(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22100);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f29,f0,f31
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// stwx r3,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7948;
	sub_82FE90E0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r11,r4,16604
	ctx.r11.u64 = ctx.r4.u64 | 16604;
	// lfs f0,22096(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22096);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f29,f0,f31
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7970;
	sub_82FE90E0(ctx, base);
	// addis r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 262144;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// addi r30,r30,20736
	ctx.r30.s64 = ctx.r30.s64 + 20736;
	// ori r6,r8,20724
	ctx.r6.u64 = ctx.r8.u64 | 20724;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f11,f29,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f31.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE79AC;
	sub_82FE90E0(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// ori r3,r5,37140
	ctx.r3.u64 = ctx.r5.u64 | 37140;
	// lfs f0,22184(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 22184);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f29,f0,f31
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// stwx r29,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r29.u32);
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE79D8;
	sub_82FE90E0(ctx, base);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// ori r9,r10,37168
	ctx.r9.u64 = ctx.r10.u64 | 37168;
	// lfs f0,22180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22180);
	ctx.f0.f64 = double(temp.f32);
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// fmadds f6,f29,f0,f31
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7A00;
	sub_82FE90E0(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lfs f0,22176(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22176);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// fmadds f4,f29,f0,f31
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// ori r6,r8,39240
	ctx.r6.u64 = ctx.r8.u64 | 39240;
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// fctidz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7A28;
	sub_82FE90E0(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r4,r5,41312
	ctx.r4.u64 = ctx.r5.u64 | 41312;
	// lfs f0,8864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8864);
	ctx.f0.f64 = double(temp.f32);
	// stwx r3,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// fmadds f2,f29,f0,f31
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fe90e0
	ctx.lr = 0x82FE7A50;
	sub_82FE90E0(ctx, base);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addis r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 327680;
	// ori r8,r10,43384
	ctx.r8.u64 = ctx.r10.u64 | 43384;
	// addi r9,r9,-20080
	ctx.r9.s64 = ctx.r9.s64 + -20080;
	// stwx r3,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addis r7,r31,5
	ctx.r7.s64 = ctx.r31.s64 + 327680;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// stfs f30,0(r9)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fdivs f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r7,r7,-19024
	ctx.r7.s64 = ctx.r7.s64 + -19024;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fmadds f9,f11,f10,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f31.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// lfs f7,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f30,0(r7)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fdivs f6,f30,f7
	ctx.f6.f64 = double(float(ctx.f30.f64 / ctx.f7.f64));
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmadds f2,f6,f3,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f31.f64));
	// fctidz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE7AF0"))) PPC_WEAK_FUNC(sub_82FE7AF0);
PPC_FUNC_IMPL(__imp__sub_82FE7AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lfs f0,18820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82fe5e78
	ctx.lr = 0x82FE7B38;
	sub_82FE5E78(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7B50"))) PPC_WEAK_FUNC(sub_82FE7B50);
PPC_FUNC_IMPL(__imp__sub_82FE7B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lfs f0,18820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stfs f2,16(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE7BA4;
	sub_82FE5ED8(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7BBC"))) PPC_WEAK_FUNC(sub_82FE7BBC);
PPC_FUNC_IMPL(__imp__sub_82FE7BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE7BC0"))) PPC_WEAK_FUNC(sub_82FE7BC0);
PPC_FUNC_IMPL(__imp__sub_82FE7BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lfs f0,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82fe5f38
	ctx.lr = 0x82FE7C04;
	sub_82FE5F38(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7C1C"))) PPC_WEAK_FUNC(sub_82FE7C1C);
PPC_FUNC_IMPL(__imp__sub_82FE7C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE7C20"))) PPC_WEAK_FUNC(sub_82FE7C20);
PPC_FUNC_IMPL(__imp__sub_82FE7C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lfs f0,18820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stfs f2,16(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE7C74;
	sub_82FE5F98(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7C8C"))) PPC_WEAK_FUNC(sub_82FE7C8C);
PPC_FUNC_IMPL(__imp__sub_82FE7C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE7C90"))) PPC_WEAK_FUNC(sub_82FE7C90);
PPC_FUNC_IMPL(__imp__sub_82FE7C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lfs f0,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82fe5ff8
	ctx.lr = 0x82FE7CD4;
	sub_82FE5FF8(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7CEC"))) PPC_WEAK_FUNC(sub_82FE7CEC);
PPC_FUNC_IMPL(__imp__sub_82FE7CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE7CF0"))) PPC_WEAK_FUNC(sub_82FE7CF0);
PPC_FUNC_IMPL(__imp__sub_82FE7CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lfs f0,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE7D34;
	sub_82FE5ED8(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7D4C"))) PPC_WEAK_FUNC(sub_82FE7D4C);
PPC_FUNC_IMPL(__imp__sub_82FE7D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE7D50"))) PPC_WEAK_FUNC(sub_82FE7D50);
PPC_FUNC_IMPL(__imp__sub_82FE7D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lfs f0,18820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stfs f2,16(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x82fe6058
	ctx.lr = 0x82FE7D98;
	sub_82FE6058(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7DB0"))) PPC_WEAK_FUNC(sub_82FE7DB0);
PPC_FUNC_IMPL(__imp__sub_82FE7DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lfs f0,18820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stfs f2,16(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x82fe60b8
	ctx.lr = 0x82FE7DF8;
	sub_82FE60B8(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7E10"))) PPC_WEAK_FUNC(sub_82FE7E10);
PPC_FUNC_IMPL(__imp__sub_82FE7E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lfs f0,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE7E54;
	sub_82FE5F98(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7E6C"))) PPC_WEAK_FUNC(sub_82FE7E6C);
PPC_FUNC_IMPL(__imp__sub_82FE7E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE7E70"))) PPC_WEAK_FUNC(sub_82FE7E70);
PPC_FUNC_IMPL(__imp__sub_82FE7E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lfs f0,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE7EB8;
	sub_82FE5F98(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7ED0"))) PPC_WEAK_FUNC(sub_82FE7ED0);
PPC_FUNC_IMPL(__imp__sub_82FE7ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lfs f0,18820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82fe6058
	ctx.lr = 0x82FE7F14;
	sub_82FE6058(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7F2C"))) PPC_WEAK_FUNC(sub_82FE7F2C);
PPC_FUNC_IMPL(__imp__sub_82FE7F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE7F30"))) PPC_WEAK_FUNC(sub_82FE7F30);
PPC_FUNC_IMPL(__imp__sub_82FE7F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lfs f0,18820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82fe5ff8
	ctx.lr = 0x82FE7F78;
	sub_82FE5FF8(ctx, base);
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

__attribute__((alias("__imp__sub_82FE7F90"))) PPC_WEAK_FUNC(sub_82FE7F90);
PPC_FUNC_IMPL(__imp__sub_82FE7F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82FE7F98;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6abc
	ctx.lr = 0x82FE7FA0;
	__savefpr_17(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r24,-32251
	ctx.r24.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r23,-32251
	ctx.r23.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r6,r11,16236
	ctx.r6.s64 = ctx.r11.s64 + 16236;
	// lfs f13,18840(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18840);
	ctx.f13.f64 = double(temp.f32);
	// lis r22,-32251
	ctx.r22.s64 = -2113601536;
	// lfs f0,18820(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f12,18836(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 18836);
	ctx.f12.f64 = double(temp.f32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lfs f0,18816(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 18816);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lfs f13,18820(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lfs f11,18840(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18840);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lfs f12,18844(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 18844);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lfs f10,18836(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 18836);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stfs f11,84(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// stfs f10,92(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// lfd f29,-18344(r4)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r4.u32 + -18344);
	// lfd f28,-16744(r3)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r3.u32 + -16744);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE8068;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f0,18820(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// li r29,40
	ctx.r29.s64 = 40;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f0,18844(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 18844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82fe5e78
	ctx.lr = 0x82FE80B4;
	sub_82FE5E78(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// lfs f0,18844(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 18844);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// bl 0x82fe5e78
	ctx.lr = 0x82FE80EC;
	sub_82FE5E78(ctx, base);
	// lis r21,-32256
	ctx.r21.s64 = -2113929216;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// lfs f12,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,18820(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// lfs f0,6380(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// bl 0x82fe5d10
	ctx.lr = 0x82FE8128;
	sub_82FE5D10(ctx, base);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// lfs f10,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// lfs f0,6380(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,18820(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// bl 0x82fe5d10
	ctx.lr = 0x82FE8160;
	sub_82FE5D10(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r20,r11,18864
	ctx.r20.s64 = ctx.r11.s64 + 18864;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,232
	ctx.r8.u64 = ctx.r10.u64 | 232;
	// lfs f30,18864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18864);
	ctx.f30.f64 = double(temp.f32);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// ori r7,r9,236
	ctx.r7.u64 = ctx.r9.u64 | 236;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// lfs f26,44(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 44);
	ctx.f26.f64 = double(temp.f32);
	// li r25,509
	ctx.r25.s64 = 509;
	// lfs f25,48(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// li r26,508
	ctx.r26.s64 = 508;
	// stfsx f26,r31,r8
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f24,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// stfsx f25,r31,r7
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// lfs f23,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f24,16(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f23,28(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE81E0;
	sub_82FE5ED8(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,2332
	ctx.r11.s64 = ctx.r11.s64 + 2332;
	// lfs f21,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f21.f64 = double(temp.f32);
	// li r5,83
	ctx.r5.s64 = 83;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lfs f22,22220(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22220);
	ctx.f22.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stfs f22,4(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f21,8(r11)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5f38
	ctx.lr = 0x82FE821C;
	sub_82FE5F38(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r11,r11,2868
	ctx.r11.s64 = ctx.r11.s64 + 2868;
	// li r3,2039
	ctx.r3.s64 = 2039;
	// lfs f19,10764(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 10764);
	ctx.f19.f64 = double(temp.f32);
	// li r10,2038
	ctx.r10.s64 = 2038;
	// lfs f20,20(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	ctx.f20.f64 = double(temp.f32);
	// li r27,600
	ctx.r27.s64 = 600;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f20,16(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f19,28(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE8274;
	sub_82FE5F98(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,11104
	ctx.r11.s64 = ctx.r11.s64 + 11104;
	// lfs f27,6380(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 6380);
	ctx.f27.f64 = double(temp.f32);
	// li r8,211
	ctx.r8.s64 = 211;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lfs f31,-18200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18200);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5ff8
	ctx.lr = 0x82FE82B0;
	sub_82FE5FF8(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r7,311
	ctx.r7.s64 = 311;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,12152
	ctx.r11.s64 = ctx.r11.s64 + 12152;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE82E0;
	sub_82FE5ED8(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r28,1020
	ctx.r28.s64 = 1020;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,14224
	ctx.r11.s64 = ctx.r11.s64 + 14224;
	// lfs f18,36(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,40(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 40);
	ctx.f17.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stfs f18,4(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f17,16(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82fe6058
	ctx.lr = 0x82FE8320;
	sub_82FE6058(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// ori r4,r6,18352
	ctx.r4.u64 = ctx.r6.u64 | 18352;
	// ori r10,r5,18356
	ctx.r10.u64 = ctx.r5.u64 | 18356;
	// addi r11,r11,18360
	ctx.r11.s64 = ctx.r11.s64 + 18360;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// stfsx f26,r31,r4
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// stfsx f25,r31,r10
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f24,16(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f23,28(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE8378;
	sub_82FE5ED8(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r9,97
	ctx.r9.s64 = 97;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,20452
	ctx.r11.s64 = ctx.r11.s64 + 20452;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stfs f22,4(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f21,8(r11)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5f38
	ctx.lr = 0x82FE83A8;
	sub_82FE5F38(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r8,1297
	ctx.r8.s64 = 1297;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,20988
	ctx.r11.s64 = ctx.r11.s64 + 20988;
	// li r7,1296
	ctx.r7.s64 = 1296;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f20,16(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f19,28(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE83F0;
	sub_82FE5F98(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r6,223
	ctx.r6.s64 = 223;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,29224
	ctx.r11.s64 = ctx.r11.s64 + 29224;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5ff8
	ctx.lr = 0x82FE8420;
	sub_82FE5FF8(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r5,293
	ctx.r5.s64 = 293;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,30272
	ctx.r11.s64 = ctx.r11.s64 + 30272;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE8450;
	sub_82FE5ED8(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,32344
	ctx.r11.s64 = ctx.r11.s64 + 32344;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stfs f18,4(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f17,16(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82fe6058
	ctx.lr = 0x82FE8484;
	sub_82FE6058(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-29064
	ctx.r11.s64 = ctx.r11.s64 + -29064;
	// lfs f0,76(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// li r10,409
	ctx.r10.s64 = 409;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lfs f30,22216(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 22216);
	ctx.f30.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE84C0;
	sub_82FE5ED8(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r9,257
	ctx.r9.s64 = 257;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-26992
	ctx.r11.s64 = ctx.r11.s64 + -26992;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE84F0;
	sub_82FE5ED8(ctx, base);
	// addis r8,r31,3
	ctx.r8.s64 = ctx.r31.s64 + 196608;
	// addis r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 196608;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,-24920
	ctx.r8.s64 = ctx.r8.s64 + -24920;
	// lfs f0,52(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addis r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 196608;
	// lfs f12,56(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r7,-24896
	ctx.r7.s64 = ctx.r7.s64 + -24896;
	// lfs f11,60(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r6,-24864
	ctx.r6.s64 = ctx.r6.s64 + -24864;
	// lfs f10,64(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,68(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f11,8(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f10,12(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f0,24(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// stfs f0,28(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,72(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f9,8(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stfs f13,16(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// stfs f0,24(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// bl 0x82cb59b0
	ctx.lr = 0x82FE858C;
	sub_82CB59B0(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// lfs f12,84(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// li r10,3432
	ctx.r10.s64 = 3432;
	// lfs f13,18820(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-24836
	ctx.r11.s64 = ctx.r11.s64 + -24836;
	// lfs f0,18836(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 18836);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82fe60b8
	ctx.lr = 0x82FE85D4;
	sub_82FE60B8(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-8396
	ctx.r11.s64 = ctx.r11.s64 + -8396;
	// lfs f12,76(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r5,-8420
	ctx.r5.s64 = ctx.r5.s64 + -8420;
	// fmr f0,f20
	ctx.f0.f64 = ctx.f20.f64;
	// li r4,383
	ctx.r4.s64 = 383;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE8630;
	sub_82FE5ED8(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r10,233
	ctx.r10.s64 = 233;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-6324
	ctx.r11.s64 = ctx.r11.s64 + -6324;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE8664;
	sub_82FE5ED8(ctx, base);
	// addis r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 196608;
	// addis r8,r31,3
	ctx.r8.s64 = ctx.r31.s64 + 196608;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-4252
	ctx.r9.s64 = ctx.r9.s64 + -4252;
	// lfs f0,52(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,-4228
	ctx.r8.s64 = ctx.r8.s64 + -4228;
	// lfs f12,64(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// addis r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 196608;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r7,r7,-4196
	ctx.r7.s64 = ctx.r7.s64 + -4196;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lfs f0,56(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f13,60(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f0,18820(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f0,68(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f0,18820(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stfs f13,12(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f12,16(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// stfs f0,24(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// bl 0x82cb59b0
	ctx.lr = 0x82FE8708;
	sub_82CB59B0(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// lfs f12,84(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// li r10,3820
	ctx.r10.s64 = 3820;
	// lfs f13,18820(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-4168
	ctx.r11.s64 = ctx.r11.s64 + -4168;
	// lfs f0,18836(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 18836);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82fe60b8
	ctx.lr = 0x82FE8750;
	sub_82FE60B8(ctx, base);
	// addis r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 196608;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,12248
	ctx.r6.s64 = ctx.r6.s64 + 12248;
	// fmr f0,f20
	ctx.f0.f64 = ctx.f20.f64;
	// addi r11,r11,12272
	ctx.r11.s64 = ctx.r11.s64 + 12272;
	// lfs f27,76(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 76);
	ctx.f27.f64 = double(temp.f32);
	// li r5,1511
	ctx.r5.s64 = 1511;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE87AC;
	sub_82FE5F98(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r4,1061
	ctx.r4.s64 = 1061;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,20488
	ctx.r11.s64 = ctx.r11.s64 + 20488;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stfs f27,4(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE87E0;
	sub_82FE5F98(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r10,853
	ctx.r10.s64 = 853;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,28708
	ctx.r11.s64 = ctx.r11.s64 + 28708;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE8810;
	sub_82FE5F98(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r9,541
	ctx.r9.s64 = 541;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-28612
	ctx.r11.s64 = ctx.r11.s64 + -28612;
	// lfs f0,6380(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe6058
	ctx.lr = 0x82FE8844;
	sub_82FE6058(ctx, base);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE8850;
	sub_82CB59B0(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1510
	ctx.r10.s64 = 1510;
	// lfs f0,18836(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 18836);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-24492
	ctx.r11.s64 = ctx.r11.s64 + -24492;
	// lfs f12,84(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// bl 0x82fe60b8
	ctx.lr = 0x82FE889C;
	sub_82FE60B8(ctx, base);
	// addis r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 262144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r7,-8076
	ctx.r7.s64 = ctx.r7.s64 + -8076;
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r6,1657
	ctx.r6.s64 = 1657;
	// addi r11,r11,-8048
	ctx.r11.s64 = ctx.r11.s64 + -8048;
	// lfs f0,7644(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7644);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f0,24(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE88FC;
	sub_82FE5F98(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r5,1103
	ctx.r5.s64 = 1103;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stfs f27,4(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE8930;
	sub_82FE5F98(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r4,887
	ctx.r4.s64 = 887;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,8388
	ctx.r11.s64 = ctx.r11.s64 + 8388;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5f98
	ctx.lr = 0x82FE8960;
	sub_82FE5F98(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r10,491
	ctx.r10.s64 = 491;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16604
	ctx.r11.s64 = ctx.r11.s64 + 16604;
	// lfs f0,6380(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe6058
	ctx.lr = 0x82FE8998;
	sub_82FE6058(ctx, base);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE89A4;
	sub_82CB59B0(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// frsp f2,f1
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// addi r11,r11,20724
	ctx.r11.s64 = ctx.r11.s64 + 20724;
	// lfs f0,18836(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 18836);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1438
	ctx.r10.s64 = 1438;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f1,16(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82fe60b8
	ctx.lr = 0x82FE89EC;
	sub_82FE60B8(ctx, base);
	// addis r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 327680;
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-28396
	ctx.r9.s64 = ctx.r9.s64 + -28396;
	// lfs f0,120(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lfs f30,124(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 124);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,-28368
	ctx.r11.s64 = ctx.r11.s64 + -28368;
	// li r7,131
	ctx.r7.s64 = 131;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lfs f31,22212(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 22212);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE8A54;
	sub_82FE5ED8(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// li r6,113
	ctx.r6.s64 = 113;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-26296
	ctx.r11.s64 = ctx.r11.s64 + -26296;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE8A84;
	sub_82FE5ED8(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// li r5,107
	ctx.r5.s64 = 107;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-24224
	ctx.r11.s64 = ctx.r11.s64 + -24224;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE8AB4;
	sub_82FE5ED8(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// li r4,127
	ctx.r4.s64 = 127;
	// lfs f0,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-22152
	ctx.r11.s64 = ctx.r11.s64 + -22152;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fe5ed8
	ctx.lr = 0x82FE8AE4;
	sub_82FE5ED8(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// li r29,20
	ctx.r29.s64 = 20;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-20080
	ctx.r11.s64 = ctx.r11.s64 + -20080;
	// lfs f0,18844(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 18844);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82fe5ff8
	ctx.lr = 0x82FE8B20;
	sub_82FE5FF8(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// lfs f13,18820(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 18820);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-19024
	ctx.r11.s64 = ctx.r11.s64 + -19024;
	// lfs f0,18844(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 18844);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// bl 0x82fe5ff8
	ctx.lr = 0x82FE8B58;
	sub_82FE5FF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6b08
	ctx.lr = 0x82FE8B68;
	__restfpr_17(ctx, base);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE8B6C"))) PPC_WEAK_FUNC(sub_82FE8B6C);
PPC_FUNC_IMPL(__imp__sub_82FE8B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE8B70"))) PPC_WEAK_FUNC(sub_82FE8B70);
PPC_FUNC_IMPL(__imp__sub_82FE8B70) {
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
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f0,22224(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 22224);
	// lfd f1,-16744(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16744);
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x82FE8BA8;
	sub_82CB59B0(ctx, base);
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

__attribute__((alias("__imp__sub_82FE8BBC"))) PPC_WEAK_FUNC(sub_82FE8BBC);
PPC_FUNC_IMPL(__imp__sub_82FE8BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE8BC0"))) PPC_WEAK_FUNC(sub_82FE8BC0);
PPC_FUNC_IMPL(__imp__sub_82FE8BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-16912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE8BDC"))) PPC_WEAK_FUNC(sub_82FE8BDC);
PPC_FUNC_IMPL(__imp__sub_82FE8BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE8BE0"))) PPC_WEAK_FUNC(sub_82FE8BE0);
PPC_FUNC_IMPL(__imp__sub_82FE8BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FE8BE8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lwz r11,18812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18812);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,18780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18780);
	// lfs f31,7712(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7712);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f30,6140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,18780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18780);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,18784(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18784);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,18784(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18784);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lfs f0,18852(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,60(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f6,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f30
	ctx.cr6.compare(ctx.f6.f64, ctx.f30.f64);
	// blt cr6,0x82fe8d14
	if (ctx.cr6.lt) goto loc_82FE8D14;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lfs f1,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb4f48
	ctx.lr = 0x82FE8CB8;
	sub_82CB4F48(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfd f0,22232(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22232);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82fe8ce8
	if (!ctx.cr6.lt) goto loc_82FE8CE8;
	// li r11,-8
	ctx.r11.s64 = -8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82fe8cfc
	goto loc_82FE8CFC;
loc_82FE8CE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82fe8cf8
	if (!ctx.cr6.lt) goto loc_82FE8CF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82fe8cfc
	goto loc_82FE8CFC;
loc_82FE8CF8:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82FE8CFC:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// b 0x82fe8d70
	goto loc_82FE8D70;
loc_82FE8D14:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb4f48
	ctx.lr = 0x82FE8D20;
	sub_82CB4F48(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,-3360(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3360);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82fe8d50
	if (!ctx.cr6.lt) goto loc_82FE8D50;
	// li r11,-8
	ctx.r11.s64 = -8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82fe8d64
	goto loc_82FE8D64;
loc_82FE8D50:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82fe8d60
	if (!ctx.cr6.lt) goto loc_82FE8D60;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82fe8d64
	goto loc_82FE8D64;
loc_82FE8D60:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82FE8D64:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_82FE8D70:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f12,8044(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8044);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,64(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f9,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,18700(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18700);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f13,f7
	ctx.f13.f64 = double(float(ctx.f7.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82fe8dc4
	if (ctx.cr6.lt) goto loc_82FE8DC4;
	// fsubs f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
loc_82FE8DC4:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82fe8dd0
	if (ctx.cr6.gt) goto loc_82FE8DD0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82FE8DD0:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f0.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,68(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r8,18704(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18704);
	// lfs f8,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82fe8e24
	if (ctx.cr6.lt) goto loc_82FE8E24;
	// fsubs f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
loc_82FE8E24:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.f0.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-16912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lfs f10,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,76(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f9,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE8E70"))) PPC_WEAK_FUNC(sub_82FE8E70);
PPC_FUNC_IMPL(__imp__sub_82FE8E70) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,48
	ctx.r5.s64 = 48;
	// b 0x82cb1160
	sub_82CB1160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE8E84"))) PPC_WEAK_FUNC(sub_82FE8E84);
PPC_FUNC_IMPL(__imp__sub_82FE8E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE8E88"))) PPC_WEAK_FUNC(sub_82FE8E88);
PPC_FUNC_IMPL(__imp__sub_82FE8E88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-3
	ctx.r11.s64 = ctx.r4.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE8E9C"))) PPC_WEAK_FUNC(sub_82FE8E9C);
PPC_FUNC_IMPL(__imp__sub_82FE8E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE8EA0"))) PPC_WEAK_FUNC(sub_82FE8EA0);
PPC_FUNC_IMPL(__imp__sub_82FE8EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE8EA8"))) PPC_WEAK_FUNC(sub_82FE8EA8);
PPC_FUNC_IMPL(__imp__sub_82FE8EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE8EAC"))) PPC_WEAK_FUNC(sub_82FE8EAC);
PPC_FUNC_IMPL(__imp__sub_82FE8EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE8EB0"))) PPC_WEAK_FUNC(sub_82FE8EB0);
PPC_FUNC_IMPL(__imp__sub_82FE8EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// bgt cr6,0x82fe8fbc
	if (ctx.cr6.gt) goto loc_82FE8FBC;
	// lis r12,-32001
	ctx.r12.s64 = -2097217536;
	// addi r12,r12,-28952
	ctx.r12.s64 = ctx.r12.s64 + -28952;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82FE8F1C;
	case 1:
		goto loc_82FE8F30;
	case 2:
		goto loc_82FE8F3C;
	case 3:
		goto loc_82FE8F48;
	case 4:
		goto loc_82FE8F54;
	case 5:
		goto loc_82FE8F60;
	case 6:
		goto loc_82FE8F6C;
	case 7:
		goto loc_82FE8F78;
	case 8:
		goto loc_82FE8F84;
	case 9:
		goto loc_82FE8F90;
	case 10:
		goto loc_82FE8F9C;
	case 11:
		goto loc_82FE8FA8;
	case 12:
		goto loc_82FE8FB4;
	default:
		__builtin_unreachable();
	}
	// lwz r23,-28900(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28900);
	// lwz r23,-28880(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28880);
	// lwz r23,-28868(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28868);
	// lwz r23,-28856(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28856);
	// lwz r23,-28844(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28844);
	// lwz r23,-28832(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28832);
	// lwz r23,-28820(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28820);
	// lwz r23,-28808(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28808);
	// lwz r23,-28796(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28796);
	// lwz r23,-28784(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28784);
	// lwz r23,-28772(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28772);
	// lwz r23,-28760(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28760);
	// lwz r23,-28748(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28748);
loc_82FE8F1C:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FE8F2C;
	sub_82CB1160(ctx, base);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8F30:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8F3C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8F48:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8F54:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8F60:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8F6C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8F78:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8F84:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8F90:
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8F9C:
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8FA8:
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// b 0x82fe8fbc
	goto loc_82FE8FBC;
loc_82FE8FB4:
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_82FE8FBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fe59e8
	ctx.lr = 0x82FE8FC4;
	sub_82FE59E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f1,88(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fe8be0
	ctx.lr = 0x82FE8FE0;
	sub_82FE8BE0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82fe6518
	ctx.lr = 0x82FE8FF4;
	sub_82FE6518(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9008"))) PPC_WEAK_FUNC(sub_82FE9008);
PPC_FUNC_IMPL(__imp__sub_82FE9008) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fe9040
	if (ctx.cr6.eq) goto loc_82FE9040;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r10,r11,22240
	ctx.r10.s64 = ctx.r11.s64 + 22240;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82fe7f90
	ctx.lr = 0x82FE9040;
	sub_82FE7F90(ctx, base);
loc_82FE9040:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f12,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lfs f0,6148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,16208
	ctx.r8.s64 = ctx.r10.s64 + 16208;
	// lfs f11,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f11.f64 = double(temp.f32);
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// stwx r8,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lfs f10,-11796(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -11796);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-16908(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -16908);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f8,-736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -736);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f8,48(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
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

__attribute__((alias("__imp__sub_82FE90DC"))) PPC_WEAK_FUNC(sub_82FE90DC);
PPC_FUNC_IMPL(__imp__sub_82FE90DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE90E0"))) PPC_WEAK_FUNC(sub_82FE90E0);
PPC_FUNC_IMPL(__imp__sub_82FE90E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x82fe90f0
	if (ctx.cr6.gt) goto loc_82FE90F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FE90F0:
	// cmplwi cr6,r3,9973
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9973, ctx.xer);
	// blt cr6,0x82fe9100
	if (ctx.cr6.lt) goto loc_82FE9100;
	// li r3,9973
	ctx.r3.s64 = 9973;
	// blr 
	return;
loc_82FE9100:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1229
	ctx.r8.s64 = 1229;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r10,22248
	ctx.r6.s64 = ctx.r10.s64 + 22248;
loc_82FE9114:
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82fe9148
	if (ctx.cr6.eq) goto loc_82FE9148;
	// ble cr6,0x82fe913c
	if (!ctx.cr6.gt) goto loc_82FE913C;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// b 0x82fe9140
	goto loc_82FE9140;
loc_82FE913C:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_82FE9140:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82fe9114
	if (!ctx.cr6.eq) goto loc_82FE9114;
loc_82FE9148:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9154"))) PPC_WEAK_FUNC(sub_82FE9154);
PPC_FUNC_IMPL(__imp__sub_82FE9154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE9158"))) PPC_WEAK_FUNC(sub_82FE9158);
PPC_FUNC_IMPL(__imp__sub_82FE9158) {
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
	// lis r4,5
	ctx.r4.s64 = 327680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32772
	ctx.r4.u64 = ctx.r4.u64 | 32772;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x833b7c34
	ctx.lr = 0x82FE917C;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt 0x82fe918c
	if (ctx.cr0.lt) goto loc_82FE918C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82FE918C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE919C"))) PPC_WEAK_FUNC(sub_82FE919C);
PPC_FUNC_IMPL(__imp__sub_82FE919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE91A0"))) PPC_WEAK_FUNC(sub_82FE91A0);
PPC_FUNC_IMPL(__imp__sub_82FE91A0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE91B0"))) PPC_WEAK_FUNC(sub_82FE91B0);
PPC_FUNC_IMPL(__imp__sub_82FE91B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE91B8"))) PPC_WEAK_FUNC(sub_82FE91B8);
PPC_FUNC_IMPL(__imp__sub_82FE91B8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82FE91E8;
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

__attribute__((alias("__imp__sub_82FE9200"))) PPC_WEAK_FUNC(sub_82FE9200);
PPC_FUNC_IMPL(__imp__sub_82FE9200) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9208"))) PPC_WEAK_FUNC(sub_82FE9208);
PPC_FUNC_IMPL(__imp__sub_82FE9208) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9210"))) PPC_WEAK_FUNC(sub_82FE9210);
PPC_FUNC_IMPL(__imp__sub_82FE9210) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9218"))) PPC_WEAK_FUNC(sub_82FE9218);
PPC_FUNC_IMPL(__imp__sub_82FE9218) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82FE9248;
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

__attribute__((alias("__imp__sub_82FE9260"))) PPC_WEAK_FUNC(sub_82FE9260);
PPC_FUNC_IMPL(__imp__sub_82FE9260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fe92d0
	if (ctx.cr6.eq) goto loc_82FE92D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fe92d0
	if (ctx.cr6.eq) goto loc_82FE92D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fe92d0
	if (ctx.cr6.eq) goto loc_82FE92D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82fb4c18
	ctx.lr = 0x82FE92A0;
	sub_82FB4C18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82fe92d4
	if (!ctx.cr0.eq) goto loc_82FE92D4;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,20392
	ctx.r3.s64 = ctx.r11.s64 + 20392;
	// bl 0x82fecb30
	ctx.lr = 0x82FE92BC;
	sub_82FECB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bge 0x82fe92d4
	if (!ctx.cr0.lt) goto loc_82FE92D4;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82fe92d4
	goto loc_82FE92D4;
loc_82FE92D0:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82FE92D4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE92E8"))) PPC_WEAK_FUNC(sub_82FE92E8);
PPC_FUNC_IMPL(__imp__sub_82FE92E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r3,r11,-15764
	ctx.r3.s64 = ctx.r11.s64 + -15764;
	// b 0x82fe9260
	sub_82FE9260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE92F4"))) PPC_WEAK_FUNC(sub_82FE92F4);
PPC_FUNC_IMPL(__imp__sub_82FE92F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE92F8"))) PPC_WEAK_FUNC(sub_82FE92F8);
PPC_FUNC_IMPL(__imp__sub_82FE92F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r3,r11,-15764
	ctx.r3.s64 = ctx.r11.s64 + -15764;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9304"))) PPC_WEAK_FUNC(sub_82FE9304);
PPC_FUNC_IMPL(__imp__sub_82FE9304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE9308"))) PPC_WEAK_FUNC(sub_82FE9308);
PPC_FUNC_IMPL(__imp__sub_82FE9308) {
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
	// bl 0x82fb4c28
	ctx.lr = 0x82FE9318;
	sub_82FB4C28(ctx, base);
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

__attribute__((alias("__imp__sub_82FE932C"))) PPC_WEAK_FUNC(sub_82FE932C);
PPC_FUNC_IMPL(__imp__sub_82FE932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE9330"))) PPC_WEAK_FUNC(sub_82FE9330);
PPC_FUNC_IMPL(__imp__sub_82FE9330) {
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
	// lis r4,5
	ctx.r4.s64 = 327680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32774
	ctx.r4.u64 = ctx.r4.u64 | 32774;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x833b7c34
	ctx.lr = 0x82FE9354;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bge 0x82fe9364
	if (!ctx.cr0.lt) goto loc_82FE9364;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE9364:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9374"))) PPC_WEAK_FUNC(sub_82FE9374);
PPC_FUNC_IMPL(__imp__sub_82FE9374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE9378"))) PPC_WEAK_FUNC(sub_82FE9378);
PPC_FUNC_IMPL(__imp__sub_82FE9378) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// ori r4,r4,32775
	ctx.r4.u64 = ctx.r4.u64 | 32775;
	// bl 0x833b7c34
	ctx.lr = 0x82FE939C;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe93ac
	if (ctx.cr0.lt) goto loc_82FE93AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fe93dc
	goto loc_82FE93DC;
loc_82FE93AC:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,4352
	ctx.r11.u64 = ctx.r11.u64 | 4352;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82fe93c4
	if (!ctx.cr6.eq) goto loc_82FE93C4;
	// li r3,1243
	ctx.r3.s64 = 1243;
	// b 0x82fe93dc
	goto loc_82FE93DC;
loc_82FE93C4:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,6146
	ctx.r11.u64 = ctx.r11.u64 | 6146;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,1229
	ctx.r3.s64 = 1229;
	// beq cr6,0x82fe93dc
	if (ctx.cr6.eq) goto loc_82FE93DC;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82FE93DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE93EC"))) PPC_WEAK_FUNC(sub_82FE93EC);
PPC_FUNC_IMPL(__imp__sub_82FE93EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE93F0"))) PPC_WEAK_FUNC(sub_82FE93F0);
PPC_FUNC_IMPL(__imp__sub_82FE93F0) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,20392
	ctx.r11.s64 = ctx.r11.s64 + 20392;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x82fe9424
	if (!ctx.cr0.eq) goto loc_82FE9424;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82fe9460
	goto loc_82FE9460;
loc_82FE9424:
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// lis r9,-32001
	ctx.r9.s64 = -2097217536;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// addi r7,r9,-28256
	ctx.r7.s64 = ctx.r9.s64 + -28256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff35f0
	ctx.lr = 0x82FE9440;
	sub_82FF35F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82fe9454
	if (!ctx.cr0.eq) goto loc_82FE9454;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82fe9460
	goto loc_82FE9460;
loc_82FE9454:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FE9460:
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

__attribute__((alias("__imp__sub_82FE9474"))) PPC_WEAK_FUNC(sub_82FE9474);
PPC_FUNC_IMPL(__imp__sub_82FE9474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE9478"))) PPC_WEAK_FUNC(sub_82FE9478);
PPC_FUNC_IMPL(__imp__sub_82FE9478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FE9480;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,20392
	ctx.r3.s64 = ctx.r10.s64 + 20392;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x82fec9a8
	ctx.lr = 0x82FE94B4;
	sub_82FEC9A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe950c
	if (ctx.cr0.lt) goto loc_82FE950C;
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fe94c8
	if (!ctx.cr0.eq) goto loc_82FE94C8;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82FE94C8:
	// mulli r11,r29,120
	ctx.r11.s64 = ctx.r29.s64 * 120;
	// li r10,100
	ctx.r10.s64 = 100;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x82fe94e8
	if (ctx.cr6.eq) goto loc_82FE94E8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FE94E8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fe94f8
	if (ctx.cr6.eq) goto loc_82FE94F8;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_82FE94F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fe950c
	if (ctx.cr6.eq) goto loc_82FE950C;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,11884
	ctx.r11.s64 = ctx.r11.s64 + 11884;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82FE950C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE9514"))) PPC_WEAK_FUNC(sub_82FE9514);
PPC_FUNC_IMPL(__imp__sub_82FE9514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE9518"))) PPC_WEAK_FUNC(sub_82FE9518);
PPC_FUNC_IMPL(__imp__sub_82FE9518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82FE9520;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r29,r6,7712
	ctx.r29.s64 = ctx.r6.s64 + 7712;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,32772
	ctx.r4.u64 = ctx.r4.u64 | 32772;
	// li r3,252
	ctx.r3.s64 = 252;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// addi r22,r29,4172
	ctx.r22.s64 = ctx.r29.s64 + 4172;
	// bl 0x833b7c34
	ctx.lr = 0x82FE9560;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt 0x82fe9570
	if (ctx.cr0.lt) goto loc_82FE9570;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_82FE9570:
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r8,r31,76
	ctx.r8.s64 = ctx.r31.s64 + 76;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r31,r22,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r22.s64;
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// add r30,r29,r8
	ctx.r30.u64 = ctx.r29.u64 + ctx.r8.u64;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// add r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r5,r11,20392
	ctx.r5.s64 = ctx.r11.s64 + 20392;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fecc80
	ctx.lr = 0x82FE95D0;
	sub_82FECC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe95f0
	if (ctx.cr0.lt) goto loc_82FE95F0;
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
loc_82FE95F0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE95F8"))) PPC_WEAK_FUNC(sub_82FE95F8);
PPC_FUNC_IMPL(__imp__sub_82FE95F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82FE9600;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// not r11,r6
	ctx.r11.u64 = ~ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// rlwinm r24,r11,30,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r4,1088
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1088, ctx.xer);
	// bge cr6,0x82fe9664
	if (!ctx.cr6.lt) goto loc_82FE9664;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fe9644
	if (ctx.cr6.eq) goto loc_82FE9644;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,122
	ctx.r31.u64 = ctx.r31.u64 | 122;
	// b 0x82fe96c0
	goto loc_82FE96C0;
loc_82FE9644:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1088
	ctx.r4.s64 = 1088;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FE9654;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fe96b0
	if (ctx.cr0.lt) goto loc_82FE96B0;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82fe9668
	goto loc_82FE9668;
loc_82FE9664:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82FE9668:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r4,r11,20392
	ctx.r4.s64 = ctx.r11.s64 + 20392;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fece70
	ctx.lr = 0x82FE9690;
	sub_82FECE70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fe96b0
	if (ctx.cr0.lt) goto loc_82FE96B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fed838
	ctx.lr = 0x82FE96A0;
	sub_82FED838(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fe96b0
	if (ctx.cr0.lt) goto loc_82FE96B0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82FE96B0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fe96c0
	if (ctx.cr6.eq) goto loc_82FE96C0;
	// bl 0x833b8984
	ctx.lr = 0x82FE96C0;
	__imp__XamFree(ctx, base);
loc_82FE96C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE96CC"))) PPC_WEAK_FUNC(sub_82FE96CC);
PPC_FUNC_IMPL(__imp__sub_82FE96CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE96D0"))) PPC_WEAK_FUNC(sub_82FE96D0);
PPC_FUNC_IMPL(__imp__sub_82FE96D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82FE96D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82e67ea8
	ctx.lr = 0x82FE96FC;
	sub_82E67EA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82fe972c
	if (!ctx.cr0.eq) goto loc_82FE972C;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b7b74
	ctx.lr = 0x82FE972C;
	__imp__XamUserReadProfileSettings(ctx, base);
loc_82FE972C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE9734"))) PPC_WEAK_FUNC(sub_82FE9734);
PPC_FUNC_IMPL(__imp__sub_82FE9734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE9738"))) PPC_WEAK_FUNC(sub_82FE9738);
PPC_FUNC_IMPL(__imp__sub_82FE9738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82FE9740;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82e67ea8
	ctx.lr = 0x82FE9768;
	sub_82E67EA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82fe979c
	if (!ctx.cr0.eq) goto loc_82FE979C;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b7b74
	ctx.lr = 0x82FE979C;
	__imp__XamUserReadProfileSettings(ctx, base);
loc_82FE979C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE97A4"))) PPC_WEAK_FUNC(sub_82FE97A4);
PPC_FUNC_IMPL(__imp__sub_82FE97A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE97A8"))) PPC_WEAK_FUNC(sub_82FE97A8);
PPC_FUNC_IMPL(__imp__sub_82FE97A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FE97B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x833b7ef4
	ctx.lr = 0x82FE97D0;
	__imp__XamUserGetXUID(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b89a4
	ctx.lr = 0x82FE97E8;
	__imp__XamUserWriteProfileSettings(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE97F0"))) PPC_WEAK_FUNC(sub_82FE97F0);
PPC_FUNC_IMPL(__imp__sub_82FE97F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FE97F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bge cr6,0x82fe981c
	if (!ctx.cr6.lt) goto loc_82FE981C;
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82fe98b4
	goto loc_82FE98B4;
loc_82FE981C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fe982c
	if (!ctx.cr6.eq) goto loc_82FE982C;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82fe98b4
	goto loc_82FE98B4;
loc_82FE982C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x833b7b84
	ctx.lr = 0x82FE9840;
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82fe9850
	if (ctx.cr6.eq) goto loc_82FE9850;
	// li r3,1245
	ctx.r3.s64 = 1245;
	// b 0x82fe98b4
	goto loc_82FE98B4;
loc_82FE9850:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x833b89b4
	ctx.lr = 0x82FE985C;
	__imp__XNetLogonGetTitleID(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,32777
	ctx.r4.u64 = ctx.r4.u64 | 32777;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x833b7c14
	ctx.lr = 0x82FE9884;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82fe9894
	if (!ctx.cr0.lt) goto loc_82FE9894;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82fe98b4
	goto loc_82FE98B4;
loc_82FE9894:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82fe98b0
	if (!ctx.cr6.eq) goto loc_82FE98B0;
	// bl 0x82beb980
	ctx.lr = 0x82FE98A0;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r3,r11,1627
	ctx.r3.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x82fe98b4
	goto loc_82FE98B4;
loc_82FE98B0:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82FE98B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE98BC"))) PPC_WEAK_FUNC(sub_82FE98BC);
PPC_FUNC_IMPL(__imp__sub_82FE98BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE98C0"))) PPC_WEAK_FUNC(sub_82FE98C0);
PPC_FUNC_IMPL(__imp__sub_82FE98C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// std r5,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE98CC"))) PPC_WEAK_FUNC(sub_82FE98CC);
PPC_FUNC_IMPL(__imp__sub_82FE98CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE98D0"))) PPC_WEAK_FUNC(sub_82FE98D0);
PPC_FUNC_IMPL(__imp__sub_82FE98D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE98DC"))) PPC_WEAK_FUNC(sub_82FE98DC);
PPC_FUNC_IMPL(__imp__sub_82FE98DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE98E0"))) PPC_WEAK_FUNC(sub_82FE98E0);
PPC_FUNC_IMPL(__imp__sub_82FE98E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwz r3,512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9910"))) PPC_WEAK_FUNC(sub_82FE9910);
PPC_FUNC_IMPL(__imp__sub_82FE9910) {
	PPC_FUNC_PROLOGUE();
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9918"))) PPC_WEAK_FUNC(sub_82FE9918);
PPC_FUNC_IMPL(__imp__sub_82FE9918) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9924"))) PPC_WEAK_FUNC(sub_82FE9924);
PPC_FUNC_IMPL(__imp__sub_82FE9924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE9928"))) PPC_WEAK_FUNC(sub_82FE9928);
PPC_FUNC_IMPL(__imp__sub_82FE9928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FE9930;
	__savegprlr_28(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// stw r4,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r4.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r5,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r5.u32);
	// li r3,518
	ctx.r3.s64 = 518;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x82fe93f0
	ctx.lr = 0x82FE9964;
	sub_82FE93F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fe9a54
	if (ctx.cr0.lt) goto loc_82FE9A54;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FE998C;
	sub_82FE9478(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fe9a54
	if (ctx.cr0.lt) goto loc_82FE9A54;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FE99A4;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fe9a54
	if (ctx.cr0.lt) goto loc_82FE9A54;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r3,518
	ctx.r3.s64 = 518;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FE99F0;
	sub_82FE9518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fe9a54
	if (ctx.cr0.lt) goto loc_82FE9A54;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9A04;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9A10;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,756
	ctx.r4.s64 = ctx.r1.s64 + 756;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9A1C;
	sub_82FE98E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9A28;
	sub_82FE98E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9A34;
	sub_82FE98E0(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32800
	ctx.r4.u64 = ctx.r4.u64 | 32800;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x833b7c34
	ctx.lr = 0x82FE9A4C;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82fe9a74
	if (!ctx.cr0.lt) goto loc_82FE9A74;
loc_82FE9A54:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fe9a64
	if (ctx.cr6.eq) goto loc_82FE9A64;
	// bl 0x833b8984
	ctx.lr = 0x82FE9A64;
	__imp__XamFree(ctx, base);
loc_82FE9A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb9a0
	ctx.lr = 0x82FE9A6C;
	sub_82BEB9A0(ctx, base);
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82fe9a7c
	goto loc_82FE9A7C;
loc_82FE9A74:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x833b8984
	ctx.lr = 0x82FE9A7C;
	__imp__XamFree(ctx, base);
loc_82FE9A7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE9A88"))) PPC_WEAK_FUNC(sub_82FE9A88);
PPC_FUNC_IMPL(__imp__sub_82FE9A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FE9A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r3,1414
	ctx.r3.s64 = 1414;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x82fe93f0
	ctx.lr = 0x82FE9AB8;
	sub_82FE93F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fe9b84
	if (ctx.cr0.lt) goto loc_82FE9B84;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FE9AE0;
	sub_82FE9478(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fe9b84
	if (ctx.cr0.lt) goto loc_82FE9B84;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FE9AF8;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fe9b84
	if (ctx.cr0.lt) goto loc_82FE9B84;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r3,1414
	ctx.r3.s64 = 1414;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FE9B44;
	sub_82FE9518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fe9b84
	if (ctx.cr0.lt) goto loc_82FE9B84;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9B58;
	sub_82FE98E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9B64;
	sub_82FE98E0(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32803
	ctx.r4.u64 = ctx.r4.u64 | 32803;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x833b7c34
	ctx.lr = 0x82FE9B7C;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82fe9ba4
	if (!ctx.cr0.lt) goto loc_82FE9BA4;
loc_82FE9B84:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fe9b94
	if (ctx.cr6.eq) goto loc_82FE9B94;
	// bl 0x833b8984
	ctx.lr = 0x82FE9B94;
	__imp__XamFree(ctx, base);
loc_82FE9B94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb9a0
	ctx.lr = 0x82FE9B9C;
	sub_82BEB9A0(ctx, base);
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82fe9bac
	goto loc_82FE9BAC;
loc_82FE9BA4:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x833b8984
	ctx.lr = 0x82FE9BAC;
	__imp__XamFree(ctx, base);
loc_82FE9BAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE9BB8"))) PPC_WEAK_FUNC(sub_82FE9BB8);
PPC_FUNC_IMPL(__imp__sub_82FE9BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82FE9BC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// stw r4,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r4.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FE9BF4;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe9e60
	if (ctx.cr0.lt) goto loc_82FE9E60;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FE9C1C;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe9e60
	if (ctx.cr0.lt) goto loc_82FE9E60;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3586
	ctx.r3.s64 = 3586;
	// addi r30,r11,1500
	ctx.r30.s64 = ctx.r11.s64 + 1500;
	// bl 0x82fe93f0
	ctx.lr = 0x82FE9C38;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe9e60
	if (ctx.cr0.lt) goto loc_82FE9E60;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FE9C60;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe9e60
	if (ctx.cr0.lt) goto loc_82FE9E60;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,1408
	ctx.r3.s64 = 1408;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FE9C7C;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe9e60
	if (ctx.cr0.lt) goto loc_82FE9E60;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FE9CA4;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe9e60
	if (ctx.cr0.lt) goto loc_82FE9E60;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,1411
	ctx.r3.s64 = 1411;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FE9CC0;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe9e60
	if (ctx.cr0.lt) goto loc_82FE9E60;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82fe9478
	ctx.lr = 0x82FE9CE8;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe9e60
	if (ctx.cr0.lt) goto loc_82FE9E60;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FE9D00;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe9e60
	if (ctx.cr0.lt) goto loc_82FE9E60;
	// lwz r11,844(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// beq cr6,0x82fe9d2c
	if (ctx.cr6.eq) goto loc_82FE9D2C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82FE9D20;
	sub_82CB0EC8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x82fe9d3c
	goto loc_82FE9D3C;
loc_82FE9D2C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r28,r11,11272
	ctx.r28.s64 = ctx.r11.s64 + 11272;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
loc_82FE9D3C:
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r25,r1,156
	ctx.r25.s64 = ctx.r1.s64 + 156;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r3,1411
	ctx.r3.s64 = 1411;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FE9D84;
	sub_82FE9518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe9e60
	if (ctx.cr0.lt) goto loc_82FE9E60;
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9D98;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,844
	ctx.r4.s64 = ctx.r1.s64 + 844;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9DA4;
	sub_82FE98E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9DB0;
	sub_82FE98E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9DBC;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9DC8;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9DD4;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9DE0;
	sub_82FE98E0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fe95f8
	ctx.lr = 0x82FE9E04;
	sub_82FE95F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fe9e60
	if (ctx.cr0.lt) goto loc_82FE9E60;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x833b7c14
	ctx.lr = 0x82FE9E58;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82fe9e8c
	if (!ctx.cr0.lt) goto loc_82FE9E8C;
loc_82FE9E60:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fe9e74
	if (ctx.cr6.eq) goto loc_82FE9E74;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x82fe9e78
	goto loc_82FE9E78;
loc_82FE9E74:
	// bl 0x82beb930
	ctx.lr = 0x82FE9E78;
	sub_82BEB930(ctx, base);
loc_82FE9E78:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fe9eac
	if (ctx.cr6.eq) goto loc_82FE9EAC;
	// bl 0x833b8984
	ctx.lr = 0x82FE9E88;
	__imp__XamFree(ctx, base);
	// b 0x82fe9eac
	goto loc_82FE9EAC;
loc_82FE9E8C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fe9e9c
	if (ctx.cr6.eq) goto loc_82FE9E9C;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82fe9eac
	goto loc_82FE9EAC;
loc_82FE9E9C:
	// bl 0x82beb980
	ctx.lr = 0x82FE9EA0;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82FE9EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FE9EB8"))) PPC_WEAK_FUNC(sub_82FE9EB8);
PPC_FUNC_IMPL(__imp__sub_82FE9EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FE9EC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r3.u32);
	// stw r4,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r4.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// li r3,2337
	ctx.r3.s64 = 2337;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FE9EF0;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea094
	if (ctx.cr0.lt) goto loc_82FEA094;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FE9F18;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea094
	if (ctx.cr0.lt) goto loc_82FEA094;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FE9F30;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea094
	if (ctx.cr0.lt) goto loc_82FEA094;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x833b89b4
	ctx.lr = 0x82FE9F40;
	__imp__XNetLogonGetTitleID(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// lwz r3,804(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x833b7ef4
	ctx.lr = 0x82FE9F54;
	__imp__XamUserGetXUID(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea094
	if (ctx.cr0.lt) goto loc_82FEA094;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x833b89c4
	ctx.lr = 0x82FE9F64;
	__imp__XNetLogonGetMachineID(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea094
	if (ctx.cr0.lt) goto loc_82FEA094;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,812(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// bl 0x82fed928
	ctx.lr = 0x82FE9F78;
	sub_82FED928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea094
	if (ctx.cr0.lt) goto loc_82FEA094;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r28,r1,152
	ctx.r28.s64 = ctx.r1.s64 + 152;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r3,2337
	ctx.r3.s64 = 2337;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FE9FC4;
	sub_82FE9518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea094
	if (ctx.cr0.lt) goto loc_82FEA094;
	// addi r4,r1,804
	ctx.r4.s64 = ctx.r1.s64 + 804;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9FD8;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,812
	ctx.r4.s64 = ctx.r1.s64 + 812;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9FE4;
	sub_82FE98E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9FF0;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FE9FFC;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA008;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA014;
	sub_82FE98E0(ctx, base);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fe95f8
	ctx.lr = 0x82FEA038;
	sub_82FE95F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea094
	if (ctx.cr0.lt) goto loc_82FEA094;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x833b7c14
	ctx.lr = 0x82FEA08C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82fea0c0
	if (!ctx.cr0.lt) goto loc_82FEA0C0;
loc_82FEA094:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fea0a8
	if (ctx.cr6.eq) goto loc_82FEA0A8;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// b 0x82fea0ac
	goto loc_82FEA0AC;
loc_82FEA0A8:
	// bl 0x82beb930
	ctx.lr = 0x82FEA0AC;
	sub_82BEB930(ctx, base);
loc_82FEA0AC:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fea0e0
	if (ctx.cr6.eq) goto loc_82FEA0E0;
	// bl 0x833b8984
	ctx.lr = 0x82FEA0BC;
	__imp__XamFree(ctx, base);
	// b 0x82fea0e0
	goto loc_82FEA0E0;
loc_82FEA0C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fea0d0
	if (ctx.cr6.eq) goto loc_82FEA0D0;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82fea0e0
	goto loc_82FEA0E0;
loc_82FEA0D0:
	// bl 0x82beb980
	ctx.lr = 0x82FEA0D4;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82FEA0E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEA0EC"))) PPC_WEAK_FUNC(sub_82FEA0EC);
PPC_FUNC_IMPL(__imp__sub_82FEA0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEA0F0"))) PPC_WEAK_FUNC(sub_82FEA0F0);
PPC_FUNC_IMPL(__imp__sub_82FEA0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FEA0F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r3.u32);
	// stw r4,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r4.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r6,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r6.u32);
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r7,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r7.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x82fe93f0
	ctx.lr = 0x82FEA134;
	sub_82FE93F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea23c
	if (ctx.cr0.lt) goto loc_82FEA23C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEA15C;
	sub_82FE9478(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea23c
	if (ctx.cr0.lt) goto loc_82FEA23C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FEA174;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea23c
	if (ctx.cr0.lt) goto loc_82FEA23C;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FEA1C0;
	sub_82FE9518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea23c
	if (ctx.cr0.lt) goto loc_82FEA23C;
	// addi r4,r1,756
	ctx.r4.s64 = ctx.r1.s64 + 756;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA1D4;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,764
	ctx.r4.s64 = ctx.r1.s64 + 764;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA1E0;
	sub_82FE98E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA1EC;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA1F8;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,788
	ctx.r4.s64 = ctx.r1.s64 + 788;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA204;
	sub_82FE98E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA210;
	sub_82FE98E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA21C;
	sub_82FE98E0(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32793
	ctx.r4.u64 = ctx.r4.u64 | 32793;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x833b7c34
	ctx.lr = 0x82FEA234;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82fea25c
	if (!ctx.cr0.lt) goto loc_82FEA25C;
loc_82FEA23C:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fea24c
	if (ctx.cr6.eq) goto loc_82FEA24C;
	// bl 0x833b8984
	ctx.lr = 0x82FEA24C;
	__imp__XamFree(ctx, base);
loc_82FEA24C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb9a0
	ctx.lr = 0x82FEA254;
	sub_82BEB9A0(ctx, base);
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82fea264
	goto loc_82FEA264;
loc_82FEA25C:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x833b8984
	ctx.lr = 0x82FEA264;
	__imp__XamFree(ctx, base);
loc_82FEA264:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEA270"))) PPC_WEAK_FUNC(sub_82FEA270);
PPC_FUNC_IMPL(__imp__sub_82FEA270) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r3.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x82fe93f0
	ctx.lr = 0x82FEA2A4;
	sub_82FE93F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea364
	if (ctx.cr0.lt) goto loc_82FEA364;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEA2CC;
	sub_82FE9478(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea364
	if (ctx.cr0.lt) goto loc_82FEA364;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FEA2E4;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea364
	if (ctx.cr0.lt) goto loc_82FEA364;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FEA330;
	sub_82FE9518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea364
	if (ctx.cr0.lt) goto loc_82FEA364;
	// addi r4,r1,724
	ctx.r4.s64 = ctx.r1.s64 + 724;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA344;
	sub_82FE98E0(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32838
	ctx.r4.u64 = ctx.r4.u64 | 32838;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x833b7c34
	ctx.lr = 0x82FEA35C;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82fea384
	if (!ctx.cr0.lt) goto loc_82FEA384;
loc_82FEA364:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fea374
	if (ctx.cr6.eq) goto loc_82FEA374;
	// bl 0x833b8984
	ctx.lr = 0x82FEA374;
	__imp__XamFree(ctx, base);
loc_82FEA374:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb9a0
	ctx.lr = 0x82FEA37C;
	sub_82BEB9A0(ctx, base);
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82fea38c
	goto loc_82FEA38C;
loc_82FEA384:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x833b8984
	ctx.lr = 0x82FEA38C;
	__imp__XamFree(ctx, base);
loc_82FEA38C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
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

__attribute__((alias("__imp__sub_82FEA3A8"))) PPC_WEAK_FUNC(sub_82FEA3A8);
PPC_FUNC_IMPL(__imp__sub_82FEA3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FEA3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// stw r4,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r4.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x82fe93f0
	ctx.lr = 0x82FEA3DC;
	sub_82FE93F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea4b4
	if (ctx.cr0.lt) goto loc_82FEA4B4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEA404;
	sub_82FE9478(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea4b4
	if (ctx.cr0.lt) goto loc_82FEA4B4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FEA41C;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea4b4
	if (ctx.cr0.lt) goto loc_82FEA4B4;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FEA468;
	sub_82FE9518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea4b4
	if (ctx.cr0.lt) goto loc_82FEA4B4;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA47C;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA488;
	sub_82FE98E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA494;
	sub_82FE98E0(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32798
	ctx.r4.u64 = ctx.r4.u64 | 32798;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x833b7c34
	ctx.lr = 0x82FEA4AC;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82fea4d4
	if (!ctx.cr0.lt) goto loc_82FEA4D4;
loc_82FEA4B4:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fea4c4
	if (ctx.cr6.eq) goto loc_82FEA4C4;
	// bl 0x833b8984
	ctx.lr = 0x82FEA4C4;
	__imp__XamFree(ctx, base);
loc_82FEA4C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb9a0
	ctx.lr = 0x82FEA4CC;
	sub_82BEB9A0(ctx, base);
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82fea4dc
	goto loc_82FEA4DC;
loc_82FEA4D4:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x833b8984
	ctx.lr = 0x82FEA4DC;
	__imp__XamFree(ctx, base);
loc_82FEA4DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEA4E8"))) PPC_WEAK_FUNC(sub_82FEA4E8);
PPC_FUNC_IMPL(__imp__sub_82FEA4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FEA4F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// stw r4,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r4.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x82fe93f0
	ctx.lr = 0x82FEA51C;
	sub_82FE93F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea5f4
	if (ctx.cr0.lt) goto loc_82FEA5F4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEA544;
	sub_82FE9478(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea5f4
	if (ctx.cr0.lt) goto loc_82FEA5F4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FEA55C;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea5f4
	if (ctx.cr0.lt) goto loc_82FEA5F4;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FEA5A8;
	sub_82FE9518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fea5f4
	if (ctx.cr0.lt) goto loc_82FEA5F4;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA5BC;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA5C8;
	sub_82FE98E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA5D4;
	sub_82FE98E0(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32836
	ctx.r4.u64 = ctx.r4.u64 | 32836;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x833b7c34
	ctx.lr = 0x82FEA5EC;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82fea614
	if (!ctx.cr0.lt) goto loc_82FEA614;
loc_82FEA5F4:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fea604
	if (ctx.cr6.eq) goto loc_82FEA604;
	// bl 0x833b8984
	ctx.lr = 0x82FEA604;
	__imp__XamFree(ctx, base);
loc_82FEA604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb9a0
	ctx.lr = 0x82FEA60C;
	sub_82BEB9A0(ctx, base);
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82fea61c
	goto loc_82FEA61C;
loc_82FEA614:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x833b8984
	ctx.lr = 0x82FEA61C;
	__imp__XamFree(ctx, base);
loc_82FEA61C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEA628"))) PPC_WEAK_FUNC(sub_82FEA628);
PPC_FUNC_IMPL(__imp__sub_82FEA628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FEA630;
	__savegprlr_26(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEA65C;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea82c
	if (ctx.cr0.lt) goto loc_82FEA82C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEA684;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea82c
	if (ctx.cr0.lt) goto loc_82FEA82C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3588
	ctx.r3.s64 = 3588;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEA6A0;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea82c
	if (ctx.cr0.lt) goto loc_82FEA82C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEA6C8;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea82c
	if (ctx.cr0.lt) goto loc_82FEA82C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3605
	ctx.r3.s64 = 3605;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEA6E4;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea82c
	if (ctx.cr0.lt) goto loc_82FEA82C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82fe9478
	ctx.lr = 0x82FEA70C;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea82c
	if (ctx.cr0.lt) goto loc_82FEA82C;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FEA724;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea82c
	if (ctx.cr0.lt) goto loc_82FEA82C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82FEA734;
	sub_82CB0EC8(ctx, base);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
	// addi r26,r1,148
	ctx.r26.s64 = ctx.r1.s64 + 148;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r3,3605
	ctx.r3.s64 = 3605;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FEA780;
	sub_82FE9518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea82c
	if (ctx.cr0.lt) goto loc_82FEA82C;
	// addi r4,r1,804
	ctx.r4.s64 = ctx.r1.s64 + 804;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA794;
	sub_82FE98E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA7A0;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEA7AC;
	sub_82FE98E0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fe95f8
	ctx.lr = 0x82FEA7D0;
	sub_82FE95F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fea82c
	if (ctx.cr0.lt) goto loc_82FEA82C;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x833b7c14
	ctx.lr = 0x82FEA824;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82fea858
	if (!ctx.cr0.lt) goto loc_82FEA858;
loc_82FEA82C:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fea840
	if (ctx.cr6.eq) goto loc_82FEA840;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x82fea844
	goto loc_82FEA844;
loc_82FEA840:
	// bl 0x82beb930
	ctx.lr = 0x82FEA844;
	sub_82BEB930(ctx, base);
loc_82FEA844:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fea878
	if (ctx.cr6.eq) goto loc_82FEA878;
	// bl 0x833b8984
	ctx.lr = 0x82FEA854;
	__imp__XamFree(ctx, base);
	// b 0x82fea878
	goto loc_82FEA878;
loc_82FEA858:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fea868
	if (ctx.cr6.eq) goto loc_82FEA868;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82fea878
	goto loc_82FEA878;
loc_82FEA868:
	// bl 0x82beb980
	ctx.lr = 0x82FEA86C;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82FEA878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEA884"))) PPC_WEAK_FUNC(sub_82FEA884);
PPC_FUNC_IMPL(__imp__sub_82FEA884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEA888"))) PPC_WEAK_FUNC(sub_82FEA888);
PPC_FUNC_IMPL(__imp__sub_82FEA888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82FEA890;
	__savegprlr_23(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// stw r5,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEA8CC;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feab08
	if (ctx.cr0.lt) goto loc_82FEAB08;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEA8F4;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feab08
	if (ctx.cr0.lt) goto loc_82FEAB08;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3073
	ctx.r3.s64 = 3073;
	// addi r30,r11,448
	ctx.r30.s64 = ctx.r11.s64 + 448;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEA910;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feab08
	if (ctx.cr0.lt) goto loc_82FEAB08;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEA938;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feab08
	if (ctx.cr0.lt) goto loc_82FEAB08;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3585
	ctx.r3.s64 = 3585;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEA954;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feab08
	if (ctx.cr0.lt) goto loc_82FEAB08;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEA97C;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feab08
	if (ctx.cr0.lt) goto loc_82FEAB08;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3601
	ctx.r3.s64 = 3601;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEA998;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feab08
	if (ctx.cr0.lt) goto loc_82FEAB08;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82fe9478
	ctx.lr = 0x82FEA9C0;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feab08
	if (ctx.cr0.lt) goto loc_82FEAB08;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FEA9D8;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feab08
	if (ctx.cr0.lt) goto loc_82FEAB08;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82FEA9E8;
	sub_82CB0EC8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r24,r1,144
	ctx.r24.s64 = ctx.r1.s64 + 144;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r23,r1,152
	ctx.r23.s64 = ctx.r1.s64 + 152;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r3,3601
	ctx.r3.s64 = 3601;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FEAA38;
	sub_82FE9518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feab08
	if (ctx.cr0.lt) goto loc_82FEAB08;
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAA4C;
	sub_82FE98E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAA58;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,852
	ctx.r4.s64 = ctx.r1.s64 + 852;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAA64;
	sub_82FE98E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAA70;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAA7C;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAA88;
	sub_82FE98E0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fe95f8
	ctx.lr = 0x82FEAAAC;
	sub_82FE95F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feab08
	if (ctx.cr0.lt) goto loc_82FEAB08;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x833b7c14
	ctx.lr = 0x82FEAB00;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82feab34
	if (!ctx.cr0.lt) goto loc_82FEAB34;
loc_82FEAB08:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82feab1c
	if (ctx.cr6.eq) goto loc_82FEAB1C;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x82feab20
	goto loc_82FEAB20;
loc_82FEAB1C:
	// bl 0x82beb930
	ctx.lr = 0x82FEAB20;
	sub_82BEB930(ctx, base);
loc_82FEAB20:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feab54
	if (ctx.cr6.eq) goto loc_82FEAB54;
	// bl 0x833b8984
	ctx.lr = 0x82FEAB30;
	__imp__XamFree(ctx, base);
	// b 0x82feab54
	goto loc_82FEAB54;
loc_82FEAB34:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82feab44
	if (ctx.cr6.eq) goto loc_82FEAB44;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82feab54
	goto loc_82FEAB54;
loc_82FEAB44:
	// bl 0x82beb980
	ctx.lr = 0x82FEAB48;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82FEAB54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEAB60"))) PPC_WEAK_FUNC(sub_82FEAB60);
PPC_FUNC_IMPL(__imp__sub_82FEAB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82FEAB68;
	__savegprlr_24(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// stw r5,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r6,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r6.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEABA4;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fead8c
	if (ctx.cr0.lt) goto loc_82FEAD8C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEABCC;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fead8c
	if (ctx.cr0.lt) goto loc_82FEAD8C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3587
	ctx.r3.s64 = 3587;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEABE8;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fead8c
	if (ctx.cr0.lt) goto loc_82FEAD8C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEAC10;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fead8c
	if (ctx.cr0.lt) goto loc_82FEAD8C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3604
	ctx.r3.s64 = 3604;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEAC2C;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fead8c
	if (ctx.cr0.lt) goto loc_82FEAD8C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82fe9478
	ctx.lr = 0x82FEAC54;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fead8c
	if (ctx.cr0.lt) goto loc_82FEAD8C;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FEAC6C;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fead8c
	if (ctx.cr0.lt) goto loc_82FEAD8C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82FEAC7C;
	sub_82CB0EC8(ctx, base);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r25,r1,144
	ctx.r25.s64 = ctx.r1.s64 + 144;
	// addi r24,r1,148
	ctx.r24.s64 = ctx.r1.s64 + 148;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r3,3604
	ctx.r3.s64 = 3604;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FEACC8;
	sub_82FE9518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fead8c
	if (ctx.cr0.lt) goto loc_82FEAD8C;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEACDC;
	sub_82FE98E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEACE8;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEACF4;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,844
	ctx.r4.s64 = ctx.r1.s64 + 844;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAD00;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAD0C;
	sub_82FE98E0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fe95f8
	ctx.lr = 0x82FEAD30;
	sub_82FE95F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fead8c
	if (ctx.cr0.lt) goto loc_82FEAD8C;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x833b7c14
	ctx.lr = 0x82FEAD84;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82feadb8
	if (!ctx.cr0.lt) goto loc_82FEADB8;
loc_82FEAD8C:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82feada0
	if (ctx.cr6.eq) goto loc_82FEADA0;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x82feada4
	goto loc_82FEADA4;
loc_82FEADA0:
	// bl 0x82beb930
	ctx.lr = 0x82FEADA4;
	sub_82BEB930(ctx, base);
loc_82FEADA4:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feadd8
	if (ctx.cr6.eq) goto loc_82FEADD8;
	// bl 0x833b8984
	ctx.lr = 0x82FEADB4;
	__imp__XamFree(ctx, base);
	// b 0x82feadd8
	goto loc_82FEADD8;
loc_82FEADB8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82feadc8
	if (ctx.cr6.eq) goto loc_82FEADC8;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82feadd8
	goto loc_82FEADD8;
loc_82FEADC8:
	// bl 0x82beb980
	ctx.lr = 0x82FEADCC;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82FEADD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEADE4"))) PPC_WEAK_FUNC(sub_82FEADE4);
PPC_FUNC_IMPL(__imp__sub_82FEADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEADE8"))) PPC_WEAK_FUNC(sub_82FEADE8);
PPC_FUNC_IMPL(__imp__sub_82FEADE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82FEADF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// stw r5,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEAE24;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb01c
	if (ctx.cr0.lt) goto loc_82FEB01C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEAE4C;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb01c
	if (ctx.cr0.lt) goto loc_82FEB01C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3586
	ctx.r3.s64 = 3586;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEAE68;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb01c
	if (ctx.cr0.lt) goto loc_82FEB01C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEAE90;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb01c
	if (ctx.cr0.lt) goto loc_82FEB01C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3603
	ctx.r3.s64 = 3603;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEAEAC;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb01c
	if (ctx.cr0.lt) goto loc_82FEB01C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82fe9478
	ctx.lr = 0x82FEAED4;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb01c
	if (ctx.cr0.lt) goto loc_82FEB01C;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FEAEEC;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb01c
	if (ctx.cr0.lt) goto loc_82FEB01C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82FEAEFC;
	sub_82CB0EC8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r25,r1,152
	ctx.r25.s64 = ctx.r1.s64 + 152;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r3,3603
	ctx.r3.s64 = 3603;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FEAF4C;
	sub_82FE9518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb01c
	if (ctx.cr0.lt) goto loc_82FEB01C;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAF60;
	sub_82FE98E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAF6C;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAF78;
	sub_82FE98E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAF84;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAF90;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEAF9C;
	sub_82FE98E0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fe95f8
	ctx.lr = 0x82FEAFC0;
	sub_82FE95F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb01c
	if (ctx.cr0.lt) goto loc_82FEB01C;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x833b7c14
	ctx.lr = 0x82FEB014;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82feb048
	if (!ctx.cr0.lt) goto loc_82FEB048;
loc_82FEB01C:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82feb030
	if (ctx.cr6.eq) goto loc_82FEB030;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x82feb034
	goto loc_82FEB034;
loc_82FEB030:
	// bl 0x82beb930
	ctx.lr = 0x82FEB034;
	sub_82BEB930(ctx, base);
loc_82FEB034:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb068
	if (ctx.cr6.eq) goto loc_82FEB068;
	// bl 0x833b8984
	ctx.lr = 0x82FEB044;
	__imp__XamFree(ctx, base);
	// b 0x82feb068
	goto loc_82FEB068;
loc_82FEB048:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82feb058
	if (ctx.cr6.eq) goto loc_82FEB058;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82feb068
	goto loc_82FEB068;
loc_82FEB058:
	// bl 0x82beb980
	ctx.lr = 0x82FEB05C;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82FEB068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEB074"))) PPC_WEAK_FUNC(sub_82FEB074);
PPC_FUNC_IMPL(__imp__sub_82FEB074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEB078"))) PPC_WEAK_FUNC(sub_82FEB078);
PPC_FUNC_IMPL(__imp__sub_82FEB078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FEB080;
	__savegprlr_26(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// stw r5,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r3,2049
	ctx.r3.s64 = 2049;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEB0BC;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb258
	if (ctx.cr0.lt) goto loc_82FEB258;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEB0E4;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb258
	if (ctx.cr0.lt) goto loc_82FEB258;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FEB0FC;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb258
	if (ctx.cr0.lt) goto loc_82FEB258;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x833b89b4
	ctx.lr = 0x82FEB10C;
	__imp__XNetLogonGetTitleID(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82FEB114:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82feb114
	if (!ctx.cr6.eq) goto loc_82FEB114;
	// lwz r10,836(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// sth r10,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r10.u16);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r3,2049
	ctx.r3.s64 = 2049;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// sth r11,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r11.u16);
	// bl 0x82fe9518
	ctx.lr = 0x82FEB17C;
	sub_82FE9518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb258
	if (ctx.cr0.lt) goto loc_82FEB258;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB190;
	sub_82FE98E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB19C;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB1A8;
	sub_82FE98E0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB1B4;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB1C0;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB1CC;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB1D8;
	sub_82FE98E0(ctx, base);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fe95f8
	ctx.lr = 0x82FEB1FC;
	sub_82FE95F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb258
	if (ctx.cr0.lt) goto loc_82FEB258;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x833b7c14
	ctx.lr = 0x82FEB250;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82feb284
	if (!ctx.cr0.lt) goto loc_82FEB284;
loc_82FEB258:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82feb26c
	if (ctx.cr6.eq) goto loc_82FEB26C;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x82feb270
	goto loc_82FEB270;
loc_82FEB26C:
	// bl 0x82beb930
	ctx.lr = 0x82FEB270;
	sub_82BEB930(ctx, base);
loc_82FEB270:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb2a4
	if (ctx.cr6.eq) goto loc_82FEB2A4;
	// bl 0x833b8984
	ctx.lr = 0x82FEB280;
	__imp__XamFree(ctx, base);
	// b 0x82feb2a4
	goto loc_82FEB2A4;
loc_82FEB284:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82feb294
	if (ctx.cr6.eq) goto loc_82FEB294;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82feb2a4
	goto loc_82FEB2A4;
loc_82FEB294:
	// bl 0x82beb980
	ctx.lr = 0x82FEB298;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82FEB2A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEB2B0"))) PPC_WEAK_FUNC(sub_82FEB2B0);
PPC_FUNC_IMPL(__imp__sub_82FEB2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FEB2B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r3,1796
	ctx.r3.s64 = 1796;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEB2EC;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb430
	if (ctx.cr0.lt) goto loc_82FEB430;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEB314;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb430
	if (ctx.cr0.lt) goto loc_82FEB430;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FEB32C;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb430
	if (ctx.cr0.lt) goto loc_82FEB430;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x833b89b4
	ctx.lr = 0x82FEB33C;
	__imp__XNetLogonGetTitleID(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r26,r1,148
	ctx.r26.s64 = ctx.r1.s64 + 148;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r3,1796
	ctx.r3.s64 = 1796;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FEB384;
	sub_82FE9518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb430
	if (ctx.cr0.lt) goto loc_82FEB430;
	// addi r4,r1,804
	ctx.r4.s64 = ctx.r1.s64 + 804;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB398;
	sub_82FE98E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB3A4;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB3B0;
	sub_82FE98E0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fe95f8
	ctx.lr = 0x82FEB3D4;
	sub_82FE95F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb430
	if (ctx.cr0.lt) goto loc_82FEB430;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x833b7c14
	ctx.lr = 0x82FEB428;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82feb45c
	if (!ctx.cr0.lt) goto loc_82FEB45C;
loc_82FEB430:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82feb444
	if (ctx.cr6.eq) goto loc_82FEB444;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// b 0x82feb448
	goto loc_82FEB448;
loc_82FEB444:
	// bl 0x82beb930
	ctx.lr = 0x82FEB448;
	sub_82BEB930(ctx, base);
loc_82FEB448:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb47c
	if (ctx.cr6.eq) goto loc_82FEB47C;
	// bl 0x833b8984
	ctx.lr = 0x82FEB458;
	__imp__XamFree(ctx, base);
	// b 0x82feb47c
	goto loc_82FEB47C;
loc_82FEB45C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82feb46c
	if (ctx.cr6.eq) goto loc_82FEB46C;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82feb47c
	goto loc_82FEB47C;
loc_82FEB46C:
	// bl 0x82beb980
	ctx.lr = 0x82FEB470;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82FEB47C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEB488"))) PPC_WEAK_FUNC(sub_82FEB488);
PPC_FUNC_IMPL(__imp__sub_82FEB488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FEB490;
	__savegprlr_27(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r3,1540
	ctx.r3.s64 = 1540;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82fe93f0
	ctx.lr = 0x82FEB4C0;
	sub_82FE93F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb650
	if (ctx.cr0.lt) goto loc_82FEB650;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9478
	ctx.lr = 0x82FEB4E8;
	sub_82FE9478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb650
	if (ctx.cr0.lt) goto loc_82FEB650;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b8994
	ctx.lr = 0x82FEB500;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb650
	if (ctx.cr0.lt) goto loc_82FEB650;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x833b89b4
	ctx.lr = 0x82FEB510;
	__imp__XNetLogonGetTitleID(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,836(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x833b7ef4
	ctx.lr = 0x82FEB524;
	__imp__XamUserGetXUID(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb650
	if (ctx.cr0.lt) goto loc_82FEB650;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x833b89c4
	ctx.lr = 0x82FEB534;
	__imp__XNetLogonGetMachineID(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb650
	if (ctx.cr0.lt) goto loc_82FEB650;
	// bl 0x82fedd40
	ctx.lr = 0x82FEB540;
	sub_82FEDD40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb650
	if (ctx.cr0.lt) goto loc_82FEB650;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r27,r1,152
	ctx.r27.s64 = ctx.r1.s64 + 152;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r3,1540
	ctx.r3.s64 = 1540;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x82fe9518
	ctx.lr = 0x82FEB58C;
	sub_82FE9518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb650
	if (ctx.cr0.lt) goto loc_82FEB650;
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB5A0;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB5AC;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB5B8;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB5C4;
	sub_82FE98E0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82fe98e0
	ctx.lr = 0x82FEB5D0;
	sub_82FE98E0(ctx, base);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fe95f8
	ctx.lr = 0x82FEB5F4;
	sub_82FE95F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feb650
	if (ctx.cr0.lt) goto loc_82FEB650;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x833b7c14
	ctx.lr = 0x82FEB648;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82feb67c
	if (!ctx.cr0.lt) goto loc_82FEB67C;
loc_82FEB650:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82feb664
	if (ctx.cr6.eq) goto loc_82FEB664;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// b 0x82feb668
	goto loc_82FEB668;
loc_82FEB664:
	// bl 0x82beb930
	ctx.lr = 0x82FEB668;
	sub_82BEB930(ctx, base);
loc_82FEB668:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb69c
	if (ctx.cr6.eq) goto loc_82FEB69C;
	// bl 0x833b8984
	ctx.lr = 0x82FEB678;
	__imp__XamFree(ctx, base);
	// b 0x82feb69c
	goto loc_82FEB69C;
loc_82FEB67C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82feb68c
	if (ctx.cr6.eq) goto loc_82FEB68C;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82feb69c
	goto loc_82FEB69C;
loc_82FEB68C:
	// bl 0x82beb980
	ctx.lr = 0x82FEB690;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82FEB69C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEB6A8"))) PPC_WEAK_FUNC(sub_82FEB6A8);
PPC_FUNC_IMPL(__imp__sub_82FEB6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82FEB6B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bge cr6,0x82feb844
	if (!ctx.cr6.lt) goto loc_82FEB844;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82feb844
	if (ctx.cr6.eq) goto loc_82FEB844;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82feb844
	if (ctx.cr6.eq) goto loc_82FEB844;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82feb844
	if (ctx.cr6.eq) goto loc_82FEB844;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r10,r31,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// rlwinm. r10,r10,0,24,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82feb844
	if (!ctx.cr0.eq) goto loc_82FEB844;
	// rlwinm. r10,r31,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82feb718
	if (ctx.cr0.eq) goto loc_82FEB718;
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb844
	if (ctx.cr0.eq) goto loc_82FEB844;
loc_82FEB718:
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb728
	if (ctx.cr0.eq) goto loc_82FEB728;
	// rlwinm. r9,r31,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82feb844
	if (ctx.cr0.eq) goto loc_82FEB844;
loc_82FEB728:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feb738
	if (ctx.cr6.eq) goto loc_82FEB738;
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb844
	if (ctx.cr0.eq) goto loc_82FEB844;
loc_82FEB738:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb74c
	if (ctx.cr0.eq) goto loc_82FEB74C;
	// andi. r11,r31,44
	ctx.r11.u64 = ctx.r31.u64 & 44;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82feb844
	if (ctx.cr0.eq) goto loc_82FEB844;
loc_82FEB74C:
	// rlwinm. r11,r31,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb78c
	if (ctx.cr0.eq) goto loc_82FEB78C;
	// andi. r9,r31,10
	ctx.r9.u64 = ctx.r31.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82feb844
	if (ctx.cr0.eq) goto loc_82FEB844;
	// rlwinm. r9,r31,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82feb77c
	if (!ctx.cr0.eq) goto loc_82FEB77C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82feb77c
	if (ctx.cr6.eq) goto loc_82FEB77C;
	// rlwinm r10,r31,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82feb844
	if (!ctx.cr6.eq) goto loc_82FEB844;
loc_82FEB77C:
	// rlwinm. r11,r31,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb78c
	if (ctx.cr0.eq) goto loc_82FEB78C;
	// rlwinm. r11,r31,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82feb844
	if (!ctx.cr0.eq) goto loc_82FEB844;
loc_82FEB78C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x833b89e4
	ctx.lr = 0x82FEB794;
	__imp__XamSessionCreateHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82feb848
	if (!ctx.cr0.eq) goto loc_82FEB848;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x833b89d4
	ctx.lr = 0x82FEB7B0;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82feb848
	if (!ctx.cr0.eq) goto loc_82FEB848;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// ori r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 | 16;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x833b7c14
	ctx.lr = 0x82FEB7F4;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82feb804
	if (!ctx.cr0.lt) goto loc_82FEB804;
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82feb834
	goto loc_82FEB834;
loc_82FEB804:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82feb820
	if (!ctx.cr6.eq) goto loc_82FEB820;
	// bl 0x82beb980
	ctx.lr = 0x82FEB810;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r30,r11,1627
	ctx.r30.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// b 0x82feb824
	goto loc_82FEB824;
loc_82FEB820:
	// li r30,997
	ctx.r30.s64 = 997;
loc_82FEB824:
	// cmplwi cr6,r30,997
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 997, ctx.xer);
	// beq cr6,0x82feb848
	if (ctx.cr6.eq) goto loc_82FEB848;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82feb848
	if (ctx.cr6.eq) goto loc_82FEB848;
loc_82FEB834:
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82bea4e0
	ctx.lr = 0x82FEB83C;
	sub_82BEA4E0(ctx, base);
	// stw r28,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r28.u32);
	// b 0x82feb848
	goto loc_82FEB848;
loc_82FEB844:
	// li r30,87
	ctx.r30.s64 = 87;
loc_82FEB848:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEB854"))) PPC_WEAK_FUNC(sub_82FEB854);
PPC_FUNC_IMPL(__imp__sub_82FEB854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEB858"))) PPC_WEAK_FUNC(sub_82FEB858);
PPC_FUNC_IMPL(__imp__sub_82FEB858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FEB860;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// rlwinm. r11,r31,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb88c
	if (ctx.cr0.eq) goto loc_82FEB88C;
	// rlwinm. r11,r31,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb88c
	if (ctx.cr0.eq) goto loc_82FEB88C;
	// li r30,87
	ctx.r30.s64 = 87;
	// b 0x82feb904
	goto loc_82FEB904;
loc_82FEB88C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x833b89d4
	ctx.lr = 0x82FEB894;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82feb904
	if (!ctx.cr0.eq) goto loc_82FEB904;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x833b7c14
	ctx.lr = 0x82FEB8CC;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82feb8dc
	if (!ctx.cr0.lt) goto loc_82FEB8DC;
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82feb8fc
	goto loc_82FEB8FC;
loc_82FEB8DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82feb8f8
	if (!ctx.cr6.eq) goto loc_82FEB8F8;
	// bl 0x82beb980
	ctx.lr = 0x82FEB8E8;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r30,r11,1627
	ctx.r30.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// b 0x82feb8fc
	goto loc_82FEB8FC;
loc_82FEB8F8:
	// li r30,997
	ctx.r30.s64 = 997;
loc_82FEB8FC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FEB904;
	__imp__ObDereferenceObject(ctx, base);
loc_82FEB904:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEB910"))) PPC_WEAK_FUNC(sub_82FEB910);
PPC_FUNC_IMPL(__imp__sub_82FEB910) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x833b89d4
	ctx.lr = 0x82FEB930;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82feb9a0
	if (!ctx.cr0.eq) goto loc_82FEB9A0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,17
	ctx.r4.u64 = ctx.r4.u64 | 17;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x833b7c14
	ctx.lr = 0x82FEB968;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82feb978
	if (!ctx.cr0.lt) goto loc_82FEB978;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82feb998
	goto loc_82FEB998;
loc_82FEB978:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82feb994
	if (!ctx.cr6.eq) goto loc_82FEB994;
	// bl 0x82beb980
	ctx.lr = 0x82FEB984;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// b 0x82feb998
	goto loc_82FEB998;
loc_82FEB994:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82FEB998:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FEB9A0;
	__imp__ObDereferenceObject(ctx, base);
loc_82FEB9A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FEB9BC"))) PPC_WEAK_FUNC(sub_82FEB9BC);
PPC_FUNC_IMPL(__imp__sub_82FEB9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEB9C0"))) PPC_WEAK_FUNC(sub_82FEB9C0);
PPC_FUNC_IMPL(__imp__sub_82FEB9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FEB9C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x833b89d4
	ctx.lr = 0x82FEB9E4;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82feba5c
	if (!ctx.cr0.eq) goto loc_82FEBA5C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x833b7c14
	ctx.lr = 0x82FEBA24;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82feba34
	if (!ctx.cr0.lt) goto loc_82FEBA34;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82feba54
	goto loc_82FEBA54;
loc_82FEBA34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82feba50
	if (!ctx.cr6.eq) goto loc_82FEBA50;
	// bl 0x82beb980
	ctx.lr = 0x82FEBA40;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// b 0x82feba54
	goto loc_82FEBA54;
loc_82FEBA50:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82FEBA54:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FEBA5C;
	__imp__ObDereferenceObject(ctx, base);
loc_82FEBA5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEBA68"))) PPC_WEAK_FUNC(sub_82FEBA68);
PPC_FUNC_IMPL(__imp__sub_82FEBA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FEBA70;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x833b89d4
	ctx.lr = 0x82FEBA8C;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82febb04
	if (!ctx.cr0.eq) goto loc_82FEBB04;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x833b7c14
	ctx.lr = 0x82FEBACC;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82febadc
	if (!ctx.cr0.lt) goto loc_82FEBADC;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82febafc
	goto loc_82FEBAFC;
loc_82FEBADC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82febaf8
	if (!ctx.cr6.eq) goto loc_82FEBAF8;
	// bl 0x82beb980
	ctx.lr = 0x82FEBAE8;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// b 0x82febafc
	goto loc_82FEBAFC;
loc_82FEBAF8:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82FEBAFC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FEBB04;
	__imp__ObDereferenceObject(ctx, base);
loc_82FEBB04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEBB10"))) PPC_WEAK_FUNC(sub_82FEBB10);
PPC_FUNC_IMPL(__imp__sub_82FEBB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FEBB18;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x833b89d4
	ctx.lr = 0x82FEBB30;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82febba8
	if (!ctx.cr0.eq) goto loc_82FEBBA8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x833b7c14
	ctx.lr = 0x82FEBB70;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82febb80
	if (!ctx.cr0.lt) goto loc_82FEBB80;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82febba0
	goto loc_82FEBBA0;
loc_82FEBB80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82febb9c
	if (!ctx.cr6.eq) goto loc_82FEBB9C;
	// bl 0x82beb980
	ctx.lr = 0x82FEBB8C;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// b 0x82febba0
	goto loc_82FEBBA0;
loc_82FEBB9C:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82FEBBA0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FEBBA8;
	__imp__ObDereferenceObject(ctx, base);
loc_82FEBBA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEBBB4"))) PPC_WEAK_FUNC(sub_82FEBBB4);
PPC_FUNC_IMPL(__imp__sub_82FEBBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEBBB8"))) PPC_WEAK_FUNC(sub_82FEBBB8);
PPC_FUNC_IMPL(__imp__sub_82FEBBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FEBBC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x833b89d4
	ctx.lr = 0x82FEBBD8;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82febc50
	if (!ctx.cr0.eq) goto loc_82FEBC50;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x833b7c14
	ctx.lr = 0x82FEBC18;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82febc28
	if (!ctx.cr0.lt) goto loc_82FEBC28;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82febc48
	goto loc_82FEBC48;
loc_82FEBC28:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82febc44
	if (!ctx.cr6.eq) goto loc_82FEBC44;
	// bl 0x82beb980
	ctx.lr = 0x82FEBC34;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// b 0x82febc48
	goto loc_82FEBC48;
loc_82FEBC44:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82FEBC48:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FEBC50;
	__imp__ObDereferenceObject(ctx, base);
loc_82FEBC50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEBC5C"))) PPC_WEAK_FUNC(sub_82FEBC5C);
PPC_FUNC_IMPL(__imp__sub_82FEBC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEBC60"))) PPC_WEAK_FUNC(sub_82FEBC60);
PPC_FUNC_IMPL(__imp__sub_82FEBC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FEBC68;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82febd20
	if (ctx.cr6.eq) goto loc_82FEBD20;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,3592
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3592, ctx.xer);
	// blt cr6,0x82febd20
	if (ctx.cr6.lt) goto loc_82FEBD20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x833b89d4
	ctx.lr = 0x82FEBC9C;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82febd2c
	if (!ctx.cr0.eq) goto loc_82FEBD2C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,300
	ctx.r10.s64 = 300;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// std r26,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r26.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// bl 0x833b7c14
	ctx.lr = 0x82FEBCE4;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82febcf4
	if (!ctx.cr0.lt) goto loc_82FEBCF4;
	// li r29,1627
	ctx.r29.s64 = 1627;
	// b 0x82febd14
	goto loc_82FEBD14;
loc_82FEBCF4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82febd10
	if (!ctx.cr6.eq) goto loc_82FEBD10;
	// bl 0x82beb980
	ctx.lr = 0x82FEBD00;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r29,r11,1627
	ctx.r29.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// b 0x82febd14
	goto loc_82FEBD14;
loc_82FEBD10:
	// li r29,997
	ctx.r29.s64 = 997;
loc_82FEBD14:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FEBD1C;
	__imp__ObDereferenceObject(ctx, base);
	// b 0x82febd2c
	goto loc_82FEBD2C;
loc_82FEBD20:
	// li r11,3592
	ctx.r11.s64 = 3592;
	// li r29,122
	ctx.r29.s64 = 122;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82FEBD2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEBD38"))) PPC_WEAK_FUNC(sub_82FEBD38);
PPC_FUNC_IMPL(__imp__sub_82FEBD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FEBD40;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x833b89d4
	ctx.lr = 0x82FEBD54;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82febdc4
	if (!ctx.cr0.eq) goto loc_82FEBDC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r4,r4,20
	ctx.r4.u64 = ctx.r4.u64 | 20;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x833b7c14
	ctx.lr = 0x82FEBD8C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82febd9c
	if (!ctx.cr0.lt) goto loc_82FEBD9C;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82febdbc
	goto loc_82FEBDBC;
loc_82FEBD9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82febdb8
	if (!ctx.cr6.eq) goto loc_82FEBDB8;
	// bl 0x82beb980
	ctx.lr = 0x82FEBDA8;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// b 0x82febdbc
	goto loc_82FEBDBC;
loc_82FEBDB8:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82FEBDBC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FEBDC4;
	__imp__ObDereferenceObject(ctx, base);
loc_82FEBDC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEBDD0"))) PPC_WEAK_FUNC(sub_82FEBDD0);
PPC_FUNC_IMPL(__imp__sub_82FEBDD0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x833b89d4
	ctx.lr = 0x82FEBDF0;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82febe60
	if (!ctx.cr0.eq) goto loc_82FEBE60;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x833b7c14
	ctx.lr = 0x82FEBE28;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82febe38
	if (!ctx.cr0.lt) goto loc_82FEBE38;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82febe58
	goto loc_82FEBE58;
loc_82FEBE38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82febe54
	if (!ctx.cr6.eq) goto loc_82FEBE54;
	// bl 0x82beb980
	ctx.lr = 0x82FEBE44;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// b 0x82febe58
	goto loc_82FEBE58;
loc_82FEBE54:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82FEBE58:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FEBE60;
	__imp__ObDereferenceObject(ctx, base);
loc_82FEBE60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FEBE7C"))) PPC_WEAK_FUNC(sub_82FEBE7C);
PPC_FUNC_IMPL(__imp__sub_82FEBE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEBE80"))) PPC_WEAK_FUNC(sub_82FEBE80);
PPC_FUNC_IMPL(__imp__sub_82FEBE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FEBE88;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mulli r11,r5,1326
	ctx.r11.s64 = ctx.r5.s64 * 1326;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82febf50
	if (ctx.cr6.lt) goto loc_82FEBF50;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82febf50
	if (ctx.cr6.eq) goto loc_82FEBF50;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// ori r4,r4,22
	ctx.r4.u64 = ctx.r4.u64 | 22;
	// sth r30,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r30.u16);
	// li r3,251
	ctx.r3.s64 = 251;
	// sth r29,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r29.u16);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r28,252(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x833b7c14
	ctx.lr = 0x82FEBF0C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82febf2c
	if (!ctx.cr0.lt) goto loc_82FEBF2C;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20999
	ctx.r11.u64 = ctx.r11.u64 | 20999;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82febf50
	if (ctx.cr6.eq) goto loc_82FEBF50;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82febf58
	goto loc_82FEBF58;
loc_82FEBF2C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82febf48
	if (!ctx.cr6.eq) goto loc_82FEBF48;
	// bl 0x82beb980
	ctx.lr = 0x82FEBF38;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r3,r11,1627
	ctx.r3.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x82febf58
	goto loc_82FEBF58;
loc_82FEBF48:
	// li r3,997
	ctx.r3.s64 = 997;
	// b 0x82febf58
	goto loc_82FEBF58;
loc_82FEBF50:
	// li r3,122
	ctx.r3.s64 = 122;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82FEBF58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEBF60"))) PPC_WEAK_FUNC(sub_82FEBF60);
PPC_FUNC_IMPL(__imp__sub_82FEBF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FEBF68;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mulli r11,r5,1326
	ctx.r11.s64 = ctx.r5.s64 * 1326;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82fec034
	if (ctx.cr6.lt) goto loc_82FEC034;
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fec034
	if (ctx.cr6.eq) goto loc_82FEC034;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// li r7,36
	ctx.r7.s64 = 36;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// sth r29,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r29.u16);
	// sth r8,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r28,276(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x833b7c14
	ctx.lr = 0x82FEBFF0;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82fec010
	if (!ctx.cr0.lt) goto loc_82FEC010;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20999
	ctx.r11.u64 = ctx.r11.u64 | 20999;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82fec034
	if (ctx.cr6.eq) goto loc_82FEC034;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82fec03c
	goto loc_82FEC03C;
loc_82FEC010:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82fec02c
	if (!ctx.cr6.eq) goto loc_82FEC02C;
	// bl 0x82beb980
	ctx.lr = 0x82FEC01C;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r3,r11,1627
	ctx.r3.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x82fec03c
	goto loc_82FEC03C;
loc_82FEC02C:
	// li r3,997
	ctx.r3.s64 = 997;
	// b 0x82fec03c
	goto loc_82FEC03C;
loc_82FEC034:
	// li r3,122
	ctx.r3.s64 = 122;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82FEC03C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEC044"))) PPC_WEAK_FUNC(sub_82FEC044);
PPC_FUNC_IMPL(__imp__sub_82FEC044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC048"))) PPC_WEAK_FUNC(sub_82FEC048);
PPC_FUNC_IMPL(__imp__sub_82FEC048) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,1334
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1334, ctx.xer);
	// blt cr6,0x82fec0fc
	if (ctx.cr6.lt) goto loc_82FEC0FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fec0fc
	if (ctx.cr6.eq) goto loc_82FEC0FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// std r3,84(r1)
	PPC_STORE_U64(ctx.r1.u32 + 84, ctx.r3.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// li r3,251
	ctx.r3.s64 = 251;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x833b7c14
	ctx.lr = 0x82FEC0B8;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82fec0d8
	if (!ctx.cr0.lt) goto loc_82FEC0D8;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20999
	ctx.r11.u64 = ctx.r11.u64 | 20999;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82fec0fc
	if (ctx.cr6.eq) goto loc_82FEC0FC;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82fec108
	goto loc_82FEC108;
loc_82FEC0D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fec0f4
	if (!ctx.cr6.eq) goto loc_82FEC0F4;
	// bl 0x82beb980
	ctx.lr = 0x82FEC0E4;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r3,r11,1627
	ctx.r3.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x82fec108
	goto loc_82FEC108;
loc_82FEC0F4:
	// li r3,997
	ctx.r3.s64 = 997;
	// b 0x82fec108
	goto loc_82FEC108;
loc_82FEC0FC:
	// li r11,1334
	ctx.r11.s64 = 1334;
	// li r3,122
	ctx.r3.s64 = 122;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FEC108:
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

__attribute__((alias("__imp__sub_82FEC120"))) PPC_WEAK_FUNC(sub_82FEC120);
PPC_FUNC_IMPL(__imp__sub_82FEC120) {
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
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x833b7c34
	ctx.lr = 0x82FEC14C;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec15c
	if (ctx.cr0.lt) goto loc_82FEC15C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fec164
	goto loc_82FEC164;
loc_82FEC15C:
	// bl 0x82beb930
	ctx.lr = 0x82FEC160;
	sub_82BEB930(ctx, base);
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82FEC164:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC174"))) PPC_WEAK_FUNC(sub_82FEC174);
PPC_FUNC_IMPL(__imp__sub_82FEC174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC178"))) PPC_WEAK_FUNC(sub_82FEC178);
PPC_FUNC_IMPL(__imp__sub_82FEC178) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x833b89d4
	ctx.lr = 0x82FEC198;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82fec1fc
	if (!ctx.cr0.eq) goto loc_82FEC1FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,38
	ctx.r4.u64 = ctx.r4.u64 | 38;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x833b7c14
	ctx.lr = 0x82FEC1C4;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82fec1d4
	if (!ctx.cr0.lt) goto loc_82FEC1D4;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82fec1f4
	goto loc_82FEC1F4;
loc_82FEC1D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fec1f0
	if (!ctx.cr6.eq) goto loc_82FEC1F0;
	// bl 0x82beb980
	ctx.lr = 0x82FEC1E0;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// b 0x82fec1f4
	goto loc_82FEC1F4;
loc_82FEC1F0:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82FEC1F4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FEC1FC;
	__imp__ObDereferenceObject(ctx, base);
loc_82FEC1FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FEC218"))) PPC_WEAK_FUNC(sub_82FEC218);
PPC_FUNC_IMPL(__imp__sub_82FEC218) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,3,13,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x7FFF8;
	// clrlwi. r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FEC22C:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// mulli r9,r9,9
	ctx.r9.s64 = ctx.r9.s64 * 9;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// blt cr6,0x82fec22c
	if (ctx.cr6.lt) goto loc_82FEC22C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC254"))) PPC_WEAK_FUNC(sub_82FEC254);
PPC_FUNC_IMPL(__imp__sub_82FEC254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC258"))) PPC_WEAK_FUNC(sub_82FEC258);
PPC_FUNC_IMPL(__imp__sub_82FEC258) {
	PPC_FUNC_PROLOGUE();
	// li r3,40
	ctx.r3.s64 = 40;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r11,54
	ctx.r3.s64 = ctx.r11.s64 + 54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC270"))) PPC_WEAK_FUNC(sub_82FEC270);
PPC_FUNC_IMPL(__imp__sub_82FEC270) {
	PPC_FUNC_PROLOGUE();
	// rldicl r11,r3,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFF;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x82fec28c
	if (!ctx.cr6.eq) goto loc_82FEC28C;
	// rlwinm. r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82FEC28C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC294"))) PPC_WEAK_FUNC(sub_82FEC294);
PPC_FUNC_IMPL(__imp__sub_82FEC294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC298"))) PPC_WEAK_FUNC(sub_82FEC298);
PPC_FUNC_IMPL(__imp__sub_82FEC298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FEC2A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rldicl r11,r31,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u64, 16) & 0xFFFF;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x82fec2d0
	if (!ctx.cr6.eq) goto loc_82FEC2D0;
	// rlwinm. r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fec348
	if (!ctx.cr0.eq) goto loc_82FEC348;
loc_82FEC2D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x833b89d4
	ctx.lr = 0x82FEC2D8;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82fec348
	if (!ctx.cr0.eq) goto loc_82FEC348;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x833b7c14
	ctx.lr = 0x82FEC310;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82fec320
	if (!ctx.cr0.lt) goto loc_82FEC320;
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82fec340
	goto loc_82FEC340;
loc_82FEC320:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82fec33c
	if (!ctx.cr6.eq) goto loc_82FEC33C;
	// bl 0x82beb980
	ctx.lr = 0x82FEC32C;
	sub_82BEB980(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r30,r11,1627
	ctx.r30.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// b 0x82fec340
	goto loc_82FEC340;
loc_82FEC33C:
	// li r30,997
	ctx.r30.s64 = 997;
loc_82FEC340:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FEC348;
	__imp__ObDereferenceObject(ctx, base);
loc_82FEC348:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEC354"))) PPC_WEAK_FUNC(sub_82FEC354);
PPC_FUNC_IMPL(__imp__sub_82FEC354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC358"))) PPC_WEAK_FUNC(sub_82FEC358);
PPC_FUNC_IMPL(__imp__sub_82FEC358) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x833b7c34
	ctx.lr = 0x82FEC38C;
	__imp__XMsgInProcessCall(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC3A0"))) PPC_WEAK_FUNC(sub_82FEC3A0);
PPC_FUNC_IMPL(__imp__sub_82FEC3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfd f0,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
	// stfd f0,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.f0.u64);
	// stfd f0,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.f0.u64);
	// beq cr6,0x82fec428
	if (ctx.cr6.eq) goto loc_82FEC428;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82FEC3C4:
	// lfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,0(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// stfd f0,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.f0.u64);
	// lfd f0,0(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfd f13,0(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// fmadd f0,f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64;
	// stfd f0,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.f0.u64);
	// bne 0x82fec3c4
	if (!ctx.cr0.eq) goto loc_82FEC3C4;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfd f13,0(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f0,-18352(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// fdiv f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 / ctx.f12.f64;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f13,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.f13.u64);
	// lfd f13,0(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fsqrt f0,f0
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// stfd f0,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.f0.u64);
loc_82FEC428:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC430"))) PPC_WEAK_FUNC(sub_82FEC430);
PPC_FUNC_IMPL(__imp__sub_82FEC430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FEC438;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x833b7c24
	ctx.lr = 0x82FEC45C;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8206
	ctx.r11.s64 = 537788416;
	// ori r11,r11,55296
	ctx.r11.u64 = ctx.r11.u64 | 55296;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fec484
	if (!ctx.cr6.lt) goto loc_82FEC484;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// bl 0x82fedd88
	ctx.lr = 0x82FEC480;
	sub_82FEDD88(ctx, base);
	// b 0x82fec50c
	goto loc_82FEC50C;
loc_82FEC484:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b89d4
	ctx.lr = 0x82FEC490;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82fec50c
	if (!ctx.cr0.eq) goto loc_82FEC50C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x833b7c14
	ctx.lr = 0x82FEC4D4;
	__imp__XMsgStartIORequest(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82fec4e8
	if (!ctx.cr0.lt) goto loc_82FEC4E8;
loc_82FEC4E0:
	// li r11,1627
	ctx.r11.s64 = 1627;
	// b 0x82fec508
	goto loc_82FEC508;
loc_82FEC4E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fec504
	if (!ctx.cr6.eq) goto loc_82FEC504;
	// bl 0x82beb980
	ctx.lr = 0x82FEC4F4;
	sub_82BEB980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec4e0
	if (ctx.cr0.lt) goto loc_82FEC4E0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x82fec50c
	goto loc_82FEC50C;
loc_82FEC504:
	// li r11,997
	ctx.r11.s64 = 997;
loc_82FEC508:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82FEC50C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fec51c
	if (ctx.cr6.eq) goto loc_82FEC51C;
	// bl 0x833b79e4
	ctx.lr = 0x82FEC51C;
	__imp__ObDereferenceObject(ctx, base);
loc_82FEC51C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEC528"))) PPC_WEAK_FUNC(sub_82FEC528);
PPC_FUNC_IMPL(__imp__sub_82FEC528) {
	PPC_FUNC_PROLOGUE();
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82fedf18
	sub_82FEDF18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEC530"))) PPC_WEAK_FUNC(sub_82FEC530);
PPC_FUNC_IMPL(__imp__sub_82FEC530) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fee810
	ctx.lr = 0x82FEC54C;
	sub_82FEE810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC55C"))) PPC_WEAK_FUNC(sub_82FEC55C);
PPC_FUNC_IMPL(__imp__sub_82FEC55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC560"))) PPC_WEAK_FUNC(sub_82FEC560);
PPC_FUNC_IMPL(__imp__sub_82FEC560) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fee810
	ctx.lr = 0x82FEC57C;
	sub_82FEE810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC58C"))) PPC_WEAK_FUNC(sub_82FEC58C);
PPC_FUNC_IMPL(__imp__sub_82FEC58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC590"))) PPC_WEAK_FUNC(sub_82FEC590);
PPC_FUNC_IMPL(__imp__sub_82FEC590) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82fee810
	ctx.lr = 0x82FEC5BC;
	sub_82FEE810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec5d0
	if (ctx.cr0.lt) goto loc_82FEC5D0;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee668
	ctx.lr = 0x82FEC5D0;
	sub_82FEE668(ctx, base);
loc_82FEC5D0:
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

__attribute__((alias("__imp__sub_82FEC5E8"))) PPC_WEAK_FUNC(sub_82FEC5E8);
PPC_FUNC_IMPL(__imp__sub_82FEC5E8) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fee810
	ctx.lr = 0x82FEC604;
	sub_82FEE810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC614"))) PPC_WEAK_FUNC(sub_82FEC614);
PPC_FUNC_IMPL(__imp__sub_82FEC614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC618"))) PPC_WEAK_FUNC(sub_82FEC618);
PPC_FUNC_IMPL(__imp__sub_82FEC618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FEC620;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82fee810
	ctx.lr = 0x82FEC640;
	sub_82FEE810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec660
	if (ctx.cr0.lt) goto loc_82FEC660;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec660
	if (ctx.cr0.eq) goto loc_82FEC660;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee668
	ctx.lr = 0x82FEC660;
	sub_82FEE668(ctx, base);
loc_82FEC660:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEC668"))) PPC_WEAK_FUNC(sub_82FEC668);
PPC_FUNC_IMPL(__imp__sub_82FEC668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FEC670;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 16, ctx.xer);
	// bge cr6,0x82fec7e4
	if (!ctx.cr6.lt) goto loc_82FEC7E4;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// bl 0x82fee810
	ctx.lr = 0x82FEC698;
	sub_82FEE810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82fec7e4
	if (ctx.cr6.lt) goto loc_82FEC7E4;
	// beq cr6,0x82fec6bc
	if (ctx.cr6.eq) goto loc_82FEC6BC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82fec7e4
	if (!ctx.cr6.lt) goto loc_82FEC7E4;
loc_82FEC6BC:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee668
	ctx.lr = 0x82FEC6C8;
	sub_82FEE668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec6f8
	if (ctx.cr0.eq) goto loc_82FEC6F8;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee810
	ctx.lr = 0x82FEC6F0;
	sub_82FEE810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
loc_82FEC6F8:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec718
	if (ctx.cr0.eq) goto loc_82FEC718;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee668
	ctx.lr = 0x82FEC710;
	sub_82FEE668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
loc_82FEC718:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r28,2
	ctx.r28.s64 = 2;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec764
	if (ctx.cr0.eq) goto loc_82FEC764;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee810
	ctx.lr = 0x82FEC73C;
	sub_82FEE810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec764
	if (ctx.cr0.eq) goto loc_82FEC764;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee668
	ctx.lr = 0x82FEC75C;
	sub_82FEE668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
loc_82FEC764:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82fec794
	if (!ctx.cr6.eq) goto loc_82FEC794;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fec618
	ctx.lr = 0x82FEC784;
	sub_82FEC618(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82fec798
	goto loc_82FEC798;
loc_82FEC794:
	// lhz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
loc_82FEC798:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82fec87c
	if (!ctx.cr6.eq) goto loc_82FEC87C;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fec7f4
	if (ctx.cr6.lt) goto loc_82FEC7F4;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82fee810
	ctx.lr = 0x82FEC7CC;
	sub_82FEE810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
loc_82FEC7E0:
	// beq cr6,0x82fec8d0
	if (ctx.cr6.eq) goto loc_82FEC8D0;
loc_82FEC7E4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82FEC7EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82FEC7F4:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x82fee610
	ctx.lr = 0x82FEC7FC;
	sub_82FEE610(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fec838
	if (ctx.cr0.eq) goto loc_82FEC838;
loc_82FEC814:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee668
	ctx.lr = 0x82FEC820;
	sub_82FEE668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fec814
	if (ctx.cr6.lt) goto loc_82FEC814;
loc_82FEC838:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee668
	ctx.lr = 0x82FEC844;
	sub_82FEE668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82fee870
	ctx.lr = 0x82FEC864;
	sub_82FEE870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x82fec8d0
	goto loc_82FEC8D0;
loc_82FEC87C:
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82fee810
	ctx.lr = 0x82FEC890;
	sub_82FEE810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82fec900
	if (ctx.cr6.lt) goto loc_82FEC900;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82fec7e0
	if (!ctx.cr6.lt) goto loc_82FEC7E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee0f8
	ctx.lr = 0x82FEC8BC;
	sub_82FEE0F8(ctx, base);
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fec668
	ctx.lr = 0x82FEC8C8;
	sub_82FEC668(ctx, base);
loc_82FEC8C8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
loc_82FEC8D0:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82fec8ec
	if (!ctx.cr6.eq) goto loc_82FEC8EC;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FEC8EC:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82fec798
	if (!ctx.cr6.eq) goto loc_82FEC798;
	// b 0x82fec7ec
	goto loc_82FEC7EC;
loc_82FEC900:
	// rlwinm. r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec924
	if (ctx.cr0.eq) goto loc_82FEC924;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee810
	ctx.lr = 0x82FEC91C;
	sub_82FEE810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
loc_82FEC924:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec944
	if (ctx.cr0.eq) goto loc_82FEC944;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee668
	ctx.lr = 0x82FEC93C;
	sub_82FEE668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
loc_82FEC944:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec98c
	if (ctx.cr0.eq) goto loc_82FEC98C;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee810
	ctx.lr = 0x82FEC964;
	sub_82FEE810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec98c
	if (ctx.cr0.eq) goto loc_82FEC98C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee668
	ctx.lr = 0x82FEC984;
	sub_82FEE668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fec7ec
	if (ctx.cr0.lt) goto loc_82FEC7EC;
loc_82FEC98C:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec8d0
	if (ctx.cr0.eq) goto loc_82FEC8D0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fec590
	ctx.lr = 0x82FEC9A4;
	sub_82FEC590(ctx, base);
	// b 0x82fec8c8
	goto loc_82FEC8C8;
}

__attribute__((alias("__imp__sub_82FEC9A8"))) PPC_WEAK_FUNC(sub_82FEC9A8);
PPC_FUNC_IMPL(__imp__sub_82FEC9A8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fec9d4
	if (ctx.cr6.lt) goto loc_82FEC9D4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82fec9f0
	goto loc_82FEC9F0;
loc_82FEC9D4:
	// lhz r9,42(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 42);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mullw r11,r9,r4
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FEC9EC;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEC9F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECA00"))) PPC_WEAK_FUNC(sub_82FECA00);
PPC_FUNC_IMPL(__imp__sub_82FECA00) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82feca18
	if (ctx.cr6.eq) goto loc_82FECA18;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x82feca24
	goto loc_82FECA24;
loc_82FECA18:
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82FECA24:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECA38"))) PPC_WEAK_FUNC(sub_82FECA38);
PPC_FUNC_IMPL(__imp__sub_82FECA38) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82feca54
	if (!ctx.cr6.gt) goto loc_82FECA54;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82FECA54:
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECA6C"))) PPC_WEAK_FUNC(sub_82FECA6C);
PPC_FUNC_IMPL(__imp__sub_82FECA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECA70"))) PPC_WEAK_FUNC(sub_82FECA70);
PPC_FUNC_IMPL(__imp__sub_82FECA70) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82feca8c
	if (!ctx.cr6.gt) goto loc_82FECA8C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82FECA8C:
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECAAC"))) PPC_WEAK_FUNC(sub_82FECAAC);
PPC_FUNC_IMPL(__imp__sub_82FECAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECAB0"))) PPC_WEAK_FUNC(sub_82FECAB0);
PPC_FUNC_IMPL(__imp__sub_82FECAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FECAB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// lwz r31,48(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fecb24
	if (ctx.cr0.eq) goto loc_82FECB24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,27168
	ctx.r28.s64 = ctx.r11.s64 + 27168;
loc_82FECADC:
	// lhz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x833b7944
	ctx.lr = 0x82FECB10;
	__imp__DbgPrint(ctx, base);
	// lhz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fecadc
	if (ctx.cr6.lt) goto loc_82FECADC;
loc_82FECB24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FECB2C"))) PPC_WEAK_FUNC(sub_82FECB2C);
PPC_FUNC_IMPL(__imp__sub_82FECB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECB30"))) PPC_WEAK_FUNC(sub_82FECB30);
PPC_FUNC_IMPL(__imp__sub_82FECB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FECB38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82cb1160
	ctx.lr = 0x82FECB50;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r30,44
	ctx.r9.s64 = ctx.r30.s64 + 44;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fecb6c
	if (ctx.cr0.eq) goto loc_82FECB6C;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x82fecbe8
	goto loc_82FECBE8;
loc_82FECB6C:
	// lhz r8,38(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82fecb80
	if (ctx.cr0.eq) goto loc_82FECB80;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82FECB80:
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lhz r6,42(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lhz r5,26(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lhz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// lhz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,-44
	ctx.r10.s64 = ctx.r9.s64 + -44;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82FECBE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FECBF4"))) PPC_WEAK_FUNC(sub_82FECBF4);
PPC_FUNC_IMPL(__imp__sub_82FECBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECBF8"))) PPC_WEAK_FUNC(sub_82FECBF8);
PPC_FUNC_IMPL(__imp__sub_82FECBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FECC00;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82fec9a8
	ctx.lr = 0x82FECC24;
	sub_82FEC9A8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82fecc64
	if (ctx.cr0.lt) goto loc_82FECC64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82fecc44
	if (ctx.cr6.eq) goto loc_82FECC44;
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82fecc4c
	goto loc_82FECC4C;
loc_82FECC44:
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82FECC4C:
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82fedf18
	ctx.lr = 0x82FECC64;
	sub_82FEDF18(ctx, base);
loc_82FECC64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FECC70"))) PPC_WEAK_FUNC(sub_82FECC70);
PPC_FUNC_IMPL(__imp__sub_82FECC70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r10,997
	ctx.r10.s64 = 997;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECC80"))) PPC_WEAK_FUNC(sub_82FECC80);
PPC_FUNC_IMPL(__imp__sub_82FECC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82FECC88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feccc4
	if (ctx.cr0.eq) goto loc_82FECCC4;
	// bl 0x833b7ac4
	ctx.lr = 0x82FECCB8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82feccc4
	if (!ctx.cr6.eq) goto loc_82FECCC4;
	// ori r30,r30,16
	ctx.r30.u64 = ctx.r30.u64 | 16;
loc_82FECCC4:
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82fedf18
	ctx.lr = 0x82FECD28;
	sub_82FEDF18(ctx, base);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// beq cr6,0x82fecd54
	if (ctx.cr6.eq) goto loc_82FECD54;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fecd48
	if (ctx.cr6.eq) goto loc_82FECD48;
	// bl 0x82e65170
	ctx.lr = 0x82FECD48;
	sub_82E65170(ctx, base);
loc_82FECD48:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,997
	ctx.r10.s64 = 997;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82FECD54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FECD60"))) PPC_WEAK_FUNC(sub_82FECD60);
PPC_FUNC_IMPL(__imp__sub_82FECD60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECD64"))) PPC_WEAK_FUNC(sub_82FECD64);
PPC_FUNC_IMPL(__imp__sub_82FECD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECD68"))) PPC_WEAK_FUNC(sub_82FECD68);
PPC_FUNC_IMPL(__imp__sub_82FECD68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

