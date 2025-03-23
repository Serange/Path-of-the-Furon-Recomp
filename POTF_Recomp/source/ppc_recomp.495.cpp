#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FCE3F8"))) PPC_WEAK_FUNC(sub_82FCE3F8);
PPC_FUNC_IMPL(__imp__sub_82FCE3F8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v62,v63,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v62,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE408"))) PPC_WEAK_FUNC(sub_82FCE408);
PPC_FUNC_IMPL(__imp__sub_82FCE408) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v62,v63,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v62,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE418"))) PPC_WEAK_FUNC(sub_82FCE418);
PPC_FUNC_IMPL(__imp__sub_82FCE418) {
	PPC_FUNC_PROLOGUE();
	// vaddfp v1,v1,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE420"))) PPC_WEAK_FUNC(sub_82FCE420);
PPC_FUNC_IMPL(__imp__sub_82FCE420) {
	PPC_FUNC_PROLOGUE();
	// vsubfp v1,v1,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE428"))) PPC_WEAK_FUNC(sub_82FCE428);
PPC_FUNC_IMPL(__imp__sub_82FCE428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-18004(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE450"))) PPC_WEAK_FUNC(sub_82FCE450);
PPC_FUNC_IMPL(__imp__sub_82FCE450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// blt cr6,0x82fce47c
	if (ctx.cr6.lt) goto loc_82FCE47C;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_82FCE47C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bgt cr6,0x82fce488
	if (ctx.cr6.gt) goto loc_82FCE488;
	// li r11,-32738
	ctx.r11.s64 = -32738;
loc_82FCE488:
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE490"))) PPC_WEAK_FUNC(sub_82FCE490);
PPC_FUNC_IMPL(__imp__sub_82FCE490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-17348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-17360(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE4C4"))) PPC_WEAK_FUNC(sub_82FCE4C4);
PPC_FUNC_IMPL(__imp__sub_82FCE4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCE4C8"))) PPC_WEAK_FUNC(sub_82FCE4C8);
PPC_FUNC_IMPL(__imp__sub_82FCE4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,17344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17344);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subfic r11,r10,128
	ctx.xer.ca = ctx.r10.u32 <= 128;
	ctx.r11.s64 = 128 - ctx.r10.s64;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x82fce4f8
	if (ctx.cr6.lt) goto loc_82FCE4F8;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82FCE4F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82fce504
	if (ctx.cr6.gt) goto loc_82FCE504;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FCE504:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE50C"))) PPC_WEAK_FUNC(sub_82FCE50C);
PPC_FUNC_IMPL(__imp__sub_82FCE50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCE510"))) PPC_WEAK_FUNC(sub_82FCE510);
PPC_FUNC_IMPL(__imp__sub_82FCE510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwimi r11,r4,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-18004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE540"))) PPC_WEAK_FUNC(sub_82FCE540);
PPC_FUNC_IMPL(__imp__sub_82FCE540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// blt cr6,0x82fce56c
	if (ctx.cr6.lt) goto loc_82FCE56C;
	// li r11,-129
	ctx.r11.s64 = -129;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_82FCE56C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bgt cr6,0x82fce580
	if (ctx.cr6.gt) goto loc_82FCE580;
	// li r11,128
	ctx.r11.s64 = 128;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_82FCE580:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE594"))) PPC_WEAK_FUNC(sub_82FCE594);
PPC_FUNC_IMPL(__imp__sub_82FCE594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCE598"))) PPC_WEAK_FUNC(sub_82FCE598);
PPC_FUNC_IMPL(__imp__sub_82FCE598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE5A0"))) PPC_WEAK_FUNC(sub_82FCE5A0);
PPC_FUNC_IMPL(__imp__sub_82FCE5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-18004(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE5C8"))) PPC_WEAK_FUNC(sub_82FCE5C8);
PPC_FUNC_IMPL(__imp__sub_82FCE5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// blt cr6,0x82fce5f4
	if (ctx.cr6.lt) goto loc_82FCE5F4;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_82FCE5F4:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bgt cr6,0x82fce600
	if (ctx.cr6.gt) goto loc_82FCE600;
	// li r11,-32738
	ctx.r11.s64 = -32738;
loc_82FCE600:
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE608"))) PPC_WEAK_FUNC(sub_82FCE608);
PPC_FUNC_IMPL(__imp__sub_82FCE608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-17348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-17360(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE63C"))) PPC_WEAK_FUNC(sub_82FCE63C);
PPC_FUNC_IMPL(__imp__sub_82FCE63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCE640"))) PPC_WEAK_FUNC(sub_82FCE640);
PPC_FUNC_IMPL(__imp__sub_82FCE640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,17344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17344);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subfic r11,r10,128
	ctx.xer.ca = ctx.r10.u32 <= 128;
	ctx.r11.s64 = 128 - ctx.r10.s64;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x82fce670
	if (ctx.cr6.lt) goto loc_82FCE670;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82FCE670:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82fce67c
	if (ctx.cr6.gt) goto loc_82FCE67C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FCE67C:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE684"))) PPC_WEAK_FUNC(sub_82FCE684);
PPC_FUNC_IMPL(__imp__sub_82FCE684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCE688"))) PPC_WEAK_FUNC(sub_82FCE688);
PPC_FUNC_IMPL(__imp__sub_82FCE688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwimi r11,r4,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-18004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE6B8"))) PPC_WEAK_FUNC(sub_82FCE6B8);
PPC_FUNC_IMPL(__imp__sub_82FCE6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// blt cr6,0x82fce6e4
	if (ctx.cr6.lt) goto loc_82FCE6E4;
	// li r11,-129
	ctx.r11.s64 = -129;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_82FCE6E4:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bgt cr6,0x82fce6f8
	if (ctx.cr6.gt) goto loc_82FCE6F8;
	// li r11,128
	ctx.r11.s64 = 128;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_82FCE6F8:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE70C"))) PPC_WEAK_FUNC(sub_82FCE70C);
PPC_FUNC_IMPL(__imp__sub_82FCE70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCE710"))) PPC_WEAK_FUNC(sub_82FCE710);
PPC_FUNC_IMPL(__imp__sub_82FCE710) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE718"))) PPC_WEAK_FUNC(sub_82FCE718);
PPC_FUNC_IMPL(__imp__sub_82FCE718) {
	PPC_FUNC_PROLOGUE();
	// vsubfp v0,v2,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v13,v0,v3,v1
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v63,v13,v7
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE72C"))) PPC_WEAK_FUNC(sub_82FCE72C);
PPC_FUNC_IMPL(__imp__sub_82FCE72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCE730"))) PPC_WEAK_FUNC(sub_82FCE730);
PPC_FUNC_IMPL(__imp__sub_82FCE730) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vor128 v62,v7,v7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// addi r8,r10,17376
	ctx.r8.s64 = ctx.r10.s64 + 17376;
	// vmulfp128 v12,v4,v8
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v8.f32)));
	// addi r9,r11,17360
	ctx.r9.s64 = ctx.r11.s64 + 17360;
	// li r7,16
	ctx.r7.s64 = 16;
	// vmulfp128 v13,v3,v62
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v62.f32)));
	// lvx128 v7,r0,r8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v60,v1,v63,v7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v58,v2,v63,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v61,v1,v63,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v2,v63,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v56,v60,31
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v54,v58,31
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v57,v61,31
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v55,v59,31
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vmulfp128 v10,v56,v8
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v8.f32)));
	// vsubfp128 v8,v54,v56
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v56.f32)));
	// vmulfp128 v11,v57,v62
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v9,v55,v57
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v57.f32)));
	// vmaddfp v6,v8,v12,v10
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v7,v9,v13,v11
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v6,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v7,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE7A0"))) PPC_WEAK_FUNC(sub_82FCE7A0);
PPC_FUNC_IMPL(__imp__sub_82FCE7A0) {
	PPC_FUNC_PROLOGUE();
	// vaddubm v0,v1,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vaddubm v13,v2,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// vupkhsb128 v63,v0,v0
	_mm_store_si128((__m128i*)ctx.v63.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v0.s8), _mm_load_si128((__m128i*)ctx.v0.s8))));
	// vupklsb128 v62,v0,v0
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v0.s16)));
	// vupkhsb128 v61,v13,v0
	_mm_store_si128((__m128i*)ctx.v61.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v13.s8), _mm_load_si128((__m128i*)ctx.v13.s8))));
	// vupklsb128 v60,v13,v0
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v13.s16)));
	// vupkhsb128 v59,v63,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v63.s16), _mm_load_si128((__m128i*)ctx.v63.s16))));
	// vupklsb128 v58,v63,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v63.s16)));
	// vupkhsb128 v57,v62,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v62.s16), _mm_load_si128((__m128i*)ctx.v62.s16))));
	// vupklsb128 v56,v62,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v62.s16)));
	// vupkhsb128 v55,v61,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// vcsxwfp128 v0,v59,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v54,v61,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v61.s16)));
	// vcsxwfp128 v13,v58,7
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v53,v60,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// vcsxwfp128 v12,v57,7
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v52,v60,v96
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v60.s16)));
	// vcsxwfp128 v11,v56,7
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v51,v55,7
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v50,v54,7
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v49,v53,7
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v48,v52,7
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v2,v51,v0
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v1,v50,v13
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v31,v49,v12
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v30,v48,v11
	_mm_store_ps(ctx.v30.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v29,v2,v3,v0
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v28,v1,v4,v13
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v27,v31,v5,v12
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v26,v30,v6,v11
	_mm_store_ps(ctx.v26.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v47,v29,v7
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v46,v28,v8
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v45,v27,v9
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v44,v26,v10
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v47,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v45,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v44,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE848"))) PPC_WEAK_FUNC(sub_82FCE848);
PPC_FUNC_IMPL(__imp__sub_82FCE848) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v62,v63,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v62,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE858"))) PPC_WEAK_FUNC(sub_82FCE858);
PPC_FUNC_IMPL(__imp__sub_82FCE858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r11,17408
	ctx.r8.s64 = ctx.r11.s64 + 17408;
	// addi r7,r10,17392
	ctx.r7.s64 = ctx.r10.s64 + 17392;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lvx128 v62,r4,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v61,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmulfp128 v59,v61,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v58,v60,v1
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v59,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE89C"))) PPC_WEAK_FUNC(sub_82FCE89C);
PPC_FUNC_IMPL(__imp__sub_82FCE89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCE8A0"))) PPC_WEAK_FUNC(sub_82FCE8A0);
PPC_FUNC_IMPL(__imp__sub_82FCE8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r11,17472
	ctx.r8.s64 = ctx.r11.s64 + 17472;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r10,17456
	ctx.r6.s64 = ctx.r10.s64 + 17456;
	// li r5,48
	ctx.r5.s64 = 48;
	// lvx128 v62,r4,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,80
	ctx.r10.s64 = 80;
	// vperm128 v57,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lvx128 v61,r4,r7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lvx128 v6,r0,r6
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r9,17440
	ctx.r7.s64 = ctx.r9.s64 + 17440;
	// lvx128 v60,r4,r5
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r4,r11
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r8,17424
	ctx.r6.s64 = ctx.r8.s64 + 17424;
	// lvx128 v58,r4,r10
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v61,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v61,v6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// li r5,1024
	ctx.r5.s64 = 1024;
	// vperm128 v61,v60,v59,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r4,2048
	ctx.r4.s64 = 2048;
	// vperm128 v59,v59,v58,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v7,r0,r7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v60,v60,v58,v6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,3072
	ctx.r11.s64 = 3072;
	// vperm128 v58,v57,v61,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r10,4096
	ctx.r10.s64 = 4096;
	// vperm128 v57,v57,v61,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r9,5120
	ctx.r9.s64 = 5120;
	// vperm128 v56,v63,v60,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v55,v63,v60,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v54,v62,v59,v7
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmulfp128 v53,v58,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v1.f32)));
	// vperm128 v52,v62,v59,v0
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v51,v57,v1
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v50,v56,v1
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v49,v55,v1
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v48,v54,v1
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v47,v52,v1
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v53,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v48,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v47,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE974"))) PPC_WEAK_FUNC(sub_82FCE974);
PPC_FUNC_IMPL(__imp__sub_82FCE974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCE978"))) PPC_WEAK_FUNC(sub_82FCE978);
PPC_FUNC_IMPL(__imp__sub_82FCE978) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vupkhsb128 v62,v63,v96
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v63.s16), _mm_load_si128((__m128i*)ctx.v63.s16))));
	// vupklsb128 v61,v63,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v63.s16)));
	// vcsxwfp128 v60,v62,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v59,v61,15
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vmulfp128 v58,v60,v1
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v57,v59,v2
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v58,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE9A4"))) PPC_WEAK_FUNC(sub_82FCE9A4);
PPC_FUNC_IMPL(__imp__sub_82FCE9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCE9A8"))) PPC_WEAK_FUNC(sub_82FCE9A8);
PPC_FUNC_IMPL(__imp__sub_82FCE9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,1024
	ctx.r10.s64 = 1024;
	// addi r9,r11,17488
	ctx.r9.s64 = ctx.r11.s64 + 17488;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vupkhsb128 v62,v63,v96
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v63.s16), _mm_load_si128((__m128i*)ctx.v63.s16))));
	// vupklsb128 v61,v63,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v63.s16)));
	// vcsxwfp128 v60,v62,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v59,v61,15
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vmulfp128 v58,v60,v1
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v57,v59,v1
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v58,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCE9E4"))) PPC_WEAK_FUNC(sub_82FCE9E4);
PPC_FUNC_IMPL(__imp__sub_82FCE9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCE9E8"))) PPC_WEAK_FUNC(sub_82FCE9E8);
PPC_FUNC_IMPL(__imp__sub_82FCE9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r7,r11,17584
	ctx.r7.s64 = ctx.r11.s64 + 17584;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r6,r10,17568
	ctx.r6.s64 = ctx.r10.s64 + 17568;
	// addi r5,r9,17552
	ctx.r5.s64 = ctx.r9.s64 + 17552;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lvx128 v62,r4,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r11,17536
	ctx.r7.s64 = ctx.r11.s64 + 17536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lvx128 v7,r0,r6
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v6,r0,r5
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v61,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r6,r10,17520
	ctx.r6.s64 = ctx.r10.s64 + 17520;
	// addi r5,r9,17504
	ctx.r5.s64 = ctx.r9.s64 + 17504;
	// vperm128 v60,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v59,v63,v62,v6
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1024
	ctx.r11.s64 = 1024;
	// lvx128 v63,r4,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,2048
	ctx.r10.s64 = 2048;
	// vperm128 v58,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v7,r0,r6
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v57,v60,v63,v7
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v56,v59,v63,v0
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r9,3072
	ctx.r9.s64 = 3072;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// vupkhsb128 v55,v58,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// li r7,5120
	ctx.r7.s64 = 5120;
	// vupklsb128 v54,v58,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v58.s16)));
	// vupkhsb128 v53,v57,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// vupklsb128 v52,v57,v96
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v57.s16)));
	// vupkhsb128 v51,v56,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vcsxwfp128 v50,v55,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v49,v56,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v56.s16)));
	// vcsxwfp128 v48,v54,15
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v47,v53,15
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v46,v52,15
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v45,v51,15
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v44,v49,15
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vmulfp128 v43,v50,v1
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v42,v48,v1
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v41,v47,v1
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v40,v46,v1
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v39,v45,v1
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v38,v44,v1
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v43,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEAD4"))) PPC_WEAK_FUNC(sub_82FCEAD4);
PPC_FUNC_IMPL(__imp__sub_82FCEAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCEAD8"))) PPC_WEAK_FUNC(sub_82FCEAD8);
PPC_FUNC_IMPL(__imp__sub_82FCEAD8) {
	PPC_FUNC_PROLOGUE();
	// vspltisb v0,7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x7)));
	// lvx128 v13,r0,r4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// vslb v12,v0,v0
	ctx.v12.u8[0] = ctx.v0.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v12.u8[1] = ctx.v0.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v12.u8[2] = ctx.v0.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v12.u8[3] = ctx.v0.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v12.u8[4] = ctx.v0.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v12.u8[5] = ctx.v0.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v12.u8[6] = ctx.v0.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v12.u8[7] = ctx.v0.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v12.u8[8] = ctx.v0.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v12.u8[9] = ctx.v0.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v12.u8[10] = ctx.v0.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v12.u8[11] = ctx.v0.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v12.u8[12] = ctx.v0.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v12.u8[13] = ctx.v0.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v12.u8[14] = ctx.v0.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v12.u8[15] = ctx.v0.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vaddubm v11,v13,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vupkhsb128 v63,v11,v0
	_mm_store_si128((__m128i*)ctx.v63.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v11.s8), _mm_load_si128((__m128i*)ctx.v11.s8))));
	// vupklsb128 v62,v11,v0
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v11.s16)));
	// vupkhsb128 v61,v63,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v63.s16), _mm_load_si128((__m128i*)ctx.v63.s16))));
	// vupklsb128 v60,v63,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v63.s16)));
	// vupkhsb128 v59,v62,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v62.s16), _mm_load_si128((__m128i*)ctx.v62.s16))));
	// vupklsb128 v58,v62,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v62.s16)));
	// vcsxwfp128 v57,v61,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v56,v60,7
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v55,v59,7
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v54,v58,7
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vmulfp128 v53,v57,v1
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v52,v56,v2
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v51,v55,v3
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v50,v54,v4
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v53,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEB40"))) PPC_WEAK_FUNC(sub_82FCEB40);
PPC_FUNC_IMPL(__imp__sub_82FCEB40) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vsldoi128 v62,v10,v63,12
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 4));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v61,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vmrghw128 v60,v61,v63
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrglw128 v59,v61,v63
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmulfp128 v58,v60,v1
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v57,v59,v2
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v58,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEB70"))) PPC_WEAK_FUNC(sub_82FCEB70);
PPC_FUNC_IMPL(__imp__sub_82FCEB70) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vsldoi v13,v10,v0,14
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 2));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vavgsh v13,v0,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epi16(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vmrghh v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vmrglh v11,v13,v0
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vupkhsb128 v63,v12,v96
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v12.s16), _mm_load_si128((__m128i*)ctx.v12.s16))));
	// vupklsb128 v62,v12,v96
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v12.s16)));
	// vupkhsb128 v61,v11,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16))));
	// vupklsb128 v60,v11,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v11.s16)));
	// vcsxwfp128 v59,v63,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v58,v62,15
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v57,v61,15
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v56,v60,15
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vmulfp128 v55,v59,v1
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v54,v58,v2
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v53,v57,v3
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v52,v56,v4
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v55,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEBD8"))) PPC_WEAK_FUNC(sub_82FCEBD8);
PPC_FUNC_IMPL(__imp__sub_82FCEBD8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vaddubm v0,v0,v9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r7,80
	ctx.r7.s64 = 80;
	// vsldoi v13,v10,v0,15
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 1));
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vavgsb v13,v0,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vmrghb v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vmrglb v11,v13,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vupkhsb128 v63,v12,v0
	_mm_store_si128((__m128i*)ctx.v63.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v12.s8), _mm_load_si128((__m128i*)ctx.v12.s8))));
	// vupklsb128 v62,v12,v0
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v12.s16)));
	// vupkhsb128 v61,v11,v0
	_mm_store_si128((__m128i*)ctx.v61.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v11.s8), _mm_load_si128((__m128i*)ctx.v11.s8))));
	// vupklsb128 v60,v11,v0
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v11.s16)));
	// vupkhsb128 v59,v63,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v63.s16), _mm_load_si128((__m128i*)ctx.v63.s16))));
	// vupklsb128 v58,v63,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v63.s16)));
	// vupkhsb128 v57,v62,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v62.s16), _mm_load_si128((__m128i*)ctx.v62.s16))));
	// vupklsb128 v56,v62,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v62.s16)));
	// vupkhsb128 v55,v61,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// vcsxwfp128 v54,v59,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v53,v61,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v61.s16)));
	// vcsxwfp128 v52,v58,7
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v51,v60,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// vcsxwfp128 v50,v57,7
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v49,v60,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v60.s16)));
	// vcsxwfp128 v48,v56,7
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v47,v55,7
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v46,v53,7
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v45,v51,7
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v44,v49,7
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vmulfp128 v43,v54,v1
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v42,v52,v2
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v41,v50,v3
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v40,v48,v4
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v39,v47,v5
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v38,v46,v6
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v37,v45,v7
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v36,v44,v8
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v43,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r4,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r4,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v36,r4,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCECA4"))) PPC_WEAK_FUNC(sub_82FCECA4);
PPC_FUNC_IMPL(__imp__sub_82FCECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCECA8"))) PPC_WEAK_FUNC(sub_82FCECA8);
PPC_FUNC_IMPL(__imp__sub_82FCECA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcedec
	if (ctx.cr6.eq) goto loc_82FCEDEC;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,44(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// beq cr6,0x82fced58
	if (ctx.cr6.eq) goto loc_82FCED58;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fced28
	if (!ctx.cr6.eq) goto loc_82FCED28;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// b 0x82fced6c
	goto loc_82FCED6C;
loc_82FCED28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fced58
	if (ctx.cr6.eq) goto loc_82FCED58;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fced58
	if (!ctx.cr6.eq) goto loc_82FCED58;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// b 0x82fced6c
	goto loc_82FCED6C;
loc_82FCED58:
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
loc_82FCED6C:
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bgt cr6,0x82fcedbc
	if (ctx.cr6.gt) goto loc_82FCEDBC;
	// lis r12,-32003
	ctx.r12.s64 = -2097348608;
	// addi r12,r12,-4712
	ctx.r12.s64 = ctx.r12.s64 + -4712;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82FCEDB0;
	case 1:
		goto loc_82FCEDB0;
	case 2:
		goto loc_82FCEDBC;
	case 3:
		goto loc_82FCEDB0;
	case 4:
		goto loc_82FCEDBC;
	case 5:
		goto loc_82FCEDB0;
	default:
		__builtin_unreachable();
	}
	// lwz r23,-4688(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4688);
	// lwz r23,-4688(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4688);
	// lwz r23,-4676(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4676);
	// lwz r23,-4688(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4688);
	// lwz r23,-4676(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4676);
	// lwz r23,-4688(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4688);
loc_82FCEDB0:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// b 0x82fcedc0
	goto loc_82FCEDC0;
loc_82FCEDBC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FCEDC0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r7,16728
	ctx.r6.s64 = ctx.r7.s64 + 16728;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_82FCEDEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lbz r8,13(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 13);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,28(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r4,r8,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r8.s64;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEE64"))) PPC_WEAK_FUNC(sub_82FCEE64);
PPC_FUNC_IMPL(__imp__sub_82FCEE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCEE68"))) PPC_WEAK_FUNC(sub_82FCEE68);
PPC_FUNC_IMPL(__imp__sub_82FCEE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82FCEE7C:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82fcee7c
	if (!ctx.cr0.eq) goto loc_82FCEE7C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEE94"))) PPC_WEAK_FUNC(sub_82FCEE94);
PPC_FUNC_IMPL(__imp__sub_82FCEE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCEE98"))) PPC_WEAK_FUNC(sub_82FCEE98);
PPC_FUNC_IMPL(__imp__sub_82FCEE98) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// twllei r9,0
	// divwu r10,r8,r9
	ctx.r10.u32 = ctx.r8.u32 / ctx.r9.u32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fceec0
	if (ctx.cr6.lt) goto loc_82FCEEC0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82FCEEC0:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fceee4
	if (!ctx.cr6.lt) goto loc_82FCEEE4;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
loc_82FCEEE4:
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEEEC"))) PPC_WEAK_FUNC(sub_82FCEEEC);
PPC_FUNC_IMPL(__imp__sub_82FCEEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCEEF0"))) PPC_WEAK_FUNC(sub_82FCEEF0);
PPC_FUNC_IMPL(__imp__sub_82FCEEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEEFC"))) PPC_WEAK_FUNC(sub_82FCEEFC);
PPC_FUNC_IMPL(__imp__sub_82FCEEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCEF00"))) PPC_WEAK_FUNC(sub_82FCEF00);
PPC_FUNC_IMPL(__imp__sub_82FCEF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEF14"))) PPC_WEAK_FUNC(sub_82FCEF14);
PPC_FUNC_IMPL(__imp__sub_82FCEF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCEF18"))) PPC_WEAK_FUNC(sub_82FCEF18);
PPC_FUNC_IMPL(__imp__sub_82FCEF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEF3C"))) PPC_WEAK_FUNC(sub_82FCEF3C);
PPC_FUNC_IMPL(__imp__sub_82FCEF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCEF40"))) PPC_WEAK_FUNC(sub_82FCEF40);
PPC_FUNC_IMPL(__imp__sub_82FCEF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEF74"))) PPC_WEAK_FUNC(sub_82FCEF74);
PPC_FUNC_IMPL(__imp__sub_82FCEF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCEF78"))) PPC_WEAK_FUNC(sub_82FCEF78);
PPC_FUNC_IMPL(__imp__sub_82FCEF78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lbz r8,13(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 13);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,28(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r4,r8,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r8.s64;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCEFE4"))) PPC_WEAK_FUNC(sub_82FCEFE4);
PPC_FUNC_IMPL(__imp__sub_82FCEFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCEFE8"))) PPC_WEAK_FUNC(sub_82FCEFE8);
PPC_FUNC_IMPL(__imp__sub_82FCEFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f0,-18004(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
loc_82FCF004:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82fcf004
	if (!ctx.cr0.eq) goto loc_82FCF004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF038"))) PPC_WEAK_FUNC(sub_82FCF038);
PPC_FUNC_IMPL(__imp__sub_82FCF038) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// twllei r9,0
	// divwu r10,r8,r9
	ctx.r10.u32 = ctx.r8.u32 / ctx.r9.u32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fcf060
	if (ctx.cr6.lt) goto loc_82FCF060;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82FCF060:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fcf084
	if (!ctx.cr6.lt) goto loc_82FCF084;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
loc_82FCF084:
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF08C"))) PPC_WEAK_FUNC(sub_82FCF08C);
PPC_FUNC_IMPL(__imp__sub_82FCF08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF090"))) PPC_WEAK_FUNC(sub_82FCF090);
PPC_FUNC_IMPL(__imp__sub_82FCF090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-18004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF0BC"))) PPC_WEAK_FUNC(sub_82FCF0BC);
PPC_FUNC_IMPL(__imp__sub_82FCF0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF0C0"))) PPC_WEAK_FUNC(sub_82FCF0C0);
PPC_FUNC_IMPL(__imp__sub_82FCF0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-18004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF10C"))) PPC_WEAK_FUNC(sub_82FCF10C);
PPC_FUNC_IMPL(__imp__sub_82FCF10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF110"))) PPC_WEAK_FUNC(sub_82FCF110);
PPC_FUNC_IMPL(__imp__sub_82FCF110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-18004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lhz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF19C"))) PPC_WEAK_FUNC(sub_82FCF19C);
PPC_FUNC_IMPL(__imp__sub_82FCF19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF1A0"))) PPC_WEAK_FUNC(sub_82FCF1A0);
PPC_FUNC_IMPL(__imp__sub_82FCF1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-18004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lhz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lhz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lhz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,0(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF26C"))) PPC_WEAK_FUNC(sub_82FCF26C);
PPC_FUNC_IMPL(__imp__sub_82FCF26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF270"))) PPC_WEAK_FUNC(sub_82FCF270);
PPC_FUNC_IMPL(__imp__sub_82FCF270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lbz r8,13(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 13);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,20(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r4,24(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r3,28(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF2D8"))) PPC_WEAK_FUNC(sub_82FCF2D8);
PPC_FUNC_IMPL(__imp__sub_82FCF2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f13,-17360(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-17348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
loc_82FCF2F8:
	// lbzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82fcf2f8
	if (ctx.cr6.lt) goto loc_82FCF2F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF32C"))) PPC_WEAK_FUNC(sub_82FCF32C);
PPC_FUNC_IMPL(__imp__sub_82FCF32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF330"))) PPC_WEAK_FUNC(sub_82FCF330);
PPC_FUNC_IMPL(__imp__sub_82FCF330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,13(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r10,0
	// divwu r10,r9,r10
	ctx.r10.u32 = ctx.r9.u32 / ctx.r10.u32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fcf354
	if (ctx.cr6.lt) goto loc_82FCF354;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82FCF354:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fcf378
	if (!ctx.cr6.lt) goto loc_82FCF378;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
loc_82FCF378:
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF380"))) PPC_WEAK_FUNC(sub_82FCF380);
PPC_FUNC_IMPL(__imp__sub_82FCF380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-17348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-17360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF3B4"))) PPC_WEAK_FUNC(sub_82FCF3B4);
PPC_FUNC_IMPL(__imp__sub_82FCF3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF3B8"))) PPC_WEAK_FUNC(sub_82FCF3B8);
PPC_FUNC_IMPL(__imp__sub_82FCF3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-17348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-17360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF40C"))) PPC_WEAK_FUNC(sub_82FCF40C);
PPC_FUNC_IMPL(__imp__sub_82FCF40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF410"))) PPC_WEAK_FUNC(sub_82FCF410);
PPC_FUNC_IMPL(__imp__sub_82FCF410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-17348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-17360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF4A4"))) PPC_WEAK_FUNC(sub_82FCF4A4);
PPC_FUNC_IMPL(__imp__sub_82FCF4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF4A8"))) PPC_WEAK_FUNC(sub_82FCF4A8);
PPC_FUNC_IMPL(__imp__sub_82FCF4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r8,5(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-17348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-17360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lbz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f5,16(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f1
	ctx.f12.f64 = double(ctx.f1.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF57C"))) PPC_WEAK_FUNC(sub_82FCF57C);
PPC_FUNC_IMPL(__imp__sub_82FCF57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF580"))) PPC_WEAK_FUNC(sub_82FCF580);
PPC_FUNC_IMPL(__imp__sub_82FCF580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lbz r8,13(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 13);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,28(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r4,r8,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r8.s64;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF5EC"))) PPC_WEAK_FUNC(sub_82FCF5EC);
PPC_FUNC_IMPL(__imp__sub_82FCF5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF5F0"))) PPC_WEAK_FUNC(sub_82FCF5F0);
PPC_FUNC_IMPL(__imp__sub_82FCF5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f0,-18004(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
loc_82FCF60C:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82fcf60c
	if (!ctx.cr0.eq) goto loc_82FCF60C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF648"))) PPC_WEAK_FUNC(sub_82FCF648);
PPC_FUNC_IMPL(__imp__sub_82FCF648) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// twllei r9,0
	// divwu r10,r8,r9
	ctx.r10.u32 = ctx.r8.u32 / ctx.r9.u32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fcf670
	if (ctx.cr6.lt) goto loc_82FCF670;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82FCF670:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fcf694
	if (!ctx.cr6.lt) goto loc_82FCF694;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
loc_82FCF694:
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF69C"))) PPC_WEAK_FUNC(sub_82FCF69C);
PPC_FUNC_IMPL(__imp__sub_82FCF69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF6A0"))) PPC_WEAK_FUNC(sub_82FCF6A0);
PPC_FUNC_IMPL(__imp__sub_82FCF6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r11,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF6D4"))) PPC_WEAK_FUNC(sub_82FCF6D4);
PPC_FUNC_IMPL(__imp__sub_82FCF6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF6D8"))) PPC_WEAK_FUNC(sub_82FCF6D8);
PPC_FUNC_IMPL(__imp__sub_82FCF6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r11,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r5,r6,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// rlwimi r5,r6,8,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF734"))) PPC_WEAK_FUNC(sub_82FCF734);
PPC_FUNC_IMPL(__imp__sub_82FCF734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF738"))) PPC_WEAK_FUNC(sub_82FCF738);
PPC_FUNC_IMPL(__imp__sub_82FCF738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r11,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lhz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// rlwinm r5,r6,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// rlwimi r5,r6,8,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r4,r5,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// rlwimi r4,r5,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF7E4"))) PPC_WEAK_FUNC(sub_82FCF7E4);
PPC_FUNC_IMPL(__imp__sub_82FCF7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF7E8"))) PPC_WEAK_FUNC(sub_82FCF7E8);
PPC_FUNC_IMPL(__imp__sub_82FCF7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r11,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lhz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// rlwinm r5,r6,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// rlwimi r5,r6,8,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lhz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lhz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// rlwinm r11,r5,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// rlwimi r11,r5,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lhz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lhz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r11,r4,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// rlwimi r11,r4,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,0(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCF8E4"))) PPC_WEAK_FUNC(sub_82FCF8E4);
PPC_FUNC_IMPL(__imp__sub_82FCF8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCF8E8"))) PPC_WEAK_FUNC(sub_82FCF8E8);
PPC_FUNC_IMPL(__imp__sub_82FCF8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCF8F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// dcbt r0,r3
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r8,17632
	ctx.r4.s64 = ctx.r8.s64 + 17632;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lfd f0,17648(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17648);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmul f9,f11,f0
	ctx.f9.f64 = ctx.f11.f64 * ctx.f0.f64;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// addi r7,r9,17616
	ctx.r7.s64 = ctx.r9.s64 + 17616;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// li r10,4
	ctx.r10.s64 = 4;
	// fmul f8,f10,f0
	ctx.f8.f64 = ctx.f10.f64 * ctx.f0.f64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lvx128 v8,r0,r4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,104
	ctx.r30.s64 = ctx.r1.s64 + 104;
	// vspltw128 v11,v62,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lvx128 v12,r0,r7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// vspltisw128 v61,1
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x1)));
	// li r4,0
	ctx.r4.s64 = 0;
	// vor128 v62,v63,v63
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// fctidz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f13,17708(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 17708);
	ctx.f13.f64 = double(temp.f32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// fctidz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// lvlx128 v60,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// vspltw128 v0,v60,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// lvlx128 v59,r10,r30
	temp.u32 = ctx.r10.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r30,16
	ctx.r30.s64 = 16;
	// vspltw128 v9,v59,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vadduwm v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vsldoi128 v58,v63,v0,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// vadduwm v7,v0,v13
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vsldoi128 v57,v58,v13,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// vadduwm v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// fdivs f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx128 v56,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v10,v56,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0xFF));
	// vsldoi128 v13,v57,v7,4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v7.u8), 12));
	// vmaddfp v12,v10,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v11,v10,v8,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v11.f32)));
	// fmuls f2,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vadduwm v8,v0,v0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// lvlx128 v55,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v55,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xFF));
	// vadduwm v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// li r7,2
	ctx.r7.s64 = 2;
	// vadduwm v13,v13,v9
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vadduwm v0,v10,v9
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
loc_82FCFA14:
	// li r10,8
	ctx.r10.s64 = 8;
loc_82FCFA18:
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvlx128 v54,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v63,v63,v54,2
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v54.u8), 14));
	// vsldoi128 v62,v62,v53,2
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v53.u8), 14));
	// bne 0x82fcfa18
	if (!ctx.cr0.eq) goto loc_82FCFA18;
	// vupkhsb128 v52,v63,v96
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v63.s16), _mm_load_si128((__m128i*)ctx.v63.s16))));
	// vsrw128 v51,v13,v61
	ctx.v51.u32[0] = ctx.v13.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v51.u32[1] = ctx.v13.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v51.u32[2] = ctx.v13.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v51.u32[3] = ctx.v13.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vupklsb128 v50,v63,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v63.s16)));
	// vsrw128 v49,v0,v61
	ctx.v49.u32[0] = ctx.v0.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v49.u32[1] = ctx.v0.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v49.u32[2] = ctx.v0.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v49.u32[3] = ctx.v0.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vupkhsb128 v48,v62,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v62.s16), _mm_load_si128((__m128i*)ctx.v62.s16))));
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// vupklsb128 v47,v62,v96
	_mm_store_si128((__m128i*)ctx.v47.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v62.s16)));
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// vcsxwfp128 v46,v52,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// vcsxwfp128 v45,v50,15
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcuxwfp128 v44,v51,31
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vcsxwfp128 v43,v48,15
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcuxwfp128 v42,v49,31
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// xor r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// vcsxwfp128 v41,v47,15
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// rlwinm r4,r9,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// vmulfp128 v10,v46,v11
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v9,v45,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v7,v44,v11
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v6,v43,v46
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v46.f32)));
	// vmulfp128 v5,v42,v12
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v4,v41,v45
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v45.f32)));
	// vmaddfp v3,v6,v7,v10
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v2,v4,v5,v9
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v3,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r5,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82fcfac0
	if (ctx.cr6.eq) goto loc_82FCFAC0;
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r3
loc_82FCFAC0:
	// vadduwm v0,v0,v8
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// addic. r6,r6,-8
	ctx.xer.ca = ctx.r6.u32 > 7;
	ctx.r6.s64 = ctx.r6.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// vadduwm v13,v13,v8
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// vaddfp128 v12,v12,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v60.f32)));
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// vaddfp128 v11,v11,v60
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v60.f32)));
	// bgt 0x82fcfa14
	if (ctx.cr0.gt) goto loc_82FCFA14;
	// lbz r10,13(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r9,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r9.s64;
	// twllei r8,0
	// divwu r9,r7,r8
	ctx.r9.u32 = ctx.r7.u32 / ctx.r8.u32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fcfb08
	if (ctx.cr6.lt) goto loc_82FCFB08;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82FCFB08:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fcfb28
	if (!ctx.cr6.lt) goto loc_82FCFB28;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82FCFB28:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bl 0x82ff1e30
	ctx.lr = 0x82FCFB34;
	sub_82FF1E30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,17600(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17600);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCFB50"))) PPC_WEAK_FUNC(sub_82FCFB50);
PPC_FUNC_IMPL(__imp__sub_82FCFB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FCFB58;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// dcbt r0,r3
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r9,17680
	ctx.r7.s64 = ctx.r9.s64 + 17680;
	// stfs f13,36(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// addi r4,r8,17664
	ctx.r4.s64 = ctx.r8.s64 + 17664;
	// lfs f10,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfd f0,17648(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17648);
	// li r8,4
	ctx.r8.s64 = 4;
	// fmul f9,f11,f0
	ctx.f9.f64 = ctx.f11.f64 * ctx.f0.f64;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lvx128 v12,r0,r7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v8,r0,r4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmul f8,f10,f0
	ctx.f8.f64 = ctx.f10.f64 * ctx.f0.f64;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// vspltisw128 v59,1
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_set1_epi32(int(0x1)));
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// vspltw128 v11,v62,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vor128 v61,v63,v63
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// li r29,0
	ctx.r29.s64 = 0;
	// vor128 v62,v63,v63
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// fctidz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f13,17708(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 17708);
	ctx.f13.f64 = double(temp.f32);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// li r31,2
	ctx.r31.s64 = 2;
	// lvlx128 v60,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fctidz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r26,1024
	ctx.r26.s64 = 1024;
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r27,1040
	ctx.r27.s64 = 1040;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// vspltw128 v0,v60,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// lvlx128 v58,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vspltw128 v9,v58,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// vadduwm v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vsldoi128 v57,v63,v0,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// vadduwm v7,v0,v13
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vsldoi128 v56,v57,v13,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// vadduwm v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// fdivs f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx128 v55,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v10,v55,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xFF));
	// vsldoi128 v13,v56,v7,4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v7.u8), 12));
	// vmaddfp v12,v10,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v11,v10,v8,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v11.f32)));
	// fmuls f2,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vadduwm v7,v0,v0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// lvlx128 v54,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v54,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vadduwm v8,v13,v9
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// li r4,6
	ctx.r4.s64 = 6;
	// vadduwm v13,v13,v0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// li r28,16
	ctx.r28.s64 = 16;
	// vadduwm v10,v13,v9
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
loc_82FCFC90:
	// li r9,8
	ctx.r9.s64 = 8;
loc_82FCFC94:
	// rldicl r11,r10,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvlx128 v53,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v63,v63,v53,2
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v53.u8), 14));
	// lvlx128 v51,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v62,v62,v52,2
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v52.u8), 14));
	// lvlx128 v50,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v61,v61,v51,2
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 14));
	// vsldoi128 v60,v60,v50,2
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v50.u8), 14));
	// bne 0x82fcfc94
	if (!ctx.cr0.eq) goto loc_82FCFC94;
	// vsrw128 v49,v10,v59
	ctx.v49.u32[0] = ctx.v10.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v49.u32[1] = ctx.v10.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v49.u32[2] = ctx.v10.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v49.u32[3] = ctx.v10.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vupkhsb128 v48,v63,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v63.s16), _mm_load_si128((__m128i*)ctx.v63.s16))));
	// vsrw128 v47,v8,v59
	ctx.v47.u32[0] = ctx.v8.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v47.u32[1] = ctx.v8.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v47.u32[2] = ctx.v8.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v47.u32[3] = ctx.v8.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vupklsb128 v46,v63,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v63.s16)));
	// vupkhsb128 v45,v62,v96
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v62.s16), _mm_load_si128((__m128i*)ctx.v62.s16))));
	// rldicl r11,r10,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// vupklsb128 v44,v62,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v62.s16)));
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// vupkhsb128 v43,v61,v96
	_mm_store_si128((__m128i*)ctx.v43.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// vcsxwfp128 v42,v48,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v41,v61,v96
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v61.s16)));
	// vcsxwfp128 v40,v46,15
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v39,v60,v96
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// vcuxwfp128 v38,v49,31
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vupklsb128 v37,v60,v96
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v60.s16)));
	// vcuxwfp128 v36,v47,31
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v35,v45,15
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vcsxwfp128 v34,v44,15
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v33,v43,15
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v43.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vcsxwfp128 v32,v41,15
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v57,v39,15
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v39.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// xor r9,r29,r3
	ctx.r9.u64 = ctx.r29.u64 ^ ctx.r3.u64;
	// vcsxwfp128 v56,v37,15
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// rlwinm r11,r9,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// vmulfp128 v9,v42,v11
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v11.f32)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vmulfp128 v6,v40,v12
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v38,v12
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v36,v11
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v5,v35,v42
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v42.f32)));
	// vsubfp128 v4,v34,v40
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v40.f32)));
	// vmulfp128 v3,v33,v11
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v2,v32,v12
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v1,v57,v33
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v33.f32)));
	// vsubfp128 v31,v56,v32
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v32.f32)));
	// vmaddfp v30,v5,v13,v9
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v29,v4,v0,v6
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v28,v1,v13,v3
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v27,v31,v0,v2
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v30,r5,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v29,r5,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v28,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v27,r5,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82fcfd8c
	if (ctx.cr6.eq) goto loc_82FCFD8C;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
