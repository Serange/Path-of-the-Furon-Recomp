#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_829FEAF0"))) PPC_WEAK_FUNC(sub_829FEAF0);
PPC_FUNC_IMPL(__imp__sub_829FEAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEAF4"))) PPC_WEAK_FUNC(sub_829FEAF4);
PPC_FUNC_IMPL(__imp__sub_829FEAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FEAF8"))) PPC_WEAK_FUNC(sub_829FEAF8);
PPC_FUNC_IMPL(__imp__sub_829FEAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,900(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x829febf8
	if (ctx.cr6.eq) goto loc_829FEBF8;
	// lwz r11,732(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829febf8
	if (ctx.cr6.eq) goto loc_829FEBF8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824886b0
	ctx.lr = 0x829FEB30;
	sub_824886B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829FEB40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829feb40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829FEB40;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r10,-18304
	ctx.r9.s64 = ctx.r10.s64 + -18304;
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,1332(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1332, temp.u32);
	// lfs f13,-28844(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28844);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// mfcr r7
	ctx.r7.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r7.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r7.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r7.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r7.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r7.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r7.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r7.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r7.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r7.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r7.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r7.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r7.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r7.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r7.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r7.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r7.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r7.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r7.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r7.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r7.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r7.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r7.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r7.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r7.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r7.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r7.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r7.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r7.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r7.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r7.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r7.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// mfcr r4
	ctx.r4.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r4.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r4.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r4.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r4.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r4.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r4.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r4.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r4.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r4.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r4.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r4.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r4.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r4.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r4.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r4.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r4.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r4.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r4.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r4.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r4.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r4.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r4.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r4.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r4.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r4.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r4.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r4.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r4.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r4.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r4.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r4.u64 |= ctx.cr7.so ? 0x1 : 0;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r11,r4,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r10,r4,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lfsx f4,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsel f3,f4,f11,f9
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// stfs f3,1324(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1324, temp.u32);
	// lfsx f2,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsel f1,f2,f9,f11
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// stfs f1,1328(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1328, temp.u32);
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f0,1336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
	// stfs f0,1340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1340, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_829FEBF8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,32088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32088);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-18072(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18072);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1324, temp.u32);
	// stfs f0,1328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1328, temp.u32);
	// stfs f0,1332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1332, temp.u32);
	// stfs f13,1336(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
	// stfs f13,1340(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1340, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEC30"))) PPC_WEAK_FUNC(sub_829FEC30);
PPC_FUNC_IMPL(__imp__sub_829FEC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// lfs f7,36(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,1336(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1336);
	ctx.f0.f64 = double(temp.f32);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lfs f13,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f9,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// fadds f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f3,-16(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// fadds f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f2,-12(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fadds f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f4,-8(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEC94"))) PPC_WEAK_FUNC(sub_829FEC94);
PPC_FUNC_IMPL(__imp__sub_829FEC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FEC98"))) PPC_WEAK_FUNC(sub_829FEC98);
PPC_FUNC_IMPL(__imp__sub_829FEC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// lfs f7,36(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,1340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1340);
	ctx.f0.f64 = double(temp.f32);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lfs f13,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f9,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// stfs f3,-16(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// fsubs f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfs f2,-12(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fsubs f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f4,-8(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FECFC"))) PPC_WEAK_FUNC(sub_829FECFC);
PPC_FUNC_IMPL(__imp__sub_829FECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FED00"))) PPC_WEAK_FUNC(sub_829FED00);
PPC_FUNC_IMPL(__imp__sub_829FED00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x829FED08;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ae8
	ctx.lr = 0x829FED10;
	__savefpr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r28,r11,32540
	ctx.r28.s64 = ctx.r11.s64 + 32540;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f0,-15060(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -15060);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82a033a0
	ctx.lr = 0x829FED3C;
	sub_82A033A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829fed58
	if (ctx.cr6.eq) goto loc_829FED58;
	// lfs f13,1324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-996(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x829fed5c
	goto loc_829FED5C;
loc_829FED58:
	// lfs f31,1336(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1336);
	ctx.f31.f64 = double(temp.f32);
loc_829FED5C:
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823d7698
	ctx.lr = 0x829FED68;
	sub_823D7698(ctx, base);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fadds f30,f0,f6
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f29,f13,f5
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f28,f12,f4
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// beq cr6,0x829fedcc
	if (ctx.cr6.eq) goto loc_829FEDCC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FEDCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829FEDCC:
	// lfs f12,-744(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829fede0
	if (ctx.cr6.eq) goto loc_829FEDE0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x829fede8
	goto loc_829FEDE8;
loc_829FEDE0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-28844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
loc_829FEDE8:
	// lfs f13,1324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x829fee04
	if (ctx.cr6.eq) goto loc_829FEE04;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lfs f31,19024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19024);
	ctx.f31.f64 = double(temp.f32);
	// b 0x829fee08
	goto loc_829FEE08;
loc_829FEE04:
	// lfs f31,-452(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -452);
	ctx.f31.f64 = double(temp.f32);
loc_829FEE08:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829fee18
	if (!ctx.cr6.lt) goto loc_829FEE18;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_829FEE18:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829fee50
	if (ctx.cr6.eq) goto loc_829FEE50;
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x829fee50
	if (ctx.cr6.eq) goto loc_829FEE50;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FEE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,-744(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// b 0x829fee54
	goto loc_829FEE54;
loc_829FEE50:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_829FEE54:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// fsubs f7,f11,f29
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f12,f7,f7,f6
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829feea4
	if (!ctx.cr6.lt) goto loc_829FEEA4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_829FEEA4:
	// lfs f11,656(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f7,f28
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f28.f64));
	// fmuls f13,f10,f10
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// bge cr6,0x829feedc
	if (!ctx.cr6.lt) goto loc_829FEEDC;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x829feee0
	if (ctx.cr6.lt) goto loc_829FEEE0;
loc_829FEEDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FEEE0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b34
	ctx.lr = 0x829FEEEC;
	__restfpr_28(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FEEF0"))) PPC_WEAK_FUNC(sub_829FEEF0);
PPC_FUNC_IMPL(__imp__sub_829FEEF0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r4.u64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r5,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// bl 0x82379c58
	ctx.lr = 0x829FEF18;
	sub_82379C58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829fefac
	if (ctx.cr6.eq) goto loc_829FEFAC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// lbz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 92);
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bne cr6,0x829feff0
	if (!ctx.cr6.eq) goto loc_829FEFF0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82379680
	ctx.lr = 0x829FEFA8;
	sub_82379680(ctx, base);
	// b 0x829feff0
	goto loc_829FEFF0;
loc_829FEFAC:
	// lwz r4,504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829fefd4
	if (ctx.cr6.eq) goto loc_829FEFD4;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-31264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// bl 0x8276feb0
	ctx.lr = 0x829FEFD4;
	sub_8276FEB0(ctx, base);
loc_829FEFD4:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-31264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8276feb0
	ctx.lr = 0x829FEFF0;
	sub_8276FEB0(ctx, base);
loc_829FEFF0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_829FF008"))) PPC_WEAK_FUNC(sub_829FF008);
PPC_FUNC_IMPL(__imp__sub_829FF008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x829FF010;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// std r5,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// std r6,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// std r7,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f30,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// lbz r29,92(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lfs f31,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,668(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829FF074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bne cr6,0x829ff19c
	if (!ctx.cr6.eq) goto loc_829FF19C;
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff19c
	if (ctx.cr6.eq) goto loc_829FF19C;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF0B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,408(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 408);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829FF0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lwz r11,416(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 416);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FF104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r8,412(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 412);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829FF12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff19c
	if (ctx.cr6.eq) goto loc_829FF19C;
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// ld r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825cd468
	ctx.lr = 0x829FF17C;
	sub_825CD468(ctx, base);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r3,-31264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// bl 0x8276feb0
	ctx.lr = 0x829FF19C;
	sub_8276FEB0(ctx, base);
loc_829FF19C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FF1AC"))) PPC_WEAK_FUNC(sub_829FF1AC);
PPC_FUNC_IMPL(__imp__sub_829FF1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FF1B0"))) PPC_WEAK_FUNC(sub_829FF1B0);
PPC_FUNC_IMPL(__imp__sub_829FF1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x829FF1B8;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ff3a8
	if (ctx.cr6.eq) goto loc_829FF3A8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829ff248
	if (ctx.cr6.eq) goto loc_829FF248;
	// lwz r29,900(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r11,712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff248
	if (!ctx.cr6.eq) goto loc_829FF248;
	// stw r30,716(r29)
	PPC_STORE_U32(ctx.r29.u32 + 716, ctx.r30.u32);
	// addi r3,r29,720
	ctx.r3.s64 = ctx.r29.s64 + 720;
	// lwz r11,728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,724(r29)
	PPC_STORE_U32(ctx.r29.u32 + 724, ctx.r30.u32);
	// beq cr6,0x829ff23c
	if (ctx.cr6.eq) goto loc_829FF23C;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x829FF23C;
	sub_82294520(ctx, base);
loc_829FF23C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e59d8
	ctx.lr = 0x829FF248;
	sub_825E59D8(ctx, base);
loc_829FF248:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x829ff26c
	if (ctx.cr6.eq) goto loc_829FF26C;
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff26c
	if (!ctx.cr6.eq) goto loc_829FF26C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825e4f88
	ctx.lr = 0x829FF26C;
	sub_825E4F88(ctx, base);
loc_829FF26C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x829ff298
	if (ctx.cr6.eq) goto loc_829FF298;
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r11,732(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff298
	if (!ctx.cr6.eq) goto loc_829FF298;
	// lwz r11,736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff298
	if (!ctx.cr6.eq) goto loc_829FF298;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825e5618
	ctx.lr = 0x829FF298;
	sub_825E5618(ctx, base);
loc_829FF298:
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 924, ctx.r9.u32);
	// lfs f30,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// lwz r8,900(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// stfs f30,740(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 740, temp.u32);
	// lwz r7,900(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// stw r30,908(r7)
	PPC_STORE_U32(ctx.r7.u32 + 908, ctx.r30.u32);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r6,944(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 944);
	// oris r5,r6,2048
	ctx.r5.u64 = ctx.r6.u64 | 134217728;
	// stw r5,944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 944, ctx.r5.u32);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r3,944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 944);
	// oris r10,r3,64
	ctx.r10.u64 = ctx.r3.u64 | 4194304;
	// stw r10,944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 944, ctx.r10.u32);
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,308(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829FF2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lwz r5,420(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 420);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x829FF318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829ff3a8
	if (!ctx.cr6.gt) goto loc_829FF3A8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_829FF334:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff39c
	if (ctx.cr6.eq) goto loc_829FF39C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ld r4,1456(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1456);
	// lwz r10,1220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r3,900(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 900);
	// beq cr6,0x829ff39c
	if (ctx.cr6.eq) goto loc_829FF39C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff39c
	if (ctx.cr6.eq) goto loc_829FF39C;
	// lwz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829ff39c
	if (ctx.cr6.eq) goto loc_829FF39C;
	// stfs f30,696(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 696, temp.u32);
	// bl 0x828b0858
	ctx.lr = 0x829FF39C;
	sub_828B0858(ctx, base);
loc_829FF39C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// bne 0x829ff334
	if (!ctx.cr0.eq) goto loc_829FF334;
loc_829FF3A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FF3B8"))) PPC_WEAK_FUNC(sub_829FF3B8);
PPC_FUNC_IMPL(__imp__sub_829FF3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x829FF3C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x829ff414
	if (ctx.cr6.gt) goto loc_829FF414;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r3,r31,1392
	ctx.r3.s64 = ctx.r31.s64 + 1392;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x829FF3FC;
	sub_82294AC0(ctx, base);
	// lwz r10,1392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x829FF414;
	sub_82E640B8(ctx, base);
loc_829FF414:
	// lwz r11,1392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FF428"))) PPC_WEAK_FUNC(sub_829FF428);
PPC_FUNC_IMPL(__imp__sub_829FF428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x829FF430;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ff540
	if (ctx.cr6.eq) goto loc_829FF540;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x829ff540
	if (ctx.cr6.lt) goto loc_829FF540;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x829ff4a0
	if (!ctx.cr6.eq) goto loc_829FF4A0;
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ff540
	if (ctx.cr6.eq) goto loc_829FF540;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x829ff540
	if (!ctx.cr6.lt) goto loc_829FF540;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829ff540
	if (ctx.cr6.eq) goto loc_829FF540;
loc_829FF4A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822c8e58
	ctx.lr = 0x829FF4B4;
	sub_822C8E58(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x829ff4c4
	if (!ctx.cr6.eq) goto loc_829FF4C4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r29,25104(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_829FF4C4:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x829FF4E8;
	sub_822A93E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-13164
	ctx.r3.s64 = ctx.r10.s64 + -13164;
	// stw r28,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r28.u32);
	// bl 0x82451e10
	ctx.lr = 0x829FF504;
	sub_82451E10(ctx, base);
	// bl 0x8244f340
	ctx.lr = 0x829FF508;
	sub_8244F340(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// bl 0x82652100
	ctx.lr = 0x829FF518;
	sub_82652100(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,1420(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1420);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829FF534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_829FF540:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FF54C"))) PPC_WEAK_FUNC(sub_829FF54C);
PPC_FUNC_IMPL(__imp__sub_829FF54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FF550"))) PPC_WEAK_FUNC(sub_829FF550);
PPC_FUNC_IMPL(__imp__sub_829FF550) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829FF560"))) PPC_WEAK_FUNC(sub_829FF560);
PPC_FUNC_IMPL(__imp__sub_829FF560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x829FF568;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ff93c
	if (ctx.cr6.eq) goto loc_829FF93C;
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829ff93c
	if (!ctx.cr6.gt) goto loc_829FF93C;
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff5cc
	if (!ctx.cr6.eq) goto loc_829FF5CC;
	// lwz r4,1492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x829ff5cc
	if (ctx.cr6.lt) goto loc_829FF5CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,1416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r3.u32);
loc_829FF5CC:
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff5fc
	if (!ctx.cr6.eq) goto loc_829FF5FC;
	// lwz r4,1492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x829ff5fc
	if (ctx.cr6.lt) goto loc_829FF5FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r3.u32);
loc_829FF5FC:
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff62c
	if (!ctx.cr6.eq) goto loc_829FF62C;
	// lwz r4,1496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x829ff62c
	if (ctx.cr6.lt) goto loc_829FF62C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
loc_829FF62C:
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff65c
	if (!ctx.cr6.eq) goto loc_829FF65C;
	// lwz r4,1492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x829ff65c
	if (ctx.cr6.lt) goto loc_829FF65C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r3.u32);
loc_829FF65C:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff68c
	if (!ctx.cr6.eq) goto loc_829FF68C;
	// lwz r4,1496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x829ff68c
	if (ctx.cr6.lt) goto loc_829FF68C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r3.u32);
loc_829FF68C:
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff6bc
	if (!ctx.cr6.eq) goto loc_829FF6BC;
	// lwz r4,1500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x829ff6bc
	if (ctx.cr6.lt) goto loc_829FF6BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r3.u32);
loc_829FF6BC:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff6ec
	if (!ctx.cr6.eq) goto loc_829FF6EC;
	// lwz r4,1504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x829ff6ec
	if (ctx.cr6.lt) goto loc_829FF6EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r3.u32);
loc_829FF6EC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x829ff704
	if (!ctx.cr6.gt) goto loc_829FF704;
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x829ff708
	if (!ctx.cr6.gt) goto loc_829FF708;
loc_829FF704:
	// li r11,1
	ctx.r11.s64 = 1;
loc_829FF708:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x829ff720
	if (!ctx.cr6.gt) goto loc_829FF720;
	// lwz r10,1488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x829ff724
	if (!ctx.cr6.gt) goto loc_829FF724;
loc_829FF720:
	// li r29,1
	ctx.r29.s64 = 1;
loc_829FF724:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x829ff73c
	if (!ctx.cr6.gt) goto loc_829FF73C;
	// lwz r10,1488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x829ff740
	if (!ctx.cr6.gt) goto loc_829FF740;
loc_829FF73C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_829FF740:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ff76c
	if (ctx.cr6.eq) goto loc_829FF76C;
	// bl 0x82cb2308
	ctx.lr = 0x829FF74C;
	sub_82CB2308(ctx, base);
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// divw r10,r3,r11
	ctx.r10.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x829ff778
	goto loc_829FF778;
loc_829FF76C:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_829FF778:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x829ff7ac
	if (ctx.cr6.eq) goto loc_829FF7AC;
	// bl 0x82cb2308
	ctx.lr = 0x829FF78C;
	sub_82CB2308(ctx, base);
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// divw r10,r3,r11
	ctx.r10.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x829ff7b8
	goto loc_829FF7B8;
loc_829FF7AC:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_829FF7B8:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x829ff7ec
	if (ctx.cr6.eq) goto loc_829FF7EC;
	// bl 0x82cb2308
	ctx.lr = 0x829FF7CC;
	sub_82CB2308(ctx, base);
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// divw r10,r3,r11
	ctx.r10.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x829ff7f8
	goto loc_829FF7F8;
loc_829FF7EC:
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_829FF7F8:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r3,1404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x829ff820
	if (ctx.cr6.eq) goto loc_829FF820;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1432(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1432);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8244fc30
	ctx.lr = 0x829FF820;
	sub_8244FC30(ctx, base);
loc_829FF820:
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff840
	if (ctx.cr6.eq) goto loc_829FF840;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1440(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1440);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8244fc30
	ctx.lr = 0x829FF840;
	sub_8244FC30(ctx, base);
loc_829FF840:
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff860
	if (ctx.cr6.eq) goto loc_829FF860;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1448);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x829FF860;
	sub_8244FC30(ctx, base);
loc_829FF860:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x829ff888
	if (ctx.cr6.eq) goto loc_829FF888;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1456(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1456);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x829FF888;
	sub_8244FC30(ctx, base);
loc_829FF888:
	// lwz r3,1420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff8a8
	if (ctx.cr6.eq) goto loc_829FF8A8;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1464(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1464);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x829FF8A8;
	sub_8244FC30(ctx, base);
loc_829FF8A8:
	// lwz r3,1424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff8c8
	if (ctx.cr6.eq) goto loc_829FF8C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1472(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1472);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x829FF8C8;
	sub_8244FC30(ctx, base);
loc_829FF8C8:
	// lwz r3,1428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff8e8
	if (ctx.cr6.eq) goto loc_829FF8E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1480(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1480);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x829FF8E8;
	sub_8244FC30(ctx, base);
loc_829FF8E8:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829ff93c
	if (!ctx.cr6.gt) goto loc_829FF93C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_829FF8FC:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff928
	if (ctx.cr6.eq) goto loc_829FF928;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ld r4,1456(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1456);
	// lwz r10,1220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FF928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829FF928:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829ff8fc
	if (ctx.cr6.lt) goto loc_829FF8FC;
loc_829FF93C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FF950"))) PPC_WEAK_FUNC(sub_829FF950);
PPC_FUNC_IMPL(__imp__sub_829FF950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x829FF958;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff984
	if (ctx.cr6.eq) goto loc_829FF984;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1456(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1456);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8244fc30
	ctx.lr = 0x829FF984;
	sub_8244FC30(ctx, base);
loc_829FF984:
	// lwz r3,1420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff9a4
	if (ctx.cr6.eq) goto loc_829FF9A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1464(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1464);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x829FF9A4;
	sub_8244FC30(ctx, base);
loc_829FF9A4:
	// lwz r3,1424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff9c4
	if (ctx.cr6.eq) goto loc_829FF9C4;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1472(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1472);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x829FF9C4;
	sub_8244FC30(ctx, base);
loc_829FF9C4:
	// lwz r3,1428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff9e4
	if (ctx.cr6.eq) goto loc_829FF9E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1480(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1480);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x829FF9E4;
	sub_8244FC30(ctx, base);
loc_829FF9E4:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829ffa38
	if (!ctx.cr6.gt) goto loc_829FFA38;
	// li r30,0
	ctx.r30.s64 = 0;
loc_829FF9F8:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ffa24
	if (ctx.cr6.eq) goto loc_829FFA24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ld r4,1456(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1456);
	// lwz r10,1220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FFA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829FFA24:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829ff9f8
	if (ctx.cr6.lt) goto loc_829FF9F8;
loc_829FFA38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FFA44"))) PPC_WEAK_FUNC(sub_829FFA44);
PPC_FUNC_IMPL(__imp__sub_829FFA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FFA48"))) PPC_WEAK_FUNC(sub_829FFA48);
PPC_FUNC_IMPL(__imp__sub_829FFA48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r4.u32);
	// stw r5,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r5.u32);
	// beq cr6,0x829ffaf4
	if (ctx.cr6.eq) goto loc_829FFAF4;
	// lwz r3,104(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// bl 0x82a03420
	ctx.lr = 0x829FFA74;
	sub_82A03420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ffac0
	if (ctx.cr6.eq) goto loc_829FFAC0;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x82a034a0
	ctx.lr = 0x829FFA84;
	sub_82A034A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ffac0
	if (ctx.cr6.eq) goto loc_829FFAC0;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x829ffac0
	if (!ctx.cr6.gt) goto loc_829FFAC0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f11,1308(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1308, temp.u32);
loc_829FFAC0:
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ffaf4
	if (ctx.cr6.eq) goto loc_829FFAF4;
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829ffae4
	if (!ctx.cr6.eq) goto loc_829FFAE4;
	// lwz r11,1300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829ffaf4
	if (ctx.cr6.eq) goto loc_829FFAF4;
loc_829FFAE4:
	// ld r4,1296(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1296);
	// bl 0x825e5f40
	ctx.lr = 0x829FFAEC;
	sub_825E5F40(ctx, base);
	// bl 0x82a03520
	ctx.lr = 0x829FFAF0;
	sub_82A03520(ctx, base);
	// stw r3,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r3.u32);
loc_829FFAF4:
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

__attribute__((alias("__imp__sub_829FFB08"))) PPC_WEAK_FUNC(sub_829FFB08);
PPC_FUNC_IMPL(__imp__sub_829FFB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x829FFB10;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r24,r23,24
	ctx.r24.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r24,5
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 5, ctx.xer);
	// beq cr6,0x829ffdb4
	if (ctx.cr6.eq) goto loc_829FFDB4;
	// lwz r11,1284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ffdb4
	if (ctx.cr6.eq) goto loc_829FFDB4;
	// lwz r10,900(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829ffdb4
	if (ctx.cr6.eq) goto loc_829FFDB4;
	// lbz r31,1304(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1304);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829ffd50
	if (ctx.cr6.eq) goto loc_829FFD50;
	// stb r23,1304(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1304, ctx.r23.u8);
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// bl 0x82a03420
	ctx.lr = 0x829FFB60;
	sub_82A03420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ffd50
	if (ctx.cr6.eq) goto loc_829FFD50;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x82a034a0
	ctx.lr = 0x829FFB70;
	sub_82A034A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x829ffd50
	if (ctx.cr6.eq) goto loc_829FFD50;
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829ffd50
	if (!ctx.cr6.lt) goto loc_829FFD50;
	// lwz r11,88(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// rlwinm r25,r24,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r25,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829ffbd4
	if (ctx.cr6.eq) goto loc_829FFBD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,900(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// bl 0x825e4f88
	ctx.lr = 0x829FFBA8;
	sub_825E4F88(ctx, base);
	// lwz r11,1296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829ffbc0
	if (!ctx.cr6.eq) goto loc_829FFBC0;
	// lwz r11,1300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829ffbd4
	if (ctx.cr6.eq) goto loc_829FFBD4;
loc_829FFBC0:
	// ld r4,1296(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1296);
	// lwz r3,900(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// bl 0x825e5f40
	ctx.lr = 0x829FFBCC;
	sub_825E5F40(ctx, base);
	// bl 0x82a03520
	ctx.lr = 0x829FFBD0;
	sub_82A03520(ctx, base);
	// stw r3,1292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1292, ctx.r3.u32);
loc_829FFBD4:
	// lwz r11,88(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x829ffbf4
	if (ctx.cr6.eq) goto loc_829FFBF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,900(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// bl 0x82652100
	ctx.lr = 0x829FFBF4;
	sub_82652100(ctx, base);
loc_829FFBF4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x829ffcd8
	if (!ctx.cr6.lt) goto loc_829FFCD8;
	// lwz r11,900(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r10,844(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 844);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829ffcd8
	if (!ctx.cr6.gt) goto loc_829FFCD8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_829FFC1C:
	// lwz r11,900(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// lwz r10,840(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// lwzx r31,r10,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ffcc0
	if (ctx.cr6.eq) goto loc_829FFCC0;
	// bl 0x829bc9a8
	ctx.lr = 0x829FFC34;
	sub_829BC9A8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ffc54
	if (ctx.cr6.eq) goto loc_829FFC54;
loc_829FFC40:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x829ffc64
	if (ctx.cr6.eq) goto loc_829FFC64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ffc40
	if (!ctx.cr6.eq) goto loc_829FFC40;
loc_829FFC54:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829ffcc0
	if (ctx.cr6.eq) goto loc_829FFCC0;
loc_829FFC64:
	// lbz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 220);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x829ffcc0
	if (!ctx.cr6.gt) goto loc_829FFCC0;
	// lwz r11,900(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r22,844(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 844);
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FFC8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,900(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,844(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 844);
	// cmpw cr6,r22,r7
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x829ffca4
	if (ctx.cr6.gt) goto loc_829FFCA4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_829FFCA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ffcc0
	if (ctx.cr6.eq) goto loc_829FFCC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c068
	ctx.lr = 0x829FFCB8;
	sub_8229C068(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
loc_829FFCC0:
	// lwz r11,900(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// lwz r10,844(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 844);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x829ffc1c
	if (ctx.cr6.lt) goto loc_829FFC1C;
loc_829FFCD8:
	// lwz r11,88(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829ffd50
	if (ctx.cr6.eq) goto loc_829FFD50;
	// lwz r31,40(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x829bc9a8
	ctx.lr = 0x829FFCFC;
	sub_829BC9A8(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x829ffd0c
	if (!ctx.cr6.eq) goto loc_829FFD0C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r31,25104(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_829FFD0C:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x829FFD30;
	sub_822A93E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,900(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FFD4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r23,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r23.u8);
loc_829FFD50:
	// lwz r11,740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 740);
	// lfs f13,1280(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r3,1292(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1292);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fsubs f31,f0,f9
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// beq cr6,0x829ffd9c
	if (ctx.cr6.eq) goto loc_829FFD9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FFD9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829FFD9C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,1328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FFDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829FFDB4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FFDC0"))) PPC_WEAK_FUNC(sub_829FFDC0);
PPC_FUNC_IMPL(__imp__sub_829FFDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x829FFDC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,900(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ffea0
	if (ctx.cr6.eq) goto loc_829FFEA0;
	// lwz r11,844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 844);
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x829ffea0
	if (ctx.cr0.lt) goto loc_829FFEA0;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r11,11336
	ctx.r27.s64 = ctx.r11.s64 + 11336;
loc_829FFE00:
	// lwz r11,900(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 900);
	// lwz r10,840(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// lwzx r31,r10,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ffe94
	if (ctx.cr6.eq) goto loc_829FFE94;
	// lwz r11,-24460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ffe30
	if (!ctx.cr6.eq) goto loc_829FFE30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82abacc8
	ctx.lr = 0x829FFE28;
	sub_82ABACC8(ctx, base);
	// stw r3,-24460(r30)
	PPC_STORE_U32(ctx.r30.u32 + -24460, ctx.r3.u32);
	// bl 0x82abad78
	ctx.lr = 0x829FFE30;
	sub_82ABAD78(ctx, base);
loc_829FFE30:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ffe54
	if (ctx.cr6.eq) goto loc_829FFE54;
loc_829FFE3C:
	// lwz r10,-24460(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24460);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829ffe68
	if (ctx.cr6.eq) goto loc_829FFE68;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ffe3c
	if (!ctx.cr6.eq) goto loc_829FFE3C;
loc_829FFE54:
	// lwz r11,-24460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24460);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829ffe94
	if (ctx.cr6.eq) goto loc_829FFE94;
loc_829FFE68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a035c8
	ctx.lr = 0x829FFE70;
	sub_82A035C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ffe94
	if (ctx.cr6.eq) goto loc_829FFE94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FFE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c068
	ctx.lr = 0x829FFE94;
	sub_8229C068(ctx, base);
loc_829FFE94:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,-48
	ctx.r29.s64 = ctx.r29.s64 + -48;
	// bge 0x829ffe00
	if (!ctx.cr0.lt) goto loc_829FFE00;
loc_829FFEA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FFEA8"))) PPC_WEAK_FUNC(sub_829FFEA8);
PPC_FUNC_IMPL(__imp__sub_829FFEA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ffec4
	if (ctx.cr6.eq) goto loc_829FFEC4;
	// lwz r10,732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829ffec4
	if (ctx.cr6.eq) goto loc_829FFEC4;
	// lwz r11,736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
loc_829FFEC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FFECC"))) PPC_WEAK_FUNC(sub_829FFECC);
PPC_FUNC_IMPL(__imp__sub_829FFECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FFED0"))) PPC_WEAK_FUNC(sub_829FFED0);
PPC_FUNC_IMPL(__imp__sub_829FFED0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FFED8"))) PPC_WEAK_FUNC(sub_829FFED8);
PPC_FUNC_IMPL(__imp__sub_829FFED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829FFEFC"))) PPC_WEAK_FUNC(sub_829FFEFC);
PPC_FUNC_IMPL(__imp__sub_829FFEFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FFF00"))) PPC_WEAK_FUNC(sub_829FFF00);
PPC_FUNC_IMPL(__imp__sub_829FFF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x829FFF08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,-25532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25532);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829fff3c
	if (!ctx.cr6.eq) goto loc_829FFF3C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x829fe1f8
	ctx.lr = 0x829FFF30;
	sub_829FE1F8(ctx, base);
	// stw r3,-25532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25532, ctx.r3.u32);
	// bl 0x829fe2a8
	ctx.lr = 0x829FFF38;
	sub_829FE2A8(ctx, base);
	// lwz r10,-25532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25532);
loc_829FFF3C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fff5c
	if (ctx.cr6.eq) goto loc_829FFF5C;
loc_829FFF48:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829fff6c
	if (ctx.cr6.eq) goto loc_829FFF6C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fff48
	if (!ctx.cr6.eq) goto loc_829FFF48;
loc_829FFF5C:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829fff78
	if (ctx.cr6.eq) goto loc_829FFF78;
loc_829FFF6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a03648
	ctx.lr = 0x829FFF74;
	sub_82A03648(ctx, base);
	// b 0x82a00080
	goto loc_82A00080;
loc_829FFF78:
	// bl 0x829b7370
	ctx.lr = 0x829FFF7C;
	sub_829B7370(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fff9c
	if (ctx.cr6.eq) goto loc_829FFF9C;
loc_829FFF88:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x829fffac
	if (ctx.cr6.eq) goto loc_829FFFAC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fff88
	if (!ctx.cr6.eq) goto loc_829FFF88;
loc_829FFF9C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829fffb8
	if (ctx.cr6.eq) goto loc_829FFFB8;
loc_829FFFAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a03320
	ctx.lr = 0x829FFFB4;
	sub_82A03320(ctx, base);
	// b 0x82a00080
	goto loc_82A00080;
loc_829FFFB8:
	// bl 0x8297d698
	ctx.lr = 0x829FFFBC;
	sub_8297D698(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fffdc
	if (ctx.cr6.eq) goto loc_829FFFDC;
loc_829FFFC8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x829fffec
	if (ctx.cr6.eq) goto loc_829FFFEC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fffc8
	if (!ctx.cr6.eq) goto loc_829FFFC8;
loc_829FFFDC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829ffff8
	if (ctx.cr6.eq) goto loc_829FFFF8;
loc_829FFFEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a036c8
	ctx.lr = 0x829FFFF4;
	sub_82A036C8(ctx, base);
	// b 0x82a00080
	goto loc_82A00080;
loc_829FFFF8:
	// bl 0x829b7528
	ctx.lr = 0x829FFFFC;
	sub_829B7528(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0001c
	if (ctx.cr6.eq) goto loc_82A0001C;
loc_82A00008:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a0002c
	if (ctx.cr6.eq) goto loc_82A0002C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00008
	if (!ctx.cr6.eq) goto loc_82A00008;
loc_82A0001C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00038
	if (ctx.cr6.eq) goto loc_82A00038;
loc_82A0002C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a03748
	ctx.lr = 0x82A00034;
	sub_82A03748(ctx, base);
	// b 0x82a00080
	goto loc_82A00080;
loc_82A00038:
	// bl 0x829b73c0
	ctx.lr = 0x82A0003C;
	sub_829B73C0(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0005c
	if (ctx.cr6.eq) goto loc_82A0005C;
loc_82A00048:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a0006c
	if (ctx.cr6.eq) goto loc_82A0006C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00048
	if (!ctx.cr6.eq) goto loc_82A00048;
loc_82A0005C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00078
	if (ctx.cr6.eq) goto loc_82A00078;
loc_82A0006C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a037c8
	ctx.lr = 0x82A00074;
	sub_82A037C8(ctx, base);
	// b 0x82a00080
	goto loc_82A00080;
loc_82A00078:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d8618
	ctx.lr = 0x82A00080;
	sub_826D8618(ctx, base);
loc_82A00080:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,1096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1096, ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A00098"))) PPC_WEAK_FUNC(sub_82A00098);
PPC_FUNC_IMPL(__imp__sub_82A00098) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1312, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A000A0"))) PPC_WEAK_FUNC(sub_82A000A0);
PPC_FUNC_IMPL(__imp__sub_82A000A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1296(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1296);
	// lwz r10,1300(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1300);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A000B4"))) PPC_WEAK_FUNC(sub_82A000B4);
PPC_FUNC_IMPL(__imp__sub_82A000B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A000B8"))) PPC_WEAK_FUNC(sub_82A000B8);
PPC_FUNC_IMPL(__imp__sub_82A000B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1304(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1304);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A000C0"))) PPC_WEAK_FUNC(sub_82A000C0);
PPC_FUNC_IMPL(__imp__sub_82A000C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,1352
	ctx.r4.s64 = ctx.r3.s64 + 1352;
	// lwz r10,1276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A000D4"))) PPC_WEAK_FUNC(sub_82A000D4);
PPC_FUNC_IMPL(__imp__sub_82A000D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A000D8"))) PPC_WEAK_FUNC(sub_82A000D8);
PPC_FUNC_IMPL(__imp__sub_82A000D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,1360(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// ld r4,1352(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1352);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,1272(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1272);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A000F8"))) PPC_WEAK_FUNC(sub_82A000F8);
PPC_FUNC_IMPL(__imp__sub_82A000F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82A00100;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6ad0
	ctx.lr = 0x82A00108;
	__savefpr_22(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a00140
	if (ctx.cr6.gt) goto loc_82A00140;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82a00148
	goto loc_82A00148;
loc_82A00140:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A00148:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r21,980(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8237cd98
	ctx.lr = 0x82A00160;
	sub_8237CD98(ctx, base);
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,1136(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1136);
	// oris r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 33554432;
	// lwz r11,-25400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25400);
	// stw r9,1136(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1136, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00194
	if (!ctx.cr6.eq) goto loc_82A00194;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82a1d568
	ctx.lr = 0x82A00188;
	sub_82A1D568(ctx, base);
	// stw r3,-25400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25400, ctx.r3.u32);
	// bl 0x82a1d618
	ctx.lr = 0x82A00190;
	sub_82A1D618(ctx, base);
	// lwz r11,-25400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25400);
loc_82A00194:
	// lwz r10,52(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a001b4
	if (ctx.cr6.eq) goto loc_82A001B4;
loc_82A001A0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a001c4
	if (ctx.cr6.eq) goto loc_82A001C4;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a001a0
	if (!ctx.cr6.eq) goto loc_82A001A0;
loc_82A001B4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00360
	if (ctx.cr6.eq) goto loc_82A00360;
loc_82A001C4:
	// lwz r11,2212(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00360
	if (ctx.cr6.eq) goto loc_82A00360;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82a00360
	if (!ctx.cr6.eq) goto loc_82A00360;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00220
	if (ctx.cr6.eq) goto loc_82A00220;
	// bl 0x82314b68
	ctx.lr = 0x82A001EC;
	sub_82314B68(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00210
	if (ctx.cr6.eq) goto loc_82A00210;
loc_82A001FC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00264
	if (ctx.cr6.eq) goto loc_82A00264;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a001fc
	if (!ctx.cr6.eq) goto loc_82A001FC;
loc_82A00210:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a00264
	if (!ctx.cr6.eq) goto loc_82A00264;
loc_82A00220:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00360
	if (ctx.cr6.eq) goto loc_82A00360;
	// bl 0x82314b68
	ctx.lr = 0x82A00230;
	sub_82314B68(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00254
	if (ctx.cr6.eq) goto loc_82A00254;
loc_82A00240:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00264
	if (ctx.cr6.eq) goto loc_82A00264;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00240
	if (!ctx.cr6.eq) goto loc_82A00240;
loc_82A00254:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00360
	if (ctx.cr6.eq) goto loc_82A00360;
loc_82A00264:
	// lwz r3,2212(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2212);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r9,r11,17480
	ctx.r9.s64 = ctx.r11.s64 + 17480;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f31,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,15612(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// ld r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r10,616(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 616);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ld r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A002C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// bl 0x823149d8
	ctx.lr = 0x82A002FC;
	sub_823149D8(ctx, base);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// li r5,24
	ctx.r5.s64 = 24;
	// rldicr r29,r9,32,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r28,r8,32,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82cb1160
	ctx.lr = 0x82A00320;
	sub_82CB1160(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// bl 0x829e5728
	ctx.lr = 0x82A00348;
	sub_829E5728(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829e5838
	ctx.lr = 0x82A00350;
	sub_829E5838(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6b1c
	ctx.lr = 0x82A0035C;
	__restfpr_22(ctx, base);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82A00360:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82977b10
	ctx.lr = 0x82A00368;
	sub_82977B10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a00394
	if (ctx.cr6.eq) goto loc_82A00394;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a00394
	if (ctx.cr6.eq) goto loc_82A00394;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0038C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a01030
	if (!ctx.cr6.eq) goto loc_82A01030;
loc_82A00394:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82977b10
	ctx.lr = 0x82A0039C;
	sub_82977B10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a003c8
	if (ctx.cr6.eq) goto loc_82A003C8;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a003c8
	if (ctx.cr6.eq) goto loc_82A003C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A003C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a01030
	if (!ctx.cr6.eq) goto loc_82A01030;
loc_82A003C8:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a003f4
	if (ctx.cr6.eq) goto loc_82A003F4;
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a003f4
	if (!ctx.cr6.gt) goto loc_82A003F4;
	// lwz r11,740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a003fc
	if (!ctx.cr6.eq) goto loc_82A003FC;
loc_82A003F4:
	// lwz r27,2220(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2220);
	// b 0x82a00408
	goto loc_82A00408;
loc_82A003FC:
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x829d9328
	ctx.lr = 0x82A00404;
	sub_829D9328(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82A00408:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r25,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// bl 0x823d27f0
	ctx.lr = 0x82A00430;
	sub_823D27F0(ctx, base);
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r31,r11,-18400
	ctx.r31.s64 = ctx.r11.s64 + -18400;
	// lfs f31,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,-18388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18388);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a00468
	if (!ctx.cr6.eq) goto loc_82A00468;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r11,-18388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18388, ctx.r11.u32);
loc_82A00468:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0047C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r22,160(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a00538
	if (ctx.cr6.eq) goto loc_82A00538;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0049C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a00538
	if (!ctx.cr6.gt) goto loc_82A00538;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// bl 0x82980a08
	ctx.lr = 0x82A004C8;
	sub_82980A08(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lwz r8,360(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A004F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,32
	ctx.r5.s64 = 32;
	// rldicr r19,r25,32,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r31,r31,32,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82cb1160
	ctx.lr = 0x82A00510;
	sub_82CB1160(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x824c68d0
	ctx.lr = 0x82A00538;
	sub_824C68D0(ctx, base);
loc_82A00538:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829e4fd0
	ctx.lr = 0x82A0054C;
	sub_829E4FD0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,1680(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1680);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r11,17480
	ctx.r31.s64 = ctx.r11.s64 + 17480;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f22,15612(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 15612);
	ctx.f22.f64 = double(temp.f32);
	// bne cr6,0x82a0063c
	if (!ctx.cr6.eq) goto loc_82A0063C;
	// lfs f0,1676(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1676);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1680(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1680, temp.u32);
	// lfs f13,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f8,1576(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1576);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f12,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f0,f7
	ctx.f0.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x82a00650
	if (ctx.cr6.lt) goto loc_82A00650;
	// lwz r3,1572(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1572);
	// lfs f13,1580(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1580);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a00650
	if (ctx.cr6.eq) goto loc_82A00650;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A005B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a00650
	if (!ctx.cr6.eq) goto loc_82A00650;
	// lwz r11,1568(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00650
	if (ctx.cr6.eq) goto loc_82A00650;
	// fsubs f0,f22,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f22.f64 - ctx.f30.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r3,1572(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1572);
	// addi r9,r11,-18304
	ctx.r9.s64 = ctx.r11.s64 + -18304;
	// addi r4,r10,-19320
	ctx.r4.s64 = ctx.r10.s64 + -19320;
	// li r6,0
	ctx.r6.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// mfcr r8
	ctx.r8.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r8.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r8.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r8.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r8.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r8.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r8.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r8.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r8.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r8.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r8.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r8.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r8.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r8.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r8.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r8.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r8.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r8.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r8.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r8.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r8.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r8.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r8.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r8.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r8.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r8.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r8.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r8.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r8.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r8.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r8.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r8.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r5,r8,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 | ctx.r5.u64;
	// lfsx f13,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f1,f13,f30,f22
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f22.f64;
	// bl 0x826fa198
	ctx.lr = 0x82A00608;
	sub_826FA198(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r3,1572(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1572);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,11528
	ctx.r4.s64 = ctx.r10.s64 + 11528;
	// bl 0x826fa198
	ctx.lr = 0x82A00620;
	sub_826FA198(ctx, base);
	// lwz r3,1572(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1572);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,336(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A00638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a00650
	goto loc_82A00650;
loc_82A0063C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,1676(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1676);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1680(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1680, temp.u32);
loc_82A00650:
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00a9c
	if (ctx.cr6.eq) goto loc_82A00A9C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00788
	if (ctx.cr6.eq) goto loc_82A00788;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00788
	if (ctx.cr6.eq) goto loc_82A00788;
	// bl 0x829b8dc8
	ctx.lr = 0x82A0067C;
	sub_829B8DC8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a006a0
	if (ctx.cr6.eq) goto loc_82A006A0;
loc_82A0068C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a006b0
	if (ctx.cr6.eq) goto loc_82A006B0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0068c
	if (!ctx.cr6.eq) goto loc_82A0068C;
loc_82A006A0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00700
	if (ctx.cr6.eq) goto loc_82A00700;
loc_82A006B0:
	// bl 0x82981a78
	ctx.lr = 0x82A006B4;
	sub_82981A78(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a006d8
	if (ctx.cr6.eq) goto loc_82A006D8;
loc_82A006C4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a006e8
	if (ctx.cr6.eq) goto loc_82A006E8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a006c4
	if (!ctx.cr6.eq) goto loc_82A006C4;
loc_82A006D8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00700
	if (ctx.cr6.eq) goto loc_82A00700;
loc_82A006E8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x829d9228
	ctx.lr = 0x82A006F0;
	sub_829D9228(ctx, base);
	// lwz r11,2360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2360);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a01030
	if (ctx.cr6.eq) goto loc_82A01030;
loc_82A00700:
	// bl 0x829b8dc8
	ctx.lr = 0x82A00704;
	sub_829B8DC8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00728
	if (ctx.cr6.eq) goto loc_82A00728;
loc_82A00714:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00738
	if (ctx.cr6.eq) goto loc_82A00738;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00714
	if (!ctx.cr6.eq) goto loc_82A00714;
loc_82A00728:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00788
	if (ctx.cr6.eq) goto loc_82A00788;
loc_82A00738:
	// bl 0x82981a78
	ctx.lr = 0x82A0073C;
	sub_82981A78(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00760
	if (ctx.cr6.eq) goto loc_82A00760;
loc_82A0074C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00770
	if (ctx.cr6.eq) goto loc_82A00770;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0074c
	if (!ctx.cr6.eq) goto loc_82A0074C;
loc_82A00760:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00788
	if (ctx.cr6.eq) goto loc_82A00788;
loc_82A00770:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x829d9228
	ctx.lr = 0x82A00778;
	sub_829D9228(ctx, base);
	// lwz r11,2360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2360);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a01030
	if (ctx.cr6.eq) goto loc_82A01030;
loc_82A00788:
	// lwz r11,1960(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1960);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwz r10,1964(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1964);
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// lwz r3,2164(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2164);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// ld r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// bl 0x82aa0dc0
	ctx.lr = 0x82A007CC;
	sub_82AA0DC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a007dc
	if (ctx.cr6.eq) goto loc_82A007DC;
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
loc_82A007DC:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a008e4
	if (ctx.cr6.eq) goto loc_82A008E4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a008b0
	if (ctx.cr6.eq) goto loc_82A008B0;
	// bl 0x82981a78
	ctx.lr = 0x82A007F4;
	sub_82981A78(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00818
	if (ctx.cr6.eq) goto loc_82A00818;
loc_82A00804:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00828
	if (ctx.cr6.eq) goto loc_82A00828;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00804
	if (!ctx.cr6.eq) goto loc_82A00804;
loc_82A00818:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00830
	if (ctx.cr6.eq) goto loc_82A00830;
loc_82A00828:
	// lfs f29,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f29.f64 = double(temp.f32);
	// b 0x82a008b4
	goto loc_82A008B4;
loc_82A00830:
	// bl 0x829b8dc8
	ctx.lr = 0x82A00834;
	sub_829B8DC8(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00858
	if (ctx.cr6.eq) goto loc_82A00858;
loc_82A00844:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00868
	if (ctx.cr6.eq) goto loc_82A00868;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00844
	if (!ctx.cr6.eq) goto loc_82A00844;
loc_82A00858:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00870
	if (ctx.cr6.eq) goto loc_82A00870;
loc_82A00868:
	// lfs f29,336(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f29.f64 = double(temp.f32);
	// b 0x82a008b4
	goto loc_82A008B4;
loc_82A00870:
	// bl 0x823679c8
	ctx.lr = 0x82A00874;
	sub_823679C8(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00898
	if (ctx.cr6.eq) goto loc_82A00898;
loc_82A00884:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a008a8
	if (ctx.cr6.eq) goto loc_82A008A8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00884
	if (!ctx.cr6.eq) goto loc_82A00884;
loc_82A00898:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a008b0
	if (ctx.cr6.eq) goto loc_82A008B0;
loc_82A008A8:
	// lfs f29,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f29.f64 = double(temp.f32);
	// b 0x82a008b4
	goto loc_82A008B4;
loc_82A008B0:
	// fmr f29,f22
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f22.f64;
loc_82A008B4:
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// lwz r9,276(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// lwz r8,268(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// lwz r7,104(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// rlwinm r6,r7,0,21,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// lfs f23,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f23.f64 = double(temp.f32);
	// stw r6,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r6.u32);
	// lfs f24,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f24.f64 = double(temp.f32);
	// lfs f25,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f25.f64 = double(temp.f32);
loc_82A008E4:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a009ec
	if (ctx.cr6.eq) goto loc_82A009EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a009b8
	if (ctx.cr6.eq) goto loc_82A009B8;
	// bl 0x82981a78
	ctx.lr = 0x82A008FC;
	sub_82981A78(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00920
	if (ctx.cr6.eq) goto loc_82A00920;
loc_82A0090C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00930
	if (ctx.cr6.eq) goto loc_82A00930;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0090c
	if (!ctx.cr6.eq) goto loc_82A0090C;
loc_82A00920:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00938
	if (ctx.cr6.eq) goto loc_82A00938;
loc_82A00930:
	// lfs f30,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82a009bc
	goto loc_82A009BC;
loc_82A00938:
	// bl 0x829b8dc8
	ctx.lr = 0x82A0093C;
	sub_829B8DC8(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00960
	if (ctx.cr6.eq) goto loc_82A00960;
loc_82A0094C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00970
	if (ctx.cr6.eq) goto loc_82A00970;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0094c
	if (!ctx.cr6.eq) goto loc_82A0094C;
loc_82A00960:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00978
	if (ctx.cr6.eq) goto loc_82A00978;
loc_82A00970:
	// lfs f30,336(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82a009bc
	goto loc_82A009BC;
loc_82A00978:
	// bl 0x823679c8
	ctx.lr = 0x82A0097C;
	sub_823679C8(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a009a0
	if (ctx.cr6.eq) goto loc_82A009A0;
loc_82A0098C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a009b0
	if (ctx.cr6.eq) goto loc_82A009B0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0098c
	if (!ctx.cr6.eq) goto loc_82A0098C;
loc_82A009A0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a009b8
	if (ctx.cr6.eq) goto loc_82A009B8;
loc_82A009B0:
	// lfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82a009bc
	goto loc_82A009BC;
loc_82A009B8:
	// fmr f30,f22
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f22.f64;
loc_82A009BC:
	// lwz r9,272(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// lwz r8,276(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// lwz r7,104(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// rlwinm r6,r7,0,21,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lfs f26,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f26.f64 = double(temp.f32);
	// stw r6,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r6.u32);
	// lfs f27,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f28.f64 = double(temp.f32);
loc_82A009EC:
	// fsubs f0,f24,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f27.f64));
	// fsubs f13,f25,f28
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f28.f64));
	// fsubs f12,f23,f26
	ctx.f12.f64 = double(float(ctx.f23.f64 - ctx.f26.f64));
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f0,f9
	ctx.f0.f64 = double(float(sqrt(ctx.f9.f64)));
	// ble cr6,0x82a00a14
	if (!ctx.cr6.gt) goto loc_82A00A14;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
loc_82A00A14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a00a20
	if (ctx.cr6.eq) goto loc_82A00A20;
	// lfs f31,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f31.f64 = double(temp.f32);
loc_82A00A20:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82a01030
	if (!ctx.cr6.gt) goto loc_82A01030;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a01030
	if (ctx.cr6.eq) goto loc_82A01030;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a01030
	if (ctx.cr6.eq) goto loc_82A01030;
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f12.u64);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A00A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,2212(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2212);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// ld r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,2164(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2164);
	// rldicr r7,r25,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFF00000000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,504(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 504);
	// bl 0x82aa0e20
	ctx.lr = 0x82A00A8C;
	sub_82AA0E20(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6b1c
	ctx.lr = 0x82A00A98;
	__restfpr_22(ctx, base);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82A00A9C:
	// lwz r11,1320(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1320);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a01030
	if (ctx.cr6.eq) goto loc_82A01030;
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01030
	if (ctx.cr6.eq) goto loc_82A01030;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a01030
	if (ctx.cr6.eq) goto loc_82A01030;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00ba8
	if (ctx.cr6.eq) goto loc_82A00BA8;
	// bl 0x82981a78
	ctx.lr = 0x82A00AD8;
	sub_82981A78(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00afc
	if (ctx.cr6.eq) goto loc_82A00AFC;
loc_82A00AE8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00b0c
	if (ctx.cr6.eq) goto loc_82A00B0C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00ae8
	if (!ctx.cr6.eq) goto loc_82A00AE8;
loc_82A00AFC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00b1c
	if (ctx.cr6.eq) goto loc_82A00B1C;
loc_82A00B0C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x829d9228
	ctx.lr = 0x82A00B14;
	sub_829D9228(ctx, base);
	// lwz r27,1036(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1036);
	// b 0x82a00ba8
	goto loc_82A00BA8;
loc_82A00B1C:
	// bl 0x829b8dc8
	ctx.lr = 0x82A00B20;
	sub_829B8DC8(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00b44
	if (ctx.cr6.eq) goto loc_82A00B44;
loc_82A00B30:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00b54
	if (ctx.cr6.eq) goto loc_82A00B54;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00b30
	if (!ctx.cr6.eq) goto loc_82A00B30;
loc_82A00B44:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00b64
	if (ctx.cr6.eq) goto loc_82A00B64;
loc_82A00B54:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x829d92a8
	ctx.lr = 0x82A00B5C;
	sub_829D92A8(ctx, base);
	// lwz r27,1544(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// b 0x82a00ba8
	goto loc_82A00BA8;
loc_82A00B64:
	// bl 0x823679c8
	ctx.lr = 0x82A00B68;
	sub_823679C8(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00b8c
	if (ctx.cr6.eq) goto loc_82A00B8C;
loc_82A00B78:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00b9c
	if (ctx.cr6.eq) goto loc_82A00B9C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00b78
	if (!ctx.cr6.eq) goto loc_82A00B78;
loc_82A00B8C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00ba8
	if (ctx.cr6.eq) goto loc_82A00BA8;
loc_82A00B9C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82694858
	ctx.lr = 0x82A00BA4;
	sub_82694858(ctx, base);
	// lwz r27,768(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
loc_82A00BA8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00cc4
	if (ctx.cr6.eq) goto loc_82A00CC4;
	// bl 0x82981a78
	ctx.lr = 0x82A00BB8;
	sub_82981A78(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00bdc
	if (ctx.cr6.eq) goto loc_82A00BDC;
loc_82A00BC8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00bec
	if (ctx.cr6.eq) goto loc_82A00BEC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00bc8
	if (!ctx.cr6.eq) goto loc_82A00BC8;
loc_82A00BDC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00c10
	if (ctx.cr6.eq) goto loc_82A00C10;
loc_82A00BEC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x829d9228
	ctx.lr = 0x82A00BF4;
	sub_829D9228(ctx, base);
	// lwz r11,1036(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1036);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82a00cc4
	if (!ctx.cr6.gt) goto loc_82A00CC4;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x829d9228
	ctx.lr = 0x82A00C08;
	sub_829D9228(ctx, base);
	// lwz r27,1036(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1036);
	// b 0x82a00cc4
	goto loc_82A00CC4;
loc_82A00C10:
	// bl 0x829b8dc8
	ctx.lr = 0x82A00C14;
	sub_829B8DC8(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00c38
	if (ctx.cr6.eq) goto loc_82A00C38;
loc_82A00C24:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00c48
	if (ctx.cr6.eq) goto loc_82A00C48;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00c24
	if (!ctx.cr6.eq) goto loc_82A00C24;
loc_82A00C38:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00c6c
	if (ctx.cr6.eq) goto loc_82A00C6C;
loc_82A00C48:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x829d92a8
	ctx.lr = 0x82A00C50;
	sub_829D92A8(ctx, base);
	// lwz r11,1544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82a00cc4
	if (!ctx.cr6.gt) goto loc_82A00CC4;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x829d92a8
	ctx.lr = 0x82A00C64;
	sub_829D92A8(ctx, base);
	// lwz r27,1544(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// b 0x82a00cc4
	goto loc_82A00CC4;
loc_82A00C6C:
	// bl 0x823679c8
	ctx.lr = 0x82A00C70;
	sub_823679C8(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00c94
	if (ctx.cr6.eq) goto loc_82A00C94;
loc_82A00C80:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00ca4
	if (ctx.cr6.eq) goto loc_82A00CA4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00c80
	if (!ctx.cr6.eq) goto loc_82A00C80;
loc_82A00C94:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00cc4
	if (ctx.cr6.eq) goto loc_82A00CC4;
loc_82A00CA4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82694858
	ctx.lr = 0x82A00CAC;
	sub_82694858(ctx, base);
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82a00cc4
	if (!ctx.cr6.gt) goto loc_82A00CC4;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82694858
	ctx.lr = 0x82A00CC0;
	sub_82694858(ctx, base);
	// lwz r27,768(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
loc_82A00CC4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A00CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a00fac
	if (!ctx.cr6.gt) goto loc_82A00FAC;
	// lwz r11,1540(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1540);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82a00fac
	if (ctx.cr6.gt) goto loc_82A00FAC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a03af0
	ctx.lr = 0x82A00CF4;
	sub_82A03AF0(ctx, base);
	// lwz r10,2164(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2164);
	// lfs f13,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r9,500(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 500);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r28,2272(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2272);
	// ble cr6,0x82a00d44
	if (!ctx.cr6.gt) goto loc_82A00D44;
	// lwz r8,496(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 496);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
loc_82A00D28:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82a00db8
	if (ctx.cr6.eq) goto loc_82A00DB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a00d28
	if (ctx.cr6.lt) goto loc_82A00D28;
loc_82A00D44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A00D48:
	// bl 0x829e0fd0
	ctx.lr = 0x82A00D4C;
	sub_829E0FD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a00d64
	if (ctx.cr6.eq) goto loc_82A00D64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x829e0fd0
	ctx.lr = 0x82A00D60;
	sub_829E0FD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A00D64:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00e48
	if (ctx.cr6.eq) goto loc_82A00E48;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a00e44
	if (ctx.cr6.eq) goto loc_82A00E44;
	// bl 0x82981a78
	ctx.lr = 0x82A00D7C;
	sub_82981A78(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00da0
	if (ctx.cr6.eq) goto loc_82A00DA0;
loc_82A00D8C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00db0
	if (ctx.cr6.eq) goto loc_82A00DB0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00d8c
	if (!ctx.cr6.eq) goto loc_82A00D8C;
loc_82A00DA0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00dc4
	if (ctx.cr6.eq) goto loc_82A00DC4;
loc_82A00DB0:
	// lfs f30,340(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82a00e48
	goto loc_82A00E48;
loc_82A00DB8:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x82a00d48
	goto loc_82A00D48;
loc_82A00DC4:
	// bl 0x829b8dc8
	ctx.lr = 0x82A00DC8;
	sub_829B8DC8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00dec
	if (ctx.cr6.eq) goto loc_82A00DEC;
loc_82A00DD8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00dfc
	if (ctx.cr6.eq) goto loc_82A00DFC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00dd8
	if (!ctx.cr6.eq) goto loc_82A00DD8;
loc_82A00DEC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00e04
	if (ctx.cr6.eq) goto loc_82A00E04;
loc_82A00DFC:
	// lfs f30,336(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82a00e48
	goto loc_82A00E48;
loc_82A00E04:
	// bl 0x823679c8
	ctx.lr = 0x82A00E08;
	sub_823679C8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00e2c
	if (ctx.cr6.eq) goto loc_82A00E2C;
loc_82A00E18:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00e3c
	if (ctx.cr6.eq) goto loc_82A00E3C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00e18
	if (!ctx.cr6.eq) goto loc_82A00E18;
loc_82A00E2C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00e44
	if (ctx.cr6.eq) goto loc_82A00E44;
loc_82A00E3C:
	// lfs f30,344(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82a00e48
	goto loc_82A00E48;
loc_82A00E44:
	// fmr f30,f22
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f22.f64;
loc_82A00E48:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00f20
	if (ctx.cr6.eq) goto loc_82A00F20;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a00f1c
	if (ctx.cr6.eq) goto loc_82A00F1C;
	// bl 0x82981a78
	ctx.lr = 0x82A00E60;
	sub_82981A78(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00e84
	if (ctx.cr6.eq) goto loc_82A00E84;
loc_82A00E70:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00e94
	if (ctx.cr6.eq) goto loc_82A00E94;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00e70
	if (!ctx.cr6.eq) goto loc_82A00E70;
loc_82A00E84:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00e9c
	if (ctx.cr6.eq) goto loc_82A00E9C;
loc_82A00E94:
	// lfs f31,340(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82a00f20
	goto loc_82A00F20;
loc_82A00E9C:
	// bl 0x829b8dc8
	ctx.lr = 0x82A00EA0;
	sub_829B8DC8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00ec4
	if (ctx.cr6.eq) goto loc_82A00EC4;
loc_82A00EB0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00ed4
	if (ctx.cr6.eq) goto loc_82A00ED4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00eb0
	if (!ctx.cr6.eq) goto loc_82A00EB0;
loc_82A00EC4:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00edc
	if (ctx.cr6.eq) goto loc_82A00EDC;
loc_82A00ED4:
	// lfs f31,336(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82a00f20
	goto loc_82A00F20;
loc_82A00EDC:
	// bl 0x823679c8
	ctx.lr = 0x82A00EE0;
	sub_823679C8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00f04
	if (ctx.cr6.eq) goto loc_82A00F04;
loc_82A00EF0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a00f14
	if (ctx.cr6.eq) goto loc_82A00F14;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00ef0
	if (!ctx.cr6.eq) goto loc_82A00EF0;
loc_82A00F04:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00f1c
	if (ctx.cr6.eq) goto loc_82A00F1C;
loc_82A00F14:
	// lfs f31,344(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82a00f20
	goto loc_82A00F20;
loc_82A00F1C:
	// fmr f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f22.f64;
loc_82A00F20:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82a00f2c
	if (!ctx.cr6.gt) goto loc_82A00F2C;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_82A00F2C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a00f70
	if (ctx.cr6.eq) goto loc_82A00F70;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a00f70
	if (ctx.cr6.eq) goto loc_82A00F70;
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f12.u64);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A00F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r27,1
	ctx.r9.s64 = ctx.r27.s64 + 1;
	// stw r26,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r26.u32);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
loc_82A00F70:
	// lwz r11,2212(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2212);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,2164(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2164);
	// lwz r5,504(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// bl 0x82aa0cb0
	ctx.lr = 0x82A00F9C;
	sub_82AA0CB0(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6b1c
	ctx.lr = 0x82A00FA8;
	__restfpr_22(ctx, base);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82A00FAC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,156(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 156);
	// bl 0x829ef038
	ctx.lr = 0x82A00FB8;
	sub_829EF038(ctx, base);
	// lwz r11,308(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 308);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a01018
	if (!ctx.cr6.gt) goto loc_82A01018;
loc_82A00FC8:
	// lwz r11,304(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 304);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x829d95e0
	ctx.lr = 0x82A00FD4;
	sub_829D95E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a01004
	if (ctx.cr6.eq) goto loc_82A01004;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82610550
	ctx.lr = 0x82A00FE8;
	sub_82610550(ctx, base);
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a00ff8
	if (ctx.cr6.eq) goto loc_82A00FF8;
	// bl 0x82516e80
	ctx.lr = 0x82A00FF8;
	sub_82516E80(ctx, base);
loc_82A00FF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829e1100
	ctx.lr = 0x82A01004;
	sub_829E1100(ctx, base);
loc_82A01004:
	// lwz r11,308(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 308);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a00fc8
	if (ctx.cr6.lt) goto loc_82A00FC8;
loc_82A01018:
	// lwz r11,1320(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1320);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,1544(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1544, ctx.r10.u32);
	// rlwinm r9,r9,0,7,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r9,1320(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1320, ctx.r9.u32);
loc_82A01030:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6b1c
	ctx.lr = 0x82A0103C;
	__restfpr_22(ctx, base);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A01040"))) PPC_WEAK_FUNC(sub_82A01040);
PPC_FUNC_IMPL(__imp__sub_82A01040) {
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
	// lwz r10,1424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0106C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,1428(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1428);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A01084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,1432(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1432);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A0109C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82A010B4"))) PPC_WEAK_FUNC(sub_82A010B4);
PPC_FUNC_IMPL(__imp__sub_82A010B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A010B8"))) PPC_WEAK_FUNC(sub_82A010B8);
PPC_FUNC_IMPL(__imp__sub_82A010B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82A010C0;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r26,-31883
	ctx.r26.s64 = -2089484288;
	// lfs f0,1560(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1560);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a0112c
	if (!ctx.cr6.gt) goto loc_82A0112C;
	// lwz r11,-31264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a01110
	if (ctx.cr6.gt) goto loc_82A01110;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82a01118
	goto loc_82A01118;
loc_82A01110:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A01118:
	// lfs f12,1564(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1564);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f10,852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bgt cr6,0x82a01348
	if (ctx.cr6.gt) goto loc_82A01348;
loc_82A0112C:
	// lfs f0,272(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,268(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,276(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// addi r30,r11,-32444
	ctx.r30.s64 = ctx.r11.s64 + -32444;
	// addi r31,r29,268
	ctx.r31.s64 = ctx.r29.s64 + 268;
	// lfs f0,-544(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -544);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f29,f8
	ctx.f29.f64 = double(float(sqrt(ctx.f8.f64)));
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a011e4
	if (!ctx.cr6.gt) goto loc_82A011E4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f13,-16592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16592);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f30,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82a01184
	if (!ctx.cr6.gt) goto loc_82A01184;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_82A01184:
	// lwz r3,1572(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a011e4
	if (ctx.cr6.eq) goto loc_82A011E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A011A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a011e4
	if (!ctx.cr6.eq) goto loc_82A011E4;
	// lwz r11,1568(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a011e4
	if (ctx.cr6.eq) goto loc_82A011E4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,1572(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1572);
	// li r6,0
	ctx.r6.s64 = 0;
	// fadds f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// addi r4,r11,11528
	ctx.r4.s64 = ctx.r11.s64 + 11528;
	// bl 0x826fa198
	ctx.lr = 0x82A011CC;
	sub_826FA198(ctx, base);
	// lwz r3,1572(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1572);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A011E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A011E4:
	// lfs f0,1376(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1376);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// blt cr6,0x82a01348
	if (ctx.cr6.lt) goto loc_82A01348;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fdivs f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f29.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r27,188
	ctx.r30.s64 = ctx.r27.s64 + 188;
	// lfs f10,192(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,196(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,188(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,26252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmadds f2,f8,f5,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fmadds f1,f4,f7,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a01348
	if (ctx.cr6.gt) goto loc_82A01348;
	// lfs f0,592(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 592);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,1372(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1372);
	ctx.f12.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// fmuls f31,f13,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A01268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1320(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1320);
	// rlwinm r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a01348
	if (ctx.cr6.eq) goto loc_82A01348;
	// lwz r11,-31264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a01294
	if (ctx.cr6.gt) goto loc_82A01294;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82a0129c
	goto loc_82A0129C;
loc_82A01294:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A0129C:
	// lfs f0,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stfs f0,1564(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1564, temp.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f29
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// bl 0x829809b8
	ctx.lr = 0x82A012EC;
	sub_829809B8(ctx, base);
	// lwz r11,252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fctiwz f7,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfd f7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f7.u64);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r30,148(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r5,32
	ctx.r5.s64 = 32;
	// ld r27,244(r29)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r29.u32 + 244);
	// rldicr r26,r10,32,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r25,r11,32,63
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82cb1160
	ctx.lr = 0x82A01320;
	sub_82CB1160(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x824c68d0
	ctx.lr = 0x82A01348;
	sub_824C68D0(ctx, base);
loc_82A01348:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0135C"))) PPC_WEAK_FUNC(sub_82A0135C);
PPC_FUNC_IMPL(__imp__sub_82A0135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A01360"))) PPC_WEAK_FUNC(sub_82A01360);
PPC_FUNC_IMPL(__imp__sub_82A01360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A01368;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ab0
	ctx.lr = 0x82A01370;
	__savefpr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,1320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0175c
	if (ctx.cr6.eq) goto loc_82A0175C;
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0175c
	if (ctx.cr6.eq) goto loc_82A0175C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A013A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a016d4
	if (!ctx.cr6.gt) goto loc_82A016D4;
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// lwz r10,1544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82a016d4
	if (ctx.cr6.gt) goto loc_82A016D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a03af0
	ctx.lr = 0x82A013C8;
	sub_82A03AF0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addi r6,r11,16384
	ctx.r6.s64 = ctx.r11.s64 + 16384;
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// lfs f13,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r10,16384
	ctx.r4.s64 = ctx.r10.s64 + 16384;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// lfs f1,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r9,16384
	ctx.r11.s64 = ctx.r9.s64 + 16384;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// addi r4,r8,-22168
	ctx.r4.s64 = ctx.r8.s64 + -22168;
	// rlwinm r11,r7,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// rlwinm r8,r3,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFC;
	// rlwinm r7,r10,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// rlwinm r6,r6,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// lfsx f10,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r3,r9,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// lfsx f9,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f7,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfsx f5,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// lfsx f11,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f30,f5,f10
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfsx f3,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f31,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f29,f12,f3
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// lfs f27,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f23,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f26,f5,f3
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// lfs f28,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f14,f31,f1
	ctx.f14.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// stfs f23,84(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f24,f3,f7
	ctx.f24.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// lfs f22,172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f18,f2,f11,f6
	ctx.f18.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f6.f64));
	// lfs f19,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f16,f6,f11,f2
	ctx.f16.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f22,92(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f21,f27,f12
	ctx.f21.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// stfs f19,96(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fnmsubs f23,f13,f7,f30
	ctx.f23.f64 = double(float(-(ctx.f13.f64 * ctx.f7.f64 - ctx.f30.f64)));
	// lfs f25,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f28,f28,f1
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// stfs f21,80(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f20,f8,f5,f4
	ctx.f20.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 - ctx.f4.f64));
	// lfs f17,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f27,f29,f10
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// lfs f15,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f22,f1,f11
	ctx.f22.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f1,f26,f1
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f1.f64));
	// fnmsubs f26,f14,f26,f25
	ctx.f26.f64 = double(float(-(ctx.f14.f64 * ctx.f26.f64 - ctx.f25.f64)));
	// fmuls f19,f18,f0
	ctx.f19.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// fmuls f18,f16,f12
	ctx.f18.f64 = double(float(ctx.f16.f64 * ctx.f12.f64));
	// fmuls f16,f14,f11
	ctx.f16.f64 = double(float(ctx.f14.f64 * ctx.f11.f64));
	// fmuls f14,f3,f9
	ctx.f14.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmuls f3,f31,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f3.f64));
	// fmuls f21,f24,f0
	ctx.f21.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fmuls f31,f23,f0
	ctx.f31.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// fmuls f25,f28,f2
	ctx.f25.f64 = double(float(ctx.f28.f64 * ctx.f2.f64));
	// fmuls f12,f20,f12
	ctx.f12.f64 = double(float(ctx.f20.f64 * ctx.f12.f64));
	// fneg f0,f27
	ctx.f0.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// fmuls f30,f30,f28
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f26,f25,f11,f26
	ctx.f26.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 + ctx.f26.f64));
	// lfs f25,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f8,f8,f27
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// lfs f23,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f29,f25,f29
	ctx.f29.f64 = double(float(ctx.f25.f64 * ctx.f29.f64));
	// fmadds f24,f28,f24,f16
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f24.f64 + ctx.f16.f64));
	// lfs f20,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f16,f23,f0
	ctx.f16.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// lfs f25,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f12,f23,f12
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f12.f64));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fneg f19,f19
	ctx.f19.u64 = ctx.f19.u64 ^ 0x8000000000000000;
	// addi r4,r30,188
	ctx.r4.s64 = ctx.r30.s64 + 188;
	// fmadds f9,f3,f9,f30
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f30.f64));
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmuls f3,f23,f18
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f18.f64));
	// fmuls f0,f27,f6
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f6.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fnmsubs f8,f8,f5,f26
	ctx.f8.f64 = double(float(-(ctx.f8.f64 * ctx.f5.f64 - ctx.f26.f64)));
	// lfs f0,17480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17480);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f5,f29,f10,f24
	ctx.f5.f64 = double(float(-(ctx.f29.f64 * ctx.f10.f64 - ctx.f24.f64)));
	// fmadds f10,f20,f21,f16
	ctx.f10.f64 = double(float(ctx.f20.f64 * ctx.f21.f64 + ctx.f16.f64));
	// fmadds f12,f20,f19,f12
	ctx.f12.f64 = double(float(ctx.f20.f64 * ctx.f19.f64 + ctx.f12.f64));
	// fmadds f9,f27,f2,f9
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmadds f3,f20,f31,f3
	ctx.f3.f64 = double(float(ctx.f20.f64 * ctx.f31.f64 + ctx.f3.f64));
	// fmadds f2,f4,f27,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f27.f64 + ctx.f8.f64));
	// fsubs f8,f15,f5
	ctx.f8.f64 = double(float(ctx.f15.f64 - ctx.f5.f64));
	// fmadds f5,f22,f25,f10
	ctx.f5.f64 = double(float(ctx.f22.f64 * ctx.f25.f64 + ctx.f10.f64));
	// fmadds f4,f25,f1,f12
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fnmsubs f1,f13,f7,f9
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f7.f64 - ctx.f9.f64)));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f14,f25,f3
	ctx.f13.f64 = double(float(ctx.f14.f64 * ctx.f25.f64 + ctx.f3.f64));
	// fmadds f12,f28,f6,f2
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fadds f10,f5,f8
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fmadds f8,f9,f11,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fsubs f5,f17,f8
	ctx.f5.f64 = double(float(ctx.f17.f64 - ctx.f8.f64));
	// fadds f7,f4,f12
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x823d27f0
	ctx.lr = 0x82A015B8;
	sub_823D27F0(ctx, base);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,-31264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82a015d8
	if (ctx.cr6.gt) goto loc_82A015D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a015e0
	goto loc_82A015E0;
loc_82A015D8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A015E0:
	// lwz r29,980(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,2164(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2164);
	// lwz r28,2272(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2272);
	// lwz r9,500(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 500);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82a01620
	if (!ctx.cr6.gt) goto loc_82A01620;
	// lwz r8,496(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 496);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
loc_82A01604:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82a016c8
	if (ctx.cr6.eq) goto loc_82A016C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a01604
	if (ctx.cr6.lt) goto loc_82A01604;
loc_82A01620:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A01624:
	// bl 0x829e0fd0
	ctx.lr = 0x82A01628;
	sub_829E0FD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a01670
	if (ctx.cr6.eq) goto loc_82A01670;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x829e0fd0
	ctx.lr = 0x82A0163C;
	sub_829E0FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a01670
	if (ctx.cr6.eq) goto loc_82A01670;
	// lfs f0,336(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A01670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A01670:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// beq cr6,0x82a0168c
	if (ctx.cr6.eq) goto loc_82A0168C;
	// stw r11,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r11.u32);
	// stw r31,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r31.u32);
loc_82A0168C:
	// lwz r11,2212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2212);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,2164(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2164);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r5,504(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// bl 0x82aa0cb0
	ctx.lr = 0x82A016B8;
	sub_82AA0CB0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6afc
	ctx.lr = 0x82A016C4;
	__restfpr_14(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A016C8:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x82a01624
	goto loc_82A01624;
loc_82A016D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x829ef038
	ctx.lr = 0x82A016E0;
	sub_829EF038(ctx, base);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a01744
	if (!ctx.cr6.gt) goto loc_82A01744;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A016F4:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x829d95e0
	ctx.lr = 0x82A01700;
	sub_829D95E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a01730
	if (ctx.cr6.eq) goto loc_82A01730;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82610550
	ctx.lr = 0x82A01714;
	sub_82610550(ctx, base);
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a01724
	if (ctx.cr6.eq) goto loc_82A01724;
	// bl 0x82516e80
	ctx.lr = 0x82A01724;
	sub_82516E80(ctx, base);
loc_82A01724:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e1100
	ctx.lr = 0x82A01730;
	sub_829E1100(ctx, base);
loc_82A01730:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a016f4
	if (ctx.cr6.lt) goto loc_82A016F4;
loc_82A01744:
	// lwz r11,1320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r10.u32);
	// rlwinm r9,r9,0,7,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r9,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r9.u32);
loc_82A0175C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6afc
	ctx.lr = 0x82A01768;
	__restfpr_14(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0176C"))) PPC_WEAK_FUNC(sub_82A0176C);
PPC_FUNC_IMPL(__imp__sub_82A0176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A01770"))) PPC_WEAK_FUNC(sub_82A01770);
PPC_FUNC_IMPL(__imp__sub_82A01770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A01778;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a017a4
	if (ctx.cr6.gt) goto loc_82A017A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a017ac
	goto loc_82A017AC;
loc_82A017A4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A017AC:
	// lwz r31,980(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a0185c
	if (ctx.cr6.eq) goto loc_82A0185C;
	// lwz r11,2212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0185c
	if (ctx.cr6.eq) goto loc_82A0185C;
	// lwz r11,948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0185c
	if (ctx.cr6.eq) goto loc_82A0185C;
	// bl 0x82995ec0
	ctx.lr = 0x82A017D4;
	sub_82995EC0(ctx, base);
	// lwz r11,2212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2212);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,948(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// bl 0x82a03a88
	ctx.lr = 0x82A017E8;
	sub_82A03A88(ctx, base);
	// bl 0x82a03848
	ctx.lr = 0x82A017EC;
	sub_82A03848(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0185c
	if (ctx.cr6.eq) goto loc_82A0185C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a37290
	ctx.lr = 0x82A017FC;
	sub_82A37290(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0185c
	if (ctx.cr6.eq) goto loc_82A0185C;
	// bl 0x82a038c8
	ctx.lr = 0x82A01808;
	sub_82A038C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a0185c
	if (ctx.cr6.eq) goto loc_82A0185C;
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,188(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 188);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82b2d180
	ctx.lr = 0x82A0182C;
	sub_82B2D180(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,748(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,744(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r7.u32);
	// bl 0x82a03a28
	ctx.lr = 0x82A01858;
	sub_82A03A28(ctx, base);
	// stfs f1,692(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
loc_82A0185C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A01864"))) PPC_WEAK_FUNC(sub_82A01864);
PPC_FUNC_IMPL(__imp__sub_82A01864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A01868"))) PPC_WEAK_FUNC(sub_82A01868);
PPC_FUNC_IMPL(__imp__sub_82A01868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A01870;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,-31264(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// lwz r28,1608(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lfs f31,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a018bc
	if (ctx.cr6.eq) goto loc_82A018BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a018bc
	if (ctx.cr6.eq) goto loc_82A018BC;
	// lwz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a018bc
	if (ctx.cr6.eq) goto loc_82A018BC;
	// stfs f31,696(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 696, temp.u32);
	// bl 0x828b0858
	ctx.lr = 0x82A018BC;
	sub_828B0858(ctx, base);
loc_82A018BC:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82a01984
	if (!ctx.cr6.gt) goto loc_82A01984;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A018CC:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a01974
	if (ctx.cr6.eq) goto loc_82A01974;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a018f8
	if (!ctx.cr6.eq) goto loc_82A018F8;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a01974
	if (ctx.cr6.eq) goto loc_82A01974;
loc_82A018F8:
	// lwz r11,-31264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// lwz r3,900(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01928
	if (ctx.cr6.eq) goto loc_82A01928;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a01928
	if (ctx.cr6.eq) goto loc_82A01928;
	// lwz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a01928
	if (ctx.cr6.eq) goto loc_82A01928;
	// stfs f31,696(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 696, temp.u32);
	// bl 0x828b0858
	ctx.lr = 0x82A01928;
	sub_828B0858(ctx, base);
loc_82A01928:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a01b60
	ctx.lr = 0x82A0193C;
	sub_82A01B60(ctx, base);
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82a03948
	ctx.lr = 0x82A0194C;
	sub_82A03948(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a01974
	if (ctx.cr6.eq) goto loc_82A01974;
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,32(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// bl 0x82b0b320
	ctx.lr = 0x82A01974;
	sub_82B0B320(ctx, base);
loc_82A01974:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82a018cc
	if (ctx.cr6.lt) goto loc_82A018CC;
loc_82A01984:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A01990"))) PPC_WEAK_FUNC(sub_82A01990);
PPC_FUNC_IMPL(__imp__sub_82A01990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82A01998;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a01aac
	if (!ctx.cr6.gt) goto loc_82A01AAC;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r26,-31883
	ctx.r26.s64 = -2089484288;
loc_82A019C0:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a01a98
	if (ctx.cr6.eq) goto loc_82A01A98;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a01a98
	if (!ctx.cr6.eq) goto loc_82A01A98;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a019f8
	if (!ctx.cr6.eq) goto loc_82A019F8;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a01a98
	if (ctx.cr6.eq) goto loc_82A01A98;
loc_82A019F8:
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a01b60
	ctx.lr = 0x82A01A0C;
	sub_82A01B60(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r3,-31264(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r4,52(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// bl 0x8276e728
	ctx.lr = 0x82A01A54;
	sub_8276E728(ctx, base);
	// bl 0x82a03948
	ctx.lr = 0x82A01A58;
	sub_82A03948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a01a98
	if (ctx.cr6.eq) goto loc_82A01A98;
	// bl 0x82a039c8
	ctx.lr = 0x82A01A68;
	sub_82A039C8(ctx, base);
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,32(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// bl 0x82b0b698
	ctx.lr = 0x82A01A8C;
	sub_82B0B698(ctx, base);
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r30,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r30.u32);
loc_82A01A98:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a019c0
	if (ctx.cr6.lt) goto loc_82A019C0;
loc_82A01AAC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A01AB4"))) PPC_WEAK_FUNC(sub_82A01AB4);
PPC_FUNC_IMPL(__imp__sub_82A01AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A01AB8"))) PPC_WEAK_FUNC(sub_82A01AB8);
PPC_FUNC_IMPL(__imp__sub_82A01AB8) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a01b08
	if (ctx.cr6.eq) goto loc_82A01B08;
	// lwz r9,1608(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1608);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82a01b08
	if (!ctx.cr6.gt) goto loc_82A01B08;
	// lwz r11,1604(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1604);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_82A01AEC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a01b50
	if (ctx.cr6.eq) goto loc_82A01B50;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a01aec
	if (ctx.cr6.lt) goto loc_82A01AEC;
loc_82A01B08:
	// lwz r11,256(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r10,260(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r9,264(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lwz r8,244(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,248(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r6,252(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
loc_82A01B38:
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
loc_82A01B50:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a01b60
	ctx.lr = 0x82A01B5C;
	sub_82A01B60(ctx, base);
	// b 0x82a01b38
	goto loc_82A01B38;
}

__attribute__((alias("__imp__sub_82A01B60"))) PPC_WEAK_FUNC(sub_82A01B60);
PPC_FUNC_IMPL(__imp__sub_82A01B60) {
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
	// lwz r10,900(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 900);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a01c14
	if (ctx.cr6.eq) goto loc_82A01C14;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82a01c14
	if (ctx.cr6.lt) goto loc_82A01C14;
	// lwz r10,1608(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1608);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a01c14
	if (!ctx.cr6.lt) goto loc_82A01C14;
	// lwz r9,1604(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1604);
	// mulli r10,r5,92
	ctx.r10.s64 = ctx.r5.s64 * 92;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,56(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r5,60(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r11,1604(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1604);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,900(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 900);
	// ld r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// bl 0x825e79a0
	ctx.lr = 0x82A01BDC;
	sub_825E79A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82a01c44
	goto loc_82A01C44;
loc_82A01C14:
	// lwz r10,256(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,260(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,264(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r6,248(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	// lwz r5,252(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// lwz r7,244(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_82A01C44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A01C60"))) PPC_WEAK_FUNC(sub_82A01C60);
PPC_FUNC_IMPL(__imp__sub_82A01C60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a01cac
	if (ctx.cr6.eq) goto loc_82A01CAC;
	// lwz r11,504(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01c90
	if (ctx.cr6.eq) goto loc_82A01C90;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r8,264(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
loc_82A01C90:
	// lwz r11,256(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// lwz r10,260(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// lwz r9,264(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_82A01CAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A01CC0"))) PPC_WEAK_FUNC(sub_82A01CC0);
PPC_FUNC_IMPL(__imp__sub_82A01CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A01CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a01d04
	if (ctx.cr6.eq) goto loc_82A01D04;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r5,r29,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825cd468
	ctx.lr = 0x82A01CEC;
	sub_825CD468(ctx, base);
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a01d04
	if (ctx.cr6.eq) goto loc_82A01D04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x825cd468
	ctx.lr = 0x82A01D04;
	sub_825CD468(ctx, base);
loc_82A01D04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A01D0C"))) PPC_WEAK_FUNC(sub_82A01D0C);
PPC_FUNC_IMPL(__imp__sub_82A01D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A01D10"))) PPC_WEAK_FUNC(sub_82A01D10);
PPC_FUNC_IMPL(__imp__sub_82A01D10) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a01c60
	ctx.lr = 0x82A01D30;
	sub_82A01C60(ctx, base);
	// lwz r10,1756(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a01d44
	if (!ctx.cr6.lt) goto loc_82A01D44;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
loc_82A01D44:
	// lwz r10,1760(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1760);
	// lwz r9,1764(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
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

__attribute__((alias("__imp__sub_82A01D90"))) PPC_WEAK_FUNC(sub_82A01D90);
PPC_FUNC_IMPL(__imp__sub_82A01D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A01D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// lwz r10,1760(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1760);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,1756(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82a01de0
	if (!ctx.cr6.gt) goto loc_82A01DE0;
	// addis r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -65536;
loc_82A01DE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a01c60
	ctx.lr = 0x82A01DEC;
	sub_82A01C60(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r5,r30,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825cd468
	ctx.lr = 0x82A01E08;
	sub_825CD468(ctx, base);
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a01e20
	if (ctx.cr6.eq) goto loc_82A01E20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r5,r30,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x825cd468
	ctx.lr = 0x82A01E20;
	sub_825CD468(ctx, base);
loc_82A01E20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A01E28"))) PPC_WEAK_FUNC(sub_82A01E28);
PPC_FUNC_IMPL(__imp__sub_82A01E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,140(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A01E4C"))) PPC_WEAK_FUNC(sub_82A01E4C);
PPC_FUNC_IMPL(__imp__sub_82A01E4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A01E50"))) PPC_WEAK_FUNC(sub_82A01E50);
PPC_FUNC_IMPL(__imp__sub_82A01E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A01E58;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a01e94
	if (ctx.cr6.eq) goto loc_82A01E94;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1260(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
loc_82A01E94:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,1316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-32444
	ctx.r11.s64 = ctx.r11.s64 + -32444;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-1192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1192);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f29,-17448(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17448);
	ctx.f29.f64 = double(temp.f32);
	// bge cr6,0x82a01ecc
	if (!ctx.cr6.lt) goto loc_82A01ECC;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,1236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// b 0x82a01fb0
	goto loc_82A01FB0;
loc_82A01ECC:
	// lfs f0,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82a01f38
	if (!ctx.cr6.gt) goto loc_82A01F38;
	// lfs f0,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82a01ef8
	if (!ctx.cr6.lt) goto loc_82A01EF8;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// b 0x82a01efc
	goto loc_82A01EFC;
loc_82A01EF8:
	// stfs f31,1236(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
loc_82A01EFC:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a01f24
	if (ctx.cr6.gt) goto loc_82A01F24;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lfs f0,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// b 0x82a01fb0
	goto loc_82A01FB0;
loc_82A01F24:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// b 0x82a01fb0
	goto loc_82A01FB0;
loc_82A01F38:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a01f88
	if (!ctx.cr6.lt) goto loc_82A01F88;
	// lfs f0,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a01f60
	if (!ctx.cr6.lt) goto loc_82A01F60;
	// lwz r11,1320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a01fac
	if (!ctx.cr6.eq) goto loc_82A01FAC;
loc_82A01F60:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a01f78
	if (!ctx.cr6.lt) goto loc_82A01F78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ea0
	ctx.lr = 0x82A01F70;
	sub_82759EA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a01fb0
	if (ctx.cr6.eq) goto loc_82A01FB0;
loc_82A01F78:
	// lfs f0,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f13,1236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// b 0x82a01fb0
	goto loc_82A01FB0;
loc_82A01F88:
	// lfs f0,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82a01fa8
	if (!ctx.cr6.lt) goto loc_82A01FA8;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// b 0x82a01fb0
	goto loc_82A01FB0;
loc_82A01FA8:
	// stfs f31,1240(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
loc_82A01FAC:
	// stfs f31,1236(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
loc_82A01FB0:
	// lfs f0,1236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82a01ff8
	if (ctx.cr6.gt) goto loc_82A01FF8;
	// lfs f0,1048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82a01fd0
	if (!ctx.cr6.gt) goto loc_82A01FD0;
	// stfs f0,1240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
	// b 0x82a01ffc
	goto loc_82A01FFC;
loc_82A01FD0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a01ff8
	if (!ctx.cr6.lt) goto loc_82A01FF8;
	// lwz r11,1320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a01ff8
	if (ctx.cr6.eq) goto loc_82A01FF8;
	// lfs f13,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
	// b 0x82a01ffc
	goto loc_82A01FFC;
loc_82A01FF8:
	// stfs f31,1240(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
loc_82A01FFC:
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lfs f0,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1248, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r9,420(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A02028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0203C"))) PPC_WEAK_FUNC(sub_82A0203C);
PPC_FUNC_IMPL(__imp__sub_82A0203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02040"))) PPC_WEAK_FUNC(sub_82A02040);
PPC_FUNC_IMPL(__imp__sub_82A02040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A02048;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-32444
	ctx.r11.s64 = ctx.r11.s64 + -32444;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,1316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,-1192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1192);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f30,-17448(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17448);
	ctx.f30.f64 = double(temp.f32);
	// bge cr6,0x82a02098
	if (!ctx.cr6.lt) goto loc_82A02098;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,1236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// b 0x82a02180
	goto loc_82A02180;
loc_82A02098:
	// lfs f0,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82a02108
	if (!ctx.cr6.gt) goto loc_82A02108;
	// stfs f0,1240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
	// lfs f0,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82a020c8
	if (!ctx.cr6.lt) goto loc_82A020C8;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// b 0x82a020cc
	goto loc_82A020CC;
loc_82A020C8:
	// stfs f31,1236(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
loc_82A020CC:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a020f4
	if (ctx.cr6.gt) goto loc_82A020F4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lfs f0,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// b 0x82a02180
	goto loc_82A02180;
loc_82A020F4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// b 0x82a02180
	goto loc_82A02180;
loc_82A02108:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a02158
	if (!ctx.cr6.lt) goto loc_82A02158;
	// lfs f0,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a02130
	if (!ctx.cr6.lt) goto loc_82A02130;
	// lwz r11,1320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0217c
	if (!ctx.cr6.eq) goto loc_82A0217C;
loc_82A02130:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a02148
	if (!ctx.cr6.lt) goto loc_82A02148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ea0
	ctx.lr = 0x82A02140;
	sub_82759EA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a02180
	if (ctx.cr6.eq) goto loc_82A02180;
loc_82A02148:
	// lfs f0,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f13,1236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// b 0x82a02180
	goto loc_82A02180;
loc_82A02158:
	// lfs f0,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82a02178
	if (!ctx.cr6.lt) goto loc_82A02178;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// b 0x82a02180
	goto loc_82A02180;
loc_82A02178:
	// stfs f31,1240(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
loc_82A0217C:
	// stfs f31,1236(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
loc_82A02180:
	// lfs f0,1236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82a021c8
	if (ctx.cr6.gt) goto loc_82A021C8;
	// lfs f0,1048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82a021a0
	if (!ctx.cr6.gt) goto loc_82A021A0;
	// stfs f0,1240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
	// b 0x82a021cc
	goto loc_82A021CC;
loc_82A021A0:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a021c8
	if (!ctx.cr6.lt) goto loc_82A021C8;
	// lwz r11,1320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a021c8
	if (ctx.cr6.eq) goto loc_82A021C8;
	// lfs f13,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
	// b 0x82a021cc
	goto loc_82A021CC;
loc_82A021C8:
	// stfs f31,1240(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
loc_82A021CC:
	// lfs f0,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82a021f4
	if (!ctx.cr6.gt) goto loc_82A021F4;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a021f4
	if (!ctx.cr6.lt) goto loc_82A021F4;
	// lfs f0,1044(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82a021f4
	if (ctx.cr6.eq) goto loc_82A021F4;
	// lfs f0,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
loc_82A021F4:
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lfs f0,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1248, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r9,420(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A02220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A02234"))) PPC_WEAK_FUNC(sub_82A02234);
PPC_FUNC_IMPL(__imp__sub_82A02234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02238"))) PPC_WEAK_FUNC(sub_82A02238);
PPC_FUNC_IMPL(__imp__sub_82A02238) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82a0225c
	if (ctx.cr6.eq) goto loc_82A0225C;
	// lfs f13,1260(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1260);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a02260
	goto loc_82A02260;
loc_82A0225C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82A02260:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// lfs f0,-28860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28860);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82484998
	ctx.lr = 0x82A02280;
	sub_82484998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A02290"))) PPC_WEAK_FUNC(sub_82A02290);
PPC_FUNC_IMPL(__imp__sub_82A02290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82A02298;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6adc
	ctx.lr = 0x82A022A0;
	__savefpr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,-1448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1448);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82a022c4
	if (!ctx.cr6.gt) goto loc_82A022C4;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82A022C4:
	// lfs f0,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,156
	ctx.r3.s64 = ctx.r29.s64 + 156;
	// lfs f29,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// addi r31,r30,268
	ctx.r31.s64 = ctx.r30.s64 + 268;
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f1,f9
	ctx.f1.f64 = double(float(sqrt(ctx.f9.f64)));
	// bl 0x82484998
	ctx.lr = 0x82A02300;
	sub_82484998(ctx, base);
	// lfs f8,1248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1248);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,172(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,200(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f8,f1
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f13,f7,f31
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsubs f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a02330
	if (!ctx.cr6.lt) goto loc_82A02330;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82a0233c
	goto loc_82A0233C;
loc_82A02330:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a0233c
	if (ctx.cr6.lt) goto loc_82A0233C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A0233C:
	// fadds f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,256(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,200(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 200, temp.u32);
	// lfs f0,1240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1240);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a02384
	if (!ctx.cr6.gt) goto loc_82A02384;
	// lfs f12,244(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmadds f11,f12,f31,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f13.f64));
	// addi r10,r11,-18304
	ctx.r10.s64 = ctx.r11.s64 + -18304;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r7,r9,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lfsx f9,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f0,f9,f0,f11
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
loc_82A02384:
	// stfs f0,256(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 256, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,1260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1260);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r29,208
	ctx.r3.s64 = ctx.r29.s64 + 208;
	// lfs f0,184(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1236);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82484998
	ctx.lr = 0x82A023AC;
	sub_82484998(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f31,256(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r11,-32444
	ctx.r26.s64 = ctx.r11.s64 + -32444;
	// lfs f30,1260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f12,1164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1164);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f28,f31,f1
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// fcmpu cr6,f30,f12
	ctx.cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// lfs f25,-1296(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -1296);
	ctx.f25.f64 = double(temp.f32);
	// ble cr6,0x82a02418
	if (!ctx.cr6.gt) goto loc_82A02418;
	// addi r4,r30,256
	ctx.r4.s64 = ctx.r30.s64 + 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d7698
	ctx.lr = 0x82A023DC;
	sub_823D7698(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f13,f9,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f6,f12,f8,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// ble cr6,0x82a02418
	if (!ctx.cr6.gt) goto loc_82A02418;
	// lfs f0,184(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// fmuls f27,f0,f25
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// b 0x82a02438
	goto loc_82A02438;
loc_82A02418:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bne cr6,0x82a02438
	if (!ctx.cr6.eq) goto loc_82A02438;
	// fabs f0,f30
	ctx.f0.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lfs f13,188(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a02438
	if (!ctx.cr6.gt) goto loc_82A02438;
	// lfs f0,180(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f28,f0,f30,f28
	ctx.f28.f64 = double(float(-(ctx.f0.f64 * ctx.f30.f64 - ctx.f28.f64)));
loc_82A02438:
	// addi r4,r30,256
	ctx.r4.s64 = ctx.r30.s64 + 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d7698
	ctx.lr = 0x82A02444;
	sub_823D7698(ctx, base);
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,192(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f11,f29,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82a02468
	if (!ctx.cr6.lt) goto loc_82A02468;
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
loc_82A02468:
	// lfs f0,240(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82a0250c
	if (!ctx.cr6.gt) goto loc_82A0250C;
	// lwz r8,1104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x82a024dc
	if (ctx.cr6.lt) goto loc_82A024DC;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// lwz r11,1100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A024A0:
	// lwz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f0,176(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f12,176(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,176(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f30,f8,f10
	ctx.f30.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// bne 0x82a024a0
	if (!ctx.cr0.eq) goto loc_82A024A0;
loc_82A024DC:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82a0250c
	if (!ctx.cr6.lt) goto loc_82A0250C;
	// lwz r7,1100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
loc_82A024F4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f0,176(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// bne 0x82a024f4
	if (!ctx.cr0.eq) goto loc_82A024F4;
loc_82A0250C:
	// lwz r11,1104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0264c
	if (!ctx.cr6.gt) goto loc_82A0264C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f26,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f26.f64 = double(temp.f32);
loc_82A0252C:
	// lwz r11,1100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a02628
	if (ctx.cr6.eq) goto loc_82A02628;
	// lwz r10,1264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1264);
	// lfs f0,240(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f11,f9,f28
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f10,f9,f27
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fdivs f13,f31,f9
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f9.f64));
	// ble cr6,0x82a025cc
	if (!ctx.cr6.gt) goto loc_82A025CC;
	// fcmpu cr6,f30,f25
	ctx.cr6.compare(ctx.f30.f64, ctx.f25.f64);
	// ble cr6,0x82a025b8
	if (!ctx.cr6.gt) goto loc_82A025B8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f12,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f30,f12
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsubs f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// fmuls f4,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fdivs f12,f9,f4
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f4.f64));
	// fsubs f9,f31,f0
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f0,f9,f13,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// b 0x82a025d0
	goto loc_82A025D0;
loc_82A025B8:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
	// fsubs f9,f31,f0
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f0,f9,f13,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// b 0x82a025d0
	goto loc_82A025D0;
loc_82A025CC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82A025D0:
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// fmuls f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a02600
	if (ctx.cr6.eq) goto loc_82A02600;
	// lfs f13,152(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// stfs f11,84(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// b 0x82a02604
	goto loc_82A02604;
loc_82A02600:
	// stfs f29,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_82A02604:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A02628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A02628:
	// lfs f0,200(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,1104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0252c
	if (ctx.cr6.lt) goto loc_82A0252C;
loc_82A0264C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829d92a8
	ctx.lr = 0x82A02654;
	sub_829D92A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0266c
	if (ctx.cr6.eq) goto loc_82A0266C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1352);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0266C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0266C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b28
	ctx.lr = 0x82A02678;
	__restfpr_25(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0267C"))) PPC_WEAK_FUNC(sub_82A0267C);
PPC_FUNC_IMPL(__imp__sub_82A0267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02680"))) PPC_WEAK_FUNC(sub_82A02680);
PPC_FUNC_IMPL(__imp__sub_82A02680) {
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
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a027c4
	if (ctx.cr6.eq) goto loc_82A027C4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A026BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a027c4
	if (ctx.cr6.eq) goto loc_82A027C4;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82a026e8
	if (ctx.cr6.gt) goto loc_82A026E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a026f0
	goto loc_82A026F0;
loc_82A026E8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A026F0:
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// lwz r11,2212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a02744
	if (ctx.cr6.eq) goto loc_82A02744;
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31906
	ctx.r9.s64 = -2090991616;
	// lfs f13,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,22116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x82a02744
	if (!ctx.cr6.lt) goto loc_82A02744;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A02744:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a027c4
	if (ctx.cr6.eq) goto loc_82A027C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A02764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a02778
	if (!ctx.cr6.eq) goto loc_82A02778;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a027b0
	goto loc_82A027B0;
loc_82A02778:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,26244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26244);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f1,f12
	ctx.f1.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a027ac
	if (ctx.cr6.lt) goto loc_82A027AC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a027b0
	if (ctx.cr6.lt) goto loc_82A027B0;
loc_82A027AC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82A027B0:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-16452
	ctx.r4.s64 = ctx.r11.s64 + -16452;
	// bl 0x826fa198
	ctx.lr = 0x82A027C4;
	sub_826FA198(ctx, base);
loc_82A027C4:
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

__attribute__((alias("__imp__sub_82A027DC"))) PPC_WEAK_FUNC(sub_82A027DC);
PPC_FUNC_IMPL(__imp__sub_82A027DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A027E0"))) PPC_WEAK_FUNC(sub_82A027E0);
PPC_FUNC_IMPL(__imp__sub_82A027E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwimi r11,r4,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r11,1320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A027F0"))) PPC_WEAK_FUNC(sub_82A027F0);
PPC_FUNC_IMPL(__imp__sub_82A027F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r3,r11,9,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A027FC"))) PPC_WEAK_FUNC(sub_82A027FC);
PPC_FUNC_IMPL(__imp__sub_82A027FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02800"))) PPC_WEAK_FUNC(sub_82A02800);
PPC_FUNC_IMPL(__imp__sub_82A02800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,1280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A02814"))) PPC_WEAK_FUNC(sub_82A02814);
PPC_FUNC_IMPL(__imp__sub_82A02814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02818"))) PPC_WEAK_FUNC(sub_82A02818);
PPC_FUNC_IMPL(__imp__sub_82A02818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,1280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,740(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0284C"))) PPC_WEAK_FUNC(sub_82A0284C);
PPC_FUNC_IMPL(__imp__sub_82A0284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02850"))) PPC_WEAK_FUNC(sub_82A02850);
PPC_FUNC_IMPL(__imp__sub_82A02850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r3,r11,23,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0285C"))) PPC_WEAK_FUNC(sub_82A0285C);
PPC_FUNC_IMPL(__imp__sub_82A0285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02860"))) PPC_WEAK_FUNC(sub_82A02860);
PPC_FUNC_IMPL(__imp__sub_82A02860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0286C"))) PPC_WEAK_FUNC(sub_82A0286C);
PPC_FUNC_IMPL(__imp__sub_82A0286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02870"))) PPC_WEAK_FUNC(sub_82A02870);
PPC_FUNC_IMPL(__imp__sub_82A02870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwimi r11,r4,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r11,1320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A02880"))) PPC_WEAK_FUNC(sub_82A02880);
PPC_FUNC_IMPL(__imp__sub_82A02880) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r3,r11,14,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0288C"))) PPC_WEAK_FUNC(sub_82A0288C);
PPC_FUNC_IMPL(__imp__sub_82A0288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02890"))) PPC_WEAK_FUNC(sub_82A02890);
PPC_FUNC_IMPL(__imp__sub_82A02890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwimi r11,r4,17,14,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// stw r11,1320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A028A0"))) PPC_WEAK_FUNC(sub_82A028A0);
PPC_FUNC_IMPL(__imp__sub_82A028A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r3,r11,15,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A028AC"))) PPC_WEAK_FUNC(sub_82A028AC);
PPC_FUNC_IMPL(__imp__sub_82A028AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A028B0"))) PPC_WEAK_FUNC(sub_82A028B0);
PPC_FUNC_IMPL(__imp__sub_82A028B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwimi r11,r4,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r11,1320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A028C0"))) PPC_WEAK_FUNC(sub_82A028C0);
PPC_FUNC_IMPL(__imp__sub_82A028C0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1320);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A028CC"))) PPC_WEAK_FUNC(sub_82A028CC);
PPC_FUNC_IMPL(__imp__sub_82A028CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A028D0"))) PPC_WEAK_FUNC(sub_82A028D0);
PPC_FUNC_IMPL(__imp__sub_82A028D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwimi r11,r4,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,1320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A028E0"))) PPC_WEAK_FUNC(sub_82A028E0);
PPC_FUNC_IMPL(__imp__sub_82A028E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A028EC"))) PPC_WEAK_FUNC(sub_82A028EC);
PPC_FUNC_IMPL(__imp__sub_82A028EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A028F0"))) PPC_WEAK_FUNC(sub_82A028F0);
PPC_FUNC_IMPL(__imp__sub_82A028F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwimi r11,r4,14,17,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0x4000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r11,1320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A02900"))) PPC_WEAK_FUNC(sub_82A02900);
PPC_FUNC_IMPL(__imp__sub_82A02900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r3,r11,18,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0290C"))) PPC_WEAK_FUNC(sub_82A0290C);
PPC_FUNC_IMPL(__imp__sub_82A0290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02910"))) PPC_WEAK_FUNC(sub_82A02910);
PPC_FUNC_IMPL(__imp__sub_82A02910) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwimi r11,r4,13,18,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 13) & 0x2000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r11,1320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A02920"))) PPC_WEAK_FUNC(sub_82A02920);
PPC_FUNC_IMPL(__imp__sub_82A02920) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r3,r11,19,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0292C"))) PPC_WEAK_FUNC(sub_82A0292C);
PPC_FUNC_IMPL(__imp__sub_82A0292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02930"))) PPC_WEAK_FUNC(sub_82A02930);
PPC_FUNC_IMPL(__imp__sub_82A02930) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1536, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A02938"))) PPC_WEAK_FUNC(sub_82A02938);
PPC_FUNC_IMPL(__imp__sub_82A02938) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A02940"))) PPC_WEAK_FUNC(sub_82A02940);
PPC_FUNC_IMPL(__imp__sub_82A02940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1556(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1556, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A02948"))) PPC_WEAK_FUNC(sub_82A02948);
PPC_FUNC_IMPL(__imp__sub_82A02948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1556(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A02950"))) PPC_WEAK_FUNC(sub_82A02950);
PPC_FUNC_IMPL(__imp__sub_82A02950) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwimi r11,r4,20,11,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x100000) | (ctx.r11.u64 & 0xFFFFFFFFFFEFFFFF);
	// stw r11,1320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A02960"))) PPC_WEAK_FUNC(sub_82A02960);
PPC_FUNC_IMPL(__imp__sub_82A02960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r3,r11,12,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0296C"))) PPC_WEAK_FUNC(sub_82A0296C);
PPC_FUNC_IMPL(__imp__sub_82A0296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02970"))) PPC_WEAK_FUNC(sub_82A02970);
PPC_FUNC_IMPL(__imp__sub_82A02970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwimi r11,r4,19,12,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 19) & 0x80000) | (ctx.r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r11,1320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A02980"))) PPC_WEAK_FUNC(sub_82A02980);
PPC_FUNC_IMPL(__imp__sub_82A02980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r3,r11,13,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0298C"))) PPC_WEAK_FUNC(sub_82A0298C);
PPC_FUNC_IMPL(__imp__sub_82A0298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02990"))) PPC_WEAK_FUNC(sub_82A02990);
PPC_FUNC_IMPL(__imp__sub_82A02990) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1588, ctx.r4.u32);
	// stw r5,1592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1592, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0299C"))) PPC_WEAK_FUNC(sub_82A0299C);
PPC_FUNC_IMPL(__imp__sub_82A0299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A029A0"))) PPC_WEAK_FUNC(sub_82A029A0);
PPC_FUNC_IMPL(__imp__sub_82A029A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1588);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,1592(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1592);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A029B4"))) PPC_WEAK_FUNC(sub_82A029B4);
PPC_FUNC_IMPL(__imp__sub_82A029B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A029B8"))) PPC_WEAK_FUNC(sub_82A029B8);
PPC_FUNC_IMPL(__imp__sub_82A029B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82A029C0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ff17b4
	ctx.lr = 0x82A029D0;
	__savevmx_124(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r5,r29,244
	ctx.r5.s64 = ctx.r29.s64 + 244;
	// addi r4,r29,256
	ctx.r4.s64 = ctx.r29.s64 + 256;
	// bl 0x823d7588
	ctx.lr = 0x82A029E8;
	sub_823D7588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A029F8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82a029f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A029F8;
	// lwz r11,1608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a02c28
	if (!ctx.cr6.gt) goto loc_82A02C28;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v126,r0,r10
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lvx128 v125,r0,r9
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r26,-1
	ctx.r26.s64 = -1;
	// lvx128 v124,r0,r8
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r25,-31883
	ctx.r25.s64 = -2089484288;
	// lfs f30,-32444(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-15120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_82A02A5C:
	// lwz r11,1604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1604);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a02c14
	if (ctx.cr6.eq) goto loc_82A02C14;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a02c14
	if (ctx.cr6.eq) goto loc_82A02C14;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a02c14
	if (!ctx.cr6.eq) goto loc_82A02C14;
	// addi r5,r31,316
	ctx.r5.s64 = ctx.r31.s64 + 316;
	// addi r4,r31,328
	ctx.r4.s64 = ctx.r31.s64 + 328;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823d7588
	ctx.lr = 0x82A02AEC;
	sub_823D7588(ctx, base);
	// vmrghw128 v63,v124,v126
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// vmrghw128 v62,v125,v127
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vmrglw128 v61,v124,v126
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// vmrglw128 v60,v125,v127
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// vmrglw128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// vmrghw128 v57,v61,v60
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// vmrglw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v55,v63,v59
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// lvx128 v61,r0,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v54,v63,v58
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// lvx128 v60,r0,r8
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v53,v63,v57
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v52,v63,v56
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v51,v62,v59
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v50,v62,v57
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v49,v62,v58
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v48,v62,v56
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v47,v61,v59
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v46,v61,v57
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v45,v61,v58
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v44,v61,v56
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v43,v60,v59
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v42,v60,v57
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v41,v60,v58
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v40,v60,v56
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmrghw128 v39,v55,v53
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v38,v54,v52
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v37,v51,v50
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v36,v49,v48
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v35,v39,v38
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v34,v47,v46
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v33,v45,v44
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v32,v37,v36
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v63,v43,v42
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v62,v41,v40
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// stvx128 v35,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v61,v34,v33
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v60,v63,v62
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v32,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823d40c0
	ctx.lr = 0x82A02BC8;
	sub_823D40C0(ctx, base);
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-31264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// bl 0x82770290
	ctx.lr = 0x82A02C14;
	sub_82770290(ctx, base);
loc_82A02C14:
	// lwz r11,1608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,92
	ctx.r28.s64 = ctx.r28.s64 + 92;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a02a5c
	if (ctx.cr6.lt) goto loc_82A02A5C;
loc_82A02C28:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,1352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1352);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A02C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ff1a4c
	ctx.lr = 0x82A02C48;
	__restvmx_124(ctx, base);
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A02C54"))) PPC_WEAK_FUNC(sub_82A02C54);
PPC_FUNC_IMPL(__imp__sub_82A02C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02C58"))) PPC_WEAK_FUNC(sub_82A02C58);
PPC_FUNC_IMPL(__imp__sub_82A02C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A02C60;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ff17b4
	ctx.lr = 0x82A02C68;
	__savevmx_124(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r5,r30,244
	ctx.r5.s64 = ctx.r30.s64 + 244;
	// addi r4,r30,256
	ctx.r4.s64 = ctx.r30.s64 + 256;
	// bl 0x823d7588
	ctx.lr = 0x82A02C80;
	sub_823D7588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A02C90:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82a02c90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A02C90;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r8,1608(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f0,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// ble cr6,0x82a02ea4
	if (!ctx.cr6.gt) goto loc_82A02EA4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v126,r0,r10
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v125,r0,r9
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v124,r0,r8
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A02D34:
	// lwz r11,1604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a02e90
	if (ctx.cr6.eq) goto loc_82A02E90;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a02e90
	if (ctx.cr6.eq) goto loc_82A02E90;
	// addi r5,r31,316
	ctx.r5.s64 = ctx.r31.s64 + 316;
	// addi r4,r31,328
	ctx.r4.s64 = ctx.r31.s64 + 328;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823d7588
	ctx.lr = 0x82A02D68;
	sub_823D7588(ctx, base);
	// vmrghw128 v63,v124,v126
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// vmrghw128 v62,v125,v127
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vmrglw128 v61,v124,v126
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// vmrglw128 v60,v125,v127
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// vmrglw128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// vmrghw128 v57,v61,v60
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// vmrglw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v55,v63,v59
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// lvx128 v61,r0,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v54,v63,v58
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// lvx128 v60,r0,r8
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v53,v63,v57
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v52,v63,v56
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v51,v62,v59
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v50,v62,v57
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v49,v62,v58
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v48,v62,v56
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v47,v61,v59
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v46,v61,v57
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v45,v61,v58
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v44,v61,v56
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v43,v60,v59
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v42,v60,v57
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v41,v60,v58
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v40,v60,v56
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmrghw128 v39,v55,v53
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v38,v54,v52
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v37,v51,v50
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v36,v49,v48
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v35,v39,v38
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v34,v47,v46
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v33,v45,v44
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v32,v37,v36
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v63,v43,v42
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v62,v41,v40
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// stvx128 v35,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v61,v34,v33
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v60,v63,v62
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v32,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823d40c0
	ctx.lr = 0x82A02E44;
	sub_823D40C0(ctx, base);
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-31264(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// bl 0x82770290
	ctx.lr = 0x82A02E90;
	sub_82770290(ctx, base);
loc_82A02E90:
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a02d34
	if (ctx.cr6.lt) goto loc_82A02D34;
loc_82A02EA4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ff1a4c
	ctx.lr = 0x82A02EB0;
	__restvmx_124(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A02EB4"))) PPC_WEAK_FUNC(sub_82A02EB4);
PPC_FUNC_IMPL(__imp__sub_82A02EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02EB8"))) PPC_WEAK_FUNC(sub_82A02EB8);
PPC_FUNC_IMPL(__imp__sub_82A02EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A02EC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r27,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r27.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// lwz r11,1520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	// stw r10,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a02ff0
	if (ctx.cr6.eq) goto loc_82A02FF0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a02ff0
	if (ctx.cr6.eq) goto loc_82A02FF0;
	// bl 0x823fdd90
	ctx.lr = 0x82A02EFC;
	sub_823FDD90(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a02f1c
	if (ctx.cr6.eq) goto loc_82A02F1C;
loc_82A02F08:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a02f2c
	if (ctx.cr6.eq) goto loc_82A02F2C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a02f08
	if (!ctx.cr6.eq) goto loc_82A02F08;
loc_82A02F1C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a02ff0
	if (ctx.cr6.eq) goto loc_82A02FF0;
loc_82A02F2C:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a02f4c
	if (ctx.cr6.gt) goto loc_82A02F4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a02f54
	goto loc_82A02F54;
loc_82A02F4C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A02F54:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A02F5C;
	sub_8258A128(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a02fa8
	if (ctx.cr6.eq) goto loc_82A02FA8;
	// lwz r11,2220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a02fa8
	if (ctx.cr6.eq) goto loc_82A02FA8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,1520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	// lwz r3,2048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2048);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,268(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A02F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,2220(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2220);
	// lwz r3,2048(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2048);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,272(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 272);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A02FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A02FA8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,11548
	ctx.r4.s64 = ctx.r11.s64 + 11548;
	// bl 0x82295680
	ctx.lr = 0x82A02FB8;
	sub_82295680(ctx, base);
	// lwz r10,1520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	// lwz r3,2140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2140);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// lwz r7,1020(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1020);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A02FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82A02FF0;
	sub_82299080(ctx, base);
loc_82A02FF0:
	// lwz r30,216(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rldicr r7,r30,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d83c8
	ctx.lr = 0x82A0300C;
	sub_826D83C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a03060
	if (ctx.cr6.eq) goto loc_82A03060;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r28,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r28.u32);
	// stw r30,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r30.u32);
	// lwz r8,1376(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1376);
	// stw r10,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r10.u32);
	// stw r9,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A03040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,1380(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1380);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A03054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A03060:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0306C"))) PPC_WEAK_FUNC(sub_82A0306C);
PPC_FUNC_IMPL(__imp__sub_82A0306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03070"))) PPC_WEAK_FUNC(sub_82A03070);
PPC_FUNC_IMPL(__imp__sub_82A03070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A03078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a030f8
	if (!ctx.cr6.gt) goto loc_82A030F8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A03094:
	// lwz r11,1604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a030e4
	if (ctx.cr6.eq) goto loc_82A030E4;
	// lwz r3,1096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a030c8
	if (ctx.cr6.eq) goto loc_82A030C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r10,1292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A030C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A030C8:
	// lwz r11,1604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,1240(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1240);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A030E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A030E4:
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a03094
	if (ctx.cr6.lt) goto loc_82A03094;
loc_82A030F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A03100"))) PPC_WEAK_FUNC(sub_82A03100);
PPC_FUNC_IMPL(__imp__sub_82A03100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A03108;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,1608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0318c
	if (!ctx.cr6.gt) goto loc_82A0318C;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r27,8192
	ctx.r27.s64 = 536870912;
loc_82A03128:
	// lwz r11,1604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1604);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03178
	if (ctx.cr6.eq) goto loc_82A03178;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82a03178
	if (ctx.cr6.eq) goto loc_82A03178;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A03160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// oris r8,r9,8192
	ctx.r8.u64 = ctx.r9.u64 | 536870912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// bl 0x8265a3b0
	ctx.lr = 0x82A03178;
	sub_8265A3B0(ctx, base);
loc_82A03178:
	// lwz r11,1608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a03128
	if (ctx.cr6.lt) goto loc_82A03128;
loc_82A0318C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A03194"))) PPC_WEAK_FUNC(sub_82A03194);
PPC_FUNC_IMPL(__imp__sub_82A03194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03198"))) PPC_WEAK_FUNC(sub_82A03198);
PPC_FUNC_IMPL(__imp__sub_82A03198) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03200
	if (ctx.cr6.eq) goto loc_82A03200;
	// bl 0x829b8dc8
	ctx.lr = 0x82A031B8;
	sub_829B8DC8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a031d8
	if (ctx.cr6.eq) goto loc_82A031D8;
loc_82A031C4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a031e8
	if (ctx.cr6.eq) goto loc_82A031E8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a031c4
	if (!ctx.cr6.eq) goto loc_82A031C4;
loc_82A031D8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03200
	if (ctx.cr6.eq) goto loc_82A03200;
loc_82A031E8:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82A03200:
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

__attribute__((alias("__imp__sub_82A03218"))) PPC_WEAK_FUNC(sub_82A03218);
PPC_FUNC_IMPL(__imp__sub_82A03218) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03288
	if (ctx.cr6.eq) goto loc_82A03288;
	// bl 0x829ba1c8
	ctx.lr = 0x82A03238;
	sub_829BA1C8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03258
	if (ctx.cr6.eq) goto loc_82A03258;
loc_82A03244:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03268
	if (ctx.cr6.eq) goto loc_82A03268;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a03244
	if (!ctx.cr6.eq) goto loc_82A03244;
loc_82A03258:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03288
	if (ctx.cr6.eq) goto loc_82A03288;
loc_82A03268:
	// lbz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1836);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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
loc_82A03288:
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

__attribute__((alias("__imp__sub_82A032A0"))) PPC_WEAK_FUNC(sub_82A032A0);
PPC_FUNC_IMPL(__imp__sub_82A032A0) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03308
	if (ctx.cr6.eq) goto loc_82A03308;
	// bl 0x829bb590
	ctx.lr = 0x82A032C0;
	sub_829BB590(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a032e0
	if (ctx.cr6.eq) goto loc_82A032E0;
loc_82A032CC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a032f0
	if (ctx.cr6.eq) goto loc_82A032F0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a032cc
	if (!ctx.cr6.eq) goto loc_82A032CC;
loc_82A032E0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03308
	if (ctx.cr6.eq) goto loc_82A03308;
loc_82A032F0:
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
loc_82A03308:
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

__attribute__((alias("__imp__sub_82A03320"))) PPC_WEAK_FUNC(sub_82A03320);
PPC_FUNC_IMPL(__imp__sub_82A03320) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03388
	if (ctx.cr6.eq) goto loc_82A03388;
	// bl 0x829b7370
	ctx.lr = 0x82A03340;
	sub_829B7370(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03360
	if (ctx.cr6.eq) goto loc_82A03360;
loc_82A0334C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03370
	if (ctx.cr6.eq) goto loc_82A03370;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0334c
	if (!ctx.cr6.eq) goto loc_82A0334C;
loc_82A03360:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03388
	if (ctx.cr6.eq) goto loc_82A03388;
loc_82A03370:
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
loc_82A03388:
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

__attribute__((alias("__imp__sub_82A033A0"))) PPC_WEAK_FUNC(sub_82A033A0);
PPC_FUNC_IMPL(__imp__sub_82A033A0) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03408
	if (ctx.cr6.eq) goto loc_82A03408;
	// bl 0x829b3880
	ctx.lr = 0x82A033C0;
	sub_829B3880(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a033e0
	if (ctx.cr6.eq) goto loc_82A033E0;
loc_82A033CC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a033f0
	if (ctx.cr6.eq) goto loc_82A033F0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a033cc
	if (!ctx.cr6.eq) goto loc_82A033CC;
loc_82A033E0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03408
	if (ctx.cr6.eq) goto loc_82A03408;
loc_82A033F0:
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
loc_82A03408:
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

__attribute__((alias("__imp__sub_82A03420"))) PPC_WEAK_FUNC(sub_82A03420);
PPC_FUNC_IMPL(__imp__sub_82A03420) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03488
	if (ctx.cr6.eq) goto loc_82A03488;
	// bl 0x829bcae8
	ctx.lr = 0x82A03440;
	sub_829BCAE8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03460
	if (ctx.cr6.eq) goto loc_82A03460;
loc_82A0344C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03470
	if (ctx.cr6.eq) goto loc_82A03470;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0344c
	if (!ctx.cr6.eq) goto loc_82A0344C;
loc_82A03460:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03488
	if (ctx.cr6.eq) goto loc_82A03488;
loc_82A03470:
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
loc_82A03488:
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

__attribute__((alias("__imp__sub_82A034A0"))) PPC_WEAK_FUNC(sub_82A034A0);
PPC_FUNC_IMPL(__imp__sub_82A034A0) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03508
	if (ctx.cr6.eq) goto loc_82A03508;
	// bl 0x829bc1d0
	ctx.lr = 0x82A034C0;
	sub_829BC1D0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a034e0
	if (ctx.cr6.eq) goto loc_82A034E0;
loc_82A034CC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a034f0
	if (ctx.cr6.eq) goto loc_82A034F0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a034cc
	if (!ctx.cr6.eq) goto loc_82A034CC;
loc_82A034E0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03508
	if (ctx.cr6.eq) goto loc_82A03508;
loc_82A034F0:
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
loc_82A03508:
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

__attribute__((alias("__imp__sub_82A03520"))) PPC_WEAK_FUNC(sub_82A03520);
PPC_FUNC_IMPL(__imp__sub_82A03520) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03588
	if (ctx.cr6.eq) goto loc_82A03588;
	// bl 0x822dba58
	ctx.lr = 0x82A03540;
	sub_822DBA58(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03560
	if (ctx.cr6.eq) goto loc_82A03560;
loc_82A0354C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03570
	if (ctx.cr6.eq) goto loc_82A03570;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0354c
	if (!ctx.cr6.eq) goto loc_82A0354C;
loc_82A03560:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03588
	if (ctx.cr6.eq) goto loc_82A03588;
loc_82A03570:
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
loc_82A03588:
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

__attribute__((alias("__imp__sub_82A035A0"))) PPC_WEAK_FUNC(sub_82A035A0);
PPC_FUNC_IMPL(__imp__sub_82A035A0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82a035b0
	if (!ctx.cr6.eq) goto loc_82A035B0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_82A035B0:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// b 0x822a93e8
	sub_822A93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A035C8"))) PPC_WEAK_FUNC(sub_82A035C8);
PPC_FUNC_IMPL(__imp__sub_82A035C8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03630
	if (ctx.cr6.eq) goto loc_82A03630;
	// bl 0x829bc9a8
	ctx.lr = 0x82A035E8;
	sub_829BC9A8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03608
	if (ctx.cr6.eq) goto loc_82A03608;
loc_82A035F4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03618
	if (ctx.cr6.eq) goto loc_82A03618;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a035f4
	if (!ctx.cr6.eq) goto loc_82A035F4;
loc_82A03608:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03630
	if (ctx.cr6.eq) goto loc_82A03630;
loc_82A03618:
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
loc_82A03630:
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

__attribute__((alias("__imp__sub_82A03648"))) PPC_WEAK_FUNC(sub_82A03648);
PPC_FUNC_IMPL(__imp__sub_82A03648) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a036b0
	if (ctx.cr6.eq) goto loc_82A036B0;
	// bl 0x82999a98
	ctx.lr = 0x82A03668;
	sub_82999A98(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03688
	if (ctx.cr6.eq) goto loc_82A03688;
loc_82A03674:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03698
	if (ctx.cr6.eq) goto loc_82A03698;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a03674
	if (!ctx.cr6.eq) goto loc_82A03674;
loc_82A03688:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a036b0
	if (ctx.cr6.eq) goto loc_82A036B0;
loc_82A03698:
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
loc_82A036B0:
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

__attribute__((alias("__imp__sub_82A036C8"))) PPC_WEAK_FUNC(sub_82A036C8);
PPC_FUNC_IMPL(__imp__sub_82A036C8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03730
	if (ctx.cr6.eq) goto loc_82A03730;
	// bl 0x8297d698
	ctx.lr = 0x82A036E8;
	sub_8297D698(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03708
	if (ctx.cr6.eq) goto loc_82A03708;
loc_82A036F4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03718
	if (ctx.cr6.eq) goto loc_82A03718;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a036f4
	if (!ctx.cr6.eq) goto loc_82A036F4;
loc_82A03708:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03730
	if (ctx.cr6.eq) goto loc_82A03730;
loc_82A03718:
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
loc_82A03730:
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

__attribute__((alias("__imp__sub_82A03748"))) PPC_WEAK_FUNC(sub_82A03748);
PPC_FUNC_IMPL(__imp__sub_82A03748) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a037b0
	if (ctx.cr6.eq) goto loc_82A037B0;
	// bl 0x829b7528
	ctx.lr = 0x82A03768;
	sub_829B7528(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03788
	if (ctx.cr6.eq) goto loc_82A03788;
loc_82A03774:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03798
	if (ctx.cr6.eq) goto loc_82A03798;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a03774
	if (!ctx.cr6.eq) goto loc_82A03774;
loc_82A03788:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a037b0
	if (ctx.cr6.eq) goto loc_82A037B0;
loc_82A03798:
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
loc_82A037B0:
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

__attribute__((alias("__imp__sub_82A037C8"))) PPC_WEAK_FUNC(sub_82A037C8);
PPC_FUNC_IMPL(__imp__sub_82A037C8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03830
	if (ctx.cr6.eq) goto loc_82A03830;
	// bl 0x829b73c0
	ctx.lr = 0x82A037E8;
	sub_829B73C0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03808
	if (ctx.cr6.eq) goto loc_82A03808;
loc_82A037F4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03818
	if (ctx.cr6.eq) goto loc_82A03818;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a037f4
	if (!ctx.cr6.eq) goto loc_82A037F4;
loc_82A03808:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03830
	if (ctx.cr6.eq) goto loc_82A03830;
loc_82A03818:
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
loc_82A03830:
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

__attribute__((alias("__imp__sub_82A03848"))) PPC_WEAK_FUNC(sub_82A03848);
PPC_FUNC_IMPL(__imp__sub_82A03848) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a038b0
	if (ctx.cr6.eq) goto loc_82A038B0;
	// bl 0x82995ec0
	ctx.lr = 0x82A03868;
	sub_82995EC0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03888
	if (ctx.cr6.eq) goto loc_82A03888;
loc_82A03874:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03898
	if (ctx.cr6.eq) goto loc_82A03898;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a03874
	if (!ctx.cr6.eq) goto loc_82A03874;
loc_82A03888:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a038b0
	if (ctx.cr6.eq) goto loc_82A038B0;
loc_82A03898:
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
loc_82A038B0:
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

__attribute__((alias("__imp__sub_82A038C8"))) PPC_WEAK_FUNC(sub_82A038C8);
PPC_FUNC_IMPL(__imp__sub_82A038C8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a03930
	if (ctx.cr6.eq) goto loc_82A03930;
	// bl 0x829981b0
	ctx.lr = 0x82A038E8;
	sub_829981B0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03908
	if (ctx.cr6.eq) goto loc_82A03908;
loc_82A038F4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03918
	if (ctx.cr6.eq) goto loc_82A03918;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a038f4
	if (!ctx.cr6.eq) goto loc_82A038F4;
loc_82A03908:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03930
	if (ctx.cr6.eq) goto loc_82A03930;
loc_82A03918:
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
loc_82A03930:
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

__attribute__((alias("__imp__sub_82A03948"))) PPC_WEAK_FUNC(sub_82A03948);
PPC_FUNC_IMPL(__imp__sub_82A03948) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a039b0
	if (ctx.cr6.eq) goto loc_82A039B0;
	// bl 0x82989680
	ctx.lr = 0x82A03968;
	sub_82989680(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03988
	if (ctx.cr6.eq) goto loc_82A03988;
loc_82A03974:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a03998
	if (ctx.cr6.eq) goto loc_82A03998;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a03974
	if (!ctx.cr6.eq) goto loc_82A03974;
loc_82A03988:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a039b0
	if (ctx.cr6.eq) goto loc_82A039B0;
loc_82A03998:
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
loc_82A039B0:
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

__attribute__((alias("__imp__sub_82A039C8"))) PPC_WEAK_FUNC(sub_82A039C8);
PPC_FUNC_IMPL(__imp__sub_82A039C8) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-20272(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20272);
	// bl 0x8229e490
	ctx.lr = 0x82A039F4;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A03A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82A03A28"))) PPC_WEAK_FUNC(sub_82A03A28);
PPC_FUNC_IMPL(__imp__sub_82A03A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x82cb2308
	ctx.lr = 0x82A03A48;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-18116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f1,f9,f0,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f31.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03A88"))) PPC_WEAK_FUNC(sub_82A03A88);
PPC_FUNC_IMPL(__imp__sub_82A03A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A03A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-21216(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -21216);
	// bl 0x8229e490
	ctx.lr = 0x82A03AC0;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A03ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A03AE8"))) PPC_WEAK_FUNC(sub_82A03AE8);
PPC_FUNC_IMPL(__imp__sub_82A03AE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03AEC"))) PPC_WEAK_FUNC(sub_82A03AEC);
PPC_FUNC_IMPL(__imp__sub_82A03AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03AF0"))) PPC_WEAK_FUNC(sub_82A03AF0);
PPC_FUNC_IMPL(__imp__sub_82A03AF0) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-3560(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3560);
	// bl 0x8229e490
	ctx.lr = 0x82A03B1C;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A03B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82A03B50"))) PPC_WEAK_FUNC(sub_82A03B50);
PPC_FUNC_IMPL(__imp__sub_82A03B50) {
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

__attribute__((alias("__imp__sub_82A03B60"))) PPC_WEAK_FUNC(sub_82A03B60);
PPC_FUNC_IMPL(__imp__sub_82A03B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A03B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-3280(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3280);
	// bl 0x8229e490
	ctx.lr = 0x82A03B9C;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,228(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A03BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A03BC0"))) PPC_WEAK_FUNC(sub_82A03BC0);
PPC_FUNC_IMPL(__imp__sub_82A03BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03BC4"))) PPC_WEAK_FUNC(sub_82A03BC4);
PPC_FUNC_IMPL(__imp__sub_82A03BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03BC8"))) PPC_WEAK_FUNC(sub_82A03BC8);
PPC_FUNC_IMPL(__imp__sub_82A03BC8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r9,13728
	ctx.r8.s64 = ctx.r9.s64 + 13728;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03BF0"))) PPC_WEAK_FUNC(sub_82A03BF0);
PPC_FUNC_IMPL(__imp__sub_82A03BF0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03BF8"))) PPC_WEAK_FUNC(sub_82A03BF8);
PPC_FUNC_IMPL(__imp__sub_82A03BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r9,13728
	ctx.r8.s64 = ctx.r9.s64 + 13728;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03C18"))) PPC_WEAK_FUNC(sub_82A03C18);
PPC_FUNC_IMPL(__imp__sub_82A03C18) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,13728
	ctx.r10.s64 = ctx.r11.s64 + 13728;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A03C44;
	sub_8229C068(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,21912
	ctx.r8.s64 = ctx.r9.s64 + 21912;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A03C58;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f0888
	ctx.lr = 0x82A03C60;
	sub_825F0888(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a03c94
	if (ctx.cr6.eq) goto loc_82A03C94;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a03c8c
	if (ctx.cr6.lt) goto loc_82A03C8C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a03c94
	if (!ctx.cr6.gt) goto loc_82A03C94;
loc_82A03C8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A03C94;
	sub_82294A58(ctx, base);
loc_82A03C94:
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

__attribute__((alias("__imp__sub_82A03CB0"))) PPC_WEAK_FUNC(sub_82A03CB0);
PPC_FUNC_IMPL(__imp__sub_82A03CB0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,13728
	ctx.r10.s64 = ctx.r11.s64 + 13728;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A03CD4;
	sub_8229C068(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,21912
	ctx.r8.s64 = ctx.r9.s64 + 21912;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A03CE8;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f0888
	ctx.lr = 0x82A03CF0;
	sub_825F0888(ctx, base);
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

__attribute__((alias("__imp__sub_82A03D04"))) PPC_WEAK_FUNC(sub_82A03D04);
PPC_FUNC_IMPL(__imp__sub_82A03D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03D08"))) PPC_WEAK_FUNC(sub_82A03D08);
PPC_FUNC_IMPL(__imp__sub_82A03D08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r9,13368
	ctx.r8.s64 = ctx.r9.s64 + 13368;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03D30"))) PPC_WEAK_FUNC(sub_82A03D30);
PPC_FUNC_IMPL(__imp__sub_82A03D30) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03D38"))) PPC_WEAK_FUNC(sub_82A03D38);
PPC_FUNC_IMPL(__imp__sub_82A03D38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r9,13368
	ctx.r8.s64 = ctx.r9.s64 + 13368;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03D58"))) PPC_WEAK_FUNC(sub_82A03D58);
PPC_FUNC_IMPL(__imp__sub_82A03D58) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,13368
	ctx.r10.s64 = ctx.r11.s64 + 13368;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A03D84;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274f118
	ctx.lr = 0x82A03D8C;
	sub_8274F118(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a03dc0
	if (ctx.cr6.eq) goto loc_82A03DC0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a03db8
	if (ctx.cr6.lt) goto loc_82A03DB8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a03dc0
	if (!ctx.cr6.gt) goto loc_82A03DC0;
loc_82A03DB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A03DC0;
	sub_82294A58(ctx, base);
loc_82A03DC0:
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

__attribute__((alias("__imp__sub_82A03DDC"))) PPC_WEAK_FUNC(sub_82A03DDC);
PPC_FUNC_IMPL(__imp__sub_82A03DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03DE0"))) PPC_WEAK_FUNC(sub_82A03DE0);
PPC_FUNC_IMPL(__imp__sub_82A03DE0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,13368
	ctx.r10.s64 = ctx.r11.s64 + 13368;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A03E04;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274f118
	ctx.lr = 0x82A03E0C;
	sub_8274F118(ctx, base);
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

__attribute__((alias("__imp__sub_82A03E20"))) PPC_WEAK_FUNC(sub_82A03E20);
PPC_FUNC_IMPL(__imp__sub_82A03E20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r9,13008
	ctx.r8.s64 = ctx.r9.s64 + 13008;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03E48"))) PPC_WEAK_FUNC(sub_82A03E48);
PPC_FUNC_IMPL(__imp__sub_82A03E48) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03E50"))) PPC_WEAK_FUNC(sub_82A03E50);
PPC_FUNC_IMPL(__imp__sub_82A03E50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r9,13008
	ctx.r8.s64 = ctx.r9.s64 + 13008;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03E70"))) PPC_WEAK_FUNC(sub_82A03E70);
PPC_FUNC_IMPL(__imp__sub_82A03E70) {
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
	// bl 0x82a03ee0
	ctx.lr = 0x82A03E90;
	sub_82A03EE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03ec4
	if (ctx.cr6.eq) goto loc_82A03EC4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a03ebc
	if (ctx.cr6.lt) goto loc_82A03EBC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a03ec4
	if (!ctx.cr6.gt) goto loc_82A03EC4;
loc_82A03EBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A03EC4;
	sub_82294A58(ctx, base);
loc_82A03EC4:
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

__attribute__((alias("__imp__sub_82A03EE0"))) PPC_WEAK_FUNC(sub_82A03EE0);
PPC_FUNC_IMPL(__imp__sub_82A03EE0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,13008
	ctx.r10.s64 = ctx.r11.s64 + 13008;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A03F04;
	sub_8229C068(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82485b78
	ctx.lr = 0x82A03F0C;
	sub_82485B78(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82485b78
	ctx.lr = 0x82A03F14;
	sub_82485B78(ctx, base);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,8344
	ctx.r8.s64 = ctx.r9.s64 + 8344;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A03F28;
	sub_8229C068(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82485b78
	ctx.lr = 0x82A03F30;
	sub_82485B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d43b8
	ctx.lr = 0x82A03F38;
	sub_826D43B8(ctx, base);
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

__attribute__((alias("__imp__sub_82A03F4C"))) PPC_WEAK_FUNC(sub_82A03F4C);
PPC_FUNC_IMPL(__imp__sub_82A03F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03F50"))) PPC_WEAK_FUNC(sub_82A03F50);
PPC_FUNC_IMPL(__imp__sub_82A03F50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,11568
	ctx.r7.s64 = ctx.r9.s64 + 11568;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03F80"))) PPC_WEAK_FUNC(sub_82A03F80);
PPC_FUNC_IMPL(__imp__sub_82A03F80) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03F88"))) PPC_WEAK_FUNC(sub_82A03F88);
PPC_FUNC_IMPL(__imp__sub_82A03F88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,11568
	ctx.r7.s64 = ctx.r9.s64 + 11568;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03FB0"))) PPC_WEAK_FUNC(sub_82A03FB0);
PPC_FUNC_IMPL(__imp__sub_82A03FB0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,11568
	ctx.r10.s64 = ctx.r11.s64 + 11568;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A03FDC;
	sub_8229C068(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,11984
	ctx.r8.s64 = ctx.r9.s64 + 11984;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A03FF0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82976c68
	ctx.lr = 0x82A03FF8;
	sub_82976C68(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a0402c
	if (ctx.cr6.eq) goto loc_82A0402C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a04024
	if (ctx.cr6.lt) goto loc_82A04024;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a0402c
	if (!ctx.cr6.gt) goto loc_82A0402C;
loc_82A04024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A0402C;
	sub_82294A58(ctx, base);
loc_82A0402C:
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

__attribute__((alias("__imp__sub_82A04048"))) PPC_WEAK_FUNC(sub_82A04048);
PPC_FUNC_IMPL(__imp__sub_82A04048) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,11568
	ctx.r10.s64 = ctx.r11.s64 + 11568;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A0406C;
	sub_8229C068(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,11984
	ctx.r8.s64 = ctx.r9.s64 + 11984;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A04080;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82976c68
	ctx.lr = 0x82A04088;
	sub_82976C68(ctx, base);
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

__attribute__((alias("__imp__sub_82A0409C"))) PPC_WEAK_FUNC(sub_82A0409C);
PPC_FUNC_IMPL(__imp__sub_82A0409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A040A0"))) PPC_WEAK_FUNC(sub_82A040A0);
PPC_FUNC_IMPL(__imp__sub_82A040A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,11984
	ctx.r7.s64 = ctx.r9.s64 + 11984;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A040D0"))) PPC_WEAK_FUNC(sub_82A040D0);
PPC_FUNC_IMPL(__imp__sub_82A040D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A040D8"))) PPC_WEAK_FUNC(sub_82A040D8);
PPC_FUNC_IMPL(__imp__sub_82A040D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,4728
	ctx.r7.s64 = ctx.r9.s64 + 4728;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04108"))) PPC_WEAK_FUNC(sub_82A04108);
PPC_FUNC_IMPL(__imp__sub_82A04108) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04110"))) PPC_WEAK_FUNC(sub_82A04110);
PPC_FUNC_IMPL(__imp__sub_82A04110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82A04128;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a041ac
	if (ctx.cr6.eq) goto loc_82A041AC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,14012
	ctx.r11.s64 = ctx.r8.s64 + 14012;
	// lis r5,-32096
	ctx.r5.s64 = -2103443456;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,17856
	ctx.r6.s64 = ctx.r5.s64 + 17856;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,504
	ctx.r5.s64 = 504;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82A0419C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A041AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A041C0"))) PPC_WEAK_FUNC(sub_82A041C0);
PPC_FUNC_IMPL(__imp__sub_82A041C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A041C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28808);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a041f4
	if (!ctx.cr6.eq) goto loc_82A041F4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ff3d0
	ctx.lr = 0x82A041E8;
	sub_825FF3D0(ctx, base);
	// stw r3,-28808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28808, ctx.r3.u32);
	// bl 0x825ff490
	ctx.lr = 0x82A041F0;
	sub_825FF490(ctx, base);
	// lwz r10,-28808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28808);
loc_82A041F4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-25516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25516);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a04214
	if (ctx.cr6.eq) goto loc_82A04214;
	// bl 0x82316058
	ctx.lr = 0x82A04208;
	sub_82316058(ctx, base);
	// lwz r11,-25516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25516);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82a0421c
	goto loc_82A0421C;
loc_82A04214:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82A0421C:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0424c
	if (!ctx.cr6.eq) goto loc_82A0424C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82A0423C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82A04244;
	sub_822AADA8(ctx, base);
	// lwz r11,-25516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25516);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82A0424C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a04278
	if (!ctx.cr6.eq) goto loc_82A04278;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82A04268;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82A04270;
	sub_82398640(ctx, base);
	// lwz r11,-25516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25516);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82A04278:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a042b0
	if (ctx.cr6.eq) goto loc_82A042B0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82A04294;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a042b0
	if (!ctx.cr6.eq) goto loc_82A042B0;
	// lwz r3,-25516(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25516);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A042B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A042B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A042B8"))) PPC_WEAK_FUNC(sub_82A042B8);
PPC_FUNC_IMPL(__imp__sub_82A042B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A042C0"))) PPC_WEAK_FUNC(sub_82A042C0);
PPC_FUNC_IMPL(__imp__sub_82A042C0) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-28808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28808);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a04304
	if (!ctx.cr6.eq) goto loc_82A04304;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ff3d0
	ctx.lr = 0x82A042F8;
	sub_825FF3D0(ctx, base);
	// stw r3,-28808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28808, ctx.r3.u32);
	// bl 0x825ff490
	ctx.lr = 0x82A04300;
	sub_825FF490(ctx, base);
	// lwz r11,-28808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28808);
loc_82A04304:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82A0432C"))) PPC_WEAK_FUNC(sub_82A0432C);
PPC_FUNC_IMPL(__imp__sub_82A0432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04330"))) PPC_WEAK_FUNC(sub_82A04330);
PPC_FUNC_IMPL(__imp__sub_82A04330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A04338;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,496(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a043f8
	if (!ctx.cr6.gt) goto loc_82A043F8;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r28,r27,492
	ctx.r28.s64 = ctx.r27.s64 + 492;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-21944
	ctx.r29.s64 = ctx.r11.s64 + -21944;
loc_82A04368:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a043c4
	if (ctx.cr6.eq) goto loc_82A043C4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a043c4
	if (ctx.cr6.lt) goto loc_82A043C4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a043c4
	if (!ctx.cr6.lt) goto loc_82A043C4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a043c4
	if (ctx.cr6.eq) goto loc_82A043C4;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a043c4
	if (!ctx.cr6.eq) goto loc_82A043C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,1000(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A043C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a043e4
	goto loc_82A043E4;
loc_82A043C4:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8232d180
	ctx.lr = 0x82A043DC;
	sub_8232D180(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_82A043E4:
	// lwz r11,496(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 496);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a04368
	if (ctx.cr6.lt) goto loc_82A04368;
loc_82A043F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04404"))) PPC_WEAK_FUNC(sub_82A04404);
PPC_FUNC_IMPL(__imp__sub_82A04404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04408"))) PPC_WEAK_FUNC(sub_82A04408);
PPC_FUNC_IMPL(__imp__sub_82A04408) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,492
	ctx.r3.s64 = ctx.r3.s64 + 492;
	// bl 0x82a04478
	ctx.lr = 0x82A04424;
	sub_82A04478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04434"))) PPC_WEAK_FUNC(sub_82A04434);
PPC_FUNC_IMPL(__imp__sub_82A04434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04438"))) PPC_WEAK_FUNC(sub_82A04438);
PPC_FUNC_IMPL(__imp__sub_82A04438) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,492
	ctx.r3.s64 = ctx.r3.s64 + 492;
	// bl 0x82a044e0
	ctx.lr = 0x82A04454;
	sub_82A044E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04464"))) PPC_WEAK_FUNC(sub_82A04464);
PPC_FUNC_IMPL(__imp__sub_82A04464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04468"))) PPC_WEAK_FUNC(sub_82A04468);
PPC_FUNC_IMPL(__imp__sub_82A04468) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04478"))) PPC_WEAK_FUNC(sub_82A04478);
PPC_FUNC_IMPL(__imp__sub_82A04478) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82A044A8;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a044c0
	if (ctx.cr0.eq) goto loc_82A044C0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A044C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_82A044E0"))) PPC_WEAK_FUNC(sub_82A044E0);
PPC_FUNC_IMPL(__imp__sub_82A044E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A044E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82a04550
	if (!ctx.cr6.gt) goto loc_82A04550;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A04508:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a0453c
	if (!ctx.cr6.eq) goto loc_82A0453C;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x82A04534;
	sub_8232D180(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82A0453C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a04508
	if (ctx.cr6.lt) goto loc_82A04508;
loc_82A04550:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04560"))) PPC_WEAK_FUNC(sub_82A04560);
PPC_FUNC_IMPL(__imp__sub_82A04560) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82A0458C;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_82A045AC"))) PPC_WEAK_FUNC(sub_82A045AC);
PPC_FUNC_IMPL(__imp__sub_82A045AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A045B0"))) PPC_WEAK_FUNC(sub_82A045B0);
PPC_FUNC_IMPL(__imp__sub_82A045B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A045C0"))) PPC_WEAK_FUNC(sub_82A045C0);
PPC_FUNC_IMPL(__imp__sub_82A045C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,14048
	ctx.r7.s64 = ctx.r9.s64 + 14048;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A045F0"))) PPC_WEAK_FUNC(sub_82A045F0);
PPC_FUNC_IMPL(__imp__sub_82A045F0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A045F8"))) PPC_WEAK_FUNC(sub_82A045F8);
PPC_FUNC_IMPL(__imp__sub_82A045F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,14048
	ctx.r7.s64 = ctx.r9.s64 + 14048;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04620"))) PPC_WEAK_FUNC(sub_82A04620);
PPC_FUNC_IMPL(__imp__sub_82A04620) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,14048
	ctx.r10.s64 = ctx.r11.s64 + 14048;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A0464C;
	sub_8229C068(ctx, base);
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// bl 0x82a04708
	ctx.lr = 0x82A04654;
	sub_82A04708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x82A0465C;
	sub_82383C00(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a04690
	if (ctx.cr6.eq) goto loc_82A04690;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a04688
	if (ctx.cr6.lt) goto loc_82A04688;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a04690
	if (!ctx.cr6.gt) goto loc_82A04690;
loc_82A04688:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A04690;
	sub_82294A58(ctx, base);
loc_82A04690:
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

__attribute__((alias("__imp__sub_82A046AC"))) PPC_WEAK_FUNC(sub_82A046AC);
PPC_FUNC_IMPL(__imp__sub_82A046AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A046B0"))) PPC_WEAK_FUNC(sub_82A046B0);
PPC_FUNC_IMPL(__imp__sub_82A046B0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,14048
	ctx.r10.s64 = ctx.r11.s64 + 14048;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A046D4;
	sub_8229C068(ctx, base);
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// bl 0x82a04708
	ctx.lr = 0x82A046DC;
	sub_82A04708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x82A046E4;
	sub_82383C00(ctx, base);
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

__attribute__((alias("__imp__sub_82A046F8"))) PPC_WEAK_FUNC(sub_82A046F8);
PPC_FUNC_IMPL(__imp__sub_82A046F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A046FC"))) PPC_WEAK_FUNC(sub_82A046FC);
PPC_FUNC_IMPL(__imp__sub_82A046FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04700"))) PPC_WEAK_FUNC(sub_82A04700);
PPC_FUNC_IMPL(__imp__sub_82A04700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04704"))) PPC_WEAK_FUNC(sub_82A04704);
PPC_FUNC_IMPL(__imp__sub_82A04704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04708"))) PPC_WEAK_FUNC(sub_82A04708);
PPC_FUNC_IMPL(__imp__sub_82A04708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A04710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a04750
	if (ctx.cr6.eq) goto loc_82A04750;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0473c
	if (!ctx.cr6.eq) goto loc_82A0473C;
	// bl 0x822900a0
	ctx.lr = 0x82A04738;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82A0473C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A04750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A04750:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04768"))) PPC_WEAK_FUNC(sub_82A04768);
PPC_FUNC_IMPL(__imp__sub_82A04768) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a04708
	sub_82A04708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0476C"))) PPC_WEAK_FUNC(sub_82A0476C);
PPC_FUNC_IMPL(__imp__sub_82A0476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04770"))) PPC_WEAK_FUNC(sub_82A04770);
PPC_FUNC_IMPL(__imp__sub_82A04770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82A04788;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0480c
	if (ctx.cr6.eq) goto loc_82A0480C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,15044
	ctx.r11.s64 = ctx.r8.s64 + 15044;
	// lis r5,-32095
	ctx.r5.s64 = -2103377920;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-7816
	ctx.r6.s64 = ctx.r5.s64 + -7816;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1384
	ctx.r5.s64 = 1384;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82A047FC;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A0480C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04820"))) PPC_WEAK_FUNC(sub_82A04820);
PPC_FUNC_IMPL(__imp__sub_82A04820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A04828;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27948);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a04854
	if (!ctx.cr6.eq) goto loc_82A04854;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82686ea8
	ctx.lr = 0x82A04848;
	sub_82686EA8(ctx, base);
	// stw r3,-27948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27948, ctx.r3.u32);
	// bl 0x82686f68
	ctx.lr = 0x82A04850;
	sub_82686F68(ctx, base);
	// lwz r10,-27948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27948);
loc_82A04854:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-25512(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25512);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a04874
	if (ctx.cr6.eq) goto loc_82A04874;
	// bl 0x82310f68
	ctx.lr = 0x82A04868;
	sub_82310F68(ctx, base);
	// lwz r11,-25512(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25512);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82a0487c
	goto loc_82A0487C;
loc_82A04874:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82A0487C:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a048ac
	if (!ctx.cr6.eq) goto loc_82A048AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82A0489C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82A048A4;
	sub_822AADA8(ctx, base);
	// lwz r11,-25512(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25512);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82A048AC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a048d8
	if (!ctx.cr6.eq) goto loc_82A048D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82A048C8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82A048D0;
	sub_82398640(ctx, base);
	// lwz r11,-25512(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25512);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82A048D8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a04910
	if (ctx.cr6.eq) goto loc_82A04910;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82A048F4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a04910
	if (!ctx.cr6.eq) goto loc_82A04910;
	// lwz r3,-25512(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25512);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A04910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A04910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04918"))) PPC_WEAK_FUNC(sub_82A04918);
PPC_FUNC_IMPL(__imp__sub_82A04918) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04920"))) PPC_WEAK_FUNC(sub_82A04920);
PPC_FUNC_IMPL(__imp__sub_82A04920) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-27948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27948);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a04964
	if (!ctx.cr6.eq) goto loc_82A04964;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82686ea8
	ctx.lr = 0x82A04958;
	sub_82686EA8(ctx, base);
	// stw r3,-27948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27948, ctx.r3.u32);
	// bl 0x82686f68
	ctx.lr = 0x82A04960;
	sub_82686F68(ctx, base);
	// lwz r11,-27948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27948);
loc_82A04964:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82A0498C"))) PPC_WEAK_FUNC(sub_82A0498C);
PPC_FUNC_IMPL(__imp__sub_82A0498C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04990"))) PPC_WEAK_FUNC(sub_82A04990);
PPC_FUNC_IMPL(__imp__sub_82A04990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82A049A8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a04a2c
	if (ctx.cr6.eq) goto loc_82A04A2C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,15080
	ctx.r11.s64 = ctx.r8.s64 + 15080;
	// lis r5,-32095
	ctx.r5.s64 = -2103377920;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-8304
	ctx.r6.s64 = ctx.r5.s64 + -8304;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82A04A1C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A04A2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04A40"))) PPC_WEAK_FUNC(sub_82A04A40);
PPC_FUNC_IMPL(__imp__sub_82A04A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A04A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14476
	ctx.r29.s64 = ctx.r11.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a04a78
	if (!ctx.cr6.eq) goto loc_82A04A78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x82A04A6C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82A04A74;
	sub_822AADA8(ctx, base);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82A04A78:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-25508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25508);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a04a9c
	if (ctx.cr6.eq) goto loc_82A04A9C;
	// bl 0x822955c8
	ctx.lr = 0x82A04A8C;
	sub_822955C8(ctx, base);
	// lwz r11,-25508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25508);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82a04aa4
	goto loc_82A04AA4;
loc_82A04A9C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
loc_82A04AA4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a04ac4
	if (!ctx.cr6.eq) goto loc_82A04AC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x82A04AB4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82A04ABC;
	sub_822AADA8(ctx, base);
	// lwz r11,-25508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25508);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82A04AC4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a04af0
	if (!ctx.cr6.eq) goto loc_82A04AF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398580
	ctx.lr = 0x82A04AE0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82A04AE8;
	sub_82398640(ctx, base);
	// lwz r11,-25508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25508);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82A04AF0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a04b28
	if (ctx.cr6.eq) goto loc_82A04B28;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82A04B0C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a04b28
	if (!ctx.cr6.eq) goto loc_82A04B28;
	// lwz r3,-25508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25508);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A04B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A04B28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04B30"))) PPC_WEAK_FUNC(sub_82A04B30);
PPC_FUNC_IMPL(__imp__sub_82A04B30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04B38"))) PPC_WEAK_FUNC(sub_82A04B38);
PPC_FUNC_IMPL(__imp__sub_82A04B38) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a04b7c
	if (!ctx.cr6.eq) goto loc_82A04B7C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822aace8
	ctx.lr = 0x82A04B70;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82A04B78;
	sub_822AADA8(ctx, base);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82A04B7C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82A04BA4"))) PPC_WEAK_FUNC(sub_82A04BA4);
PPC_FUNC_IMPL(__imp__sub_82A04BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04BA8"))) PPC_WEAK_FUNC(sub_82A04BA8);
PPC_FUNC_IMPL(__imp__sub_82A04BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04BB8"))) PPC_WEAK_FUNC(sub_82A04BB8);
PPC_FUNC_IMPL(__imp__sub_82A04BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04BC4"))) PPC_WEAK_FUNC(sub_82A04BC4);
PPC_FUNC_IMPL(__imp__sub_82A04BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04BC8"))) PPC_WEAK_FUNC(sub_82A04BC8);
PPC_FUNC_IMPL(__imp__sub_82A04BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04BD0"))) PPC_WEAK_FUNC(sub_82A04BD0);
PPC_FUNC_IMPL(__imp__sub_82A04BD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,756(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04BD8"))) PPC_WEAK_FUNC(sub_82A04BD8);
PPC_FUNC_IMPL(__imp__sub_82A04BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82a04bf0
	if (ctx.cr6.gt) goto loc_82A04BF0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A04BF0:
	// lwz r10,760(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04C24"))) PPC_WEAK_FUNC(sub_82A04C24);
PPC_FUNC_IMPL(__imp__sub_82A04C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04C28"))) PPC_WEAK_FUNC(sub_82A04C28);
PPC_FUNC_IMPL(__imp__sub_82A04C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,15,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04C34"))) PPC_WEAK_FUNC(sub_82A04C34);
PPC_FUNC_IMPL(__imp__sub_82A04C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04C38"))) PPC_WEAK_FUNC(sub_82A04C38);
PPC_FUNC_IMPL(__imp__sub_82A04C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,14,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04C44"))) PPC_WEAK_FUNC(sub_82A04C44);
PPC_FUNC_IMPL(__imp__sub_82A04C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04C48"))) PPC_WEAK_FUNC(sub_82A04C48);
PPC_FUNC_IMPL(__imp__sub_82A04C48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,26,5,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0x4000000) | (ctx.r11.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04C58"))) PPC_WEAK_FUNC(sub_82A04C58);
PPC_FUNC_IMPL(__imp__sub_82A04C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,6,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04C64"))) PPC_WEAK_FUNC(sub_82A04C64);
PPC_FUNC_IMPL(__imp__sub_82A04C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04C68"))) PPC_WEAK_FUNC(sub_82A04C68);
PPC_FUNC_IMPL(__imp__sub_82A04C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04C78"))) PPC_WEAK_FUNC(sub_82A04C78);
PPC_FUNC_IMPL(__imp__sub_82A04C78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,7,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04C84"))) PPC_WEAK_FUNC(sub_82A04C84);
PPC_FUNC_IMPL(__imp__sub_82A04C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04C88"))) PPC_WEAK_FUNC(sub_82A04C88);
PPC_FUNC_IMPL(__imp__sub_82A04C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,24,7,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04C98"))) PPC_WEAK_FUNC(sub_82A04C98);
PPC_FUNC_IMPL(__imp__sub_82A04C98) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 568);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04CA4"))) PPC_WEAK_FUNC(sub_82A04CA4);
PPC_FUNC_IMPL(__imp__sub_82A04CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04CA8"))) PPC_WEAK_FUNC(sub_82A04CA8);
PPC_FUNC_IMPL(__imp__sub_82A04CA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04CB8"))) PPC_WEAK_FUNC(sub_82A04CB8);
PPC_FUNC_IMPL(__imp__sub_82A04CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,9,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04CC4"))) PPC_WEAK_FUNC(sub_82A04CC4);
PPC_FUNC_IMPL(__imp__sub_82A04CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04CC8"))) PPC_WEAK_FUNC(sub_82A04CC8);
PPC_FUNC_IMPL(__imp__sub_82A04CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,22,9,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 22) & 0x400000) | (ctx.r11.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04CD8"))) PPC_WEAK_FUNC(sub_82A04CD8);
PPC_FUNC_IMPL(__imp__sub_82A04CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,10,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04CE4"))) PPC_WEAK_FUNC(sub_82A04CE4);
PPC_FUNC_IMPL(__imp__sub_82A04CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04CE8"))) PPC_WEAK_FUNC(sub_82A04CE8);
PPC_FUNC_IMPL(__imp__sub_82A04CE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04CF8"))) PPC_WEAK_FUNC(sub_82A04CF8);
PPC_FUNC_IMPL(__imp__sub_82A04CF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04D04"))) PPC_WEAK_FUNC(sub_82A04D04);
PPC_FUNC_IMPL(__imp__sub_82A04D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04D08"))) PPC_WEAK_FUNC(sub_82A04D08);
PPC_FUNC_IMPL(__imp__sub_82A04D08) {
	PPC_FUNC_PROLOGUE();
	// stw r4,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04D10"))) PPC_WEAK_FUNC(sub_82A04D10);
PPC_FUNC_IMPL(__imp__sub_82A04D10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04D18"))) PPC_WEAK_FUNC(sub_82A04D18);
PPC_FUNC_IMPL(__imp__sub_82A04D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,592(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 592, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04D20"))) PPC_WEAK_FUNC(sub_82A04D20);
PPC_FUNC_IMPL(__imp__sub_82A04D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,592(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04D28"))) PPC_WEAK_FUNC(sub_82A04D28);
PPC_FUNC_IMPL(__imp__sub_82A04D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04D38"))) PPC_WEAK_FUNC(sub_82A04D38);
PPC_FUNC_IMPL(__imp__sub_82A04D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04D44"))) PPC_WEAK_FUNC(sub_82A04D44);
PPC_FUNC_IMPL(__imp__sub_82A04D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04D48"))) PPC_WEAK_FUNC(sub_82A04D48);
PPC_FUNC_IMPL(__imp__sub_82A04D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,27,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 27) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04D58"))) PPC_WEAK_FUNC(sub_82A04D58);
PPC_FUNC_IMPL(__imp__sub_82A04D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04D64"))) PPC_WEAK_FUNC(sub_82A04D64);
PPC_FUNC_IMPL(__imp__sub_82A04D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04D68"))) PPC_WEAK_FUNC(sub_82A04D68);
PPC_FUNC_IMPL(__imp__sub_82A04D68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 624, ctx.r4.u32);
	// stw r5,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04D74"))) PPC_WEAK_FUNC(sub_82A04D74);
PPC_FUNC_IMPL(__imp__sub_82A04D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04D78"))) PPC_WEAK_FUNC(sub_82A04D78);
PPC_FUNC_IMPL(__imp__sub_82A04D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,628(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04D8C"))) PPC_WEAK_FUNC(sub_82A04D8C);
PPC_FUNC_IMPL(__imp__sub_82A04D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04D90"))) PPC_WEAK_FUNC(sub_82A04D90);
PPC_FUNC_IMPL(__imp__sub_82A04D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x82A04D98;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6ab0
	ctx.lr = 0x82A04DA0;
	__savefpr_14(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8282f428
	ctx.lr = 0x82A04DAC;
	sub_8282F428(ctx, base);
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// lwz r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82a04dc0
	if (ctx.cr6.gt) goto loc_82A04DC0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A04DC0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a05450
	if (!ctx.cr6.gt) goto loc_82A05450;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// addi r28,r11,29152
	ctx.r28.s64 = ctx.r11.s64 + 29152;
	// lfs f0,17480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17480);
	ctx.f0.f64 = double(temp.f32);
	// li r15,0
	ctx.r15.s64 = 0;
	// lfs f13,-14344(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14344);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f12,-15120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r19,0(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// lis r20,-31885
	ctx.r20.s64 = -2089615360;
	// lis r21,-31883
	ctx.r21.s64 = -2089484288;
	// addi r16,r11,-19580
	ctx.r16.s64 = ctx.r11.s64 + -19580;
	// addi r30,r10,-22168
	ctx.r30.s64 = ctx.r10.s64 + -22168;
	// addi r18,r9,15416
	ctx.r18.s64 = ctx.r9.s64 + 15416;
	// addi r22,r8,11272
	ctx.r22.s64 = ctx.r8.s64 + 11272;
loc_82A04E30:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f13,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// addi r7,r11,16384
	ctx.r7.s64 = ctx.r11.s64 + 16384;
	// lfs f10,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f10.f64 = double(temp.f32);
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// lfs f7,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r10,16384
	ctx.r5.s64 = ctx.r10.s64 + 16384;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// srawi r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// addi r3,r9,16384
	ctx.r3.s64 = ctx.r9.s64 + 16384;
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// lwz r11,772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// srawi r9,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// lfs f11,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f11.f64 = double(temp.f32);
	// srawi r7,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 2;
	// lfs f9,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r3,r10,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lfs f6,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r5,r8,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// rlwinm r10,r7,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// rlwinm r4,r4,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// lfs f31,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r9,r9,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// fmuls f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfsx f29,r3,r30
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	ctx.f29.f64 = double(temp.f32);
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lfsx f1,r5,r30
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r8,r6,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// lfsx f27,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfsx f0,r4,r30
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f27,f29
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// fmuls f28,f0,f1
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfsx f25,r9,r30
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f25.f64 = double(temp.f32);
	// lfs f16,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f23,f27,f25
	ctx.f23.f64 = double(float(ctx.f27.f64 * ctx.f25.f64));
	// lfsx f22,r8,r30
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f17,f8,f25
	ctx.f17.f64 = double(float(ctx.f8.f64 * ctx.f25.f64));
	// stfs f16,120(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f13,f12,f25
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fmuls f30,f8,f6
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// lfs f2,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f21,f22,f1
	ctx.f21.f64 = double(float(ctx.f22.f64 * ctx.f1.f64));
	// lfs f19,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f26,f29,f0
	ctx.f26.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f7,184(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f20,f27,f1
	ctx.f20.f64 = double(float(ctx.f27.f64 * ctx.f1.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f18,f0,f22
	ctx.f18.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f15,f12,f22
	ctx.f15.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// stfs f15,128(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f16,f24,f22,f28
	ctx.f16.f64 = double(float(ctx.f24.f64 * ctx.f22.f64 + ctx.f28.f64));
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f10,f25,f29
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f29.f64));
	// lfs f25,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f15,f4,f22
	ctx.f15.f64 = double(float(ctx.f4.f64 * ctx.f22.f64));
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f8,192(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fnmsubs f4,f4,f23,f31
	ctx.f4.f64 = double(float(-(ctx.f4.f64 * ctx.f23.f64 - ctx.f31.f64)));
	// stfs f25,124(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f12,f23,f12
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f12.f64));
	// lwz r10,784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// lfs f14,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f14.f64 = double(temp.f32);
	// stfs f19,132(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f7,f3,f24
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f24.f64));
	// fmadds f2,f28,f22,f24
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f22.f64 + ctx.f24.f64));
	// fmsubs f11,f21,f27,f26
	ctx.f11.f64 = double(float(ctx.f21.f64 * ctx.f27.f64 - ctx.f26.f64));
	// fnmsubs f9,f18,f29,f20
	ctx.f9.f64 = double(float(-(ctx.f18.f64 * ctx.f29.f64 - ctx.f20.f64)));
	// fmuls f8,f17,f1
	ctx.f8.f64 = double(float(ctx.f17.f64 * ctx.f1.f64));
	// fmuls f6,f21,f30
	ctx.f6.f64 = double(float(ctx.f21.f64 * ctx.f30.f64));
	// fmuls f25,f13,f0
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f23,f16,f5
	ctx.f23.f64 = double(float(ctx.f16.f64 * ctx.f5.f64));
	// fmadds f7,f7,f22,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f22.f64 + ctx.f4.f64));
	// lfs f4,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f4,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f20,f20,f3
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f3.f64));
	// lfs f19,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f16,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f4,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f21,f10,f5
	ctx.f21.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lfs f31,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f5,f9,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// add r4,r24,r10
	ctx.r4.u64 = ctx.r24.u64 + ctx.r10.u64;
	// fneg f9,f23
	ctx.f9.u64 = ctx.f23.u64 ^ 0x8000000000000000;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fmuls f18,f3,f18
	ctx.f18.f64 = double(float(ctx.f3.f64 * ctx.f18.f64));
	// stfs f16,116(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fnmsubs f7,f6,f27,f7
	ctx.f7.f64 = double(float(-(ctx.f6.f64 * ctx.f27.f64 - ctx.f7.f64)));
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f6,f17,f4
	ctx.f6.f64 = double(float(ctx.f17.f64 * ctx.f4.f64));
	// fmadds f4,f13,f0,f20
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f20.f64));
	// fmuls f2,f2,f19
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f19.f64));
	// fmuls f0,f11,f19
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f19.f64));
	// fmuls f13,f8,f19
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f19.f64));
	// fmadds f11,f3,f10,f15
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f15.f64));
	// fmuls f23,f30,f28
	ctx.f23.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmadds f10,f26,f30,f7
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 + ctx.f7.f64));
	// fmadds f8,f30,f24,f4
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f24.f64 + ctx.f4.f64));
	// fmadds f7,f5,f14,f2
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f14.f64 + ctx.f2.f64));
	// fmadds f5,f9,f14,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f14.f64 + ctx.f0.f64));
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f4,f21,f14,f13
	ctx.f4.f64 = double(float(ctx.f21.f64 * ctx.f14.f64 + ctx.f13.f64));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f2,f6,f1,f11
	ctx.f2.f64 = double(float(-(ctx.f6.f64 * ctx.f1.f64 - ctx.f11.f64)));
	// fmadds f1,f3,f28,f10
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f28.f64 + ctx.f10.f64));
	// fnmsubs f0,f18,f29,f8
	ctx.f0.f64 = double(float(-(ctx.f18.f64 * ctx.f29.f64 - ctx.f8.f64)));
	// fmadds f11,f13,f25,f7
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f25.f64 + ctx.f7.f64));
	// fmadds f10,f13,f12,f5
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f8,f9,f13,f4
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fsubs f7,f16,f2
	ctx.f7.f64 = double(float(ctx.f16.f64 - ctx.f2.f64));
	// fmadds f6,f23,f22,f0
	ctx.f6.f64 = double(float(ctx.f23.f64 * ctx.f22.f64 + ctx.f0.f64));
	// fadds f5,f10,f1
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f5,240(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f4,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f4,248(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f3,f31,f6
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f6.f64));
	// fadds f2,f11,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,244(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f2,124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x823d7698
	ctx.lr = 0x82A05050;
	sub_823D7698(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f1,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// lfs f0,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// srawi r5,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r11,16384
	ctx.r4.s64 = ctx.r11.s64 + 16384;
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r7,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// rlwinm r8,r6,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// lfs f10,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r7,r5,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// lfs f9,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f9.f64 = double(temp.f32);
	// lwz r23,12(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// srawi r6,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 2;
	// fmuls f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfsx f8,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r10,16384
	ctx.r5.s64 = ctx.r10.s64 + 16384;
	// lfsx f6,r8,r30
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f1,f12
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfsx f4,r7,r30
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r9,16384
	ctx.r11.s64 = ctx.r9.s64 + 16384;
	// lfs f2,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// fmuls f1,f7,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// rlwinm r4,r6,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// fmuls f11,f6,f8
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// rlwinm r7,r9,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// fmuls f13,f4,f8
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// rlwinm r8,r10,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// fmuls f23,f10,f7
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f30,f4,f6
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f26,f16
	ctx.f26.f64 = ctx.f16.f64;
	// lfs f0,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f3,r4,r30
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f18,f9,f5
	ctx.f18.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfsx f29,r7,r30
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// lfsx f31,r8,r30
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f27,f29,f3
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f3.f64));
	// fmuls f28,f7,f31
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f20,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f25,f29,f8
	ctx.f25.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// stfs f20,136(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f21,f29,f31
	ctx.f21.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// lfs f24,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f19,f5,f31
	ctx.f19.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f22,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f22.f64 = double(temp.f32);
	// lfs f20,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f31,f31,f3
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f3.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lwz r3,-31264(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -31264);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmsubs f17,f11,f29,f2
	ctx.f17.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 - ctx.f2.f64));
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f16,f13,f6,f27
	ctx.f16.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f27.f64));
	// stfs f26,112(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f10,f10,f28
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmuls f15,f25,f1
	ctx.f15.f64 = double(float(ctx.f25.f64 * ctx.f1.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// fmadds f14,f27,f6,f13
	ctx.f14.f64 = double(float(ctx.f27.f64 * ctx.f6.f64 + ctx.f13.f64));
	// li r8,8339
	ctx.r8.s64 = 8339;
	// fnmsubs f20,f23,f21,f20
	ctx.f20.f64 = double(float(-(ctx.f23.f64 * ctx.f21.f64 - ctx.f20.f64)));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// fnmsubs f30,f30,f3,f25
	ctx.f30.f64 = double(float(-(ctx.f30.f64 * ctx.f3.f64 - ctx.f25.f64)));
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// fmuls f2,f1,f27
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f27.f64));
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// fmuls f23,f23,f6
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f6.f64));
	// fmuls f26,f19,f8
	ctx.f26.f64 = double(float(ctx.f19.f64 * ctx.f8.f64));
	// fmuls f25,f17,f5
	ctx.f25.f64 = double(float(ctx.f17.f64 * ctx.f5.f64));
	// fmuls f5,f16,f5
	ctx.f5.f64 = double(float(ctx.f16.f64 * ctx.f5.f64));
	// fmuls f11,f11,f18
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f18.f64));
	// fmadds f10,f10,f4,f15
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f15.f64));
	// fmuls f17,f14,f12
	ctx.f17.f64 = double(float(ctx.f14.f64 * ctx.f12.f64));
	// fmuls f9,f9,f19
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f19.f64));
	// fmuls f30,f30,f12
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmadds f2,f2,f6,f20
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f20.f64));
	// fmadds f23,f1,f31,f23
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f23.f64));
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fneg f26,f26
	ctx.f26.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// fmuls f5,f5,f24
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f24.f64));
	// fmuls f25,f25,f24
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f24.f64));
	// fmadds f10,f18,f27,f10
	ctx.f10.f64 = double(float(ctx.f18.f64 * ctx.f27.f64 + ctx.f10.f64));
	// fneg f31,f17
	ctx.f31.u64 = ctx.f17.u64 ^ 0x8000000000000000;
	// fmuls f27,f18,f13
	ctx.f27.f64 = double(float(ctx.f18.f64 * ctx.f13.f64));
	// fmuls f4,f28,f4
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f4.f64));
	// fnmsubs f2,f11,f29,f2
	ctx.f2.f64 = double(float(-(ctx.f11.f64 * ctx.f29.f64 - ctx.f2.f64)));
	// fnmsubs f9,f9,f8,f23
	ctx.f9.f64 = double(float(-(ctx.f9.f64 * ctx.f8.f64 - ctx.f23.f64)));
	// fmuls f11,f21,f7
	ctx.f11.f64 = double(float(ctx.f21.f64 * ctx.f7.f64));
	// fmuls f8,f7,f6
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f7,f30,f22,f5
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f22.f64 + ctx.f5.f64));
	// fmuls f26,f26,f24
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f24.f64));
	// fnmsubs f5,f0,f3,f10
	ctx.f5.f64 = double(float(-(ctx.f0.f64 * ctx.f3.f64 - ctx.f10.f64)));
	// fmadds f3,f31,f22,f25
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f22.f64 + ctx.f25.f64));
	// fmadds f0,f12,f22,f26
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f22.f64 + ctx.f26.f64));
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f12,f18,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f18.f64 + ctx.f2.f64));
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f6,f27,f6,f5
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fsubs f12,f2,f9
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f4,f9,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f7.f64));
	// lfs f4,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f11,f9,f3
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f3.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f2,f8,f9,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64));
	// lfs f0,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f1,f13,f10
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f12,f0,f2
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmadds f9,f3,f0,f5
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f7,f1,f0,f7
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfs f0,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f2,232(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fadds f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f3,224(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f1,228(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// bl 0x827724b8
	ctx.lr = 0x82A05278;
	sub_827724B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a05428
	if (ctx.cr6.eq) goto loc_82A05428;
loc_82A05284:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82a0541c
	if (!ctx.cr6.eq) goto loc_82A0541C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a052ac
	if (!ctx.cr6.eq) goto loc_82A052AC;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x822960c0
	ctx.lr = 0x82A052A8;
	sub_822960C0(ctx, base);
	// b 0x82a052b4
	goto loc_82A052B4;
loc_82A052AC:
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82A052B4;
	sub_8233E1A0(ctx, base);
loc_82A052B4:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r26,152(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bne cr6,0x82a052cc
	if (!ctx.cr6.eq) goto loc_82A052CC;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_82A052CC:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8232e868
	ctx.lr = 0x82A052D8;
	sub_8232E868(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bne cr6,0x82a052f0
	if (!ctx.cr6.eq) goto loc_82A052F0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_82A052F0:
	// lwz r3,28872(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28872);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a0535c
	if (ctx.cr6.eq) goto loc_82A0535C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a0538c
	if (ctx.cr6.eq) goto loc_82A0538C;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0533c
	if (!ctx.cr6.eq) goto loc_82A0533C;
	// bl 0x822900a0
	ctx.lr = 0x82A05338;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82A0533C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A0535C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a0538c
	if (ctx.cr6.eq) goto loc_82A0538C;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a05378
	if (!ctx.cr6.eq) goto loc_82A05378;
	// bl 0x822900a0
	ctx.lr = 0x82A05374;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82A05378:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0538C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0538C:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r15.u32);
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r15,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r15.u32);
	// beq cr6,0x82a053e0
	if (ctx.cr6.eq) goto loc_82A053E0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a05410
	if (ctx.cr6.eq) goto loc_82A05410;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a053c0
	if (!ctx.cr6.eq) goto loc_82A053C0;
	// bl 0x822900a0
	ctx.lr = 0x82A053BC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82A053C0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A053DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82A053E0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a05410
	if (ctx.cr6.eq) goto loc_82A05410;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a053fc
	if (!ctx.cr6.eq) goto loc_82A053FC;
	// bl 0x822900a0
	ctx.lr = 0x82A053F8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82A053FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A05410:
	// stw r15,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r15.u32);
	// stw r15,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r15.u32);
	// stw r15,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r15.u32);
loc_82A0541C:
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82a05284
	if (!ctx.cr6.eq) goto loc_82A05284;
loc_82A05428:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a05440
	if (ctx.cr6.eq) goto loc_82A05440;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82367960
	ctx.lr = 0x82A05440;
	sub_82367960(ctx, base);
loc_82A05440:
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// stw r19,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r19.u32);
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// bne 0x82a04e30
	if (!ctx.cr0.eq) goto loc_82A04E30;
loc_82A05450:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6afc
	ctx.lr = 0x82A0545C;
	__restfpr_14(ctx, base);
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

