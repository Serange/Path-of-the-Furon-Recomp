#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8307A6E8"))) PPC_WEAK_FUNC(sub_8307A6E8);
PPC_FUNC_IMPL(__imp__sub_8307A6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8307A6F0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ae4
	ctx.lr = 0x8307A6F8;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r10,768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8307a87c
	if (ctx.cr6.eq) goto loc_8307A87C;
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f10,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f7,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmadds f6,f3,f4,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmsubs f5,f7,f8,f1
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 - ctx.f1.f64));
	// fmadds f1,f3,f8,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f0,f2,f8,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f10,f7,f12,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fnmsubs f8,f3,f9,f5
	ctx.f8.f64 = double(float(-(ctx.f3.f64 * ctx.f9.f64 - ctx.f5.f64)));
	// fmadds f6,f2,f12,f1
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f5,f7,f4,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fnmsubs f30,f2,f9,f10
	ctx.f30.f64 = double(float(-(ctx.f2.f64 * ctx.f9.f64 - ctx.f10.f64)));
	// fnmsubs f31,f2,f4,f8
	ctx.f31.f64 = double(float(-(ctx.f2.f64 * ctx.f4.f64 - ctx.f8.f64)));
	// fnmsubs f29,f11,f4,f6
	ctx.f29.f64 = double(float(-(ctx.f11.f64 * ctx.f4.f64 - ctx.f6.f64)));
	// fnmsubs f28,f3,f12,f5
	ctx.f28.f64 = double(float(-(ctx.f3.f64 * ctx.f12.f64 - ctx.f5.f64)));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x8307a7a8
	if (!ctx.cr6.lt) goto loc_8307A7A8;
	// fneg f30,f30
	ctx.f30.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fneg f29,f29
	ctx.f29.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fneg f28,f28
	ctx.f28.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fneg f31,f31
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
loc_8307A7A8:
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f12,f30,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f11,f28,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f12.f64));
	// fmadds f10,f31,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fsqrts f0,f10
	ctx.f0.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8307a7e0
	if (ctx.cr6.eq) goto loc_8307A7E0;
	// fdivs f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 / ctx.f0.f64));
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f28,f0,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_8307A7E0:
	// fsubs f12,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17972(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17972);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x8307a870
	if (!ctx.cr6.gt) goto loc_8307A870;
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// blt cr6,0x8307a808
	if (ctx.cr6.lt) goto loc_8307A808;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8307a830
	goto loc_8307A830;
loc_8307A808:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8307a824
	if (ctx.cr6.gt) goto loc_8307A824;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,-3224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3224);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8307a830
	goto loc_8307A830;
loc_8307A824:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb44c0
	ctx.lr = 0x8307A82C;
	sub_82CB44C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_8307A830:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// fnmsubs f13,f31,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-(ctx.f31.f64 * ctx.f31.f64 - ctx.f27.f64)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f10,f13
	ctx.f10.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// stfs f7,548(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// fmuls f6,f8,f29
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// stfs f6,552(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// fmuls f5,f8,f28
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// stfs f5,556(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// b 0x8307a87c
	goto loc_8307A87C;
loc_8307A870:
	// stfs f13,556(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f13,552(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f13,548(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