loc_82FCFD8C:
	// vadduwm v10,v10,v7
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// addic. r6,r6,-8
	ctx.xer.ca = ctx.r6.u32 > 7;
	ctx.r6.s64 = ctx.r6.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// vadduwm v8,v8,v7
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// vaddfp128 v12,v12,v58
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v58.f32)));
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// vaddfp128 v11,v11,v58
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v58.f32)));
	// bgt 0x82fcfc90
	if (ctx.cr0.gt) goto loc_82FCFC90;
	// lbz r11,13(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r7,r9,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r9.s64;
	// twllei r8,0
	// divwu r9,r7,r8
	ctx.r9.u32 = ctx.r7.u32 / ctx.r8.u32;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fcfdd4
	if (ctx.cr6.lt) goto loc_82FCFDD4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82FCFDD4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fcfdf4
	if (!ctx.cr6.lt) goto loc_82FCFDF4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82FCFDF4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// bl 0x82ff1e30
	ctx.lr = 0x82FCFE00;
	sub_82FF1E30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,17600(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17600);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,48(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCFE1C"))) PPC_WEAK_FUNC(sub_82FCFE1C);
PPC_FUNC_IMPL(__imp__sub_82FCFE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCFE20"))) PPC_WEAK_FUNC(sub_82FCFE20);
PPC_FUNC_IMPL(__imp__sub_82FCFE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82FCFE28;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lfs f0,36(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// dcbt r0,r3
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,40(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,44(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// extsw r8,r6
	ctx.r8.s64 = ctx.r6.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f10,48(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stfs f13,36(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 36, temp.u32);
	// lfd f0,17648(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17648);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmul f9,f11,f0
	ctx.f9.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// fmul f8,f10,f0
	ctx.f8.f64 = ctx.f10.f64 * ctx.f0.f64;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// addi r8,r11,17712
	ctx.r8.s64 = ctx.r11.s64 + 17712;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// vspltisw128 v55,1
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_set1_epi32(int(0x1)));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f13,17708(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 17708);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r10,17696
	ctx.r11.s64 = ctx.r10.s64 + 17696;
	// vor128 v57,v63,v63
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// lvx128 v9,r0,r8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// vor128 v59,v63,v63
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// li r25,0
	ctx.r25.s64 = 0;
	// vor128 v61,v63,v63
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// addi r8,r5,2064
	ctx.r8.s64 = ctx.r5.s64 + 2064;
	// fctidz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// ld r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fctidz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// stfd f6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f6.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lvlx128 v62,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lvlx128 v54,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// vspltw128 v0,v62,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// lvlx128 v58,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v11,v58,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// fdivs f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx128 v52,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduwm v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vsldoi128 v60,v63,v0,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// vor128 v56,v63,v63
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vspltw128 v12,v54,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vor128 v58,v63,v63
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v62,v63,v63
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// li r4,8
	ctx.r4.s64 = 8;
	// vadduwm v10,v0,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// li r27,6
	ctx.r27.s64 = 6;
	// vsldoi128 v53,v60,v13,4
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// vadduwm v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vor128 v60,v63,v63
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// li r29,12
	ctx.r29.s64 = 12;
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx128 v51,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v13,v53,v10,4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v10.u8), 12));
	// vadduwm v7,v0,v0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// li r28,14
	ctx.r28.s64 = 14;
	// vadduwm v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vadduwm v8,v13,v11
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vspltw128 v13,v52,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
	// vadduwm v10,v10,v11
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// lvx128 v11,r0,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v9,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v11,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v54,v51,0
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0xFF));
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,10
	ctx.r31.s64 = 10;
	// li r18,1008
	ctx.r18.s64 = 1008;
	// li r19,1024
	ctx.r19.s64 = 1024;
	// li r20,-16
	ctx.r20.s64 = -16;
	// li r21,-1040
	ctx.r21.s64 = -1040;
	// li r22,-1024
	ctx.r22.s64 = -1024;
	// li r23,-2048
	ctx.r23.s64 = -2048;
loc_82FCFF90:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82FCFF94:
	// rldicl r11,r10,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvlx128 v50,r11,r27
	temp.u32 = ctx.r11.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v49,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v63,v63,v50,2
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v50.u8), 14));
	// lvlx128 v48,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v62,v62,v49,2
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v49.u8), 14));
	// lvlx128 v47,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v61,v61,v48,2
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v48.u8), 14));
	// lvlx128 v46,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v60,v60,v47,2
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v47.u8), 14));
	// lvlx128 v45,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v59,v59,v46,2
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v46.u8), 14));
	// lvlx128 v44,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v58,v58,v45,2
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v45.u8), 14));
	// lvlx128 v43,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v57,v57,v44,2
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v44.u8), 14));
	// vsldoi128 v56,v56,v43,2
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v43.u8), 14));
	// bne 0x82fcff94
	if (!ctx.cr0.eq) goto loc_82FCFF94;
	// vsrw128 v42,v10,v55
	ctx.v42.u32[0] = ctx.v10.u32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v42.u32[1] = ctx.v10.u32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v42.u32[2] = ctx.v10.u32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v42.u32[3] = ctx.v10.u32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vupkhsb128 v38,v62,v96
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v62.s16), _mm_load_si128((__m128i*)ctx.v62.s16))));
	// vsrw128 v40,v8,v55
	ctx.v40.u32[0] = ctx.v8.u32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v40.u32[1] = ctx.v8.u32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v40.u32[2] = ctx.v8.u32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v40.u32[3] = ctx.v8.u32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vupkhsb128 v36,v61,v96
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// vupkhsb128 v41,v63,v96
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v63.s16), _mm_load_si128((__m128i*)ctx.v63.s16))));
	// rldicl r11,r10,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// vupklsb128 v39,v63,v96
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v63.s16)));
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// vupklsb128 v37,v62,v96
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v62.s16)));
	// vcuxwfp128 v53,v42,31
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vupklsb128 v34,v61,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v61.s16)));
	// vcsxwfp128 v45,v36,15
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v32,v60,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// vcuxwfp128 v51,v40,31
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vupklsb128 v52,v60,v96
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v60.s16)));
	// vcsxwfp128 v49,v38,15
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v50,v59,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v59.s16), _mm_load_si128((__m128i*)ctx.v59.s16))));
	// vcsxwfp128 v35,v41,15
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v48,v59,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v59.s16)));
	// vcsxwfp128 v33,v39,15
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v39.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v46,v58,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// vcsxwfp128 v47,v37,15
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v44,v58,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v58.s16)));
	// vcsxwfp128 v43,v34,15
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v42,v57,v96
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v41,v32,15
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v40,v56,v96
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vcsxwfp128 v39,v52,15
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v38,v57,v96
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v57.s16)));
	// vcsxwfp128 v37,v50,15
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v36,v56,v96
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v56.s16)));
	// vcsxwfp128 v34,v48,15
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v32,v46,15
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vcsxwfp128 v52,v44,15
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v50,v42,15
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vcsxwfp128 v48,v38,15
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v46,v40,15
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// xor r9,r25,r3
	ctx.r9.u64 = ctx.r25.u64 ^ ctx.r3.u64;
	// vcsxwfp128 v44,v36,15
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vmulfp128 v12,v51,v13
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v13.f32)));
	// rlwinm r11,r9,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// vmulfp128 v11,v53,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v9,v35,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v13.f32)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vsubfp128 v6,v49,v35
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v35.f32)));
	// vmulfp128 v5,v33,v0
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v4,v47,v33
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v33.f32)));
	// vmulfp128 v3,v45,v13
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v2,v41,v45
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v45.f32)));
	// vmulfp128 v1,v43,v0
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v31,v39,v43
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v43.f32)));
	// vmulfp128 v30,v37,v13
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v29,v32,v37
	_mm_store_ps(ctx.v29.f32, _mm_sub_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v37.f32)));
	// vmulfp128 v28,v34,v0
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v27,v52,v34
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v34.f32)));
	// vmulfp128 v26,v50,v13
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v25,v46,v50
	_mm_store_ps(ctx.v25.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v50.f32)));
	// vmulfp128 v24,v48,v0
	_mm_store_ps(ctx.v24.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v23,v44,v48
	_mm_store_ps(ctx.v23.f32, _mm_sub_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v48.f32)));
	// vmaddfp v22,v6,v12,v9
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v21,v4,v11,v5
	_mm_store_ps(ctx.v21.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v20,v2,v12,v3
	_mm_store_ps(ctx.v20.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v19,v31,v11,v1
	_mm_store_ps(ctx.v19.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v18,v29,v12,v30
	_mm_store_ps(ctx.v18.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v17,v27,v11,v28
	_mm_store_ps(ctx.v17.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v16,v25,v12,v26
	_mm_store_ps(ctx.v16.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v26.f32)));
	// vmaddfp v15,v23,v11,v24
	_mm_store_ps(ctx.v15.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v24.f32)));
	// stvx128 v22,r8,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v21,r8,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v20,r8,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v18,r8,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v17,r8,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v16,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v15,r8,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82fd012c
	if (ctx.cr6.eq) goto loc_82FD012C;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
loc_82FD012C:
	// vadduwm v10,v10,v7
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// addic. r6,r6,-8
	ctx.xer.ca = ctx.r6.u32 > 7;
	ctx.r6.s64 = ctx.r6.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// vadduwm v8,v8,v7
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// vaddfp128 v0,v0,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v54.f32)));
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// vaddfp128 v13,v13,v54
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v54.f32)));
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// bgt 0x82fcff90
	if (ctx.cr0.gt) goto loc_82FCFF90;
	// lbz r11,13(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 13);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// subf r7,r9,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r9.s64;
	// twllei r8,0
	// divwu r9,r7,r8
	ctx.r9.u32 = ctx.r7.u32 / ctx.r8.u32;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fd0178
	if (ctx.cr6.lt) goto loc_82FD0178;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82FD0178:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fd0198
	if (!ctx.cr6.lt) goto loc_82FD0198;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82FD0198:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r11.u32);
	// bl 0x82ff1e30
	ctx.lr = 0x82FD01A4;
	sub_82FF1E30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,17600(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17600);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,48(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 48, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FD01C0"))) PPC_WEAK_FUNC(sub_82FD01C0);
PPC_FUNC_IMPL(__imp__sub_82FD01C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82FD01C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,36(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r7,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// dcbt r0,r3
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,40(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r22,4
	ctx.r22.s64 = 4;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,44(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lfs f10,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lfd f0,17648(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17648);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmul f9,f11,f0
	ctx.f9.f64 = ctx.f11.f64 * ctx.f0.f64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// fmul f8,f10,f0
	ctx.f8.f64 = ctx.f10.f64 * ctx.f0.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stfs f13,36(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 36, temp.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r31,r9,17744
	ctx.r31.s64 = ctx.r9.s64 + 17744;
	// vor128 v53,v63,v63
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// lvlx128 v62,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltw128 v12,v62,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// vor128 v55,v63,v63
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// vor128 v57,v63,v63
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// addi r7,r7,17728
	ctx.r7.s64 = ctx.r7.s64 + 17728;
	// vor128 v59,v63,v63
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v61,v63,v63
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// li r20,0
	ctx.r20.s64 = 0;
	// fctidz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// ld r21,88(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fctidz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// std r21,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r21.u64);
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lvlx128 v60,r22,r8
	temp.u32 = ctx.r22.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// vspltw128 v0,v60,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// lvlx128 v58,r22,r6
	temp.u32 = ctx.r22.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw128 v51,1
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_set1_epi32(int(0x1)));
	// vspltw128 v11,v58,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lfs f13,17708(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17708);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r5,4112
	ctx.r10.s64 = ctx.r5.s64 + 4112;
	// vor128 v52,v63,v63
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vadduwm v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vsldoi128 v50,v63,v0,4
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// vor128 v54,v63,v63
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v56,v63,v63
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v58,v63,v63
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vadduwm v10,v0,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vsldoi128 v49,v50,v13,4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// vadduwm v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// vor128 v60,v63,v63
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v62,v63,v63
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vsldoi128 v13,v49,v10,4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v10.u8), 12));
	// vadduwm v8,v0,v0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vadduwm v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// lvx128 v0,r0,r31
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduwm v9,v13,v11
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// fdivs f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx128 v48,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v48,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), 0xFF));
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx128 v47,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduwm v10,v10,v11
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// lvx128 v11,r0,r7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v50,v47,0
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0xFF));
	// vmaddfp v13,v13,v11,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// li r4,8
	ctx.r4.s64 = 8;
	// li r23,10
	ctx.r23.s64 = 10;
	// li r24,22
	ctx.r24.s64 = 22;
	// li r25,20
	ctx.r25.s64 = 20;
	// li r26,6
	ctx.r26.s64 = 6;
	// li r27,18
	ctx.r27.s64 = 18;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r30,14
	ctx.r30.s64 = 14;
	// li r31,12
	ctx.r31.s64 = 12;
	// li r14,-1040
	ctx.r14.s64 = -1040;
	// li r6,-1024
	ctx.r6.s64 = -1024;
	// li r15,-2064
	ctx.r15.s64 = -2064;
	// li r16,-2048
	ctx.r16.s64 = -2048;
	// li r17,-3088
	ctx.r17.s64 = -3088;
	// li r18,-3072
	ctx.r18.s64 = -3072;
	// li r19,-4096
	ctx.r19.s64 = -4096;
