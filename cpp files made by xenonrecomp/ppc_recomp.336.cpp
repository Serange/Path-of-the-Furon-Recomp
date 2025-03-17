#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AF26F0"))) PPC_WEAK_FUNC(sub_82AF26F0);
PPC_FUNC_IMPL(__imp__sub_82AF26F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF26F4"))) PPC_WEAK_FUNC(sub_82AF26F4);
PPC_FUNC_IMPL(__imp__sub_82AF26F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF26F8"))) PPC_WEAK_FUNC(sub_82AF26F8);
PPC_FUNC_IMPL(__imp__sub_82AF26F8) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,456(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 456);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AF2744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82af27d8
	if (ctx.cr6.eq) goto loc_82AF27D8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,1840(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-31904
	ctx.r9.s64 = -2090860544;
	// lfs f29,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// lfs f31,-14012(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14012);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82af27a0
	if (!ctx.cr6.gt) goto loc_82AF27A0;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,1840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1840, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82af2788
	if (!ctx.cr6.lt) goto loc_82AF2788;
	// stfs f29,1840(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1840, temp.u32);
loc_82AF2788:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,1840(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF27A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF27A0:
	// lfs f0,1844(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82af27d8
	if (!ctx.cr6.gt) goto loc_82AF27D8;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,1844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1844, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82af27c0
	if (!ctx.cr6.lt) goto loc_82AF27C0;
	// stfs f29,1844(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1844, temp.u32);
loc_82AF27C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,1844(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF27D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF27D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF27FC"))) PPC_WEAK_FUNC(sub_82AF27FC);
PPC_FUNC_IMPL(__imp__sub_82AF27FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF2800"))) PPC_WEAK_FUNC(sub_82AF2800);
PPC_FUNC_IMPL(__imp__sub_82AF2800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82AF2808;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6ae4
	ctx.lr = 0x82AF2810;
	__savefpr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r6.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r7,472(r1)
	PPC_STORE_U64(ctx.r1.u32 + 472, ctx.r7.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r8,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.r8.u64);
	// lfs f1,480(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	ctx.f31.f64 = double(temp.f32);
	// std r9,488(r1)
	PPC_STORE_U64(ctx.r1.u32 + 488, ctx.r9.u64);
	// lfs f13,488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r8,904(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 904);
	// addi r7,r10,17480
	ctx.r7.s64 = ctx.r10.s64 + 17480;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lfs f29,15612(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 15612);
	ctx.f29.f64 = double(temp.f32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lfs f0,-15120(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lbz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stfs f29,160(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f11,660(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 660);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f1
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fadds f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r10,-18304
	ctx.r10.s64 = ctx.r10.s64 + -18304;
	// beq cr6,0x82af29b4
	if (ctx.cr6.eq) goto loc_82AF29B4;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f30,f7,f12
	ctx.f30.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f28,f6,f11
	ctx.f28.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f27,f5,f13
	ctx.f27.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
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
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// mfcr r5
	ctx.r5.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r5.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r5.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r5.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r5.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r5.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r5.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r5.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r5.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r5.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r5.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r5.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r5.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r5.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r5.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r5.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r5.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r5.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r5.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r5.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r5.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r5.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r5.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r5.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r5.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r5.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r5.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r5.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r5.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r5.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r5.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r5.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
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
	// rlwinm r28,r9,27,29,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// rlwinm r27,r5,27,29,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// mfcr r3
	ctx.r3.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r3.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r3.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r3.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r3.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r3.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r3.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r3.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r3.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r3.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r3.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r3.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r3.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r3.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r3.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r3.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r3.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r3.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r3.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r3.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r3.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r3.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r3.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r3.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r3.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r3.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r3.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r3.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r3.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r3.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r3.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r3.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// rlwinm r5,r5,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// mfcr r31
	ctx.r31.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r31.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r31.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r31.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r31.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r31.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r31.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r31.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r31.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r31.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r31.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r31.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r31.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r31.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r31.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r31.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r31.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r31.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r31.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r31.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r31.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r31.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r31.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r31.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r31.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r31.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r31.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r31.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r31.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r31.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r31.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r31.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r26,r4,27,29,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// rlwinm r22,r3,27,29,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// mfcr r30
	ctx.r30.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r30.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r30.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r30.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r30.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r30.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r30.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r30.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r30.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r30.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r30.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r30.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r30.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r30.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r30.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r30.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r30.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r30.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r30.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r30.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r30.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r30.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r30.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r30.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r30.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r30.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r30.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r30.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r30.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r30.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r30.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r30.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r4,r4,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r3,r3,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x4;
	// or r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 | ctx.r5.u64;
	// rlwinm r21,r31,27,29,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x4;
	// rlwinm r20,r30,27,29,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x4;
	// rlwinm r31,r31,30,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x4;
	// lfsx f4,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// fsel f2,f4,f12,f10
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f12.f64 : ctx.f10.f64;
	// rlwinm r30,r30,30,29,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x4;
	// lfsx f3,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f3.f64 = double(temp.f32);
	// or r3,r22,r3
	ctx.r3.u64 = ctx.r22.u64 | ctx.r3.u64;
	// fsel f3,f3,f11,f9
	ctx.f3.f64 = ctx.f3.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// or r31,r21,r31
	ctx.r31.u64 = ctx.r21.u64 | ctx.r31.u64;
	// or r30,r20,r30
	ctx.r30.u64 = ctx.r20.u64 | ctx.r30.u64;
	// lfsx f10,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f4,f10,f13,f8
	ctx.f4.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f8.f64;
	// lfsx f9,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f10,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f8,f9,f7,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f7.f64 : ctx.f12.f64;
	// lfsx f7,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f9,f10,f6,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f6.f64 : ctx.f11.f64;
	// fsel f10,f7,f5,f13
	ctx.f10.f64 = ctx.f7.f64 >= 0.0 ? ctx.f5.f64 : ctx.f13.f64;
	// b 0x82af29f8
	goto loc_82AF29F8;
loc_82AF29B4:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r6,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r6.u8);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lfs f8,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
loc_82AF29F8:
	// lfs f12,660(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 660);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// fsubs f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// lfs f11,472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x82af2afc
	if (ctx.cr6.eq) goto loc_82AF2AFC;
	// fsubs f7,f2,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// fsubs f6,f3,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fsubs f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fsubs f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f31,f9,f12
	ctx.f31.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f30,f10,f11
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
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
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
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
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// mfcr r6
	ctx.r6.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r6.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r6.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r6.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r6.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r6.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r6.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r6.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r6.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r6.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r6.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r6.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r6.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r6.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r6.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r6.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r6.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r6.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r6.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r6.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r6.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r6.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r6.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r6.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r6.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r6.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r6.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r6.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r6.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r6.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r6.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r6.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// rlwinm r31,r9,27,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// mfcr r5
	ctx.r5.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r5.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r5.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r5.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r5.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r5.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r5.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r5.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r5.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r5.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r5.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r5.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r5.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r5.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r5.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r5.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r5.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r5.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r5.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r5.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r5.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r5.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r5.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r5.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r5.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r5.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r5.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r5.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r5.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r5.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r5.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r5.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
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
	// rlwinm r27,r5,27,29,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// rlwinm r5,r5,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// mfcr r3
	ctx.r3.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r3.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r3.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r3.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r3.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r3.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r3.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r3.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r3.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r3.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r3.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r3.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r3.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r3.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r3.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r3.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r3.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r3.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r3.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r3.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r3.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r3.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r3.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r3.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r3.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r3.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r3.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r3.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r3.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r3.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r3.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r3.u64 |= ctx.cr7.so ? 0x1 : 0;
	// or r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 | ctx.r9.u64;
	// rlwinm r30,r8,27,29,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r28,r6,27,29,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r26,r4,27,29,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r22,r3,27,29,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// lfsx f0,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// fsel f6,f0,f13,f2
	ctx.f6.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f2.f64;
	// rlwinm r4,r4,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// rlwinm r3,r3,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x4;
	// or r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 | ctx.r5.u64;
	// or r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 | ctx.r8.u64;
	// or r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 | ctx.r6.u64;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// or r3,r22,r3
	ctx.r3.u64 = ctx.r22.u64 | ctx.r3.u64;
	// lfsx f2,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f7,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f13,f2,f8,f13
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f8.f64 : ctx.f13.f64;
	// lfsx f5,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsel f3,f7,f12,f3
	ctx.f3.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f3.f64;
	// lfsx f0,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f1,f5,f11,f4
	ctx.f1.f64 = ctx.f5.f64 >= 0.0 ? ctx.f11.f64 : ctx.f4.f64;
	// lfsx f8,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f0,f9,f12
	ctx.f7.f64 = ctx.f0.f64 >= 0.0 ? ctx.f9.f64 : ctx.f12.f64;
	// fsel f5,f8,f10,f11
	ctx.f5.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x82af2b28
	goto loc_82AF2B28;
loc_82AF2AFC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r6,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r6.u8);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
loc_82AF2B28:
	// lwz r9,1764(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1764);
	// lwz r10,1864(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1864);
	// rlwinm r8,r9,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82af2d18
	if (!ctx.cr6.eq) goto loc_82AF2D18;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82af2d18
	if (!ctx.cr6.gt) goto loc_82AF2D18;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f31,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,-17452(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17452);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x82af2c90
	if (!ctx.cr6.gt) goto loc_82AF2C90;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82AF2B60:
	// lwz r11,1860(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1860);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82af2c84
	if (ctx.cr6.eq) goto loc_82AF2C84;
	// bl 0x82313bc8
	ctx.lr = 0x82AF2B74;
	sub_82313BC8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af2b94
	if (ctx.cr6.eq) goto loc_82AF2B94;
loc_82AF2B80:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af2bd8
	if (ctx.cr6.eq) goto loc_82AF2BD8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af2b80
	if (!ctx.cr6.eq) goto loc_82AF2B80;
loc_82AF2B94:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af2bd8
	if (!ctx.cr6.eq) goto loc_82AF2BD8;
	// bl 0x82310f68
	ctx.lr = 0x82AF2BA8;
	sub_82310F68(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af2bc8
	if (ctx.cr6.eq) goto loc_82AF2BC8;
loc_82AF2BB4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af2bd8
	if (ctx.cr6.eq) goto loc_82AF2BD8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af2bb4
	if (!ctx.cr6.eq) goto loc_82AF2BB4;
loc_82AF2BC8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af2c84
	if (ctx.cr6.eq) goto loc_82AF2C84;
loc_82AF2BD8:
	// lwz r31,492(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82af2c84
	if (ctx.cr6.eq) goto loc_82AF2C84;
	// addi r4,r31,396
	ctx.r4.s64 = ctx.r31.s64 + 396;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82381228
	ctx.lr = 0x82AF2BF0;
	sub_82381228(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a22538
	ctx.lr = 0x82AF2BFC;
	sub_82A22538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af2c84
	if (ctx.cr6.eq) goto loc_82AF2C84;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF2C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af2c84
	if (!ctx.cr6.eq) goto loc_82AF2C84;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82af2c84
	if (!ctx.cr6.gt) goto loc_82AF2C84;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// stw r7,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r7.u32);
	// stw r6,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r6.u32);
loc_82AF2C84:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82af2b60
	if (!ctx.cr0.eq) goto loc_82AF2B60;
loc_82AF2C90:
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f29,232(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,480
	ctx.r7.s64 = ctx.r1.s64 + 480;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-31264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82772b30
	ctx.lr = 0x82AF2CC0;
	sub_82772B30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af2e38
	if (!ctx.cr6.eq) goto loc_82AF2E38;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82af2e38
	if (!ctx.cr6.gt) goto loc_82AF2E38;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// lwz r3,160(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// stw r7,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r7.u32);
	// stw r6,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r6.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6b30
	ctx.lr = 0x82AF2D14;
	__restfpr_27(ctx, base);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_82AF2D18:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r30,r11,29152
	ctx.r30.s64 = ctx.r11.s64 + 29152;
	// stfs f29,216(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r26,29152(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29152);
	// lwz r3,-31264(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31264);
	// li r8,8326
	ctx.r8.s64 = 8326;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// bl 0x827724b8
	ctx.lr = 0x82AF2D60;
	sub_827724B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82af2e1c
	if (ctx.cr6.eq) goto loc_82AF2E1C;
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,11336
	ctx.r28.s64 = ctx.r11.s64 + 11336;
	// lwz r10,-25736(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25736);
loc_82AF2D7C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af2dd8
	if (ctx.cr6.eq) goto loc_82AF2DD8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af2da4
	if (!ctx.cr6.eq) goto loc_82AF2DA4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829d2460
	ctx.lr = 0x82AF2D98;
	sub_829D2460(ctx, base);
	// stw r3,-25736(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25736, ctx.r3.u32);
	// bl 0x829d2510
	ctx.lr = 0x82AF2DA0;
	sub_829D2510(ctx, base);
	// lwz r10,-25736(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25736);
loc_82AF2DA4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af2dc8
	if (ctx.cr6.eq) goto loc_82AF2DC8;
loc_82AF2DB4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82af2dd8
	if (ctx.cr6.eq) goto loc_82AF2DD8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af2db4
	if (!ctx.cr6.eq) goto loc_82AF2DB4;
loc_82AF2DC8:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af2de8
	if (ctx.cr6.eq) goto loc_82AF2DE8;
loc_82AF2DD8:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82af2d7c
	if (!ctx.cr6.eq) goto loc_82AF2D7C;
	// b 0x82af2e1c
	goto loc_82AF2E1C;
loc_82AF2DE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r7,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r7.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r6.u32);
	// lwz r23,4(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82AF2E1C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af2e34
	if (ctx.cr6.eq) goto loc_82AF2E34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82367960
	ctx.lr = 0x82AF2E34;
	sub_82367960(ctx, base);
loc_82AF2E34:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82AF2E38:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6b30
	ctx.lr = 0x82AF2E48;
	__restfpr_27(ctx, base);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF2E4C"))) PPC_WEAK_FUNC(sub_82AF2E4C);
PPC_FUNC_IMPL(__imp__sub_82AF2E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF2E50"))) PPC_WEAK_FUNC(sub_82AF2E50);
PPC_FUNC_IMPL(__imp__sub_82AF2E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AF2E58;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ae4
	ctx.lr = 0x82AF2E60;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r28,r11,-32444
	ctx.r28.s64 = ctx.r11.s64 + -32444;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f12,1324(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1324);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f29,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f29.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,-544(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -544);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fmadds f31,f12,f29,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f0.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-18200(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18200);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmsubs f30,f12,f13,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lwz r11,1440(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1440);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fadds f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f7,f11,f30
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AF2EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af2f14
	if (ctx.cr6.eq) goto loc_82AF2F14;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-17468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82af2f14
	if (!ctx.cr6.gt) goto loc_82AF2F14;
	// lfs f31,-1004(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -1004);
	ctx.f31.f64 = double(temp.f32);
loc_82AF2F14:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f12,1324(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1324);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,260(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,-14276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f11,f12,f29,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 - ctx.f13.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x8258c360
	ctx.lr = 0x82AF2F74;
	sub_8258C360(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f10,248(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// addi r28,r29,244
	ctx.r28.s64 = ctx.r29.s64 + 244;
	// lfs f9,252(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f8,244(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f27,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f27.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f29,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f28,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f7,f10,f28
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f28.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fsubs f6,f9,f27
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f27.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// fsubs f5,f8,f29
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f29.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// fadds f2,f4,f30
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,1440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1440);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AF303C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af305c
	if (!ctx.cr6.eq) goto loc_82AF305C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_82AF305C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f8,f12,f28
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fadds f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// fadds f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r31,1440(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1440);
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82AF3110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af3128
	if (!ctx.cr6.eq) goto loc_82AF3128;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82af3134
	goto loc_82AF3134;
loc_82AF3128:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82AF3134:
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b30
	ctx.lr = 0x82AF314C;
	__restfpr_27(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF3150"))) PPC_WEAK_FUNC(sub_82AF3150);
PPC_FUNC_IMPL(__imp__sub_82AF3150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82AF3158;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ab0
	ctx.lr = 0x82AF3160;
	__savefpr_14(ctx, base);
	// addi r12,r1,-224
	ctx.r12.s64 = ctx.r1.s64 + -224;
	// bl 0x82ff17b4
	ctx.lr = 0x82AF3168;
	__savevmx_124(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lfs f0,-1448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1448);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82af3190
	if (!ctx.cr6.gt) goto loc_82AF3190;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82AF3190:
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af324c
	if (ctx.cr6.eq) goto loc_82AF324C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// lwz r9,456(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF31BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af31d4
	if (ctx.cr6.eq) goto loc_82AF31D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF31D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF31D4:
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF31EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r7,480(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// rlwinm r6,r7,0,2,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r6,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r6.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af324c
	if (ctx.cr6.eq) goto loc_82AF324C;
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r9.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lwz r8,480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r7,r8,16384
	ctx.r7.u64 = ctx.r8.u64 | 1073741824;
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lwz r6,368(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af324c
	if (ctx.cr6.eq) goto loc_82AF324C;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
loc_82AF324C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,32088
	ctx.r11.s64 = ctx.r11.s64 + 32088;
	// lfs f27,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f27.f64 = double(temp.f32);
	// lfs f23,1004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	ctx.f23.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// stfs f23,128(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bge cr6,0x82af3278
	if (!ctx.cr6.lt) goto loc_82AF3278;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82af3284
	goto loc_82AF3284;
loc_82AF3278:
	// fcmpu cr6,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// blt cr6,0x82af3284
	if (ctx.cr6.lt) goto loc_82AF3284;
	// fmr f0,f23
	ctx.f0.f64 = ctx.f23.f64;
loc_82AF3284:
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r9,1008(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lfs f13,1164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f25,f13,f0
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f24,32428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32428);
	ctx.f24.f64 = double(temp.f32);
	// beq cr6,0x82af33b8
	if (ctx.cr6.eq) goto loc_82AF33B8;
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af33b8
	if (ctx.cr6.eq) goto loc_82AF33B8;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// ble cr6,0x82af33b8
	if (!ctx.cr6.gt) goto loc_82AF33B8;
	// lwz r9,1736(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// lfs f0,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lfs f12,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,1744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f29,f8,f0
	ctx.f29.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f28,f11,f12
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f28,96(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fsubs f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// fabs f9,f28
	ctx.f9.u64 = ctx.f28.u64 & ~0x8000000000000000;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// fcmpu cr6,f9,f24
	ctx.cr6.compare(ctx.f9.f64, ctx.f24.f64);
	// bge cr6,0x82af333c
	if (!ctx.cr6.lt) goto loc_82AF333C;
	// fabs f0,f30
	ctx.f0.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x82af333c
	if (!ctx.cr6.lt) goto loc_82AF333C;
	// fabs f0,f29
	ctx.f0.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// blt cr6,0x82af3398
	if (ctx.cr6.lt) goto loc_82AF3398;
loc_82AF333C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d27f0
	ctx.lr = 0x82AF3348;
	sub_823D27F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r24,r31,256
	ctx.r24.s64 = ctx.r31.s64 + 256;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// bl 0x823d3da0
	ctx.lr = 0x82AF3374;
	sub_823D3DA0(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f30,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmadds f9,f11,f28,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f27
	ctx.cr6.compare(ctx.f9.f64, ctx.f27.f64);
	// bge cr6,0x82af33f8
	if (!ctx.cr6.lt) goto loc_82AF33F8;
	// b 0x82af33d4
	goto loc_82AF33D4;
loc_82AF3398:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r24,r31,256
	ctx.r24.s64 = ctx.r31.s64 + 256;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// b 0x82af33f8
	goto loc_82AF33F8;
loc_82AF33B8:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r24,r31,256
	ctx.r24.s64 = ctx.r31.s64 + 256;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
loc_82AF33D4:
	// stfs f27,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
loc_82AF33F8:
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r25,r31,268
	ctx.r25.s64 = ctx.r31.s64 + 268;
	// lfs f26,-18108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18108);
	ctx.f26.f64 = double(temp.f32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fsubs f7,f25,f8
	ctx.f7.f64 = double(float(ctx.f25.f64 - ctx.f8.f64));
	// fmadds f30,f7,f31,f8
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f8.f64));
	// bl 0x82382590
	ctx.lr = 0x82AF3440;
	sub_82382590(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f30,f31
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f2,f30
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f30
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// lfs f8,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f4
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f5,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f5.f64 = double(temp.f32);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f30,f8,f31
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f29,f7,f31
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f28,f5,f31
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fcmpu cr6,f6,f9
	ctx.cr6.compare(ctx.f6.f64, ctx.f9.f64);
	// ble cr6,0x82af34d4
	if (!ctx.cr6.gt) goto loc_82AF34D4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
loc_82AF34D4:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r30,380(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfs f25,-28844(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f25.f64 = double(temp.f32);
	// stw r9,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r9.u32);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f12,f31,f25
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f25.f64));
	// bl 0x82cb2298
	ctx.lr = 0x82AF3508;
	sub_82CB2298(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// extsw r7,r30
	ctx.r7.s64 = ctx.r30.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmadds f1,f7,f31,f25
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f25.f64));
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82cb2298
	ctx.lr = 0x82AF3534;
	sub_82CB2298(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82af3578
	if (ctx.cr6.eq) goto loc_82AF3578;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82af3564
	if (!ctx.cr6.eq) goto loc_82AF3564;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82af3570
	goto loc_82AF3570;
loc_82AF3564:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82790550
	ctx.lr = 0x82AF3570;
	sub_82790550(ctx, base);
loc_82AF3570:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
loc_82AF3578:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x82af358c
	if (!ctx.cr6.lt) goto loc_82AF358C;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
loc_82AF358C:
	// cmpwi cr6,r11,500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 500, ctx.xer);
	// ble cr6,0x82af3618
	if (!ctx.cr6.gt) goto loc_82AF3618;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF35B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lfs f9,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f7,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x823d27f0
	ctx.lr = 0x82AF35EC;
	sub_823D27F0(ctx, base);
	// lfs f5,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f4.f64 = double(temp.f32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f2,1832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// fmadds f0,f3,f25,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f25.f64 + ctx.f2.f64));
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fadds f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
loc_82AF3618:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82af3644
	if (ctx.cr6.eq) goto loc_82AF3644;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82af3634
	if (!ctx.cr6.eq) goto loc_82AF3634;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82af3640
	goto loc_82AF3640;
loc_82AF3634:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82790550
	ctx.lr = 0x82AF363C;
	sub_82790550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82AF3640:
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
loc_82AF3644:
	// clrlwi r29,r27,24
	ctx.r29.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82af369c
	if (!ctx.cr6.eq) goto loc_82AF369C;
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af369c
	if (!ctx.cr6.eq) goto loc_82AF369C;
	// fmuls f0,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// fmadds f13,f29,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f12,f30,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f24
	ctx.cr6.compare(ctx.f12.f64, ctx.f24.f64);
	// bgt cr6,0x82af369c
	if (ctx.cr6.gt) goto loc_82AF369C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82af369c
	if (!ctx.cr6.eq) goto loc_82AF369C;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82af369c
	if (!ctx.cr6.eq) goto loc_82AF369C;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82af3988
	if (ctx.cr6.eq) goto loc_82AF3988;
loc_82AF369C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f12,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// fadds f9,f12,f28
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// stfs f11,248(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f9,240(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// lwz r10,1520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	// stfs f10,244(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF36E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af3938
	if (ctx.cr6.eq) goto loc_82AF3938;
	// lwz r29,308(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82af3988
	if (!ctx.cr6.gt) goto loc_82AF3988;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x823d7588
	ctx.lr = 0x82AF3704;
	sub_823D7588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AF3714:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82af3714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF3714;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82af3988
	if (!ctx.cr6.gt) goto loc_82AF3988;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r26,-31883
	ctx.r26.s64 = -2089484288;
	// lvx128 v126,r0,r10
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r27,-1
	ctx.r27.s64 = -1;
	// lvx128 v125,r0,r9
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v124,r0,r8
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF3760:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82af3920
	if (ctx.cr6.eq) goto loc_82AF3920;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af3920
	if (!ctx.cr6.eq) goto loc_82AF3920;
	// stfs f23,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// stfs f27,272(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stw r23,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r23.u32);
	// stfs f27,264(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stw r23,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r23.u32);
	// stfs f27,268(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stw r23,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r23.u32);
	// stfs f27,280(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stw r23,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r23.u32);
	// stfs f27,276(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
	// stfs f27,284(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stw r23,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r23.u32);
	// stw r23,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r23.u32);
	// stw r23,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r23.u32);
	// stw r23,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r23.u32);
	// stw r27,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r27.u32);
	// stw r23,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r23.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af3920
	if (ctx.cr6.eq) goto loc_82AF3920;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af3920
	if (!ctx.cr6.eq) goto loc_82AF3920;
	// addi r5,r30,316
	ctx.r5.s64 = ctx.r30.s64 + 316;
	// addi r4,r30,328
	ctx.r4.s64 = ctx.r30.s64 + 328;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x823d7588
	ctx.lr = 0x82AF37F8;
	sub_823D7588(ctx, base);
	// vmrghw128 v63,v124,v126
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// vmrghw128 v62,v125,v127
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// vmrglw128 v61,v124,v126
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// vmrglw128 v60,v125,v127
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// vmrglw128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// vmrghw128 v57,v61,v60
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// vmrglw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
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
	ctx.lr = 0x82AF38D4;
	sub_823D40C0(ctx, base);
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f11,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f10,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-31264(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// bl 0x82770290
	ctx.lr = 0x82AF3920;
	sub_82770290(ctx, base);
loc_82AF3920:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82af3760
	if (ctx.cr6.lt) goto loc_82AF3760;
	// b 0x82af3988
	goto loc_82AF3988;
loc_82AF3938:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82af3964
	if (ctx.cr6.eq) goto loc_82AF3964;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r9,956(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 956);
	// lwz r4,304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF3964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF3964:
	// stfs f27,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f27,120(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f27,116(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
loc_82AF3988:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lfs f12,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addi r6,r11,16384
	ctx.r6.s64 = ctx.r11.s64 + 16384;
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// lfs f13,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r10,16384
	ctx.r4.s64 = ctx.r10.s64 + 16384;
	// lfs f9,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f9.f64 = double(temp.f32);
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// lfs f7,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r9,16384
	ctx.r11.s64 = ctx.r9.s64 + 16384;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stfs f27,156(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// stfs f27,172(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// stfs f27,188(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r4,r8,-22168
	ctx.r4.s64 = ctx.r8.s64 + -22168;
	// lfs f8,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r11,r7,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// fmuls f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// rlwinm r8,r3,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFC;
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// rlwinm r7,r10,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lfs f5,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r6,r6,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// lfs f4,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// fmuls f19,f4,f11
	ctx.f19.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfsx f2,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r3,r9,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// lfsx f0,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfsx f7,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f30,f7,f12
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfsx f29,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f29.f64 = double(temp.f32);
	// lfsx f1,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f28,f7,f2
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f21,f10,f1
	ctx.f21.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f23,f11,f1
	ctx.f23.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f22,f7,f1
	ctx.f22.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f20,f1,f12
	ctx.f20.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f27,f0,f29
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f1,f10,f29
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f24,f29,f2
	ctx.f24.f64 = double(float(ctx.f29.f64 * ctx.f2.f64));
	// fmadds f1,f30,f29,f9
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f29.f64 + ctx.f9.f64));
	// fmadds f18,f9,f29,f30
	ctx.f18.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f30.f64));
	// fmuls f14,f3,f30
	ctx.f14.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmuls f15,f23,f2
	ctx.f15.f64 = double(float(ctx.f23.f64 * ctx.f2.f64));
	// fnmsubs f5,f13,f22,f5
	ctx.f5.f64 = double(float(-(ctx.f13.f64 * ctx.f22.f64 - ctx.f5.f64)));
	// fmuls f10,f22,f10
	ctx.f10.f64 = double(float(ctx.f22.f64 * ctx.f10.f64));
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fnmsubs f17,f27,f12,f28
	ctx.f17.f64 = double(float(-(ctx.f27.f64 * ctx.f12.f64 - ctx.f28.f64)));
	// fmuls f10,f21,f0
	ctx.f10.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmsubs f16,f24,f7,f31
	ctx.f16.f64 = double(float(ctx.f24.f64 * ctx.f7.f64 - ctx.f31.f64));
	// fmuls f10,f20,f6
	ctx.f10.f64 = double(float(ctx.f20.f64 * ctx.f6.f64));
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f10,f18,f11
	ctx.f10.f64 = double(float(ctx.f18.f64 * ctx.f11.f64));
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f8,f8,f21
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f21.f64));
	// fneg f10,f15
	ctx.f10.u64 = ctx.f15.u64 ^ 0x8000000000000000;
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f6,f17,f6
	ctx.f6.f64 = double(float(ctx.f17.f64 * ctx.f6.f64));
	// stfs f6,180(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmadds f6,f14,f29,f5
	ctx.f6.f64 = double(float(ctx.f14.f64 * ctx.f29.f64 + ctx.f5.f64));
	// fmuls f11,f16,f11
	ctx.f11.f64 = double(float(ctx.f16.f64 * ctx.f11.f64));
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fneg f5,f1
	ctx.f5.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f11,f28,f3
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f3.f64));
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f24,f19
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f19.f64));
	// lfs f28,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f4,f23
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f23.f64));
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f27,f3,f27
	ctx.f27.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmuls f24,f19,f9
	ctx.f24.f64 = double(float(ctx.f19.f64 * ctx.f9.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fmadds f0,f8,f0,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fnmsubs f11,f5,f7,f6
	ctx.f11.f64 = double(float(-(ctx.f5.f64 * ctx.f7.f64 - ctx.f6.f64)));
	// fmadds f8,f3,f20,f13
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f20.f64 + ctx.f13.f64));
	// fmadds f7,f19,f30,f0
	ctx.f7.f64 = double(float(ctx.f19.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f6,f31,f19,f11
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f19.f64 + ctx.f11.f64));
	// fnmsubs f5,f4,f2,f8
	ctx.f5.f64 = double(float(-(ctx.f4.f64 * ctx.f2.f64 - ctx.f8.f64)));
	// fnmsubs f4,f27,f12,f7
	ctx.f4.f64 = double(float(-(ctx.f27.f64 * ctx.f12.f64 - ctx.f7.f64)));
	// fmadds f3,f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,192(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f2,f28,f5
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f5.f64));
	// stfs f2,200(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmadds f0,f24,f29,f4
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f29.f64 + ctx.f4.f64));
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x82485a40
	ctx.lr = 0x82AF3B38;
	sub_82485A40(ctx, base);
	// lfs f12,1256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f10,f25
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// stfs f9,1256(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// lfs f8,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f2,f8,f3,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f0,f1,f7,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f2.f64));
	// stfs f0,1260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// addi r12,r1,-224
	ctx.r12.s64 = ctx.r1.s64 + -224;
	// bl 0x82ff1a4c
	ctx.lr = 0x82AF3B80;
	__restvmx_124(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6afc
	ctx.lr = 0x82AF3B88;
	__restfpr_14(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF3B8C"))) PPC_WEAK_FUNC(sub_82AF3B8C);
PPC_FUNC_IMPL(__imp__sub_82AF3B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF3B90"))) PPC_WEAK_FUNC(sub_82AF3B90);
PPC_FUNC_IMPL(__imp__sub_82AF3B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82AF3B98;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6ab0
	ctx.lr = 0x82AF3BA0;
	__savefpr_14(ctx, base);
	// addi r12,r1,-240
	ctx.r12.s64 = ctx.r1.s64 + -240;
	// bl 0x82ff17b4
	ctx.lr = 0x82AF3BA8;
	__savevmx_124(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// lfs f0,-1448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1448);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82af3bd0
	if (!ctx.cr6.gt) goto loc_82AF3BD0;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82AF3BD0:
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af3c8c
	if (ctx.cr6.eq) goto loc_82AF3C8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// lwz r9,456(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF3BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af3c14
	if (ctx.cr6.eq) goto loc_82AF3C14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF3C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF3C14:
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF3C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r7,480(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// rlwinm r6,r7,0,2,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r6,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r6.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af3c8c
	if (ctx.cr6.eq) goto loc_82AF3C8C;
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r9.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lwz r8,480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r7,r8,16384
	ctx.r7.u64 = ctx.r8.u64 | 1073741824;
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lwz r6,368(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af3c8c
	if (ctx.cr6.eq) goto loc_82AF3C8C;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
loc_82AF3C8C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,32088
	ctx.r11.s64 = ctx.r11.s64 + 32088;
	// lfs f27,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f27.f64 = double(temp.f32);
	// lfs f23,1004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	ctx.f23.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// stfs f23,112(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bge cr6,0x82af3cb8
	if (!ctx.cr6.lt) goto loc_82AF3CB8;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82af3cc4
	goto loc_82AF3CC4;
loc_82AF3CB8:
	// fcmpu cr6,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// blt cr6,0x82af3cc4
	if (ctx.cr6.lt) goto loc_82AF3CC4;
	// fmr f0,f23
	ctx.f0.f64 = ctx.f23.f64;
loc_82AF3CC4:
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r9,1008(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lfs f13,1164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f25,f13,f0
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f24,32428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32428);
	ctx.f24.f64 = double(temp.f32);
	// beq cr6,0x82af3de0
	if (ctx.cr6.eq) goto loc_82AF3DE0;
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af3de0
	if (ctx.cr6.eq) goto loc_82AF3DE0;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// ble cr6,0x82af3de0
	if (!ctx.cr6.gt) goto loc_82AF3DE0;
	// lwz r9,1736(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// lfs f0,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lfs f12,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,1744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f29,f8,f0
	ctx.f29.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f28,f11,f12
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f28,96(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fsubs f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// fabs f9,f28
	ctx.f9.u64 = ctx.f28.u64 & ~0x8000000000000000;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// fcmpu cr6,f9,f24
	ctx.cr6.compare(ctx.f9.f64, ctx.f24.f64);
	// bge cr6,0x82af3d7c
	if (!ctx.cr6.lt) goto loc_82AF3D7C;
	// fabs f0,f30
	ctx.f0.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x82af3d7c
	if (!ctx.cr6.lt) goto loc_82AF3D7C;
	// fabs f0,f29
	ctx.f0.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// blt cr6,0x82af3dcc
	if (ctx.cr6.lt) goto loc_82AF3DCC;
loc_82AF3D7C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d27f0
	ctx.lr = 0x82AF3D88;
	sub_823D27F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823d3da0
	ctx.lr = 0x82AF3DA8;
	sub_823D3DA0(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f30,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmadds f9,f28,f11,f10
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f27
	ctx.cr6.compare(ctx.f9.f64, ctx.f27.f64);
	// bge cr6,0x82af3e14
	if (!ctx.cr6.lt) goto loc_82AF3E14;
	// b 0x82af3df0
	goto loc_82AF3DF0;
loc_82AF3DCC:
	// lwz r25,256(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// lwz r26,260(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r24,264(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// b 0x82af3e14
	goto loc_82AF3E14;
loc_82AF3DE0:
	// lwz r25,256(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// lwz r26,260(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r24,264(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
loc_82AF3DF0:
	// stfs f27,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f27,80(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_82AF3E14:
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r22,r31,268
	ctx.r22.s64 = ctx.r31.s64 + 268;
	// lfs f26,-18108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18108);
	ctx.f26.f64 = double(temp.f32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fsubs f7,f25,f8
	ctx.f7.f64 = double(float(ctx.f25.f64 - ctx.f8.f64));
	// fmadds f30,f7,f31,f8
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f8.f64));
	// bl 0x82382590
	ctx.lr = 0x82AF3E5C;
	sub_82382590(ctx, base);
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f30,f31
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fmuls f12,f2,f30
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f30
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// lfs f8,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f4
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f5,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f5.f64 = double(temp.f32);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f30,f8,f31
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f29,f7,f31
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f28,f5,f31
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fcmpu cr6,f6,f9
	ctx.cr6.compare(ctx.f6.f64, ctx.f9.f64);
	// ble cr6,0x82af3ef0
	if (!ctx.cr6.gt) goto loc_82AF3EF0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
loc_82AF3EF0:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r30,380(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfs f25,-28844(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f25.f64 = double(temp.f32);
	// stw r9,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f12,f31,f25
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f25.f64));
	// bl 0x82cb2298
	ctx.lr = 0x82AF3F24;
	sub_82CB2298(ctx, base);
	// extsw r7,r30
	ctx.r7.s64 = ctx.r30.s32;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fctiwz f8,f11
	ctx.f8.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmadds f1,f7,f31,f25
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f25.f64));
	// bl 0x82cb2298
	ctx.lr = 0x82AF3F50;
	sub_82CB2298(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f5.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x82af3f8c
	if (ctx.cr6.eq) goto loc_82AF3F8C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82af3f7c
	if (!ctx.cr6.eq) goto loc_82AF3F7C;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82af3f88
	goto loc_82AF3F88;
loc_82AF3F7C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82790550
	ctx.lr = 0x82AF3F88;
	sub_82790550(ctx, base);
loc_82AF3F88:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82AF3F8C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82af3fb8
	if (ctx.cr6.eq) goto loc_82AF3FB8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82af3fa8
	if (!ctx.cr6.eq) goto loc_82AF3FA8;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82af3fb4
	goto loc_82AF3FB4;
loc_82AF3FA8:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82790550
	ctx.lr = 0x82AF3FB4;
	sub_82790550(ctx, base);
loc_82AF3FB4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82AF3FB8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af400c
	if (!ctx.cr6.eq) goto loc_82AF400C;
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af400c
	if (!ctx.cr6.eq) goto loc_82AF400C;
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f13,f28,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fmadds f12,f29,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f24
	ctx.cr6.compare(ctx.f12.f64, ctx.f24.f64);
	// bgt cr6,0x82af400c
	if (ctx.cr6.gt) goto loc_82AF400C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82af400c
	if (!ctx.cr6.eq) goto loc_82AF400C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82af400c
	if (!ctx.cr6.eq) goto loc_82AF400C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82af42b8
	if (ctx.cr6.eq) goto loc_82AF42B8;
loc_82AF400C:
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lis r23,-31883
	ctx.r23.s64 = -2089484288;
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// lfs f11,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f29,f13
	ctx.f10.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// fadds f9,f30,f11
	ctx.f9.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// stfs f12,244(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f10,248(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// stfs f9,252(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stw r24,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r24.u32);
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-31264(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -31264);
	// lwz r9,956(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 956);
	// lwz r4,304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF4064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// oris r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 131072;
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// lwz r28,308(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82af42b8
	if (!ctx.cr6.gt) goto loc_82AF42B8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x823d7588
	ctx.lr = 0x82AF408C;
	sub_823D7588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AF409C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82af409c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF409C;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82af42b8
	if (!ctx.cr6.gt) goto loc_82AF42B8;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r26,-1
	ctx.r26.s64 = -1;
	// lvx128 v126,r0,r10
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v125,r0,r9
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v124,r0,r8
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF40E4:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82af42a4
	if (ctx.cr6.eq) goto loc_82AF42A4;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af42a4
	if (!ctx.cr6.eq) goto loc_82AF42A4;
	// stfs f27,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stfs f27,208(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r21,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r21.u32);
	// stfs f27,200(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r21,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r21.u32);
	// stfs f27,216(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r21,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r21.u32);
	// stfs f23,224(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r21,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r21.u32);
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r21.u32);
	// stfs f27,212(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f27,220(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r21,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r21.u32);
	// stw r21,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r21.u32);
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r21,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r21.u32);
	// stw r21,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r21.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af42a4
	if (ctx.cr6.eq) goto loc_82AF42A4;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af42a4
	if (!ctx.cr6.eq) goto loc_82AF42A4;
	// addi r5,r30,316
	ctx.r5.s64 = ctx.r30.s64 + 316;
	// addi r4,r30,328
	ctx.r4.s64 = ctx.r30.s64 + 328;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x823d7588
	ctx.lr = 0x82AF417C;
	sub_823D7588(ctx, base);
	// vmrghw128 v63,v124,v126
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// vmrghw128 v62,v125,v127
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// vmrglw128 v61,v124,v126
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// vmrglw128 v60,v125,v127
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vmrglw128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vmrghw128 v57,v61,v60
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// vmrglw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
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
	ctx.lr = 0x82AF4258;
	sub_823D40C0(ctx, base);
	// lfs f0,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lfs f12,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f11,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f10,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-31264(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -31264);
	// bl 0x82770290
	ctx.lr = 0x82AF42A4;
	sub_82770290(ctx, base);
loc_82AF42A4:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82af40e4
	if (ctx.cr6.lt) goto loc_82AF40E4;
loc_82AF42B8:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f12,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addi r6,r11,16384
	ctx.r6.s64 = ctx.r11.s64 + 16384;
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// lfs f13,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r10,16384
	ctx.r4.s64 = ctx.r10.s64 + 16384;
	// lfs f9,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f9.f64 = double(temp.f32);
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// lfs f7,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r9,16384
	ctx.r11.s64 = ctx.r9.s64 + 16384;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stfs f27,140(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// stfs f27,156(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// stfs f27,172(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r8,-22168
	ctx.r4.s64 = ctx.r8.s64 + -22168;
	// lfs f8,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r11,r7,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// fmuls f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// rlwinm r8,r3,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFC;
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// rlwinm r7,r10,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lfs f5,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r6,r6,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// lfs f4,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// fmuls f19,f4,f11
	ctx.f19.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfsx f2,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r3,r9,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// lfsx f0,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfsx f7,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f30,f7,f12
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfsx f29,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f29.f64 = double(temp.f32);
	// lfsx f1,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f28,f7,f2
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f21,f10,f1
	ctx.f21.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f23,f11,f1
	ctx.f23.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f22,f7,f1
	ctx.f22.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f20,f1,f12
	ctx.f20.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f27,f0,f29
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f1,f10,f29
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f24,f29,f2
	ctx.f24.f64 = double(float(ctx.f29.f64 * ctx.f2.f64));
	// fmadds f1,f30,f29,f9
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f29.f64 + ctx.f9.f64));
	// fmadds f18,f9,f29,f30
	ctx.f18.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f30.f64));
	// fmuls f14,f3,f30
	ctx.f14.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmuls f15,f23,f2
	ctx.f15.f64 = double(float(ctx.f23.f64 * ctx.f2.f64));
	// fnmsubs f5,f13,f22,f5
	ctx.f5.f64 = double(float(-(ctx.f13.f64 * ctx.f22.f64 - ctx.f5.f64)));
	// fmuls f10,f22,f10
	ctx.f10.f64 = double(float(ctx.f22.f64 * ctx.f10.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fnmsubs f17,f27,f12,f28
	ctx.f17.f64 = double(float(-(ctx.f27.f64 * ctx.f12.f64 - ctx.f28.f64)));
	// fmuls f10,f21,f0
	ctx.f10.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmsubs f16,f24,f7,f31
	ctx.f16.f64 = double(float(ctx.f24.f64 * ctx.f7.f64 - ctx.f31.f64));
	// fmuls f10,f20,f6
	ctx.f10.f64 = double(float(ctx.f20.f64 * ctx.f6.f64));
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f10,f18,f11
	ctx.f10.f64 = double(float(ctx.f18.f64 * ctx.f11.f64));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f8,f8,f21
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f21.f64));
	// fneg f10,f15
	ctx.f10.u64 = ctx.f15.u64 ^ 0x8000000000000000;
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f6,f17,f6
	ctx.f6.f64 = double(float(ctx.f17.f64 * ctx.f6.f64));
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f6,f14,f29,f5
	ctx.f6.f64 = double(float(ctx.f14.f64 * ctx.f29.f64 + ctx.f5.f64));
	// fmuls f11,f16,f11
	ctx.f11.f64 = double(float(ctx.f16.f64 * ctx.f11.f64));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fneg f5,f1
	ctx.f5.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f11,f28,f3
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f3.f64));
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f24,f19
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f19.f64));
	// lfs f28,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f4,f23
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f23.f64));
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmuls f27,f3,f27
	ctx.f27.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f24,f19,f9
	ctx.f24.f64 = double(float(ctx.f19.f64 * ctx.f9.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fmadds f0,f8,f0,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fnmsubs f11,f5,f7,f6
	ctx.f11.f64 = double(float(-(ctx.f5.f64 * ctx.f7.f64 - ctx.f6.f64)));
	// fmadds f8,f3,f20,f13
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f20.f64 + ctx.f13.f64));
	// fmadds f7,f19,f30,f0
	ctx.f7.f64 = double(float(ctx.f19.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f6,f31,f19,f11
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f19.f64 + ctx.f11.f64));
	// fnmsubs f5,f4,f2,f8
	ctx.f5.f64 = double(float(-(ctx.f4.f64 * ctx.f2.f64 - ctx.f8.f64)));
	// fnmsubs f4,f27,f12,f7
	ctx.f4.f64 = double(float(-(ctx.f27.f64 * ctx.f12.f64 - ctx.f7.f64)));
	// fmadds f3,f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,176(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f2,f28,f5
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f5.f64));
	// stfs f2,184(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmadds f0,f24,f29,f4
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f29.f64 + ctx.f4.f64));
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x82485a40
	ctx.lr = 0x82AF4468;
	sub_82485A40(ctx, base);
	// lfs f12,1256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f10,f25
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// stfs f9,1256(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// lfs f2,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmadds f1,f2,f6,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f0,f5,f8,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfs f0,1260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-240
	ctx.r12.s64 = ctx.r1.s64 + -240;
	// bl 0x82ff1a4c
	ctx.lr = 0x82AF44B0;
	__restvmx_124(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6afc
	ctx.lr = 0x82AF44B8;
	__restfpr_14(ctx, base);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF44BC"))) PPC_WEAK_FUNC(sub_82AF44BC);
PPC_FUNC_IMPL(__imp__sub_82AF44BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF44C0"))) PPC_WEAK_FUNC(sub_82AF44C0);
PPC_FUNC_IMPL(__imp__sub_82AF44C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF44C4"))) PPC_WEAK_FUNC(sub_82AF44C4);
PPC_FUNC_IMPL(__imp__sub_82AF44C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF44C8"))) PPC_WEAK_FUNC(sub_82AF44C8);
PPC_FUNC_IMPL(__imp__sub_82AF44C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AF44D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,1448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF4508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rldicr r7,r4,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f0,-32444(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// rldicr r5,r3,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,1848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1848, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d7c10
	ctx.lr = 0x82AF453C;
	sub_826D7C10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF4544"))) PPC_WEAK_FUNC(sub_82AF4544);
PPC_FUNC_IMPL(__imp__sub_82AF4544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF4548"))) PPC_WEAK_FUNC(sub_82AF4548);
PPC_FUNC_IMPL(__imp__sub_82AF4548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82AF4550;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ae4
	ctx.lr = 0x82AF4558;
	__savefpr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,-16612(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16612);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f30,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f30.f64 = double(temp.f32);
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f11,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-26236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26236);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f11,f30
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmuls f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f29,128(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f28,f13,f31
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f28,132(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f27,f12,f31
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f27,136(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x823d27f0
	ctx.lr = 0x82AF45D0;
	sub_823D27F0(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f0,-29008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29008);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f31,f0,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f30.f64));
	// bl 0x82cb2298
	ctx.lr = 0x82AF45E0;
	sub_82CB2298(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f7.u64);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82af4604
	if (!ctx.cr6.eq) goto loc_82AF4604;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82af460c
	goto loc_82AF460C;
loc_82AF4604:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82790550
	ctx.lr = 0x82AF460C;
	sub_82790550(ctx, base);
loc_82AF460C:
	// stw r3,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r3.u32);
	// lfs f13,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f0,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f0,f29
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f9,244(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// fadds f11,f27,f12
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f12.f64));
	// stfs f11,252(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// fadds f10,f28,f13
	ctx.f10.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// stfs f10,248(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-31264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31264);
	// lwz r10,956(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 956);
	// lwz r4,304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF4674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f8,1852(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// lfs f6,1856(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,1852(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// ble cr6,0x82af4740
	if (!ctx.cr6.gt) goto loc_82AF4740;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af46a4
	if (ctx.cr6.eq) goto loc_82AF46A4;
	// lwz r29,504(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// b 0x82af46a8
	goto loc_82AF46A8;
loc_82AF46A4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82AF46A8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x823149d8
	ctx.lr = 0x82AF46EC;
	sub_823149D8(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// li r5,24
	ctx.r5.s64 = 24;
	// rldicr r27,r10,32,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r26,r9,32,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82cb1160
	ctx.lr = 0x82AF4710;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x829e5728
	ctx.lr = 0x82AF4738;
	sub_829E5728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e5838
	ctx.lr = 0x82AF4740;
	sub_829E5838(ctx, base);
loc_82AF4740:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b30
	ctx.lr = 0x82AF474C;
	__restfpr_27(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF4750"))) PPC_WEAK_FUNC(sub_82AF4750);
PPC_FUNC_IMPL(__imp__sub_82AF4750) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82af4784
	if (ctx.cr6.gt) goto loc_82AF4784;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82af478c
	goto loc_82AF478C;
loc_82AF4784:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AF478C:
	// lwz r8,980(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1836);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82af47a8
	if (ctx.cr6.gt) goto loc_82AF47A8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82AF47A8:
	// lwz r7,524(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// stb r10,1836(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1836, ctx.r10.u8);
	// rlwinm r5,r7,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82af47f4
	if (!ctx.cr6.eq) goto loc_82AF47F4;
	// lwz r10,1900(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// rlwinm r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82af47f4
	if (!ctx.cr6.eq) goto loc_82AF47F4;
	// lwz r10,1764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// rlwinm r7,r10,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82af47f4
	if (!ctx.cr6.eq) goto loc_82AF47F4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82af47f8
	if (ctx.cr6.eq) goto loc_82AF47F8;
	// lwz r10,776(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 776);
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82af47f8
	if (!ctx.cr6.eq) goto loc_82AF47F8;
loc_82AF47F4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82AF47F8:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82af4850
	if (ctx.cr6.eq) goto loc_82AF4850;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82af4844
	if (ctx.cr6.eq) goto loc_82AF4844;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,1448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF4828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,1836(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1836, ctx.r9.u8);
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
loc_82AF4844:
	// bl 0x82af5500
	ctx.lr = 0x82AF4848;
	sub_82AF5500(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1836(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1836, ctx.r11.u8);
loc_82AF4850:
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

__attribute__((alias("__imp__sub_82AF4864"))) PPC_WEAK_FUNC(sub_82AF4864);
PPC_FUNC_IMPL(__imp__sub_82AF4864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF4868"))) PPC_WEAK_FUNC(sub_82AF4868);
PPC_FUNC_IMPL(__imp__sub_82AF4868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AF4870;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ae4
	ctx.lr = 0x82AF4878;
	__savefpr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82af4750
	ctx.lr = 0x82AF4888;
	sub_82AF4750(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lbz r10,1836(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1836);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82af4ab8
	if (!ctx.cr6.eq) goto loc_82AF4AB8;
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af4ad0
	if (ctx.cr6.eq) goto loc_82AF4AD0;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af4ad0
	if (!ctx.cr6.eq) goto loc_82AF4AD0;
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823d3da0
	ctx.lr = 0x82AF48CC;
	sub_823D3DA0(ctx, base);
	// lfs f0,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,1052(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f30,26252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26252);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,-18108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18108);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f8,f12,f29
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fsubs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f3,f7,f29
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fctiwz f2,f4
	ctx.f2.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f2,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.f2.u64);
	// fctiwz f0,f3
	ctx.f0.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r28,244(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82382590
	ctx.lr = 0x82AF4938;
	sub_82382590(ctx, base);
	// lfs f13,1184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// lfs f12,1048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,-31264(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31264);
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stw r6,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// lfs f9,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// fmuls f2,f6,f30
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f1,f4,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f0,f3,f30
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// li r8,8839
	ctx.r8.s64 = 8839;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmuls f13,f2,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f8,f1,f12
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f30,f13,f29
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f28,f8,f29
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmuls f27,f7,f29
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fadds f6,f11,f30
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f5,f10,f28
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f4,f9,f27
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x827723e0
	ctx.lr = 0x82AF4A28;
	sub_827723E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af4a54
	if (!ctx.cr6.eq) goto loc_82AF4A54;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af4a54
	if (ctx.cr6.eq) goto loc_82AF4A54;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 180);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,368(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	// bl 0x827751a0
	ctx.lr = 0x82AF4A54;
	sub_827751A0(ctx, base);
loc_82AF4A54:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + ctx.r28.u64;
	// fadds f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fadds f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f9,f12,f27
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// lwz r11,1520(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1520);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AF4AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82af4ad0
	goto loc_82AF4AD0;
loc_82AF4AB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF4AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF4AD0:
	// lfs f0,1848(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82af4ae4
	if (!ctx.cr6.gt) goto loc_82AF4AE4;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f0,1848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1848, temp.u32);
loc_82AF4AE4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b30
	ctx.lr = 0x82AF4AF0;
	__restfpr_27(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF4AF4"))) PPC_WEAK_FUNC(sub_82AF4AF4);
PPC_FUNC_IMPL(__imp__sub_82AF4AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF4AF8"))) PPC_WEAK_FUNC(sub_82AF4AF8);
PPC_FUNC_IMPL(__imp__sub_82AF4AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82AF4B00;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6ab0
	ctx.lr = 0x82AF4B08;
	__savefpr_14(ctx, base);
	// addi r12,r1,-240
	ctx.r12.s64 = ctx.r1.s64 + -240;
	// bl 0x82ff17b4
	ctx.lr = 0x82AF4B10;
	__savevmx_124(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-31883
	ctx.r22.s64 = -2089484288;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-31264(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82af4b40
	if (ctx.cr6.gt) goto loc_82AF4B40;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82af4b48
	goto loc_82AF4B48;
loc_82AF4B40:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AF4B48:
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r30,980(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af4c18
	if (ctx.cr6.eq) goto loc_82AF4C18;
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r9,456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 456);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF4B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af4b94
	if (ctx.cr6.eq) goto loc_82AF4B94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF4B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF4B94:
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF4BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r7,480(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r6,r7,16384
	ctx.r6.u64 = ctx.r7.u64 | 1073741824;
	// stw r6,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r6.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af4c18
	if (ctx.cr6.eq) goto loc_82AF4C18;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82af4bf4
	if (ctx.cr6.eq) goto loc_82AF4BF4;
	// lwz r10,776(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82af4bf8
	if (!ctx.cr6.eq) goto loc_82AF4BF8;
loc_82AF4BF4:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82AF4BF8:
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r9.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lwz r8,480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,31,1,1
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 31) & 0x40000000) | (ctx.r7.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
loc_82AF4C18:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,32088
	ctx.r11.s64 = ctx.r11.s64 + 32088;
	// lfs f26,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f26.f64 = double(temp.f32);
	// lfs f24,1004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	ctx.f24.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// stfs f24,128(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bge cr6,0x82af4c44
	if (!ctx.cr6.lt) goto loc_82AF4C44;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x82af4c50
	goto loc_82AF4C50;
loc_82AF4C44:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// blt cr6,0x82af4c50
	if (ctx.cr6.lt) goto loc_82AF4C50;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
loc_82AF4C50:
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lfs f13,1164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af4d18
	if (ctx.cr6.eq) goto loc_82AF4D18;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x82af4d18
	if (!ctx.cr6.gt) goto loc_82AF4D18;
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lfs f0,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,1744(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// fabs f7,f0
	ctx.f7.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,32428(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32428);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x82af4cfc
	if (!ctx.cr6.lt) goto loc_82AF4CFC;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82af4cfc
	if (!ctx.cr6.lt) goto loc_82AF4CFC;
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82af4d3c
	if (ctx.cr6.lt) goto loc_82AF4D3C;
loc_82AF4CFC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d27f0
	ctx.lr = 0x82AF4D08;
	sub_823D27F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82af4d48
	goto loc_82AF4D48;
loc_82AF4D18:
	// stfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f26,84(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_82AF4D3C:
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
loc_82AF4D48:
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r26,r31,268
	ctx.r26.s64 = ctx.r31.s64 + 268;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f30,-18108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18108);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fsubs f7,f29,f8
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f8.f64));
	// fmadds f29,f7,f31,f8
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f8.f64));
	// bl 0x82382590
	ctx.lr = 0x82AF4D9C;
	sub_82382590(ctx, base);
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f29,f31
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f12,f2,f29
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f29
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// lfs f8,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f4
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f5,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f5.f64 = double(temp.f32);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f29,f8,f31
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f28,f7,f31
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f27,f5,f31
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fcmpu cr6,f6,f9
	ctx.cr6.compare(ctx.f6.f64, ctx.f9.f64);
	// ble cr6,0x82af4e30
	if (!ctx.cr6.gt) goto loc_82AF4E30;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lfs f29,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
loc_82AF4E30:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r30,380(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfs f25,-28844(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f25.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f12,f31,f25
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f25.f64));
	// bl 0x82cb2298
	ctx.lr = 0x82AF4E64;
	sub_82CB2298(ctx, base);
	// extsw r7,r30
	ctx.r7.s64 = ctx.r30.s32;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// fctiwz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stfd f7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f7.u64);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f1,f8,f31,f25
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f25.f64));
	// bl 0x82cb2298
	ctx.lr = 0x82AF4E90;
	sub_82CB2298(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f5.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x82af4ecc
	if (ctx.cr6.eq) goto loc_82AF4ECC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82af4ec0
	if (!ctx.cr6.eq) goto loc_82AF4EC0;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82af4ec8
	goto loc_82AF4EC8;
loc_82AF4EC0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82790550
	ctx.lr = 0x82AF4EC8;
	sub_82790550(ctx, base);
loc_82AF4EC8:
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
loc_82AF4ECC:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r23,r31,256
	ctx.r23.s64 = ctx.r31.s64 + 256;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82af4efc
	if (ctx.cr6.eq) goto loc_82AF4EFC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82af4ef0
	if (!ctx.cr6.eq) goto loc_82AF4EF0;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82af4ef8
	goto loc_82AF4EF8;
loc_82AF4EF0:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82790550
	ctx.lr = 0x82AF4EF8;
	sub_82790550(ctx, base);
loc_82AF4EF8:
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_82AF4EFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f12,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fadds f9,f12,f27
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// stfs f11,216(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f9,208(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r24,r31,244
	ctx.r24.s64 = ctx.r31.s64 + 244;
	// lwz r10,1520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	// stfs f10,212(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF4F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af5160
	if (ctx.cr6.eq) goto loc_82AF5160;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x823d7588
	ctx.lr = 0x82AF4F58;
	sub_823D7588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AF4F68:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82af4f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF4F68;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82af5160
	if (!ctx.cr6.gt) goto loc_82AF5160;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,-1
	ctx.r29.s64 = -1;
	// lvx128 v126,r0,r10
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v125,r0,r9
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v124,r0,r8
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF4FB4:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82af5154
	if (ctx.cr6.eq) goto loc_82AF5154;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af5154
	if (!ctx.cr6.eq) goto loc_82AF5154;
	// stfs f26,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// stfs f26,236(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stfs f26,240(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stfs f26,244(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r27,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r27.u32);
	// stfs f26,248(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stw r27,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r27.u32);
	// stfs f26,252(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stfs f24,256(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r27,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r27.u32);
	// addi r5,r30,316
	ctx.r5.s64 = ctx.r30.s64 + 316;
	// stw r27,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r27.u32);
	// addi r4,r30,328
	ctx.r4.s64 = ctx.r30.s64 + 328;
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r27,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r27.u32);
	// bl 0x823d7588
	ctx.lr = 0x82AF502C;
	sub_823D7588(ctx, base);
	// vmrghw128 v63,v124,v126
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// vmrghw128 v62,v125,v127
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// vmrglw128 v61,v124,v126
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// vmrglw128 v60,v125,v127
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// vmrglw128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// vmrghw128 v57,v61,v60
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// vmrglw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
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
	ctx.lr = 0x82AF5108;
	sub_823D40C0(ctx, base);
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f7,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,-31264(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -31264);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82770290
	ctx.lr = 0x82AF5154;
	sub_82770290(ctx, base);
loc_82AF5154:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82af4fb4
	if (!ctx.cr0.eq) goto loc_82AF4FB4;
loc_82AF5160:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lfs f12,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addi r6,r11,16384
	ctx.r6.s64 = ctx.r11.s64 + 16384;
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// lfs f13,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r10,16384
	ctx.r4.s64 = ctx.r10.s64 + 16384;
	// lfs f9,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f9.f64 = double(temp.f32);
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// lfs f7,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r9,16384
	ctx.r11.s64 = ctx.r9.s64 + 16384;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stfs f26,156(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// stfs f26,172(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// stfs f26,188(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r4,r8,-22168
	ctx.r4.s64 = ctx.r8.s64 + -22168;
	// lfs f8,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r11,r7,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// fmuls f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// rlwinm r8,r3,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFC;
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// rlwinm r7,r10,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lfs f5,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r6,r6,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// lfs f4,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// fmuls f19,f4,f11
	ctx.f19.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfsx f2,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r3,r9,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// lfsx f0,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfsx f7,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f7,f12
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfsx f28,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f28.f64 = double(temp.f32);
	// lfsx f1,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f27,f7,f2
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f21,f10,f1
	ctx.f21.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f23,f11,f1
	ctx.f23.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f22,f7,f1
	ctx.f22.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f20,f1,f12
	ctx.f20.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f26,f0,f28
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f1,f10,f28
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f24,f28,f2
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f2.f64));
	// fmadds f1,f29,f28,f9
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f28.f64 + ctx.f9.f64));
	// fmadds f18,f9,f28,f29
	ctx.f18.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f29.f64));
	// fmuls f14,f3,f29
	ctx.f14.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// fmuls f15,f23,f2
	ctx.f15.f64 = double(float(ctx.f23.f64 * ctx.f2.f64));
	// fnmsubs f5,f13,f22,f5
	ctx.f5.f64 = double(float(-(ctx.f13.f64 * ctx.f22.f64 - ctx.f5.f64)));
	// fmuls f10,f22,f10
	ctx.f10.f64 = double(float(ctx.f22.f64 * ctx.f10.f64));
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fnmsubs f17,f26,f12,f27
	ctx.f17.f64 = double(float(-(ctx.f26.f64 * ctx.f12.f64 - ctx.f27.f64)));
	// fmuls f10,f21,f0
	ctx.f10.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmsubs f16,f24,f7,f31
	ctx.f16.f64 = double(float(ctx.f24.f64 * ctx.f7.f64 - ctx.f31.f64));
	// fmuls f10,f20,f6
	ctx.f10.f64 = double(float(ctx.f20.f64 * ctx.f6.f64));
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f10,f18,f11
	ctx.f10.f64 = double(float(ctx.f18.f64 * ctx.f11.f64));
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f8,f8,f21
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f21.f64));
	// fneg f10,f15
	ctx.f10.u64 = ctx.f15.u64 ^ 0x8000000000000000;
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f6,f17,f6
	ctx.f6.f64 = double(float(ctx.f17.f64 * ctx.f6.f64));
	// stfs f6,180(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmadds f6,f14,f28,f5
	ctx.f6.f64 = double(float(ctx.f14.f64 * ctx.f28.f64 + ctx.f5.f64));
	// fmuls f11,f16,f11
	ctx.f11.f64 = double(float(ctx.f16.f64 * ctx.f11.f64));
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fneg f5,f1
	ctx.f5.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f11,f27,f3
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f3.f64));
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f24,f19
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f19.f64));
	// lfs f27,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f4,f23
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f23.f64));
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f26,f3,f26
	ctx.f26.f64 = double(float(ctx.f3.f64 * ctx.f26.f64));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmuls f24,f19,f9
	ctx.f24.f64 = double(float(ctx.f19.f64 * ctx.f9.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmadds f0,f8,f0,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fnmsubs f11,f5,f7,f6
	ctx.f11.f64 = double(float(-(ctx.f5.f64 * ctx.f7.f64 - ctx.f6.f64)));
	// fmadds f8,f3,f20,f13
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f20.f64 + ctx.f13.f64));
	// fmadds f7,f19,f29,f0
	ctx.f7.f64 = double(float(ctx.f19.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f6,f31,f19,f11
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f19.f64 + ctx.f11.f64));
	// fnmsubs f5,f4,f2,f8
	ctx.f5.f64 = double(float(-(ctx.f4.f64 * ctx.f2.f64 - ctx.f8.f64)));
	// fnmsubs f4,f26,f12,f7
	ctx.f4.f64 = double(float(-(ctx.f26.f64 * ctx.f12.f64 - ctx.f7.f64)));
	// fmadds f3,f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,192(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f2,f27,f5
	ctx.f2.f64 = double(float(ctx.f27.f64 - ctx.f5.f64));
	// stfs f2,200(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmadds f0,f24,f28,f4
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f28.f64 + ctx.f4.f64));
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x82485a40
	ctx.lr = 0x82AF5310;
	sub_82485A40(ctx, base);
	// lfs f12,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f10,f25
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// stfs f9,1256(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// lfs f8,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f2,f8,f3,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f0,f7,f1,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,1260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// addi r12,r1,-240
	ctx.r12.s64 = ctx.r1.s64 + -240;
	// bl 0x82ff1a4c
	ctx.lr = 0x82AF5358;
	__restvmx_124(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6afc
	ctx.lr = 0x82AF5360;
	__restfpr_14(ctx, base);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF5364"))) PPC_WEAK_FUNC(sub_82AF5364);
PPC_FUNC_IMPL(__imp__sub_82AF5364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF5368"))) PPC_WEAK_FUNC(sub_82AF5368);
PPC_FUNC_IMPL(__imp__sub_82AF5368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AF5370;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r3.u32);
	// beq cr6,0x82af53c0
	if (ctx.cr6.eq) goto loc_82AF53C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF53A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r7,480(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r6,r7,16384
	ctx.r6.u64 = ctx.r7.u64 | 1073741824;
	// stw r6,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r6.u32);
loc_82AF53C0:
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af53e8
	if (ctx.cr6.eq) goto loc_82AF53E8;
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r9.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lwz r8,480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// rlwinm r7,r8,0,2,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
loc_82AF53E8:
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,17480
	ctx.r29.s64 = ctx.r11.s64 + 17480;
	// beq cr6,0x82af54d4
	if (ctx.cr6.eq) goto loc_82AF54D4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r9,456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 456);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF5420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82af54d4
	if (ctx.cr6.eq) goto loc_82AF54D4;
	// lfs f0,14612(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 14612);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823d7698
	ctx.lr = 0x82AF5474;
	sub_823D7698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d4218
	ctx.lr = 0x82AF5480;
	sub_823D4218(ctx, base);
	// lfs f7,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AF54B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82af54d4
	if (ctx.cr6.eq) goto loc_82AF54D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,804(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF54D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF54D4:
	// lbz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af54f8
	if (ctx.cr6.eq) goto loc_82AF54F8;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1840, temp.u32);
	// stb r28,1836(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1836, ctx.r28.u8);
	// lfs f0,-26236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1844, temp.u32);
loc_82AF54F8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF5500"))) PPC_WEAK_FUNC(sub_82AF5500);
PPC_FUNC_IMPL(__imp__sub_82AF5500) {
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
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af5594
	if (!ctx.cr6.eq) goto loc_82AF5594;
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af5568
	if (ctx.cr6.eq) goto loc_82AF5568;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r7,480(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r6,r7,16384
	ctx.r6.u64 = ctx.r7.u64 | 1073741824;
	// stw r6,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r6.u32);
loc_82AF5568:
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af5594
	if (ctx.cr6.eq) goto loc_82AF5594;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r9.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lwz r8,480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// rlwinm r7,r8,0,2,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
loc_82AF5594:
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

__attribute__((alias("__imp__sub_82AF55A8"))) PPC_WEAK_FUNC(sub_82AF55A8);
PPC_FUNC_IMPL(__imp__sub_82AF55A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82AF55B0;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r30,r11,17480
	ctx.r30.s64 = ctx.r11.s64 + 17480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,15612(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 15612);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82ab9728
	ctx.lr = 0x82AF55F4;
	sub_82AB9728(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x823d7698
	ctx.lr = 0x82AF5608;
	sub_823D7698(ctx, base);
	// lfs f9,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,1324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,524(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// lfs f12,1328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-28844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// fmadds f4,f12,f0,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f2,f11,f0,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,-26236(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26236);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f11,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f10,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f1,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmsubs f0,f5,f31,f7
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 - ctx.f7.f64));
	// fsubs f13,f9,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fmuls f11,f5,f2
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f5,f12,f4
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f7,f0,f4
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f6,f13,f4
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fadds f0,f3,f5
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fadds f4,f1,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// fadds f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fsubs f13,f10,f6
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f12,f3,f5
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fsubs f10,f1,f7
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// fsubs f5,f0,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f7,152(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f6,f2,f11
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f3,f2,f11
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f2,f0,f9
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f1,f4,f8
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f5,f13,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f4,f12,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f3,f10,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f3,168(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bne cr6,0x82af570c
	if (!ctx.cr6.eq) goto loc_82AF570C;
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af5748
	if (ctx.cr6.eq) goto loc_82AF5748;
loc_82AF570C:
	// lbz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af5748
	if (ctx.cr6.eq) goto loc_82AF5748;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF5734:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82AF5748:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82af5734
	if (ctx.cr6.eq) goto loc_82AF5734;
	// lis r21,-31883
	ctx.r21.s64 = -2089484288;
	// lwz r23,1136(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1136);
	// lwz r11,-31264(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82af5774
	if (ctx.cr6.gt) goto loc_82AF5774;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82af577c
	goto loc_82AF577C;
loc_82AF5774:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AF577C:
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af57e4
	if (ctx.cr6.eq) goto loc_82AF57E4;
	// lwz r10,776(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af57e4
	if (ctx.cr6.eq) goto loc_82AF57E4;
	// lwz r4,2216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2216);
	// lfs f13,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,19048(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 19048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,244(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bge cr6,0x82af57e4
	if (!ctx.cr6.lt) goto loc_82AF57E4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,1324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF57E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r23,1136(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1136);
loc_82AF57E4:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82af5984
	if (!ctx.cr6.gt) goto loc_82AF5984;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,-18108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18108);
	ctx.f31.f64 = double(temp.f32);
loc_82AF57FC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82af59e4
	if (!ctx.cr6.eq) goto loc_82AF59E4;
	// lwz r11,1132(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1132);
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ee8f0
	ctx.lr = 0x82AF5814;
	sub_829EE8F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82af596c
	if (ctx.cr6.eq) goto loc_82AF596C;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af596c
	if (!ctx.cr6.eq) goto loc_82AF596C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af596c
	if (!ctx.cr6.eq) goto loc_82AF596C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1d068
	ctx.lr = 0x82AF583C;
	sub_82A1D068(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829d91a8
	ctx.lr = 0x82AF5848;
	sub_829D91A8(ctx, base);
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r30,244
	ctx.r4.s64 = ctx.r30.s64 + 244;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f13,f0,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// beq cr6,0x82af58d0
	if (ctx.cr6.eq) goto loc_82AF58D0;
	// lfs f0,1324(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1324);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82af58c4
	if (!ctx.cr6.lt) goto loc_82AF58C4;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af6e78
	ctx.lr = 0x82AF58BC;
	sub_82AF6E78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af592c
	if (!ctx.cr6.eq) goto loc_82AF592C;
loc_82AF58C4:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82AF58C8:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82af5948
	goto loc_82AF5948;
loc_82AF58D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af58c8
	if (ctx.cr6.eq) goto loc_82AF58C8;
	// lwz r10,904(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// lfs f12,1332(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f10,656(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// blt cr6,0x82af58fc
	if (ctx.cr6.lt) goto loc_82AF58FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AF58FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f1,660(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af58c4
	if (ctx.cr6.eq) goto loc_82AF58C4;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82af58c4
	if (!ctx.cr6.lt) goto loc_82AF58C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af7128
	ctx.lr = 0x82AF5924;
	sub_82AF7128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af58c4
	if (ctx.cr6.eq) goto loc_82AF58C4;
loc_82AF592C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF5948:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82382590
	ctx.lr = 0x82AF596C;
	sub_82382590(ctx, base);
loc_82AF596C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82af57fc
	if (ctx.cr6.lt) goto loc_82AF57FC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82af59e4
	if (!ctx.cr6.eq) goto loc_82AF59E4;
loc_82AF5984:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r9,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r9.u32);
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r8,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r8.u32);
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stw r7,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r7.u32);
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// stw r6,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r6.u32);
	// lwz r4,8(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// stw r4,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r4.u32);
	// lwz r11,-31264(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -31264);
	// lwz r10,956(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 956);
	// lwz r4,304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF59D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// oris r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 131072;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// b 0x82af5ae4
	goto loc_82AF5AE4;
loc_82AF59E4:
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r9.u32);
	// lwz r8,1448(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1448);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AF5A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-31264(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r7,132(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt cr6,0x82af5a28
	if (ctx.cr6.gt) goto loc_82AF5A28;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82af5a30
	goto loc_82AF5A30;
loc_82AF5A28:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AF5A30:
	// lfs f0,860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lfs f13,268(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// lfs f12,272(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,276(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,16160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16160);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f6,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f1,244(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// fadds f0,f3,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// fadds f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f13,252(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// beq cr6,0x82af5ae4
	if (ctx.cr6.eq) goto loc_82AF5AE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x827751a0
	ctx.lr = 0x82AF5AE4;
	sub_827751A0(ctx, base);
loc_82AF5AE4:
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF5AFC"))) PPC_WEAK_FUNC(sub_82AF5AFC);
PPC_FUNC_IMPL(__imp__sub_82AF5AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF5B00"))) PPC_WEAK_FUNC(sub_82AF5B00);
PPC_FUNC_IMPL(__imp__sub_82AF5B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82AF5B08;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r28,504(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x82ab97b0
	ctx.lr = 0x82AF5B28;
	sub_82AB97B0(ctx, base);
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af5b70
	if (ctx.cr6.eq) goto loc_82AF5B70;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-11596
	ctx.r4.s64 = ctx.r11.s64 + -11596;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r30,r1,104
	ctx.r30.s64 = ctx.r1.s64 + 104;
	// bl 0x8233e028
	ctx.lr = 0x82AF5B58;
	sub_8233E028(ctx, base);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x824c6628
	ctx.lr = 0x82AF5B64;
	sub_824C6628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r26,1
	ctx.r26.s64 = 1;
	// bne cr6,0x82af5b74
	if (!ctx.cr6.eq) goto loc_82AF5B74;
loc_82AF5B70:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82AF5B74:
	// lwz r3,1804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r27,r10,1
	ctx.r27.u64 = ctx.r10.u64 ^ 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82af5ba8
	if (ctx.cr6.eq) goto loc_82AF5BA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// bne cr6,0x82af5bac
	if (!ctx.cr6.eq) goto loc_82AF5BAC;
loc_82AF5BA8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82AF5BAC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r11,32088
	ctx.r25.s64 = ctx.r11.s64 + 32088;
	// lfs f0,460(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 460);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82af5be8
	if (ctx.cr6.gt) goto loc_82AF5BE8;
	// lfs f13,1048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1104(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 1104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82af5be8
	if (ctx.cr6.gt) goto loc_82AF5BE8;
	// lfs f13,1044(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82af5bec
	if (!ctx.cr6.lt) goto loc_82AF5BEC;
loc_82AF5BE8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82AF5BEC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f30,1004(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 1004);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82af5d04
	if (ctx.cr6.eq) goto loc_82AF5D04;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82af5d04
	if (ctx.cr6.eq) goto loc_82AF5D04;
	// lwz r3,1804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,-14036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14036);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,372(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF5C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82af5c50
	if (!ctx.cr6.eq) goto loc_82AF5C50;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82af5c6c
	if (ctx.cr6.eq) goto loc_82AF5C6C;
	// lwz r3,1804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82af5c6c
	goto loc_82AF5C6C;
loc_82AF5C50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82af5c6c
	if (!ctx.cr6.eq) goto loc_82AF5C6C;
	// lwz r3,1804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF5C6C:
	// lfs f0,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,1256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,-188(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,1048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f10.f64 = double(temp.f32);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// lfs f12,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f11,f13,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f29,f8,f0
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bge cr6,0x82af5cb0
	if (!ctx.cr6.lt) goto loc_82AF5CB0;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x82af5cbc
	goto loc_82AF5CBC;
loc_82AF5CB0:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// blt cr6,0x82af5cbc
	if (ctx.cr6.lt) goto loc_82AF5CBC;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
loc_82AF5CBC:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82af5ccc
	if (!ctx.cr6.lt) goto loc_82AF5CCC;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82af5cd8
	goto loc_82AF5CD8;
loc_82AF5CCC:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x82af5cd8
	if (ctx.cr6.lt) goto loc_82AF5CD8;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
loc_82AF5CD8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r3,1804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-16452
	ctx.r4.s64 = ctx.r11.s64 + -16452;
	// bl 0x826fa198
	ctx.lr = 0x82AF5CEC;
	sub_826FA198(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,1804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// addi r4,r10,-16448
	ctx.r4.s64 = ctx.r10.s64 + -16448;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x826fa198
	ctx.lr = 0x82AF5D04;
	sub_826FA198(ctx, base);
loc_82AF5D04:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82af5d1c
	if (ctx.cr6.eq) goto loc_82AF5D1C;
	// lwz r11,1900(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1900);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af5fe4
	if (!ctx.cr6.eq) goto loc_82AF5FE4;
loc_82AF5D1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,1316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stfs f30,564(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// ld r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,1228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1228);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF5D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,924(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 924);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r7,r8,7,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x1;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r11,r8,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x1;
	// rlwinm r10,r8,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82af5d84
	if (!ctx.cr6.eq) goto loc_82AF5D84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82af5d84
	if (!ctx.cr6.eq) goto loc_82AF5D84;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82af5d84
	if (!ctx.cr6.eq) goto loc_82AF5D84;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,1340(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// b 0x82af5d8c
	goto loc_82AF5D8C;
loc_82AF5D84:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,1348(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1348);
loc_82AF5D8C:
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF5DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,1712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af5df8
	if (ctx.cr6.eq) goto loc_82AF5DF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af5df8
	if (ctx.cr6.eq) goto loc_82AF5DF8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,1328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82af5e3c
	goto loc_82AF5E3C;
loc_82AF5DF8:
	// lwz r11,924(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 924);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af5e3c
	if (ctx.cr6.eq) goto loc_82AF5E3C;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,536(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// lwz r10,1344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1344);
	// ld r4,528(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 528);
	// rldicr r5,r6,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF5E3C:
	// lwz r11,1136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1136);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r10,-18304
	ctx.r29.s64 = ctx.r10.s64 + -18304;
	// ble cr6,0x82af5f60
	if (!ctx.cr6.gt) goto loc_82AF5F60;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82AF5E58:
	// lwz r11,1132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1132);
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af5f54
	if (ctx.cr6.eq) goto loc_82AF5F54;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af5f54
	if (ctx.cr6.eq) goto loc_82AF5F54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af0560
	ctx.lr = 0x82AF5E84;
	sub_82AF0560(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r6,244(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// stfs f30,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,1344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1344);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF5ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
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
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
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
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
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
	// rlwinm r6,r9,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r5,r9,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// rlwinm r4,r8,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r3,r8,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// rlwinm r11,r7,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r10,r7,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lfsx f5,r29,r9
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r29,r8
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsel f3,f5,f13,f0
	ctx.f3.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfsx f2,r29,r7
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsel f1,f4,f11,f12
	ctx.f1.f64 = ctx.f4.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fsel f0,f2,f9,f10
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82AF5F54:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne 0x82af5e58
	if (!ctx.cr0.eq) goto loc_82AF5E58;
loc_82AF5F60:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// mfcr r11
	ctx.r11.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r11.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r11.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r11.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r11.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r11.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r11.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r11.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r11.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r11.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r11.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r11.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r11.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r11.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r11.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r11.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r11.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r11.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r11.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r11.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r11.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r11.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r11.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r11.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r11.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r11.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r11.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r11.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r11.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r11.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r11.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r11.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// mfcr r10
	ctx.r10.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r10.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r10.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r10.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r10.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r10.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r10.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r10.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r10.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r10.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r10.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r10.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r10.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r10.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r10.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r10.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r10.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r10.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r10.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r10.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r10.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r10.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r10.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r10.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r10.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r10.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r10.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r10.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r10.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r10.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r10.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r10.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
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
	// rlwinm r8,r11,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r7,r11,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// rlwinm r6,r10,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r5,r10,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// rlwinm r4,r9,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r3,r9,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lfsx f5,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsel f3,f5,f0,f11
	ctx.f3.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// lfsx f2,r29,r9
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsel f1,f4,f13,f10
	ctx.f1.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsel f0,f2,f12,f9
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// stfs f3,1048(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// stfs f1,1316(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// stfs f0,564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
loc_82AF5FE4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF5FF8"))) PPC_WEAK_FUNC(sub_82AF5FF8);
PPC_FUNC_IMPL(__imp__sub_82AF5FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF5FFC"))) PPC_WEAK_FUNC(sub_82AF5FFC);
PPC_FUNC_IMPL(__imp__sub_82AF5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6000"))) PPC_WEAK_FUNC(sub_82AF6000);
PPC_FUNC_IMPL(__imp__sub_82AF6000) {
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
	// bl 0x82cb6ae4
	ctx.lr = 0x82AF6018;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,504(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af6224
	if (ctx.cr6.eq) goto loc_82AF6224;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82af6224
	if (ctx.cr6.eq) goto loc_82AF6224;
	// lwz r10,1712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82af6224
	if (ctx.cr6.eq) goto loc_82AF6224;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r7,924(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 924);
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,244
	ctx.r11.s64 = ctx.r30.s64 + 244;
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f10,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f30,f13,f10
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f27,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f29,f12,f9
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f28,f27
	ctx.f28.f64 = ctx.f27.f64;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82af60c8
	if (ctx.cr6.eq) goto loc_82AF60C8;
	// lfs f0,532(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 532);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,536(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 536);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,528(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 528);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f28,f3
	ctx.f28.f64 = double(float(sqrt(ctx.f3.f64)));
loc_82AF60C8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af6148
	if (ctx.cr6.eq) goto loc_82AF6148;
	// lfs f0,248(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f28,f3
	ctx.f28.f64 = double(float(sqrt(ctx.f3.f64)));
	// bl 0x82312318
	ctx.lr = 0x82AF6108;
	sub_82312318(ctx, base);
	// lwz r10,1712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af612c
	if (ctx.cr6.eq) goto loc_82AF612C;
loc_82AF6118:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af613c
	if (ctx.cr6.eq) goto loc_82AF613C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af6118
	if (!ctx.cr6.eq) goto loc_82AF6118;
loc_82AF612C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af6148
	if (ctx.cr6.eq) goto loc_82AF6148;
loc_82AF613C:
	// lwz r11,904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	// lfs f0,660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
loc_82AF6148:
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f13,f29,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f12,f31,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fsqrts f31,f12
	ctx.f31.f64 = double(float(sqrt(ctx.f12.f64)));
	// bl 0x82312318
	ctx.lr = 0x82AF615C;
	sub_82312318(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af617c
	if (ctx.cr6.eq) goto loc_82AF617C;
loc_82AF6168:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af618c
	if (ctx.cr6.eq) goto loc_82AF618C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af6168
	if (!ctx.cr6.eq) goto loc_82AF6168;
loc_82AF617C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af61dc
	if (ctx.cr6.eq) goto loc_82AF61DC;
loc_82AF618C:
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lfs f0,660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// bl 0x829817f8
	ctx.lr = 0x82AF619C;
	sub_829817F8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af61bc
	if (ctx.cr6.eq) goto loc_82AF61BC;
loc_82AF61A8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af61cc
	if (ctx.cr6.eq) goto loc_82AF61CC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af61a8
	if (!ctx.cr6.eq) goto loc_82AF61A8;
loc_82AF61BC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af61dc
	if (ctx.cr6.eq) goto loc_82AF61DC;
loc_82AF61CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af7ee8
	ctx.lr = 0x82AF61DC;
	sub_82AF7EE8(ctx, base);
loc_82AF61DC:
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af61f0
	if (ctx.cr6.eq) goto loc_82AF61F0;
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bge cr6,0x82af6224
	if (!ctx.cr6.lt) goto loc_82AF6224;
loc_82AF61F0:
	// lwz r3,504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af620c
	if (ctx.cr6.eq) goto loc_82AF620C;
	// stfs f27,1720(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1720, temp.u32);
	// stw r31,1712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1712, ctx.r31.u32);
loc_82AF620C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82af7e68
	ctx.lr = 0x82AF6224;
	sub_82AF7E68(ctx, base);
loc_82AF6224:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b30
	ctx.lr = 0x82AF6230;
	__restfpr_27(ctx, base);
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

__attribute__((alias("__imp__sub_82AF6244"))) PPC_WEAK_FUNC(sub_82AF6244);
PPC_FUNC_IMPL(__imp__sub_82AF6244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6248"))) PPC_WEAK_FUNC(sub_82AF6248);
PPC_FUNC_IMPL(__imp__sub_82AF6248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82AF6250;
	__savegprlr_14(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r24,r18,1772
	ctx.r24.s64 = ctx.r18.s64 + 1772;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// bl 0x82af6828
	ctx.lr = 0x82AF6288;
	sub_82AF6828(ctx, base);
	// lwz r11,1776(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1776);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r14,120(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r15,136(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// ble cr6,0x82af67b8
	if (!ctx.cr6.gt) goto loc_82AF67B8;
	// addi r16,r11,-1
	ctx.r16.s64 = ctx.r11.s64 + -1;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r26,r14,12
	ctx.r26.s64 = ctx.r14.s64 + 12;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// subf r23,r15,r14
	ctx.r23.s64 = ctx.r14.s64 - ctx.r15.s64;
	// subfic r22,r15,12
	ctx.xer.ca = ctx.r15.u32 <= 12;
	ctx.r22.s64 = 12 - ctx.r15.s64;
	// li r31,255
	ctx.r31.s64 = 255;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
	// lis r19,-31883
	ctx.r19.s64 = -2089484288;
	// addi r17,r11,11336
	ctx.r17.s64 = ctx.r11.s64 + 11336;
loc_82AF62C4:
	// lwz r11,504(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 504);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82af6630
	if (!ctx.cr6.gt) goto loc_82AF6630;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_82AF62DC:
	// lwz r11,504(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 504);
	// lwz r10,1132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// lwzx r25,r10,r21
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82af6620
	if (ctx.cr6.eq) goto loc_82AF6620;
	// lwz r11,108(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af6620
	if (!ctx.cr6.eq) goto loc_82AF6620;
	// lwz r11,-24104(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -24104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af631c
	if (!ctx.cr6.eq) goto loc_82AF631C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82aedeb8
	ctx.lr = 0x82AF6314;
	sub_82AEDEB8(ctx, base);
	// stw r3,-24104(r19)
	PPC_STORE_U32(ctx.r19.u32 + -24104, ctx.r3.u32);
	// bl 0x82aedf68
	ctx.lr = 0x82AF631C;
	sub_82AEDF68(ctx, base);
loc_82AF631C:
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af6340
	if (ctx.cr6.eq) goto loc_82AF6340;
loc_82AF6328:
	// lwz r10,-24104(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -24104);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82af6354
	if (ctx.cr6.eq) goto loc_82AF6354;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af6328
	if (!ctx.cr6.eq) goto loc_82AF6328;
loc_82AF6340:
	// lwz r11,-24104(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -24104);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af6620
	if (ctx.cr6.eq) goto loc_82AF6620;
loc_82AF6354:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r28,r30,r22
	ctx.r28.u64 = ctx.r30.u64 + ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r4,r5,-12
	ctx.r4.s64 = ctx.r5.s64 + -12;
	// bl 0x82af7470
	ctx.lr = 0x82AF636C;
	sub_82AF7470(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,-31264(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x82af63e0
	if (ctx.cr6.eq) goto loc_82AF63E0;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// stb r31,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r31.u8);
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// lwz r28,332(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AF63D0;
	sub_8240A888(ctx, base);
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// b 0x82af6430
	goto loc_82AF6430;
loc_82AF63E0:
	// stw r9,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r7,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stb r31,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r31.u8);
	// stb r29,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r29.u8);
	// stb r29,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r29.u8);
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// stw r6,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// stw r5,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r5.u32);
	// lwz r28,332(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AF6424;
	sub_8240A888(ctx, base);
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// addi r5,r1,264
	ctx.r5.s64 = ctx.r1.s64 + 264;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
loc_82AF6430:
	// lwz r10,656(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 656);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r28,656
	ctx.r3.s64 = ctx.r28.s64 + 656;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF6448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r28,r23,r30
	ctx.r28.u64 = ctx.r23.u64 + ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82af7470
	ctx.lr = 0x82AF645C;
	sub_82AF7470(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// beq cr6,0x82af64c8
	if (ctx.cr6.eq) goto loc_82AF64C8;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// stb r31,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r31.u8);
	// stb r31,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r31.u8);
	// stb r31,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r31.u8);
	// lwz r11,-31264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r8,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r8.u32);
	// stw r7,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r7.u32);
	// stw r6,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r6.u32);
	// lwz r28,332(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AF64B8;
	sub_8240A888(ctx, base);
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// b 0x82af651c
	goto loc_82AF651C;
loc_82AF64C8:
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// stb r31,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r31.u8);
	// stb r29,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r29.u8);
	// stb r29,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r29.u8);
	// lwz r11,-31264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r8,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// stw r7,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r7.u32);
	// stw r6,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r6.u32);
	// lwz r28,332(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AF6510;
	sub_8240A888(ctx, base);
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
loc_82AF651C:
	// lwz r11,656(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 656);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r28,656
	ctx.r3.s64 = ctx.r28.s64 + 656;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF6534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82af7470
	ctx.lr = 0x82AF6548;
	sub_82AF7470(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// beq cr6,0x82af65b4
	if (ctx.cr6.eq) goto loc_82AF65B4;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// stb r31,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r31.u8);
	// stb r31,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r31.u8);
	// stb r31,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r31.u8);
	// lwz r11,-31264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r8.u32);
	// stw r7,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r7.u32);
	// stw r6,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r6.u32);
	// lwz r28,332(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AF65A4;
	sub_8240A888(ctx, base);
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// b 0x82af6608
	goto loc_82AF6608;
loc_82AF65B4:
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// stb r29,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r29.u8);
	// stb r29,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r29.u8);
	// lwz r11,-31264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r8.u32);
	// stw r7,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r7.u32);
	// stw r6,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r6.u32);
	// lwz r28,332(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AF65FC;
	sub_8240A888(ctx, base);
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
loc_82AF6608:
	// lwz r11,656(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 656);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r28,656
	ctx.r3.s64 = ctx.r28.s64 + 656;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF6620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF6620:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r21,r21,12
	ctx.r21.s64 = ctx.r21.s64 + 12;
	// bne 0x82af62dc
	if (!ctx.cr0.eq) goto loc_82AF62DC;
	// b 0x82af67a8
	goto loc_82AF67A8;
loc_82AF6630:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r9,r30,r22
	ctx.r9.u64 = ctx.r30.u64 + ctx.r22.u64;
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stb r29,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r29.u8);
	// lwz r10,-31264(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r9.u32);
	// stw r8,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// stw r7,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r7.u32);
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r6,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r6.u32);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r5,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r5.u32);
	// lwz r28,332(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AF6690;
	sub_8240A888(ctx, base);
	// lwz r10,656(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 656);
	// addi r3,r28,656
	ctx.r3.s64 = ctx.r28.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF66B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r8,r23,r30
	ctx.r8.u64 = ctx.r23.u64 + ctx.r30.u64;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stb r31,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwzx r10,r23,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	// stb r29,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r29.u8);
	// stb r29,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r29.u8);
	// lwz r11,-31264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lwz r28,332(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AF670C;
	sub_8240A888(ctx, base);
	// lwz r11,656(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 656);
	// addi r3,r28,656
	ctx.r3.s64 = ctx.r28.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF6730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// stb r31,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r31.u8);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// stw r7,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r6.u32);
	// stw r5,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r5.u32);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// stb r29,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r29.u8);
	// stb r29,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r29.u8);
	// lwz r11,-31264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// lwz r28,332(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AF6784;
	sub_8240A888(ctx, base);
	// lwz r10,656(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 656);
	// addi r3,r28,656
	ctx.r3.s64 = ctx.r28.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF67A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF67A8:
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82af62c4
	if (!ctx.cr0.eq) goto loc_82AF62C4;
loc_82AF67B8:
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82af67ec
	if (ctx.cr6.eq) goto loc_82AF67EC;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af67d8
	if (!ctx.cr6.eq) goto loc_82AF67D8;
	// bl 0x822900a0
	ctx.lr = 0x82AF67D4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AF67D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF67EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF67EC:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82af681c
	if (ctx.cr6.eq) goto loc_82AF681C;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af6808
	if (!ctx.cr6.eq) goto loc_82AF6808;
	// bl 0x822900a0
	ctx.lr = 0x82AF6804;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AF6808:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF681C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF681C:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6824"))) PPC_WEAK_FUNC(sub_82AF6824);
PPC_FUNC_IMPL(__imp__sub_82AF6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6828"))) PPC_WEAK_FUNC(sub_82AF6828);
PPC_FUNC_IMPL(__imp__sub_82AF6828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AF6830;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AF6864;
	sub_8232D180(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AF687C;
	sub_8232D180(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x82af6afc
	if (!ctx.cr6.gt) goto loc_82AF6AFC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f12,1328(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1328);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f13,-26236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26236);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmadds f31,f12,f0,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82294ac0
	ctx.lr = 0x82AF68B4;
	sub_82294AC0(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82AF68CC;
	sub_82294AC0(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x82af6a44
	if (!ctx.cr6.gt) goto loc_82AF6A44;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// lfs f10,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
loc_82AF68EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// lfs f12,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// fsubs f12,f11,f9
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f4,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmuls f6,f13,f13
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f7,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f7.f64 = double(temp.f32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// fmadds f3,f12,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fsubs f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r5,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// fsqrts f11,f3
	ctx.f11.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f3,f9,f13
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f12,f1,f3
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsubs f9,f2,f1
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fmsubs f6,f3,f0,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f9,f31
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f13,f6,f31
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fadds f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f3,f12,f7
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fadds f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r8,-4(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4, ctx.r8.u32);
	// stw r11,-12(r7)
	PPC_STORE_U32(ctx.r7.u32 + -12, ctx.r11.u32);
	// stw r5,-8(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// lfs f1,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f5,f1,f12
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r7,-12(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12, ctx.r7.u32);
	// stw r6,-8(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8, ctx.r6.u32);
	// stw r5,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r5.u32);
	// bne 0x82af68ec
	if (!ctx.cr0.eq) goto loc_82AF68EC;
loc_82AF6A44:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// lfs f7,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r9,-8(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8, ctx.r9.u32);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r6,-12(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12, ctx.r6.u32);
	// stw r7,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f5,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fsubs f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f4,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// stw r4,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r4.u32);
	// stw r3,-8(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8, ctx.r3.u32);
	// stw r5,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r5.u32);
loc_82AF6AFC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6B08"))) PPC_WEAK_FUNC(sub_82AF6B08);
PPC_FUNC_IMPL(__imp__sub_82AF6B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82AF6B10;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af6e64
	if (ctx.cr6.eq) goto loc_82AF6E64;
	// bl 0x829b53f8
	ctx.lr = 0x82AF6B34;
	sub_829B53F8(ctx, base);
	// lwz r24,504(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// lwz r11,52(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af6b58
	if (ctx.cr6.eq) goto loc_82AF6B58;
loc_82AF6B44:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af6b68
	if (ctx.cr6.eq) goto loc_82AF6B68;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af6b44
	if (!ctx.cr6.eq) goto loc_82AF6B44;
loc_82AF6B58:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af6e64
	if (ctx.cr6.eq) goto loc_82AF6E64;
loc_82AF6B68:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x823d3da0
	ctx.lr = 0x82AF6B78;
	sub_823D3DA0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f10,1324(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1324);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lfs f9,1328(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1328);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f8,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lwz r26,1136(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1136);
	// lfs f13,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f13.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f12,17480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17480);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lfs f11,-26236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26236);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f5,f10,f13,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f6,f9,f13,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f10,f11
	ctx.f31.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f7,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f10,f13,f5
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f9,f11,f5
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmsubs f5,f12,f0,f3
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f3.f64));
	// fsubs f3,f13,f2
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fmuls f0,f5,f6
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f13,f3,f6
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmuls f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fadds f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fadds f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fsubs f2,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fsubs f3,f8,f13
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f12,f6,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f7,f6,f1
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f8,f5,f10
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f6,f5,f10
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f13,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f4,f3,f1
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x82af6df0
	if (!ctx.cr6.gt) goto loc_82AF6DF0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82AF6C7C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82af6e50
	if (!ctx.cr6.eq) goto loc_82AF6E50;
	// lwz r11,1132(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1132);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82af6dd8
	if (ctx.cr6.eq) goto loc_82AF6DD8;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af6dd8
	if (!ctx.cr6.eq) goto loc_82AF6DD8;
	// bl 0x829ba1c8
	ctx.lr = 0x82AF6CA8;
	sub_829BA1C8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af6cc8
	if (ctx.cr6.eq) goto loc_82AF6CC8;
loc_82AF6CB4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af6cd8
	if (ctx.cr6.eq) goto loc_82AF6CD8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af6cb4
	if (!ctx.cr6.eq) goto loc_82AF6CB4;
loc_82AF6CC8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af6d44
	if (ctx.cr6.eq) goto loc_82AF6D44;
loc_82AF6CD8:
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f13,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fadds f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f2,f4,f4
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f1,f9,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f0,f5,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// blt cr6,0x82af6d24
	if (ctx.cr6.lt) goto loc_82AF6D24;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82AF6D24:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af6e78
	ctx.lr = 0x82AF6D3C;
	sub_82AF6E78(ctx, base);
	// and r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 & ctx.r29.u64;
	// b 0x82af6dd8
	goto loc_82AF6DD8;
loc_82AF6D44:
	// bl 0x829817f8
	ctx.lr = 0x82AF6D48;
	sub_829817F8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af6d68
	if (ctx.cr6.eq) goto loc_82AF6D68;
loc_82AF6D54:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af6d78
	if (ctx.cr6.eq) goto loc_82AF6D78;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af6d54
	if (!ctx.cr6.eq) goto loc_82AF6D54;
loc_82AF6D68:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af6dd8
	if (ctx.cr6.eq) goto loc_82AF6DD8;
loc_82AF6D78:
	// lfs f0,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f7,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f1,660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fadds f5,f1,f31
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f3,f5,f5
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f2,f9,f9,f4
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f0,f6,f6,f2
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// blt cr6,0x82af6dcc
	if (ctx.cr6.lt) goto loc_82AF6DCC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AF6DCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af7128
	ctx.lr = 0x82AF6DD4;
	sub_82AF7128(ctx, base);
	// and r29,r3,r31
	ctx.r29.u64 = ctx.r3.u64 & ctx.r31.u64;
loc_82AF6DD8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82af6c7c
	if (ctx.cr6.lt) goto loc_82AF6C7C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82af6e50
	if (!ctx.cr6.eq) goto loc_82AF6E50;
loc_82AF6DF0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r11.u32);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r8,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r8.u32);
	// lwz r7,8(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r7,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r7.u32);
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r6,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r6.u32);
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r4,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r4.u32);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stw r11,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r11.u32);
	// lwz r11,-31264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// lwz r10,956(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 956);
	// lwz r4,304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF6E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// oris r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 131072;
	// stw r8,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r8.u32);
loc_82AF6E50:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82AF6E64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6E74"))) PPC_WEAK_FUNC(sub_82AF6E74);
PPC_FUNC_IMPL(__imp__sub_82AF6E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6E78"))) PPC_WEAK_FUNC(sub_82AF6E78);
PPC_FUNC_IMPL(__imp__sub_82AF6E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AF6E80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82af7470
	ctx.lr = 0x82AF6E9C;
	sub_82AF7470(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af6ef0
	if (!ctx.cr6.eq) goto loc_82AF6EF0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af7470
	ctx.lr = 0x82AF6EB4;
	sub_82AF7470(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af6ef0
	if (!ctx.cr6.eq) goto loc_82AF6EF0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af7470
	ctx.lr = 0x82AF6ECC;
	sub_82AF7470(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af6ef0
	if (!ctx.cr6.eq) goto loc_82AF6EF0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af7470
	ctx.lr = 0x82AF6EE4;
	sub_82AF7470(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82af6ef4
	if (ctx.cr6.eq) goto loc_82AF6EF4;
loc_82AF6EF0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82AF6EF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6EFC"))) PPC_WEAK_FUNC(sub_82AF6EFC);
PPC_FUNC_IMPL(__imp__sub_82AF6EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6F00"))) PPC_WEAK_FUNC(sub_82AF6F00);
PPC_FUNC_IMPL(__imp__sub_82AF6F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AF6F08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// ble cr6,0x82af6f6c
	if (!ctx.cr6.gt) goto loc_82AF6F6C;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r31,12
	ctx.r31.s64 = 12;
loc_82AF6F28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r5,-12
	ctx.r4.s64 = ctx.r5.s64 + -12;
	// bl 0x82af7470
	ctx.lr = 0x82AF6F3C;
	sub_82AF7470(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af6f60
	if (!ctx.cr6.eq) goto loc_82AF6F60;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82af6f28
	if (ctx.cr6.lt) goto loc_82AF6F28;
loc_82AF6F54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82AF6F60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82AF6F6C:
	// bne cr6,0x82af6f54
	if (!ctx.cr6.eq) goto loc_82AF6F54;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82af7028
	ctx.lr = 0x82AF6F7C;
	sub_82AF7028(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6F84"))) PPC_WEAK_FUNC(sub_82AF6F84);
PPC_FUNC_IMPL(__imp__sub_82AF6F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6F88"))) PPC_WEAK_FUNC(sub_82AF6F88);
PPC_FUNC_IMPL(__imp__sub_82AF6F88) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82af6fb8
	if (ctx.cr6.gt) goto loc_82AF6FB8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82AF6FB8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82af6ff0
	if (!ctx.cr6.gt) goto loc_82AF6FF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af6f00
	ctx.lr = 0x82AF6FC8;
	sub_82AF6F00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af6fe8
	if (!ctx.cr6.eq) goto loc_82AF6FE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af6f00
	ctx.lr = 0x82AF6FDC;
	sub_82AF6F00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82af700c
	if (ctx.cr6.eq) goto loc_82AF700C;
loc_82AF6FE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82af700c
	goto loc_82AF700C;
loc_82AF6FF0:
	// bne cr6,0x82af7008
	if (!ctx.cr6.eq) goto loc_82AF7008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82af7470
	ctx.lr = 0x82AF7004;
	sub_82AF7470(ctx, base);
	// b 0x82af700c
	goto loc_82AF700C;
loc_82AF7008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AF700C:
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

__attribute__((alias("__imp__sub_82AF7024"))) PPC_WEAK_FUNC(sub_82AF7024);
PPC_FUNC_IMPL(__imp__sub_82AF7024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF7028"))) PPC_WEAK_FUNC(sub_82AF7028);
PPC_FUNC_IMPL(__imp__sub_82AF7028) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// bl 0x82cb1160
	ctx.lr = 0x82AF7058;
	sub_82CB1160(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,-18108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82485a40
	ctx.lr = 0x82AF7068;
	sub_82485A40(ctx, base);
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f10,f3
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// lfs f0,1324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-18200(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18200);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f6,f5,f7
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f3,f2,f4,f6
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f6.f64));
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f2,f10,f4,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmadds f13,f11,f1,f3
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f3.f64));
	// fmadds f11,f8,f1,f2
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x82af7108
	if (!ctx.cr6.gt) goto loc_82AF7108;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f10,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82af7108
	if (!ctx.cr6.lt) goto loc_82AF7108;
	// lfs f0,1328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82af7108
	if (!ctx.cr6.gt) goto loc_82AF7108;
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x82af710c
	if (ctx.cr6.lt) goto loc_82AF710C;
loc_82AF7108:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AF710C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82AF7124"))) PPC_WEAK_FUNC(sub_82AF7124);
PPC_FUNC_IMPL(__imp__sub_82AF7124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF7128"))) PPC_WEAK_FUNC(sub_82AF7128);
PPC_FUNC_IMPL(__imp__sub_82AF7128) {
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
	// bl 0x82cb6adc
	ctx.lr = 0x82AF7140;
	__savefpr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823d7698
	ctx.lr = 0x82AF715C;
	sub_823D7698(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f27,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f12,f26,f0
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// lfs f28,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmsubs f29,f28,f0,f13
	ctx.f29.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fsubs f31,f27,f12
	ctx.f31.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// fsubs f30,f12,f28
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// bl 0x82af7028
	ctx.lr = 0x82AF7194;
	sub_82AF7028(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af71a4
	if (ctx.cr6.eq) goto loc_82AF71A4;
loc_82AF719C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82af744c
	goto loc_82AF744C;
loc_82AF71A4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,1328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// lfs f9,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// lfs f12,1324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	ctx.f12.f64 = double(temp.f32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// fmuls f31,f31,f8
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// fmuls f30,f30,f8
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f29,f29,f8
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fmuls f28,f28,f6
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// fmuls f26,f6,f26
	ctx.f26.f64 = double(float(ctx.f6.f64 * ctx.f26.f64));
	// fmuls f27,f27,f6
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f6.f64));
	// fsubs f3,f11,f31
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fsubs f2,f10,f30
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// fsubs f0,f9,f29
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f29.f64));
	// fsubs f12,f5,f30
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f30.f64));
	// fsubs f13,f7,f31
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// fsubs f11,f4,f29
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f29.f64));
	// fsubs f10,f3,f28
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f9,f2,f27
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f27.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f8,f0,f26
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f6,f12,f27
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f7,f13,f28
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f5,f11,f26
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f26.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82af7868
	ctx.lr = 0x82AF7248;
	sub_82AF7868(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af719c
	if (!ctx.cr6.eq) goto loc_82AF719C;
	// lfs f13,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// lfs f0,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fadds f8,f11,f30
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// fadds f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// fadds f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// fadds f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// fadds f0,f10,f28
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f8,f27
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f27.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fsubs f2,f12,f26
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fadds f6,f9,f29
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fsubs f11,f5,f28
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f28.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f10,f3,f27
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f27.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fadds f12,f6,f26
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f26.f64));
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x82af7868
	ctx.lr = 0x82AF72F0;
	sub_82AF7868(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af719c
	if (!ctx.cr6.eq) goto loc_82AF719C;
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// lfs f9,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// fadds f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fadds f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// fsubs f6,f9,f30
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f30.f64));
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// fsubs f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fsubs f5,f7,f29
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f29.f64));
	// fadds f2,f12,f28
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f10,f26
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f26.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f12,f6,f27
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f27.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// fadds f13,f8,f28
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f11,f5,f26
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f26.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fadds f10,f3,f27
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f27.f64));
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x82af7868
	ctx.lr = 0x82AF7398;
	sub_82AF7868(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af719c
	if (!ctx.cr6.eq) goto loc_82AF719C;
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// lfs f11,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fadds f8,f11,f29
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// fsubs f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fsubs f4,f7,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f30.f64));
	// fsubs f3,f5,f29
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f29.f64));
	// fsubs f2,f12,f28
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f0,f10,f27
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f13,f8,f26
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f26.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f12,f6,f28
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f28.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f11,f4,f27
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f27.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f10,f3,f26
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f26.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x82af7868
	ctx.lr = 0x82AF7440;
	sub_82AF7868(ctx, base);
	// cntlzw r5,r3
	ctx.r5.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 ^ 1;
loc_82AF744C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b28
	ctx.lr = 0x82AF7458;
	__restfpr_25(ctx, base);
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

__attribute__((alias("__imp__sub_82AF746C"))) PPC_WEAK_FUNC(sub_82AF746C);
PPC_FUNC_IMPL(__imp__sub_82AF746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF7470"))) PPC_WEAK_FUNC(sub_82AF7470);
PPC_FUNC_IMPL(__imp__sub_82AF7470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AF7478;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ae0
	ctx.lr = 0x82AF7480;
	__savefpr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823d7698
	ctx.lr = 0x82AF749C;
	sub_823D7698(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f12,1328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f11,1324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f9,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,-28844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28844);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r31,244
	ctx.r9.s64 = ctx.r31.s64 + 244;
	// fmuls f3,f12,f13
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f2,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// fmsubs f6,f4,f0,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f6.f64));
	// fsubs f0,f8,f5
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fsubs f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmuls f31,f4,f1
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f30,f8,f1
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f29,f1,f7
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f28,f6,f3
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f27,f0,f3
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f26,f5,f3
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fsubs f4,f2,f28
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f28.f64));
	// fsubs f1,f13,f27
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// fsubs f3,f10,f27
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fsubs f2,f9,f26
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f26.f64));
	// fsubs f0,f12,f26
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// fsubs f13,f11,f28
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f28.f64));
	// fsubs f12,f4,f29
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f29.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f9,f1,f31
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f11,f3,f31
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f10,f2,f30
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f30.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f8,f0,f30
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f7,f13,f29
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82af77a0
	ctx.lr = 0x82AF7570;
	sub_82AF77A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af758c
	if (ctx.cr6.eq) goto loc_82AF758C;
loc_82AF7578:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b2c
	ctx.lr = 0x82AF7588;
	__restfpr_26(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82AF758C:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fadds f10,f13,f27
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fadds f8,f11,f26
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f26.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fadds f5,f7,f27
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f27.f64));
	// fadds f3,f4,f26
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f26.f64));
	// fsubs f2,f12,f29
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f1,f10,f31
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f8,f30
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fadds f6,f9,f28
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fsubs f12,f5,f31
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f31.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f11,f3,f30
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f30.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fadds f13,f6,f29
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// lwz r28,132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82af77a0
	ctx.lr = 0x82AF7630;
	sub_82AF77A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af7578
	if (!ctx.cr6.eq) goto loc_82AF7578;
	// lfs f13,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f27,f0
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fsubs f6,f9,f26
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f26.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// fadds f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fsubs f5,f7,f28
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f28.f64));
	// fadds f2,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f8,f11,f27
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f27.f64));
	// fadds f13,f6,f30
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f3,f4,f26
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f26.f64));
	// fadds f1,f10,f29
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// fadds f12,f5,f29
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f29.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fadds f0,f8,f31
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f11,f3,f30
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f30.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x82af77a0
	ctx.lr = 0x82AF76D8;
	sub_82AF77A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af7578
	if (!ctx.cr6.eq) goto loc_82AF7578;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fadds f10,f13,f26
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadds f8,f11,f28
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// fsubs f6,f9,f27
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f27.f64));
	// fsubs f4,f7,f26
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f26.f64));
	// fsubs f2,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f0,f8,f29
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f29.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f3,f5,f28
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f28.f64));
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fsubs f13,f6,f31
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f12,f4,f30
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f30.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fsubs f11,f3,f29
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f29.f64));
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x82af77a0
	ctx.lr = 0x82AF7780;
	sub_82AF77A0(ctx, base);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r3,r5,1
	ctx.r3.u64 = ctx.r5.u64 ^ 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b2c
	ctx.lr = 0x82AF7798;
	__restfpr_26(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF779C"))) PPC_WEAK_FUNC(sub_82AF779C);
PPC_FUNC_IMPL(__imp__sub_82AF779C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF77A0"))) PPC_WEAK_FUNC(sub_82AF77A0);
PPC_FUNC_IMPL(__imp__sub_82AF77A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fsubs f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// lfs f0,-18284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18284);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f12,f10,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f11,f1,f6
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmsubs f13,f1,f2,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 - ctx.f13.f64));
	// fmsubs f10,f2,f4,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 - ctx.f12.f64));
	// fmsubs f11,f9,f4,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 - ctx.f11.f64));
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82af781c
	if (!ctx.cr6.lt) goto loc_82AF781C;
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82AF781C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f12,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82af785c
	if (ctx.cr6.lt) goto loc_82AF785C;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82af785c
	if (ctx.cr6.gt) goto loc_82AF785C;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82af785c
	if (ctx.cr6.lt) goto loc_82AF785C;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82AF785C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF7864"))) PPC_WEAK_FUNC(sub_82AF7864);
PPC_FUNC_IMPL(__imp__sub_82AF7864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF7868"))) PPC_WEAK_FUNC(sub_82AF7868);
PPC_FUNC_IMPL(__imp__sub_82AF7868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f2,f2,f10
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f8,f12
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f11,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f7,f7
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f6,f5,f5,f10
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fsqrts f10,f6
	ctx.f10.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f6,f0,f5
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f5,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmadds f3,f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f0,f2,f5,f3
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82af78e4
	if (!ctx.cr6.lt) goto loc_82AF78E4;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x82af78f0
	goto loc_82AF78F0;
loc_82AF78E4:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82af78f0
	if (ctx.cr6.lt) goto loc_82AF78F0;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82AF78F0:
	// fmuls f11,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f1,f1
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fadds f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fsubs f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f3,f9,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmuls f2,f4,f4
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f1,f3,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f7
	ctx.cr6.compare(ctx.f1.f64, ctx.f7.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF7928"))) PPC_WEAK_FUNC(sub_82AF7928);
PPC_FUNC_IMPL(__imp__sub_82AF7928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x82af7980
	if (!ctx.cr6.gt) goto loc_82AF7980;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r9,12
	ctx.r4.s64 = ctx.r9.s64 + 12;
loc_82AF7958:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82af7868
	ctx.lr = 0x82AF7964;
	sub_82AF7868(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af7998
	if (!ctx.cr6.eq) goto loc_82AF7998;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82af7958
	if (ctx.cr6.lt) goto loc_82AF7958;
loc_82AF7980:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AF7998:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF79B0"))) PPC_WEAK_FUNC(sub_82AF79B0);
PPC_FUNC_IMPL(__imp__sub_82AF79B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AF79B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,1372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1372);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF79E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,356(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 356);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AF79F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af7a1c
	if (!ctx.cr6.eq) goto loc_82AF7A1C;
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82af7a1c
	if (!ctx.cr6.gt) goto loc_82AF7A1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF7A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF7A1C:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a02eb8
	ctx.lr = 0x82AF7A38;
	sub_82A02EB8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF7A4C"))) PPC_WEAK_FUNC(sub_82AF7A4C);
PPC_FUNC_IMPL(__imp__sub_82AF7A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF7A50"))) PPC_WEAK_FUNC(sub_82AF7A50);
PPC_FUNC_IMPL(__imp__sub_82AF7A50) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82af7a88
	if (ctx.cr6.gt) goto loc_82AF7A88;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82af7a90
	goto loc_82AF7A90;
loc_82AF7A88:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AF7A90:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82AF7A98;
	sub_8258A128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af7ae8
	if (ctx.cr6.eq) goto loc_82AF7AE8;
	// lwz r11,776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af7ae8
	if (!ctx.cr6.eq) goto loc_82AF7AE8;
	// lwz r11,1104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82af7ae8
	if (!ctx.cr6.gt) goto loc_82AF7AE8;
loc_82AF7AC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1496);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF7AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1104(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82af7ac0
	if (ctx.cr6.lt) goto loc_82AF7AC0;
loc_82AF7AE8:
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

__attribute__((alias("__imp__sub_82AF7B00"))) PPC_WEAK_FUNC(sub_82AF7B00);
PPC_FUNC_IMPL(__imp__sub_82AF7B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82AF7B08;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82af7b40
	if (ctx.cr6.gt) goto loc_82AF7B40;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82af7b48
	goto loc_82AF7B48;
loc_82AF7B40:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AF7B48:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82AF7B50;
	sub_8258A128(ctx, base);
	// lwz r11,1100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82af7e48
	if (ctx.cr6.eq) goto loc_82AF7E48;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,124(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,-16456(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16456);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82af7e48
	if (!ctx.cr6.gt) goto loc_82AF7E48;
	// lwz r29,2084(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2084);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82af7e48
	if (ctx.cr6.eq) goto loc_82AF7E48;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r5,104(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 104);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// bl 0x825e79a0
	ctx.lr = 0x82AF7B98;
	sub_825E79A0(ctx, base);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,17920(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17920);
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// lfs f9,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,17956
	ctx.r11.s64 = ctx.r11.s64 + 17956;
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// fsubs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// bne cr6,0x82af7c0c
	if (!ctx.cr6.eq) goto loc_82AF7C0C;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,17920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17920, ctx.r10.u32);
loc_82AF7C0C:
	// fmuls f7,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfd f11,-18352(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// lfs f31,-18108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18108);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f5,f0,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsqrt f4,f5
	ctx.f4.f64 = sqrt(ctx.f5.f64);
	// fdiv f3,f11,f4
	ctx.f3.f64 = ctx.f11.f64 / ctx.f4.f64;
	// fcmpu cr6,f5,f31
	ctx.cr6.compare(ctx.f5.f64, ctx.f31.f64);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// ble cr6,0x82af7c58
	if (!ctx.cr6.gt) goto loc_82AF7C58;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
loc_82AF7C58:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,16384
	ctx.r6.s64 = 16384;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r30,r10,31796
	ctx.r30.s64 = ctx.r10.s64 + 31796;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfs f1,1296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fadds f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f4,f9
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82ae5228
	ctx.lr = 0x82AF7CEC;
	sub_82AE5228(ctx, base);
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82382590
	ctx.lr = 0x82AF7D00;
	sub_82382590(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82af7e48
	if (ctx.cr6.eq) goto loc_82AF7E48;
	// bl 0x82cb2308
	ctx.lr = 0x82AF7D0C;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82cb2308
	ctx.lr = 0x82AF7D3C;
	sub_82CB2308(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// bl 0x823d3da0
	ctx.lr = 0x82AF7D84;
	sub_823D3DA0(ctx, base);
	// lfs f0,752(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82cb2308
	ctx.lr = 0x82AF7DB0;
	sub_82CB2308(ctx, base);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lfs f0,4732(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4732);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lfs f13,-18116(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -18116);
	ctx.f13.f64 = double(temp.f32);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// rldicr r7,r5,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f4,f5,f0,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f0.f64));
	// fmuls f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// stfs f2,124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fmuls f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8247b9c8
	ctx.lr = 0x82AF7E24;
	sub_8247B9C8(ctx, base);
	// ld r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 96);
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// bl 0x825e5ed0
	ctx.lr = 0x82AF7E30;
	sub_825E5ED0(ctx, base);
	// bl 0x826d8598
	ctx.lr = 0x82AF7E34;
	sub_826D8598(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af7e48
	if (ctx.cr6.eq) goto loc_82AF7E48;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,124(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,124(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 124, temp.u32);
loc_82AF7E48:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF7E58"))) PPC_WEAK_FUNC(sub_82AF7E58);
PPC_FUNC_IMPL(__imp__sub_82AF7E58) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF7E68"))) PPC_WEAK_FUNC(sub_82AF7E68);
PPC_FUNC_IMPL(__imp__sub_82AF7E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF7E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-2980(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2980);
	// bl 0x8229e490
	ctx.lr = 0x82AF7EB8;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,228(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AF7ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF7EDC"))) PPC_WEAK_FUNC(sub_82AF7EDC);
PPC_FUNC_IMPL(__imp__sub_82AF7EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF7EE0"))) PPC_WEAK_FUNC(sub_82AF7EE0);
PPC_FUNC_IMPL(__imp__sub_82AF7EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF7EE4"))) PPC_WEAK_FUNC(sub_82AF7EE4);
PPC_FUNC_IMPL(__imp__sub_82AF7EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF7EE8"))) PPC_WEAK_FUNC(sub_82AF7EE8);
PPC_FUNC_IMPL(__imp__sub_82AF7EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF7EF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-3548(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3548);
	// bl 0x8229e490
	ctx.lr = 0x82AF7F18;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF7F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF7F3C"))) PPC_WEAK_FUNC(sub_82AF7F3C);
PPC_FUNC_IMPL(__imp__sub_82AF7F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF7F40"))) PPC_WEAK_FUNC(sub_82AF7F40);
PPC_FUNC_IMPL(__imp__sub_82AF7F40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF7F44"))) PPC_WEAK_FUNC(sub_82AF7F44);
PPC_FUNC_IMPL(__imp__sub_82AF7F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF7F48"))) PPC_WEAK_FUNC(sub_82AF7F48);
PPC_FUNC_IMPL(__imp__sub_82AF7F48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-10032
	ctx.r7.s64 = ctx.r9.s64 + -10032;
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

__attribute__((alias("__imp__sub_82AF7F78"))) PPC_WEAK_FUNC(sub_82AF7F78);
PPC_FUNC_IMPL(__imp__sub_82AF7F78) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF7F80"))) PPC_WEAK_FUNC(sub_82AF7F80);
PPC_FUNC_IMPL(__imp__sub_82AF7F80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-10032
	ctx.r7.s64 = ctx.r9.s64 + -10032;
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

__attribute__((alias("__imp__sub_82AF7FA8"))) PPC_WEAK_FUNC(sub_82AF7FA8);
PPC_FUNC_IMPL(__imp__sub_82AF7FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-11560
	ctx.r7.s64 = ctx.r9.s64 + -11560;
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

__attribute__((alias("__imp__sub_82AF7FD0"))) PPC_WEAK_FUNC(sub_82AF7FD0);
PPC_FUNC_IMPL(__imp__sub_82AF7FD0) {
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
	// bl 0x82af8040
	ctx.lr = 0x82AF7FF0;
	sub_82AF8040(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af8024
	if (ctx.cr6.eq) goto loc_82AF8024;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af801c
	if (ctx.cr6.lt) goto loc_82AF801C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af8024
	if (!ctx.cr6.gt) goto loc_82AF8024;
loc_82AF801C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AF8024;
	sub_82294A58(ctx, base);
loc_82AF8024:
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

__attribute__((alias("__imp__sub_82AF8040"))) PPC_WEAK_FUNC(sub_82AF8040);
PPC_FUNC_IMPL(__imp__sub_82AF8040) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-11560
	ctx.r10.s64 = ctx.r11.s64 + -11560;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF8064;
	sub_8229C068(ctx, base);
	// addi r3,r31,1860
	ctx.r3.s64 = ctx.r31.s64 + 1860;
	// bl 0x823832f8
	ctx.lr = 0x82AF806C;
	sub_823832F8(ctx, base);
	// addi r3,r31,1788
	ctx.r3.s64 = ctx.r31.s64 + 1788;
	// bl 0x826dd580
	ctx.lr = 0x82AF8074;
	sub_826DD580(ctx, base);
	// addi r3,r31,1772
	ctx.r3.s64 = ctx.r31.s64 + 1772;
	// bl 0x823721d0
	ctx.lr = 0x82AF807C;
	sub_823721D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82976c68
	ctx.lr = 0x82AF8084;
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

__attribute__((alias("__imp__sub_82AF8098"))) PPC_WEAK_FUNC(sub_82AF8098);
PPC_FUNC_IMPL(__imp__sub_82AF8098) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-10032
	ctx.r10.s64 = ctx.r11.s64 + -10032;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF80C4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8040
	ctx.lr = 0x82AF80CC;
	sub_82AF8040(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af8100
	if (ctx.cr6.eq) goto loc_82AF8100;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af80f8
	if (ctx.cr6.lt) goto loc_82AF80F8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af8100
	if (!ctx.cr6.gt) goto loc_82AF8100;
loc_82AF80F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AF8100;
	sub_82294A58(ctx, base);
loc_82AF8100:
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

__attribute__((alias("__imp__sub_82AF811C"))) PPC_WEAK_FUNC(sub_82AF811C);
PPC_FUNC_IMPL(__imp__sub_82AF811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8120"))) PPC_WEAK_FUNC(sub_82AF8120);
PPC_FUNC_IMPL(__imp__sub_82AF8120) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-10032
	ctx.r10.s64 = ctx.r11.s64 + -10032;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF8144;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8040
	ctx.lr = 0x82AF814C;
	sub_82AF8040(ctx, base);
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

__attribute__((alias("__imp__sub_82AF8160"))) PPC_WEAK_FUNC(sub_82AF8160);
PPC_FUNC_IMPL(__imp__sub_82AF8160) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-8504
	ctx.r7.s64 = ctx.r9.s64 + -8504;
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

__attribute__((alias("__imp__sub_82AF8190"))) PPC_WEAK_FUNC(sub_82AF8190);
PPC_FUNC_IMPL(__imp__sub_82AF8190) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8198"))) PPC_WEAK_FUNC(sub_82AF8198);
PPC_FUNC_IMPL(__imp__sub_82AF8198) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-8504
	ctx.r7.s64 = ctx.r9.s64 + -8504;
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

__attribute__((alias("__imp__sub_82AF81C0"))) PPC_WEAK_FUNC(sub_82AF81C0);
PPC_FUNC_IMPL(__imp__sub_82AF81C0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-8504
	ctx.r10.s64 = ctx.r11.s64 + -8504;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF81EC;
	sub_8229C068(ctx, base);
	// addi r3,r31,1888
	ctx.r3.s64 = ctx.r31.s64 + 1888;
	// bl 0x822c58f0
	ctx.lr = 0x82AF81F4;
	sub_822C58F0(ctx, base);
	// addi r3,r31,1876
	ctx.r3.s64 = ctx.r31.s64 + 1876;
	// bl 0x82af82b8
	ctx.lr = 0x82AF81FC;
	sub_82AF82B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8040
	ctx.lr = 0x82AF8204;
	sub_82AF8040(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af8238
	if (ctx.cr6.eq) goto loc_82AF8238;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af8230
	if (ctx.cr6.lt) goto loc_82AF8230;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af8238
	if (!ctx.cr6.gt) goto loc_82AF8238;
loc_82AF8230:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AF8238;
	sub_82294A58(ctx, base);
loc_82AF8238:
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

__attribute__((alias("__imp__sub_82AF8254"))) PPC_WEAK_FUNC(sub_82AF8254);
PPC_FUNC_IMPL(__imp__sub_82AF8254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8258"))) PPC_WEAK_FUNC(sub_82AF8258);
PPC_FUNC_IMPL(__imp__sub_82AF8258) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-8504
	ctx.r10.s64 = ctx.r11.s64 + -8504;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF827C;
	sub_8229C068(ctx, base);
	// addi r3,r31,1888
	ctx.r3.s64 = ctx.r31.s64 + 1888;
	// bl 0x822c58f0
	ctx.lr = 0x82AF8284;
	sub_822C58F0(ctx, base);
	// addi r3,r31,1876
	ctx.r3.s64 = ctx.r31.s64 + 1876;
	// bl 0x82af82b8
	ctx.lr = 0x82AF828C;
	sub_82AF82B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8040
	ctx.lr = 0x82AF8294;
	sub_82AF8040(ctx, base);
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

__attribute__((alias("__imp__sub_82AF82A8"))) PPC_WEAK_FUNC(sub_82AF82A8);
PPC_FUNC_IMPL(__imp__sub_82AF82A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF82AC"))) PPC_WEAK_FUNC(sub_82AF82AC);
PPC_FUNC_IMPL(__imp__sub_82AF82AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF82B0"))) PPC_WEAK_FUNC(sub_82AF82B0);
PPC_FUNC_IMPL(__imp__sub_82AF82B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF82B4"))) PPC_WEAK_FUNC(sub_82AF82B4);
PPC_FUNC_IMPL(__imp__sub_82AF82B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF82B8"))) PPC_WEAK_FUNC(sub_82AF82B8);
PPC_FUNC_IMPL(__imp__sub_82AF82B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF82C0;
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
	// beq cr6,0x82af8300
	if (ctx.cr6.eq) goto loc_82AF8300;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af82ec
	if (!ctx.cr6.eq) goto loc_82AF82EC;
	// bl 0x822900a0
	ctx.lr = 0x82AF82E8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AF82EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF8300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF8300:
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

__attribute__((alias("__imp__sub_82AF8318"))) PPC_WEAK_FUNC(sub_82AF8318);
PPC_FUNC_IMPL(__imp__sub_82AF8318) {
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

__attribute__((alias("__imp__sub_82AF8328"))) PPC_WEAK_FUNC(sub_82AF8328);
PPC_FUNC_IMPL(__imp__sub_82AF8328) {
	PPC_FUNC_PROLOGUE();
	// b 0x82af82b8
	sub_82AF82B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF832C"))) PPC_WEAK_FUNC(sub_82AF832C);
PPC_FUNC_IMPL(__imp__sub_82AF832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8330"))) PPC_WEAK_FUNC(sub_82AF8330);
PPC_FUNC_IMPL(__imp__sub_82AF8330) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-11560
	ctx.r7.s64 = ctx.r9.s64 + -11560;
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

__attribute__((alias("__imp__sub_82AF8360"))) PPC_WEAK_FUNC(sub_82AF8360);
PPC_FUNC_IMPL(__imp__sub_82AF8360) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8368"))) PPC_WEAK_FUNC(sub_82AF8368);
PPC_FUNC_IMPL(__imp__sub_82AF8368) {
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
	ctx.lr = 0x82AF8380;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af8404
	if (ctx.cr6.eq) goto loc_82AF8404;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-6980
	ctx.r11.s64 = ctx.r8.s64 + -6980;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-31192
	ctx.r6.s64 = ctx.r5.s64 + -31192;
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
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AF83F4;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AF8404:
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

__attribute__((alias("__imp__sub_82AF8418"))) PPC_WEAK_FUNC(sub_82AF8418);
PPC_FUNC_IMPL(__imp__sub_82AF8418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF8420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-30528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af844c
	if (!ctx.cr6.eq) goto loc_82AF844C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a42f8
	ctx.lr = 0x82AF8440;
	sub_824A42F8(ctx, base);
	// stw r3,-30528(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30528, ctx.r3.u32);
	// bl 0x824a43b8
	ctx.lr = 0x82AF8448;
	sub_824A43B8(ctx, base);
	// lwz r10,-30528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30528);
loc_82AF844C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af846c
	if (ctx.cr6.eq) goto loc_82AF846C;
	// bl 0x822d0b78
	ctx.lr = 0x82AF8460;
	sub_822D0B78(ctx, base);
	// lwz r11,-24084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24084);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82af8474
	goto loc_82AF8474;
loc_82AF846C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AF8474:
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
	// bne cr6,0x82af84a4
	if (!ctx.cr6.eq) goto loc_82AF84A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AF8494;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AF849C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24084);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AF84A4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af84d0
	if (!ctx.cr6.eq) goto loc_82AF84D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AF84C0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AF84C8;
	sub_82398640(ctx, base);
	// lwz r11,-24084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24084);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AF84D0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af8508
	if (ctx.cr6.eq) goto loc_82AF8508;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AF84EC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82af8508
	if (!ctx.cr6.eq) goto loc_82AF8508;
	// lwz r3,-24084(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24084);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF8508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF8508:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF8510"))) PPC_WEAK_FUNC(sub_82AF8510);
PPC_FUNC_IMPL(__imp__sub_82AF8510) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8518"))) PPC_WEAK_FUNC(sub_82AF8518);
PPC_FUNC_IMPL(__imp__sub_82AF8518) {
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
	// lwz r11,-30528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30528);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af855c
	if (!ctx.cr6.eq) goto loc_82AF855C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a42f8
	ctx.lr = 0x82AF8550;
	sub_824A42F8(ctx, base);
	// stw r3,-30528(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30528, ctx.r3.u32);
	// bl 0x824a43b8
	ctx.lr = 0x82AF8558;
	sub_824A43B8(ctx, base);
	// lwz r11,-30528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30528);
loc_82AF855C:
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

__attribute__((alias("__imp__sub_82AF8584"))) PPC_WEAK_FUNC(sub_82AF8584);
PPC_FUNC_IMPL(__imp__sub_82AF8584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8588"))) PPC_WEAK_FUNC(sub_82AF8588);
PPC_FUNC_IMPL(__imp__sub_82AF8588) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af8614
	if (ctx.cr6.eq) goto loc_82AF8614;
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af861c
	if (ctx.cr6.eq) goto loc_82AF861C;
	// lwz r10,1828(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1828);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82af85f8
	if (ctx.cr6.eq) goto loc_82AF85F8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,1828(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1828);
	// lwz r10,1796(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1796);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,-4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// lwz r6,192(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// rlwinm r5,r6,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82af85f8
	if (ctx.cr6.eq) goto loc_82AF85F8;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r9,1820(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1820);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82af85f8
	if (!ctx.cr6.eq) goto loc_82AF85F8;
	// lwz r11,1824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1824);
	// lwz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82af861c
	if (ctx.cr6.eq) goto loc_82AF861C;
loc_82AF85F8:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82af8614
	if (!ctx.cr6.eq) goto loc_82AF8614;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_82AF8614:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82AF861C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8624"))) PPC_WEAK_FUNC(sub_82AF8624);
PPC_FUNC_IMPL(__imp__sub_82AF8624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8628"))) PPC_WEAK_FUNC(sub_82AF8628);
PPC_FUNC_IMPL(__imp__sub_82AF8628) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-6912
	ctx.r8.s64 = ctx.r9.s64 + -6912;
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

__attribute__((alias("__imp__sub_82AF8650"))) PPC_WEAK_FUNC(sub_82AF8650);
PPC_FUNC_IMPL(__imp__sub_82AF8650) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8658"))) PPC_WEAK_FUNC(sub_82AF8658);
PPC_FUNC_IMPL(__imp__sub_82AF8658) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-6912
	ctx.r8.s64 = ctx.r9.s64 + -6912;
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

__attribute__((alias("__imp__sub_82AF8678"))) PPC_WEAK_FUNC(sub_82AF8678);
PPC_FUNC_IMPL(__imp__sub_82AF8678) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-6912
	ctx.r10.s64 = ctx.r11.s64 + -6912;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF86A4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82490920
	ctx.lr = 0x82AF86AC;
	sub_82490920(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af86e0
	if (ctx.cr6.eq) goto loc_82AF86E0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af86d8
	if (ctx.cr6.lt) goto loc_82AF86D8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af86e0
	if (!ctx.cr6.gt) goto loc_82AF86E0;
loc_82AF86D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AF86E0;
	sub_82294A58(ctx, base);
loc_82AF86E0:
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

__attribute__((alias("__imp__sub_82AF86FC"))) PPC_WEAK_FUNC(sub_82AF86FC);
PPC_FUNC_IMPL(__imp__sub_82AF86FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8700"))) PPC_WEAK_FUNC(sub_82AF8700);
PPC_FUNC_IMPL(__imp__sub_82AF8700) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-6912
	ctx.r10.s64 = ctx.r11.s64 + -6912;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF8724;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82490920
	ctx.lr = 0x82AF872C;
	sub_82490920(ctx, base);
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

__attribute__((alias("__imp__sub_82AF8740"))) PPC_WEAK_FUNC(sub_82AF8740);
PPC_FUNC_IMPL(__imp__sub_82AF8740) {
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
	ctx.lr = 0x82AF8758;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af87dc
	if (ctx.cr6.eq) goto loc_82AF87DC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-6540
	ctx.r11.s64 = ctx.r8.s64 + -6540;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-28864
	ctx.r6.s64 = ctx.r5.s64 + -28864;
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
	// li r5,992
	ctx.r5.s64 = 992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AF87CC;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AF87DC:
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

__attribute__((alias("__imp__sub_82AF87F0"))) PPC_WEAK_FUNC(sub_82AF87F0);
PPC_FUNC_IMPL(__imp__sub_82AF87F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF87F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-24268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af8824
	if (!ctx.cr6.eq) goto loc_82AF8824;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad7aa8
	ctx.lr = 0x82AF8818;
	sub_82AD7AA8(ctx, base);
	// stw r3,-24268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24268, ctx.r3.u32);
	// bl 0x82ad7b58
	ctx.lr = 0x82AF8820;
	sub_82AD7B58(ctx, base);
	// lwz r10,-24268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24268);
loc_82AF8824:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24080);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af8844
	if (ctx.cr6.eq) goto loc_82AF8844;
	// bl 0x829a0b50
	ctx.lr = 0x82AF8838;
	sub_829A0B50(ctx, base);
	// lwz r11,-24080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24080);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82af884c
	goto loc_82AF884C;
loc_82AF8844:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AF884C:
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
	// bne cr6,0x82af887c
	if (!ctx.cr6.eq) goto loc_82AF887C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AF886C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AF8874;
	sub_822AADA8(ctx, base);
	// lwz r11,-24080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24080);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AF887C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af88a8
	if (!ctx.cr6.eq) goto loc_82AF88A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AF8898;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AF88A0;
	sub_82398640(ctx, base);
	// lwz r11,-24080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24080);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AF88A8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af88e0
	if (ctx.cr6.eq) goto loc_82AF88E0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AF88C4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82af88e0
	if (!ctx.cr6.eq) goto loc_82AF88E0;
	// lwz r3,-24080(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24080);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF88E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF88E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF88E8"))) PPC_WEAK_FUNC(sub_82AF88E8);
PPC_FUNC_IMPL(__imp__sub_82AF88E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF88F0"))) PPC_WEAK_FUNC(sub_82AF88F0);
PPC_FUNC_IMPL(__imp__sub_82AF88F0) {
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
	// lwz r11,-24268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24268);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af8934
	if (!ctx.cr6.eq) goto loc_82AF8934;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad7aa8
	ctx.lr = 0x82AF8928;
	sub_82AD7AA8(ctx, base);
	// stw r3,-24268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24268, ctx.r3.u32);
	// bl 0x82ad7b58
	ctx.lr = 0x82AF8930;
	sub_82AD7B58(ctx, base);
	// lwz r11,-24268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24268);
loc_82AF8934:
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

__attribute__((alias("__imp__sub_82AF895C"))) PPC_WEAK_FUNC(sub_82AF895C);
PPC_FUNC_IMPL(__imp__sub_82AF895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8960"))) PPC_WEAK_FUNC(sub_82AF8960);
PPC_FUNC_IMPL(__imp__sub_82AF8960) {
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
	ctx.lr = 0x82AF8978;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af89fc
	if (ctx.cr6.eq) goto loc_82AF89FC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-6500
	ctx.r11.s64 = ctx.r8.s64 + -6500;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-29144
	ctx.r6.s64 = ctx.r5.s64 + -29144;
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
	// li r5,252
	ctx.r5.s64 = 252;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AF89EC;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AF89FC:
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

__attribute__((alias("__imp__sub_82AF8A10"))) PPC_WEAK_FUNC(sub_82AF8A10);
PPC_FUNC_IMPL(__imp__sub_82AF8A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF8A18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-29224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af8a44
	if (!ctx.cr6.eq) goto loc_82AF8A44;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825b9158
	ctx.lr = 0x82AF8A38;
	sub_825B9158(ctx, base);
	// stw r3,-29224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29224, ctx.r3.u32);
	// bl 0x825b9218
	ctx.lr = 0x82AF8A40;
	sub_825B9218(ctx, base);
	// lwz r10,-29224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
loc_82AF8A44:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24076(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24076);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af8a64
	if (ctx.cr6.eq) goto loc_82AF8A64;
	// bl 0x822f13c0
	ctx.lr = 0x82AF8A58;
	sub_822F13C0(ctx, base);
	// lwz r11,-24076(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24076);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82af8a6c
	goto loc_82AF8A6C;
loc_82AF8A64:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AF8A6C:
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
	// bne cr6,0x82af8a9c
	if (!ctx.cr6.eq) goto loc_82AF8A9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AF8A8C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AF8A94;
	sub_822AADA8(ctx, base);
	// lwz r11,-24076(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24076);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AF8A9C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af8ac8
	if (!ctx.cr6.eq) goto loc_82AF8AC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AF8AB8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AF8AC0;
	sub_82398640(ctx, base);
	// lwz r11,-24076(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24076);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AF8AC8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af8b00
	if (ctx.cr6.eq) goto loc_82AF8B00;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AF8AE4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82af8b00
	if (!ctx.cr6.eq) goto loc_82AF8B00;
	// lwz r3,-24076(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24076);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF8B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF8B00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF8B08"))) PPC_WEAK_FUNC(sub_82AF8B08);
PPC_FUNC_IMPL(__imp__sub_82AF8B08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8B10"))) PPC_WEAK_FUNC(sub_82AF8B10);
PPC_FUNC_IMPL(__imp__sub_82AF8B10) {
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
	// lwz r11,-29224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af8b54
	if (!ctx.cr6.eq) goto loc_82AF8B54;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825b9158
	ctx.lr = 0x82AF8B48;
	sub_825B9158(ctx, base);
	// stw r3,-29224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29224, ctx.r3.u32);
	// bl 0x825b9218
	ctx.lr = 0x82AF8B50;
	sub_825B9218(ctx, base);
	// lwz r11,-29224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
loc_82AF8B54:
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

__attribute__((alias("__imp__sub_82AF8B7C"))) PPC_WEAK_FUNC(sub_82AF8B7C);
PPC_FUNC_IMPL(__imp__sub_82AF8B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8B80"))) PPC_WEAK_FUNC(sub_82AF8B80);
PPC_FUNC_IMPL(__imp__sub_82AF8B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82AF8B88;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8248f228
	ctx.lr = 0x82AF8B9C;
	sub_8248F228(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af8c34
	if (ctx.cr6.eq) goto loc_82AF8C34;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82af8c34
	if (!ctx.cr6.gt) goto loc_82AF8C34;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82AF8BC4:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82af8d30
	ctx.lr = 0x82AF8BD0;
	sub_82AF8D30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af8c20
	if (ctx.cr6.eq) goto loc_82AF8C20;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82af8d30
	ctx.lr = 0x82AF8C14;
	sub_82AF8D30(ctx, base);
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82af8db0
	ctx.lr = 0x82AF8C20;
	sub_82AF8DB0(ctx, base);
loc_82AF8C20:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82af8bc4
	if (ctx.cr6.lt) goto loc_82AF8BC4;
loc_82AF8C34:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af8cfc
	if (ctx.cr6.eq) goto loc_82AF8CFC;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82af8cfc
	if (!ctx.cr6.gt) goto loc_82AF8CFC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
loc_82AF8C5C:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82af8d30
	ctx.lr = 0x82AF8C68;
	sub_82AF8D30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af8ce8
	if (ctx.cr6.eq) goto loc_82AF8CE8;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82af8d30
	ctx.lr = 0x82AF8CA8;
	sub_82AF8D30(ctx, base);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// ld r4,-1992(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + -1992);
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82AF8CCC;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,228(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AF8CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF8CE8:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82af8c5c
	if (ctx.cr6.lt) goto loc_82AF8C5C;
loc_82AF8CFC:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af8d1c
	if (!ctx.cr6.eq) goto loc_82AF8D1C;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af8d20
	if (ctx.cr6.eq) goto loc_82AF8D20;
loc_82AF8D1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AF8D20:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF8D2C"))) PPC_WEAK_FUNC(sub_82AF8D2C);
PPC_FUNC_IMPL(__imp__sub_82AF8D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8D30"))) PPC_WEAK_FUNC(sub_82AF8D30);
PPC_FUNC_IMPL(__imp__sub_82AF8D30) {
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
	// beq cr6,0x82af8d98
	if (ctx.cr6.eq) goto loc_82AF8D98;
	// bl 0x829a1cd8
	ctx.lr = 0x82AF8D50;
	sub_829A1CD8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af8d70
	if (ctx.cr6.eq) goto loc_82AF8D70;
loc_82AF8D5C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af8d80
	if (ctx.cr6.eq) goto loc_82AF8D80;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af8d5c
	if (!ctx.cr6.eq) goto loc_82AF8D5C;
loc_82AF8D70:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af8d98
	if (ctx.cr6.eq) goto loc_82AF8D98;
loc_82AF8D80:
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
loc_82AF8D98:
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

__attribute__((alias("__imp__sub_82AF8DB0"))) PPC_WEAK_FUNC(sub_82AF8DB0);
PPC_FUNC_IMPL(__imp__sub_82AF8DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF8DB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-1992(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1992);
	// bl 0x8229e490
	ctx.lr = 0x82AF8DF8;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,228(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AF8E14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF8E1C"))) PPC_WEAK_FUNC(sub_82AF8E1C);
PPC_FUNC_IMPL(__imp__sub_82AF8E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8E20"))) PPC_WEAK_FUNC(sub_82AF8E20);
PPC_FUNC_IMPL(__imp__sub_82AF8E20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8E24"))) PPC_WEAK_FUNC(sub_82AF8E24);
PPC_FUNC_IMPL(__imp__sub_82AF8E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8E28"))) PPC_WEAK_FUNC(sub_82AF8E28);
PPC_FUNC_IMPL(__imp__sub_82AF8E28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-5760
	ctx.r8.s64 = ctx.r9.s64 + -5760;
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

__attribute__((alias("__imp__sub_82AF8E50"))) PPC_WEAK_FUNC(sub_82AF8E50);
PPC_FUNC_IMPL(__imp__sub_82AF8E50) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8E58"))) PPC_WEAK_FUNC(sub_82AF8E58);
PPC_FUNC_IMPL(__imp__sub_82AF8E58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-5760
	ctx.r8.s64 = ctx.r9.s64 + -5760;
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

__attribute__((alias("__imp__sub_82AF8E78"))) PPC_WEAK_FUNC(sub_82AF8E78);
PPC_FUNC_IMPL(__imp__sub_82AF8E78) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-5760
	ctx.r10.s64 = ctx.r11.s64 + -5760;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF8EA4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4310
	ctx.lr = 0x82AF8EAC;
	sub_825B4310(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af8ee0
	if (ctx.cr6.eq) goto loc_82AF8EE0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af8ed8
	if (ctx.cr6.lt) goto loc_82AF8ED8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af8ee0
	if (!ctx.cr6.gt) goto loc_82AF8EE0;
loc_82AF8ED8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AF8EE0;
	sub_82294A58(ctx, base);
loc_82AF8EE0:
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

__attribute__((alias("__imp__sub_82AF8EFC"))) PPC_WEAK_FUNC(sub_82AF8EFC);
PPC_FUNC_IMPL(__imp__sub_82AF8EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8F00"))) PPC_WEAK_FUNC(sub_82AF8F00);
PPC_FUNC_IMPL(__imp__sub_82AF8F00) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-5760
	ctx.r10.s64 = ctx.r11.s64 + -5760;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF8F24;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4310
	ctx.lr = 0x82AF8F2C;
	sub_825B4310(ctx, base);
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

__attribute__((alias("__imp__sub_82AF8F40"))) PPC_WEAK_FUNC(sub_82AF8F40);
PPC_FUNC_IMPL(__imp__sub_82AF8F40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-6456
	ctx.r7.s64 = ctx.r9.s64 + -6456;
	// stb r8,916(r3)
	PPC_STORE_U8(ctx.r3.u32 + 916, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82AF8F70"))) PPC_WEAK_FUNC(sub_82AF8F70);
PPC_FUNC_IMPL(__imp__sub_82AF8F70) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8F78"))) PPC_WEAK_FUNC(sub_82AF8F78);
PPC_FUNC_IMPL(__imp__sub_82AF8F78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-6456
	ctx.r7.s64 = ctx.r9.s64 + -6456;
	// stb r8,916(r3)
	PPC_STORE_U8(ctx.r3.u32 + 916, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82AF8FA0"))) PPC_WEAK_FUNC(sub_82AF8FA0);
PPC_FUNC_IMPL(__imp__sub_82AF8FA0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-6456
	ctx.r10.s64 = ctx.r11.s64 + -6456;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF8FCC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60220
	ctx.lr = 0x82AF8FD4;
	sub_82A60220(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af9008
	if (ctx.cr6.eq) goto loc_82AF9008;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af9000
	if (ctx.cr6.lt) goto loc_82AF9000;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af9008
	if (!ctx.cr6.gt) goto loc_82AF9008;
loc_82AF9000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AF9008;
	sub_82294A58(ctx, base);
loc_82AF9008:
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

__attribute__((alias("__imp__sub_82AF9024"))) PPC_WEAK_FUNC(sub_82AF9024);
PPC_FUNC_IMPL(__imp__sub_82AF9024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9028"))) PPC_WEAK_FUNC(sub_82AF9028);
PPC_FUNC_IMPL(__imp__sub_82AF9028) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-6456
	ctx.r10.s64 = ctx.r11.s64 + -6456;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF904C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60220
	ctx.lr = 0x82AF9054;
	sub_82A60220(ctx, base);
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

__attribute__((alias("__imp__sub_82AF9068"))) PPC_WEAK_FUNC(sub_82AF9068);
PPC_FUNC_IMPL(__imp__sub_82AF9068) {
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
	ctx.lr = 0x82AF9080;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af9104
	if (ctx.cr6.eq) goto loc_82AF9104;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-5392
	ctx.r11.s64 = ctx.r8.s64 + -5392;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-27688
	ctx.r6.s64 = ctx.r5.s64 + -27688;
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
	// addi r10,r4,14504
	ctx.r10.s64 = ctx.r4.s64 + 14504;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AF90F4;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AF9104:
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

__attribute__((alias("__imp__sub_82AF9118"))) PPC_WEAK_FUNC(sub_82AF9118);
PPC_FUNC_IMPL(__imp__sub_82AF9118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF9120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28052);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af914c
	if (!ctx.cr6.eq) goto loc_82AF914C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826771f8
	ctx.lr = 0x82AF9140;
	sub_826771F8(ctx, base);
	// stw r3,-28052(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28052, ctx.r3.u32);
	// bl 0x826772a8
	ctx.lr = 0x82AF9148;
	sub_826772A8(ctx, base);
	// lwz r10,-28052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28052);
loc_82AF914C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24072);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af916c
	if (ctx.cr6.eq) goto loc_82AF916C;
	// bl 0x82315fb8
	ctx.lr = 0x82AF9160;
	sub_82315FB8(ctx, base);
	// lwz r11,-24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24072);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82af9174
	goto loc_82AF9174;
loc_82AF916C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AF9174:
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
	// bne cr6,0x82af91a4
	if (!ctx.cr6.eq) goto loc_82AF91A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AF9194;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AF919C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24072);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AF91A4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af91d0
	if (!ctx.cr6.eq) goto loc_82AF91D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AF91C0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AF91C8;
	sub_82398640(ctx, base);
	// lwz r11,-24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24072);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AF91D0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af9208
	if (ctx.cr6.eq) goto loc_82AF9208;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AF91EC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82af9208
	if (!ctx.cr6.eq) goto loc_82AF9208;
	// lwz r3,-24072(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24072);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF9208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF9208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF9210"))) PPC_WEAK_FUNC(sub_82AF9210);
PPC_FUNC_IMPL(__imp__sub_82AF9210) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF9218"))) PPC_WEAK_FUNC(sub_82AF9218);
PPC_FUNC_IMPL(__imp__sub_82AF9218) {
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
	// lwz r11,-28052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28052);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af925c
	if (!ctx.cr6.eq) goto loc_82AF925C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826771f8
	ctx.lr = 0x82AF9250;
	sub_826771F8(ctx, base);
	// stw r3,-28052(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28052, ctx.r3.u32);
	// bl 0x826772a8
	ctx.lr = 0x82AF9258;
	sub_826772A8(ctx, base);
	// lwz r11,-28052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28052);
loc_82AF925C:
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

__attribute__((alias("__imp__sub_82AF9284"))) PPC_WEAK_FUNC(sub_82AF9284);
PPC_FUNC_IMPL(__imp__sub_82AF9284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9288"))) PPC_WEAK_FUNC(sub_82AF9288);
PPC_FUNC_IMPL(__imp__sub_82AF9288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af929c
	if (!ctx.cr6.eq) goto loc_82AF929C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82AF929C:
	// b 0x82679d70
	sub_82679D70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF92A0"))) PPC_WEAK_FUNC(sub_82AF92A0);
PPC_FUNC_IMPL(__imp__sub_82AF92A0) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af92cc
	if (ctx.cr6.eq) goto loc_82AF92CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AF92CC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,16136
	ctx.r4.s64 = ctx.r11.s64 + 16136;
	// bl 0x822b2a20
	ctx.lr = 0x82AF92DC;
	sub_822B2A20(ctx, base);
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

__attribute__((alias("__imp__sub_82AF92F0"))) PPC_WEAK_FUNC(sub_82AF92F0);
PPC_FUNC_IMPL(__imp__sub_82AF92F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF92F4"))) PPC_WEAK_FUNC(sub_82AF92F4);
PPC_FUNC_IMPL(__imp__sub_82AF92F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF92F8"))) PPC_WEAK_FUNC(sub_82AF92F8);
PPC_FUNC_IMPL(__imp__sub_82AF92F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af9390
	if (ctx.cr6.eq) goto loc_82AF9390;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82af9340
	if (!ctx.cr6.eq) goto loc_82AF9340;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x82AF933C;
	sub_822960C0(ctx, base);
	// b 0x82af9348
	goto loc_82AF9348;
loc_82AF9340:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82AF9348;
	sub_8233E1A0(ctx, base);
loc_82AF9348:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x82af9364
	if (!ctx.cr6.eq) goto loc_82AF9364;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82AF9364:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82af9374
	if (ctx.cr6.eq) goto loc_82AF9374;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_82AF9374:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-14384
	ctx.r4.s64 = ctx.r11.s64 + -14384;
	// bl 0x8232e868
	ctx.lr = 0x82AF9384;
	sub_8232E868(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82AF938C;
	sub_82299080(ctx, base);
	// b 0x82af939c
	goto loc_82AF939C;
loc_82AF9390:
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294bb8
	ctx.lr = 0x82AF939C;
	sub_82294BB8(ctx, base);
loc_82AF939C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82AF93B8"))) PPC_WEAK_FUNC(sub_82AF93B8);
PPC_FUNC_IMPL(__imp__sub_82AF93B8) {
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
	// bl 0x822bc6c8
	ctx.lr = 0x82AF93C8;
	sub_822BC6C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF93D8"))) PPC_WEAK_FUNC(sub_82AF93D8);
PPC_FUNC_IMPL(__imp__sub_82AF93D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-5208
	ctx.r8.s64 = ctx.r9.s64 + -5208;
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

__attribute__((alias("__imp__sub_82AF9400"))) PPC_WEAK_FUNC(sub_82AF9400);
PPC_FUNC_IMPL(__imp__sub_82AF9400) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF9408"))) PPC_WEAK_FUNC(sub_82AF9408);
PPC_FUNC_IMPL(__imp__sub_82AF9408) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-5208
	ctx.r8.s64 = ctx.r9.s64 + -5208;
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

__attribute__((alias("__imp__sub_82AF9428"))) PPC_WEAK_FUNC(sub_82AF9428);
PPC_FUNC_IMPL(__imp__sub_82AF9428) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-5208
	ctx.r10.s64 = ctx.r11.s64 + -5208;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF9454;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f0888
	ctx.lr = 0x82AF945C;
	sub_825F0888(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af9490
	if (ctx.cr6.eq) goto loc_82AF9490;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af9488
	if (ctx.cr6.lt) goto loc_82AF9488;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af9490
	if (!ctx.cr6.gt) goto loc_82AF9490;
loc_82AF9488:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AF9490;
	sub_82294A58(ctx, base);
loc_82AF9490:
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

__attribute__((alias("__imp__sub_82AF94AC"))) PPC_WEAK_FUNC(sub_82AF94AC);
PPC_FUNC_IMPL(__imp__sub_82AF94AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF94B0"))) PPC_WEAK_FUNC(sub_82AF94B0);
PPC_FUNC_IMPL(__imp__sub_82AF94B0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-5208
	ctx.r10.s64 = ctx.r11.s64 + -5208;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF94D4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f0888
	ctx.lr = 0x82AF94DC;
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

__attribute__((alias("__imp__sub_82AF94F0"))) PPC_WEAK_FUNC(sub_82AF94F0);
PPC_FUNC_IMPL(__imp__sub_82AF94F0) {
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
	ctx.lr = 0x82AF9508;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af958c
	if (ctx.cr6.eq) goto loc_82AF958C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-4920
	ctx.r11.s64 = ctx.r8.s64 + -4920;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-26736
	ctx.r6.s64 = ctx.r5.s64 + -26736;
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
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AF957C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AF958C:
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

__attribute__((alias("__imp__sub_82AF95A0"))) PPC_WEAK_FUNC(sub_82AF95A0);
PPC_FUNC_IMPL(__imp__sub_82AF95A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF95A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-30836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30836);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af95d4
	if (!ctx.cr6.eq) goto loc_82AF95D4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82499a90
	ctx.lr = 0x82AF95C8;
	sub_82499A90(ctx, base);
	// stw r3,-30836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30836, ctx.r3.u32);
	// bl 0x82499b50
	ctx.lr = 0x82AF95D0;
	sub_82499B50(ctx, base);
	// lwz r10,-30836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30836);
loc_82AF95D4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24068);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af95f4
	if (ctx.cr6.eq) goto loc_82AF95F4;
	// bl 0x822d0580
	ctx.lr = 0x82AF95E8;
	sub_822D0580(ctx, base);
	// lwz r11,-24068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24068);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82af95fc
	goto loc_82AF95FC;
loc_82AF95F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AF95FC:
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
	// bne cr6,0x82af962c
	if (!ctx.cr6.eq) goto loc_82AF962C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AF961C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AF9624;
	sub_822AADA8(ctx, base);
	// lwz r11,-24068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24068);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AF962C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af9658
	if (!ctx.cr6.eq) goto loc_82AF9658;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AF9648;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AF9650;
	sub_82398640(ctx, base);
	// lwz r11,-24068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24068);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AF9658:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af9690
	if (ctx.cr6.eq) goto loc_82AF9690;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AF9674;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82af9690
	if (!ctx.cr6.eq) goto loc_82AF9690;
	// lwz r3,-24068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24068);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF9690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF9690:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF9698"))) PPC_WEAK_FUNC(sub_82AF9698);
PPC_FUNC_IMPL(__imp__sub_82AF9698) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF96A0"))) PPC_WEAK_FUNC(sub_82AF96A0);
PPC_FUNC_IMPL(__imp__sub_82AF96A0) {
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
	// lwz r11,-30836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30836);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af96e4
	if (!ctx.cr6.eq) goto loc_82AF96E4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82499a90
	ctx.lr = 0x82AF96D8;
	sub_82499A90(ctx, base);
	// stw r3,-30836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30836, ctx.r3.u32);
	// bl 0x82499b50
	ctx.lr = 0x82AF96E0;
	sub_82499B50(ctx, base);
	// lwz r11,-30836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30836);
loc_82AF96E4:
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

__attribute__((alias("__imp__sub_82AF970C"))) PPC_WEAK_FUNC(sub_82AF970C);
PPC_FUNC_IMPL(__imp__sub_82AF970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9710"))) PPC_WEAK_FUNC(sub_82AF9710);
PPC_FUNC_IMPL(__imp__sub_82AF9710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF9718;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af9784
	if (ctx.cr6.eq) goto loc_82AF9784;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82af9784
	if (!ctx.cr6.gt) goto loc_82AF9784;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AF9748:
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82694858
	ctx.lr = 0x82AF9754;
	sub_82694858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af9770
	if (ctx.cr6.eq) goto loc_82AF9770;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,1016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF9770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF9770:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82af9748
	if (ctx.cr6.lt) goto loc_82AF9748;
loc_82AF9784:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF978C"))) PPC_WEAK_FUNC(sub_82AF978C);
PPC_FUNC_IMPL(__imp__sub_82AF978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9790"))) PPC_WEAK_FUNC(sub_82AF9790);
PPC_FUNC_IMPL(__imp__sub_82AF9790) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-4880
	ctx.r8.s64 = ctx.r9.s64 + -4880;
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

__attribute__((alias("__imp__sub_82AF97B8"))) PPC_WEAK_FUNC(sub_82AF97B8);
PPC_FUNC_IMPL(__imp__sub_82AF97B8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF97C0"))) PPC_WEAK_FUNC(sub_82AF97C0);
PPC_FUNC_IMPL(__imp__sub_82AF97C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-4880
	ctx.r8.s64 = ctx.r9.s64 + -4880;
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

__attribute__((alias("__imp__sub_82AF97E0"))) PPC_WEAK_FUNC(sub_82AF97E0);
PPC_FUNC_IMPL(__imp__sub_82AF97E0) {
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
	// bl 0x82af9850
	ctx.lr = 0x82AF9800;
	sub_82AF9850(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af9834
	if (ctx.cr6.eq) goto loc_82AF9834;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af982c
	if (ctx.cr6.lt) goto loc_82AF982C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af9834
	if (!ctx.cr6.gt) goto loc_82AF9834;
loc_82AF982C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AF9834;
	sub_82294A58(ctx, base);
loc_82AF9834:
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

__attribute__((alias("__imp__sub_82AF9850"))) PPC_WEAK_FUNC(sub_82AF9850);
PPC_FUNC_IMPL(__imp__sub_82AF9850) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-4880
	ctx.r10.s64 = ctx.r11.s64 + -4880;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF9874;
	sub_8229C068(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,12288
	ctx.r8.s64 = ctx.r9.s64 + 12288;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AF9888;
	sub_8229C068(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x822b4260
	ctx.lr = 0x82AF9890;
	sub_822B4260(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248f290
	ctx.lr = 0x82AF9898;
	sub_8248F290(ctx, base);
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

__attribute__((alias("__imp__sub_82AF98AC"))) PPC_WEAK_FUNC(sub_82AF98AC);
PPC_FUNC_IMPL(__imp__sub_82AF98AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF98B0"))) PPC_WEAK_FUNC(sub_82AF98B0);
PPC_FUNC_IMPL(__imp__sub_82AF98B0) {
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
	ctx.lr = 0x82AF98C8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af994c
	if (ctx.cr6.eq) goto loc_82AF994C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-4512
	ctx.r11.s64 = ctx.r8.s64 + -4512;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-18200
	ctx.r6.s64 = ctx.r5.s64 + -18200;
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
	// li r5,604
	ctx.r5.s64 = 604;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AF993C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AF994C:
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

__attribute__((alias("__imp__sub_82AF9960"))) PPC_WEAK_FUNC(sub_82AF9960);
PPC_FUNC_IMPL(__imp__sub_82AF9960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF9968;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-25776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25776);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af9994
	if (!ctx.cr6.eq) goto loc_82AF9994;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x829d0f08
	ctx.lr = 0x82AF9988;
	sub_829D0F08(ctx, base);
	// stw r3,-25776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25776, ctx.r3.u32);
	// bl 0x829d0fb8
	ctx.lr = 0x82AF9990;
	sub_829D0FB8(ctx, base);
	// lwz r10,-25776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25776);
loc_82AF9994:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24064);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af99b4
	if (ctx.cr6.eq) goto loc_82AF99B4;
	// bl 0x8298e210
	ctx.lr = 0x82AF99A8;
	sub_8298E210(ctx, base);
	// lwz r11,-24064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24064);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82af99bc
	goto loc_82AF99BC;
loc_82AF99B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AF99BC:
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
	// bne cr6,0x82af99ec
	if (!ctx.cr6.eq) goto loc_82AF99EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AF99DC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AF99E4;
	sub_822AADA8(ctx, base);
	// lwz r11,-24064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24064);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AF99EC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af9a18
	if (!ctx.cr6.eq) goto loc_82AF9A18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AF9A08;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AF9A10;
	sub_82398640(ctx, base);
	// lwz r11,-24064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24064);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AF9A18:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af9a50
	if (ctx.cr6.eq) goto loc_82AF9A50;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AF9A34;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82af9a50
	if (!ctx.cr6.eq) goto loc_82AF9A50;
	// lwz r3,-24064(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24064);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF9A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF9A50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF9A58"))) PPC_WEAK_FUNC(sub_82AF9A58);
PPC_FUNC_IMPL(__imp__sub_82AF9A58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF9A60"))) PPC_WEAK_FUNC(sub_82AF9A60);
PPC_FUNC_IMPL(__imp__sub_82AF9A60) {
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
	// lwz r11,-25776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25776);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af9aa4
	if (!ctx.cr6.eq) goto loc_82AF9AA4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x829d0f08
	ctx.lr = 0x82AF9A98;
	sub_829D0F08(ctx, base);
	// stw r3,-25776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25776, ctx.r3.u32);
	// bl 0x829d0fb8
	ctx.lr = 0x82AF9AA0;
	sub_829D0FB8(ctx, base);
	// lwz r11,-25776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25776);
loc_82AF9AA4:
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

__attribute__((alias("__imp__sub_82AF9ACC"))) PPC_WEAK_FUNC(sub_82AF9ACC);
PPC_FUNC_IMPL(__imp__sub_82AF9ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9AD0"))) PPC_WEAK_FUNC(sub_82AF9AD0);
PPC_FUNC_IMPL(__imp__sub_82AF9AD0) {
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
	ctx.lr = 0x82AF9AE8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af9b6c
	if (ctx.cr6.eq) goto loc_82AF9B6C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-4492
	ctx.r11.s64 = ctx.r8.s64 + -4492;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-18960
	ctx.r6.s64 = ctx.r5.s64 + -18960;
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
	// li r5,716
	ctx.r5.s64 = 716;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AF9B5C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AF9B6C:
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

__attribute__((alias("__imp__sub_82AF9B80"))) PPC_WEAK_FUNC(sub_82AF9B80);
PPC_FUNC_IMPL(__imp__sub_82AF9B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF9B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af9bb4
	if (!ctx.cr6.eq) goto loc_82AF9BB4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604fa0
	ctx.lr = 0x82AF9BA8;
	sub_82604FA0(ctx, base);
	// stw r3,-28640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28640, ctx.r3.u32);
	// bl 0x82605060
	ctx.lr = 0x82AF9BB0;
	sub_82605060(ctx, base);
	// lwz r10,-28640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
loc_82AF9BB4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24060);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af9bd4
	if (ctx.cr6.eq) goto loc_82AF9BD4;
	// bl 0x82313628
	ctx.lr = 0x82AF9BC8;
	sub_82313628(ctx, base);
	// lwz r11,-24060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24060);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82af9bdc
	goto loc_82AF9BDC;
loc_82AF9BD4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AF9BDC:
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
	// bne cr6,0x82af9c0c
	if (!ctx.cr6.eq) goto loc_82AF9C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AF9BFC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AF9C04;
	sub_822AADA8(ctx, base);
	// lwz r11,-24060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24060);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AF9C0C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af9c38
	if (!ctx.cr6.eq) goto loc_82AF9C38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AF9C28;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AF9C30;
	sub_82398640(ctx, base);
	// lwz r11,-24060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24060);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AF9C38:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af9c70
	if (ctx.cr6.eq) goto loc_82AF9C70;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AF9C54;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82af9c70
	if (!ctx.cr6.eq) goto loc_82AF9C70;
	// lwz r3,-24060(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24060);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF9C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF9C70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF9C78"))) PPC_WEAK_FUNC(sub_82AF9C78);
PPC_FUNC_IMPL(__imp__sub_82AF9C78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF9C80"))) PPC_WEAK_FUNC(sub_82AF9C80);
PPC_FUNC_IMPL(__imp__sub_82AF9C80) {
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
	// lwz r11,-28640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af9cc4
	if (!ctx.cr6.eq) goto loc_82AF9CC4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604fa0
	ctx.lr = 0x82AF9CB8;
	sub_82604FA0(ctx, base);
	// stw r3,-28640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28640, ctx.r3.u32);
	// bl 0x82605060
	ctx.lr = 0x82AF9CC0;
	sub_82605060(ctx, base);
	// lwz r11,-28640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
loc_82AF9CC4:
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

__attribute__((alias("__imp__sub_82AF9CEC"))) PPC_WEAK_FUNC(sub_82AF9CEC);
PPC_FUNC_IMPL(__imp__sub_82AF9CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9CF0"))) PPC_WEAK_FUNC(sub_82AF9CF0);
PPC_FUNC_IMPL(__imp__sub_82AF9CF0) {
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
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af9d20
	if (ctx.cr6.eq) goto loc_82AF9D20;
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
loc_82AF9D20:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af9de0
	if (ctx.cr6.eq) goto loc_82AF9DE0;
	// lfs f0,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af9d94
	if (ctx.cr6.eq) goto loc_82AF9D94;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82af9d7c
	if (ctx.cr6.gt) goto loc_82AF9D7C;
	// bl 0x82afa438
	ctx.lr = 0x82AF9D60;
	sub_82AFA438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afa710
	ctx.lr = 0x82AF9D68;
	sub_82AFA710(ctx, base);
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
loc_82AF9D7C:
	// bl 0x82afa088
	ctx.lr = 0x82AF9D80;
	sub_82AFA088(ctx, base);
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
loc_82AF9D94:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af9dc4
	if (ctx.cr6.eq) goto loc_82AF9DC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9df8
	ctx.lr = 0x82AF9DA8;
	sub_82AF9DF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af9de0
	if (!ctx.cr6.eq) goto loc_82AF9DE0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// b 0x82af9dd0
	goto loc_82AF9DD0;
loc_82AF9DC4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
loc_82AF9DD0:
	// bgt cr6,0x82af9de0
	if (ctx.cr6.gt) goto loc_82AF9DE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afa838
	ctx.lr = 0x82AF9DE0;
	sub_82AFA838(ctx, base);
loc_82AF9DE0:
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

__attribute__((alias("__imp__sub_82AF9DF4"))) PPC_WEAK_FUNC(sub_82AF9DF4);
PPC_FUNC_IMPL(__imp__sub_82AF9DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9DF8"))) PPC_WEAK_FUNC(sub_82AF9DF8);
PPC_FUNC_IMPL(__imp__sub_82AF9DF8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af9ffc
	if (ctx.cr6.eq) goto loc_82AF9FFC;
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af9ffc
	if (ctx.cr6.eq) goto loc_82AF9FFC;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af9fe8
	if (ctx.cr6.eq) goto loc_82AF9FE8;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82af9fe8
	if (!ctx.cr6.eq) goto loc_82AF9FE8;
	// rlwinm r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af9fe8
	if (!ctx.cr6.eq) goto loc_82AF9FE8;
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af9e6c
	if (ctx.cr6.eq) goto loc_82AF9E6C;
	// addi r11,r10,396
	ctx.r11.s64 = ctx.r10.s64 + 396;
	// b 0x82af9e70
	goto loc_82AF9E70;
loc_82AF9E6C:
	// addi r11,r11,244
	ctx.r11.s64 = ctx.r11.s64 + 244;
loc_82AF9E70:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f31,f12,f12,f5
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fcmpu cr6,f31,f10
	ctx.cr6.compare(ctx.f31.f64, ctx.f10.f64);
	// bgt cr6,0x82af9ee4
	if (ctx.cr6.gt) goto loc_82AF9EE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afa020
	ctx.lr = 0x82AF9EDC;
	sub_82AFA020(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af9ff4
	if (!ctx.cr6.eq) goto loc_82AF9FF4;
loc_82AF9EE4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,544(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82af9ff4
	if (!ctx.cr6.gt) goto loc_82AF9FF4;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82af9ffc
	if (ctx.cr6.gt) goto loc_82AF9FFC;
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af9f14
	if (ctx.cr6.eq) goto loc_82AF9F14;
	// bl 0x82516af8
	ctx.lr = 0x82AF9F14;
	sub_82516AF8(ctx, base);
loc_82AF9F14:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,-18108(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18108);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82382590
	ctx.lr = 0x82AF9F3C;
	sub_82382590(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f2,528(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// stw r7,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r7.u32);
	// stw r6,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r6.u32);
	// stw r5,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r5.u32);
	// bl 0x82afb590
	ctx.lr = 0x82AF9F68;
	sub_82AFB590(ctx, base);
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f0,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f13,f1
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f6,f12,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f8,268(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f7,272(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f6,276(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lfs f5,536(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	ctx.f5.f64 = double(temp.f32);
	// oris r9,r4,4096
	ctx.r9.u64 = ctx.r4.u64 | 268435456;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f10,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f1,f9,f5
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f2,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stfs f2,516(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stw r8,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r8.u32);
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// b 0x82afa000
	goto loc_82AFA000;
loc_82AF9FE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afa838
	ctx.lr = 0x82AF9FF4;
	sub_82AFA838(ctx, base);
loc_82AF9FF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82afa000
	goto loc_82AFA000;
loc_82AF9FFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AFA000:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFA01C"))) PPC_WEAK_FUNC(sub_82AFA01C);
PPC_FUNC_IMPL(__imp__sub_82AFA01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFA020"))) PPC_WEAK_FUNC(sub_82AFA020);
PPC_FUNC_IMPL(__imp__sub_82AFA020) {
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
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afa060
	if (ctx.cr6.eq) goto loc_82AFA060;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 244);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82355e68
	ctx.lr = 0x82AFA060;
	sub_82355E68(ctx, base);
loc_82AFA060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afa438
	ctx.lr = 0x82AFA068;
	sub_82AFA438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afa710
	ctx.lr = 0x82AFA070;
	sub_82AFA710(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82AFA088"))) PPC_WEAK_FUNC(sub_82AFA088);
PPC_FUNC_IMPL(__imp__sub_82AFA088) {
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
	// bl 0x82cb6ad4
	ctx.lr = 0x82AFA0A0;
	__savefpr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afa40c
	if (ctx.cr6.eq) goto loc_82AFA40C;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82afa40c
	if (!ctx.cr6.eq) goto loc_82AFA40C;
	// rlwinm r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afa40c
	if (!ctx.cr6.eq) goto loc_82AFA40C;
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82afa0e8
	if (ctx.cr6.eq) goto loc_82AFA0E8;
	// addi r11,r10,396
	ctx.r11.s64 = ctx.r10.s64 + 396;
	// b 0x82afa0ec
	goto loc_82AFA0EC;
loc_82AFA0E8:
	// addi r11,r11,244
	ctx.r11.s64 = ctx.r11.s64 + 244;
loc_82AFA0EC:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f25,f11,f13
	ctx.f25.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f25,112(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f24,f9,f12
	ctx.f24.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f24,116(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fsubs f23,f10,f0
	ctx.f23.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f23,120(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f31,-18108(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18108);
	ctx.f31.f64 = double(temp.f32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// bl 0x82382590
	ctx.lr = 0x82AFA164;
	sub_82382590(ctx, base);
	// lfs f8,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// lfs f5,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmuls f3,f5,f30
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// lfs f2,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f11,f0,f4
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82afa8e0
	ctx.lr = 0x82AFA1B8;
	sub_82AFA8E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,956(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// stw r9,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r9.u32);
	// stw r8,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AFA1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,508(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// rlwinm r4,r5,0,4,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000000;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f26,-15120(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f26.f64 = double(temp.f32);
	// bne cr6,0x82afa22c
	if (!ctx.cr6.eq) goto loc_82AFA22C;
	// lfs f0,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82afa238
	goto loc_82AFA238;
loc_82AFA22C:
	// stfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f26,84(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82AFA238:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f8,8(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f3,f3
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f13,f0,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmadds f11,f5,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f13.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// fsqrts f31,f11
	ctx.f31.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f6,f8,f4
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f0,f6,f31
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmuls f11,f2,f31
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82382590
	ctx.lr = 0x82AFA2DC;
	sub_82382590(ctx, base);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f29,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f27.f64 = double(temp.f32);
	// bne cr6,0x82afa314
	if (!ctx.cr6.eq) goto loc_82AFA314;
	// fmuls f0,f27,f31
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f28,f31
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f12,f29,f31
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x82afa354
	goto loc_82AFA354;
loc_82AFA314:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-29008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29008);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-15880(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -15880);
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82AFA32C;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82AFA354:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r7,508(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r6,r7,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// bne cr6,0x82afa3a4
	if (!ctx.cr6.eq) goto loc_82AFA3A4;
	// lfs f0,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f28,f0
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x82afa3b0
	goto loc_82AFA3B0;
loc_82AFA3A4:
	// stfs f26,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f26,116(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f26,120(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82AFA3B0:
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f24,f24
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f24.f64));
	// lfs f12,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r31,280
	ctx.r10.s64 = ctx.r31.s64 + 280;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,284(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f6,288(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lfs f11,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f5,280(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// fmadds f4,f23,f23,f13
	ctx.f4.f64 = double(float(ctx.f23.f64 * ctx.f23.f64 + ctx.f13.f64));
	// fmadds f3,f25,f25,f4
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f25.f64 + ctx.f4.f64));
	// lfs f2,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fcmpu cr6,f3,f1
	ctx.cr6.compare(ctx.f3.f64, ctx.f1.f64);
	// bgt cr6,0x82afa418
	if (ctx.cr6.gt) goto loc_82AFA418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afa020
	ctx.lr = 0x82AFA408;
	sub_82AFA020(ctx, base);
	// b 0x82afa418
	goto loc_82AFA418;
loc_82AFA40C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afa838
	ctx.lr = 0x82AFA418;
	sub_82AFA838(ctx, base);
loc_82AFA418:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b20
	ctx.lr = 0x82AFA424;
	__restfpr_23(ctx, base);
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

__attribute__((alias("__imp__sub_82AFA438"))) PPC_WEAK_FUNC(sub_82AFA438);
PPC_FUNC_IMPL(__imp__sub_82AFA438) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82afa46c
	if (ctx.cr6.gt) goto loc_82AFA46C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82afa474
	goto loc_82AFA474;
loc_82AFA46C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AFA474:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82AFA47C;
	sub_8258A128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afa4ac
	if (ctx.cr6.eq) goto loc_82AFA4AC;
	// lwz r3,2220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afa4ac
	if (ctx.cr6.eq) goto loc_82AFA4AC;
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82a465e8
	ctx.lr = 0x82AFA4AC;
	sub_82A465E8(ctx, base);
loc_82AFA4AC:
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

__attribute__((alias("__imp__sub_82AFA4C0"))) PPC_WEAK_FUNC(sub_82AFA4C0);
PPC_FUNC_IMPL(__imp__sub_82AFA4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AFA4C8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82afa510
	if (ctx.cr6.gt) goto loc_82AFA510;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82afa518
	goto loc_82AFA518;
loc_82AFA510:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AFA518:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82AFA520;
	sub_8258A128(ctx, base);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82afa700
	if (ctx.cr6.eq) goto loc_82AFA700;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afa700
	if (!ctx.cr6.eq) goto loc_82AFA700;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82afa6f4
	if (ctx.cr6.eq) goto loc_82AFA6F4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82afa6f4
	if (!ctx.cr6.gt) goto loc_82AFA6F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260ab50
	ctx.lr = 0x82AFA554;
	sub_8260AB50(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r28,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r3,-31264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// bl 0x8276feb0
	ctx.lr = 0x82AFA590;
	sub_8276FEB0(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r6,508(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f31,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r6,r7,30,1,4
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 30) & 0x78000000) | (ctx.r6.u64 & 0xFFFFFFFF87FFFFFF);
	// stfs f31,588(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r6.u32);
	// bl 0x82396ef8
	ctx.lr = 0x82AFA5B8;
	sub_82396EF8(ctx, base);
	// bl 0x82afb4b0
	ctx.lr = 0x82AFA5BC;
	sub_82AFB4B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afa5ec
	if (ctx.cr6.eq) goto loc_82AFA5EC;
	// lfs f0,516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// lfs f13,544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,544(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// ld r4,256(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 256);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// b 0x82afa614
	goto loc_82AFA614;
loc_82AFA5EC:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// rldicr r5,r27,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// lfs f0,-15060(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,31564(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31564);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f13,516(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82AFA614:
	// bl 0x825cd468
	ctx.lr = 0x82AFA618;
	sub_825CD468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260ab50
	ctx.lr = 0x82AFA620;
	sub_8260AB50(ctx, base);
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afa630
	if (ctx.cr6.eq) goto loc_82AFA630;
	// bl 0x82516af8
	ctx.lr = 0x82AFA630;
	sub_82516AF8(ctx, base);
loc_82AFA630:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x82afa6ac
	if (ctx.cr6.eq) goto loc_82AFA6AC;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,668(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AFA678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,208(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r7.u32);
	// stw r6,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r6.u32);
	// stw r5,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r5.u32);
	// bl 0x82610550
	ctx.lr = 0x82AFA69C;
	sub_82610550(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82AFA6AC:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,668(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AFA6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,508(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lfs f0,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// oris r6,r7,8192
	ctx.r6.u64 = ctx.r7.u64 | 536870912;
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r6.u32);
	// bl 0x82610550
	ctx.lr = 0x82AFA6E4;
	sub_82610550(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82AFA6F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afa838
	ctx.lr = 0x82AFA700;
	sub_82AFA838(ctx, base);
loc_82AFA700:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFA710"))) PPC_WEAK_FUNC(sub_82AFA710);
PPC_FUNC_IMPL(__imp__sub_82AFA710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AFA718;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31881
	ctx.r9.s64 = -2089353216;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18120
	ctx.r11.s64 = ctx.r11.s64 + -18120;
	// lwz r10,-18108(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18108);
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82afa75c
	if (!ctx.cr6.eq) goto loc_82AFA75C;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,-18108(r9)
	PPC_STORE_U32(ctx.r9.u32 + -18108, ctx.r10.u32);
loc_82AFA75C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,4,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,-32444(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,668(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 668);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AFA7E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// stfs f31,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afa7f4
	if (ctx.cr6.eq) goto loc_82AFA7F4;
	// bl 0x82516e80
	ctx.lr = 0x82AFA7F4;
	sub_82516E80(ctx, base);
loc_82AFA7F4:
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afa80c
	if (ctx.cr6.eq) goto loc_82AFA80C;
	// bl 0x825166b8
	ctx.lr = 0x82AFA804;
	sub_825166B8(ctx, base);
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x825185c0
	ctx.lr = 0x82AFA80C;
	sub_825185C0(ctx, base);
loc_82AFA80C:
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afa82c
	if (ctx.cr6.eq) goto loc_82AFA82C;
	// bl 0x82516af8
	ctx.lr = 0x82AFA81C;
	sub_82516AF8(ctx, base);
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// bl 0x82516e80
	ctx.lr = 0x82AFA824;
	sub_82516E80(ctx, base);
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// bl 0x825166b8
	ctx.lr = 0x82AFA82C;
	sub_825166B8(ctx, base);
loc_82AFA82C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFA838"))) PPC_WEAK_FUNC(sub_82AFA838);
PPC_FUNC_IMPL(__imp__sub_82AFA838) {
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
	// bl 0x82afa9c8
	ctx.lr = 0x82AFA854;
	sub_82AFA9C8(ctx, base);
	// addi r30,r31,592
	ctx.r30.s64 = ctx.r31.s64 + 592;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82AFA864;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afa898
	if (ctx.cr6.eq) goto loc_82AFA898;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-924(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -924);
	// lwz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AFA898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AFA898:
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
	// bgt cr6,0x82afa8b8
	if (ctx.cr6.gt) goto loc_82AFA8B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82afa8c0
	goto loc_82AFA8C0;
loc_82AFA8B8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AFA8C0:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82AFA8C8;
	sub_8258A128(ctx, base);
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

__attribute__((alias("__imp__sub_82AFA8E0"))) PPC_WEAK_FUNC(sub_82AFA8E0);
PPC_FUNC_IMPL(__imp__sub_82AFA8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// bne cr6,0x82afa940
	if (!ctx.cr6.eq) goto loc_82AFA940;
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f13,580(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f9,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f11,f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stfs f1,588(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 588, temp.u32);
	// stw r11,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r11.u32);
	// blr 
	return;
loc_82AFA940:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f8,588(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f6,584(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fmuls f4,f9,f8
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f11,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r9,-18304
	ctx.r8.s64 = ctx.r9.s64 + -18304;
	// fdivs f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 / ctx.f6.f64));
	// lfs f11,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f10,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f9,f4,f3
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fadds f8,f0,f2
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fadds f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f5,584(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,588(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
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
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f1,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// fsel f0,f1,f5,f3
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f5.f64 : ctx.f3.f64;
	// stfs f0,588(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 588, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFA9C8"))) PPC_WEAK_FUNC(sub_82AFA9C8);
PPC_FUNC_IMPL(__imp__sub_82AFA9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AFA9D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31881
	ctx.r9.s64 = -2089353216;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26396
	ctx.r11.s64 = ctx.r11.s64 + -26396;
	// lwz r10,-26384(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26384);
	// lfs f0,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82afaa10
	if (!ctx.cr6.eq) goto loc_82AFAA10;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,-26384(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26384, ctx.r10.u32);
loc_82AFAA10:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,4,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,-32444(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,668(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 668);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AFAA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afaaa8
	if (ctx.cr6.eq) goto loc_82AFAAA8;
	// bl 0x825185c0
	ctx.lr = 0x82AFAAA8;
	sub_825185C0(ctx, base);
loc_82AFAAA8:
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afaab8
	if (ctx.cr6.eq) goto loc_82AFAAB8;
	// bl 0x825185c0
	ctx.lr = 0x82AFAAB8;
	sub_825185C0(ctx, base);
loc_82AFAAB8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82610550
	ctx.lr = 0x82AFAAC4;
	sub_82610550(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AFAAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260ac08
	ctx.lr = 0x82AFAAE0;
	sub_8260AC08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFAAE8"))) PPC_WEAK_FUNC(sub_82AFAAE8);
PPC_FUNC_IMPL(__imp__sub_82AFAAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82AFAAF0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82afab38
	if (ctx.cr6.gt) goto loc_82AFAB38;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82afab40
	goto loc_82AFAB40;
loc_82AFAB38:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AFAB40:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82AFAB48;
	sub_8258A128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82afab5c
	if (!ctx.cr6.eq) goto loc_82AFAB5C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82AFAB5C:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afab8c
	if (ctx.cr6.eq) goto loc_82AFAB8C;
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82afab8c
	if (!ctx.cr6.gt) goto loc_82AFAB8C;
	// lwz r11,740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afab94
	if (!ctx.cr6.eq) goto loc_82AFAB94;
loc_82AFAB8C:
	// lwz r3,2220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2220);
	// b 0x82afab9c
	goto loc_82AFAB9C;
loc_82AFAB94:
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x829d9328
	ctx.lr = 0x82AFAB9C;
	sub_829D9328(ctx, base);
loc_82AFAB9C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afabb8
	if (ctx.cr6.eq) goto loc_82AFABB8;
	// lwz r3,492(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afabb8
	if (ctx.cr6.eq) goto loc_82AFABB8;
	// bl 0x829d91a8
	ctx.lr = 0x82AFABB4;
	sub_829D91A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82AFABB8:
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r6,216(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// rldicr r6,r6,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82afac08
	ctx.lr = 0x82AFABF8;
	sub_82AFAC08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFAC04"))) PPC_WEAK_FUNC(sub_82AFAC04);
PPC_FUNC_IMPL(__imp__sub_82AFAC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFAC08"))) PPC_WEAK_FUNC(sub_82AFAC08);
PPC_FUNC_IMPL(__imp__sub_82AFAC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82AFAC10;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// std r8,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r8.u64);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r29.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r10,980(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// lwz r9,568(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82afadbc
	if (ctx.cr6.eq) goto loc_82AFADBC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82afadbc
	if (ctx.cr6.eq) goto loc_82AFADBC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// ble cr6,0x82afadc0
	if (!ctx.cr6.gt) goto loc_82AFADC0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82afac7c
	if (ctx.cr6.eq) goto loc_82AFAC7C;
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// addi r3,r31,696
	ctx.r3.s64 = ctx.r31.s64 + 696;
	// bl 0x82afb3c8
	ctx.lr = 0x82AFAC7C;
	sub_82AFB3C8(ctx, base);
loc_82AFAC7C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82afac8c
	if (!ctx.cr6.gt) goto loc_82AFAC8C;
	// mullw r28,r3,r30
	ctx.r28.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
loc_82AFAC8C:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// lwz r27,284(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82afacb8
	if (ctx.cr6.gt) goto loc_82AFACB8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82afadbc
	if (ctx.cr6.eq) goto loc_82AFADBC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afadd0
	ctx.lr = 0x82AFACB0;
	sub_82AFADD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afadbc
	if (ctx.cr6.eq) goto loc_82AFADBC;
loc_82AFACB8:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addic. r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82afadbc
	if (ctx.cr0.lt) goto loc_82AFADBC;
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x8232d180
	ctx.lr = 0x82AFACEC;
	sub_8232D180(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82afadbc
	if (ctx.cr6.eq) goto loc_82AFADBC;
	// lwz r23,524(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82294498
	ctx.lr = 0x82AFAD14;
	sub_82294498(ctx, base);
	// lwz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82980b48
	ctx.lr = 0x82AFAD24;
	sub_82980B48(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82afad44
	if (ctx.cr6.eq) goto loc_82AFAD44;
loc_82AFAD30:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82afad78
	if (ctx.cr6.eq) goto loc_82AFAD78;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afad30
	if (!ctx.cr6.eq) goto loc_82AFAD30;
loc_82AFAD44:
	// bl 0x82980638
	ctx.lr = 0x82AFAD48;
	sub_82980638(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82afad68
	if (ctx.cr6.eq) goto loc_82AFAD68;
loc_82AFAD54:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82afad78
	if (ctx.cr6.eq) goto loc_82AFAD78;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afad54
	if (!ctx.cr6.eq) goto loc_82AFAD54;
loc_82AFAD68:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82afad7c
	if (ctx.cr6.eq) goto loc_82AFAD7C;
loc_82AFAD78:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82AFAD7C:
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r6,232(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// rldicr r6,r6,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82afa4c0
	ctx.lr = 0x82AFADB0;
	sub_82AFA4C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82afadc0
	if (!ctx.cr6.eq) goto loc_82AFADC0;
loc_82AFADBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AFADC0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFADCC"))) PPC_WEAK_FUNC(sub_82AFADCC);
PPC_FUNC_IMPL(__imp__sub_82AFADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFADD0"))) PPC_WEAK_FUNC(sub_82AFADD0);
PPC_FUNC_IMPL(__imp__sub_82AFADD0) {
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
	// lwz r6,524(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82afb0cc
	if (!ctx.cr6.gt) goto loc_82AFB0CC;
	// lwz r10,520(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AFADF8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82afae20
	if (ctx.cr6.eq) goto loc_82AFAE20;
	// lwz r9,508(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 508);
	// rlwinm r8,r9,0,2,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82afae20
	if (ctx.cr6.eq) goto loc_82AFAE20;
	// rlwinm r9,r9,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82afae34
	if (ctx.cr6.eq) goto loc_82AFAE34;
loc_82AFAE20:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82afadf8
	if (ctx.cr6.lt) goto loc_82AFADF8;
	// b 0x82afae40
	goto loc_82AFAE40;
loc_82AFAE34:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82afae84
	if (!ctx.cr6.lt) goto loc_82AFAE84;
loc_82AFAE40:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82afae84
	if (!ctx.cr6.gt) goto loc_82AFAE84;
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
loc_82AFAE50:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82afae6c
	if (ctx.cr6.eq) goto loc_82AFAE6C;
	// lwz r9,508(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 508);
	// rlwinm r8,r9,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82afae80
	if (!ctx.cr6.eq) goto loc_82AFAE80;
loc_82AFAE6C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82afae50
	if (ctx.cr6.lt) goto loc_82AFAE50;
	// b 0x82afae84
	goto loc_82AFAE84;
loc_82AFAE80:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82AFAE84:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x82afb074
	if (!ctx.cr6.lt) goto loc_82AFB074;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82afb06c
	if (ctx.cr6.eq) goto loc_82AFB06C;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x82afaffc
	if (ctx.cr6.lt) goto loc_82AFAFFC;
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// addi r7,r6,-3
	ctx.r7.s64 = ctx.r6.s64 + -3;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
loc_82AFAEB8:
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afaf04
	if (ctx.cr6.eq) goto loc_82AFAF04;
	// lfs f13,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,244(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82afaf04
	if (!ctx.cr6.gt) goto loc_82AFAF04;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82AFAF04:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afaf50
	if (ctx.cr6.eq) goto loc_82AFAF50;
	// lfs f13,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,244(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82afaf50
	if (!ctx.cr6.gt) goto loc_82AFAF50;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82AFAF50:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afaf9c
	if (ctx.cr6.eq) goto loc_82AFAF9C;
	// lfs f13,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,244(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82afaf9c
	if (!ctx.cr6.gt) goto loc_82AFAF9C;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82AFAF9C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afafe8
	if (ctx.cr6.eq) goto loc_82AFAFE8;
	// lfs f13,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,244(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82afafe8
	if (!ctx.cr6.gt) goto loc_82AFAFE8;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82AFAFE8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82afaeb8
	if (ctx.cr6.lt) goto loc_82AFAEB8;
loc_82AFAFFC:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82afb06c
	if (!ctx.cr6.lt) goto loc_82AFB06C;
	// lwz r10,520(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82AFB010:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afb05c
	if (ctx.cr6.eq) goto loc_82AFB05C;
	// lfs f13,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,244(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82afb05c
	if (!ctx.cr6.gt) goto loc_82AFB05C;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82AFB05C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82afb010
	if (ctx.cr6.lt) goto loc_82AFB010;
loc_82AFB06C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82afb0cc
	if (ctx.cr6.lt) goto loc_82AFB0CC;
loc_82AFB074:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82afb0cc
	if (!ctx.cr6.lt) goto loc_82AFB0CC;
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82afb0cc
	if (ctx.cr6.eq) goto loc_82AFB0CC;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82afb0a8
	if (ctx.cr6.eq) goto loc_82AFB0A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afa438
	ctx.lr = 0x82AFB0A8;
	sub_82AFA438(ctx, base);
loc_82AFB0A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afa838
	ctx.lr = 0x82AFB0B4;
	sub_82AFA838(ctx, base);
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
loc_82AFB0CC:
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

__attribute__((alias("__imp__sub_82AFB0E4"))) PPC_WEAK_FUNC(sub_82AFB0E4);
PPC_FUNC_IMPL(__imp__sub_82AFB0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB0E8"))) PPC_WEAK_FUNC(sub_82AFB0E8);
PPC_FUNC_IMPL(__imp__sub_82AFB0E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFB0F0"))) PPC_WEAK_FUNC(sub_82AFB0F0);
PPC_FUNC_IMPL(__imp__sub_82AFB0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AFB0F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r31,696
	ctx.r30.s64 = ctx.r31.s64 + 696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82afb360
	ctx.lr = 0x82AFB110;
	sub_82AFB360(ctx, base);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,11336
	ctx.r28.s64 = ctx.r11.s64 + 11336;
	// lwz r4,-24908(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24908);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82afb13c
	if (!ctx.cr6.eq) goto loc_82AFB13C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7bae8
	ctx.lr = 0x82AFB130;
	sub_82A7BAE8(ctx, base);
	// stw r3,-24908(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24908, ctx.r3.u32);
	// bl 0x82a7bb98
	ctx.lr = 0x82AFB138;
	sub_82A7BB98(ctx, base);
	// lwz r4,-24908(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24908);
loc_82AFB13C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,548(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// bl 0x8273bd80
	ctx.lr = 0x82AFB148;
	sub_8273BD80(ctx, base);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r4,-24904(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24904);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82afb16c
	if (!ctx.cr6.eq) goto loc_82AFB16C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7bd08
	ctx.lr = 0x82AFB160;
	sub_82A7BD08(ctx, base);
	// stw r3,-24904(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24904, ctx.r3.u32);
	// bl 0x82a7bdb8
	ctx.lr = 0x82AFB168;
	sub_82A7BDB8(ctx, base);
	// lwz r4,-24904(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24904);
loc_82AFB16C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,564(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x8273bd80
	ctx.lr = 0x82AFB178;
	sub_8273BD80(ctx, base);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r4,-24900(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24900);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82afb19c
	if (!ctx.cr6.eq) goto loc_82AFB19C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7bf28
	ctx.lr = 0x82AFB190;
	sub_82A7BF28(ctx, base);
	// stw r3,-24900(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24900, ctx.r3.u32);
	// bl 0x82a7bfd8
	ctx.lr = 0x82AFB198;
	sub_82A7BFD8(ctx, base);
	// lwz r4,-24900(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24900);
loc_82AFB19C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,580(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// bl 0x8273bd80
	ctx.lr = 0x82AFB1A8;
	sub_8273BD80(ctx, base);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r4,-24896(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24896);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82afb1cc
	if (!ctx.cr6.eq) goto loc_82AFB1CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7c148
	ctx.lr = 0x82AFB1C0;
	sub_82A7C148(ctx, base);
	// stw r3,-24896(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24896, ctx.r3.u32);
	// bl 0x82a7c1f8
	ctx.lr = 0x82AFB1C8;
	sub_82A7C1F8(ctx, base);
	// lwz r4,-24896(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24896);
loc_82AFB1CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,596(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8273bd80
	ctx.lr = 0x82AFB1D8;
	sub_8273BD80(ctx, base);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r4,-24892(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24892);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82afb1fc
	if (!ctx.cr6.eq) goto loc_82AFB1FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7c368
	ctx.lr = 0x82AFB1F0;
	sub_82A7C368(ctx, base);
	// stw r3,-24892(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24892, ctx.r3.u32);
	// bl 0x82a7c418
	ctx.lr = 0x82AFB1F8;
	sub_82A7C418(ctx, base);
	// lwz r4,-24892(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24892);
loc_82AFB1FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,612(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// bl 0x8273bd80
	ctx.lr = 0x82AFB208;
	sub_8273BD80(ctx, base);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r4,-24888(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24888);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82afb22c
	if (!ctx.cr6.eq) goto loc_82AFB22C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7c588
	ctx.lr = 0x82AFB220;
	sub_82A7C588(ctx, base);
	// stw r3,-24888(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24888, ctx.r3.u32);
	// bl 0x82a7c638
	ctx.lr = 0x82AFB228;
	sub_82A7C638(ctx, base);
	// lwz r4,-24888(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24888);
loc_82AFB22C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,628(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// bl 0x8273bd80
	ctx.lr = 0x82AFB238;
	sub_8273BD80(ctx, base);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r4,-24884(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24884);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82afb25c
	if (!ctx.cr6.eq) goto loc_82AFB25C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7c7a8
	ctx.lr = 0x82AFB250;
	sub_82A7C7A8(ctx, base);
	// stw r3,-24884(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24884, ctx.r3.u32);
	// bl 0x82a7c858
	ctx.lr = 0x82AFB258;
	sub_82A7C858(ctx, base);
	// lwz r4,-24884(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24884);
loc_82AFB25C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,644(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8273bd80
	ctx.lr = 0x82AFB268;
	sub_8273BD80(ctx, base);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r4,-24880(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24880);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82afb28c
	if (!ctx.cr6.eq) goto loc_82AFB28C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7c9c8
	ctx.lr = 0x82AFB280;
	sub_82A7C9C8(ctx, base);
	// stw r3,-24880(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24880, ctx.r3.u32);
	// bl 0x82a7ca78
	ctx.lr = 0x82AFB288;
	sub_82A7CA78(ctx, base);
	// lwz r4,-24880(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24880);
loc_82AFB28C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,660(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// bl 0x8273bd80
	ctx.lr = 0x82AFB298;
	sub_8273BD80(ctx, base);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r4,-24876(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24876);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82afb2bc
	if (!ctx.cr6.eq) goto loc_82AFB2BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7cbe8
	ctx.lr = 0x82AFB2B0;
	sub_82A7CBE8(ctx, base);
	// stw r3,-24876(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24876, ctx.r3.u32);
	// bl 0x82a7cc98
	ctx.lr = 0x82AFB2B8;
	sub_82A7CC98(ctx, base);
	// lwz r4,-24876(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24876);
loc_82AFB2BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,676(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x8273bd80
	ctx.lr = 0x82AFB2C8;
	sub_8273BD80(ctx, base);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r4,-24868(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24868);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82afb2ec
	if (!ctx.cr6.eq) goto loc_82AFB2EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7d028
	ctx.lr = 0x82AFB2E0;
	sub_82A7D028(ctx, base);
	// stw r3,-24868(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24868, ctx.r3.u32);
	// bl 0x82a7d0d8
	ctx.lr = 0x82AFB2E8;
	sub_82A7D0D8(ctx, base);
	// lwz r4,-24868(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24868);
loc_82AFB2EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,692(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x8273bd80
	ctx.lr = 0x82AFB2F8;
	sub_8273BD80(ctx, base);
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82afb330
	if (ctx.cr6.eq) goto loc_82AFB330;
	// bl 0x829805e8
	ctx.lr = 0x82AFB30C;
	sub_829805E8(ctx, base);
	// bl 0x82980638
	ctx.lr = 0x82AFB310;
	sub_82980638(ctx, base);
	// bl 0x82980688
	ctx.lr = 0x82AFB314;
	sub_82980688(ctx, base);
	// bl 0x82980728
	ctx.lr = 0x82AFB318;
	sub_82980728(ctx, base);
	// bl 0x82980778
	ctx.lr = 0x82AFB31C;
	sub_82980778(ctx, base);
	// bl 0x82980818
	ctx.lr = 0x82AFB320;
	sub_82980818(ctx, base);
	// bl 0x82980b48
	ctx.lr = 0x82AFB324;
	sub_82980B48(ctx, base);
	// bl 0x82980b98
	ctx.lr = 0x82AFB328;
	sub_82980B98(ctx, base);
	// bl 0x82980a58
	ctx.lr = 0x82AFB32C;
	sub_82980A58(ctx, base);
	// bl 0x829808b8
	ctx.lr = 0x82AFB330;
	sub_829808B8(ctx, base);
loc_82AFB330:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFB338"))) PPC_WEAK_FUNC(sub_82AFB338);
PPC_FUNC_IMPL(__imp__sub_82AFB338) {
	PPC_FUNC_PROLOGUE();
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82294498
	sub_82294498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFB34C"))) PPC_WEAK_FUNC(sub_82AFB34C);
PPC_FUNC_IMPL(__imp__sub_82AFB34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB350"))) PPC_WEAK_FUNC(sub_82AFB350);
PPC_FUNC_IMPL(__imp__sub_82AFB350) {
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

__attribute__((alias("__imp__sub_82AFB360"))) PPC_WEAK_FUNC(sub_82AFB360);
PPC_FUNC_IMPL(__imp__sub_82AFB360) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82afb39c
	if (ctx.cr6.eq) goto loc_82AFB39C;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82294520
	ctx.lr = 0x82AFB39C;
	sub_82294520(ctx, base);
loc_82AFB39C:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82294a58
	ctx.lr = 0x82AFB3AC;
	sub_82294A58(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82AFB3C8"))) PPC_WEAK_FUNC(sub_82AFB3C8);
PPC_FUNC_IMPL(__imp__sub_82AFB3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AFB3D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82afb448
	if (ctx.cr6.eq) goto loc_82AFB448;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82afb448
	if (!ctx.cr6.gt) goto loc_82AFB448;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1498
	ctx.lr = 0x82AFB400;
	sub_822B1498(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82afb448
	if (ctx.cr6.eq) goto loc_82AFB448;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82AFB420:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82afb454
	if (ctx.cr6.eq) goto loc_82AFB454;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82afb420
	if (!ctx.cr6.eq) goto loc_82AFB420;
loc_82AFB448:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AFB454:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFB470"))) PPC_WEAK_FUNC(sub_82AFB470);
PPC_FUNC_IMPL(__imp__sub_82AFB470) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
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

__attribute__((alias("__imp__sub_82AFB488"))) PPC_WEAK_FUNC(sub_82AFB488);
PPC_FUNC_IMPL(__imp__sub_82AFB488) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFB4AC"))) PPC_WEAK_FUNC(sub_82AFB4AC);
PPC_FUNC_IMPL(__imp__sub_82AFB4AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFB4B0"))) PPC_WEAK_FUNC(sub_82AFB4B0);
PPC_FUNC_IMPL(__imp__sub_82AFB4B0) {
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
	// beq cr6,0x82afb518
	if (ctx.cr6.eq) goto loc_82AFB518;
	// bl 0x8298ea58
	ctx.lr = 0x82AFB4D0;
	sub_8298EA58(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afb4f0
	if (ctx.cr6.eq) goto loc_82AFB4F0;
loc_82AFB4DC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82afb500
	if (ctx.cr6.eq) goto loc_82AFB500;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afb4dc
	if (!ctx.cr6.eq) goto loc_82AFB4DC;
loc_82AFB4F0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82afb518
	if (ctx.cr6.eq) goto loc_82AFB518;
loc_82AFB500:
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
loc_82AFB518:
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

__attribute__((alias("__imp__sub_82AFB530"))) PPC_WEAK_FUNC(sub_82AFB530);
PPC_FUNC_IMPL(__imp__sub_82AFB530) {
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

__attribute__((alias("__imp__sub_82AFB540"))) PPC_WEAK_FUNC(sub_82AFB540);
PPC_FUNC_IMPL(__imp__sub_82AFB540) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r5,r3,592
	ctx.r5.s64 = ctx.r3.s64 + 592;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,-924(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -924);
	// lwz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AFB574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFB584"))) PPC_WEAK_FUNC(sub_82AFB584);
PPC_FUNC_IMPL(__imp__sub_82AFB584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB588"))) PPC_WEAK_FUNC(sub_82AFB588);
PPC_FUNC_IMPL(__imp__sub_82AFB588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFB58C"))) PPC_WEAK_FUNC(sub_82AFB58C);
PPC_FUNC_IMPL(__imp__sub_82AFB58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB590"))) PPC_WEAK_FUNC(sub_82AFB590);
PPC_FUNC_IMPL(__imp__sub_82AFB590) {
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
	ctx.lr = 0x82AFB5B0;
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

__attribute__((alias("__imp__sub_82AFB5F0"))) PPC_WEAK_FUNC(sub_82AFB5F0);
PPC_FUNC_IMPL(__imp__sub_82AFB5F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-4456
	ctx.r7.s64 = ctx.r8.s64 + -4456;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 696, ctx.r11.u32);
	// stw r11,700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 700, ctx.r11.u32);
	// stw r11,704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 704, ctx.r11.u32);
	// stw r11,708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 708, ctx.r11.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// stw r6,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFB638"))) PPC_WEAK_FUNC(sub_82AFB638);
PPC_FUNC_IMPL(__imp__sub_82AFB638) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFB640"))) PPC_WEAK_FUNC(sub_82AFB640);
PPC_FUNC_IMPL(__imp__sub_82AFB640) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-4456
	ctx.r7.s64 = ctx.r8.s64 + -4456;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 696, ctx.r11.u32);
	// stw r11,700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 700, ctx.r11.u32);
	// stw r11,704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 704, ctx.r11.u32);
	// stw r11,708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 708, ctx.r11.u32);
	// stw r6,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r6.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFB680"))) PPC_WEAK_FUNC(sub_82AFB680);
PPC_FUNC_IMPL(__imp__sub_82AFB680) {
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
	// bl 0x82afb6f0
	ctx.lr = 0x82AFB6A0;
	sub_82AFB6F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afb6d4
	if (ctx.cr6.eq) goto loc_82AFB6D4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afb6cc
	if (ctx.cr6.lt) goto loc_82AFB6CC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afb6d4
	if (!ctx.cr6.gt) goto loc_82AFB6D4;
loc_82AFB6CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AFB6D4;
	sub_82294A58(ctx, base);
loc_82AFB6D4:
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

__attribute__((alias("__imp__sub_82AFB6F0"))) PPC_WEAK_FUNC(sub_82AFB6F0);
PPC_FUNC_IMPL(__imp__sub_82AFB6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82AFB6F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-4456
	ctx.r10.s64 = ctx.r11.s64 + -4456;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AFB710;
	sub_8229C068(ctx, base);
	// lwz r3,708(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 708);
	// addi r31,r28,696
	ctx.r31.s64 = ctx.r28.s64 + 696;
	// bl 0x82294a58
	ctx.lr = 0x82AFB71C;
	sub_82294A58(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,708(r28)
	PPC_STORE_U32(ctx.r28.u32 + 708, ctx.r29.u32);
	// stw r29,712(r28)
	PPC_STORE_U32(ctx.r28.u32 + 712, ctx.r29.u32);
	// bl 0x8273c500
	ctx.lr = 0x82AFB730;
	sub_8273C500(ctx, base);
	// addi r31,r28,696
	ctx.r31.s64 = ctx.r28.s64 + 696;
	// li r26,9
	ctx.r26.s64 = 9;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
loc_82AFB73C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82afb794
	if (ctx.cr6.eq) goto loc_82AFB794;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82afb794
	if (ctx.cr6.eq) goto loc_82AFB794;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82afb774
	if (!ctx.cr6.eq) goto loc_82AFB774;
	// bl 0x822900a0
	ctx.lr = 0x82AFB770;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AFB774:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AFB790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82AFB794:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82afb7c8
	if (ctx.cr6.eq) goto loc_82AFB7C8;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82afb7b4
	if (!ctx.cr6.eq) goto loc_82AFB7B4;
	// bl 0x822900a0
	ctx.lr = 0x82AFB7B0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AFB7B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AFB7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AFB7C8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bge 0x82afb73c
	if (!ctx.cr0.lt) goto loc_82AFB73C;
	// addi r3,r28,520
	ctx.r3.s64 = ctx.r28.s64 + 520;
	// bl 0x82afb820
	ctx.lr = 0x82AFB7E4;
	sub_82AFB820(ctx, base);
	// addi r3,r28,508
	ctx.r3.s64 = ctx.r28.s64 + 508;
	// bl 0x82afb820
	ctx.lr = 0x82AFB7EC;
	sub_82AFB820(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,-3136
	ctx.r10.s64 = ctx.r11.s64 + -3136;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AFB800;
	sub_8229C068(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82383c00
	ctx.lr = 0x82AFB808;
	sub_82383C00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFB810"))) PPC_WEAK_FUNC(sub_82AFB810);
PPC_FUNC_IMPL(__imp__sub_82AFB810) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFB814"))) PPC_WEAK_FUNC(sub_82AFB814);
PPC_FUNC_IMPL(__imp__sub_82AFB814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB818"))) PPC_WEAK_FUNC(sub_82AFB818);
PPC_FUNC_IMPL(__imp__sub_82AFB818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFB81C"))) PPC_WEAK_FUNC(sub_82AFB81C);
PPC_FUNC_IMPL(__imp__sub_82AFB81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB820"))) PPC_WEAK_FUNC(sub_82AFB820);
PPC_FUNC_IMPL(__imp__sub_82AFB820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AFB828;
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
	// beq cr6,0x82afb868
	if (ctx.cr6.eq) goto loc_82AFB868;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82afb854
	if (!ctx.cr6.eq) goto loc_82AFB854;
	// bl 0x822900a0
	ctx.lr = 0x82AFB850;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AFB854:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AFB868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AFB868:
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

__attribute__((alias("__imp__sub_82AFB880"))) PPC_WEAK_FUNC(sub_82AFB880);
PPC_FUNC_IMPL(__imp__sub_82AFB880) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afb820
	sub_82AFB820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFB884"))) PPC_WEAK_FUNC(sub_82AFB884);
PPC_FUNC_IMPL(__imp__sub_82AFB884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB888"))) PPC_WEAK_FUNC(sub_82AFB888);
PPC_FUNC_IMPL(__imp__sub_82AFB888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFB88C"))) PPC_WEAK_FUNC(sub_82AFB88C);
PPC_FUNC_IMPL(__imp__sub_82AFB88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB890"))) PPC_WEAK_FUNC(sub_82AFB890);
PPC_FUNC_IMPL(__imp__sub_82AFB890) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82afb8c8
	if (ctx.cr6.eq) goto loc_82AFB8C8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x82AFB8C8;
	sub_82294520(ctx, base);
loc_82AFB8C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82AFB8D0;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_82AFB8E4"))) PPC_WEAK_FUNC(sub_82AFB8E4);
PPC_FUNC_IMPL(__imp__sub_82AFB8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB8E8"))) PPC_WEAK_FUNC(sub_82AFB8E8);
PPC_FUNC_IMPL(__imp__sub_82AFB8E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-3456
	ctx.r7.s64 = ctx.r9.s64 + -3456;
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

__attribute__((alias("__imp__sub_82AFB918"))) PPC_WEAK_FUNC(sub_82AFB918);
PPC_FUNC_IMPL(__imp__sub_82AFB918) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFB920"))) PPC_WEAK_FUNC(sub_82AFB920);
PPC_FUNC_IMPL(__imp__sub_82AFB920) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-3456
	ctx.r7.s64 = ctx.r9.s64 + -3456;
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

__attribute__((alias("__imp__sub_82AFB948"))) PPC_WEAK_FUNC(sub_82AFB948);
PPC_FUNC_IMPL(__imp__sub_82AFB948) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-3456
	ctx.r10.s64 = ctx.r11.s64 + -3456;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AFB974;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829db598
	ctx.lr = 0x82AFB97C;
	sub_829DB598(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82afb9b0
	if (ctx.cr6.eq) goto loc_82AFB9B0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afb9a8
	if (ctx.cr6.lt) goto loc_82AFB9A8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afb9b0
	if (!ctx.cr6.gt) goto loc_82AFB9B0;
loc_82AFB9A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AFB9B0;
	sub_82294A58(ctx, base);
loc_82AFB9B0:
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

__attribute__((alias("__imp__sub_82AFB9CC"))) PPC_WEAK_FUNC(sub_82AFB9CC);
PPC_FUNC_IMPL(__imp__sub_82AFB9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB9D0"))) PPC_WEAK_FUNC(sub_82AFB9D0);
PPC_FUNC_IMPL(__imp__sub_82AFB9D0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-3456
	ctx.r10.s64 = ctx.r11.s64 + -3456;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AFB9F4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829db598
	ctx.lr = 0x82AFB9FC;
	sub_829DB598(ctx, base);
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

__attribute__((alias("__imp__sub_82AFBA10"))) PPC_WEAK_FUNC(sub_82AFBA10);
PPC_FUNC_IMPL(__imp__sub_82AFBA10) {
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
	ctx.lr = 0x82AFBA28;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afbaac
	if (ctx.cr6.eq) goto loc_82AFBAAC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-2460
	ctx.r11.s64 = ctx.r8.s64 + -2460;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-8808
	ctx.r6.s64 = ctx.r5.s64 + -8808;
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,492
	ctx.r5.s64 = 492;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AFBA9C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AFBAAC:
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

__attribute__((alias("__imp__sub_82AFBAC0"))) PPC_WEAK_FUNC(sub_82AFBAC0);
PPC_FUNC_IMPL(__imp__sub_82AFBAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AFBAC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afbaf4
	if (!ctx.cr6.eq) goto loc_82AFBAF4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604fa0
	ctx.lr = 0x82AFBAE8;
	sub_82604FA0(ctx, base);
	// stw r3,-28640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28640, ctx.r3.u32);
	// bl 0x82605060
	ctx.lr = 0x82AFBAF0;
	sub_82605060(ctx, base);
	// lwz r10,-28640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
loc_82AFBAF4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24056);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82afbb14
	if (ctx.cr6.eq) goto loc_82AFBB14;
	// bl 0x82313628
	ctx.lr = 0x82AFBB08;
	sub_82313628(ctx, base);
	// lwz r11,-24056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24056);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82afbb1c
	goto loc_82AFBB1C;
loc_82AFBB14:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AFBB1C:
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
	// bne cr6,0x82afbb4c
	if (!ctx.cr6.eq) goto loc_82AFBB4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AFBB3C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AFBB44;
	sub_822AADA8(ctx, base);
	// lwz r11,-24056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24056);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AFBB4C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afbb78
	if (!ctx.cr6.eq) goto loc_82AFBB78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AFBB68;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AFBB70;
	sub_82398640(ctx, base);
	// lwz r11,-24056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24056);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AFBB78:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82afbbb0
	if (ctx.cr6.eq) goto loc_82AFBBB0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AFBB94;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82afbbb0
	if (!ctx.cr6.eq) goto loc_82AFBBB0;
	// lwz r3,-24056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AFBBB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AFBBB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFBBB8"))) PPC_WEAK_FUNC(sub_82AFBBB8);
PPC_FUNC_IMPL(__imp__sub_82AFBBB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFBBC0"))) PPC_WEAK_FUNC(sub_82AFBBC0);
PPC_FUNC_IMPL(__imp__sub_82AFBBC0) {
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
	// lwz r11,-28640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afbc04
	if (!ctx.cr6.eq) goto loc_82AFBC04;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604fa0
	ctx.lr = 0x82AFBBF8;
	sub_82604FA0(ctx, base);
	// stw r3,-28640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28640, ctx.r3.u32);
	// bl 0x82605060
	ctx.lr = 0x82AFBC00;
	sub_82605060(ctx, base);
	// lwz r11,-28640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
loc_82AFBC04:
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

__attribute__((alias("__imp__sub_82AFBC2C"))) PPC_WEAK_FUNC(sub_82AFBC2C);
PPC_FUNC_IMPL(__imp__sub_82AFBC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFBC30"))) PPC_WEAK_FUNC(sub_82AFBC30);
PPC_FUNC_IMPL(__imp__sub_82AFBC30) {
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
	ctx.lr = 0x82AFBC48;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afbccc
	if (ctx.cr6.eq) goto loc_82AFBCCC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-2428
	ctx.r11.s64 = ctx.r8.s64 + -2428;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-9792
	ctx.r6.s64 = ctx.r5.s64 + -9792;
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
	// li r5,652
	ctx.r5.s64 = 652;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AFBCBC;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AFBCCC:
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

__attribute__((alias("__imp__sub_82AFBCE0"))) PPC_WEAK_FUNC(sub_82AFBCE0);
PPC_FUNC_IMPL(__imp__sub_82AFBCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AFBCE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-24056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24056);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afbd14
	if (!ctx.cr6.eq) goto loc_82AFBD14;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82afba10
	ctx.lr = 0x82AFBD08;
	sub_82AFBA10(ctx, base);
	// stw r3,-24056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24056, ctx.r3.u32);
	// bl 0x82afbac0
	ctx.lr = 0x82AFBD10;
	sub_82AFBAC0(ctx, base);
	// lwz r10,-24056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24056);
loc_82AFBD14:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24052(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24052);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82afbd34
	if (ctx.cr6.eq) goto loc_82AFBD34;
	// bl 0x82983c98
	ctx.lr = 0x82AFBD28;
	sub_82983C98(ctx, base);
	// lwz r11,-24052(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24052);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82afbd3c
	goto loc_82AFBD3C;
loc_82AFBD34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AFBD3C:
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
	// bne cr6,0x82afbd6c
	if (!ctx.cr6.eq) goto loc_82AFBD6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AFBD5C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AFBD64;
	sub_822AADA8(ctx, base);
	// lwz r11,-24052(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24052);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AFBD6C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afbd98
	if (!ctx.cr6.eq) goto loc_82AFBD98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AFBD88;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AFBD90;
	sub_82398640(ctx, base);
	// lwz r11,-24052(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24052);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AFBD98:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82afbdd0
	if (ctx.cr6.eq) goto loc_82AFBDD0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AFBDB4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82afbdd0
	if (!ctx.cr6.eq) goto loc_82AFBDD0;
	// lwz r3,-24052(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24052);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AFBDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AFBDD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFBDD8"))) PPC_WEAK_FUNC(sub_82AFBDD8);
PPC_FUNC_IMPL(__imp__sub_82AFBDD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFBDE0"))) PPC_WEAK_FUNC(sub_82AFBDE0);
PPC_FUNC_IMPL(__imp__sub_82AFBDE0) {
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
	// lwz r11,-24056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24056);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afbe24
	if (!ctx.cr6.eq) goto loc_82AFBE24;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82afba10
	ctx.lr = 0x82AFBE18;
	sub_82AFBA10(ctx, base);
	// stw r3,-24056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24056, ctx.r3.u32);
	// bl 0x82afbac0
	ctx.lr = 0x82AFBE20;
	sub_82AFBAC0(ctx, base);
	// lwz r11,-24056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24056);
loc_82AFBE24:
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

__attribute__((alias("__imp__sub_82AFBE4C"))) PPC_WEAK_FUNC(sub_82AFBE4C);
PPC_FUNC_IMPL(__imp__sub_82AFBE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFBE50"))) PPC_WEAK_FUNC(sub_82AFBE50);
PPC_FUNC_IMPL(__imp__sub_82AFBE50) {
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
	ctx.lr = 0x82AFBE68;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afbeec
	if (ctx.cr6.eq) goto loc_82AFBEEC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-2404
	ctx.r11.s64 = ctx.r8.s64 + -2404;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-10104
	ctx.r6.s64 = ctx.r5.s64 + -10104;
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
	// li r5,500
	ctx.r5.s64 = 500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AFBEDC;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AFBEEC:
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

__attribute__((alias("__imp__sub_82AFBF00"))) PPC_WEAK_FUNC(sub_82AFBF00);
PPC_FUNC_IMPL(__imp__sub_82AFBF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AFBF08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28932);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afbf34
	if (!ctx.cr6.eq) goto loc_82AFBF34;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d6e50
	ctx.lr = 0x82AFBF28;
	sub_825D6E50(ctx, base);
	// stw r3,-28932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28932, ctx.r3.u32);
	// bl 0x825d6f10
	ctx.lr = 0x82AFBF30;
	sub_825D6F10(ctx, base);
	// lwz r10,-28932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28932);
loc_82AFBF34:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24048);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82afbf54
	if (ctx.cr6.eq) goto loc_82AFBF54;
	// bl 0x823119b8
	ctx.lr = 0x82AFBF48;
	sub_823119B8(ctx, base);
	// lwz r11,-24048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24048);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82afbf5c
	goto loc_82AFBF5C;
loc_82AFBF54:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AFBF5C:
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
	// bne cr6,0x82afbf8c
	if (!ctx.cr6.eq) goto loc_82AFBF8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AFBF7C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AFBF84;
	sub_822AADA8(ctx, base);
	// lwz r11,-24048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24048);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AFBF8C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afbfb8
	if (!ctx.cr6.eq) goto loc_82AFBFB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AFBFA8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AFBFB0;
	sub_82398640(ctx, base);
	// lwz r11,-24048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24048);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AFBFB8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82afbff0
	if (ctx.cr6.eq) goto loc_82AFBFF0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AFBFD4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82afbff0
	if (!ctx.cr6.eq) goto loc_82AFBFF0;
	// lwz r3,-24048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24048);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AFBFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AFBFF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFBFF8"))) PPC_WEAK_FUNC(sub_82AFBFF8);
PPC_FUNC_IMPL(__imp__sub_82AFBFF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFC000"))) PPC_WEAK_FUNC(sub_82AFC000);
PPC_FUNC_IMPL(__imp__sub_82AFC000) {
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
	// lwz r11,-28932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28932);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afc044
	if (!ctx.cr6.eq) goto loc_82AFC044;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d6e50
	ctx.lr = 0x82AFC038;
	sub_825D6E50(ctx, base);
	// stw r3,-28932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28932, ctx.r3.u32);
	// bl 0x825d6f10
	ctx.lr = 0x82AFC040;
	sub_825D6F10(ctx, base);
	// lwz r11,-28932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28932);
loc_82AFC044:
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

__attribute__((alias("__imp__sub_82AFC06C"))) PPC_WEAK_FUNC(sub_82AFC06C);
PPC_FUNC_IMPL(__imp__sub_82AFC06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFC070"))) PPC_WEAK_FUNC(sub_82AFC070);
PPC_FUNC_IMPL(__imp__sub_82AFC070) {
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
	ctx.lr = 0x82AFC088;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afc10c
	if (ctx.cr6.eq) goto loc_82AFC10C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-2356
	ctx.r11.s64 = ctx.r8.s64 + -2356;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-10512
	ctx.r6.s64 = ctx.r5.s64 + -10512;
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
	// li r5,272
	ctx.r5.s64 = 272;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AFC0FC;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AFC10C:
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

__attribute__((alias("__imp__sub_82AFC120"))) PPC_WEAK_FUNC(sub_82AFC120);
PPC_FUNC_IMPL(__imp__sub_82AFC120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AFC128;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28956);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afc154
	if (!ctx.cr6.eq) goto loc_82AFC154;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d6130
	ctx.lr = 0x82AFC148;
	sub_825D6130(ctx, base);
	// stw r3,-28956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28956, ctx.r3.u32);
	// bl 0x825d61f0
	ctx.lr = 0x82AFC150;
	sub_825D61F0(ctx, base);
	// lwz r10,-28956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28956);
loc_82AFC154:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24044(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24044);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82afc174
	if (ctx.cr6.eq) goto loc_82AFC174;
	// bl 0x82311968
	ctx.lr = 0x82AFC168;
	sub_82311968(ctx, base);
	// lwz r11,-24044(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24044);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82afc17c
	goto loc_82AFC17C;
loc_82AFC174:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AFC17C:
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
	// bne cr6,0x82afc1ac
	if (!ctx.cr6.eq) goto loc_82AFC1AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AFC19C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AFC1A4;
	sub_822AADA8(ctx, base);
	// lwz r11,-24044(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24044);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AFC1AC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afc1d8
	if (!ctx.cr6.eq) goto loc_82AFC1D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AFC1C8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AFC1D0;
	sub_82398640(ctx, base);
	// lwz r11,-24044(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24044);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AFC1D8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82afc210
	if (ctx.cr6.eq) goto loc_82AFC210;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AFC1F4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82afc210
	if (!ctx.cr6.eq) goto loc_82AFC210;
	// lwz r3,-24044(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24044);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AFC210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AFC210:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFC218"))) PPC_WEAK_FUNC(sub_82AFC218);
PPC_FUNC_IMPL(__imp__sub_82AFC218) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFC220"))) PPC_WEAK_FUNC(sub_82AFC220);
PPC_FUNC_IMPL(__imp__sub_82AFC220) {
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
	// lwz r11,-28956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28956);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afc264
	if (!ctx.cr6.eq) goto loc_82AFC264;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d6130
	ctx.lr = 0x82AFC258;
	sub_825D6130(ctx, base);
	// stw r3,-28956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28956, ctx.r3.u32);
	// bl 0x825d61f0
	ctx.lr = 0x82AFC260;
	sub_825D61F0(ctx, base);
	// lwz r11,-28956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28956);
loc_82AFC264:
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

__attribute__((alias("__imp__sub_82AFC28C"))) PPC_WEAK_FUNC(sub_82AFC28C);
PPC_FUNC_IMPL(__imp__sub_82AFC28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFC290"))) PPC_WEAK_FUNC(sub_82AFC290);
PPC_FUNC_IMPL(__imp__sub_82AFC290) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d7ce8
	sub_829D7CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFC294"))) PPC_WEAK_FUNC(sub_82AFC294);
PPC_FUNC_IMPL(__imp__sub_82AFC294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFC298"))) PPC_WEAK_FUNC(sub_82AFC298);
PPC_FUNC_IMPL(__imp__sub_82AFC298) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d7e18
	sub_829D7E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFC29C"))) PPC_WEAK_FUNC(sub_82AFC29C);
PPC_FUNC_IMPL(__imp__sub_82AFC29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFC2A0"))) PPC_WEAK_FUNC(sub_82AFC2A0);
PPC_FUNC_IMPL(__imp__sub_82AFC2A0) {
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
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x825dc460
	ctx.lr = 0x82AFC2C0;
	sub_825DC460(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r10,r11,13676
	ctx.r10.s64 = ctx.r11.s64 + 13676;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82AFC2DC;
	sub_82CB1160(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82cb1160
	ctx.lr = 0x82AFC2EC;
	sub_82CB1160(ctx, base);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-1972
	ctx.r8.s64 = ctx.r9.s64 + -1972;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82AFC314"))) PPC_WEAK_FUNC(sub_82AFC314);
PPC_FUNC_IMPL(__imp__sub_82AFC314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFC318"))) PPC_WEAK_FUNC(sub_82AFC318);
PPC_FUNC_IMPL(__imp__sub_82AFC318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afc398
	if (ctx.cr6.eq) goto loc_82AFC398;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82afc340
	if (ctx.cr6.gt) goto loc_82AFC340;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82afc348
	goto loc_82AFC348;
loc_82AFC340:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AFC348:
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82afc398
	if (ctx.cr6.eq) goto loc_82AFC398;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-24040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24040);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afc368
	if (!ctx.cr6.eq) goto loc_82AFC368;
	// b 0x825d8000
	sub_825D8000(ctx, base);
	return;
loc_82AFC368:
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,2432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2432);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,2600(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// b 0x825d8000
	sub_825D8000(ctx, base);
	return;
loc_82AFC398:
	// b 0x825d8000
	sub_825D8000(ctx, base);
	return;
}