loc_8307A87C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307A888;
	sub_83047B48(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,164(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stb r28,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r28.u8);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307A8BC;
	sub_83047B48(ctx, base);
	// lfs f10,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f10,168(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,172(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,176(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stb r28,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r28.u8);
	// bl 0x8307a2c8
	ctx.lr = 0x8307A8E4;
	sub_8307A2C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b30
	ctx.lr = 0x8307A8F0;
	__restfpr_27(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A8F4"))) PPC_WEAK_FUNC(sub_8307A8F4);
PPC_FUNC_IMPL(__imp__sub_8307A8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A8F8"))) PPC_WEAK_FUNC(sub_8307A8F8);
PPC_FUNC_IMPL(__imp__sub_8307A8F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8315bb30
	sub_8315BB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A910"))) PPC_WEAK_FUNC(sub_8307A910);
PPC_FUNC_IMPL(__imp__sub_8307A910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A914"))) PPC_WEAK_FUNC(sub_8307A914);
PPC_FUNC_IMPL(__imp__sub_8307A914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A918"))) PPC_WEAK_FUNC(sub_8307A918);
PPC_FUNC_IMPL(__imp__sub_8307A918) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8307a950
	if (ctx.cr6.eq) goto loc_8307A950;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8315bb30
	sub_8315BB30(ctx, base);
	return;
loc_8307A950:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8315bb30
	sub_8315BB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A964"))) PPC_WEAK_FUNC(sub_8307A964);
PPC_FUNC_IMPL(__imp__sub_8307A964) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A968"))) PPC_WEAK_FUNC(sub_8307A968);
PPC_FUNC_IMPL(__imp__sub_8307A968) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8307a9ac
	if (!ctx.cr6.eq) goto loc_8307A9AC;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8307a9ac
	if (!ctx.cr6.eq) goto loc_8307A9AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8315bb30
	sub_8315BB30(ctx, base);
	return;
loc_8307A9AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8315bb30
	sub_8315BB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A9D8"))) PPC_WEAK_FUNC(sub_8307A9D8);
PPC_FUNC_IMPL(__imp__sub_8307A9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A9DC"))) PPC_WEAK_FUNC(sub_8307A9DC);
PPC_FUNC_IMPL(__imp__sub_8307A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A9E0"))) PPC_WEAK_FUNC(sub_8307A9E0);
PPC_FUNC_IMPL(__imp__sub_8307A9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,368(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,372(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,376(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A9FC"))) PPC_WEAK_FUNC(sub_8307A9FC);
PPC_FUNC_IMPL(__imp__sub_8307A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307AA00"))) PPC_WEAK_FUNC(sub_8307AA00);
PPC_FUNC_IMPL(__imp__sub_8307AA00) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r31,368
	ctx.r11.s64 = ctx.r31.s64 + 368;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,376(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307AA40;
	sub_83047B48(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r9.u8);
	// lfs f11,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,128(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f10,372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,132(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f9,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,136(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
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

__attribute__((alias("__imp__sub_8307AA74"))) PPC_WEAK_FUNC(sub_8307AA74);
PPC_FUNC_IMPL(__imp__sub_8307AA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307AA78"))) PPC_WEAK_FUNC(sub_8307AA78);
PPC_FUNC_IMPL(__imp__sub_8307AA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,380(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,384(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,388(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AA94"))) PPC_WEAK_FUNC(sub_8307AA94);
PPC_FUNC_IMPL(__imp__sub_8307AA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307AA98"))) PPC_WEAK_FUNC(sub_8307AA98);
PPC_FUNC_IMPL(__imp__sub_8307AA98) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r31,380
	ctx.r11.s64 = ctx.r31.s64 + 380;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,388(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307AAD8;
	sub_83047B48(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r9.u8);
	// lfs f11,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lfs f10,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,144(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lfs f9,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,148(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
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

__attribute__((alias("__imp__sub_8307AB0C"))) PPC_WEAK_FUNC(sub_8307AB0C);
PPC_FUNC_IMPL(__imp__sub_8307AB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307AB10"))) PPC_WEAK_FUNC(sub_8307AB10);
PPC_FUNC_IMPL(__imp__sub_8307AB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,424(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AB18"))) PPC_WEAK_FUNC(sub_8307AB18);
PPC_FUNC_IMPL(__imp__sub_8307AB18) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// stfs f1,424(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307ab64
	if (!ctx.cr6.eq) goto loc_8307AB64;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lfs f0,428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307ab64
	if (ctx.cr6.eq) goto loc_8307AB64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8315bd60
	ctx.lr = 0x8307AB64;
	sub_8315BD60(ctx, base);
loc_8307AB64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AB74"))) PPC_WEAK_FUNC(sub_8307AB74);
PPC_FUNC_IMPL(__imp__sub_8307AB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307AB78"))) PPC_WEAK_FUNC(sub_8307AB78);
PPC_FUNC_IMPL(__imp__sub_8307AB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,428(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AB80"))) PPC_WEAK_FUNC(sub_8307AB80);
PPC_FUNC_IMPL(__imp__sub_8307AB80) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// stfs f1,428(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307abcc
	if (!ctx.cr6.eq) goto loc_8307ABCC;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lfs f0,424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307abcc
	if (ctx.cr6.eq) goto loc_8307ABCC;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8315bd60
	ctx.lr = 0x8307ABCC;
	sub_8315BD60(ctx, base);
loc_8307ABCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ABDC"))) PPC_WEAK_FUNC(sub_8307ABDC);
PPC_FUNC_IMPL(__imp__sub_8307ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307ABE0"))) PPC_WEAK_FUNC(sub_8307ABE0);
PPC_FUNC_IMPL(__imp__sub_8307ABE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ABE8"))) PPC_WEAK_FUNC(sub_8307ABE8);
PPC_FUNC_IMPL(__imp__sub_8307ABE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,448(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ABF0"))) PPC_WEAK_FUNC(sub_8307ABF0);
PPC_FUNC_IMPL(__imp__sub_8307ABF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,448(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 448, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ABF8"))) PPC_WEAK_FUNC(sub_8307ABF8);
PPC_FUNC_IMPL(__imp__sub_8307ABF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,452(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AC00"))) PPC_WEAK_FUNC(sub_8307AC00);
PPC_FUNC_IMPL(__imp__sub_8307AC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,452(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AC08"))) PPC_WEAK_FUNC(sub_8307AC08);
PPC_FUNC_IMPL(__imp__sub_8307AC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,296(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AC10"))) PPC_WEAK_FUNC(sub_8307AC10);
PPC_FUNC_IMPL(__imp__sub_8307AC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,296(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AC18"))) PPC_WEAK_FUNC(sub_8307AC18);
PPC_FUNC_IMPL(__imp__sub_8307AC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,456(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AC20"))) PPC_WEAK_FUNC(sub_8307AC20);
PPC_FUNC_IMPL(__imp__sub_8307AC20) {
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
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// stfs f1,456(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8307ac70
	if (!ctx.cr6.eq) goto loc_8307AC70;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,-18264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x8307ac70
	if (ctx.cr6.eq) goto loc_8307AC70;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8315bd60
	ctx.lr = 0x8307AC70;
	sub_8315BD60(ctx, base);
loc_8307AC70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AC80"))) PPC_WEAK_FUNC(sub_8307AC80);
PPC_FUNC_IMPL(__imp__sub_8307AC80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,464(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AC88"))) PPC_WEAK_FUNC(sub_8307AC88);
PPC_FUNC_IMPL(__imp__sub_8307AC88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r4.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8315bb30
	sub_8315BB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307AC9C"))) PPC_WEAK_FUNC(sub_8307AC9C);
PPC_FUNC_IMPL(__imp__sub_8307AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307ACA0"))) PPC_WEAK_FUNC(sub_8307ACA0);
PPC_FUNC_IMPL(__imp__sub_8307ACA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,460(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ACA8"))) PPC_WEAK_FUNC(sub_8307ACA8);
PPC_FUNC_IMPL(__imp__sub_8307ACA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,460(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ACB0"))) PPC_WEAK_FUNC(sub_8307ACB0);
PPC_FUNC_IMPL(__imp__sub_8307ACB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ACB8"))) PPC_WEAK_FUNC(sub_8307ACB8);
PPC_FUNC_IMPL(__imp__sub_8307ACB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ACC0"))) PPC_WEAK_FUNC(sub_8307ACC0);
PPC_FUNC_IMPL(__imp__sub_8307ACC0) {
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
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8307ad14
	if (ctx.cr6.eq) goto loc_8307AD14;
loc_8307ACE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8307ad08
	if (!ctx.cr6.eq) goto loc_8307AD08;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307AD08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307AD08:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8307ace4
	if (!ctx.cr6.eq) goto loc_8307ACE4;
loc_8307AD14:
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

__attribute__((alias("__imp__sub_8307AD2C"))) PPC_WEAK_FUNC(sub_8307AD2C);
PPC_FUNC_IMPL(__imp__sub_8307AD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307AD30"))) PPC_WEAK_FUNC(sub_8307AD30);
PPC_FUNC_IMPL(__imp__sub_8307AD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8307AD38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8307ad88
	if (!ctx.cr6.eq) goto loc_8307AD88;
	// lwz r29,332(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8307ad88
	if (ctx.cr6.eq) goto loc_8307AD88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830776c0
	ctx.lr = 0x8307AD68;
	sub_830776C0(ctx, base);
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307AD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
loc_8307AD88:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// stw r31,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r31.u32);
	// rlwinm r8,r11,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r31,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r31.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// beq cr6,0x8307add0
	if (ctx.cr6.eq) goto loc_8307ADD0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-18136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8307a200
	ctx.lr = 0x8307ADD0;
	sub_8307A200(ctx, base);
loc_8307ADD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307ADD8"))) PPC_WEAK_FUNC(sub_8307ADD8);
PPC_FUNC_IMPL(__imp__sub_8307ADD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8307ADE0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ac4
	ctx.lr = 0x8307ADE8;
	__savefpr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lfs f27,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f27.f64 = double(temp.f32);
	// rlwinm r8,r11,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// lfs f22,-2800(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2800);
	ctx.f22.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8307b148
	if (ctx.cr6.eq) goto loc_8307B148;
	// lfs f0,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// bge cr6,0x8307b0fc
	if (!ctx.cr6.lt) goto loc_8307B0FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f23,f27
	ctx.cr6.compare(ctx.f23.f64, ctx.f27.f64);
	// lfs f30,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x8307ae38
	if (!ctx.cr6.gt) goto loc_8307AE38;
	// fdivs f0,f30,f23
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f23.f64));
	// b 0x8307ae3c
	goto loc_8307AE3C;
loc_8307AE38:
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
loc_8307AE3C:
	// lfs f13,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f5,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f5.f64 = double(temp.f32);
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f3,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// lfs f12,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f1,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfs f31,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f28,f6,f3
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// lfs f29,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// fmadds f2,f7,f4,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmuls f26,f8,f0
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f25,f9,f0
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f13,f5,f4,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 - ctx.f13.f64));
	// fmadds f12,f5,f1,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f9,f5,f10,f28
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f28.f64));
	// fmuls f24,f31,f0
	ctx.f24.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmadds f8,f11,f1,f2
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fnmsubs f5,f7,f3,f13
	ctx.f5.f64 = double(float(-(ctx.f7.f64 * ctx.f3.f64 - ctx.f13.f64)));
	// fmadds f2,f6,f4,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmadds f13,f11,f4,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fnmsubs f12,f6,f10,f8
	ctx.f12.f64 = double(float(-(ctx.f6.f64 * ctx.f10.f64 - ctx.f8.f64)));
	// fnmsubs f10,f6,f1,f5
	ctx.f10.f64 = double(float(-(ctx.f6.f64 * ctx.f1.f64 - ctx.f5.f64)));
	// fnmsubs f11,f11,f3,f2
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f3.f64 - ctx.f2.f64)));
	// fnmsubs f13,f7,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f7.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// fcmpu cr6,f10,f27
	ctx.cr6.compare(ctx.f10.f64, ctx.f27.f64);
	// bge cr6,0x8307aef0
	if (!ctx.cr6.lt) goto loc_8307AEF0;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_8307AEF0:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f31,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmuls f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// fmuls f2,f9,f31
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lwz r11,68(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// fmuls f3,f12,f31
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// fmuls f13,f8,f4
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// lfs f29,6380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f11,f2,f10
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f9,f7,f2
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f12,f7,f3
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmsubs f5,f6,f6,f29
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 - ctx.f29.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f13,f3,f10,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 - ctx.f13.f64));
	// fmsubs f11,f7,f4,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 - ctx.f11.f64));
	// fmadds f9,f10,f4,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmsubs f12,f8,f2,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 - ctx.f12.f64));
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f21,f3,f5
	ctx.f21.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fadds f28,f0,f30
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f0,f11,f6
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f13,f8,f3,f9
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmuls f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fsubs f12,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f9,f21,f0
	ctx.f9.f64 = double(float(ctx.f21.f64 - ctx.f0.f64));
	// fmuls f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fsubs f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fmuls f21,f3,f31
	ctx.f21.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmuls f20,f2,f31
	ctx.f20.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f19,f1,f31
	ctx.f19.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8307AFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f26,f0
	ctx.f11.f64 = double(float(ctx.f26.f64 + ctx.f0.f64));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f13,f25
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f0,f30,f10
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f13,f30,f8
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f8.f64));
	// lfs f6,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f12,f30,f7
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f7.f64));
	// lfs f5,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f24
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f24.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r29,r31,304
	ctx.r29.s64 = ctx.r31.s64 + 304;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r30,r31,316
	ctx.r30.s64 = ctx.r31.s64 + 316;
	// stfs f11,304(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// fmuls f30,f5,f28
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,308(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f4,312(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lfs f1,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f11,f1,f20
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f20.f64));
	// lfs f3,324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f2.f64 = double(temp.f32);
	// fadds f9,f3,f19
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f19.f64));
	// fadds f10,f21,f2
	ctx.f10.f64 = double(float(ctx.f21.f64 + ctx.f2.f64));
	// stfs f10,316(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f11,320(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f9,324(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// fmr f3,f11
	ctx.f3.f64 = ctx.f11.f64;
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// fmuls f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f11,f6,f5
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmadds f10,f1,f12,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// fmadds f26,f11,f0,f10
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307B09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f9,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f9
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lfs f7,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f1,f26
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// fmadds f4,f7,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fmuls f0,f2,f29
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8307b0fc
	if (!ctx.cr6.gt) goto loc_8307B0FC;
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f13,f28,f23
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f23.f64));
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsel f11,f12,f31,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fmadds f1,f11,f22,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f22.f64 + ctx.f13.f64));
	// bl 0x8307a200
	ctx.lr = 0x8307B0E4;
	sub_8307A200(ctx, base);
	// stfs f27,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f27,4(r29)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f27,0(r29)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f27,8(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f27,4(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f27,0(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8307B0FC:
	// lfs f31,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// beq cr6,0x8307b10c
	if (ctx.cr6.eq) goto loc_8307B10C;
	// fsubs f31,f31,f23
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f23.f64));
loc_8307B10C:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bgt cr6,0x8307b140
	if (ctx.cr6.gt) goto loc_8307B140;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r4,7
	ctx.r4.s64 = 7;
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// bl 0x8315bb30
	ctx.lr = 0x8307B128;
	sub_8315BB30(ctx, base);
	// stfs f27,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f27,308(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f27,304(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f27,324(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f27,320(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f27,316(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
loc_8307B140:
	// stfs f31,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// b 0x8307b2e4
	goto loc_8307B2E4;
loc_8307B148:
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// lfs f12,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f9,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// beq cr6,0x8307b258
	if (ctx.cr6.eq) goto loc_8307B258;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f6,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f6.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f5,592(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,596(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	ctx.f3.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f4,584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	ctx.f4.f64 = double(temp.f32);
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// lfs f2,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,-2804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2804);
	ctx.f0.f64 = double(temp.f32);
	// fmr f26,f2
	ctx.f26.f64 = ctx.f2.f64;
	// lfs f13,7508(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7508);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f6,588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f31,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f30,592(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r11,r31,576
	ctx.r11.s64 = ctx.r31.s64 + 576;
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// addi r11,r31,588
	ctx.r11.s64 = ctx.r31.s64 + 588;
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f24,f12,f0
	ctx.f24.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,7616(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7616);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f11,580(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// fmuls f9,f6,f13
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fadds f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fmr f25,f6
	ctx.f25.f64 = ctx.f6.f64;
	// fadds f5,f3,f7
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f6,f4,f10
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f6,584(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// fadds f4,f2,f24
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f24.f64));
	// stfs f4,576(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f8,592(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// fadds f3,f31,f11
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f11.f64));
	// stfs f5,596(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// fadds f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f2,588(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// fadds f1,f30,f8
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f8.f64));
	// fadds f13,f28,f5
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f5.f64));
	// fadds f0,f29,f6
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f6.f64));
	// fadds f11,f26,f4
	ctx.f11.f64 = double(float(ctx.f26.f64 + ctx.f4.f64));
	// fmuls f10,f3,f3
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fadds f9,f25,f2
	ctx.f9.f64 = double(float(ctx.f25.f64 + ctx.f2.f64));
	// fmuls f8,f1,f1
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f7,f0,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f6,f13,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f5,f11,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f4,f9,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmuls f31,f5,f12
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f30,f4,f12
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// b 0x8307b270
	goto loc_8307B270;
loc_8307B258:
	// fmuls f0,f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f13,f7,f7
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f12,f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f10,f9,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f31,f11,f11,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f30,f8,f8,f10
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f10.f64));
loc_8307B270:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307B284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8307b2d4
	if (!ctx.cr6.lt) goto loc_8307B2D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307B2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f1.f64);
	// bge cr6,0x8307b2d4
	if (!ctx.cr6.lt) goto loc_8307B2D4;
	// lfs f0,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f0,f23
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f23.f64));
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bgt cr6,0x8307b2cc
	if (ctx.cr6.gt) goto loc_8307B2CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r4,7
	ctx.r4.s64 = 7;
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// bl 0x8315bb30
	ctx.lr = 0x8307B2CC;
	sub_8315BB30(ctx, base);
loc_8307B2CC:
	// stfs f31,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// b 0x8307b2e4
	goto loc_8307B2E4;
loc_8307B2D4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-18136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8307a200
	ctx.lr = 0x8307B2E4;
	sub_8307A200(ctx, base);
loc_8307B2E4:
	// lfs f0,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x8307b388
	if (!ctx.cr6.gt) goto loc_8307B388;
	// lfs f13,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x8307b388
	if (!ctx.cr6.lt) goto loc_8307B388;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fmuls f2,f0,f23
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-2808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2808);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,10764(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10764);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f1,f12,f13,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x8307B320;
	sub_82CB59B0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f8,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// lfs f7,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lfs f6,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r31,140
	ctx.r11.s64 = ctx.r31.s64 + 140;
	// lfs f5,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f31,f10,f11
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f30,f9,f11
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f29,f8,f11
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f28,f7,f11
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f27,f6,f11
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f26,f5,f11
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// bl 0x83047b48
	ctx.lr = 0x8307B368;
	sub_83047B48(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r9.u8);
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f30,132(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f29,136(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f28,140(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f27,144(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f26,148(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
loc_8307B388:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b10
	ctx.lr = 0x8307B394;
	__restfpr_19(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307B398"))) PPC_WEAK_FUNC(sub_8307B398);
PPC_FUNC_IMPL(__imp__sub_8307B398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8307B3A0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,288(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 288);
	// lfs f31,-18136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18136);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307b3d8
	if (ctx.cr6.eq) goto loc_8307B3D8;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a200
	ctx.lr = 0x8307B3D0;
	sub_8307A200(ctx, base);
	// lwz r28,292(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 292);
	// b 0x8307b3dc
	goto loc_8307B3DC;
loc_8307B3D8:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8307B3DC:
	// lwz r3,340(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8307b3f0
	if (ctx.cr6.eq) goto loc_8307B3F0;
	// bl 0x83079360
	ctx.lr = 0x8307B3EC;
	sub_83079360(ctx, base);
	// stw r3,340(r29)
	PPC_STORE_U32(ctx.r29.u32 + 340, ctx.r3.u32);
loc_8307B3F0:
	// lwz r31,340(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// lis r27,-31901
	ctx.r27.s64 = -2090663936;
	// lwz r30,332(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8307b428
	if (ctx.cr6.eq) goto loc_8307B428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830776c0
	ctx.lr = 0x8307B40C;
	sub_830776C0(ctx, base);
	// lwz r3,-32308(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32308);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307B424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
loc_8307B428:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8307b504
	if (ctx.cr6.eq) goto loc_8307B504;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a200
	ctx.lr = 0x8307B43C;
	sub_8307A200(ctx, base);
	// lwz r3,340(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8307b450
	if (ctx.cr6.eq) goto loc_8307B450;
	// bl 0x83079360
	ctx.lr = 0x8307B44C;
	sub_83079360(ctx, base);
	// stw r3,340(r28)
	PPC_STORE_U32(ctx.r28.u32 + 340, ctx.r3.u32);
loc_8307B450:
	// lwz r30,340(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// lwz r31,332(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8307b484
	if (ctx.cr6.eq) goto loc_8307B484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830776c0
	ctx.lr = 0x8307B468;
	sub_830776C0(ctx, base);
	// lwz r3,-32308(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32308);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307B480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r26.u32);
loc_8307B484:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307B498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8307B4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8307b4c4
	if (!ctx.cr6.lt) goto loc_8307B4C4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8307b4cc
	goto loc_8307B4CC;
loc_8307B4C4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8307B4CC:
	// lwz r9,360(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r9.u32);
	// stw r25,360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 360, ctx.r25.u32);
	// beq cr6,0x8307b4ec
	if (ctx.cr6.eq) goto loc_8307B4EC;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// stw r10,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r10.u32);
	// stw r25,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r25.u32);
loc_8307B4EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830793c8
	ctx.lr = 0x8307B4F8;
	sub_830793C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_8307B504:
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// stw r11,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r11.u32);
	// stw r25,360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 360, ctx.r25.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307B528"))) PPC_WEAK_FUNC(sub_8307B528);
PPC_FUNC_IMPL(__imp__sub_8307B528) {
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
	// bl 0x82cb6acc
	ctx.lr = 0x8307B53C;
	__savefpr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f24,f2
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f2.f64;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307b9dc
	if (ctx.cr6.eq) goto loc_8307B9DC;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8307b9dc
	if (!ctx.cr6.eq) goto loc_8307B9DC;
	// lfs f30,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307b97c
	if (ctx.cr6.eq) goto loc_8307B97C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f29,7676(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f29.f64 = double(temp.f32);
	// lfs f11,6048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x8307b6d4
	if (ctx.cr6.eq) goto loc_8307B6D4;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f12,f8
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f9,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f3,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f6,f13,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmsubs f4,f8,f13,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f4.f64));
	// fmsubs f5,f12,f9,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f5.f64));
	// fmsubs f7,f10,f6,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 - ctx.f7.f64));
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// beq cr6,0x8307b638
	if (ctx.cr6.eq) goto loc_8307B638;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f1,f3,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 - ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f10,f9,f2
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmuls f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f6,f6,f1
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fadds f2,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f9,f6,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fmuls f7,f3,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fadds f8,f1,f4
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fmuls f6,f12,f3
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fadds f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fmuls f1,f4,f29
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// fadds f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x8307b684
	goto loc_8307B684;
loc_8307B638:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,416(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f28.f64 = double(temp.f32);
	// addi r10,r31,396
	ctx.r10.s64 = ctx.r31.s64 + 396;
	// lfs f0,6380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f1,f3,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 - ctx.f0.f64));
	// lfs f0,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f10,f9,f2
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmuls f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f6,f6,f1
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fadds f2,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f9,f6,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fmuls f7,f3,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fadds f8,f1,f4
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fmuls f6,f12,f3
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fadds f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fmuls f1,f4,f29
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// fadds f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_8307B684:
	// fmuls f5,f10,f3
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// lfs f9,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// fadds f3,f2,f6
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// lfs f7,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fmuls f13,f3,f29
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// fmuls f10,f2,f29
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// fadds f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// fadds f13,f28,f10
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f10.f64));
	// lfs f10,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f4,f8,f30
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f3,f6,f30
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f2,f5,f30
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fmuls f23,f4,f24
	ctx.f23.f64 = double(float(ctx.f4.f64 * ctx.f24.f64));
	// fmuls f22,f3,f24
	ctx.f22.f64 = double(float(ctx.f3.f64 * ctx.f24.f64));
	// fmuls f21,f2,f24
	ctx.f21.f64 = double(float(ctx.f2.f64 * ctx.f24.f64));
	// b 0x8307b7d8
	goto loc_8307B7D8;
loc_8307B6D4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307b7cc
	if (ctx.cr6.eq) goto loc_8307B7CC;
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f6,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// lfs f0,6380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f3,f4,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 - ctx.f0.f64));
	// lfs f7,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f6,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f31,f5,f9
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f28,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f25,f6,f9
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f26,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f27,f8,f7
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f22,f9,f3
	ctx.f22.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f23,f3,f12
	ctx.f23.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f3,f8,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmsubs f13,f9,f7,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f13.f64));
	// fmsubs f9,f6,f8,f31
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 - ctx.f31.f64));
	// fmadds f8,f5,f8,f25
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f25.f64));
	// fmsubs f31,f5,f12,f27
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 - ctx.f27.f64));
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmadds f12,f7,f12,f8
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmuls f4,f31,f4
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f4.f64));
	// fadds f8,f3,f13
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fadds f3,f23,f9
	ctx.f3.f64 = double(float(ctx.f23.f64 + ctx.f9.f64));
	// fmuls f9,f12,f7
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f7,f6,f12
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f6,f5,f12
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fadds f13,f22,f4
	ctx.f13.f64 = double(float(ctx.f22.f64 + ctx.f4.f64));
	// fadds f5,f3,f9
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fadds f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fmuls f13,f5,f29
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fmuls f9,f3,f29
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// fmuls f12,f4,f29
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// fadds f8,f13,f2
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// fadds f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fadds f7,f1,f12
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fsubs f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f3,f26,f6
	ctx.f3.f64 = double(float(ctx.f26.f64 - ctx.f6.f64));
	// fsubs f4,f28,f7
	ctx.f4.f64 = double(float(ctx.f28.f64 - ctx.f7.f64));
	// fmuls f2,f5,f30
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fmuls f13,f3,f30
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmuls f1,f4,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmuls f23,f2,f24
	ctx.f23.f64 = double(float(ctx.f2.f64 * ctx.f24.f64));
	// fmuls f21,f13,f24
	ctx.f21.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// fmuls f22,f1,f24
	ctx.f22.f64 = double(float(ctx.f1.f64 * ctx.f24.f64));
	// b 0x8307b7d8
	goto loc_8307B7D8;
loc_8307B7CC:
	// fmr f23,f11
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f11.f64;
	// fmr f22,f11
	ctx.f22.f64 = ctx.f11.f64;
	// fmr f21,f11
	ctx.f21.f64 = ctx.f11.f64;
loc_8307B7D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8307b920
	if (ctx.cr6.eq) goto loc_8307B920;
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f10,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,408(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f6,f4,f3,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmsubs f5,f8,f7,f1
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 - ctx.f1.f64));
	// fmadds f1,f8,f3,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f0,f8,f2,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f10,f7,f13,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fnmsubs f8,f9,f3,f5
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f3.f64 - ctx.f5.f64)));
	// fmadds f6,f2,f13,f1
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f5,f4,f7,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fnmsubs f28,f9,f2,f10
	ctx.f28.f64 = double(float(-(ctx.f9.f64 * ctx.f2.f64 - ctx.f10.f64)));
	// fnmsubs f31,f4,f2,f8
	ctx.f31.f64 = double(float(-(ctx.f4.f64 * ctx.f2.f64 - ctx.f8.f64)));
	// fnmsubs f27,f4,f12,f6
	ctx.f27.f64 = double(float(-(ctx.f4.f64 * ctx.f12.f64 - ctx.f6.f64)));
	// fnmsubs f26,f3,f13,f5
	ctx.f26.f64 = double(float(-(ctx.f3.f64 * ctx.f13.f64 - ctx.f5.f64)));
	// fcmpu cr6,f31,f11
	ctx.cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// bge cr6,0x8307b864
	if (!ctx.cr6.lt) goto loc_8307B864;
	// fneg f28,f28
	ctx.f28.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fneg f27,f27
	ctx.f27.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// fneg f26,f26
	ctx.f26.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// fneg f31,f31
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
loc_8307B864:
	// fmuls f0,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f13,f28,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fmadds f12,f26,f26,f13
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fmadds f10,f31,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fsqrts f0,f10
	ctx.f0.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x8307b89c
	if (ctx.cr6.eq) goto loc_8307B89C;
	// fdivs f0,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 / ctx.f0.f64));
	// fmuls f28,f0,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f27,f0,f27
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f26,f0,f26
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_8307B89C:
	// fsubs f13,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f25.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17972(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17972);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8307b920
	if (!ctx.cr6.gt) goto loc_8307B920;
	// fcmpu cr6,f31,f25
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// blt cr6,0x8307b8c4
	if (ctx.cr6.lt) goto loc_8307B8C4;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8307b8ec
	goto loc_8307B8EC;
loc_8307B8C4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8307b8e0
	if (ctx.cr6.gt) goto loc_8307B8E0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,-3224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3224);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8307b8ec
	goto loc_8307B8EC;
loc_8307B8E0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb44c0
	ctx.lr = 0x8307B8E8;
	sub_82CB44C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_8307B8EC:
	// fnmsubs f13,f31,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-(ctx.f31.f64 * ctx.f31.f64 - ctx.f25.f64)));
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fsqrts f11,f13
	ctx.f11.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f8,f10,f27
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fmuls f7,f10,f26
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fmuls f13,f8,f30
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f31,f9,f30
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f29,f7,f30
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
	// b 0x8307b92c
	goto loc_8307B92C;
loc_8307B920:
	// fmr f30,f11
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f11.f64;
	// fmr f31,f11
	ctx.f31.f64 = ctx.f11.f64;
	// fmr f29,f11
	ctx.f29.f64 = ctx.f11.f64;
loc_8307B92C:
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x831f2dc8
	ctx.lr = 0x8307B944;
	sub_831F2DC8(ctx, base);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// oris r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 524288;
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// bl 0x83047b48
	ctx.lr = 0x8307B95C;
	sub_83047B48(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r7.u8);
	// stfs f23,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f22,132(r31)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f21,136(r31)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f30,144(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f29,148(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// b 0x8307b9d8
	goto loc_8307B9D8;
loc_8307B97C:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307b998
	if (ctx.cr6.eq) goto loc_8307B998;
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// b 0x8307b9a4
	goto loc_8307B9A4;
loc_8307B998:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x831f2dc8
	ctx.lr = 0x8307B9A4;
	sub_831F2DC8(ctx, base);
loc_8307B9A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f31,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,328(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// bl 0x83047b48
	ctx.lr = 0x8307B9BC;
	sub_83047B48(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r10.u8);
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
loc_8307B9D8:
	// stfs f31,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
loc_8307B9DC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b18
	ctx.lr = 0x8307B9E8;
	__restfpr_21(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B9F8"))) PPC_WEAK_FUNC(sub_8307B9F8);
PPC_FUNC_IMPL(__imp__sub_8307B9F8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x83079750
	ctx.lr = 0x8307BA38;
	sub_83079750(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307BA44;
	sub_83047B48(ctx, base);
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,152(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f9,156(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f8,160(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f7,164(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// ori r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 8192;
	// stb r11,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r11.u8);
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8307BA8C"))) PPC_WEAK_FUNC(sub_8307BA8C);
PPC_FUNC_IMPL(__imp__sub_8307BA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307BA90"))) PPC_WEAK_FUNC(sub_8307BA90);
PPC_FUNC_IMPL(__imp__sub_8307BA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8307BA98;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307BAC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307bbc0
	if (!ctx.cr6.eq) goto loc_8307BBC0;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8307baf0
	if (ctx.cr6.eq) goto loc_8307BAF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x8307baf4
	goto loc_8307BAF4;
loc_8307BAF0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8307BAF4:
	// lfs f13,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8307bbc0
	if (!ctx.cr6.lt) goto loc_8307BBC0;
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,536(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fadds f31,f11,f6
	ctx.f31.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f30,f10,f5
	ctx.f30.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fadds f29,f9,f4
	ctx.f29.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// bl 0x83047b48
	ctx.lr = 0x8307BB44;
	sub_83047B48(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stfs f31,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f30,172(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stfs f29,176(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stb r29,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r29.u8);
	// bne cr6,0x8307bb9c
	if (!ctx.cr6.eq) goto loc_8307BB9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307BB6C;
	sub_83047B48(ctx, base);
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f13,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f12,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f11,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,164(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stb r29,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r29.u8);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// ori r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 8192;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
loc_8307BB9C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307a2c8
	ctx.lr = 0x8307BBA8;
	sub_8307A2C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8307BBC0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8307BBD8"))) PPC_WEAK_FUNC(sub_8307BBD8);
PPC_FUNC_IMPL(__imp__sub_8307BBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8307BBE0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307BC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307bd38
	if (!ctx.cr6.eq) goto loc_8307BD38;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// clrlwi r29,r11,31
	ctx.r29.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8307bc30
	if (!ctx.cr6.eq) goto loc_8307BC30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x8307bc34
	goto loc_8307BC34;
loc_8307BC30:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8307BC34:
	// lfs f13,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8307bd38
	if (!ctx.cr6.lt) goto loc_8307BD38;
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83047b48
	ctx.lr = 0x8307BC4C;
	sub_83047B48(ctx, base);
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f13,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f12,160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f11,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,164(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stb r30,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r30.u8);
	// lfs f9,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lfs f8,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f6,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f6,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// bl 0x83079750
	ctx.lr = 0x8307BCB0;
	sub_83079750(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307BCBC;
	sub_83047B48(ctx, base);
	// lfs f5,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// stfs f5,152(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f4,156(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f3,160(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f2,164(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// ori r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 8192;
	// stb r30,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r30.u8);
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// beq cr6,0x8307bd1c
	if (ctx.cr6.eq) goto loc_8307BD1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307BD00;
	sub_83047B48(ctx, base);
	// lfs f0,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f13,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f12,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,176(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stb r30,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r30.u8);
loc_8307BD1C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307a2c8
	ctx.lr = 0x8307BD28;
	sub_8307A2C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8307BD38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307BD48"))) PPC_WEAK_FUNC(sub_8307BD48);
PPC_FUNC_IMPL(__imp__sub_8307BD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8307BD50;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307bf10
	if (ctx.cr6.eq) goto loc_8307BF10;
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307bf08
	if (!ctx.cr6.eq) goto loc_8307BF08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x8307bdac
	if (ctx.cr6.eq) goto loc_8307BDAC;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8315bd60
	ctx.lr = 0x8307BDAC;
	sub_8315BD60(ctx, base);
loc_8307BDAC:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307bdd0
	if (ctx.cr6.eq) goto loc_8307BDD0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8315bd60
	ctx.lr = 0x8307BDD0;
	sub_8315BD60(ctx, base);
loc_8307BDD0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfd f13,-8768(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8768);
	// lfs f0,-18264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x8307be08
	if (ctx.cr6.eq) goto loc_8307BE08;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8315bd60
	ctx.lr = 0x8307BE08;
	sub_8315BD60(ctx, base);
loc_8307BE08:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// beq cr6,0x8307be3c
	if (ctx.cr6.eq) goto loc_8307BE3C;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8315bd60
	ctx.lr = 0x8307BE3C;
	sub_8315BD60(ctx, base);
loc_8307BE3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079f48
	ctx.lr = 0x8307BE44;
	sub_83079F48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r10,128
	ctx.r4.u64 = ctx.r10.u64 | 128;
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307BE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,564(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8307be90
	if (!ctx.cr6.eq) goto loc_8307BE90;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307BE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r3.u32);
loc_8307BE90:
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307BEA8;
	sub_83047B48(ctx, base);
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8307bebc
	if (ctx.cr6.eq) goto loc_8307BEBC;
	// bl 0x83079360
	ctx.lr = 0x8307BEB8;
	sub_83079360(ctx, base);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
loc_8307BEBC:
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307bed4
	if (ctx.cr6.eq) goto loc_8307BED4;
	// bl 0x83077b80
	ctx.lr = 0x8307BED4;
	sub_83077B80(ctx, base);
loc_8307BED4:
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8307c048
	if (ctx.cr6.eq) goto loc_8307C048;
loc_8307BEE4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8307bef8
	if (!ctx.cr6.eq) goto loc_8307BEF8;
	// bl 0x83080a80
	ctx.lr = 0x8307BEF8;
	sub_83080A80(ctx, base);
loc_8307BEF8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8307bee4
	if (!ctx.cr6.eq) goto loc_8307BEE4;
	// b 0x8307c048
	goto loc_8307C048;
loc_8307BF08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307c048
	if (!ctx.cr6.eq) goto loc_8307C048;
loc_8307BF10:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307c048
	if (ctx.cr6.eq) goto loc_8307C048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079f48
	ctx.lr = 0x8307BF28;
	sub_83079F48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,0,25,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307BF44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307bf70
	if (ctx.cr6.eq) goto loc_8307BF70;
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
	ctx.lr = 0x8307BF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r8.u32);
loc_8307BF70:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f11,444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x8307bfac
	if (ctx.cr6.eq) goto loc_8307BFAC;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8315bd60
	ctx.lr = 0x8307BFAC;
	sub_8315BD60(ctx, base);
loc_8307BFAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,424(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307BFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,428(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8307BFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8307BFF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079310
	ctx.lr = 0x8307BFFC;
	sub_83079310(ctx, base);
	// lbz r5,528(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 528);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8307c010
	if (!ctx.cr6.eq) goto loc_8307C010;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r11.u8);
loc_8307C010:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079488
	ctx.lr = 0x8307C018;
	sub_83079488(ctx, base);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8307c048
	if (ctx.cr6.eq) goto loc_8307C048;
loc_8307C028:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8307c03c
	if (!ctx.cr6.eq) goto loc_8307C03C;
	// bl 0x83080a80
	ctx.lr = 0x8307C03C;
	sub_83080A80(ctx, base);
loc_8307C03C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8307c028
	if (!ctx.cr6.eq) goto loc_8307C028;
loc_8307C048:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r11,0,13,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C060"))) PPC_WEAK_FUNC(sub_8307C060);
PPC_FUNC_IMPL(__imp__sub_8307C060) {
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
	// bl 0x82cb6ad0
	ctx.lr = 0x8307C074;
	__savefpr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r31,188
	ctx.r11.s64 = ctx.r31.s64 + 188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f13,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,396
	ctx.r11.s64 = ctx.r31.s64 + 396;
	// lfs f10,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 + 216;
	// lfs f11,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f7,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f4,408(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f2,f4,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 - ctx.f0.f64));
	// lfs f31,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f1,f12
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f27,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f28,f31,f12
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmuls f25,f27,f13
	ctx.f25.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// lfs f29,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f29.f64 = double(temp.f32);
	// fmsubs f8,f7,f11,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f8.f64));
	// lfs f24,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f26,f29,f13
	ctx.f26.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// lfs f23,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f23.f64 = double(temp.f32);
	// fmsubs f6,f10,f12,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// lfs f22,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f22.f64 = double(temp.f32);
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f5,f9,f13,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmadds f3,f9,f12,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmuls f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmadds f30,f29,f4,f30
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f4.f64 + ctx.f30.f64));
	// fmuls f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmadds f28,f27,f4,f28
	ctx.f28.f64 = double(float(ctx.f27.f64 * ctx.f4.f64 + ctx.f28.f64));
	// fmuls f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmadds f25,f1,f4,f25
	ctx.f25.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f25.f64));
	// fmuls f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f3,f10,f11,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmsubs f10,f31,f4,f26
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f4.f64 - ctx.f26.f64));
	// fmadds f4,f31,f13,f30
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fmadds f30,f29,f11,f28
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f28.f64));
	// fadds f8,f7,f6
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fmadds f31,f31,f11,f25
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f25.f64));
	// fadds f7,f2,f5
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fmuls f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f5,f12,f3
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f3,f3,f11
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fnmsubs f2,f27,f12,f10
	ctx.f2.f64 = double(float(-(ctx.f27.f64 * ctx.f12.f64 - ctx.f10.f64)));
	// fnmsubs f10,f27,f11,f4
	ctx.f10.f64 = double(float(-(ctx.f27.f64 * ctx.f11.f64 - ctx.f4.f64)));
	// stfs f10,188(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// fnmsubs f4,f1,f13,f30
	ctx.f4.f64 = double(float(-(ctx.f1.f64 * ctx.f13.f64 - ctx.f30.f64)));
	// stfs f4,192(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// fnmsubs f13,f29,f12,f31
	ctx.f13.f64 = double(float(-(ctx.f29.f64 * ctx.f12.f64 - ctx.f31.f64)));
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// fadds f12,f8,f6
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fadds f10,f9,f5
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f9,f7,f3
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fnmsubs f8,f1,f11,f2
	ctx.f8.f64 = double(float(-(ctx.f1.f64 * ctx.f11.f64 - ctx.f2.f64)));
	// stfs f8,200(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f4,f24,f7
	ctx.f4.f64 = double(float(ctx.f24.f64 + ctx.f7.f64));
	// stfs f4,204(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// fadds f3,f23,f6
	ctx.f3.f64 = double(float(ctx.f23.f64 + ctx.f6.f64));
	// stfs f3,208(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// fadds f2,f22,f5
	ctx.f2.f64 = double(float(ctx.f22.f64 + ctx.f5.f64));
	// stfs f2,212(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307C1B4;
	sub_83047B48(ctx, base);
	// lfs f1,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f1,152(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f0,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f13,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f12,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,164(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f11,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,168(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f10,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,172(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f9,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,176(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stb r8,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r8.u8);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// ori r6,r7,8192
	ctx.r6.u64 = ctx.r7.u64 | 8192;
	// stw r6,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307c21c
	if (ctx.cr6.eq) goto loc_8307C21C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,476(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307C21C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307C21C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b1c
	ctx.lr = 0x8307C228;
	__restfpr_22(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307C238"))) PPC_WEAK_FUNC(sub_8307C238);
PPC_FUNC_IMPL(__imp__sub_8307C238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8307C240;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6acc
	ctx.lr = 0x8307C248;
	__savefpr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r31,396
	ctx.r11.s64 = ctx.r31.s64 + 396;
	// addi r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 + 216;
	// lfs f13,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// lfs f10,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f7,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f4,408(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f2,f4,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 - ctx.f0.f64));
	// lfs f29,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f30,f1,f12
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f27,f29,f11
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// lfs f31,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f31.f64 = double(temp.f32);
	// lfs f26,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f28,f31,f11
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmsubs f8,f7,f11,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f8.f64));
	// lfs f24,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f25,f29,f13
	ctx.f25.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// lfs f23,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f23.f64 = double(temp.f32);
	// fmsubs f6,f10,f12,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// lfs f22,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f3,f10,f11,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f3.f64));
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f5,f9,f13,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmuls f21,f7,f2
	ctx.f21.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmadds f10,f29,f4,f30
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f4.f64 + ctx.f30.f64));
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmadds f30,f26,f4,f27
	ctx.f30.f64 = double(float(ctx.f26.f64 * ctx.f4.f64 + ctx.f27.f64));
	// fmuls f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmadds f3,f7,f13,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmuls f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f28,f1,f4,f28
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f28.f64));
	// fmsubs f7,f31,f4,f25
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f4.f64 - ctx.f25.f64));
	// fmadds f4,f31,f13,f10
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fmadds f10,f31,f12,f30
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fadds f8,f21,f6
	ctx.f8.f64 = double(float(ctx.f21.f64 + ctx.f6.f64));
	// fadds f6,f2,f5
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fmuls f2,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f3,f11,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmadds f31,f26,f13,f28
	ctx.f31.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f28.f64));
	// fnmsubs f4,f26,f11,f4
	ctx.f4.f64 = double(float(-(ctx.f26.f64 * ctx.f11.f64 - ctx.f4.f64)));
	// stfs f4,188(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// fnmsubs f7,f26,f12,f7
	ctx.f7.f64 = double(float(-(ctx.f26.f64 * ctx.f12.f64 - ctx.f7.f64)));
	// fnmsubs f13,f1,f13,f10
	ctx.f13.f64 = double(float(-(ctx.f1.f64 * ctx.f13.f64 - ctx.f10.f64)));
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// fadds f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f10,f8,f5
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f8,f6,f3
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fnmsubs f12,f29,f12,f31
	ctx.f12.f64 = double(float(-(ctx.f29.f64 * ctx.f12.f64 - ctx.f31.f64)));
	// stfs f12,196(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// fnmsubs f7,f1,f11,f7
	ctx.f7.f64 = double(float(-(ctx.f1.f64 * ctx.f11.f64 - ctx.f7.f64)));
	// stfs f7,200(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f2,f23,f5
	ctx.f2.f64 = double(float(ctx.f23.f64 + ctx.f5.f64));
	// stfs f2,208(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// fadds f3,f24,f6
	ctx.f3.f64 = double(float(ctx.f24.f64 + ctx.f6.f64));
	// stfs f3,204(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// fadds f1,f22,f4
	ctx.f1.f64 = double(float(ctx.f22.f64 + ctx.f4.f64));
	// stfs f1,212(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f11,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f11,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f13,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f0,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fsqrts f10,f7
	ctx.f10.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// beq cr6,0x8307c3dc
	if (ctx.cr6.eq) goto loc_8307C3DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f6,12(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_8307C3DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307C3E8;
	sub_83047B48(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,164(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f10,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,168(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f9,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,172(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f8,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,176(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stb r11,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r11.u8);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// ori r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 8192;
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307c4ac
	if (ctx.cr6.eq) goto loc_8307C4AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307C458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fadds f0,f1,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,528(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 528);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8307C4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307C4AC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b18
	ctx.lr = 0x8307C4B8;
	__restfpr_21(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C4BC"))) PPC_WEAK_FUNC(sub_8307C4BC);
PPC_FUNC_IMPL(__imp__sub_8307C4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307C4C0"))) PPC_WEAK_FUNC(sub_8307C4C0);
PPC_FUNC_IMPL(__imp__sub_8307C4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,260
	ctx.r11.s64 = ctx.r3.s64 + 260;
	// stfs f0,260(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,264(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,268(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stfs f12,412(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// lfs f10,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,416(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// lfs f9,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,420(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// b 0x8307c060
	sub_8307C060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C504"))) PPC_WEAK_FUNC(sub_8307C504);
PPC_FUNC_IMPL(__imp__sub_8307C504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307C508"))) PPC_WEAK_FUNC(sub_8307C508);
PPC_FUNC_IMPL(__imp__sub_8307C508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,244
	ctx.r11.s64 = ctx.r3.s64 + 244;
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,248(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,252(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,256(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f12,396(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// lfs f9,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,400(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// lfs f8,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,404(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// lfs f7,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,408(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// b 0x8307c060
	sub_8307C060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C55C"))) PPC_WEAK_FUNC(sub_8307C55C);
PPC_FUNC_IMPL(__imp__sub_8307C55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307C560"))) PPC_WEAK_FUNC(sub_8307C560);
PPC_FUNC_IMPL(__imp__sub_8307C560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,244
	ctx.r11.s64 = ctx.r3.s64 + 244;
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,260
	ctx.r11.s64 = ctx.r3.s64 + 260;
	// stfs f13,248(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,252(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,256(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f10,396(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// lfs f9,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,400(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// lfs f8,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,404(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// lfs f7,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,408(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// stfs f6,260(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,264(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,268(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stfs f5,412(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// lfs f2,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,416(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// lfs f1,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,420(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// b 0x8307c060
	sub_8307C060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C5E8"))) PPC_WEAK_FUNC(sub_8307C5E8);
PPC_FUNC_IMPL(__imp__sub_8307C5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// b 0x8307c238
	sub_8307C238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C610"))) PPC_WEAK_FUNC(sub_8307C610);
PPC_FUNC_IMPL(__imp__sub_8307C610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f7,f9,f9
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f1,f11,f6
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fnmsubs f6,f10,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// lfs f2,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f31,f7,f0
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f12,f10,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f10,f4,f7
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f9,f7,f4
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f8,f3,f1
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f7,f1,f3
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fcmpu cr6,f4,f2
	ctx.cr6.compare(ctx.f4.f64, ctx.f2.f64);
	// blt cr6,0x8307c720
	if (ctx.cr6.lt) goto loc_8307C720;
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f3,f13
	ctx.f3.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f11,f5,f2
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f12,f4,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmuls f13,f6,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// b 0x8307c81c
	goto loc_8307C81C;
loc_8307C720:
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x8307c730
	if (!ctx.cr6.gt) goto loc_8307C730;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8307C730:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfsx f4,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// ble cr6,0x8307c748
	if (!ctx.cr6.gt) goto loc_8307C748;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8307C748:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8307c7d4
	if (ctx.cr6.lt) goto loc_8307C7D4;
	// beq cr6,0x8307c798
	if (ctx.cr6.eq) goto loc_8307C798;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8307c80c
	if (!ctx.cr6.lt) goto loc_8307C80C;
	// fadds f6,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f2,f7,f8
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f3,f10
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f12,f2,f10
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f0,f4,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// b 0x8307c81c
	goto loc_8307C81C;
loc_8307C798:
	// fadds f5,f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f2,f10,f9
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fadds f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f6,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f11,f4,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// b 0x8307c81c
	goto loc_8307C81C;
loc_8307C7D4:
	// fsubs f6,f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f4,f9,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fdivs f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f12,f5,f10
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f0,f3,f10
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// b 0x8307c81c
	goto loc_8307C81C;
loc_8307C80C:
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_8307C81C:
	// stfs f11,216(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f12,220(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f13,224(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// bl 0x8307c238
	ctx.lr = 0x8307C83C;
	sub_8307C238(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8307C850"))) PPC_WEAK_FUNC(sub_8307C850);
PPC_FUNC_IMPL(__imp__sub_8307C850) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f10
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f12,f6
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f7,f9,f9
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f2,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fnmsubs f8,f8,f0,f13
	ctx.f8.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsubs f30,f13,f9
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f8,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f10,f3,f4
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f6,f30,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 - ctx.f6.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f9,f4,f3
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f8,f1,f31
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f7,f31,f1
	ctx.f7.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fcmpu cr6,f4,f2
	ctx.cr6.compare(ctx.f4.f64, ctx.f2.f64);
	// blt cr6,0x8307c964
	if (ctx.cr6.lt) goto loc_8307C964;
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f3,f13
	ctx.f3.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f11,f5,f2
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f12,f4,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmuls f13,f6,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// b 0x8307ca60
	goto loc_8307CA60;
loc_8307C964:
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x8307c974
	if (!ctx.cr6.gt) goto loc_8307C974;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8307C974:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfsx f4,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// ble cr6,0x8307c98c
	if (!ctx.cr6.gt) goto loc_8307C98C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8307C98C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8307ca14
	if (ctx.cr6.lt) goto loc_8307CA14;
	// beq cr6,0x8307c9dc
	if (ctx.cr6.eq) goto loc_8307C9DC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8307ca50
	if (!ctx.cr6.lt) goto loc_8307CA50;
	// fadds f6,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f2,f7,f8
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f3,f10
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f12,f2,f10
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f0,f4,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// b 0x8307ca60
	goto loc_8307CA60;
loc_8307C9DC:
	// fsubs f6,f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fadds f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fdivs f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f11,f5,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f0,f3,f10
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// b 0x8307ca60
	goto loc_8307CA60;
loc_8307CA14:
	// fadds f5,f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fsubs f2,f7,f8
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f6,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f4,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// b 0x8307ca60
	goto loc_8307CA60;
loc_8307CA50:
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_8307CA60:
	// stfs f11,216(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f12,220(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f13,224(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r10.u32);
	// bl 0x8307c238
	ctx.lr = 0x8307CAA4;
	sub_8307C238(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307CABC"))) PPC_WEAK_FUNC(sub_8307CABC);
PPC_FUNC_IMPL(__imp__sub_8307CABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307CAC0"))) PPC_WEAK_FUNC(sub_8307CAC0);
PPC_FUNC_IMPL(__imp__sub_8307CAC0) {
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
	// addi r31,r30,-4
	ctx.r31.s64 = ctx.r30.s64 + -4;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307caf4
	if (ctx.cr6.eq) goto loc_8307CAF4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8315bb30
	ctx.lr = 0x8307CAF4;
	sub_8315BB30(ctx, base);
loc_8307CAF4:
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307cb14
	if (ctx.cr6.eq) goto loc_8307CB14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83047668
	ctx.lr = 0x8307CB08;
	sub_83047668(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// bl 0x83043750
	ctx.lr = 0x8307CB14;
	sub_83043750(ctx, base);
loc_8307CB14:
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

__attribute__((alias("__imp__sub_8307CB2C"))) PPC_WEAK_FUNC(sub_8307CB2C);
PPC_FUNC_IMPL(__imp__sub_8307CB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307CB30"))) PPC_WEAK_FUNC(sub_8307CB30);
PPC_FUNC_IMPL(__imp__sub_8307CB30) {
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
	// addi r31,r30,-4
	ctx.r31.s64 = ctx.r30.s64 + -4;
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307cb78
	if (ctx.cr6.eq) goto loc_8307CB78;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307cb8c
	if (ctx.cr6.eq) goto loc_8307CB8C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307cb8c
	if (!ctx.cr6.eq) goto loc_8307CB8C;
	// b 0x8307cb80
	goto loc_8307CB80;
loc_8307CB78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307cb8c
	if (ctx.cr6.eq) goto loc_8307CB8C;
loc_8307CB80:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8315bb30
	ctx.lr = 0x8307CB8C;
	sub_8315BB30(ctx, base);
loc_8307CB8C:
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307cbac
	if (ctx.cr6.eq) goto loc_8307CBAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83047550
	ctx.lr = 0x8307CBA0;
	sub_83047550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// bl 0x83043748
	ctx.lr = 0x8307CBAC;
	sub_83043748(ctx, base);
loc_8307CBAC:
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

__attribute__((alias("__imp__sub_8307CBC4"))) PPC_WEAK_FUNC(sub_8307CBC4);
PPC_FUNC_IMPL(__imp__sub_8307CBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307CBC8"))) PPC_WEAK_FUNC(sub_8307CBC8);
PPC_FUNC_IMPL(__imp__sub_8307CBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8307CBD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r4,468(r30)
	PPC_STORE_U16(ctx.r30.u32 + 468, ctx.r4.u16);
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8307cc18
	if (ctx.cr6.eq) goto loc_8307CC18;
loc_8307CBEC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8307cc04
	if (ctx.cr6.eq) goto loc_8307CC04;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8307cc0c
	if (!ctx.cr6.eq) goto loc_8307CC0C;
loc_8307CC04:
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// bl 0x830478d8
	ctx.lr = 0x8307CC0C;
	sub_830478D8(ctx, base);
loc_8307CC0C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8307cbec
	if (!ctx.cr6.eq) goto loc_8307CBEC;
loc_8307CC18:
	// lwz r31,68(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8307cc3c
	if (ctx.cr6.eq) goto loc_8307CC3C;
loc_8307CC24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// bl 0x83047a08
	ctx.lr = 0x8307CC30;
	sub_83047A08(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8307cc24
	if (!ctx.cr6.eq) goto loc_8307CC24;
loc_8307CC3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8307acc0
	ctx.lr = 0x8307CC44;
	sub_8307ACC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307CC4C"))) PPC_WEAK_FUNC(sub_8307CC4C);
PPC_FUNC_IMPL(__imp__sub_8307CC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307CC50"))) PPC_WEAK_FUNC(sub_8307CC50);
PPC_FUNC_IMPL(__imp__sub_8307CC50) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r8,20(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8307CC6C:
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8307cc8c
	if (ctx.cr6.eq) goto loc_8307CC8C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8307ccc4
	if (!ctx.cr6.eq) goto loc_8307CCC4;
loc_8307CC8C:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r4,r10,0,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8307ccc4
	if (ctx.cr6.eq) goto loc_8307CCC4;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r4,284(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 284);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8307ccbc
	if (!ctx.cr6.eq) goto loc_8307CCBC;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x8307ccc0
	goto loc_8307CCC0;
loc_8307CCBC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8307CCC0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8307CCC4:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8307cc6c
	if (!ctx.cr6.eq) goto loc_8307CC6C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307CCD4"))) PPC_WEAK_FUNC(sub_8307CCD4);
PPC_FUNC_IMPL(__imp__sub_8307CCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307CCD8"))) PPC_WEAK_FUNC(sub_8307CCD8);
PPC_FUNC_IMPL(__imp__sub_8307CCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8307CCE0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ac0
	ctx.lr = 0x8307CCE8;
	__savefpr_18(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f18,f1
	ctx.fpscr.disableFlushMode();
	ctx.f18.f64 = ctx.f1.f64;
	// fmr f10,f2
	ctx.f10.f64 = ctx.f2.f64;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307cd18
	if (ctx.cr6.eq) goto loc_8307CD18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307CD14;
	sub_83047B48(ctx, base);
	// b 0x8307cfcc
	goto loc_8307CFCC;
loc_8307CD18:
	// rlwinm r10,r11,0,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7E;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307cfc0
	if (ctx.cr6.eq) goto loc_8307CFC0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lfs f12,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// lfs f28,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f28.f64 = double(temp.f32);
	// addi r28,r31,128
	ctx.r28.s64 = ctx.r31.s64 + 128;
	// lfs f27,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f27.f64 = double(temp.f32);
	// addi r30,r31,140
	ctx.r30.s64 = ctx.r31.s64 + 140;
	// lfs f26,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f26.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f25,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f25.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f20,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f20.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f22,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f22.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f24,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f24.f64 = double(temp.f32);
	// lfs f19,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f19.f64 = double(temp.f32);
	// lfs f21,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f21.f64 = double(temp.f32);
	// lfs f23,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f23.f64 = double(temp.f32);
	// lfs f29,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8307cd9c
	if (ctx.cr6.eq) goto loc_8307CD9C;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// fmr f20,f13
	ctx.f20.f64 = ctx.f13.f64;
	// fmr f19,f0
	ctx.f19.f64 = ctx.f0.f64;
loc_8307CD9C:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307cdb4
	if (ctx.cr6.eq) goto loc_8307CDB4;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// fmr f22,f12
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f12.f64;
	// fmr f21,f0
	ctx.f21.f64 = ctx.f0.f64;
loc_8307CDB4:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307cdcc
	if (ctx.cr6.eq) goto loc_8307CDCC;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// fmr f24,f11
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f11.f64;
	// fmr f23,f0
	ctx.f23.f64 = ctx.f0.f64;
loc_8307CDCC:
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307cee0
	if (ctx.cr6.eq) goto loc_8307CEE0;
	// fcmpu cr6,f18,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f18.f64, ctx.f0.f64);
	// bgt cr6,0x8307cde4
	if (ctx.cr6.gt) goto loc_8307CDE4;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_8307CDE4:
	// lfs f13,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f8,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f6,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f5,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// fneg f12,f1
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f2,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f13,f9,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmadds f4,f5,f11,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmsubs f8,f5,f6,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f8.f64));
	// fmadds f13,f2,f6,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fmadds f1,f2,f11,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmadds f4,f3,f12,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fnmsubs f8,f3,f7,f8
	ctx.f8.f64 = double(float(-(ctx.f3.f64 * ctx.f7.f64 - ctx.f8.f64)));
	// fmadds f5,f5,f12,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f6,f3,f6,f1
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fnmsubs f13,f2,f7,f4
	ctx.f13.f64 = double(float(-(ctx.f2.f64 * ctx.f7.f64 - ctx.f4.f64)));
	// fnmsubs f4,f2,f12,f8
	ctx.f4.f64 = double(float(-(ctx.f2.f64 * ctx.f12.f64 - ctx.f8.f64)));
	// fnmsubs f11,f3,f11,f5
	ctx.f11.f64 = double(float(-(ctx.f3.f64 * ctx.f11.f64 - ctx.f5.f64)));
	// fnmsubs f12,f9,f12,f6
	ctx.f12.f64 = double(float(-(ctx.f9.f64 * ctx.f12.f64 - ctx.f6.f64)));
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x8307ce64
	if (!ctx.cr6.lt) goto loc_8307CE64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_8307CE64:
	// fmuls f9,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// addi r11,r31,548
	ctx.r11.s64 = ctx.r31.s64 + 548;
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f13,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f6,548(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f5,552(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f4,556(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwinm r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8307ceb0
	if (ctx.cr6.eq) goto loc_8307CEB0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_8307CEB0:
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307cec8
	if (ctx.cr6.eq) goto loc_8307CEC8;
	// stfs f0,552(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_8307CEC8:
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307cee0
	if (ctx.cr6.eq) goto loc_8307CEE0;
	// stfs f0,556(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8307CEE0:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r11,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307cf1c
	if (ctx.cr6.eq) goto loc_8307CF1C;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r10,768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8307cf1c
	if (ctx.cr6.eq) goto loc_8307CF1C;
	// stfs f0,556(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_8307CF1C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307cf70
	if (ctx.cr6.eq) goto loc_8307CF70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307CF34;
	sub_83047B48(ctx, base);
	// stfs f28,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f27,156(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f26,160(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f25,164(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stb r27,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r27.u8);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307CF54;
	sub_83047B48(ctx, base);
	// stb r27,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r27.u8);
	// stfs f29,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,4(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x8307b9f8
	ctx.lr = 0x8307CF70;
	sub_8307B9F8(ctx, base);
loc_8307CF70:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307cfb4
	if (ctx.cr6.eq) goto loc_8307CFB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307CF88;
	sub_83047B48(ctx, base);
	// stb r27,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r27.u8);
	// stfs f19,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f21,4(r28)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f23,8(r28)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8307CFA4;
	sub_83047B48(ctx, base);
	// stfs f20,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f22,4(r29)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f24,8(r29)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stb r27,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r27.u8);
loc_8307CFB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307a2c8
	ctx.lr = 0x8307CFC0;
	sub_8307A2C8(ctx, base);
loc_8307CFC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x8307add8
	ctx.lr = 0x8307CFCC;
	sub_8307ADD8(ctx, base);
loc_8307CFCC:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b0c
	ctx.lr = 0x8307CFE4;
	__restfpr_18(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307CFE8"))) PPC_WEAK_FUNC(sub_8307CFE8);
PPC_FUNC_IMPL(__imp__sub_8307CFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8307CFF0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 5, ctx.xer);
	// bgt cr6,0x8307d73c
	if (ctx.cr6.gt) goto loc_8307D73C;
	// lis r12,-31992
	ctx.r12.s64 = -2096627712;
	// addi r12,r12,-12244
	ctx.r12.s64 = ctx.r12.s64 + -12244;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u64) {
	case 0:
		goto loc_8307D044;
	case 1:
		goto loc_8307D274;
	case 2:
		goto loc_8307D45C;
	case 3:
		goto loc_8307D50C;
	case 4:
		goto loc_8307D6BC;
	case 5:
		goto loc_8307D1F8;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-12220(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + -12220);
	// lwz r24,-11660(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + -11660);
	// lwz r24,-11172(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + -11172);
	// lwz r24,-10996(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10996);
	// lwz r24,-10564(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10564);
	// lwz r24,-11784(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + -11784);
loc_8307D044:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307d090
	if (ctx.cr6.eq) goto loc_8307D090;
	// lfs f0,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,472
	ctx.r10.s64 = ctx.r31.s64 + 472;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f4,472(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,476(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f2,480(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
loc_8307D090:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8307d734
	if (ctx.cr6.eq) goto loc_8307D734;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307d178
	if (ctx.cr6.eq) goto loc_8307D178;
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// addi r5,r31,600
	ctx.r5.s64 = ctx.r31.s64 + 600;
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f11,f8
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fnmsubs f6,f3,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f0,f7,f8
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f11,f8,f7
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f6,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f8,f4,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82d5c278
	ctx.lr = 0x8307D16C;
	sub_82D5C278(ctx, base);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r8,r9,0,19,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
loc_8307D178:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,484
	ctx.r11.s64 = ctx.r31.s64 + 484;
	// lfs f12,604(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,612(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,608(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,600(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f5,f6,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// lfs f11,484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f4,f6,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f8.f64));
	// lfs f5,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f3,f6,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f3,f13,f2,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f2,f1,f0,f8
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f1,f12,f0,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fadds f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f0,484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// fadds f13,f9,f2
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f13,488(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// fadds f12,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f12,492(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// b 0x8307d734
	goto loc_8307D734;
loc_8307D1F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307d234
	if (ctx.cr6.eq) goto loc_8307D234;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,472
	ctx.r10.s64 = ctx.r31.s64 + 472;
	// lfs f13,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,472(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,476(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,480(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
loc_8307D234:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8307d734
	if (ctx.cr6.eq) goto loc_8307D734;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,484
	ctx.r11.s64 = ctx.r31.s64 + 484;
	// lfs f13,484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,484(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,488(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// lfs f10,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f6,492(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// b 0x8307d734
	goto loc_8307D734;
loc_8307D274:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307d2d4
	if (ctx.cr6.eq) goto loc_8307D2D4;
	// lfs f0,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// lfs f5,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// fadds f31,f7,f11
	ctx.f31.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f30,f6,f9
	ctx.f30.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fadds f29,f5,f8
	ctx.f29.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// bl 0x83047b48
	ctx.lr = 0x8307D2C4;
	sub_83047B48(ctx, base);
	// stb r28,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r28.u8);
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f30,132(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f29,136(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
loc_8307D2D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8307d73c
	if (ctx.cr6.eq) goto loc_8307D73C;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307d3bc
	if (ctx.cr6.eq) goto loc_8307D3BC;
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// addi r5,r31,600
	ctx.r5.s64 = ctx.r31.s64 + 600;
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmuls f1,f11,f8
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fnmsubs f6,f3,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f0,f7,f8
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f11,f8,f7
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f13,f6,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f8,f4,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fsubs f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f6,160(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82d5c278
	ctx.lr = 0x8307D3B0;
	sub_82D5C278(ctx, base);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r8,r9,0,19,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
loc_8307D3BC:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f13,608(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,604(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r31,140
	ctx.r29.s64 = ctx.r31.s64 + 140;
	// lfs f5,616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,600(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,612(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f6,f7,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// lfs f12,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f7,f9
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f9.f64));
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f4,f7,f8
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// lfs f8,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f3,f2,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f6,f1,f3,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f5,f0,f3,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fadds f31,f7,f12
	ctx.f31.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f30,f10,f6
	ctx.f30.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f29,f8,f5
	ctx.f29.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// bl 0x83047b48
	ctx.lr = 0x8307D438;
	sub_83047B48(ctx, base);
	// stb r28,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r28.u8);
	// stfs f31,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f30,144(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f29,148(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8307D45C:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307d4ac
	if (ctx.cr6.eq) goto loc_8307D4AC;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// lfs f11,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fadds f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f9,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// fadds f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f29,f9,f12
	ctx.f29.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// bl 0x83047b48
	ctx.lr = 0x8307D49C;
	sub_83047B48(ctx, base);
	// stb r28,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r28.u8);
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f30,132(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f29,136(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
loc_8307D4AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8307d73c
	if (ctx.cr6.eq) goto loc_8307D73C;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r31,140
	ctx.r29.s64 = ctx.r31.s64 + 140;
	// lfs f11,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fadds f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f9,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fadds f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f29,f9,f12
	ctx.f29.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// bl 0x83047b48
	ctx.lr = 0x8307D4E8;
	sub_83047B48(ctx, base);
	// stb r28,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r28.u8);
	// stfs f31,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f30,144(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f29,148(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8307D50C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307d558
	if (ctx.cr6.eq) goto loc_8307D558;
	// lfs f0,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,496
	ctx.r10.s64 = ctx.r31.s64 + 496;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f4,496(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,500(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f2,504(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
loc_8307D558:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8307d734
	if (ctx.cr6.eq) goto loc_8307D734;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307d640
	if (ctx.cr6.eq) goto loc_8307D640;
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// addi r5,r31,600
	ctx.r5.s64 = ctx.r31.s64 + 600;
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmuls f1,f11,f8
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fnmsubs f6,f3,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f2,180(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fadds f0,f7,f8
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fsubs f11,f8,f7
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fsubs f13,f6,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f8,f4,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f8,204(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fsubs f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// stfs f7,176(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f6,208(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82d5c278
	ctx.lr = 0x8307D634;
	sub_82D5C278(ctx, base);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r8,r9,0,19,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
loc_8307D640:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,608(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,604(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,600(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,612(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f6,f7,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// lfs f12,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f7,f9
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f9.f64));
	// lfs f10,512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f4,f7,f8
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// lfs f8,516(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f2,f3,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fmadds f6,f1,f3,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f5,f0,f3,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fadds f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f4,508(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// fadds f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f3,512(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f2,516(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// b 0x8307d730
	goto loc_8307D730;
loc_8307D6BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307d6f8
	if (ctx.cr6.eq) goto loc_8307D6F8;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,496
	ctx.r10.s64 = ctx.r31.s64 + 496;
	// lfs f13,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,496(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// lfs f11,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,500(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f6,504(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
loc_8307D6F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8307d734
	if (ctx.cr6.eq) goto loc_8307D734;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,508(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,512(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// lfs f10,516(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f6,516(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
loc_8307D730:
	// addi r11,r31,508
	ctx.r11.s64 = ctx.r31.s64 + 508;
loc_8307D734:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r11.u8);
loc_8307D73C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307D750"))) PPC_WEAK_FUNC(sub_8307D750);
PPC_FUNC_IMPL(__imp__sub_8307D750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8307D758;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lfs f0,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8307d78c
	if (!ctx.cr6.gt) goto loc_8307D78C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8307D78C:
	// stb r11,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r11.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8315b8e0
	ctx.lr = 0x8307D798;
	sub_8315B8E0(ctx, base);
	// addi r10,r31,380
	ctx.r10.s64 = ctx.r31.s64 + 380;
	// addi r10,r31,368
	ctx.r10.s64 = ctx.r31.s64 + 368;
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r31,140
	ctx.r29.s64 = ctx.r31.s64 + 140;
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// addi r28,r31,128
	ctx.r28.s64 = ctx.r31.s64 + 128;
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r25,76(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lfs f13,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lfs f12,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stfs f12,388(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stfs f11,140(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// lfs f10,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stfs f10,144(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// lfs f9,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f9.f64 = double(temp.f32);
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// stfs f9,148(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r5,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// lfs f8,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stfs f8,368(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f7,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// stw r4,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// stfs f7,372(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lfs f6,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stfs f6,376(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stfs f5,128(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f4,372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,132(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f3,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,136(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f2,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,432(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// lfs f1,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,436(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// lfs f0,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// lfs f13,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,444(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// lfs f12,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,296(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lfs f11,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,300(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lfs f10,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,428(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// lfs f9,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,424(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// lfs f8,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,456(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// rlwinm r6,r10,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x8307d928
	if (ctx.cr6.eq) goto loc_8307D928;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lfs f0,-18264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// b 0x8307d9ec
	goto loc_8307D9EC;
loc_8307D928:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsqrts f11,f0
	ctx.f11.f64 = double(float(sqrt(ctx.f0.f64)));
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f12,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// lfs f0,-18264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stfs f13,220(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r6,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r6.u32);
	// stfs f12,236(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stfs f10,232(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r4,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r4.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// stfs f11,228(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// beq cr6,0x8307d9bc
	if (ctx.cr6.eq) goto loc_8307D9BC;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// b 0x8307d9ec
	goto loc_8307D9EC;
loc_8307D9BC:
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307D9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stw r7,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
loc_8307D9EC:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lhz r8,144(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 144);
	// sth r8,468(r31)
	PPC_STORE_U16(ctx.r31.u32 + 468, ctx.r8.u16);
	// lwz r3,1412(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1412);
	// bl 0x8315b938
	ctx.lr = 0x8307DA18;
	sub_8315B938(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// beq cr6,0x8307da3c
	if (ctx.cr6.eq) goto loc_8307DA3C;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// li r4,6
	ctx.r4.s64 = 6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 ^ 1;
	// bl 0x8315bb30
	ctx.lr = 0x8307DA3C;
	sub_8315BB30(ctx, base);
loc_8307DA3C:
	// stb r27,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r27.u8);
	// addi r11,r31,396
	ctx.r11.s64 = ctx.r31.s64 + 396;
	// stb r27,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r27.u8);
	// addi r11,r31,412
	ctx.r11.s64 = ctx.r31.s64 + 412;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,404(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,408(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f10,244(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f9,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,248(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f8,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,252(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f7,408(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,256(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lfs f6,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// stfs f6,412(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lfs f5,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,416(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// lfs f4,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,420(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f3,260(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lfs f2,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,264(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lfs f1,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// lfs f0,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// lfs f13,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x8307dae4
	if (ctx.cr6.gt) goto loc_8307DAE4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8307DAE4:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x831f2dc8
	ctx.lr = 0x8307DAEC;
	sub_831F2DC8(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307db14
	if (ctx.cr6.eq) goto loc_8307DB14;
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8307db0c
	if (ctx.cr6.gt) goto loc_8307DB0C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_8307DB0C:
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8315bb30
	ctx.lr = 0x8307DB14;
	sub_8315BB30(ctx, base);
loc_8307DB14:
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lfs f13,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,452(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// lfs f12,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,460(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307DB48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307c238
	ctx.lr = 0x8307DB50;
	sub_8307C238(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,132(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,25,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// lwz r7,168(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8307DB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,124(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 124);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8307DB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8307db98
	if (ctx.cr6.eq) goto loc_8307DB98;
	// bl 0x83079360
	ctx.lr = 0x8307DB94;
	sub_83079360(ctx, base);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
loc_8307DB98:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307dbb4
	if (ctx.cr6.eq) goto loc_8307DBB4;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
loc_8307DBB4:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307dc8c
	if (ctx.cr6.eq) goto loc_8307DC8C;
	// lbz r11,181(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 181);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307dc2c
	if (ctx.cr6.eq) goto loc_8307DC2C;
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r6,r31,152
	ctx.r6.s64 = ctx.r31.s64 + 152;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r30,156(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r8,r5,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8315c0a8
	ctx.lr = 0x8307DC28;
	sub_8315C0A8(ctx, base);
	// stb r26,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r26.u8);
loc_8307DC2C:
	// lbz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307dca8
	if (ctx.cr6.eq) goto loc_8307DCA8;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r6,24
	ctx.r6.s64 = 24;
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8315bd60
	ctx.lr = 0x8307DC7C;
	sub_8315BD60(ctx, base);
	// stb r26,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r26.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_8307DC8C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-3104
	ctx.r4.s64 = ctx.r11.s64 + -3104;
	// li r5,1267
	ctx.r5.s64 = 1267;
	// addi r7,r4,-88
	ctx.r7.s64 = ctx.r4.s64 + -88;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82d17988
	ctx.lr = 0x8307DCA8;
	sub_82D17988(ctx, base);
loc_8307DCA8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307DCB4"))) PPC_WEAK_FUNC(sub_8307DCB4);
PPC_FUNC_IMPL(__imp__sub_8307DCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307DCB8"))) PPC_WEAK_FUNC(sub_8307DCB8);
PPC_FUNC_IMPL(__imp__sub_8307DCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8307DCC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r7,r10,-2752
	ctx.r7.s64 = ctx.r10.s64 + -2752;
	// addi r6,r9,-2792
	ctx.r6.s64 = ctx.r9.s64 + -2792;
	// addi r5,r8,-2796
	ctx.r5.s64 = ctx.r8.s64 + -2796;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307dd1c
	if (ctx.cr6.eq) goto loc_8307DD1C;
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
	ctx.lr = 0x8307DD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307DD1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x831f2f08
	ctx.lr = 0x8307DD34;
	sub_831F2F08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-3008
	ctx.r10.s64 = ctx.r11.s64 + -3008;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307DD48"))) PPC_WEAK_FUNC(sub_8307DD48);
PPC_FUNC_IMPL(__imp__sub_8307DD48) {
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
	// addi r31,r30,-4
	ctx.r31.s64 = ctx.r30.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307DD78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,708
	ctx.r3.s64 = ctx.r11.s64 + 708;
	// bl 0x8300e0f8
	ctx.lr = 0x8307DD88;
	sub_8300E0F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307ad30
	ctx.lr = 0x8307DD94;
	sub_8307AD30(ctx, base);
	// lwz r4,560(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307ddc0
	if (ctx.cr6.eq) goto loc_8307DDC0;
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
	ctx.lr = 0x8307DDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r8.u32);
loc_8307DDC0:
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307ddd0
	if (ctx.cr6.eq) goto loc_8307DDD0;
	// bl 0x8315b9a8
	ctx.lr = 0x8307DDD0;
	sub_8315B9A8(ctx, base);
loc_8307DDD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f3728
	ctx.lr = 0x8307DDD8;
	sub_831F3728(ctx, base);
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

__attribute__((alias("__imp__sub_8307DDF0"))) PPC_WEAK_FUNC(sub_8307DDF0);
PPC_FUNC_IMPL(__imp__sub_8307DDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8307DDF8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r9,r11,-3008
	ctx.r9.s64 = ctx.r11.s64 + -3008;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f31,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,80(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r5,1
	ctx.r5.s64 = 1;
	// bgt cr6,0x8307de3c
	if (ctx.cr6.gt) goto loc_8307DE3C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8307DE3C:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,1160
	ctx.r4.s64 = ctx.r28.s64 + 1160;
	// bl 0x831f3598
	ctx.lr = 0x8307DE4C;
	sub_831F3598(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r11,-3620
	ctx.r6.s64 = ctx.r11.s64 + -3620;
	// addi r5,r10,-2752
	ctx.r5.s64 = ctx.r10.s64 + -2752;
	// addi r4,r9,-2792
	ctx.r4.s64 = ctx.r9.s64 + -2792;
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// addi r3,r8,-2796
	ctx.r3.s64 = ctx.r8.s64 + -2796;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lfs f0,6140(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// addi r11,r31,188
	ctx.r11.s64 = ctx.r31.s64 + 188;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// stfs f31,152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// addi r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 + 216;
	// stfs f31,160(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// addi r11,r31,396
	ctx.r11.s64 = ctx.r31.s64 + 396;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stfs f31,172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f31,176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f31,188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f31,192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f31,196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f31,204(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// stfs f31,208(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stfs f31,220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stfs f31,224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// stfs f31,232(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f31,236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f31,240(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f31,244(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f31,248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f31,252(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f31,268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f31,396(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stfs f31,400(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f31,412(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f31,416(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f31,420(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// beq cr6,0x8307df6c
	if (ctx.cr6.eq) goto loc_8307DF6C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307DF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8307df6c
	if (ctx.cr6.eq) goto loc_8307DF6C;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
loc_8307DF6C:
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// addi r3,r28,708
	ctx.r3.s64 = ctx.r28.s64 + 708;
	// bl 0x8300b480
	ctx.lr = 0x8307DF78;
	sub_8300B480(ctx, base);
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stfs f31,480(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f31,476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f31,472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stfs f31,492(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,488(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f31,504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f31,516(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f31,512(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f31,508(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stfs f31,424(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stfs f31,428(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stfs f31,432(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// sth r30,468(r31)
	PPC_STORE_U16(ctx.r31.u32 + 468, ctx.r30.u16);
	// stfs f31,448(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f31,452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f31,296(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f31,300(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f31,304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f31,324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f31,320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f31,316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f31,456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stfs f31,444(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// stfs f31,440(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stfs f31,436(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stw r28,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r28.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stfs f31,544(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f31,540(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f31,536(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f31,556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// lfs f0,-18264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stfs f31,560(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// stfs f31,584(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// stfs f31,580(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stfs f31,576(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f31,596(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f31,592(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stfs f31,588(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// bl 0x8307ad30
	ctx.lr = 0x8307E06C;
	sub_8307AD30(ctx, base);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r29,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r30,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,140(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// stw r10,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// bl 0x8307d750
	ctx.lr = 0x8307E08C;
	sub_8307D750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307E09C"))) PPC_WEAK_FUNC(sub_8307E09C);
PPC_FUNC_IMPL(__imp__sub_8307E09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307E0A0"))) PPC_WEAK_FUNC(sub_8307E0A0);
PPC_FUNC_IMPL(__imp__sub_8307E0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8307E0A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,340(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8307e0cc
	if (ctx.cr6.eq) goto loc_8307E0CC;
	// bl 0x83079360
	ctx.lr = 0x8307E0C8;
	sub_83079360(ctx, base);
	// stw r3,340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 340, ctx.r3.u32);
loc_8307E0CC:
	// lwz r25,340(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8307e220
	if (ctx.cr6.eq) goto loc_8307E220;
	// lis r27,-31901
	ctx.r27.s64 = -2090663936;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8307E0E0:
	// lwz r28,360(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 360);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8307e204
	if (ctx.cr6.eq) goto loc_8307E204;
loc_8307E0EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83081cf8
	ctx.lr = 0x8307E0F4;
	sub_83081CF8(ctx, base);
	// cmplw cr6,r24,r28
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8307e1ec
	if (ctx.cr6.eq) goto loc_8307E1EC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8307e1d8
	if (ctx.cr6.gt) goto loc_8307E1D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8307e130
	if (!ctx.cr6.eq) goto loc_8307E130;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8307e138
	goto loc_8307E138;
loc_8307E130:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8307E138:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8307e1d8
	if (!ctx.cr6.lt) goto loc_8307E1D8;
	// lwz r3,-32308(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32308);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307E160;
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
	// beq cr6,0x8307e190
	if (ctx.cr6.eq) goto loc_8307E190;
loc_8307E178:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8307e178
	if (!ctx.cr6.eq) goto loc_8307E178;
loc_8307E190:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307e1b0
	if (ctx.cr6.eq) goto loc_8307E1B0;
	// lwz r3,-32308(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307E1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307E1B0:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8307E1D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8307E1EC:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r26,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r26.u32);
	// stw r26,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x8307e0ec
	if (!ctx.cr6.eq) goto loc_8307E0EC;
loc_8307E204:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,352(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 352);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8307ad30
	ctx.lr = 0x8307E214;
	sub_8307AD30(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8307e0e0
	if (!ctx.cr6.eq) goto loc_8307E0E0;
loc_8307E220:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307E228"))) PPC_WEAK_FUNC(sub_8307E228);
PPC_FUNC_IMPL(__imp__sub_8307E228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307E240"))) PPC_WEAK_FUNC(sub_8307E240);
PPC_FUNC_IMPL(__imp__sub_8307E240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,396(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,396
	ctx.r11.s64 = ctx.r4.s64 + 396;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,400(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,404(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,408(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 408);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,412(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 412);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,416(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 416);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,420(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 420);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307E280"))) PPC_WEAK_FUNC(sub_8307E280);
PPC_FUNC_IMPL(__imp__sub_8307E280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307E2A8"))) PPC_WEAK_FUNC(sub_8307E2A8);
PPC_FUNC_IMPL(__imp__sub_8307E2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f9.f64 = double(temp.f32);
	// fadds f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// blt cr6,0x8307e320
	if (ctx.cr6.lt) goto loc_8307E320;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fsqrts f3,f6
	ctx.f3.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f11,f10,f2
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f12,f7,f2
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f13,f4,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// b 0x8307e478
	goto loc_8307E478;
loc_8307E320:
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8307e330
	if (!ctx.cr6.gt) goto loc_8307E330;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8307E330:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f11,r10,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x8307e344
	if (!ctx.cr6.gt) goto loc_8307E344;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8307E344:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8307e410
	if (ctx.cr6.lt) goto loc_8307E410;
	// beq cr6,0x8307e3b4
	if (ctx.cr6.eq) goto loc_8307E3B4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8307e468
	if (!ctx.cr6.lt) goto loc_8307E468;
	// fadds f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fadds f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f7,f10
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f12,f5,f10
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// b 0x8307e478
	goto loc_8307E478;
loc_8307E3B4:
	// fadds f11,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// fadds f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fadds f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f11,f5,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// b 0x8307e478
	goto loc_8307E478;
loc_8307E410:
	// fsubs f12,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fadds f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fdivs f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f13,f6,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f0,f3,f10
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// b 0x8307e478
	goto loc_8307E478;
loc_8307E468:
	// lfs f0,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
loc_8307E478:
	// stfs f11,216(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f12,220(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f13,224(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307E498"))) PPC_WEAK_FUNC(sub_8307E498);
PPC_FUNC_IMPL(__imp__sub_8307E498) {
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
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307e4dc
	if (!ctx.cr6.eq) goto loc_8307E4DC;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307E4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r3.u32);
loc_8307E4DC:
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

__attribute__((alias("__imp__sub_8307E4F0"))) PPC_WEAK_FUNC(sub_8307E4F0);
PPC_FUNC_IMPL(__imp__sub_8307E4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307e5e4
	if (ctx.cr6.eq) goto loc_8307E5E4;
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// addi r5,r31,600
	ctx.r5.s64 = ctx.r31.s64 + 600;
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f11,f8
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fnmsubs f6,f3,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f0,f7,f8
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f11,f8,f7
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f6,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f8,f4,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82d5c278
	ctx.lr = 0x8307E5D8;
	sub_82D5C278(ctx, base);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r8,r9,0,19,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
loc_8307E5E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307E5F8"))) PPC_WEAK_FUNC(sub_8307E5F8);
PPC_FUNC_IMPL(__imp__sub_8307E5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8307E600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8307e644
	if (ctx.cr6.eq) goto loc_8307E644;
loc_8307E618:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8307e630
	if (ctx.cr6.eq) goto loc_8307E630;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8307e638
	if (!ctx.cr6.eq) goto loc_8307E638;
loc_8307E630:
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// bl 0x830478d8
	ctx.lr = 0x8307E638;
	sub_830478D8(ctx, base);
loc_8307E638:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8307e618
	if (!ctx.cr6.eq) goto loc_8307E618;
loc_8307E644:
	// lwz r31,68(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8307e668
	if (ctx.cr6.eq) goto loc_8307E668;
loc_8307E650:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// bl 0x83047a08
	ctx.lr = 0x8307E65C;
	sub_83047A08(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8307e650
	if (!ctx.cr6.eq) goto loc_8307E650;
loc_8307E668:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307E670"))) PPC_WEAK_FUNC(sub_8307E670);
PPC_FUNC_IMPL(__imp__sub_8307E670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307e764
	if (ctx.cr6.eq) goto loc_8307E764;
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// addi r5,r31,600
	ctx.r5.s64 = ctx.r31.s64 + 600;
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f11,f8
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fnmsubs f6,f3,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f0,f7,f8
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f11,f8,f7
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f6,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f8,f4,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82d5c278
	ctx.lr = 0x8307E758;
	sub_82D5C278(ctx, base);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r8,r9,0,19,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
loc_8307E764:
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307E77C"))) PPC_WEAK_FUNC(sub_8307E77C);
PPC_FUNC_IMPL(__imp__sub_8307E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307E780"))) PPC_WEAK_FUNC(sub_8307E780);
PPC_FUNC_IMPL(__imp__sub_8307E780) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307E788"))) PPC_WEAK_FUNC(sub_8307E788);
PPC_FUNC_IMPL(__imp__sub_8307E788) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307E790"))) PPC_WEAK_FUNC(sub_8307E790);
PPC_FUNC_IMPL(__imp__sub_8307E790) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8307ea88
	sub_8307EA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307E798"))) PPC_WEAK_FUNC(sub_8307E798);
PPC_FUNC_IMPL(__imp__sub_8307E798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8307e7c0
	if (!ctx.cr6.eq) goto loc_8307E7C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,324(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8307e7c4
	if (ctx.cr6.eq) goto loc_8307E7C4;
loc_8307E7C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8307E7C4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307E7CC"))) PPC_WEAK_FUNC(sub_8307E7CC);
PPC_FUNC_IMPL(__imp__sub_8307E7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307E7D0"))) PPC_WEAK_FUNC(sub_8307E7D0);
PPC_FUNC_IMPL(__imp__sub_8307E7D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307E7E0"))) PPC_WEAK_FUNC(sub_8307E7E0);
PPC_FUNC_IMPL(__imp__sub_8307E7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8307E7E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307e918
	if (ctx.cr6.eq) goto loc_8307E918;
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307e910
	if (!ctx.cr6.eq) goto loc_8307E910;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,-18264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x8307e840
	if (ctx.cr6.eq) goto loc_8307E840;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8315bd60
	ctx.lr = 0x8307E840;
	sub_8315BD60(ctx, base);
loc_8307E840:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x8307e86c
	if (ctx.cr6.eq) goto loc_8307E86C;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8315bd60
	ctx.lr = 0x8307E86C;
	sub_8315BD60(ctx, base);
loc_8307E86C:
	// lbz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307e87c
	if (!ctx.cr6.eq) goto loc_8307E87C;
	// stb r27,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r27.u8);
loc_8307E87C:
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8307e8b8
	if (ctx.cr6.eq) goto loc_8307E8B8;
loc_8307E88C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8307e8a4
	if (ctx.cr6.eq) goto loc_8307E8A4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8307e8ac
	if (!ctx.cr6.eq) goto loc_8307E8AC;
loc_8307E8A4:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x830478d8
	ctx.lr = 0x8307E8AC;
	sub_830478D8(ctx, base);
loc_8307E8AC:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8307e88c
	if (!ctx.cr6.eq) goto loc_8307E88C;
loc_8307E8B8:
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8307e8dc
	if (ctx.cr6.eq) goto loc_8307E8DC;
loc_8307E8C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047a08
	ctx.lr = 0x8307E8D0;
	sub_83047A08(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8307e8c4
	if (!ctx.cr6.eq) goto loc_8307E8C4;
loc_8307E8DC:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307e8f4
	if (!ctx.cr6.eq) goto loc_8307E8F4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307ea20
	if (ctx.cr6.eq) goto loc_8307EA20;
loc_8307E8F4:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307ea28
	if (ctx.cr6.eq) goto loc_8307EA28;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8315bb30
	ctx.lr = 0x8307E90C;
	sub_8315BB30(ctx, base);
	// b 0x8307ea28
	goto loc_8307EA28;
loc_8307E910:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307ea28
	if (!ctx.cr6.eq) goto loc_8307EA28;
loc_8307E918:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307ea28
	if (ctx.cr6.eq) goto loc_8307EA28;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,-18264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x8307e95c
	if (ctx.cr6.eq) goto loc_8307E95C;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8315bd60
	ctx.lr = 0x8307E95C;
	sub_8315BD60(ctx, base);
loc_8307E95C:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,424(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,428(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x8307e988
	if (ctx.cr6.eq) goto loc_8307E988;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8315bd60
	ctx.lr = 0x8307E988;
	sub_8315BD60(ctx, base);
loc_8307E988:
	// lbz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307e998
	if (!ctx.cr6.eq) goto loc_8307E998;
	// stb r27,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r27.u8);
loc_8307E998:
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8307e9d4
	if (ctx.cr6.eq) goto loc_8307E9D4;
loc_8307E9A8:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8307e9c0
	if (ctx.cr6.eq) goto loc_8307E9C0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8307e9c8
	if (!ctx.cr6.eq) goto loc_8307E9C8;
loc_8307E9C0:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x830478d8
	ctx.lr = 0x8307E9C8;
	sub_830478D8(ctx, base);
loc_8307E9C8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8307e9a8
	if (!ctx.cr6.eq) goto loc_8307E9A8;
loc_8307E9D4:
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8307e9f8
	if (ctx.cr6.eq) goto loc_8307E9F8;
loc_8307E9E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047a08
	ctx.lr = 0x8307E9EC;
	sub_83047A08(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8307e9e0
	if (!ctx.cr6.eq) goto loc_8307E9E0;
loc_8307E9F8:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307ea20
	if (ctx.cr6.eq) goto loc_8307EA20;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307ea28
	if (ctx.cr6.eq) goto loc_8307EA28;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8315bb30
	ctx.lr = 0x8307EA1C;
	sub_8315BB30(ctx, base);
	// b 0x8307ea28
	goto loc_8307EA28;
loc_8307EA20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307a918
	ctx.lr = 0x8307EA28;
	sub_8307A918(ctx, base);
loc_8307EA28:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307ea4c
	if (ctx.cr6.eq) goto loc_8307EA4C;
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8307ea5c
	if (ctx.cr6.eq) goto loc_8307EA5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307ea78
	if (!ctx.cr6.eq) goto loc_8307EA78;
loc_8307EA4C:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307ea78
	if (ctx.cr6.eq) goto loc_8307EA78;
loc_8307EA5C:
	// lbz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 528);
	// stw r28,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307ea7c
	if (!ctx.cr6.eq) goto loc_8307EA7C;
	// stb r27,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8307EA78:
	// stw r28,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
loc_8307EA7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307EA84"))) PPC_WEAK_FUNC(sub_8307EA84);
PPC_FUNC_IMPL(__imp__sub_8307EA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307EA88"))) PPC_WEAK_FUNC(sub_8307EA88);
PPC_FUNC_IMPL(__imp__sub_8307EA88) {
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
	// bl 0x8307dcb8
	ctx.lr = 0x8307EAA8;
	sub_8307DCB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307ead0
	if (ctx.cr6.eq) goto loc_8307EAD0;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307EAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307EAD0:
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

__attribute__((alias("__imp__sub_8307EAEC"))) PPC_WEAK_FUNC(sub_8307EAEC);
PPC_FUNC_IMPL(__imp__sub_8307EAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307EAF0"))) PPC_WEAK_FUNC(sub_8307EAF0);
PPC_FUNC_IMPL(__imp__sub_8307EAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-2512
	ctx.r10.s64 = ctx.r11.s64 + -2512;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EB00"))) PPC_WEAK_FUNC(sub_8307EB00);
PPC_FUNC_IMPL(__imp__sub_8307EB00) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-2416
	ctx.r10.s64 = ctx.r11.s64 + -2416;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307eb4c
	if (ctx.cr6.eq) goto loc_8307EB4C;
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
	ctx.lr = 0x8307EB44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
loc_8307EB4C:
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

__attribute__((alias("__imp__sub_8307EB60"))) PPC_WEAK_FUNC(sub_8307EB60);
PPC_FUNC_IMPL(__imp__sub_8307EB60) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EB68"))) PPC_WEAK_FUNC(sub_8307EB68);
PPC_FUNC_IMPL(__imp__sub_8307EB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8307eb78
	if (!ctx.cr6.eq) goto loc_8307EB78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8307EB78:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r9,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r9.u32);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r8,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r8.u32);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r7,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r7.u32);
	// stw r10,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EBDC"))) PPC_WEAK_FUNC(sub_8307EBDC);
PPC_FUNC_IMPL(__imp__sub_8307EBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307EBE0"))) PPC_WEAK_FUNC(sub_8307EBE0);
PPC_FUNC_IMPL(__imp__sub_8307EBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EBE8"))) PPC_WEAK_FUNC(sub_8307EBE8);
PPC_FUNC_IMPL(__imp__sub_8307EBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EBF0"))) PPC_WEAK_FUNC(sub_8307EBF0);
PPC_FUNC_IMPL(__imp__sub_8307EBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EBF8"))) PPC_WEAK_FUNC(sub_8307EBF8);
PPC_FUNC_IMPL(__imp__sub_8307EBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC00"))) PPC_WEAK_FUNC(sub_8307EC00);
PPC_FUNC_IMPL(__imp__sub_8307EC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC08"))) PPC_WEAK_FUNC(sub_8307EC08);
PPC_FUNC_IMPL(__imp__sub_8307EC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC10"))) PPC_WEAK_FUNC(sub_8307EC10);
PPC_FUNC_IMPL(__imp__sub_8307EC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC18"))) PPC_WEAK_FUNC(sub_8307EC18);
PPC_FUNC_IMPL(__imp__sub_8307EC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC20"))) PPC_WEAK_FUNC(sub_8307EC20);
PPC_FUNC_IMPL(__imp__sub_8307EC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC28"))) PPC_WEAK_FUNC(sub_8307EC28);
PPC_FUNC_IMPL(__imp__sub_8307EC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC30"))) PPC_WEAK_FUNC(sub_8307EC30);
PPC_FUNC_IMPL(__imp__sub_8307EC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC4C"))) PPC_WEAK_FUNC(sub_8307EC4C);
PPC_FUNC_IMPL(__imp__sub_8307EC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307EC50"))) PPC_WEAK_FUNC(sub_8307EC50);
PPC_FUNC_IMPL(__imp__sub_8307EC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC6C"))) PPC_WEAK_FUNC(sub_8307EC6C);
PPC_FUNC_IMPL(__imp__sub_8307EC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307EC70"))) PPC_WEAK_FUNC(sub_8307EC70);
PPC_FUNC_IMPL(__imp__sub_8307EC70) {
	PPC_FUNC_PROLOGUE();
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC78"))) PPC_WEAK_FUNC(sub_8307EC78);
PPC_FUNC_IMPL(__imp__sub_8307EC78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC80"))) PPC_WEAK_FUNC(sub_8307EC80);
PPC_FUNC_IMPL(__imp__sub_8307EC80) {
	PPC_FUNC_PROLOGUE();
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC88"))) PPC_WEAK_FUNC(sub_8307EC88);
PPC_FUNC_IMPL(__imp__sub_8307EC88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC90"))) PPC_WEAK_FUNC(sub_8307EC90);
PPC_FUNC_IMPL(__imp__sub_8307EC90) {
	PPC_FUNC_PROLOGUE();
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EC98"))) PPC_WEAK_FUNC(sub_8307EC98);
PPC_FUNC_IMPL(__imp__sub_8307EC98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ECA0"))) PPC_WEAK_FUNC(sub_8307ECA0);
PPC_FUNC_IMPL(__imp__sub_8307ECA0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ECA8"))) PPC_WEAK_FUNC(sub_8307ECA8);
PPC_FUNC_IMPL(__imp__sub_8307ECA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ECB0"))) PPC_WEAK_FUNC(sub_8307ECB0);
PPC_FUNC_IMPL(__imp__sub_8307ECB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-2416
	ctx.r7.s64 = ctx.r8.s64 + -2416;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
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
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// sth r4,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, ctx.r4.u16);
	// sth r11,54(r3)
	PPC_STORE_U16(ctx.r3.u32 + 54, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ED14"))) PPC_WEAK_FUNC(sub_8307ED14);
PPC_FUNC_IMPL(__imp__sub_8307ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307ED18"))) PPC_WEAK_FUNC(sub_8307ED18);
PPC_FUNC_IMPL(__imp__sub_8307ED18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8307ED20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307ed58
	if (ctx.cr6.eq) goto loc_8307ED58;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307ED54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_8307ED58:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f9,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f8,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f7,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8307ee0c
	if (ctx.cr6.eq) goto loc_8307EE0C;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// li r5,270
	ctx.r5.s64 = 270;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307EDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8307EE0C:
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307EE18"))) PPC_WEAK_FUNC(sub_8307EE18);
PPC_FUNC_IMPL(__imp__sub_8307EE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EE2C"))) PPC_WEAK_FUNC(sub_8307EE2C);
PPC_FUNC_IMPL(__imp__sub_8307EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307EE30"))) PPC_WEAK_FUNC(sub_8307EE30);
PPC_FUNC_IMPL(__imp__sub_8307EE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EE38"))) PPC_WEAK_FUNC(sub_8307EE38);
PPC_FUNC_IMPL(__imp__sub_8307EE38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EE48"))) PPC_WEAK_FUNC(sub_8307EE48);
PPC_FUNC_IMPL(__imp__sub_8307EE48) {
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

__attribute__((alias("__imp__sub_8307EE5C"))) PPC_WEAK_FUNC(sub_8307EE5C);
PPC_FUNC_IMPL(__imp__sub_8307EE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307EE60"))) PPC_WEAK_FUNC(sub_8307EE60);
PPC_FUNC_IMPL(__imp__sub_8307EE60) {
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

__attribute__((alias("__imp__sub_8307EE70"))) PPC_WEAK_FUNC(sub_8307EE70);
PPC_FUNC_IMPL(__imp__sub_8307EE70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EE80"))) PPC_WEAK_FUNC(sub_8307EE80);
PPC_FUNC_IMPL(__imp__sub_8307EE80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EE88"))) PPC_WEAK_FUNC(sub_8307EE88);
PPC_FUNC_IMPL(__imp__sub_8307EE88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EE94"))) PPC_WEAK_FUNC(sub_8307EE94);
PPC_FUNC_IMPL(__imp__sub_8307EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307EE98"))) PPC_WEAK_FUNC(sub_8307EE98);
PPC_FUNC_IMPL(__imp__sub_8307EE98) {
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

__attribute__((alias("__imp__sub_8307EEB8"))) PPC_WEAK_FUNC(sub_8307EEB8);
PPC_FUNC_IMPL(__imp__sub_8307EEB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EEBC"))) PPC_WEAK_FUNC(sub_8307EEBC);
PPC_FUNC_IMPL(__imp__sub_8307EEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307EEC0"))) PPC_WEAK_FUNC(sub_8307EEC0);
PPC_FUNC_IMPL(__imp__sub_8307EEC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EEC4"))) PPC_WEAK_FUNC(sub_8307EEC4);
PPC_FUNC_IMPL(__imp__sub_8307EEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307EEC8"))) PPC_WEAK_FUNC(sub_8307EEC8);
PPC_FUNC_IMPL(__imp__sub_8307EEC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307eedc
	if (!ctx.cr6.eq) goto loc_8307EEDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8307EEDC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EEEC"))) PPC_WEAK_FUNC(sub_8307EEEC);
PPC_FUNC_IMPL(__imp__sub_8307EEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307EEF0"))) PPC_WEAK_FUNC(sub_8307EEF0);
PPC_FUNC_IMPL(__imp__sub_8307EEF0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8307EEFC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8307eefc
	if (!ctx.cr6.eq) goto loc_8307EEFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307EF18"))) PPC_WEAK_FUNC(sub_8307EF18);
PPC_FUNC_IMPL(__imp__sub_8307EF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,282
	ctx.r5.s64 = 282;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_8307EF38"))) PPC_WEAK_FUNC(sub_8307EF38);
PPC_FUNC_IMPL(__imp__sub_8307EF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8307EF40;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r26,r27,28
	ctx.r26.s64 = ctx.r27.s64 + 28;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r29,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8307efb0
	if (ctx.cr0.eq) goto loc_8307EFB0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8307EF74:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307EF90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r8,r3,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8307efa4
	if (!ctx.cr6.eq) goto loc_8307EFA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120a48
	ctx.lr = 0x8307EFA4;
	sub_83120A48(ctx, base);
loc_8307EFA4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8307ef74
	if (!ctx.cr0.eq) goto loc_8307EF74;
loc_8307EFB0:
	// addi r27,r27,48
	ctx.r27.s64 = ctx.r27.s64 + 48;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83133bd0
	ctx.lr = 0x8307EFBC;
	sub_83133BD0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8307f0e8
	if (ctx.cr6.eq) goto loc_8307F0E8;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8307EFCC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,244(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307EFE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8307f020
	if (!ctx.cr6.eq) goto loc_8307F020;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307f020
	if (!ctx.cr6.eq) goto loc_8307F020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8312e150
	ctx.lr = 0x8307F020;
	sub_8312E150(ctx, base);
loc_8307F020:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307f04c
	if (!ctx.cr6.eq) goto loc_8307F04C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bf08
	ctx.lr = 0x8307F04C;
	sub_8311BF08(ctx, base);
loc_8307F04C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8307f06c
	if (!ctx.cr6.lt) goto loc_8307F06C;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8307F06C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8307efcc
	if (!ctx.cr0.eq) goto loc_8307EFCC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8307f0e8
	if (ctx.cr6.eq) goto loc_8307F0E8;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8307F088:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,244(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307F0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8307f0dc
	if (!ctx.cr6.eq) goto loc_8307F0DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F0C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307f0dc
	if (!ctx.cr6.eq) goto loc_8307F0DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83124ca0
	ctx.lr = 0x8307F0DC;
	sub_83124CA0(ctx, base);
loc_8307F0DC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8307f088
	if (!ctx.cr0.eq) goto loc_8307F088;
loc_8307F0E8:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8307f18c
	if (ctx.cr6.eq) goto loc_8307F18C;
loc_8307F0F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8307f180
	if (ctx.cr6.eq) goto loc_8307F180;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8307F104:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,244(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307F120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8307f174
	if (!ctx.cr6.eq) goto loc_8307F174;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8307f174
	if (!ctx.cr6.lt) goto loc_8307F174;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307f174
	if (!ctx.cr6.eq) goto loc_8307F174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83120c88
	ctx.lr = 0x8307F174;
	sub_83120C88(ctx, base);
loc_8307F174:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8307f104
	if (!ctx.cr0.eq) goto loc_8307F104;
loc_8307F180:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8307f0f4
	if (ctx.cr6.lt) goto loc_8307F0F4;
loc_8307F18C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8307f1d8
	if (ctx.cr6.eq) goto loc_8307F1D8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8307F198:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307F1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r8,r3,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8307f1cc
	if (!ctx.cr6.eq) goto loc_8307F1CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8312bd98
	ctx.lr = 0x8307F1CC;
	sub_8312BD98(ctx, base);
loc_8307F1CC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8307f198
	if (!ctx.cr0.eq) goto loc_8307F198;
loc_8307F1D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F1E4"))) PPC_WEAK_FUNC(sub_8307F1E4);
PPC_FUNC_IMPL(__imp__sub_8307F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307F1E8"))) PPC_WEAK_FUNC(sub_8307F1E8);
PPC_FUNC_IMPL(__imp__sub_8307F1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8307F1F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8307f240
	if (ctx.cr0.eq) goto loc_8307F240;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8307F214:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8311c350
	ctx.lr = 0x8307F220;
	sub_8311C350(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8307f214
	if (ctx.cr6.lt) goto loc_8307F214;
loc_8307F240:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F248"))) PPC_WEAK_FUNC(sub_8307F248);
PPC_FUNC_IMPL(__imp__sub_8307F248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8307F250;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// li r28,0
	ctx.r28.s64 = 0;
	// srawi. r24,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x8307f2c8
	if (ctx.cr0.eq) goto loc_8307F2C8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8307F284:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307F2AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8307f2d4
	if (!ctx.cr6.eq) goto loc_8307F2D4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8307f284
	if (ctx.cr6.lt) goto loc_8307F284;
loc_8307F2C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8307F2D4:
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F2E8"))) PPC_WEAK_FUNC(sub_8307F2E8);
PPC_FUNC_IMPL(__imp__sub_8307F2E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// b 0x831213f8
	sub_831213F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F310"))) PPC_WEAK_FUNC(sub_8307F310);
PPC_FUNC_IMPL(__imp__sub_8307F310) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// b 0x83121438
	sub_83121438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F338"))) PPC_WEAK_FUNC(sub_8307F338);
PPC_FUNC_IMPL(__imp__sub_8307F338) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// b 0x83121468
	sub_83121468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F360"))) PPC_WEAK_FUNC(sub_8307F360);
PPC_FUNC_IMPL(__imp__sub_8307F360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// b 0x831214a8
	sub_831214A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F380"))) PPC_WEAK_FUNC(sub_8307F380);
PPC_FUNC_IMPL(__imp__sub_8307F380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8307F388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r31,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8307f3d4
	if (ctx.cr0.eq) goto loc_8307F3D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8307F3AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,400(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 400);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307F3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8307f3ac
	if (!ctx.cr0.eq) goto loc_8307F3AC;
loc_8307F3D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F3DC"))) PPC_WEAK_FUNC(sub_8307F3DC);
PPC_FUNC_IMPL(__imp__sub_8307F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307F3E0"))) PPC_WEAK_FUNC(sub_8307F3E0);
PPC_FUNC_IMPL(__imp__sub_8307F3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8307F3E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r31,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8307f420
	if (ctx.cr0.eq) goto loc_8307F420;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8307F408:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x831227b0
	ctx.lr = 0x8307F414;
	sub_831227B0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8307f408
	if (!ctx.cr0.eq) goto loc_8307F408;
loc_8307F420:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F428"))) PPC_WEAK_FUNC(sub_8307F428);
PPC_FUNC_IMPL(__imp__sub_8307F428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8307F430;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r31,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8307f498
	if (ctx.cr0.eq) goto loc_8307F498;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8307F454:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r27,r30,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,308(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307F474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,328(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 328);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8307F48C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8307f454
	if (!ctx.cr0.eq) goto loc_8307F454;
loc_8307F498:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F4A0"))) PPC_WEAK_FUNC(sub_8307F4A0);
PPC_FUNC_IMPL(__imp__sub_8307F4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8307F4A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8307f4f8
	if (ctx.cr0.eq) goto loc_8307F4F8;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8307F4CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,420(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8307f4e8
	if (!ctx.cr6.eq) goto loc_8307F4E8;
	// bl 0x8311bf58
	ctx.lr = 0x8307F4E4;
	sub_8311BF58(ctx, base);
	// b 0x8307f4ec
	goto loc_8307F4EC;
loc_8307F4E8:
	// bl 0x83121288
	ctx.lr = 0x8307F4EC;
	sub_83121288(ctx, base);
loc_8307F4EC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8307f4cc
	if (!ctx.cr0.eq) goto loc_8307F4CC;
loc_8307F4F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F500"))) PPC_WEAK_FUNC(sub_8307F500);
PPC_FUNC_IMPL(__imp__sub_8307F500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8307F508;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r31,r26,28
	ctx.r31.s64 = ctx.r26.s64 + 28;
	// addi r10,r11,-2116
	ctx.r10.s64 = ctx.r11.s64 + -2116;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r8,28(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8307f584
	if (ctx.cr0.eq) goto loc_8307F584;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8307F540:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307f578
	if (ctx.cr6.eq) goto loc_8307F578;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307f570
	if (ctx.cr6.eq) goto loc_8307F570;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307F570:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r27,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
loc_8307F578:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8307f540
	if (!ctx.cr0.eq) goto loc_8307F540;
loc_8307F584:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r30,r26,2
	ctx.r30.s64 = ctx.r26.s64 + 131072;
	// addi r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 8;
	// addi r30,r30,5096
	ctx.r30.s64 = ctx.r30.s64 + 5096;
	// lis r28,-31901
	ctx.r28.s64 = -2090663936;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r10.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307f5c4
	if (ctx.cr6.eq) goto loc_8307F5C4;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307F5C4:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r3,r26,48
	ctx.r3.s64 = ctx.r26.s64 + 48;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// bl 0x83133b70
	ctx.lr = 0x8307F5D8;
	sub_83133B70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307f5f8
	if (ctx.cr6.eq) goto loc_8307F5F8;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307F5F8:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307f624
	if (ctx.cr6.eq) goto loc_8307F624;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307F624:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F638"))) PPC_WEAK_FUNC(sub_8307F638);
PPC_FUNC_IMPL(__imp__sub_8307F638) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-2116
	ctx.r10.s64 = ctx.r11.s64 + -2116;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x83133d88
	ctx.lr = 0x8307F684;
	sub_83133D88(ctx, base);
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,5096
	ctx.r9.s64 = ctx.r9.s64 + 5096;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8307F6B4"))) PPC_WEAK_FUNC(sub_8307F6B4);
PPC_FUNC_IMPL(__imp__sub_8307F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307F6B8"))) PPC_WEAK_FUNC(sub_8307F6B8);
PPC_FUNC_IMPL(__imp__sub_8307F6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8307F6C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307f6e0
	if (ctx.cr6.eq) goto loc_8307F6E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c018
	ctx.lr = 0x8307F6E0;
	sub_8311C018(ctx, base);
loc_8307F6E0:
	// lwz r27,284(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addis r31,r26,2
	ctx.r31.s64 = ctx.r26.s64 + 131072;
	// addi r31,r31,5096
	ctx.r31.s64 = ctx.r31.s64 + 5096;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8307f7cc
	if (ctx.cr6.gt) goto loc_8307F7CC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8307f720
	if (!ctx.cr6.eq) goto loc_8307F720;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8307f728
	goto loc_8307F728;
loc_8307F720:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_8307F728:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8307f7cc
	if (!ctx.cr6.lt) goto loc_8307F7CC;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x8307F754;
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
	// beq cr6,0x8307f784
	if (ctx.cr6.eq) goto loc_8307F784;
loc_8307F76C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8307f76c
	if (!ctx.cr6.eq) goto loc_8307F76C;
loc_8307F784:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307f7a4
	if (ctx.cr6.eq) goto loc_8307F7A4;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307F7A4:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8307F7CC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r30,r26,28
	ctx.r30.s64 = ctx.r26.s64 + 28;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8307f838
	if (ctx.cr6.eq) goto loc_8307F838;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307f82c
	if (ctx.cr6.eq) goto loc_8307F82C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F82C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307F82C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8307F838:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8307f85c
	if (ctx.cr6.eq) goto loc_8307F85C;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8307F85C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8307f898
	if (!ctx.cr6.lt) goto loc_8307F898;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r8,284(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 284);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r29.u32);
loc_8307F898:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307F8A0"))) PPC_WEAK_FUNC(sub_8307F8A0);
PPC_FUNC_IMPL(__imp__sub_8307F8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x8307F8A8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addis r29,r24,2
	ctx.r29.s64 = ctx.r24.s64 + 131072;
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r29,r29,5096
	ctx.r29.s64 = ctx.r29.s64 + 5096;
	// lis r26,-31901
	ctx.r26.s64 = -2090663936;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8307f8f8
	if (ctx.cr0.eq) goto loc_8307F8F8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r22,-4(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// b 0x8307f9fc
	goto loc_8307F9FC;
loc_8307F8F8:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// addi r31,r24,8
	ctx.r31.s64 = ctx.r24.s64 + 8;
	// lwz r8,8(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// srawi r22,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r7.s32 >> 2;
	// bgt cr6,0x8307f9e8
	if (ctx.cr6.gt) goto loc_8307F9E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8307f940
	if (!ctx.cr6.eq) goto loc_8307F940;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8307f948
	goto loc_8307F948;
loc_8307F940:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8307F948:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8307f9e8
	if (!ctx.cr6.lt) goto loc_8307F9E8;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F970;
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
	// beq cr6,0x8307f9a0
	if (ctx.cr6.eq) goto loc_8307F9A0;
loc_8307F988:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8307f988
	if (!ctx.cr6.eq) goto loc_8307F988;
loc_8307F9A0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307f9c0
	if (ctx.cr6.eq) goto loc_8307F9C0;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307F9C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307F9C0:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8307F9E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8307F9FC:
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1104
	ctx.r4.s64 = 1104;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307FA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307fa34
	if (ctx.cr6.eq) goto loc_8307FA34;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83127070
	ctx.lr = 0x8307FA2C;
	sub_83127070(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8307fa38
	goto loc_8307FA38;
loc_8307FA34:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8307FA38:
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// rlwinm r25,r22,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addi r31,r24,28
	ctx.r31.s64 = ctx.r24.s64 + 28;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// stwx r7,r25,r9
	PPC_STORE_U32(ctx.r25.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r9,36(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8307fb34
	if (ctx.cr6.gt) goto loc_8307FB34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8307fa8c
	if (!ctx.cr6.eq) goto loc_8307FA8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8307fa94
	goto loc_8307FA94;
loc_8307FA8C:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8307FA94:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8307fb34
	if (!ctx.cr6.lt) goto loc_8307FB34;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307FABC;
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
	// beq cr6,0x8307faec
	if (ctx.cr6.eq) goto loc_8307FAEC;
loc_8307FAD4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8307fad4
	if (!ctx.cr6.eq) goto loc_8307FAD4;
loc_8307FAEC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307fb0c
	if (ctx.cr6.eq) goto loc_8307FB0C;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307FB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307FB0C:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8307FB34:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,388(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 388);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8307FB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8307fcb0
	if (!ctx.cr6.eq) goto loc_8307FCB0;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8307fc48
	if (ctx.cr6.gt) goto loc_8307FC48;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8307fba0
	if (!ctx.cr6.eq) goto loc_8307FBA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8307fba8
	goto loc_8307FBA8;
loc_8307FBA0:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8307FBA8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8307fc48
	if (!ctx.cr6.lt) goto loc_8307FC48;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307FBD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8307fc00
	if (ctx.cr6.eq) goto loc_8307FC00;
loc_8307FBE8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8307fbe8
	if (!ctx.cr6.eq) goto loc_8307FBE8;
loc_8307FC00:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307fc20
	if (ctx.cr6.eq) goto loc_8307FC20;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307FC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307FC20:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
loc_8307FC48:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stwx r21,r25,r9
	PPC_STORE_U32(ctx.r25.u32 + ctx.r9.u32, ctx.r21.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r6,404(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 404);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8307FC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r5,-2224
	ctx.r4.s64 = ctx.r5.s64 + -2224;
	// li r5,51
	ctx.r5.s64 = 51;
	// addi r7,r4,-48
	ctx.r7.s64 = ctx.r4.s64 + -48;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17988
	ctx.lr = 0x8307FCA4;
	sub_82D17988(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8307FCB0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307FCBC"))) PPC_WEAK_FUNC(sub_8307FCBC);
PPC_FUNC_IMPL(__imp__sub_8307FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307FCC0"))) PPC_WEAK_FUNC(sub_8307FCC0);
PPC_FUNC_IMPL(__imp__sub_8307FCC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307FCCC"))) PPC_WEAK_FUNC(sub_8307FCCC);
PPC_FUNC_IMPL(__imp__sub_8307FCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307FCD0"))) PPC_WEAK_FUNC(sub_8307FCD0);
PPC_FUNC_IMPL(__imp__sub_8307FCD0) {
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
	// beq cr6,0x8307fd08
	if (ctx.cr6.eq) goto loc_8307FD08;
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
	ctx.lr = 0x8307FD08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307FD08:
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

__attribute__((alias("__imp__sub_8307FD2C"))) PPC_WEAK_FUNC(sub_8307FD2C);
PPC_FUNC_IMPL(__imp__sub_8307FD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307FD30"))) PPC_WEAK_FUNC(sub_8307FD30);
PPC_FUNC_IMPL(__imp__sub_8307FD30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307FD40"))) PPC_WEAK_FUNC(sub_8307FD40);
PPC_FUNC_IMPL(__imp__sub_8307FD40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307FD4C"))) PPC_WEAK_FUNC(sub_8307FD4C);
PPC_FUNC_IMPL(__imp__sub_8307FD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307FD50"))) PPC_WEAK_FUNC(sub_8307FD50);
PPC_FUNC_IMPL(__imp__sub_8307FD50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8307fd78
	if (ctx.cr6.eq) goto loc_8307FD78;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8307FD78:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307FD88"))) PPC_WEAK_FUNC(sub_8307FD88);
PPC_FUNC_IMPL(__imp__sub_8307FD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8307FD90;
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
	// beq cr6,0x8307fdb0
	if (ctx.cr6.eq) goto loc_8307FDB0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
loc_8307FDB0:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8307fe54
	if (!ctx.cr6.lt) goto loc_8307FE54;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x8307FDDC;
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
	// beq cr6,0x8307fe0c
	if (ctx.cr6.eq) goto loc_8307FE0C;
loc_8307FDF4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8307fdf4
	if (!ctx.cr6.eq) goto loc_8307FDF4;
loc_8307FE0C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307fe2c
	if (ctx.cr6.eq) goto loc_8307FE2C;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307FE2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307FE2C:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8307FE54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307FE5C"))) PPC_WEAK_FUNC(sub_8307FE5C);
PPC_FUNC_IMPL(__imp__sub_8307FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307FE60"))) PPC_WEAK_FUNC(sub_8307FE60);
PPC_FUNC_IMPL(__imp__sub_8307FE60) {
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

__attribute__((alias("__imp__sub_8307FE74"))) PPC_WEAK_FUNC(sub_8307FE74);
PPC_FUNC_IMPL(__imp__sub_8307FE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307FE78"))) PPC_WEAK_FUNC(sub_8307FE78);
PPC_FUNC_IMPL(__imp__sub_8307FE78) {
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
	// beq cr6,0x8307feb0
	if (ctx.cr6.eq) goto loc_8307FEB0;
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
	ctx.lr = 0x8307FEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307FEB0:
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

__attribute__((alias("__imp__sub_8307FED4"))) PPC_WEAK_FUNC(sub_8307FED4);
PPC_FUNC_IMPL(__imp__sub_8307FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307FED8"))) PPC_WEAK_FUNC(sub_8307FED8);
PPC_FUNC_IMPL(__imp__sub_8307FED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8307FEE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8307ffcc
	if (ctx.cr6.gt) goto loc_8307FFCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8307ff20
	if (!ctx.cr6.eq) goto loc_8307FF20;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8307ff28
	goto loc_8307FF28;
loc_8307FF20:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8307FF28:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8307ffcc
	if (!ctx.cr6.lt) goto loc_8307FFCC;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x8307FF54;
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
	// beq cr6,0x8307ff84
	if (ctx.cr6.eq) goto loc_8307FF84;
loc_8307FF6C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8307ff6c
	if (!ctx.cr6.eq) goto loc_8307FF6C;
loc_8307FF84:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307ffa4
	if (ctx.cr6.eq) goto loc_8307FFA4;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307FFA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307FFA4:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8307FFCC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307FFEC"))) PPC_WEAK_FUNC(sub_8307FFEC);
PPC_FUNC_IMPL(__imp__sub_8307FFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307FFF0"))) PPC_WEAK_FUNC(sub_8307FFF0);
PPC_FUNC_IMPL(__imp__sub_8307FFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8307FFF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x830800e4
	if (ctx.cr6.gt) goto loc_830800E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83080038
	if (!ctx.cr6.eq) goto loc_83080038;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83080040
	goto loc_83080040;
loc_83080038:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_83080040:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830800e4
	if (!ctx.cr6.lt) goto loc_830800E4;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x8308006C;
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
	// beq cr6,0x8308009c
	if (ctx.cr6.eq) goto loc_8308009C;
loc_83080084:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83080084
	if (!ctx.cr6.eq) goto loc_83080084;
loc_8308009C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830800bc
	if (ctx.cr6.eq) goto loc_830800BC;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830800BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830800BC:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_830800E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83080104"))) PPC_WEAK_FUNC(sub_83080104);
PPC_FUNC_IMPL(__imp__sub_83080104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080108"))) PPC_WEAK_FUNC(sub_83080108);
PPC_FUNC_IMPL(__imp__sub_83080108) {
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
	// bl 0x8307f500
	ctx.lr = 0x83080128;
	sub_8307F500(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83080150
	if (ctx.cr6.eq) goto loc_83080150;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83080150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83080150:
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

__attribute__((alias("__imp__sub_8308016C"))) PPC_WEAK_FUNC(sub_8308016C);
PPC_FUNC_IMPL(__imp__sub_8308016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080170"))) PPC_WEAK_FUNC(sub_83080170);
PPC_FUNC_IMPL(__imp__sub_83080170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83080178;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83080264
	if (ctx.cr6.gt) goto loc_83080264;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x830801b8
	if (!ctx.cr6.eq) goto loc_830801B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830801c0
	goto loc_830801C0;
loc_830801B8:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_830801C0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83080264
	if (!ctx.cr6.lt) goto loc_83080264;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x830801EC;
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
	// beq cr6,0x8308021c
	if (ctx.cr6.eq) goto loc_8308021C;
loc_83080204:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83080204
	if (!ctx.cr6.eq) goto loc_83080204;
loc_8308021C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8308023c
	if (ctx.cr6.eq) goto loc_8308023C;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308023C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8308023C:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83080264:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83080284"))) PPC_WEAK_FUNC(sub_83080284);
PPC_FUNC_IMPL(__imp__sub_83080284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080288"))) PPC_WEAK_FUNC(sub_83080288);
PPC_FUNC_IMPL(__imp__sub_83080288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83080290;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8308037c
	if (ctx.cr6.gt) goto loc_8308037C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x830802d0
	if (!ctx.cr6.eq) goto loc_830802D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830802d8
	goto loc_830802D8;
loc_830802D0:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_830802D8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8308037c
	if (!ctx.cr6.lt) goto loc_8308037C;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x83080304;
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
	// beq cr6,0x83080334
	if (ctx.cr6.eq) goto loc_83080334;
loc_8308031C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8308031c
	if (!ctx.cr6.eq) goto loc_8308031C;
loc_83080334:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83080354
	if (ctx.cr6.eq) goto loc_83080354;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83080354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83080354:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8308037C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308039C"))) PPC_WEAK_FUNC(sub_8308039C);
PPC_FUNC_IMPL(__imp__sub_8308039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830803A0"))) PPC_WEAK_FUNC(sub_830803A0);
PPC_FUNC_IMPL(__imp__sub_830803A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f1,f2,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 - ctx.f0.f64));
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f11,f4
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f12,f5,f11
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f10,f3,f8
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f9,f5,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f7,f1,f11
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmsubs f13,f5,f8,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - ctx.f13.f64));
	// fmadds f12,f3,f6,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmsubs f10,f4,f6,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 - ctx.f10.f64));
	// fmuls f31,f1,f8
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmsubs f9,f3,f11,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 - ctx.f9.f64));
	// fmuls f6,f1,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmadds f13,f4,f8,f12
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmuls f12,f10,f2
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f11,f9,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fsubs f10,f6,f1
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fmuls f9,f13,f5
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fsubs f5,f31,f11
	ctx.f5.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fsubs f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fadds f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fadds f1,f4,f9
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308046C"))) PPC_WEAK_FUNC(sub_8308046C);
PPC_FUNC_IMPL(__imp__sub_8308046C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080470"))) PPC_WEAK_FUNC(sub_83080470);
PPC_FUNC_IMPL(__imp__sub_83080470) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080480"))) PPC_WEAK_FUNC(sub_83080480);
PPC_FUNC_IMPL(__imp__sub_83080480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andc r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080490"))) PPC_WEAK_FUNC(sub_83080490);
PPC_FUNC_IMPL(__imp__sub_83080490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ctx.r5.u64;
	// srw r3,r10,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830804A0"))) PPC_WEAK_FUNC(sub_830804A0);
PPC_FUNC_IMPL(__imp__sub_830804A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andc r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830804B0"))) PPC_WEAK_FUNC(sub_830804B0);
PPC_FUNC_IMPL(__imp__sub_830804B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830804C8"))) PPC_WEAK_FUNC(sub_830804C8);
PPC_FUNC_IMPL(__imp__sub_830804C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-1712
	ctx.r10.s64 = ctx.r11.s64 + -1712;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830804D8"))) PPC_WEAK_FUNC(sub_830804D8);
PPC_FUNC_IMPL(__imp__sub_830804D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830804DC"))) PPC_WEAK_FUNC(sub_830804DC);
PPC_FUNC_IMPL(__imp__sub_830804DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830804E0"))) PPC_WEAK_FUNC(sub_830804E0);
PPC_FUNC_IMPL(__imp__sub_830804E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830804E4"))) PPC_WEAK_FUNC(sub_830804E4);
PPC_FUNC_IMPL(__imp__sub_830804E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830804E8"))) PPC_WEAK_FUNC(sub_830804E8);
PPC_FUNC_IMPL(__imp__sub_830804E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830804EC"))) PPC_WEAK_FUNC(sub_830804EC);
PPC_FUNC_IMPL(__imp__sub_830804EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830804F0"))) PPC_WEAK_FUNC(sub_830804F0);
PPC_FUNC_IMPL(__imp__sub_830804F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830804F4"))) PPC_WEAK_FUNC(sub_830804F4);
PPC_FUNC_IMPL(__imp__sub_830804F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830804F8"))) PPC_WEAK_FUNC(sub_830804F8);
PPC_FUNC_IMPL(__imp__sub_830804F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830804FC"))) PPC_WEAK_FUNC(sub_830804FC);
PPC_FUNC_IMPL(__imp__sub_830804FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080500"))) PPC_WEAK_FUNC(sub_83080500);
PPC_FUNC_IMPL(__imp__sub_83080500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080504"))) PPC_WEAK_FUNC(sub_83080504);
PPC_FUNC_IMPL(__imp__sub_83080504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080508"))) PPC_WEAK_FUNC(sub_83080508);
PPC_FUNC_IMPL(__imp__sub_83080508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308050C"))) PPC_WEAK_FUNC(sub_8308050C);
PPC_FUNC_IMPL(__imp__sub_8308050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080510"))) PPC_WEAK_FUNC(sub_83080510);
PPC_FUNC_IMPL(__imp__sub_83080510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080514"))) PPC_WEAK_FUNC(sub_83080514);
PPC_FUNC_IMPL(__imp__sub_83080514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080518"))) PPC_WEAK_FUNC(sub_83080518);
PPC_FUNC_IMPL(__imp__sub_83080518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308051C"))) PPC_WEAK_FUNC(sub_8308051C);
PPC_FUNC_IMPL(__imp__sub_8308051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080520"))) PPC_WEAK_FUNC(sub_83080520);
PPC_FUNC_IMPL(__imp__sub_83080520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080524"))) PPC_WEAK_FUNC(sub_83080524);
PPC_FUNC_IMPL(__imp__sub_83080524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080528"))) PPC_WEAK_FUNC(sub_83080528);
PPC_FUNC_IMPL(__imp__sub_83080528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080538"))) PPC_WEAK_FUNC(sub_83080538);
PPC_FUNC_IMPL(__imp__sub_83080538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080548"))) PPC_WEAK_FUNC(sub_83080548);
PPC_FUNC_IMPL(__imp__sub_83080548) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1428(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1428);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080550"))) PPC_WEAK_FUNC(sub_83080550);
PPC_FUNC_IMPL(__imp__sub_83080550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f1,f2,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 - ctx.f0.f64));
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f4,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f12,f3,f8
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f13,f11,f4
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f9,f5,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f7,f1,f11
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmadds f10,f5,f11,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmsubs f12,f4,f6,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 - ctx.f12.f64));
	// fmsubs f13,f5,f8,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - ctx.f13.f64));
	// fmuls f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmsubs f9,f11,f3,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 - ctx.f9.f64));
	// fmuls f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmadds f11,f3,f6,f10
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f10,f9,f2
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f6,f11,f5
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f5,f11,f4
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f4,f11,f3
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fsubs f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fadds f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fadds f2,f7,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080614"))) PPC_WEAK_FUNC(sub_83080614);
PPC_FUNC_IMPL(__imp__sub_83080614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080618"))) PPC_WEAK_FUNC(sub_83080618);
PPC_FUNC_IMPL(__imp__sub_83080618) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080620"))) PPC_WEAK_FUNC(sub_83080620);
PPC_FUNC_IMPL(__imp__sub_83080620) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,468(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 468);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080628"))) PPC_WEAK_FUNC(sub_83080628);
PPC_FUNC_IMPL(__imp__sub_83080628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f29,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f13,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f12,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f4,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f2,f4,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 - ctx.f0.f64));
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f30.f64 = double(temp.f32);
	// fmsubs f8,f9,f12,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmadds f3,f7,f13,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmsubs f6,f7,f11,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f6.f64));
	// fmsubs f5,f10,f13,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmuls f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f29,f10,f2
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f9,f8,f4
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f8,f4,f6
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f6,f4,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmadds f5,f10,f12,f3
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fadds f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f3,f29,f8
	ctx.f3.f64 = double(float(ctx.f29.f64 + ctx.f8.f64));
	// fadds f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fadds f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fadds f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// fadds f8,f2,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f4,f1,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f4,0(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fadds f3,f31,f6
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f6.f64));
	// stfs f3,4(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fadds f2,f30,f5
	ctx.f2.f64 = double(float(ctx.f30.f64 + ctx.f5.f64));
	// stfs f2,8(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfd f29,-24(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080708"))) PPC_WEAK_FUNC(sub_83080708);
PPC_FUNC_IMPL(__imp__sub_83080708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f4,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f1,f2,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 - ctx.f0.f64));
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f4,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f12,f3,f8
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f13,f11,f4
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f9,f5,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f7,f1,f11
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmadds f10,f5,f11,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmsubs f12,f4,f6,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 - ctx.f12.f64));
	// fmsubs f13,f5,f8,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - ctx.f13.f64));
	// fmuls f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmsubs f9,f11,f3,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 - ctx.f9.f64));
	// fmuls f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmadds f11,f3,f6,f10
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f6,f11,f5
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f5,f11,f4
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f4,f11,f3
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fsubs f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fadds f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fadds f2,f7,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830807D0"))) PPC_WEAK_FUNC(sub_830807D0);
PPC_FUNC_IMPL(__imp__sub_830807D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f11,160(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f4,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f2,f4,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 - ctx.f0.f64));
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f1,f9,f12,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f8,f7,f11,f6
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f6.f64));
	// fmsubs f6,f10,f13,f5
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmadds f5,f7,f13,f3
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmuls f3,f7,f2
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f7,f10,f2
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f9,f8,f4
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f8,f6,f4
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmadds f6,f10,f12,f5
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f5,f3,f1
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// fadds f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f3,f2,f8
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fmuls f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f1,f6,f12
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fadds f11,f4,f1
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fadds f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,4(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,8(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308087C"))) PPC_WEAK_FUNC(sub_8308087C);
PPC_FUNC_IMPL(__imp__sub_8308087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080880"))) PPC_WEAK_FUNC(sub_83080880);
PPC_FUNC_IMPL(__imp__sub_83080880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f11,160(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f4,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f2,f4,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 - ctx.f0.f64));
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f1,f9,f12,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f8,f7,f11,f6
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f6.f64));
	// fmsubs f6,f10,f13,f5
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmadds f5,f7,f13,f3
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmuls f3,f7,f2
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f7,f10,f2
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f9,f8,f4
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f8,f6,f4
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmadds f6,f10,f12,f5
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fsubs f5,f3,f1
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsubs f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fsubs f3,f2,f8
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fmuls f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f1,f6,f12
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fadds f11,f4,f1
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fadds f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,4(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,8(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308092C"))) PPC_WEAK_FUNC(sub_8308092C);
PPC_FUNC_IMPL(__imp__sub_8308092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080930"))) PPC_WEAK_FUNC(sub_83080930);
PPC_FUNC_IMPL(__imp__sub_83080930) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,72
	ctx.r11.s64 = ctx.r4.s64 + 72;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080940"))) PPC_WEAK_FUNC(sub_83080940);
PPC_FUNC_IMPL(__imp__sub_83080940) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,17
	ctx.r11.s64 = ctx.r4.s64 + 17;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080958"))) PPC_WEAK_FUNC(sub_83080958);
PPC_FUNC_IMPL(__imp__sub_83080958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// andc r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080968"))) PPC_WEAK_FUNC(sub_83080968);
PPC_FUNC_IMPL(__imp__sub_83080968) {
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
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83080990
	if (ctx.cr6.eq) goto loc_83080990;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830809bc
	if (ctx.cr6.eq) goto loc_830809BC;
loc_83080990:
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830809d4
	if (ctx.cr6.eq) goto loc_830809D4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830809B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830809d4
	if (!ctx.cr6.eq) goto loc_830809D4;
loc_830809BC:
	// li r11,0
	ctx.r11.s64 = 0;
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
loc_830809D4:
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_830809EC"))) PPC_WEAK_FUNC(sub_830809EC);
PPC_FUNC_IMPL(__imp__sub_830809EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830809F0"))) PPC_WEAK_FUNC(sub_830809F0);
PPC_FUNC_IMPL(__imp__sub_830809F0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-1336
	ctx.r10.s64 = ctx.r11.s64 + -1336;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831f3ab0
	ctx.lr = 0x83080A14;
	sub_831F3AB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3a50
	ctx.lr = 0x83080A1C;
	sub_831F3A50(ctx, base);
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

__attribute__((alias("__imp__sub_83080A30"))) PPC_WEAK_FUNC(sub_83080A30);
PPC_FUNC_IMPL(__imp__sub_83080A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83080a54
	if (!ctx.cr6.eq) goto loc_83080A54;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83080a58
	if (ctx.cr6.eq) goto loc_83080A58;
loc_83080A54:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83080A58:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080A60"))) PPC_WEAK_FUNC(sub_83080A60);
PPC_FUNC_IMPL(__imp__sub_83080A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080A64"))) PPC_WEAK_FUNC(sub_83080A64);
PPC_FUNC_IMPL(__imp__sub_83080A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080A68"))) PPC_WEAK_FUNC(sub_83080A68);
PPC_FUNC_IMPL(__imp__sub_83080A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83080A7C"))) PPC_WEAK_FUNC(sub_83080A7C);
PPC_FUNC_IMPL(__imp__sub_83080A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080A80"))) PPC_WEAK_FUNC(sub_83080A80);
PPC_FUNC_IMPL(__imp__sub_83080A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83080aa4
	if (ctx.cr6.eq) goto loc_83080AA4;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x83080aa8
	if (!ctx.cr6.eq) goto loc_83080AA8;
loc_83080AA4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83080AA8:
	// lwz r11,292(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83080acc
	if (ctx.cr6.eq) goto loc_83080ACC;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x83080ad0
	if (!ctx.cr6.eq) goto loc_83080AD0;
loc_83080ACC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83080AD0:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83080b00
	if (ctx.cr6.eq) goto loc_83080B00;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83080af8
	if (!ctx.cr6.eq) goto loc_83080AF8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// b 0x83080b20
	goto loc_83080B20;
loc_83080AF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83080b18
	if (!ctx.cr6.eq) goto loc_83080B18;
loc_83080B00:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83080b18
	if (ctx.cr6.eq) goto loc_83080B18;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// b 0x83080b20
	goto loc_83080B20;
loc_83080B18:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83080B20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// beq cr6,0x83080b80
	if (ctx.cr6.eq) goto loc_83080B80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lwz r11,288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83080b5c
	if (ctx.cr6.eq) goto loc_83080B5C;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
loc_83080B5C:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// blr 
	return;
loc_83080B80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lwz r11,288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83080bac
	if (ctx.cr6.eq) goto loc_83080BAC;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
loc_83080BAC:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080BD0"))) PPC_WEAK_FUNC(sub_83080BD0);
PPC_FUNC_IMPL(__imp__sub_83080BD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080BD8"))) PPC_WEAK_FUNC(sub_83080BD8);
PPC_FUNC_IMPL(__imp__sub_83080BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080BE0"))) PPC_WEAK_FUNC(sub_83080BE0);
PPC_FUNC_IMPL(__imp__sub_83080BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080BF4"))) PPC_WEAK_FUNC(sub_83080BF4);
PPC_FUNC_IMPL(__imp__sub_83080BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080BF8"))) PPC_WEAK_FUNC(sub_83080BF8);
PPC_FUNC_IMPL(__imp__sub_83080BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f2,52(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83080C10"))) PPC_WEAK_FUNC(sub_83080C10);
PPC_FUNC_IMPL(__imp__sub_83080C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080C24"))) PPC_WEAK_FUNC(sub_83080C24);
PPC_FUNC_IMPL(__imp__sub_83080C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080C28"))) PPC_WEAK_FUNC(sub_83080C28);
PPC_FUNC_IMPL(__imp__sub_83080C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r3,r11,29,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080C34"))) PPC_WEAK_FUNC(sub_83080C34);
PPC_FUNC_IMPL(__imp__sub_83080C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83080C38"))) PPC_WEAK_FUNC(sub_83080C38);
PPC_FUNC_IMPL(__imp__sub_83080C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83080d14
	if (ctx.cr6.eq) goto loc_83080D14;
	// lfs f13,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,152
	ctx.r10.s64 = ctx.r11.s64 + 152;
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f4,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f2,f4,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 - ctx.f0.f64));
	// lfs f0,7676(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f30.f64 = double(temp.f32);
	// fmsubs f6,f7,f11,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f6.f64));
	// fmsubs f8,f9,f12,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f5,f10,f13,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmadds f3,f7,f13,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmuls f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmadds f4,f9,f11,f3
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f9,f2,f5
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fmuls f8,f4,f13
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f6,f4,f11
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f7,f4,f12
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fadds f5,f3,f8
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f9,f30,f12
	ctx.f9.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fadds f10,f31,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// b 0x83080d2c
	goto loc_83080D2C;
loc_83080D14:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_83080D2C:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// lfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83080D44"))) PPC_WEAK_FUNC(sub_83080D44);
PPC_FUNC_IMPL(__imp__sub_83080D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