loc_82FD0358:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82FD035C:
	// rldicl r11,r9,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r21,r9
	ctx.r9.u64 = ctx.r21.u64 + ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvlx128 v46,r11,r23
	temp.u32 = ctx.r11.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v45,r11,r24
	temp.u32 = ctx.r11.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v63,v63,v46,2
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v46.u8), 14));
	// lvlx128 v44,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v62,v62,v45,2
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v45.u8), 14));
	// lvlx128 v43,r11,r25
	temp.u32 = ctx.r11.u32 + ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v61,v61,v44,2
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v44.u8), 14));
	// lvlx128 v42,r11,r26
	temp.u32 = ctx.r11.u32 + ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v60,v60,v43,2
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v43.u8), 14));
	// lvlx128 v41,r11,r27
	temp.u32 = ctx.r11.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v59,v59,v42,2
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v42.u8), 14));
	// lvlx128 v40,r11,r22
	temp.u32 = ctx.r11.u32 + ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v58,v58,v41,2
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v41.u8), 14));
	// lvlx128 v39,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v57,v57,v40,2
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v40.u8), 14));
	// lvlx128 v38,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v56,v56,v39,2
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v39.u8), 14));
	// lvlx128 v37,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v55,v55,v38,2
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v38.u8), 14));
	// lvlx128 v36,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v54,v54,v37,2
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v37.u8), 14));
	// lvlx128 v35,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v53,v53,v36,2
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v36.u8), 14));
	// vsldoi128 v52,v52,v35,2
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v35.u8), 14));
	// bne 0x82fd035c
	if (!ctx.cr0.eq) goto loc_82FD035C;
	// vsrw128 v34,v10,v51
	ctx.v34.u32[0] = ctx.v10.u32[0] >> (ctx.v51.u8[0] & 0x1F);
	ctx.v34.u32[1] = ctx.v10.u32[1] >> (ctx.v51.u8[4] & 0x1F);
	ctx.v34.u32[2] = ctx.v10.u32[2] >> (ctx.v51.u8[8] & 0x1F);
	ctx.v34.u32[3] = ctx.v10.u32[3] >> (ctx.v51.u8[12] & 0x1F);
	// vupkhsb128 v33,v63,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v63.s16), _mm_load_si128((__m128i*)ctx.v63.s16))));
	// vsrw128 v32,v9,v51
	ctx.v32.u32[0] = ctx.v9.u32[0] >> (ctx.v51.u8[0] & 0x1F);
	ctx.v32.u32[1] = ctx.v9.u32[1] >> (ctx.v51.u8[4] & 0x1F);
	ctx.v32.u32[2] = ctx.v9.u32[2] >> (ctx.v51.u8[8] & 0x1F);
	ctx.v32.u32[3] = ctx.v9.u32[3] >> (ctx.v51.u8[12] & 0x1F);
	// vupkhsb128 v48,v62,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v62.s16), _mm_load_si128((__m128i*)ctx.v62.s16))));
	// vupklsb128 v47,v62,v96
	_mm_store_si128((__m128i*)ctx.v47.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v62.s16)));
	// rldicl r11,r9,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// vupkhsb128 v46,v61,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// vupkhsb128 v42,v60,v96
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// vcuxwfp128 v41,v34,31
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vupkhsb128 v38,v59,v96
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v59.s16), _mm_load_si128((__m128i*)ctx.v59.s16))));
	// vcuxwfp128 v39,v32,31
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v32.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vupklsb128 v49,v63,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v63.s16)));
	// vcsxwfp128 v45,v33,15
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v36,v59,v96
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v59.s16)));
	// vcsxwfp128 v37,v48,15
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v44,v61,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v61.s16)));
	// vcsxwfp128 v35,v47,15
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v34,v58,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// vcsxwfp128 v33,v46,15
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v40,v60,v96
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v60.s16)));
	// vcsxwfp128 v47,v42,15
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v32,v58,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v58.s16)));
	// vcsxwfp128 v42,v38,15
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v48,v57,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v38,v36,15
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v46,v56,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vcsxwfp128 v43,v49,15
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v49,v44,15
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vcsxwfp128 v36,v34,15
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// li r7,1008
	ctx.r7.s64 = 1008;
	// vcsxwfp128 v44,v40,15
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v40,v57,v96
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v57.s16)));
	// vcsxwfp128 v34,v32,15
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// li r4,1024
	ctx.r4.s64 = 1024;
	// vcsxwfp128 v32,v48,15
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// vcsxwfp128 v48,v46,15
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// li r31,-16
	ctx.r31.s64 = -16;
	// vmulfp128 v12,v39,v13
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v13.f32)));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vmulfp128 v11,v41,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v0.f32)));
	// vupklsb128 v46,v56,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v56.s16)));
	// vsubfp128 v6,v37,v45
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v45.f32)));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vmulfp128 v7,v45,v13
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v13.f32)));
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// vmulfp128 v3,v33,v13
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v13.f32)));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vmulfp128 v5,v43,v0
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v0.f32)));
	// vupkhsb128 v45,v55,v96
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v55.s16), _mm_load_si128((__m128i*)ctx.v55.s16))));
	// vsubfp128 v4,v35,v43
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v43.f32)));
	// vupklsb128 v41,v55,v96
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v55.s16)));
	// vsubfp128 v2,v47,v33
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v33.f32)));
	// vupkhsb128 v39,v54,v96
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v54.s16), _mm_load_si128((__m128i*)ctx.v54.s16))));
	// vmulfp128 v1,v49,v0
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v31,v44,v49
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v49.f32)));
	// vmulfp128 v28,v38,v0
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v27,v34,v38
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v38.f32)));
	// vmulfp128 v30,v42,v13
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v29,v36,v42
	_mm_store_ps(ctx.v29.f32, _mm_sub_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v42.f32)));
	// vmulfp128 v26,v32,v13
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v25,v48,v32
	_mm_store_ps(ctx.v25.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v32.f32)));
	// vmaddfp v24,v6,v12,v7
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vcsxwfp128 v38,v40,15
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vmaddfp v23,v4,v11,v5
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v22,v2,v12,v3
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v3.f32)));
	// vcsxwfp128 v37,v46,15
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vmaddfp v21,v31,v11,v1
	_mm_store_ps(ctx.v21.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v19,v27,v11,v28
	_mm_store_ps(ctx.v19.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v20,v29,v12,v30
	_mm_store_ps(ctx.v20.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v18,v25,v12,v26
	_mm_store_ps(ctx.v18.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v26.f32)));
	// stvx128 v24,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v17,v38,v0
	_mm_store_ps(ctx.v17.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v23,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v22,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v19,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v20,r10,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v18,r10,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v36,v54,v96
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v54.s16)));
	// vcsxwfp128 v35,v45,15
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v34,v53,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v53.s16), _mm_load_si128((__m128i*)ctx.v53.s16))));
	// vcsxwfp128 v33,v41,15
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v32,v53,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v53.s16)));
	// vcsxwfp128 v49,v39,15
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v39.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v48,v52,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v52.s16), _mm_load_si128((__m128i*)ctx.v52.s16))));
	// vsubfp128 v16,v37,v38
	_mm_store_ps(ctx.v16.f32, _mm_sub_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v38.f32)));
	// vupklsb128 v47,v52,v96
	_mm_store_si128((__m128i*)ctx.v47.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v52.s16)));
	// vcsxwfp128 v46,v36,15
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v45,v34,15
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// xor r8,r20,r3
	ctx.r8.u64 = ctx.r20.u64 ^ ctx.r3.u64;
	// vcsxwfp128 v44,v32,15
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// vcsxwfp128 v43,v48,15
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// vcsxwfp128 v42,v47,15
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// ld r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// vmulfp128 v15,v35,v13
	_mm_store_ps(ctx.v15.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v14,v33,v0
	_mm_store_ps(ctx.v14.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v7,v49,v35
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v35.f32)));
	// vmaddfp v6,v16,v11,v17
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v17.f32)));
	// vsubfp128 v5,v46,v33
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v33.f32)));
	// vmulfp128 v4,v45,v13
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v3,v44,v0
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v2,v43,v45
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v45.f32)));
	// vsubfp128 v1,v42,v44
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v44.f32)));
	// vmaddfp v31,v7,v12,v15
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v15.f32)));
	// stvx128 v6,r10,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v30,v5,v11,v14
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v14.f32)));
	// vmaddfp v29,v2,v12,v4
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v28,v1,v11,v3
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v3.f32)));
	// stvx128 v31,r10,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v30,r10,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v28,r10,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82fd05c0
	if (ctx.cr6.eq) goto loc_82FD05C0;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
loc_82FD05C0:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// vadduwm v10,v10,v8
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vadduwm v9,v9,v8
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_add_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vaddfp128 v0,v0,v50
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v50.f32)));
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// vaddfp128 v13,v13,v50
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v50.f32)));
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bgt 0x82fd0358
	if (ctx.cr0.gt) goto loc_82FD0358;
	// lwz r31,324(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r10,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r10.s64;
	// twllei r8,0
	// divwu r10,r7,r8
	ctx.r10.u32 = ctx.r7.u32 / ctx.r8.u32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fd0618
	if (ctx.cr6.lt) goto loc_82FD0618;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82FD0618:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fd0638
	if (!ctx.cr6.lt) goto loc_82FD0638;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82FD0638:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82ff1e30
	ctx.lr = 0x82FD0644;
	sub_82FF1E30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,17600(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17600);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FD0660"))) PPC_WEAK_FUNC(sub_82FD0660);
PPC_FUNC_IMPL(__imp__sub_82FD0660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvlx128 v59,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vrlimi128 v60,v59,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 8));
	// vsldoi128 v57,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v56,v58,v57
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vsldoi128 v55,v56,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v54,v60,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD06A4"))) PPC_WEAK_FUNC(sub_82FD06A4);
PPC_FUNC_IMPL(__imp__sub_82FD06A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD06A8"))) PPC_WEAK_FUNC(sub_82FD06A8);
PPC_FUNC_IMPL(__imp__sub_82FD06A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r9,r6,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v59,v61,v60
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v58,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lvlx128 v56,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v55,v59,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vmsum3fp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0708"))) PPC_WEAK_FUNC(sub_82FD0708);
PPC_FUNC_IMPL(__imp__sub_82FD0708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvlx128 v59,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vrlimi128 v60,v59,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 8));
	// vsldoi128 v57,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v56,v58,v57
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vsldoi128 v55,v56,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v54,v60,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD074C"))) PPC_WEAK_FUNC(sub_82FD074C);
PPC_FUNC_IMPL(__imp__sub_82FD074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD0750"))) PPC_WEAK_FUNC(sub_82FD0750);
PPC_FUNC_IMPL(__imp__sub_82FD0750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r9,r6,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v59,v61,v60
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v58,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lvlx128 v56,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v55,v59,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vmsum3fp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD07B0"))) PPC_WEAK_FUNC(sub_82FD07B0);
PPC_FUNC_IMPL(__imp__sub_82FD07B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvlx128 v59,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vrlimi128 v60,v59,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 8));
	// vsldoi128 v57,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v56,v58,v57
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vsldoi128 v55,v56,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v54,v60,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD07F4"))) PPC_WEAK_FUNC(sub_82FD07F4);
PPC_FUNC_IMPL(__imp__sub_82FD07F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD07F8"))) PPC_WEAK_FUNC(sub_82FD07F8);
PPC_FUNC_IMPL(__imp__sub_82FD07F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r9,r6,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v59,v61,v60
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v58,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lvlx128 v56,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v55,v59,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vmsum3fp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0858"))) PPC_WEAK_FUNC(sub_82FD0858);
PPC_FUNC_IMPL(__imp__sub_82FD0858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvlx128 v59,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vrlimi128 v60,v59,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 8));
	// vsldoi128 v57,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v56,v58,v57
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vsldoi128 v55,v56,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v54,v60,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD089C"))) PPC_WEAK_FUNC(sub_82FD089C);
PPC_FUNC_IMPL(__imp__sub_82FD089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD08A0"))) PPC_WEAK_FUNC(sub_82FD08A0);
PPC_FUNC_IMPL(__imp__sub_82FD08A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r9,r6,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v59,v61,v60
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v58,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lvlx128 v56,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v55,v59,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vmsum3fp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0900"))) PPC_WEAK_FUNC(sub_82FD0900);
PPC_FUNC_IMPL(__imp__sub_82FD0900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvlx128 v59,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vrlimi128 v60,v59,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 8));
	// vsldoi128 v57,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v56,v58,v57
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vsldoi128 v55,v56,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v54,v60,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0944"))) PPC_WEAK_FUNC(sub_82FD0944);
PPC_FUNC_IMPL(__imp__sub_82FD0944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD0948"))) PPC_WEAK_FUNC(sub_82FD0948);
PPC_FUNC_IMPL(__imp__sub_82FD0948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r9,r6,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v59,v61,v60
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v58,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lvlx128 v56,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v55,v59,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vmsum3fp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD09A8"))) PPC_WEAK_FUNC(sub_82FD09A8);
PPC_FUNC_IMPL(__imp__sub_82FD09A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v60,v61,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// lvlx128 v59,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v59,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vcuxwfp128 v57,v13,31
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v56,v60,15
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsldoi128 v55,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v58,v56,8,0
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v58,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD09F8"))) PPC_WEAK_FUNC(sub_82FD09F8);
PPC_FUNC_IMPL(__imp__sub_82FD09F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v55,v61,v60
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r6,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v58,v59,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v59.s16), _mm_load_si128((__m128i*)ctx.v59.s16))));
	// lvlx128 v57,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v56,v57,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v54,v58,15
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsldoi128 v52,v55,v2,8
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vcsxwfp128 v53,v56,15
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v52
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// stvewx128 v50,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0A68"))) PPC_WEAK_FUNC(sub_82FD0A68);
PPC_FUNC_IMPL(__imp__sub_82FD0A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v60,v61,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// lvlx128 v59,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v59,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vcuxwfp128 v57,v13,31
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v56,v60,15
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsldoi128 v55,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v58,v56,8,0
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v58,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0AB8"))) PPC_WEAK_FUNC(sub_82FD0AB8);
PPC_FUNC_IMPL(__imp__sub_82FD0AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v55,v61,v60
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r6,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v58,v59,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v59.s16), _mm_load_si128((__m128i*)ctx.v59.s16))));
	// lvlx128 v57,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v56,v57,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v54,v58,15
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsldoi128 v52,v55,v2,8
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vcsxwfp128 v53,v56,15
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v52
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// stvewx128 v50,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0B28"))) PPC_WEAK_FUNC(sub_82FD0B28);
PPC_FUNC_IMPL(__imp__sub_82FD0B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v60,v61,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// lvlx128 v59,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v59,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vcuxwfp128 v57,v13,31
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v56,v60,15
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsldoi128 v55,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v58,v56,8,0
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v58,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0B78"))) PPC_WEAK_FUNC(sub_82FD0B78);
PPC_FUNC_IMPL(__imp__sub_82FD0B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v55,v61,v60
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r6,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v58,v59,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v59.s16), _mm_load_si128((__m128i*)ctx.v59.s16))));
	// lvlx128 v57,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v56,v57,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v54,v58,15
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsldoi128 v52,v55,v2,8
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vcsxwfp128 v53,v56,15
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v52
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// stvewx128 v50,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0BE8"))) PPC_WEAK_FUNC(sub_82FD0BE8);
PPC_FUNC_IMPL(__imp__sub_82FD0BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v60,v61,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// lvlx128 v59,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v59,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vcuxwfp128 v57,v13,31
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v56,v60,15
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsldoi128 v55,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v58,v56,8,0
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v58,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0C38"))) PPC_WEAK_FUNC(sub_82FD0C38);
PPC_FUNC_IMPL(__imp__sub_82FD0C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v55,v61,v60
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r6,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v58,v59,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v59.s16), _mm_load_si128((__m128i*)ctx.v59.s16))));
	// lvlx128 v57,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v56,v57,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v54,v58,15
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsldoi128 v52,v55,v2,8
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vcsxwfp128 v53,v56,15
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v52
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// stvewx128 v50,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0CA8"))) PPC_WEAK_FUNC(sub_82FD0CA8);
PPC_FUNC_IMPL(__imp__sub_82FD0CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v60,v61,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// lvlx128 v59,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v59,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vcuxwfp128 v57,v13,31
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v56,v60,15
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsldoi128 v55,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v58,v56,8,0
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v58,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0CF8"))) PPC_WEAK_FUNC(sub_82FD0CF8);
PPC_FUNC_IMPL(__imp__sub_82FD0CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v55,v61,v60
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r6,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v58,v59,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v59.s16), _mm_load_si128((__m128i*)ctx.v59.s16))));
	// lvlx128 v57,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v56,v57,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v54,v58,15
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsldoi128 v52,v55,v2,8
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vcsxwfp128 v53,v56,15
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v52
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// stvewx128 v50,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0D68"))) PPC_WEAK_FUNC(sub_82FD0D68);
PPC_FUNC_IMPL(__imp__sub_82FD0D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisb v0,7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x7)));
	// lvlx v13,r4,r6
	temp.u32 = ctx.r4.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vslb v11,v0,v0
	ctx.v11.u8[0] = ctx.v0.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v11.u8[1] = ctx.v0.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v11.u8[2] = ctx.v0.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v11.u8[3] = ctx.v0.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v11.u8[4] = ctx.v0.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v11.u8[5] = ctx.v0.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v11.u8[6] = ctx.v0.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v11.u8[7] = ctx.v0.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v11.u8[8] = ctx.v0.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v11.u8[9] = ctx.v0.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v11.u8[10] = ctx.v0.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v11.u8[11] = ctx.v0.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v11.u8[12] = ctx.v0.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v11.u8[13] = ctx.v0.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v11.u8[14] = ctx.v0.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v11.u8[15] = ctx.v0.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v10,v1,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvlx128 v61,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vaddubm v9,v13,v11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vcuxwfp128 v59,v10,31
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v10.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vupkhsb128 v58,v9,v0
	_mm_store_si128((__m128i*)ctx.v58.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v9.s8), _mm_load_si128((__m128i*)ctx.v9.s8))));
	// vupkhsb128 v57,v58,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// vsldoi128 v56,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vcsxwfp128 v55,v57,7
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vmulfp128 v54,v59,v56
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v56.f32)));
	// vrlimi128 v60,v55,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v55.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v60,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0DC4"))) PPC_WEAK_FUNC(sub_82FD0DC4);
PPC_FUNC_IMPL(__imp__sub_82FD0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD0DC8"))) PPC_WEAK_FUNC(sub_82FD0DC8);
PPC_FUNC_IMPL(__imp__sub_82FD0DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisb v0,7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x7)));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r8,r6,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vspltisb v13,1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_set1_epi8(char(0x1)));
	// vslb v0,v0,v0
	ctx.v0.u8[0] = ctx.v0.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v0.u8[1] = ctx.v0.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v0.u8[2] = ctx.v0.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v0.u8[3] = ctx.v0.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v0.u8[4] = ctx.v0.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v0.u8[5] = ctx.v0.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v0.u8[6] = ctx.v0.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v0.u8[7] = ctx.v0.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v0.u8[8] = ctx.v0.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v0.u8[9] = ctx.v0.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v0.u8[10] = ctx.v0.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v0.u8[11] = ctx.v0.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v0.u8[12] = ctx.v0.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v0.u8[13] = ctx.v0.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v0.u8[14] = ctx.v0.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v0.u8[15] = ctx.v0.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v11,v1,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcuxwfp128 v61,v11,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v11.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v58,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// lvlx v12,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubm v10,v12,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v55,v61,v58
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v58.f32)));
	// vupkhsb128 v60,v10,v0
	_mm_store_si128((__m128i*)ctx.v60.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v10.s8), _mm_load_si128((__m128i*)ctx.v10.s8))));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vupkhsb128 v59,v60,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// lvlx v9,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubm v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v57,v59,7
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v56,v8,v0
	_mm_store_si128((__m128i*)ctx.v56.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v8.s8), _mm_load_si128((__m128i*)ctx.v8.s8))));
	// vsldoi128 v51,v55,v2,8
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vupkhsb128 v54,v56,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vcsxwfp128 v53,v54,7
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vspltw128 v52,v57,0
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// vrlimi128 v52,v53,8,0
	_mm_store_ps(ctx.v52.f32, _mm_blend_ps(_mm_load_ps(ctx.v52.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v52,v51
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// stvewx128 v50,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0E48"))) PPC_WEAK_FUNC(sub_82FD0E48);
PPC_FUNC_IMPL(__imp__sub_82FD0E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisb v0,7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x7)));
	// lvlx v13,r4,r6
	temp.u32 = ctx.r4.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vslb v11,v0,v0
	ctx.v11.u8[0] = ctx.v0.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v11.u8[1] = ctx.v0.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v11.u8[2] = ctx.v0.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v11.u8[3] = ctx.v0.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v11.u8[4] = ctx.v0.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v11.u8[5] = ctx.v0.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v11.u8[6] = ctx.v0.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v11.u8[7] = ctx.v0.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v11.u8[8] = ctx.v0.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v11.u8[9] = ctx.v0.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v11.u8[10] = ctx.v0.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v11.u8[11] = ctx.v0.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v11.u8[12] = ctx.v0.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v11.u8[13] = ctx.v0.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v11.u8[14] = ctx.v0.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v11.u8[15] = ctx.v0.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v10,v1,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvlx128 v61,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vaddubm v9,v13,v11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vcuxwfp128 v59,v10,31
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v10.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vupkhsb128 v58,v9,v0
	_mm_store_si128((__m128i*)ctx.v58.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v9.s8), _mm_load_si128((__m128i*)ctx.v9.s8))));
	// vupkhsb128 v57,v58,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// vsldoi128 v56,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vcsxwfp128 v55,v57,7
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vmulfp128 v54,v59,v56
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v56.f32)));
	// vrlimi128 v60,v55,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v55.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v60,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0EA4"))) PPC_WEAK_FUNC(sub_82FD0EA4);
PPC_FUNC_IMPL(__imp__sub_82FD0EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD0EA8"))) PPC_WEAK_FUNC(sub_82FD0EA8);
PPC_FUNC_IMPL(__imp__sub_82FD0EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisb v0,7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x7)));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r8,r6,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vspltisb v13,1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_set1_epi8(char(0x1)));
	// vslb v0,v0,v0
	ctx.v0.u8[0] = ctx.v0.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v0.u8[1] = ctx.v0.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v0.u8[2] = ctx.v0.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v0.u8[3] = ctx.v0.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v0.u8[4] = ctx.v0.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v0.u8[5] = ctx.v0.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v0.u8[6] = ctx.v0.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v0.u8[7] = ctx.v0.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v0.u8[8] = ctx.v0.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v0.u8[9] = ctx.v0.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v0.u8[10] = ctx.v0.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v0.u8[11] = ctx.v0.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v0.u8[12] = ctx.v0.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v0.u8[13] = ctx.v0.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v0.u8[14] = ctx.v0.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v0.u8[15] = ctx.v0.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v11,v1,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcuxwfp128 v61,v11,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v11.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v58,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// lvlx v12,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubm v10,v12,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v55,v61,v58
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v58.f32)));
	// vupkhsb128 v60,v10,v0
	_mm_store_si128((__m128i*)ctx.v60.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v10.s8), _mm_load_si128((__m128i*)ctx.v10.s8))));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vupkhsb128 v59,v60,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// lvlx v9,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubm v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v57,v59,7
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v56,v8,v0
	_mm_store_si128((__m128i*)ctx.v56.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v8.s8), _mm_load_si128((__m128i*)ctx.v8.s8))));
	// vsldoi128 v51,v55,v2,8
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vupkhsb128 v54,v56,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vcsxwfp128 v53,v54,7
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vspltw128 v52,v57,0
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// vrlimi128 v52,v53,8,0
	_mm_store_ps(ctx.v52.f32, _mm_blend_ps(_mm_load_ps(ctx.v52.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v52,v51
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// stvewx128 v50,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0F28"))) PPC_WEAK_FUNC(sub_82FD0F28);
PPC_FUNC_IMPL(__imp__sub_82FD0F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisb v0,7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x7)));
	// lvlx v13,r4,r6
	temp.u32 = ctx.r4.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vslb v11,v0,v0
	ctx.v11.u8[0] = ctx.v0.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v11.u8[1] = ctx.v0.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v11.u8[2] = ctx.v0.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v11.u8[3] = ctx.v0.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v11.u8[4] = ctx.v0.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v11.u8[5] = ctx.v0.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v11.u8[6] = ctx.v0.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v11.u8[7] = ctx.v0.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v11.u8[8] = ctx.v0.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v11.u8[9] = ctx.v0.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v11.u8[10] = ctx.v0.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v11.u8[11] = ctx.v0.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v11.u8[12] = ctx.v0.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v11.u8[13] = ctx.v0.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v11.u8[14] = ctx.v0.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v11.u8[15] = ctx.v0.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v10,v1,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvlx128 v61,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vaddubm v9,v13,v11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vcuxwfp128 v59,v10,31
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v10.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vupkhsb128 v58,v9,v0
	_mm_store_si128((__m128i*)ctx.v58.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v9.s8), _mm_load_si128((__m128i*)ctx.v9.s8))));
	// vupkhsb128 v57,v58,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// vsldoi128 v56,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vcsxwfp128 v55,v57,7
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vmulfp128 v54,v59,v56
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v56.f32)));
	// vrlimi128 v60,v55,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v55.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v60,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD0F84"))) PPC_WEAK_FUNC(sub_82FD0F84);
PPC_FUNC_IMPL(__imp__sub_82FD0F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD0F88"))) PPC_WEAK_FUNC(sub_82FD0F88);
PPC_FUNC_IMPL(__imp__sub_82FD0F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisb v0,7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x7)));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r8,r6,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vspltisb v13,1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_set1_epi8(char(0x1)));
	// vslb v0,v0,v0
	ctx.v0.u8[0] = ctx.v0.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v0.u8[1] = ctx.v0.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v0.u8[2] = ctx.v0.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v0.u8[3] = ctx.v0.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v0.u8[4] = ctx.v0.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v0.u8[5] = ctx.v0.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v0.u8[6] = ctx.v0.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v0.u8[7] = ctx.v0.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v0.u8[8] = ctx.v0.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v0.u8[9] = ctx.v0.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v0.u8[10] = ctx.v0.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v0.u8[11] = ctx.v0.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v0.u8[12] = ctx.v0.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v0.u8[13] = ctx.v0.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v0.u8[14] = ctx.v0.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v0.u8[15] = ctx.v0.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v11,v1,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcuxwfp128 v61,v11,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v11.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v58,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// lvlx v12,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubm v10,v12,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v55,v61,v58
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v58.f32)));
	// vupkhsb128 v60,v10,v0
	_mm_store_si128((__m128i*)ctx.v60.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v10.s8), _mm_load_si128((__m128i*)ctx.v10.s8))));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vupkhsb128 v59,v60,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// lvlx v9,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubm v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v57,v59,7
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v56,v8,v0
	_mm_store_si128((__m128i*)ctx.v56.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v8.s8), _mm_load_si128((__m128i*)ctx.v8.s8))));
	// vsldoi128 v51,v55,v2,8
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vupkhsb128 v54,v56,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vcsxwfp128 v53,v54,7
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vspltw128 v52,v57,0
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// vrlimi128 v52,v53,8,0
	_mm_store_ps(ctx.v52.f32, _mm_blend_ps(_mm_load_ps(ctx.v52.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v52,v51
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// stvewx128 v50,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1008"))) PPC_WEAK_FUNC(sub_82FD1008);
PPC_FUNC_IMPL(__imp__sub_82FD1008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisb v0,7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x7)));
	// lvlx v13,r4,r6
	temp.u32 = ctx.r4.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vslb v11,v0,v0
	ctx.v11.u8[0] = ctx.v0.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v11.u8[1] = ctx.v0.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v11.u8[2] = ctx.v0.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v11.u8[3] = ctx.v0.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v11.u8[4] = ctx.v0.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v11.u8[5] = ctx.v0.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v11.u8[6] = ctx.v0.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v11.u8[7] = ctx.v0.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v11.u8[8] = ctx.v0.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v11.u8[9] = ctx.v0.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v11.u8[10] = ctx.v0.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v11.u8[11] = ctx.v0.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v11.u8[12] = ctx.v0.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v11.u8[13] = ctx.v0.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v11.u8[14] = ctx.v0.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v11.u8[15] = ctx.v0.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v10,v1,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvlx128 v61,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vaddubm v9,v13,v11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vcuxwfp128 v59,v10,31
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v10.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vupkhsb128 v58,v9,v0
	_mm_store_si128((__m128i*)ctx.v58.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v9.s8), _mm_load_si128((__m128i*)ctx.v9.s8))));
	// vupkhsb128 v57,v58,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// vsldoi128 v56,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vcsxwfp128 v55,v57,7
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vmulfp128 v54,v59,v56
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v56.f32)));
	// vrlimi128 v60,v55,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v55.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v60,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1064"))) PPC_WEAK_FUNC(sub_82FD1064);
PPC_FUNC_IMPL(__imp__sub_82FD1064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1068"))) PPC_WEAK_FUNC(sub_82FD1068);
PPC_FUNC_IMPL(__imp__sub_82FD1068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisb v0,7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x7)));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r8,r6,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vspltisb v13,1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_set1_epi8(char(0x1)));
	// vslb v0,v0,v0
	ctx.v0.u8[0] = ctx.v0.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v0.u8[1] = ctx.v0.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v0.u8[2] = ctx.v0.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v0.u8[3] = ctx.v0.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v0.u8[4] = ctx.v0.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v0.u8[5] = ctx.v0.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v0.u8[6] = ctx.v0.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v0.u8[7] = ctx.v0.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v0.u8[8] = ctx.v0.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v0.u8[9] = ctx.v0.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v0.u8[10] = ctx.v0.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v0.u8[11] = ctx.v0.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v0.u8[12] = ctx.v0.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v0.u8[13] = ctx.v0.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v0.u8[14] = ctx.v0.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v0.u8[15] = ctx.v0.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v11,v1,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcuxwfp128 v61,v11,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v11.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v58,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// lvlx v12,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubm v10,v12,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v55,v61,v58
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v58.f32)));
	// vupkhsb128 v60,v10,v0
	_mm_store_si128((__m128i*)ctx.v60.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v10.s8), _mm_load_si128((__m128i*)ctx.v10.s8))));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vupkhsb128 v59,v60,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// lvlx v9,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubm v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v57,v59,7
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v56,v8,v0
	_mm_store_si128((__m128i*)ctx.v56.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v8.s8), _mm_load_si128((__m128i*)ctx.v8.s8))));
	// vsldoi128 v51,v55,v2,8
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vupkhsb128 v54,v56,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vcsxwfp128 v53,v54,7
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vspltw128 v52,v57,0
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// vrlimi128 v52,v53,8,0
	_mm_store_ps(ctx.v52.f32, _mm_blend_ps(_mm_load_ps(ctx.v52.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v52,v51
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// stvewx128 v50,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD10E8"))) PPC_WEAK_FUNC(sub_82FD10E8);
PPC_FUNC_IMPL(__imp__sub_82FD10E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisb v0,7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x7)));
	// lvlx v13,r4,r6
	temp.u32 = ctx.r4.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vslb v11,v0,v0
	ctx.v11.u8[0] = ctx.v0.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v11.u8[1] = ctx.v0.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v11.u8[2] = ctx.v0.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v11.u8[3] = ctx.v0.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v11.u8[4] = ctx.v0.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v11.u8[5] = ctx.v0.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v11.u8[6] = ctx.v0.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v11.u8[7] = ctx.v0.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v11.u8[8] = ctx.v0.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v11.u8[9] = ctx.v0.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v11.u8[10] = ctx.v0.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v11.u8[11] = ctx.v0.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v11.u8[12] = ctx.v0.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v11.u8[13] = ctx.v0.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v11.u8[14] = ctx.v0.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v11.u8[15] = ctx.v0.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v10,v1,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvlx128 v61,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vaddubm v9,v13,v11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vcuxwfp128 v59,v10,31
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v10.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vupkhsb128 v58,v9,v0
	_mm_store_si128((__m128i*)ctx.v58.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v9.s8), _mm_load_si128((__m128i*)ctx.v9.s8))));
	// vupkhsb128 v57,v58,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// vsldoi128 v56,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vcsxwfp128 v55,v57,7
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vmulfp128 v54,v59,v56
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v56.f32)));
	// vrlimi128 v60,v55,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v55.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v60,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1144"))) PPC_WEAK_FUNC(sub_82FD1144);
PPC_FUNC_IMPL(__imp__sub_82FD1144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1148"))) PPC_WEAK_FUNC(sub_82FD1148);
PPC_FUNC_IMPL(__imp__sub_82FD1148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisb v0,7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x7)));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r8,r6,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vspltisb v13,1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_set1_epi8(char(0x1)));
	// vslb v0,v0,v0
	ctx.v0.u8[0] = ctx.v0.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v0.u8[1] = ctx.v0.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v0.u8[2] = ctx.v0.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v0.u8[3] = ctx.v0.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v0.u8[4] = ctx.v0.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v0.u8[5] = ctx.v0.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v0.u8[6] = ctx.v0.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v0.u8[7] = ctx.v0.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v0.u8[8] = ctx.v0.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v0.u8[9] = ctx.v0.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v0.u8[10] = ctx.v0.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v0.u8[11] = ctx.v0.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v0.u8[12] = ctx.v0.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v0.u8[13] = ctx.v0.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v0.u8[14] = ctx.v0.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v0.u8[15] = ctx.v0.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v11,v1,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcuxwfp128 v61,v11,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v11.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v58,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// lvlx v12,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubm v10,v12,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v55,v61,v58
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v58.f32)));
	// vupkhsb128 v60,v10,v0
	_mm_store_si128((__m128i*)ctx.v60.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v10.s8), _mm_load_si128((__m128i*)ctx.v10.s8))));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vupkhsb128 v59,v60,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// lvlx v9,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubm v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v57,v59,7
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v56,v8,v0
	_mm_store_si128((__m128i*)ctx.v56.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v8.s8), _mm_load_si128((__m128i*)ctx.v8.s8))));
	// vsldoi128 v51,v55,v2,8
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vupkhsb128 v54,v56,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vcsxwfp128 v53,v54,7
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vspltw128 v52,v57,0
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// vrlimi128 v52,v53,8,0
	_mm_store_ps(ctx.v52.f32, _mm_blend_ps(_mm_load_ps(ctx.v52.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v52,v51
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// stvewx128 v50,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD11C8"))) PPC_WEAK_FUNC(sub_82FD11C8);
PPC_FUNC_IMPL(__imp__sub_82FD11C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,17328
	ctx.r9.s64 = ctx.r11.s64 + 17328;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// rlwinm r7,r6,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v60,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v59,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vspltw128 v57,v59,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vcsxwfp128 v56,v60,31
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vsldoi128 v55,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v54,v58,v55
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v57,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1224"))) PPC_WEAK_FUNC(sub_82FD1224);
PPC_FUNC_IMPL(__imp__sub_82FD1224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1228"))) PPC_WEAK_FUNC(sub_82FD1228);
PPC_FUNC_IMPL(__imp__sub_82FD1228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v57,v61,v60
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,17328
	ctx.r7.s64 = ctx.r9.s64 + 17328;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v58,v59,v63,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v52,v57,v2,8
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vperm128 v55,v56,v63,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v54,v58,31
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v53,v55,31
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v52
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// stvewx128 v50,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD12A4"))) PPC_WEAK_FUNC(sub_82FD12A4);
PPC_FUNC_IMPL(__imp__sub_82FD12A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD12A8"))) PPC_WEAK_FUNC(sub_82FD12A8);
PPC_FUNC_IMPL(__imp__sub_82FD12A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,17328
	ctx.r9.s64 = ctx.r11.s64 + 17328;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// rlwinm r7,r6,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v60,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v59,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vspltw128 v57,v59,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vcsxwfp128 v56,v60,31
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vsldoi128 v55,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v54,v58,v55
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v57,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1304"))) PPC_WEAK_FUNC(sub_82FD1304);
PPC_FUNC_IMPL(__imp__sub_82FD1304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1308"))) PPC_WEAK_FUNC(sub_82FD1308);
PPC_FUNC_IMPL(__imp__sub_82FD1308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v57,v61,v60
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,17328
	ctx.r7.s64 = ctx.r9.s64 + 17328;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v58,v59,v63,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v52,v57,v2,8
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vperm128 v55,v56,v63,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v54,v58,31
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v53,v55,31
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v52
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// stvewx128 v50,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1384"))) PPC_WEAK_FUNC(sub_82FD1384);
PPC_FUNC_IMPL(__imp__sub_82FD1384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1388"))) PPC_WEAK_FUNC(sub_82FD1388);
PPC_FUNC_IMPL(__imp__sub_82FD1388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,17328
	ctx.r9.s64 = ctx.r11.s64 + 17328;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// rlwinm r7,r6,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v60,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v59,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vspltw128 v57,v59,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vcsxwfp128 v56,v60,31
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vsldoi128 v55,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v54,v58,v55
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v57,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD13E4"))) PPC_WEAK_FUNC(sub_82FD13E4);
PPC_FUNC_IMPL(__imp__sub_82FD13E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD13E8"))) PPC_WEAK_FUNC(sub_82FD13E8);
PPC_FUNC_IMPL(__imp__sub_82FD13E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v57,v61,v60
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,17328
	ctx.r7.s64 = ctx.r9.s64 + 17328;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v58,v59,v63,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v52,v57,v2,8
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vperm128 v55,v56,v63,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v54,v58,31
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v53,v55,31
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v52
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// stvewx128 v50,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1464"))) PPC_WEAK_FUNC(sub_82FD1464);
PPC_FUNC_IMPL(__imp__sub_82FD1464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1468"))) PPC_WEAK_FUNC(sub_82FD1468);
PPC_FUNC_IMPL(__imp__sub_82FD1468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,17328
	ctx.r9.s64 = ctx.r11.s64 + 17328;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// rlwinm r7,r6,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v60,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v59,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vspltw128 v57,v59,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vcsxwfp128 v56,v60,31
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vsldoi128 v55,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v54,v58,v55
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v57,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD14C4"))) PPC_WEAK_FUNC(sub_82FD14C4);
PPC_FUNC_IMPL(__imp__sub_82FD14C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD14C8"))) PPC_WEAK_FUNC(sub_82FD14C8);
PPC_FUNC_IMPL(__imp__sub_82FD14C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v57,v61,v60
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,17328
	ctx.r7.s64 = ctx.r9.s64 + 17328;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v58,v59,v63,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v52,v57,v2,8
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vperm128 v55,v56,v63,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v54,v58,31
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v53,v55,31
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v52
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// stvewx128 v50,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1544"))) PPC_WEAK_FUNC(sub_82FD1544);
PPC_FUNC_IMPL(__imp__sub_82FD1544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1548"))) PPC_WEAK_FUNC(sub_82FD1548);
PPC_FUNC_IMPL(__imp__sub_82FD1548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,17328
	ctx.r9.s64 = ctx.r11.s64 + 17328;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// rlwinm r7,r6,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v60,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v59,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vspltw128 v57,v59,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vcsxwfp128 v56,v60,31
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vsldoi128 v55,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v54,v58,v55
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vsldoi128 v53,v54,v2,8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v52,v57,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// stvewx128 v52,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD15A4"))) PPC_WEAK_FUNC(sub_82FD15A4);
PPC_FUNC_IMPL(__imp__sub_82FD15A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD15A8"))) PPC_WEAK_FUNC(sub_82FD15A8);
PPC_FUNC_IMPL(__imp__sub_82FD15A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v57,v61,v60
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,17328
	ctx.r7.s64 = ctx.r9.s64 + 17328;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v58,v59,v63,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v52,v57,v2,8
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vperm128 v55,v56,v63,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v54,v58,31
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v53,v55,31
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v52
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// stvewx128 v50,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1624"))) PPC_WEAK_FUNC(sub_82FD1624);
PPC_FUNC_IMPL(__imp__sub_82FD1624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1628"))) PPC_WEAK_FUNC(sub_82FD1628);
PPC_FUNC_IMPL(__imp__sub_82FD1628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfsx f13,r10,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1640"))) PPC_WEAK_FUNC(sub_82FD1640);
PPC_FUNC_IMPL(__imp__sub_82FD1640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfsx f13,r10,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1658"))) PPC_WEAK_FUNC(sub_82FD1658);
PPC_FUNC_IMPL(__imp__sub_82FD1658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfsx f13,r10,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1670"))) PPC_WEAK_FUNC(sub_82FD1670);
PPC_FUNC_IMPL(__imp__sub_82FD1670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfsx f13,r10,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1688"))) PPC_WEAK_FUNC(sub_82FD1688);
PPC_FUNC_IMPL(__imp__sub_82FD1688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfsx f13,r10,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD16A0"))) PPC_WEAK_FUNC(sub_82FD16A0);
PPC_FUNC_IMPL(__imp__sub_82FD16A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwinm r9,r5,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lhzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD16D8"))) PPC_WEAK_FUNC(sub_82FD16D8);
PPC_FUNC_IMPL(__imp__sub_82FD16D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwinm r9,r5,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lhzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1710"))) PPC_WEAK_FUNC(sub_82FD1710);
PPC_FUNC_IMPL(__imp__sub_82FD1710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwinm r9,r5,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lhzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1748"))) PPC_WEAK_FUNC(sub_82FD1748);
PPC_FUNC_IMPL(__imp__sub_82FD1748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwinm r9,r5,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lhzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1780"))) PPC_WEAK_FUNC(sub_82FD1780);
PPC_FUNC_IMPL(__imp__sub_82FD1780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwinm r9,r5,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lhzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD17B8"))) PPC_WEAK_FUNC(sub_82FD17B8);
PPC_FUNC_IMPL(__imp__sub_82FD17B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbzx r8,r4,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// rlwinm r7,r5,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-17348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-17360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r7,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD17F4"))) PPC_WEAK_FUNC(sub_82FD17F4);
PPC_FUNC_IMPL(__imp__sub_82FD17F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD17F8"))) PPC_WEAK_FUNC(sub_82FD17F8);
PPC_FUNC_IMPL(__imp__sub_82FD17F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbzx r8,r4,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// rlwinm r7,r5,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-17348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-17360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r7,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1834"))) PPC_WEAK_FUNC(sub_82FD1834);
PPC_FUNC_IMPL(__imp__sub_82FD1834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1838"))) PPC_WEAK_FUNC(sub_82FD1838);
PPC_FUNC_IMPL(__imp__sub_82FD1838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbzx r8,r4,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// rlwinm r7,r5,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-17348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-17360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r7,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1874"))) PPC_WEAK_FUNC(sub_82FD1874);
PPC_FUNC_IMPL(__imp__sub_82FD1874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1878"))) PPC_WEAK_FUNC(sub_82FD1878);
PPC_FUNC_IMPL(__imp__sub_82FD1878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbzx r8,r4,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// rlwinm r7,r5,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-17348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-17360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r7,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD18B4"))) PPC_WEAK_FUNC(sub_82FD18B4);
PPC_FUNC_IMPL(__imp__sub_82FD18B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD18B8"))) PPC_WEAK_FUNC(sub_82FD18B8);
PPC_FUNC_IMPL(__imp__sub_82FD18B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbzx r8,r4,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// rlwinm r7,r5,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-17348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-17360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r7,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD18F4"))) PPC_WEAK_FUNC(sub_82FD18F4);
PPC_FUNC_IMPL(__imp__sub_82FD18F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD18F8"))) PPC_WEAK_FUNC(sub_82FD18F8);
PPC_FUNC_IMPL(__imp__sub_82FD18F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lhzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1938"))) PPC_WEAK_FUNC(sub_82FD1938);
PPC_FUNC_IMPL(__imp__sub_82FD1938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lhzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1978"))) PPC_WEAK_FUNC(sub_82FD1978);
PPC_FUNC_IMPL(__imp__sub_82FD1978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lhzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD19B8"))) PPC_WEAK_FUNC(sub_82FD19B8);
PPC_FUNC_IMPL(__imp__sub_82FD19B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lhzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD19F8"))) PPC_WEAK_FUNC(sub_82FD19F8);
PPC_FUNC_IMPL(__imp__sub_82FD19F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lhzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// lfs f0,-18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1A38"))) PPC_WEAK_FUNC(sub_82FD1A38);
PPC_FUNC_IMPL(__imp__sub_82FD1A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f12,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f12,r10,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1A78"))) PPC_WEAK_FUNC(sub_82FD1A78);
PPC_FUNC_IMPL(__imp__sub_82FD1A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f12,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f12,r10,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1AB8"))) PPC_WEAK_FUNC(sub_82FD1AB8);
PPC_FUNC_IMPL(__imp__sub_82FD1AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f12,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f12,r10,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1AF8"))) PPC_WEAK_FUNC(sub_82FD1AF8);
PPC_FUNC_IMPL(__imp__sub_82FD1AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f12,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f12,r10,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1B38"))) PPC_WEAK_FUNC(sub_82FD1B38);
PPC_FUNC_IMPL(__imp__sub_82FD1B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f12,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f12,r10,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1B78"))) PPC_WEAK_FUNC(sub_82FD1B78);
PPC_FUNC_IMPL(__imp__sub_82FD1B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lfs f0,-18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r10,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1BDC"))) PPC_WEAK_FUNC(sub_82FD1BDC);
PPC_FUNC_IMPL(__imp__sub_82FD1BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1BE0"))) PPC_WEAK_FUNC(sub_82FD1BE0);
PPC_FUNC_IMPL(__imp__sub_82FD1BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lfs f0,-18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r10,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1C44"))) PPC_WEAK_FUNC(sub_82FD1C44);
PPC_FUNC_IMPL(__imp__sub_82FD1C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1C48"))) PPC_WEAK_FUNC(sub_82FD1C48);
PPC_FUNC_IMPL(__imp__sub_82FD1C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lfs f0,-18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r10,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1CAC"))) PPC_WEAK_FUNC(sub_82FD1CAC);
PPC_FUNC_IMPL(__imp__sub_82FD1CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1CB0"))) PPC_WEAK_FUNC(sub_82FD1CB0);
PPC_FUNC_IMPL(__imp__sub_82FD1CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lfs f0,-18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r10,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1D14"))) PPC_WEAK_FUNC(sub_82FD1D14);
PPC_FUNC_IMPL(__imp__sub_82FD1D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1D18"))) PPC_WEAK_FUNC(sub_82FD1D18);
PPC_FUNC_IMPL(__imp__sub_82FD1D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lfs f0,-18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r10,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1D7C"))) PPC_WEAK_FUNC(sub_82FD1D7C);
PPC_FUNC_IMPL(__imp__sub_82FD1D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1D80"))) PPC_WEAK_FUNC(sub_82FD1D80);
PPC_FUNC_IMPL(__imp__sub_82FD1D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbzx r7,r4,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// fadds f11,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,-17348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,-17360(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f7,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f12,6380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6380);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfsx f5,r10,r5
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1DE8"))) PPC_WEAK_FUNC(sub_82FD1DE8);
PPC_FUNC_IMPL(__imp__sub_82FD1DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbzx r7,r4,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// fadds f11,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,-17348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,-17360(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f7,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f12,6380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6380);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfsx f5,r10,r5
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1E50"))) PPC_WEAK_FUNC(sub_82FD1E50);
PPC_FUNC_IMPL(__imp__sub_82FD1E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbzx r7,r4,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// fadds f11,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,-17348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,-17360(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f7,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f12,6380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6380);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfsx f5,r10,r5
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1EB8"))) PPC_WEAK_FUNC(sub_82FD1EB8);
PPC_FUNC_IMPL(__imp__sub_82FD1EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbzx r7,r4,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// fadds f11,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,-17348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,-17360(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f7,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f12,6380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6380);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfsx f5,r10,r5
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1F20"))) PPC_WEAK_FUNC(sub_82FD1F20);
PPC_FUNC_IMPL(__imp__sub_82FD1F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbzx r7,r4,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// fadds f11,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,-17348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,-17360(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f7,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f12,6380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6380);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfsx f5,r10,r5
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1F88"))) PPC_WEAK_FUNC(sub_82FD1F88);
PPC_FUNC_IMPL(__imp__sub_82FD1F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lhzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r4,r6,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// lfs f0,-18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r4,r6,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// lfs f13,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r10,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD1FF4"))) PPC_WEAK_FUNC(sub_82FD1FF4);
PPC_FUNC_IMPL(__imp__sub_82FD1FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD1FF8"))) PPC_WEAK_FUNC(sub_82FD1FF8);
PPC_FUNC_IMPL(__imp__sub_82FD1FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lhzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r4,r6,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// lfs f0,-18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r4,r6,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// lfs f13,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r10,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD2064"))) PPC_WEAK_FUNC(sub_82FD2064);
PPC_FUNC_IMPL(__imp__sub_82FD2064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD2068"))) PPC_WEAK_FUNC(sub_82FD2068);
PPC_FUNC_IMPL(__imp__sub_82FD2068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lhzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r4,r6,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// lfs f0,-18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r4,r6,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// lfs f13,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r10,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD20D4"))) PPC_WEAK_FUNC(sub_82FD20D4);
PPC_FUNC_IMPL(__imp__sub_82FD20D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD20D8"))) PPC_WEAK_FUNC(sub_82FD20D8);
PPC_FUNC_IMPL(__imp__sub_82FD20D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lhzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r4,r6,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// lfs f0,-18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r4,r6,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// lfs f13,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r10,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD2144"))) PPC_WEAK_FUNC(sub_82FD2144);
PPC_FUNC_IMPL(__imp__sub_82FD2144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD2148"))) PPC_WEAK_FUNC(sub_82FD2148);
PPC_FUNC_IMPL(__imp__sub_82FD2148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lhzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r4,r6,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// lfs f0,-18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18004);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r4,r6,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// lfs f13,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r10,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD21B4"))) PPC_WEAK_FUNC(sub_82FD21B4);
PPC_FUNC_IMPL(__imp__sub_82FD21B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD21B8"))) PPC_WEAK_FUNC(sub_82FD21B8);
PPC_FUNC_IMPL(__imp__sub_82FD21B8) {
	PPC_FUNC_PROLOGUE();
	// vsubfp v0,v2,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v0,v13,v1
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v62,v13,v63
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD21D4"))) PPC_WEAK_FUNC(sub_82FD21D4);
PPC_FUNC_IMPL(__imp__sub_82FD21D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD21D8"))) PPC_WEAK_FUNC(sub_82FD21D8);
PPC_FUNC_IMPL(__imp__sub_82FD21D8) {
	PPC_FUNC_PROLOGUE();
	// vsubfp v0,v4,v3
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v3.f32)));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// vsubfp v12,v2,v1
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)));
	// li r10,1024
	ctx.r10.s64 = 1024;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v11,v0,v13,v3
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v10,v12,v13,v1
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v62,v11,v63
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v61,v10,v63
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD2208"))) PPC_WEAK_FUNC(sub_82FD2208);
PPC_FUNC_IMPL(__imp__sub_82FD2208) {
	PPC_FUNC_PROLOGUE();
	// vsubfp v0,v8,v7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v7.f32)));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// vsubfp v12,v6,v5
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v5.f32)));
	// li r10,3072
	ctx.r10.s64 = 3072;
	// vsubfp v11,v4,v3
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v3.f32)));
	// li r9,2048
	ctx.r9.s64 = 2048;
	// vsubfp v10,v2,v1
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)));
	// li r8,1024
	ctx.r8.s64 = 1024;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v9,v0,v13,v7
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v8,v12,v13,v5
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v7,v11,v13,v3
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v6,v10,v13,v1
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v62,v9,v63
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v61,v8,v63
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v60,v7,v63
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v59,v6,v63
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD2260"))) PPC_WEAK_FUNC(sub_82FD2260);
PPC_FUNC_IMPL(__imp__sub_82FD2260) {
	PPC_FUNC_PROLOGUE();
	// vsubfp v0,v12,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// vsubfp v12,v10,v9
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)));
	// li r10,5120
	ctx.r10.s64 = 5120;
	// vsubfp v10,v8,v7
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v7.f32)));
	// li r9,4096
	ctx.r9.s64 = 4096;
	// vsubfp v8,v6,v5
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v5.f32)));
	// li r8,3072
	ctx.r8.s64 = 3072;
	// vsubfp v6,v4,v3
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v3.f32)));
	// li r7,2048
	ctx.r7.s64 = 2048;
	// vsubfp v4,v2,v1
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)));
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,1024
	ctx.r6.s64 = 1024;
	// vmaddfp v2,v0,v13,v11
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v31,v12,v13,v9
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v30,v10,v13,v7
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v29,v8,v13,v5
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v28,v6,v13,v3
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v27,v4,v13,v1
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v62,v2,v63
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v61,v31,v63
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v60,v30,v63
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v59,v29,v63
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v58,v28,v63
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v57,v27,v63
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD22E0"))) PPC_WEAK_FUNC(sub_82FD22E0);
PPC_FUNC_IMPL(__imp__sub_82FD22E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// vaddubm v12,v1,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v9,r0,r10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubm v8,v2,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v7,r0,r9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r8
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lvx128 v63,r0,r7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v60,v12,v0
	_mm_store_si128((__m128i*)ctx.v60.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v12.s8), _mm_load_si128((__m128i*)ctx.v12.s8))));
	// lvx128 v62,r0,r6
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v58,v12,v0
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v12.s16)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vupkhsb128 v57,v8,v0
	_mm_store_si128((__m128i*)ctx.v57.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v8.s8), _mm_load_si128((__m128i*)ctx.v8.s8))));
	// li r10,32
	ctx.r10.s64 = 32;
	// vupklsb128 v56,v8,v0
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v8.s16)));
	// lvx128 v61,r0,r5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v55,v60,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// lvx128 v59,r0,r4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v54,v60,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v60.s16)));
	// li r9,48
	ctx.r9.s64 = 48;
	// vupkhsb128 v53,v58,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// vupklsb128 v52,v58,v96
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v58.s16)));
	// vupkhsb128 v51,v57,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v0,v55,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v50,v57,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v57.s16)));
	// vcsxwfp128 v12,v54,7
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v49,v56,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vcsxwfp128 v11,v53,7
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v48,v56,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v56.s16)));
	// vcsxwfp128 v10,v52,7
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v47,v51,7
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v46,v50,7
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v45,v49,7
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v44,v48,7
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v5,v47,v0
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v4,v46,v12
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v3,v45,v11
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v2,v44,v10
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v1,v5,v13,v0
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v31,v4,v9,v12
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v30,v3,v7,v11
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v29,v2,v6,v10
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v43,v1,v63
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v42,v31,v62
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v41,v30,v61
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v40,v29,v59
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v59.f32)));
	// stvx128 v43,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD23C8"))) PPC_WEAK_FUNC(sub_82FD23C8);
PPC_FUNC_IMPL(__imp__sub_82FD23C8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// vaddubm v12,v3,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v5,r0,r10
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubm v11,v4,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v3,r0,r9
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubm v10,v1,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// vaddubm v9,v2,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// vupkhsb128 v59,v12,v0
	_mm_store_si128((__m128i*)ctx.v59.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v12.s8), _mm_load_si128((__m128i*)ctx.v12.s8))));
	// lvx128 v4,r0,r8
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v58,v12,v0
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v12.s16)));
	// lvx128 v63,r0,r7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v57,v11,v0
	_mm_store_si128((__m128i*)ctx.v57.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v11.s8), _mm_load_si128((__m128i*)ctx.v11.s8))));
	// lvx128 v62,r0,r6
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v56,v11,v0
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v11.s16)));
	// lvx128 v61,r0,r5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v51,v59,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v59.s16), _mm_load_si128((__m128i*)ctx.v59.s16))));
	// lvx128 v60,r0,r4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v50,v59,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v59.s16)));
	// li r8,16
	ctx.r8.s64 = 16;
	// vupkhsb128 v49,v58,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkhsb128 v48,v57,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// li r10,48
	ctx.r10.s64 = 48;
	// vupklsb128 v47,v57,v96
	_mm_store_si128((__m128i*)ctx.v47.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v57.s16)));
	// vcsxwfp128 v0,v51,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v46,v56,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vcsxwfp128 v12,v50,7
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v11,v49,7
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v55,v10,v0
	_mm_store_si128((__m128i*)ctx.v55.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v10.s8), _mm_load_si128((__m128i*)ctx.v10.s8))));
	// vcsxwfp128 v43,v48,7
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v54,v10,v0
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v10.s16)));
	// vcsxwfp128 v41,v47,7
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v53,v9,v0
	_mm_store_si128((__m128i*)ctx.v53.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v9.s8), _mm_load_si128((__m128i*)ctx.v9.s8))));
	// vcsxwfp128 v39,v46,7
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v52,v9,v0
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v9.s16)));
	// vupklsb128 v45,v58,v96
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v58.s16)));
	// addi r11,r3,1024
	ctx.r11.s64 = ctx.r3.s64 + 1024;
	// vupklsb128 v44,v56,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v56.s16)));
	// vupkhsb128 v42,v55,v96
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v55.s16), _mm_load_si128((__m128i*)ctx.v55.s16))));
	// vupklsb128 v40,v55,v96
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v55.s16)));
	// vupkhsb128 v38,v54,v96
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v54.s16), _mm_load_si128((__m128i*)ctx.v54.s16))));
	// vcsxwfp128 v10,v45,7
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v37,v53,v96
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v53.s16), _mm_load_si128((__m128i*)ctx.v53.s16))));
	// vcsxwfp128 v36,v44,7
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v35,v53,v96
	_mm_store_si128((__m128i*)ctx.v35.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v53.s16)));
	// vcsxwfp128 v9,v42,7
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v34,v52,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v52.s16), _mm_load_si128((__m128i*)ctx.v52.s16))));
	// vcsxwfp128 v8,v40,7
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v7,v38,7
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v33,v54,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v54.s16)));
	// vcsxwfp128 v32,v37,7
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v59,v52,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v52.s16)));
	// vcsxwfp128 v58,v35,7
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v35.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v57,v34,7
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v2,v43,v0
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v1,v41,v12
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v31,v39,v11
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v11.f32)));
	// vcsxwfp128 v6,v33,7
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v56,v59,7
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v30,v36,v10
	_mm_store_ps(ctx.v30.f32, _mm_sub_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v10.f32)));
	// vsubfp128 v29,v32,v9
	_mm_store_ps(ctx.v29.f32, _mm_sub_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v9.f32)));
	// vsubfp128 v28,v58,v8
	_mm_store_ps(ctx.v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v8.f32)));
	// vsubfp128 v27,v57,v7
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v26,v2,v13,v0
	_mm_store_ps(ctx.v26.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v25,v1,v5,v12
	_mm_store_ps(ctx.v25.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v24,v31,v3,v11
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v23,v30,v4,v10
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v22,v29,v13,v9
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v21,v28,v5,v8
	_mm_store_ps(ctx.v21.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v20,v27,v3,v7
	_mm_store_ps(ctx.v20.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v55,v26,v63
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v54,v25,v62
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v53,v24,v61
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v19,v56,v6
	_mm_store_ps(ctx.v19.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v6.f32)));
	// stvx128 v55,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v52,v23,v60
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v54,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v51,v22,v63
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v53,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v50,v21,v62
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v49,v20,v61
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v61.f32)));
	// vmaddfp v18,v19,v4,v6
	_mm_store_ps(ctx.v18.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v6.f32)));
	// stvx128 v52,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v48,v18,v60
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v48,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD254C"))) PPC_WEAK_FUNC(sub_82FD254C);
PPC_FUNC_IMPL(__imp__sub_82FD254C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD2550"))) PPC_WEAK_FUNC(sub_82FD2550);
PPC_FUNC_IMPL(__imp__sub_82FD2550) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// vaddubm v10,v7,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// vaddubm v9,v8,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// vaddubm v8,v5,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubm v7,v6,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v11,r0,r9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v59,v10,v10
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// lvx128 v10,r0,r8
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v56,v9,v0
	_mm_store_si128((__m128i*)ctx.v56.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v9.s8), _mm_load_si128((__m128i*)ctx.v9.s8))));
	// lvx128 v63,r0,r7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v55,v9,v0
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v9.s16)));
	// lvx128 v62,r0,r6
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v54,v8,v0
	_mm_store_si128((__m128i*)ctx.v54.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v8.s8), _mm_load_si128((__m128i*)ctx.v8.s8))));
	// lvx128 v61,r0,r5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v58,v59,v0
	_mm_store_si128((__m128i*)ctx.v58.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v59.s8), _mm_load_si128((__m128i*)ctx.v59.s8))));
	// lvx128 v60,r0,r4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v57,v59,v0
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v59.s16)));
	// li r6,16
	ctx.r6.s64 = 16;
	// vupklsb128 v53,v8,v0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v8.s16)));
	// li r7,32
	ctx.r7.s64 = 32;
	// vupkhsb128 v52,v7,v0
	_mm_store_si128((__m128i*)ctx.v52.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v7.s8), _mm_load_si128((__m128i*)ctx.v7.s8))));
	// li r8,48
	ctx.r8.s64 = 48;
	// vupklsb128 v51,v7,v0
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v7.s16)));
	// addi r11,r3,3072
	ctx.r11.s64 = ctx.r3.s64 + 3072;
	// vupkhsb128 v50,v58,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// addi r10,r3,2048
	ctx.r10.s64 = ctx.r3.s64 + 2048;
	// vupkhsb128 v47,v56,v96
	_mm_store_si128((__m128i*)ctx.v47.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vaddubm v14,v3,v0
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vupklsb128 v49,v58,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v58.s16)));
	// vupkhsb128 v48,v57,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// vupklsb128 v46,v56,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v56.s16)));
	// vcsxwfp128 v9,v50,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v44,v57,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v57.s16)));
	// vcsxwfp128 v42,v47,7
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v45,v55,v96
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v55.s16), _mm_load_si128((__m128i*)ctx.v55.s16))));
	// vcsxwfp128 v8,v49,7
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v43,v55,v96
	_mm_store_si128((__m128i*)ctx.v43.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v55.s16)));
	// vcsxwfp128 v7,v48,7
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v41,v54,v96
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v54.s16), _mm_load_si128((__m128i*)ctx.v54.s16))));
	// vcsxwfp128 v40,v46,7
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v39,v54,v96
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v54.s16)));
	// vcsxwfp128 v6,v44,7
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v37,v53,v96
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v53.s16), _mm_load_si128((__m128i*)ctx.v53.s16))));
	// vcsxwfp128 v38,v45,7
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v36,v52,v96
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v52.s16), _mm_load_si128((__m128i*)ctx.v52.s16))));
	// vcsxwfp128 v35,v43,7
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v43.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v34,v52,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v52.s16)));
	// vcsxwfp128 v5,v41,7
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v33,v51,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v51.s16), _mm_load_si128((__m128i*)ctx.v51.s16))));
	// vcsxwfp128 v31,v39,7
	_mm_store_ps(ctx.v31.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v39.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v30,v37,7
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v32,v53,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v53.s16)));
	// vcsxwfp128 v59,v36,7
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v56,v51,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v51.s16)));
	// vcsxwfp128 v58,v34,7
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v57,v33,7
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v28,v42,v9
	_mm_store_ps(ctx.v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v9.f32)));
	// vcsxwfp128 v29,v32,7
	_mm_store_ps(ctx.v29.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v27,v40,v8
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v8.f32)));
	// vsubfp128 v26,v38,v7
	_mm_store_ps(ctx.v26.f32, _mm_sub_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v7.f32)));
	// vsubfp128 v25,v35,v6
	_mm_store_ps(ctx.v25.f32, _mm_sub_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v6.f32)));
	// vsubfp128 v24,v59,v5
	_mm_store_ps(ctx.v24.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v5.f32)));
	// vsubfp128 v23,v58,v31
	_mm_store_ps(ctx.v23.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v31.f32)));
	// vsubfp128 v22,v57,v30
	_mm_store_ps(ctx.v22.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v21,v28,v13,v9
	_mm_store_ps(ctx.v21.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vaddubm v9,v4,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmaddfp v20,v27,v12,v8
	_mm_store_ps(ctx.v20.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v19,v26,v11,v7
	_mm_store_ps(ctx.v19.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v18,v25,v10,v6
	_mm_store_ps(ctx.v18.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v17,v24,v13,v5
	_mm_store_ps(ctx.v17.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v16,v23,v12,v31
	_mm_store_ps(ctx.v16.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v31.f32)));
	// vmaddfp v15,v22,v11,v30
	_mm_store_ps(ctx.v15.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v30.f32)));
	// vupkhsb128 v44,v9,v0
	_mm_store_si128((__m128i*)ctx.v44.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v9.s8), _mm_load_si128((__m128i*)ctx.v9.s8))));
	// vaddubm v8,v1,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vupkhsb128 v46,v14,v0
	_mm_store_si128((__m128i*)ctx.v46.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v14.s8), _mm_load_si128((__m128i*)ctx.v14.s8))));
	// vaddubm v7,v2,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v54,v20,v62
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v62.f32)));
	// vupklsb128 v42,v9,v0
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v9.s16)));
	// vcsxwfp128 v52,v56,7
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v43,v14,v0
	_mm_store_si128((__m128i*)ctx.v43.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v14.s16)));
	// vupkhsb128 v40,v44,v96
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v44.s16), _mm_load_si128((__m128i*)ctx.v44.s16))));
	// vmulfp128 v55,v21,v63
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v63.f32)));
	// vupkhsb128 v41,v46,v96
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v46.s16), _mm_load_si128((__m128i*)ctx.v46.s16))));
	// vmulfp128 v53,v19,v61
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v61.f32)));
	// vupklsb128 v37,v46,v96
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v46.s16)));
	// vmulfp128 v51,v18,v60
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v60.f32)));
	// vupkhsb128 v36,v43,v96
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v43.s16), _mm_load_si128((__m128i*)ctx.v43.s16))));
	// vor128 v50,v8,v8
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vcsxwfp128 v35,v40,7
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v33,v44,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v44.s16)));
	// vcsxwfp128 v0,v41,7
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v32,v42,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v42.s16), _mm_load_si128((__m128i*)ctx.v42.s16))));
	// vor128 v48,v7,v7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vcsxwfp128 v9,v37,7
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v8,v36,7
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v39,v50,v0
	_mm_store_si128((__m128i*)ctx.v39.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v50.s8), _mm_load_si128((__m128i*)ctx.v50.s8))));
	// vcsxwfp128 v56,v33,7
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v34,v43,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v43.s16)));
	// vupklsb128 v59,v42,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v42.s16)));
	// vmulfp128 v49,v17,v63
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v54,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v54,v32,7
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v4,v52,v29
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v29.f32)));
	// vupkhsb128 v38,v48,v0
	_mm_store_si128((__m128i*)ctx.v38.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v48.s8), _mm_load_si128((__m128i*)ctx.v48.s8))));
	// stvx128 v55,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v58,v39,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v39.s16), _mm_load_si128((__m128i*)ctx.v39.s16))));
	// stvx128 v53,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v57,v39,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v39.s16)));
	// stvx128 v51,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v51,v50,v0
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v50.s16)));
	// vupkhsb128 v55,v38,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v38.s16), _mm_load_si128((__m128i*)ctx.v38.s16))));
	// vcsxwfp128 v7,v34,7
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v53,v38,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v38.s16)));
	// vcsxwfp128 v6,v58,7
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v1,v35,v0
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v0.f32)));
	// vupklsb128 v50,v48,v0
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v48.s16)));
	// vcsxwfp128 v5,v57,7
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v44,v51,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v51.s16), _mm_load_si128((__m128i*)ctx.v51.s16))));
	// vcsxwfp128 v52,v59,7
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// addi r9,r3,1024
	ctx.r9.s64 = ctx.r3.s64 + 1024;
	// vcsxwfp128 v48,v55,7
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v43,v51,v96
	_mm_store_si128((__m128i*)ctx.v43.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v51.s16)));
	// vcsxwfp128 v46,v53,7
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v42,v50,v96
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v50.s16), _mm_load_si128((__m128i*)ctx.v50.s16))));
	// vsubfp128 v31,v56,v9
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v9.f32)));
	// vupklsb128 v41,v50,v96
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v50.s16)));
	// vmaddfp v2,v4,v10,v29
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v29.f32)));
	// stvx128 v49,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v30,v54,v8
	_mm_store_ps(ctx.v30.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v47,v16,v62
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v45,v15,v61
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v15.f32), _mm_load_ps(ctx.v61.f32)));
	// vcsxwfp128 v4,v44,7
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v40,v42,7
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vmaddfp v26,v1,v13,v0
	_mm_store_ps(ctx.v26.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcsxwfp128 v3,v43,7
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v43.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v29,v52,v7
	_mm_store_ps(ctx.v29.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v7.f32)));
	// vsubfp128 v28,v48,v6
	_mm_store_ps(ctx.v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v6.f32)));
	// vsubfp128 v27,v46,v5
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v25,v31,v12,v9
	_mm_store_ps(ctx.v25.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v39,v2,v60
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v60.f32)));
	// vmaddfp v24,v30,v11,v8
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v47,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v37,v41,7
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// stvx128 v45,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v20,v40,v4
	_mm_store_ps(ctx.v20.f32, _mm_sub_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v38,v26,v63
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v63.f32)));
	// vmaddfp v23,v29,v10,v7
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v22,v28,v13,v6
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v21,v27,v12,v5
	_mm_store_ps(ctx.v21.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v36,v25,v62
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v39,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v35,v24,v61
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v38,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v19,v37,v3
	_mm_store_ps(ctx.v19.f32, _mm_sub_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v3.f32)));
	// stvx128 v36,r9,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v18,v20,v11,v4
	_mm_store_ps(ctx.v18.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v35,r9,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v33,v22,v63
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v32,v21,v62
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v34,v23,v60
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v60.f32)));
	// vmaddfp v17,v19,v10,v3
	_mm_store_ps(ctx.v17.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v63,v18,v61
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v34,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v62,v17,v60
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v63,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD2818"))) PPC_WEAK_FUNC(sub_82FD2818);
PPC_FUNC_IMPL(__imp__sub_82FD2818) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// vaddubm v30,v11,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// vaddubm v29,v12,v0
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// vaddubm v28,v9,v0
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v11,r0,r10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubm v27,v10,v0
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v31,r0,r9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v59,v30,v0
	_mm_store_si128((__m128i*)ctx.v59.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v30.s8), _mm_load_si128((__m128i*)ctx.v30.s8))));
	// lvx128 v12,r0,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v57,v29,v0
	_mm_store_si128((__m128i*)ctx.v57.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v29.s8), _mm_load_si128((__m128i*)ctx.v29.s8))));
	// lvx128 v63,r0,r7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v58,v30,v0
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v30.s16)));
	// lvx128 v62,r0,r6
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v56,v29,v0
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v29.s16)));
	// lvx128 v61,r0,r5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v51,v59,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v59.s16), _mm_load_si128((__m128i*)ctx.v59.s16))));
	// lvx128 v60,r0,r4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v48,v57,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// li r9,16
	ctx.r9.s64 = 16;
	// vupkhsb128 v55,v28,v0
	_mm_store_si128((__m128i*)ctx.v55.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v28.s8), _mm_load_si128((__m128i*)ctx.v28.s8))));
	// li r10,32
	ctx.r10.s64 = 32;
	// vupkhsb128 v53,v27,v0
	_mm_store_si128((__m128i*)ctx.v53.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v27.s8), _mm_load_si128((__m128i*)ctx.v27.s8))));
	// li r11,48
	ctx.r11.s64 = 48;
	// vcsxwfp128 v10,v51,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v54,v28,v0
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v28.s16)));
	// vcsxwfp128 v43,v48,7
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v52,v27,v0
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v27.s16)));
	// vupklsb128 v50,v59,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v59.s16)));
	// addi r8,r3,5120
	ctx.r8.s64 = ctx.r3.s64 + 5120;
	// vupkhsb128 v49,v58,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// addi r7,r3,4096
	ctx.r7.s64 = ctx.r3.s64 + 4096;
	// vupklsb128 v47,v57,v96
	_mm_store_si128((__m128i*)ctx.v47.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v57.s16)));
	// vupkhsb128 v46,v56,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vupklsb128 v45,v58,v96
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v58.s16)));
	// vcsxwfp128 v9,v50,7
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v44,v56,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v56.s16)));
	// vcsxwfp128 v30,v49,7
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v42,v55,v96
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v55.s16), _mm_load_si128((__m128i*)ctx.v55.s16))));
	// vcsxwfp128 v41,v47,7
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v37,v53,v96
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v53.s16), _mm_load_si128((__m128i*)ctx.v53.s16))));
	// vcsxwfp128 v39,v46,7
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v40,v55,v96
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v55.s16)));
	// vcsxwfp128 v29,v45,7
	_mm_store_ps(ctx.v29.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v38,v54,v96
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v54.s16), _mm_load_si128((__m128i*)ctx.v54.s16))));
	// vcsxwfp128 v36,v44,7
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v35,v53,v96
	_mm_store_si128((__m128i*)ctx.v35.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v53.s16)));
	// vcsxwfp128 v28,v42,7
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v34,v52,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v52.s16), _mm_load_si128((__m128i*)ctx.v52.s16))));
	// vcsxwfp128 v32,v37,7
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v27,v40,7
	_mm_store_ps(ctx.v27.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v33,v54,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v54.s16)));
	// vcsxwfp128 v26,v38,7
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v57,v52,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v52.s16)));
	// vsubfp128 v24,v43,v10
	_mm_store_ps(ctx.v24.f32, _mm_sub_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v10.f32)));
	// vcsxwfp128 v59,v35,7
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v35.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v58,v34,7
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v25,v33,7
	_mm_store_ps(ctx.v25.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v23,v41,v9
	_mm_store_ps(ctx.v23.f32, _mm_sub_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v9.f32)));
	// vsubfp128 v22,v39,v30
	_mm_store_ps(ctx.v22.f32, _mm_sub_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v30.f32)));
	// vsubfp128 v21,v36,v29
	_mm_store_ps(ctx.v21.f32, _mm_sub_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v29.f32)));
	// vsubfp128 v20,v32,v28
	_mm_store_ps(ctx.v20.f32, _mm_sub_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v17,v24,v13,v10
	_mm_store_ps(ctx.v17.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vsubfp128 v19,v59,v27
	_mm_store_ps(ctx.v19.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v27.f32)));
	// vsubfp128 v18,v58,v26
	_mm_store_ps(ctx.v18.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v26.f32)));
	// vmaddfp v16,v23,v11,v9
	_mm_store_ps(ctx.v16.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v15,v22,v31,v30
	_mm_store_ps(ctx.v15.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v14,v21,v12,v29
	_mm_store_ps(ctx.v14.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v29.f32)));
	// vaddubm v29,v7,v0
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmaddfp v10,v20,v13,v28
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v28.f32)));
	// vaddubm v28,v8,v0
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v56,v17,v63
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v63.f32)));
	// vmaddfp v9,v19,v11,v27
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v27.f32)));
	// vmaddfp v30,v18,v31,v26
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v26.f32)));
	// vmulfp128 v55,v16,v62
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v62.f32)));
	// vupkhsb128 v49,v29,v0
	_mm_store_si128((__m128i*)ctx.v49.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v29.s8), _mm_load_si128((__m128i*)ctx.v29.s8))));
	// vcsxwfp128 v53,v57,7
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v47,v28,v0
	_mm_store_si128((__m128i*)ctx.v47.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v28.s8), _mm_load_si128((__m128i*)ctx.v28.s8))));
	// vupklsb128 v46,v29,v0
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v29.s16)));
	// vaddubm v27,v5,v0
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vupklsb128 v45,v28,v0
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v28.s16)));
	// vaddubm v26,v6,v0
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vupkhsb128 v44,v49,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v49.s16), _mm_load_si128((__m128i*)ctx.v49.s16))));
	// vmulfp128 v54,v15,v61
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v15.f32), _mm_load_ps(ctx.v61.f32)));
	// vupkhsb128 v43,v47,v96
	_mm_store_si128((__m128i*)ctx.v43.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v47.s16), _mm_load_si128((__m128i*)ctx.v47.s16))));
	// vmulfp128 v52,v14,v60
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v60.f32)));
	// vupklsb128 v40,v49,v96
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v49.s16)));
	// vmulfp128 v51,v10,v63
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v63.f32)));
	// vupklsb128 v36,v47,v96
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v47.s16)));
	// vmulfp128 v50,v9,v62
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v62.f32)));
	// vupkhsb128 v39,v46,v96
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v46.s16), _mm_load_si128((__m128i*)ctx.v46.s16))));
	// vcsxwfp128 v10,v44,7
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v37,v46,v96
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v46.s16)));
	// vcsxwfp128 v38,v43,7
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v43.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v35,v45,v96
	_mm_store_si128((__m128i*)ctx.v35.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v45.s16), _mm_load_si128((__m128i*)ctx.v45.s16))));
	// vcsxwfp128 v9,v40,7
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v34,v45,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v45.s16)));
	// vcsxwfp128 v59,v36,7
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// stvx128 v55,r8,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v8,v39,7
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v39.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v7,v37,7
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v42,v27,v0
	_mm_store_si128((__m128i*)ctx.v42.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v27.s8), _mm_load_si128((__m128i*)ctx.v27.s8))));
	// vsubfp128 v23,v53,v25
	_mm_store_ps(ctx.v23.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v25.f32)));
	// vupkhsb128 v41,v26,v0
	_mm_store_si128((__m128i*)ctx.v41.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v26.s8), _mm_load_si128((__m128i*)ctx.v26.s8))));
	// vcsxwfp128 v57,v35,7
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v35.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// stvx128 v56,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v34,7
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// stvx128 v54,r8,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v33,v42,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v42.s16), _mm_load_si128((__m128i*)ctx.v42.s16))));
	// stvx128 v52,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v58,v41,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v41.s16), _mm_load_si128((__m128i*)ctx.v41.s16))));
	// stvx128 v51,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v32,v42,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v42.s16)));
	// vmulfp128 v48,v30,v61
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v61.f32)));
	// vupklsb128 v56,v41,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v41.s16)));
	// stvx128 v50,r7,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v6,v33,7
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v54,v27,v0
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v27.s16)));
	// vcsxwfp128 v52,v58,7
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v53,v26,v0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v26.s16)));
	// vcsxwfp128 v5,v32,7
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// addi r6,r3,3072
	ctx.r6.s64 = ctx.r3.s64 + 3072;
	// vsubfp128 v21,v38,v10
	_mm_store_ps(ctx.v21.f32, _mm_sub_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v10.f32)));
	// vaddubm v24,v3,v0
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsubfp128 v20,v59,v9
	_mm_store_ps(ctx.v20.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v9.f32)));
	// vupkhsb128 v50,v54,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v54.s16), _mm_load_si128((__m128i*)ctx.v54.s16))));
	// vcsxwfp128 v51,v56,7
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v49,v54,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v54.s16)));
	// vsubfp128 v19,v57,v8
	_mm_store_ps(ctx.v19.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v8.f32)));
	// addi r8,r3,2048
	ctx.r8.s64 = ctx.r3.s64 + 2048;
	// vsubfp128 v18,v55,v7
	_mm_store_ps(ctx.v18.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v7.f32)));
	// vupklsb128 v44,v53,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v53.s16)));
	// vmaddfp v22,v23,v12,v25
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v25.f32)));
	// vcsxwfp128 v30,v50,7
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// stvx128 v48,r7,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v48,v53,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v53.s16), _mm_load_si128((__m128i*)ctx.v53.s16))));
	// vcsxwfp128 v29,v49,7
	_mm_store_ps(ctx.v29.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v17,v52,v6
	_mm_store_ps(ctx.v17.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v6.f32)));
	// vcsxwfp128 v45,v48,7
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vmaddfp v15,v21,v13,v10
	_mm_store_ps(ctx.v15.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v14,v20,v11,v9
	_mm_store_ps(ctx.v14.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vsubfp128 v16,v51,v5
	_mm_store_ps(ctx.v16.f32, _mm_sub_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v10,v19,v31,v8
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v9,v18,v12,v7
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v47,v22,v60
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v60.f32)));
	// vmaddfp v8,v17,v13,v6
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v6.f32)));
	// vaddubm v6,v4,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddubm v4,v2,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v46,v15,v63
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_load_ps(ctx.v15.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v43,v14,v62
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v62.f32)));
	// vmaddfp v7,v16,v11,v5
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v5.f32)));
	// vaddubm v5,v1,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_add_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v42,v10,v61
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v41,v9,v60
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v47,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v40,v24,v0
	_mm_store_si128((__m128i*)ctx.v40.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v24.s8), _mm_load_si128((__m128i*)ctx.v24.s8))));
	// vcsxwfp128 v39,v44,7
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v38,v24,v0
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v24.s16)));
	// vsubfp128 v3,v45,v30
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v30.f32)));
	// vupkhsb128 v36,v6,v0
	_mm_store_si128((__m128i*)ctx.v36.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v6.s8), _mm_load_si128((__m128i*)ctx.v6.s8))));
	// vmulfp128 v37,v8,v63
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v63.f32)));
	// vupklsb128 v34,v6,v0
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v6.s16)));
	// vmulfp128 v35,v7,v62
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v62.f32)));
	// vupkhsb128 v33,v40,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v40.s16), _mm_load_si128((__m128i*)ctx.v40.s16))));
	// stvx128 v46,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v32,v40,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v40.s16)));
	// stvx128 v43,r6,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v59,v38,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v38.s16), _mm_load_si128((__m128i*)ctx.v38.s16))));
	// addi r7,r3,1024
	ctx.r7.s64 = ctx.r3.s64 + 1024;
	// vupkhsb128 v58,v36,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v36.s16), _mm_load_si128((__m128i*)ctx.v36.s16))));
	// stvx128 v42,r6,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v57,v36,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v36.s16)));
	// vcsxwfp128 v0,v33,7
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v56,v34,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v34.s16), _mm_load_si128((__m128i*)ctx.v34.s16))));
	// vcsxwfp128 v10,v32,7
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v9,v59,7
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v55,v5,v0
	_mm_store_si128((__m128i*)ctx.v55.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v5.s8), _mm_load_si128((__m128i*)ctx.v5.s8))));
	// vcsxwfp128 v54,v58,7
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupkhsb128 v53,v4,v0
	_mm_store_si128((__m128i*)ctx.v53.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v4.s8), _mm_load_si128((__m128i*)ctx.v4.s8))));
	// vcsxwfp128 v52,v57,7
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v51,v38,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v38.s16)));
	// vcsxwfp128 v50,v56,7
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v49,v34,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v34.s16)));
	// vupkhsb128 v48,v55,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v55.s16), _mm_load_si128((__m128i*)ctx.v55.s16))));
	// vsubfp128 v2,v39,v29
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v29.f32)));
	// vupkhsb128 v47,v53,v96
	_mm_store_si128((__m128i*)ctx.v47.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v53.s16), _mm_load_si128((__m128i*)ctx.v53.s16))));
	// vmaddfp v1,v3,v31,v30
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v30.f32)));
	// vcsxwfp128 v8,v51,7
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v46,v5,v0
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v5.s16)));
	// vcsxwfp128 v45,v49,7
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v44,v4,v0
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v4.s16)));
	// vcsxwfp128 v7,v48,7
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v43,v55,v96
	_mm_store_si128((__m128i*)ctx.v43.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v55.s16)));
	// vcsxwfp128 v40,v47,7
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v39,v53,v96
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v53.s16)));
	// vupkhsb128 v38,v46,v96
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v46.s16), _mm_load_si128((__m128i*)ctx.v46.s16))));
	// stvx128 v41,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v34,v44,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v44.s16), _mm_load_si128((__m128i*)ctx.v44.s16))));
	// stvx128 v37,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v6,v43,7
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v43.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vupklsb128 v36,v46,v96
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v46.s16)));
	// vsubfp128 v30,v54,v0
	_mm_store_ps(ctx.v30.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v0.f32)));
	// vupklsb128 v33,v44,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v44.s16)));
	// vsubfp128 v28,v52,v10
	_mm_store_ps(ctx.v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v35,r8,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v27,v50,v9
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v26,v2,v12,v29
	_mm_store_ps(ctx.v26.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v29.f32)));
	// vcsxwfp128 v5,v38,7
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v59,v39,7
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v39.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v25,v45,v8
	_mm_store_ps(ctx.v25.f32, _mm_sub_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v8.f32)));
	// vcsxwfp128 v58,v34,7
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v24,v40,v7
	_mm_store_ps(ctx.v24.f32, _mm_sub_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v32,v1,v61
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v61.f32)));
	// vcsxwfp128 v4,v36,7
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcsxwfp128 v53,v33,7
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vmaddfp v23,v30,v13,v0
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v22,v28,v11,v10
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v21,v27,v31,v9
	_mm_store_ps(ctx.v21.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v57,v26,v60
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v60.f32)));
	// vsubfp128 v18,v59,v6
	_mm_store_ps(ctx.v18.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v20,v25,v12,v8
	_mm_store_ps(ctx.v20.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)));
	// vsubfp128 v17,v58,v5
	_mm_store_ps(ctx.v17.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v19,v24,v13,v7
	_mm_store_ps(ctx.v19.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v32,r8,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v16,v53,v4
	_mm_store_ps(ctx.v16.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v56,v23,v63
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v55,v22,v62
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v54,v21,v61
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v57,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v15,v18,v11,v6
	_mm_store_ps(ctx.v15.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v52,v20,v60
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v60.f32)));
	// vmaddfp v14,v17,v31,v5
	_mm_store_ps(ctx.v14.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v51,v19,v63
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v56,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r7,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r7,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v16,v12,v4
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v52,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v50,v15,v62
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v15.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v51,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v49,v14,v61
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v48,v0,v60
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v50,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v48,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD2C0C"))) PPC_WEAK_FUNC(sub_82FD2C0C);
PPC_FUNC_IMPL(__imp__sub_82FD2C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD2C10"))) PPC_WEAK_FUNC(sub_82FD2C10);
PPC_FUNC_IMPL(__imp__sub_82FD2C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,17360
	ctx.r9.s64 = ctx.r11.s64 + 17360;
	// addi r8,r10,17376
	ctx.r8.s64 = ctx.r10.s64 + 17376;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,16
	ctx.r4.s64 = 16;
	// lvx128 v7,r0,r8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v60,v1,v63,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v1,v63,v7
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v62,r0,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v58,v2,v63,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v57,v2,v63,v7
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v56,r0,r5
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v60,31
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v54,v59,31
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v53,v58,31
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v52,v57,31
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vmulfp128 v0,v13,v62
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v13,v56,v61
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v12,v55,v62
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v11,v54,v61
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v10,v53,v55
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v55.f32)));
	// vsubfp128 v9,v52,v54
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v54.f32)));
	// vmaddfp v8,v10,v0,v12
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v7,v9,v13,v11
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v8,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v7,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD2C94"))) PPC_WEAK_FUNC(sub_82FD2C94);
PPC_FUNC_IMPL(__imp__sub_82FD2C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD2C98"))) PPC_WEAK_FUNC(sub_82FD2C98);
PPC_FUNC_IMPL(__imp__sub_82FD2C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,17360
	ctx.r9.s64 = ctx.r11.s64 + 17360;
	// addi r8,r10,17376
	ctx.r8.s64 = ctx.r10.s64 + 17376;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v7,r0,r8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v60,v3,v63,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v3,v63,v7
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v62,r0,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v58,v4,v63,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v57,v4,v63,v7
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v56,r0,r5
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v55,v1,v63,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v54,v60,31
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v53,v1,v63,v7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v52,v59,31
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v51,v2,v63,v0
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v50,v58,31
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v49,v2,v63,v7
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v48,v57,31
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v47,v55,31
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r3,1024
	ctx.r11.s64 = ctx.r3.s64 + 1024;
	// vcsxwfp128 v46,v53,31
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v45,v51,31
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v44,v49,31
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vmulfp128 v13,v13,v62
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v12,v56,v61
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v0,v54,v62
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v11,v52,v61
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v10,v50,v54
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v54.f32)));
	// vsubfp128 v9,v48,v52
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v52.f32)));
	// vmulfp128 v8,v47,v62
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v7,v46,v61
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v6,v45,v47
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v47.f32)));
	// vsubfp128 v5,v44,v46
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v46.f32)));
	// vmaddfp v4,v10,v13,v0
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v3,v9,v12,v11
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v2,v6,v13,v8
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v1,v5,v12,v7
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v4,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v3,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD2D60"))) PPC_WEAK_FUNC(sub_82FD2D60);
PPC_FUNC_IMPL(__imp__sub_82FD2D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// vor128 v60,v7,v7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// addi r9,r11,17360
	ctx.r9.s64 = ctx.r11.s64 + 17360;
	// addi r8,r10,17376
	ctx.r8.s64 = ctx.r10.s64 + 17376;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v7,r0,r8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v59,v60,v63,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v58,v60,v63,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v62,r0,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v57,v8,v63,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v56,v8,v63,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v55,r0,r5
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v54,v5,v63,v0
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v53,v59,31
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v52,v5,v63,v7
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v51,v58,31
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v50,v6,v63,v0
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v49,v57,31
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v48,v6,v63,v7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v47,v56,31
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v46,v3,v63,v0
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v45,v54,31
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v42,v4,v63,v0
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v43,v52,31
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v41,v50,31
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v44,v3,v63,v7
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v39,v48,31
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v40,v4,v63,v7
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v38,v46,31
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v37,v1,v63,v0
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v34,v42,31
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v35,v1,v63,v7
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v33,v2,v63,v0
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v13,v13,v62
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v62.f32)));
	// vperm128 v63,v2,v63,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmulfp128 v12,v55,v61
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v0,v53,v62
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32)));
	// addi r10,r3,3072
	ctx.r10.s64 = ctx.r3.s64 + 3072;
	// vmulfp128 v11,v51,v61
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v61.f32)));
	// addi r9,r3,2048
	ctx.r9.s64 = ctx.r3.s64 + 2048;
	// vsubfp128 v10,v49,v53
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v53.f32)));
	// addi r8,r3,1024
	ctx.r8.s64 = ctx.r3.s64 + 1024;
	// vsubfp128 v9,v47,v51
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v51.f32)));
	// vmulfp128 v8,v45,v62
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v6,v43,v61
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v7,v41,v45
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v45.f32)));
	// vsubfp128 v5,v39,v43
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v43.f32)));
	// vcsxwfp128 v36,v44,31
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v60,v37,31
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v59,v35,31
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v35.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v32,v40,31
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v58,v33,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v57,v63,31
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vmulfp128 v4,v38,v62
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v3,v34,v38
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v38.f32)));
	// vmaddfp v31,v10,v13,v0
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v30,v9,v12,v11
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v29,v7,v13,v8
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v28,v5,v12,v6
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v2,v36,v61
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v27,v60,v62
	_mm_store_ps(ctx.v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v26,v59,v61
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v1,v32,v36
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v36.f32)));
	// vsubfp128 v25,v58,v60
	_mm_store_ps(ctx.v25.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v60.f32)));
	// vsubfp128 v24,v57,v59
	_mm_store_ps(ctx.v24.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v59.f32)));
	// vmaddfp v23,v3,v13,v4
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v31,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v30,r10,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v28,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v22,v1,v12,v2
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v21,v25,v13,v27
	_mm_store_ps(ctx.v21.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v27.f32)));
	// vmaddfp v20,v24,v12,v26
	_mm_store_ps(ctx.v20.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v26.f32)));
	// stvx128 v23,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v22,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v20,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD2EB4"))) PPC_WEAK_FUNC(sub_82FD2EB4);
PPC_FUNC_IMPL(__imp__sub_82FD2EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD2EB8"))) PPC_WEAK_FUNC(sub_82FD2EB8);
PPC_FUNC_IMPL(__imp__sub_82FD2EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// vor128 v60,v7,v7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// addi r9,r11,17360
	ctx.r9.s64 = ctx.r11.s64 + 17360;
	// addi r8,r10,17376
	ctx.r8.s64 = ctx.r10.s64 + 17376;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v7,r0,r8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v59,v11,v63,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v58,v11,v63,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v61,r0,r6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v57,v12,v63,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v55,r0,r5
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v56,v12,v63,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v62,r0,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v54,v9,v63,v0
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v53,v59,31
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v52,v9,v63,v7
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v51,v58,31
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v50,v10,v63,v0
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v49,v57,31
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v48,v10,v63,v7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v47,v56,31
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v46,v60,v63,v0
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v45,v54,31
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v44,v60,v63,v7
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v43,v52,31
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v42,v8,v63,v0
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v41,v50,31
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v40,v8,v63,v7
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v39,v48,31
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v38,v46,31
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v37,v5,v63,v0
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v36,v44,31
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v35,v5,v63,v7
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v34,v42,31
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v33,v6,v63,v0
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v32,v40,31
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v60,v6,v63,v7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmulfp128 v11,v55,v61
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v61.f32)));
	// vperm128 v59,v3,v63,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v58,v3,v63,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmulfp128 v13,v13,v62
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v62.f32)));
	// vcsxwfp128 v57,v37,31
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r10,r3,5120
	ctx.r10.s64 = ctx.r3.s64 + 5120;
	// vcsxwfp128 v56,v35,31
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v35.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r9,r3,4096
	ctx.r9.s64 = ctx.r3.s64 + 4096;
	// vmulfp128 v12,v53,v62
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32)));
	// addi r8,r3,3072
	ctx.r8.s64 = ctx.r3.s64 + 3072;
	// vsubfp128 v10,v49,v53
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v53.f32)));
	// addi r7,r3,2048
	ctx.r7.s64 = ctx.r3.s64 + 2048;
	// vmulfp128 v9,v51,v61
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v61.f32)));
	// addi r6,r3,1024
	ctx.r6.s64 = ctx.r3.s64 + 1024;
	// vsubfp128 v8,v47,v51
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v51.f32)));
	// vperm128 v53,v4,v63,v0
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v55,v33,31
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v54,v60,31
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vmulfp128 v6,v45,v62
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v5,v41,v45
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v45.f32)));
	// vmulfp128 v3,v43,v61
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v31,v39,v43
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v43.f32)));
	// vmulfp128 v30,v38,v62
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v29,v34,v38
	_mm_store_ps(ctx.v29.f32, _mm_sub_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v38.f32)));
	// vmulfp128 v28,v36,v61
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v27,v32,v36
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v36.f32)));
	// vcsxwfp128 v52,v59,31
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vmulfp128 v26,v57,v62
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v25,v55,v57
	_mm_store_ps(ctx.v25.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v24,v56,v61
	_mm_store_ps(ctx.v24.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v23,v54,v56
	_mm_store_ps(ctx.v23.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v56.f32)));
	// vmaddfp v22,v10,v13,v12
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v21,v8,v11,v9
	_mm_store_ps(ctx.v21.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v20,v5,v13,v6
	_mm_store_ps(ctx.v20.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v19,v31,v11,v3
	_mm_store_ps(ctx.v19.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v18,v29,v13,v30
	_mm_store_ps(ctx.v18.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v30.f32)));
	// vcsxwfp128 v51,v58,31
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vmaddfp v17,v27,v11,v28
	_mm_store_ps(ctx.v17.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v28.f32)));
	// vperm128 v50,v4,v63,v7
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v49,v53,31
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vperm128 v46,v2,v63,v0
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v16,v52,v62
	_mm_store_ps(ctx.v16.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v62.f32)));
	// vperm128 v45,v2,v63,v7
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmulfp128 v15,v51,v61
	_mm_store_ps(ctx.v15.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v61.f32)));
	// vperm128 v48,v1,v63,v0
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmaddfp v14,v25,v13,v26
	_mm_store_ps(ctx.v14.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v26.f32)));
	// vperm128 v47,v1,v63,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v44,v50,31
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v41,v46,31
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// stvx128 v22,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v40,v45,31
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// stvx128 v21,r10,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v43,v48,31
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// stvx128 v20,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v42,v47,31
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// stvx128 v19,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v23,v11,v24
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v24.f32)));
	// stvx128 v18,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v17,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v12,v49,v52
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v52.f32)));
	// stvx128 v14,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v10,v44,v51
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v51.f32)));
	// vmulfp128 v9,v43,v62
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v8,v42,v61
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v7,v41,v43
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v43.f32)));
	// stvx128 v0,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v6,v40,v42
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v42.f32)));
	// vmaddfp v5,v12,v13,v16
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v16.f32)));
	// vmaddfp v4,v10,v11,v15
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v15.f32)));
	// vmaddfp v3,v7,v13,v9
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v2,v6,v11,v8
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v5,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v4,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD3094"))) PPC_WEAK_FUNC(sub_82FD3094);
PPC_FUNC_IMPL(__imp__sub_82FD3094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD3098"))) PPC_WEAK_FUNC(sub_82FD3098);
PPC_FUNC_IMPL(__imp__sub_82FD3098) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fd30c8
	if (ctx.cr6.lt) goto loc_82FD30C8;
loc_82FD30C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fd323c
	goto loc_82FD323C;
loc_82FD30C8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fd30c0
	if (!ctx.cr6.lt) goto loc_82FD30C0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fd3224
	if (ctx.cr6.eq) goto loc_82FD3224;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fd321c
	if (ctx.cr6.eq) goto loc_82FD321C;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,44(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// beq cr6,0x82fd3188
	if (ctx.cr6.eq) goto loc_82FD3188;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fd3158
	if (!ctx.cr6.eq) goto loc_82FD3158;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// b 0x82fd319c
	goto loc_82FD319C;
loc_82FD3158:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fd3188
	if (ctx.cr6.eq) goto loc_82FD3188;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fd3188
	if (!ctx.cr6.eq) goto loc_82FD3188;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// b 0x82fd319c
	goto loc_82FD319C;
loc_82FD3188:
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
loc_82FD319C:
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// lbz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bgt cr6,0x82fd31ec
	if (ctx.cr6.gt) goto loc_82FD31EC;
	// lis r12,-32003
	ctx.r12.s64 = -2097348608;
	// addi r12,r12,12744
	ctx.r12.s64 = ctx.r12.s64 + 12744;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82FD31E0;
	case 1:
		goto loc_82FD31E0;
	case 2:
		goto loc_82FD31EC;
	case 3:
		goto loc_82FD31E0;
	case 4:
		goto loc_82FD31EC;
	case 5:
		goto loc_82FD31E0;
	default:
		__builtin_unreachable();
	}
	// lwz r23,12768(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12768);
	// lwz r23,12768(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12768);
	// lwz r23,12780(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12780);
	// lwz r23,12768(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12768);
	// lwz r23,12780(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12780);
	// lwz r23,12768(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12768);
loc_82FD31E0:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// b 0x82fd31f0
	goto loc_82FD31F0;
loc_82FD31EC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FD31F0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r7,16728
	ctx.r6.s64 = ctx.r7.s64 + 16728;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
loc_82FD321C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82FD3224:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FD3234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r3,r30,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_82FD323C:
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

__attribute__((alias("__imp__sub_82FD3254"))) PPC_WEAK_FUNC(sub_82FD3254);
PPC_FUNC_IMPL(__imp__sub_82FD3254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD3258"))) PPC_WEAK_FUNC(sub_82FD3258);
PPC_FUNC_IMPL(__imp__sub_82FD3258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v59,v61,v60
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// vsldoi128 v63,v59,v2,8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
loc_82FD3290:
	// lvlx128 v58,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lvlx128 v56,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vmsum3fp128 v55,v57,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// stvewx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r9,r9,1024
	ctx.r9.s64 = ctx.r9.s64 + 1024;
	// bne 0x82fd3290
	if (!ctx.cr0.eq) goto loc_82FD3290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD32BC"))) PPC_WEAK_FUNC(sub_82FD32BC);
PPC_FUNC_IMPL(__imp__sub_82FD32BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD32C0"))) PPC_WEAK_FUNC(sub_82FD32C0);
PPC_FUNC_IMPL(__imp__sub_82FD32C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mullw r8,r11,r6
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// mullw r7,r10,r6
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v59,v61,v60
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vsldoi128 v63,v59,v2,8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
loc_82FD330C:
	// lvlx128 v58,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lvlx128 v56,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vmsum3fp128 v55,v57,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// stvewx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r9,r9,1024
	ctx.r9.s64 = ctx.r9.s64 + 1024;
	// bne 0x82fd330c
	if (!ctx.cr0.eq) goto loc_82FD330C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD333C"))) PPC_WEAK_FUNC(sub_82FD333C);
PPC_FUNC_IMPL(__imp__sub_82FD333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD3340"))) PPC_WEAK_FUNC(sub_82FD3340);
PPC_FUNC_IMPL(__imp__sub_82FD3340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// lvlx128 v61,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v62,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vsubfp128 v59,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vrlimi128 v60,v61,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v61.f32), 228), 8));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vsldoi128 v57,v2,v59,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 12));
	// vmulfp128 v56,v58,v57
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vsldoi128 v55,v56,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v54,v60,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD337C"))) PPC_WEAK_FUNC(sub_82FD337C);
PPC_FUNC_IMPL(__imp__sub_82FD337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD3380"))) PPC_WEAK_FUNC(sub_82FD3380);
PPC_FUNC_IMPL(__imp__sub_82FD3380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r7,r9,r6
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// lvlx128 v59,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v59,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vmulfp128 v57,v61,v60
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v56,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v58,v56,8,0
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vsldoi128 v55,v57,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v54,v58,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD33D4"))) PPC_WEAK_FUNC(sub_82FD33D4);
PPC_FUNC_IMPL(__imp__sub_82FD33D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD33D8"))) PPC_WEAK_FUNC(sub_82FD33D8);
PPC_FUNC_IMPL(__imp__sub_82FD33D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// li r10,1024
	ctx.r10.s64 = 1024;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvlx128 v59,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vrlimi128 v60,v59,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 8));
	// vsldoi128 v57,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v56,v58,v57
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vsldoi128 v55,v56,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v54,v60,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v53,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v52,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v55
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v50,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD3434"))) PPC_WEAK_FUNC(sub_82FD3434);
PPC_FUNC_IMPL(__imp__sub_82FD3434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD3438"))) PPC_WEAK_FUNC(sub_82FD3438);
PPC_FUNC_IMPL(__imp__sub_82FD3438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// li r9,4
	ctx.r9.s64 = 4;
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r7,r8,r6
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v59,v61,v60
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvlx128 v58,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lvlx128 v56,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v55,v59,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// vmsum3fp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v53,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v52,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v55
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v50,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD34B4"))) PPC_WEAK_FUNC(sub_82FD34B4);
PPC_FUNC_IMPL(__imp__sub_82FD34B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD34B8"))) PPC_WEAK_FUNC(sub_82FD34B8);
PPC_FUNC_IMPL(__imp__sub_82FD34B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// li r9,12
	ctx.r9.s64 = 12;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// li r8,3072
	ctx.r8.s64 = 3072;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r7,2048
	ctx.r7.s64 = 2048;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r5,r9
	temp.u32 = ctx.r5.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvlx128 v59,r4,r9
	temp.u32 = ctx.r4.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,1024
	ctx.r6.s64 = 1024;
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// vrlimi128 v60,v59,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 8));
	// vsldoi128 v57,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v56,v58,v57
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vsldoi128 v55,v56,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v54,v60,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v53,r4,r10
	temp.u32 = ctx.r4.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v52,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v55
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v50,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v49,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v47,v48,0
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), 0xFF));
	// vrlimi128 v47,v49,8,0
	_mm_store_ps(ctx.v47.f32, _mm_blend_ps(_mm_load_ps(ctx.v47.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 228), 8));
	// vmsum3fp128 v46,v47,v55
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v46,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v45,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v44,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v43,v44,0
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), 0xFF));
	// vrlimi128 v43,v45,8,0
	_mm_store_ps(ctx.v43.f32, _mm_blend_ps(_mm_load_ps(ctx.v43.f32), _mm_permute_ps(_mm_load_ps(ctx.v45.f32), 228), 8));
	// vmsum3fp128 v42,v43,v55
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v42,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD3554"))) PPC_WEAK_FUNC(sub_82FD3554);
PPC_FUNC_IMPL(__imp__sub_82FD3554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD3558"))) PPC_WEAK_FUNC(sub_82FD3558);
PPC_FUNC_IMPL(__imp__sub_82FD3558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// li r8,3072
	ctx.r8.s64 = 3072;
	// mullw r11,r10,r6
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// mullw r10,r7,r6
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v59,v61,v60
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v58,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v56,r5,r4
	temp.u32 = ctx.r5.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,2048
	ctx.r5.s64 = 2048;
	// vsldoi128 v55,v59,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// li r9,4
	ctx.r9.s64 = 4;
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,1024
	ctx.r31.s64 = 1024;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vmsum3fp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v53,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v52,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v55
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v50,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v49,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v47,v48,0
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), 0xFF));
	// vrlimi128 v47,v49,8,0
	_mm_store_ps(ctx.v47.f32, _mm_blend_ps(_mm_load_ps(ctx.v47.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 228), 8));
	// vmsum3fp128 v46,v47,v55
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v46,r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v45,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v44,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v43,v44,0
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), 0xFF));
	// vrlimi128 v43,v45,8,0
	_mm_store_ps(ctx.v43.f32, _mm_blend_ps(_mm_load_ps(ctx.v43.f32), _mm_permute_ps(_mm_load_ps(ctx.v45.f32), 228), 8));
	// vmsum3fp128 v42,v43,v55
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v42,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FD3634"))) PPC_WEAK_FUNC(sub_82FD3634);
PPC_FUNC_IMPL(__imp__sub_82FD3634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD3638"))) PPC_WEAK_FUNC(sub_82FD3638);
PPC_FUNC_IMPL(__imp__sub_82FD3638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FD3640;
	__savegprlr_29(ctx, base);
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// li r7,20
	ctx.r7.s64 = 20;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// li r6,5120
	ctx.r6.s64 = 5120;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r31,4096
	ctx.r31.s64 = 4096;
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// li r9,12
	ctx.r9.s64 = 12;
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx128 v61,r5,r7
	temp.u32 = ctx.r5.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvlx128 v59,r4,r7
	temp.u32 = ctx.r4.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r7,3072
	ctx.r7.s64 = 3072;
	// li r10,8
	ctx.r10.s64 = 8;
	// vcuxwfp128 v58,v13,31
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// li r30,2048
	ctx.r30.s64 = 2048;
	// vrlimi128 v60,v59,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 8));
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1024
	ctx.r29.s64 = 1024;
	// vsldoi128 v57,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v56,v58,v57
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vsldoi128 v55,v56,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// vmsum3fp128 v54,v60,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v54,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v53,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r5,r8
	temp.u32 = ctx.r5.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v52,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v55
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v50,r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v49,r4,r9
	temp.u32 = ctx.r4.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r5,r9
	temp.u32 = ctx.r5.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v47,v48,0
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), 0xFF));
	// vrlimi128 v47,v49,8,0
	_mm_store_ps(ctx.v47.f32, _mm_blend_ps(_mm_load_ps(ctx.v47.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 228), 8));
	// vmsum3fp128 v46,v47,v55
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v46,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v45,r4,r10
	temp.u32 = ctx.r4.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v44,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v43,v44,0
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), 0xFF));
	// vrlimi128 v43,v45,8,0
	_mm_store_ps(ctx.v43.f32, _mm_blend_ps(_mm_load_ps(ctx.v43.f32), _mm_permute_ps(_mm_load_ps(ctx.v45.f32), 228), 8));
	// vmsum3fp128 v42,v43,v55
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v42,r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v41,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v40,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v39,v40,0
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), 0xFF));
	// vrlimi128 v39,v41,8,0
	_mm_store_ps(ctx.v39.f32, _mm_blend_ps(_mm_load_ps(ctx.v39.f32), _mm_permute_ps(_mm_load_ps(ctx.v41.f32), 228), 8));
	// vmsum3fp128 v38,v39,v55
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v38,r3,r29
	ea = (ctx.r3.u32 + ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v37,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v36,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v35,v36,0
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), 0xFF));
	// vrlimi128 v35,v37,8,0
	_mm_store_ps(ctx.v35.f32, _mm_blend_ps(_mm_load_ps(ctx.v35.f32), _mm_permute_ps(_mm_load_ps(ctx.v37.f32), 228), 8));
	// vmsum3fp128 v34,v35,v55
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v34,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FD371C"))) PPC_WEAK_FUNC(sub_82FD371C);
PPC_FUNC_IMPL(__imp__sub_82FD371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FD3720"))) PPC_WEAK_FUNC(sub_82FD3720);
PPC_FUNC_IMPL(__imp__sub_82FD3720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82FD3728;
	__savegprlr_25(ctx, base);
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// li r8,5120
	ctx.r8.s64 = 5120;
	// mullw r11,r10,r6
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// vsubfp128 v62,v63,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v61,v13,31
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x30000000)))));
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// mullw r10,r7,r6
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// vsldoi128 v60,v2,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmulfp128 v59,v61,v60
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v58,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v56,r5,r4
	temp.u32 = ctx.r5.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,4096
	ctx.r5.s64 = 4096;
	// vsldoi128 v55,v59,v2,8
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v2.u8), 8));
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// vrlimi128 v57,v56,8,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 8));
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,3072
	ctx.r28.s64 = 3072;
	// vmsum3fp128 v54,v57,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,2048
	ctx.r26.s64 = 2048;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,1024
	ctx.r25.s64 = 1024;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stvewx128 v54,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v53,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v52,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
	// vrlimi128 v51,v53,8,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 8));
	// vmsum3fp128 v50,v51,v55
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v50,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v49,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r29,r4
	temp.u32 = ctx.r29.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v47,v48,0
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), 0xFF));
	// vrlimi128 v47,v49,8,0
	_mm_store_ps(ctx.v47.f32, _mm_blend_ps(_mm_load_ps(ctx.v47.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 228), 8));
	// vmsum3fp128 v46,v47,v55
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v46,r3,r28
	ea = (ctx.r3.u32 + ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v45,r30,r4
	temp.u32 = ctx.r30.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v44,r27,r4
	temp.u32 = ctx.r27.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v43,v44,0
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), 0xFF));
	// vrlimi128 v43,v45,8,0
	_mm_store_ps(ctx.v43.f32, _mm_blend_ps(_mm_load_ps(ctx.v43.f32), _mm_permute_ps(_mm_load_ps(ctx.v45.f32), 228), 8));
	// vmsum3fp128 v42,v43,v55
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v42,r3,r26
	ea = (ctx.r3.u32 + ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v41,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v40,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v39,v40,0
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), 0xFF));
	// vrlimi128 v39,v41,8,0
	_mm_store_ps(ctx.v39.f32, _mm_blend_ps(_mm_load_ps(ctx.v39.f32), _mm_permute_ps(_mm_load_ps(ctx.v41.f32), 228), 8));
	// vmsum3fp128 v38,v39,v55
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v38,r3,r25
	ea = (ctx.r3.u32 + ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v37,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v36,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v35,v36,0
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), 0xFF));
	// vrlimi128 v35,v37,8,0
	_mm_store_ps(ctx.v35.f32, _mm_blend_ps(_mm_load_ps(ctx.v35.f32), _mm_permute_ps(_mm_load_ps(ctx.v37.f32), 228), 8));
	// vmsum3fp128 v34,v35,v55
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v55.f32), 0xEF));
	// stvewx128 v34,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FD3854"))) PPC_WEAK_FUNC(sub_82FD3854);
PPC_FUNC_IMPL(__imp__sub_82FD3854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

