#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E77F84"))) PPC_WEAK_FUNC(sub_82E77F84);
PPC_FUNC_IMPL(__imp__sub_82E77F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E77F88"))) PPC_WEAK_FUNC(sub_82E77F88);
PPC_FUNC_IMPL(__imp__sub_82E77F88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82e77fac
	if (ctx.cr6.eq) goto loc_82E77FAC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x82e77fac
	if (ctx.cr6.eq) goto loc_82E77FAC;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// beq cr6,0x82e77fac
	if (ctx.cr6.eq) goto loc_82E77FAC;
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82E77FAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77FB4"))) PPC_WEAK_FUNC(sub_82E77FB4);
PPC_FUNC_IMPL(__imp__sub_82E77FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E77FB8"))) PPC_WEAK_FUNC(sub_82E77FB8);
PPC_FUNC_IMPL(__imp__sub_82E77FB8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x82e77fd4
	if (ctx.cr6.eq) goto loc_82E77FD4;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x82e77fd4
	if (ctx.cr6.eq) goto loc_82E77FD4;
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82E77FD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77FDC"))) PPC_WEAK_FUNC(sub_82E77FDC);
PPC_FUNC_IMPL(__imp__sub_82E77FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E77FE0"))) PPC_WEAK_FUNC(sub_82E77FE0);
PPC_FUNC_IMPL(__imp__sub_82E77FE0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10943(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10943);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e78010
	if (!ctx.cr0.eq) goto loc_82E78010;
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// rlwinm r11,r11,0,12,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e78010
	if (!ctx.cr6.eq) goto loc_82E78010;
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r12,-257
	ctx.r12.s64 = -257;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x82e78018
	goto loc_82E78018;
loc_82E78010:
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_82E78018:
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78020"))) PPC_WEAK_FUNC(sub_82E78020);
PPC_FUNC_IMPL(__imp__sub_82E78020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e780f8
	if (!ctx.cr6.eq) goto loc_82E780F8;
	// lbz r11,10940(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10940);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e780f8
	if (!ctx.cr0.eq) goto loc_82E780F8;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e780f8
	if (!ctx.cr0.eq) goto loc_82E780F8;
	// lbz r10,12187(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12187);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82e780f8
	if (!ctx.cr0.eq) goto loc_82E780F8;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e7805c
	if (ctx.cr0.eq) goto loc_82E7805C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e780ec
	goto loc_82E780EC;
loc_82E7805C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e780e4
	if (ctx.cr0.eq) goto loc_82E780E4;
	// lwz r11,12440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12440);
	// lwz r10,12728(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12728);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e7807c
	if (ctx.cr6.eq) goto loc_82E7807C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e780e4
	if (!ctx.cr6.eq) goto loc_82E780E4;
loc_82E7807C:
	// lwz r11,12444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12444);
	// lwz r10,12732(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12732);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e78094
	if (ctx.cr6.eq) goto loc_82E78094;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e780e4
	if (!ctx.cr6.eq) goto loc_82E780E4;
loc_82E78094:
	// lwz r11,12448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12448);
	// lwz r10,12736(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12736);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e780ac
	if (ctx.cr6.eq) goto loc_82E780AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e780e4
	if (!ctx.cr6.eq) goto loc_82E780E4;
loc_82E780AC:
	// lwz r11,12452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12452);
	// lwz r10,12740(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12740);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e780c4
	if (ctx.cr6.eq) goto loc_82E780C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e780e4
	if (!ctx.cr6.eq) goto loc_82E780E4;
loc_82E780C4:
	// lwz r11,12456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12456);
	// lwz r10,12744(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12744);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e780dc
	if (ctx.cr6.eq) goto loc_82E780DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e780e4
	if (!ctx.cr6.eq) goto loc_82E780E4;
loc_82E780DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e780e8
	goto loc_82E780E8;
loc_82E780E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E780E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82E780EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82e780fc
	if (!ctx.cr0.eq) goto loc_82E780FC;
loc_82E780F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E780FC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78104"))) PPC_WEAK_FUNC(sub_82E78104);
PPC_FUNC_IMPL(__imp__sub_82E78104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78108"))) PPC_WEAK_FUNC(sub_82E78108);
PPC_FUNC_IMPL(__imp__sub_82E78108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78124"))) PPC_WEAK_FUNC(sub_82E78124);
PPC_FUNC_IMPL(__imp__sub_82E78124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78128"))) PPC_WEAK_FUNC(sub_82E78128);
PPC_FUNC_IMPL(__imp__sub_82E78128) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r11,r3,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e78138
	if (!ctx.cr0.eq) goto loc_82E78138;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E78138:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82e7814c
	if (!ctx.cr6.eq) goto loc_82E7814C;
	// ori r3,r3,32769
	ctx.r3.u64 = ctx.r3.u64 | 32769;
	// blr 
	return;
loc_82E7814C:
	// ori r3,r3,49155
	ctx.r3.u64 = ctx.r3.u64 | 49155;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78154"))) PPC_WEAK_FUNC(sub_82E78154);
PPC_FUNC_IMPL(__imp__sub_82E78154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78158"))) PPC_WEAK_FUNC(sub_82E78158);
PPC_FUNC_IMPL(__imp__sub_82E78158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7817C"))) PPC_WEAK_FUNC(sub_82E7817C);
PPC_FUNC_IMPL(__imp__sub_82E7817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78180"))) PPC_WEAK_FUNC(sub_82E78180);
PPC_FUNC_IMPL(__imp__sub_82E78180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E781A4"))) PPC_WEAK_FUNC(sub_82E781A4);
PPC_FUNC_IMPL(__imp__sub_82E781A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E781A8"))) PPC_WEAK_FUNC(sub_82E781A8);
PPC_FUNC_IMPL(__imp__sub_82E781A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E781CC"))) PPC_WEAK_FUNC(sub_82E781CC);
PPC_FUNC_IMPL(__imp__sub_82E781CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E781D0"))) PPC_WEAK_FUNC(sub_82E781D0);
PPC_FUNC_IMPL(__imp__sub_82E781D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E781F4"))) PPC_WEAK_FUNC(sub_82E781F4);
PPC_FUNC_IMPL(__imp__sub_82E781F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E781F8"))) PPC_WEAK_FUNC(sub_82E781F8);
PPC_FUNC_IMPL(__imp__sub_82E781F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82E78200;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e78230
	if (!ctx.cr6.gt) goto loc_82E78230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E78230;
	sub_82E898A8(ctx, base);
loc_82E78230:
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e78244
	if (ctx.cr0.eq) goto loc_82E78244;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e782d4
	goto loc_82E782D4;
loc_82E78244:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e782cc
	if (ctx.cr0.eq) goto loc_82E782CC;
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// lwz r10,12728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12728);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e78264
	if (ctx.cr6.eq) goto loc_82E78264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e782cc
	if (!ctx.cr6.eq) goto loc_82E782CC;
loc_82E78264:
	// lwz r11,12444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12732);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e7827c
	if (ctx.cr6.eq) goto loc_82E7827C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e782cc
	if (!ctx.cr6.eq) goto loc_82E782CC;
loc_82E7827C:
	// lwz r11,12448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12736);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e78294
	if (ctx.cr6.eq) goto loc_82E78294;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e782cc
	if (!ctx.cr6.eq) goto loc_82E782CC;
loc_82E78294:
	// lwz r11,12452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12740);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e782ac
	if (ctx.cr6.eq) goto loc_82E782AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e782cc
	if (!ctx.cr6.eq) goto loc_82E782CC;
loc_82E782AC:
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12744);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e782c4
	if (ctx.cr6.eq) goto loc_82E782C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e782cc
	if (!ctx.cr6.eq) goto loc_82E782CC;
loc_82E782C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e782d0
	goto loc_82E782D0;
loc_82E782CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E782D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82E782D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x82e78318
	if (!ctx.cr0.eq) goto loc_82E78318;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// rlwinm r9,r24,16,2,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0x3FFF0000;
	// ori r11,r11,8320
	ctx.r11.u64 = ctx.r11.u64 | 8320;
	// rlwinm r8,r22,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0x3FFF0000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r25,18
	ctx.r11.u64 = ctx.r25.u32 & 0x3FFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r9,r23,18
	ctx.r9.u64 = ctx.r23.u32 & 0x3FFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// b 0x82e784dc
	goto loc_82E784DC;
loc_82E78318:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r11,r11,24832
	ctx.r11.u64 = ctx.r11.u64 | 24832;
	// li r27,0
	ctx.r27.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// ori r26,r9,24576
	ctx.r26.u64 = ctx.r9.u64 | 24576;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,12748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12748);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e7845c
	if (!ctx.cr6.gt) goto loc_82E7845C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,12756
	ctx.r30.s64 = ctx.r31.s64 + 12756;
	// addi r28,r31,12996
	ctx.r28.s64 = ctx.r31.s64 + 12996;
loc_82E78350:
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r6,-4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82e7836c
	if (ctx.cr6.gt) goto loc_82E7836C;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_82E7836C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82e78380
	if (ctx.cr6.gt) goto loc_82E78380;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82E78380:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r23,r9
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82e78390
	if (!ctx.cr6.lt) goto loc_82E78390;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82E78390:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e783a0
	if (!ctx.cr6.lt) goto loc_82E783A0;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82E783A0:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82e783b0
	if (!ctx.cr6.lt) goto loc_82E783B0;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e783c0
	if (ctx.cr6.lt) goto loc_82E783C0;
loc_82E783B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82E783C0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// lis r4,-16381
	ctx.r4.s64 = -1073545216;
	// slw r3,r3,r29
	ctx.r3.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// ori r4,r4,11521
	ctx.r4.u64 = ctx.r4.u64 | 11521;
	// lis r21,4
	ctx.r21.s64 = 262144;
	// neg r6,r6
	ctx.r6.s64 = -ctx.r6.s64;
	// neg r5,r5
	ctx.r5.s64 = -ctx.r5.s64;
	// ori r21,r21,128
	ctx.r21.u64 = ctx.r21.u64 | 128;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// rlwinm r5,r5,16,1,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x7FFF0000;
	// clrlwi r6,r6,17
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r8,r8,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3FFF0000;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// clrlwi r7,r7,18
	ctx.r7.u64 = ctx.r7.u32 & 0x3FFF;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r21.u32);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,16,2,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3FFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r9,r9,18
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x82e78440
	if (!ctx.cr6.gt) goto loc_82E78440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E7843C;
	sub_82E898A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E78440:
	// lwz r10,12748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12748);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e78350
	if (ctx.cr6.lt) goto loc_82E78350;
loc_82E7845C:
	// lbz r10,10943(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10943);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e784bc
	if (ctx.cr0.eq) goto loc_82E784BC;
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e784bc
	if (ctx.cr0.eq) goto loc_82E784BC;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r8,-16382
	ctx.r8.s64 = -1073610752;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r10,r8,11521
	ctx.r10.u64 = ctx.r8.u64 | 11521;
	// ori r8,r7,129
	ctx.r8.u64 = ctx.r7.u64 | 129;
	// rlwinm r7,r24,16,2,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0x3FFF0000;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// clrlwi r6,r25,18
	ctx.r6.u64 = ctx.r25.u32 & 0x3FFF;
	// rlwinm r5,r22,16,2,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0x3FFF0000;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// clrlwi r9,r23,18
	ctx.r9.u64 = ctx.r23.u32 & 0x3FFF;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_82E784BC:
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,12708(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12708);
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12712);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_82E784DC:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E784E8"))) PPC_WEAK_FUNC(sub_82E784E8);
PPC_FUNC_IMPL(__imp__sub_82E784E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78504"))) PPC_WEAK_FUNC(sub_82E78504);
PPC_FUNC_IMPL(__imp__sub_82E78504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78508"))) PPC_WEAK_FUNC(sub_82E78508);
PPC_FUNC_IMPL(__imp__sub_82E78508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78514"))) PPC_WEAK_FUNC(sub_82E78514);
PPC_FUNC_IMPL(__imp__sub_82E78514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78518"))) PPC_WEAK_FUNC(sub_82E78518);
PPC_FUNC_IMPL(__imp__sub_82E78518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,3,21,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x7F8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF807);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78534"))) PPC_WEAK_FUNC(sub_82E78534);
PPC_FUNC_IMPL(__imp__sub_82E78534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78538"))) PPC_WEAK_FUNC(sub_82E78538);
PPC_FUNC_IMPL(__imp__sub_82E78538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,29,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78544"))) PPC_WEAK_FUNC(sub_82E78544);
PPC_FUNC_IMPL(__imp__sub_82E78544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78548"))) PPC_WEAK_FUNC(sub_82E78548);
PPC_FUNC_IMPL(__imp__sub_82E78548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7856C"))) PPC_WEAK_FUNC(sub_82E7856C);
PPC_FUNC_IMPL(__imp__sub_82E7856C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78570"))) PPC_WEAK_FUNC(sub_82E78570);
PPC_FUNC_IMPL(__imp__sub_82E78570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7857C"))) PPC_WEAK_FUNC(sub_82E7857C);
PPC_FUNC_IMPL(__imp__sub_82E7857C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78580"))) PPC_WEAK_FUNC(sub_82E78580);
PPC_FUNC_IMPL(__imp__sub_82E78580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82e785ac
	if (!ctx.cr6.eq) goto loc_82E785AC;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82E785AC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82e785bc
	if (!ctx.cr6.eq) goto loc_82E785BC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82E785BC:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E785F4"))) PPC_WEAK_FUNC(sub_82E785F4);
PPC_FUNC_IMPL(__imp__sub_82E785F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E785F8"))) PPC_WEAK_FUNC(sub_82E785F8);
PPC_FUNC_IMPL(__imp__sub_82E785F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, ctx.r11.u32);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x82e78630
	if (!ctx.cr0.eq) goto loc_82E78630;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82E78630:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82e78640
	if (!ctx.cr6.eq) goto loc_82E78640;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82E78640:
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78678"))) PPC_WEAK_FUNC(sub_82E78678);
PPC_FUNC_IMPL(__imp__sub_82E78678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78684"))) PPC_WEAK_FUNC(sub_82E78684);
PPC_FUNC_IMPL(__imp__sub_82E78684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78688"))) PPC_WEAK_FUNC(sub_82E78688);
PPC_FUNC_IMPL(__imp__sub_82E78688) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x82e786cc
	if (!ctx.cr0.eq) goto loc_82E786CC;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82E786CC:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78704"))) PPC_WEAK_FUNC(sub_82E78704);
PPC_FUNC_IMPL(__imp__sub_82E78704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78708"))) PPC_WEAK_FUNC(sub_82E78708);
PPC_FUNC_IMPL(__imp__sub_82E78708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,27,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78714"))) PPC_WEAK_FUNC(sub_82E78714);
PPC_FUNC_IMPL(__imp__sub_82E78714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78718"))) PPC_WEAK_FUNC(sub_82E78718);
PPC_FUNC_IMPL(__imp__sub_82E78718) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x82e7875c
	if (!ctx.cr0.eq) goto loc_82E7875C;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82E7875C:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78794"))) PPC_WEAK_FUNC(sub_82E78794);
PPC_FUNC_IMPL(__imp__sub_82E78794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78798"))) PPC_WEAK_FUNC(sub_82E78798);
PPC_FUNC_IMPL(__imp__sub_82E78798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E787A4"))) PPC_WEAK_FUNC(sub_82E787A4);
PPC_FUNC_IMPL(__imp__sub_82E787A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E787A8"))) PPC_WEAK_FUNC(sub_82E787A8);
PPC_FUNC_IMPL(__imp__sub_82E787A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,8,19,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x1F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE0FF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x82e787ec
	if (!ctx.cr0.eq) goto loc_82E787EC;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82E787EC:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78824"))) PPC_WEAK_FUNC(sub_82E78824);
PPC_FUNC_IMPL(__imp__sub_82E78824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78828"))) PPC_WEAK_FUNC(sub_82E78828);
PPC_FUNC_IMPL(__imp__sub_82E78828) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78834"))) PPC_WEAK_FUNC(sub_82E78834);
PPC_FUNC_IMPL(__imp__sub_82E78834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78838"))) PPC_WEAK_FUNC(sub_82E78838);
PPC_FUNC_IMPL(__imp__sub_82E78838) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78894"))) PPC_WEAK_FUNC(sub_82E78894);
PPC_FUNC_IMPL(__imp__sub_82E78894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78898"))) PPC_WEAK_FUNC(sub_82E78898);
PPC_FUNC_IMPL(__imp__sub_82E78898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E788A4"))) PPC_WEAK_FUNC(sub_82E788A4);
PPC_FUNC_IMPL(__imp__sub_82E788A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E788A8"))) PPC_WEAK_FUNC(sub_82E788A8);
PPC_FUNC_IMPL(__imp__sub_82E788A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78904"))) PPC_WEAK_FUNC(sub_82E78904);
PPC_FUNC_IMPL(__imp__sub_82E78904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78908"))) PPC_WEAK_FUNC(sub_82E78908);
PPC_FUNC_IMPL(__imp__sub_82E78908) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78914"))) PPC_WEAK_FUNC(sub_82E78914);
PPC_FUNC_IMPL(__imp__sub_82E78914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78918"))) PPC_WEAK_FUNC(sub_82E78918);
PPC_FUNC_IMPL(__imp__sub_82E78918) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78974"))) PPC_WEAK_FUNC(sub_82E78974);
PPC_FUNC_IMPL(__imp__sub_82E78974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78978"))) PPC_WEAK_FUNC(sub_82E78978);
PPC_FUNC_IMPL(__imp__sub_82E78978) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78984"))) PPC_WEAK_FUNC(sub_82E78984);
PPC_FUNC_IMPL(__imp__sub_82E78984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78988"))) PPC_WEAK_FUNC(sub_82E78988);
PPC_FUNC_IMPL(__imp__sub_82E78988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwimi r11,r4,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, ctx.r11.u32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne cr6,0x82e789c4
	if (!ctx.cr6.eq) goto loc_82E789C4;
	// andi. r9,r11,4112
	ctx.r9.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r8,r11,4,12,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r9,r9,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_82E789C4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e789d4
	if (!ctx.cr6.eq) goto loc_82E789D4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82E789D4:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78A0C"))) PPC_WEAK_FUNC(sub_82E78A0C);
PPC_FUNC_IMPL(__imp__sub_82E78A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78A10"))) PPC_WEAK_FUNC(sub_82E78A10);
PPC_FUNC_IMPL(__imp__sub_82E78A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78A1C"))) PPC_WEAK_FUNC(sub_82E78A1C);
PPC_FUNC_IMPL(__imp__sub_82E78A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78A20"))) PPC_WEAK_FUNC(sub_82E78A20);
PPC_FUNC_IMPL(__imp__sub_82E78A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10500(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10500, temp.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78A54"))) PPC_WEAK_FUNC(sub_82E78A54);
PPC_FUNC_IMPL(__imp__sub_82E78A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78A58"))) PPC_WEAK_FUNC(sub_82E78A58);
PPC_FUNC_IMPL(__imp__sub_82E78A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,10500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10500);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-18308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78A80"))) PPC_WEAK_FUNC(sub_82E78A80);
PPC_FUNC_IMPL(__imp__sub_82E78A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78A9C"))) PPC_WEAK_FUNC(sub_82E78A9C);
PPC_FUNC_IMPL(__imp__sub_82E78A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78AA0"))) PPC_WEAK_FUNC(sub_82E78AA0);
PPC_FUNC_IMPL(__imp__sub_82E78AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78AAC"))) PPC_WEAK_FUNC(sub_82E78AAC);
PPC_FUNC_IMPL(__imp__sub_82E78AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78AB0"))) PPC_WEAK_FUNC(sub_82E78AB0);
PPC_FUNC_IMPL(__imp__sub_82E78AB0) {
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
	// li r12,15
	ctx.r12.s64 = 15;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// rldicr r12,r12,33,30
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFE00000000;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,10472(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10472, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,10468(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10468, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,10464(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10464, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10476(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10476, temp.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78B40"))) PPC_WEAK_FUNC(sub_82E78B40);
PPC_FUNC_IMPL(__imp__sub_82E78B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,10468(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10468);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,10472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10472);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10464);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10476);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-18308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f10
	ctx.f13.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-4(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// rlwimi r10,r9,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78BB0"))) PPC_WEAK_FUNC(sub_82E78BB0);
PPC_FUNC_IMPL(__imp__sub_82E78BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10680, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78BD4"))) PPC_WEAK_FUNC(sub_82E78BD4);
PPC_FUNC_IMPL(__imp__sub_82E78BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78BD8"))) PPC_WEAK_FUNC(sub_82E78BD8);
PPC_FUNC_IMPL(__imp__sub_82E78BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78BE4"))) PPC_WEAK_FUNC(sub_82E78BE4);
PPC_FUNC_IMPL(__imp__sub_82E78BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78BE8"))) PPC_WEAK_FUNC(sub_82E78BE8);
PPC_FUNC_IMPL(__imp__sub_82E78BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,17708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17708);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10606(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10606, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78C24"))) PPC_WEAK_FUNC(sub_82E78C24);
PPC_FUNC_IMPL(__imp__sub_82E78C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78C28"))) PPC_WEAK_FUNC(sub_82E78C28);
PPC_FUNC_IMPL(__imp__sub_82E78C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10606(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10606);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-18212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18212);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78C58"))) PPC_WEAK_FUNC(sub_82E78C58);
PPC_FUNC_IMPL(__imp__sub_82E78C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,23932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23932);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e78c6c
	if (ctx.cr6.eq) goto loc_82E78C6C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82e78c70
	goto loc_82E78C70;
loc_82E78C6C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82E78C70:
	// stw r11,23932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23932, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78C78"))) PPC_WEAK_FUNC(sub_82E78C78);
PPC_FUNC_IMPL(__imp__sub_82E78C78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,23932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23932);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78C84"))) PPC_WEAK_FUNC(sub_82E78C84);
PPC_FUNC_IMPL(__imp__sub_82E78C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78C88"))) PPC_WEAK_FUNC(sub_82E78C88);
PPC_FUNC_IMPL(__imp__sub_82E78C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12456);
	// stw r4,11876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11876, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e78c9c
	if (!ctx.cr6.eq) goto loc_82E78C9C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E78C9C:
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78CC0"))) PPC_WEAK_FUNC(sub_82E78CC0);
PPC_FUNC_IMPL(__imp__sub_82E78CC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11876(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11876);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78CC8"))) PPC_WEAK_FUNC(sub_82E78CC8);
PPC_FUNC_IMPL(__imp__sub_82E78CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78CE4"))) PPC_WEAK_FUNC(sub_82E78CE4);
PPC_FUNC_IMPL(__imp__sub_82E78CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78CE8"))) PPC_WEAK_FUNC(sub_82E78CE8);
PPC_FUNC_IMPL(__imp__sub_82E78CE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78CF4"))) PPC_WEAK_FUNC(sub_82E78CF4);
PPC_FUNC_IMPL(__imp__sub_82E78CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78CF8"))) PPC_WEAK_FUNC(sub_82E78CF8);
PPC_FUNC_IMPL(__imp__sub_82E78CF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78D1C"))) PPC_WEAK_FUNC(sub_82E78D1C);
PPC_FUNC_IMPL(__imp__sub_82E78D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78D20"))) PPC_WEAK_FUNC(sub_82E78D20);
PPC_FUNC_IMPL(__imp__sub_82E78D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78D2C"))) PPC_WEAK_FUNC(sub_82E78D2C);
PPC_FUNC_IMPL(__imp__sub_82E78D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78D30"))) PPC_WEAK_FUNC(sub_82E78D30);
PPC_FUNC_IMPL(__imp__sub_82E78D30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12456);
	// stw r4,11880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11880, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e78d44
	if (!ctx.cr6.eq) goto loc_82E78D44;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E78D44:
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78D68"))) PPC_WEAK_FUNC(sub_82E78D68);
PPC_FUNC_IMPL(__imp__sub_82E78D68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11880(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78D70"))) PPC_WEAK_FUNC(sub_82E78D70);
PPC_FUNC_IMPL(__imp__sub_82E78D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78D94"))) PPC_WEAK_FUNC(sub_82E78D94);
PPC_FUNC_IMPL(__imp__sub_82E78D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78D98"))) PPC_WEAK_FUNC(sub_82E78D98);
PPC_FUNC_IMPL(__imp__sub_82E78D98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78DA4"))) PPC_WEAK_FUNC(sub_82E78DA4);
PPC_FUNC_IMPL(__imp__sub_82E78DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78DA8"))) PPC_WEAK_FUNC(sub_82E78DA8);
PPC_FUNC_IMPL(__imp__sub_82E78DA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78DC4"))) PPC_WEAK_FUNC(sub_82E78DC4);
PPC_FUNC_IMPL(__imp__sub_82E78DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78DC8"))) PPC_WEAK_FUNC(sub_82E78DC8);
PPC_FUNC_IMPL(__imp__sub_82E78DC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78DD4"))) PPC_WEAK_FUNC(sub_82E78DD4);
PPC_FUNC_IMPL(__imp__sub_82E78DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78DD8"))) PPC_WEAK_FUNC(sub_82E78DD8);
PPC_FUNC_IMPL(__imp__sub_82E78DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,11,18,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 11) & 0x3800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78DFC"))) PPC_WEAK_FUNC(sub_82E78DFC);
PPC_FUNC_IMPL(__imp__sub_82E78DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78E00"))) PPC_WEAK_FUNC(sub_82E78E00);
PPC_FUNC_IMPL(__imp__sub_82E78E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78E0C"))) PPC_WEAK_FUNC(sub_82E78E0C);
PPC_FUNC_IMPL(__imp__sub_82E78E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78E10"))) PPC_WEAK_FUNC(sub_82E78E10);
PPC_FUNC_IMPL(__imp__sub_82E78E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,17,12,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78E34"))) PPC_WEAK_FUNC(sub_82E78E34);
PPC_FUNC_IMPL(__imp__sub_82E78E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78E38"))) PPC_WEAK_FUNC(sub_82E78E38);
PPC_FUNC_IMPL(__imp__sub_82E78E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78E44"))) PPC_WEAK_FUNC(sub_82E78E44);
PPC_FUNC_IMPL(__imp__sub_82E78E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78E48"))) PPC_WEAK_FUNC(sub_82E78E48);
PPC_FUNC_IMPL(__imp__sub_82E78E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78E64"))) PPC_WEAK_FUNC(sub_82E78E64);
PPC_FUNC_IMPL(__imp__sub_82E78E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78E68"))) PPC_WEAK_FUNC(sub_82E78E68);
PPC_FUNC_IMPL(__imp__sub_82E78E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78E74"))) PPC_WEAK_FUNC(sub_82E78E74);
PPC_FUNC_IMPL(__imp__sub_82E78E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78E78"))) PPC_WEAK_FUNC(sub_82E78E78);
PPC_FUNC_IMPL(__imp__sub_82E78E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78E94"))) PPC_WEAK_FUNC(sub_82E78E94);
PPC_FUNC_IMPL(__imp__sub_82E78E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78E98"))) PPC_WEAK_FUNC(sub_82E78E98);
PPC_FUNC_IMPL(__imp__sub_82E78E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78EA4"))) PPC_WEAK_FUNC(sub_82E78EA4);
PPC_FUNC_IMPL(__imp__sub_82E78EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78EA8"))) PPC_WEAK_FUNC(sub_82E78EA8);
PPC_FUNC_IMPL(__imp__sub_82E78EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,23,6,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3800000) | (ctx.r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78ECC"))) PPC_WEAK_FUNC(sub_82E78ECC);
PPC_FUNC_IMPL(__imp__sub_82E78ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78ED0"))) PPC_WEAK_FUNC(sub_82E78ED0);
PPC_FUNC_IMPL(__imp__sub_82E78ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78EDC"))) PPC_WEAK_FUNC(sub_82E78EDC);
PPC_FUNC_IMPL(__imp__sub_82E78EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78EE0"))) PPC_WEAK_FUNC(sub_82E78EE0);
PPC_FUNC_IMPL(__imp__sub_82E78EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78F04"))) PPC_WEAK_FUNC(sub_82E78F04);
PPC_FUNC_IMPL(__imp__sub_82E78F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78F08"))) PPC_WEAK_FUNC(sub_82E78F08);
PPC_FUNC_IMPL(__imp__sub_82E78F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78F14"))) PPC_WEAK_FUNC(sub_82E78F14);
PPC_FUNC_IMPL(__imp__sub_82E78F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78F18"))) PPC_WEAK_FUNC(sub_82E78F18);
PPC_FUNC_IMPL(__imp__sub_82E78F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,26,3,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0x1C000000) | (ctx.r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78F34"))) PPC_WEAK_FUNC(sub_82E78F34);
PPC_FUNC_IMPL(__imp__sub_82E78F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78F38"))) PPC_WEAK_FUNC(sub_82E78F38);
PPC_FUNC_IMPL(__imp__sub_82E78F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,6,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78F44"))) PPC_WEAK_FUNC(sub_82E78F44);
PPC_FUNC_IMPL(__imp__sub_82E78F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78F48"))) PPC_WEAK_FUNC(sub_82E78F48);
PPC_FUNC_IMPL(__imp__sub_82E78F48) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10499(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10499, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78F5C"))) PPC_WEAK_FUNC(sub_82E78F5C);
PPC_FUNC_IMPL(__imp__sub_82E78F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78F60"))) PPC_WEAK_FUNC(sub_82E78F60);
PPC_FUNC_IMPL(__imp__sub_82E78F60) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10499(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10499);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78F68"))) PPC_WEAK_FUNC(sub_82E78F68);
PPC_FUNC_IMPL(__imp__sub_82E78F68) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10498(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10498, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78F7C"))) PPC_WEAK_FUNC(sub_82E78F7C);
PPC_FUNC_IMPL(__imp__sub_82E78F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78F80"))) PPC_WEAK_FUNC(sub_82E78F80);
PPC_FUNC_IMPL(__imp__sub_82E78F80) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10498(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10498);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78F88"))) PPC_WEAK_FUNC(sub_82E78F88);
PPC_FUNC_IMPL(__imp__sub_82E78F88) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10497(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10497, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78F9C"))) PPC_WEAK_FUNC(sub_82E78F9C);
PPC_FUNC_IMPL(__imp__sub_82E78F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78FA0"))) PPC_WEAK_FUNC(sub_82E78FA0);
PPC_FUNC_IMPL(__imp__sub_82E78FA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10497(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10497);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78FA8"))) PPC_WEAK_FUNC(sub_82E78FA8);
PPC_FUNC_IMPL(__imp__sub_82E78FA8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10495(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10495, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78FBC"))) PPC_WEAK_FUNC(sub_82E78FBC);
PPC_FUNC_IMPL(__imp__sub_82E78FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78FC0"))) PPC_WEAK_FUNC(sub_82E78FC0);
PPC_FUNC_IMPL(__imp__sub_82E78FC0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10495(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10495);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78FC8"))) PPC_WEAK_FUNC(sub_82E78FC8);
PPC_FUNC_IMPL(__imp__sub_82E78FC8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10494(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10494, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78FDC"))) PPC_WEAK_FUNC(sub_82E78FDC);
PPC_FUNC_IMPL(__imp__sub_82E78FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E78FE0"))) PPC_WEAK_FUNC(sub_82E78FE0);
PPC_FUNC_IMPL(__imp__sub_82E78FE0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10494(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10494);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78FE8"))) PPC_WEAK_FUNC(sub_82E78FE8);
PPC_FUNC_IMPL(__imp__sub_82E78FE8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10493(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10493, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78FFC"))) PPC_WEAK_FUNC(sub_82E78FFC);
PPC_FUNC_IMPL(__imp__sub_82E78FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79000"))) PPC_WEAK_FUNC(sub_82E79000);
PPC_FUNC_IMPL(__imp__sub_82E79000) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10493(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10493);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79008"))) PPC_WEAK_FUNC(sub_82E79008);
PPC_FUNC_IMPL(__imp__sub_82E79008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,10564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// subfic r10,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stw r11,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, ctx.r11.u32);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79048"))) PPC_WEAK_FUNC(sub_82E79048);
PPC_FUNC_IMPL(__imp__sub_82E79048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79054"))) PPC_WEAK_FUNC(sub_82E79054);
PPC_FUNC_IMPL(__imp__sub_82E79054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79058"))) PPC_WEAK_FUNC(sub_82E79058);
PPC_FUNC_IMPL(__imp__sub_82E79058) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11856(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11856);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79060"))) PPC_WEAK_FUNC(sub_82E79060);
PPC_FUNC_IMPL(__imp__sub_82E79060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9080);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82e79094
	if (!ctx.cr6.eq) goto loc_82E79094;
	// lfs f12,10836(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10836);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82e79098
	if (ctx.cr6.eq) goto loc_82E79098;
loc_82E79094:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82E79098:
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// bne cr6,0x82e790bc
	if (!ctx.cr6.eq) goto loc_82E790BC;
	// lfs f12,10844(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10844);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82e790c0
	if (ctx.cr6.eq) goto loc_82E790C0;
loc_82E790BC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82E790C0:
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10832, temp.u32);
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10840(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10840, temp.u32);
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79104"))) PPC_WEAK_FUNC(sub_82E79104);
PPC_FUNC_IMPL(__imp__sub_82E79104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79108"))) PPC_WEAK_FUNC(sub_82E79108);
PPC_FUNC_IMPL(__imp__sub_82E79108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16796);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79124"))) PPC_WEAK_FUNC(sub_82E79124);
PPC_FUNC_IMPL(__imp__sub_82E79124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79128"))) PPC_WEAK_FUNC(sub_82E79128);
PPC_FUNC_IMPL(__imp__sub_82E79128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82e79150
	if (!ctx.cr6.eq) goto loc_82E79150;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82e79154
	if (ctx.cr6.eq) goto loc_82E79154;
loc_82E79150:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82E79154:
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// lfs f12,10840(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10840);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// bne cr6,0x82e79178
	if (!ctx.cr6.eq) goto loc_82E79178;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82e7917c
	if (ctx.cr6.eq) goto loc_82E7917C;
loc_82E79178:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82E7917C:
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f13,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10836, temp.u32);
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10844(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10844, temp.u32);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E791C0"))) PPC_WEAK_FUNC(sub_82E791C0);
PPC_FUNC_IMPL(__imp__sub_82E791C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E791D0"))) PPC_WEAK_FUNC(sub_82E791D0);
PPC_FUNC_IMPL(__imp__sub_82E791D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E791EC"))) PPC_WEAK_FUNC(sub_82E791EC);
PPC_FUNC_IMPL(__imp__sub_82E791EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E791F0"))) PPC_WEAK_FUNC(sub_82E791F0);
PPC_FUNC_IMPL(__imp__sub_82E791F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E791FC"))) PPC_WEAK_FUNC(sub_82E791FC);
PPC_FUNC_IMPL(__imp__sub_82E791FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79200"))) PPC_WEAK_FUNC(sub_82E79200);
PPC_FUNC_IMPL(__imp__sub_82E79200) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,10752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10752, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79218"))) PPC_WEAK_FUNC(sub_82E79218);
PPC_FUNC_IMPL(__imp__sub_82E79218) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10752(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10752);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79220"))) PPC_WEAK_FUNC(sub_82E79220);
PPC_FUNC_IMPL(__imp__sub_82E79220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12440);
	// stw r4,11860(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11860, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e79234
	if (!ctx.cr6.eq) goto loc_82E79234;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E79234:
	// lwz r11,10460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79258"))) PPC_WEAK_FUNC(sub_82E79258);
PPC_FUNC_IMPL(__imp__sub_82E79258) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11860(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11860);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79260"))) PPC_WEAK_FUNC(sub_82E79260);
PPC_FUNC_IMPL(__imp__sub_82E79260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12444);
	// stw r4,11864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11864, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e79274
	if (!ctx.cr6.eq) goto loc_82E79274;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E79274:
	// lwz r11,10460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,4,24,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79298"))) PPC_WEAK_FUNC(sub_82E79298);
PPC_FUNC_IMPL(__imp__sub_82E79298) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11864(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11864);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E792A0"))) PPC_WEAK_FUNC(sub_82E792A0);
PPC_FUNC_IMPL(__imp__sub_82E792A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12448);
	// stw r4,11868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11868, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e792b4
	if (!ctx.cr6.eq) goto loc_82E792B4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E792B4:
	// lwz r11,10460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,8,20,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E792D8"))) PPC_WEAK_FUNC(sub_82E792D8);
PPC_FUNC_IMPL(__imp__sub_82E792D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11868);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E792E0"))) PPC_WEAK_FUNC(sub_82E792E0);
PPC_FUNC_IMPL(__imp__sub_82E792E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12452);
	// stw r4,11872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11872, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e792f4
	if (!ctx.cr6.eq) goto loc_82E792F4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E792F4:
	// lwz r11,10460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79318"))) PPC_WEAK_FUNC(sub_82E79318);
PPC_FUNC_IMPL(__imp__sub_82E79318) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11872(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11872);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79320"))) PPC_WEAK_FUNC(sub_82E79320);
PPC_FUNC_IMPL(__imp__sub_82E79320) {
	PPC_FUNC_PROLOGUE();
	// stw r4,11884(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11884, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79328"))) PPC_WEAK_FUNC(sub_82E79328);
PPC_FUNC_IMPL(__imp__sub_82E79328) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11884(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11884);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79330"))) PPC_WEAK_FUNC(sub_82E79330);
PPC_FUNC_IMPL(__imp__sub_82E79330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f0,11892(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11892, temp.u32);
	// lfs f13,17708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17708);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,10598(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10598, ctx.r11.u16);
	// sth r11,10596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10596, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79378"))) PPC_WEAK_FUNC(sub_82E79378);
PPC_FUNC_IMPL(__imp__sub_82E79378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11892(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79388"))) PPC_WEAK_FUNC(sub_82E79388);
PPC_FUNC_IMPL(__imp__sub_82E79388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f0,11896(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11896, temp.u32);
	// lfs f13,9080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9080);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10602(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10602, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E793C8"))) PPC_WEAK_FUNC(sub_82E793C8);
PPC_FUNC_IMPL(__imp__sub_82E793C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11896(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11896);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E793D8"))) PPC_WEAK_FUNC(sub_82E793D8);
PPC_FUNC_IMPL(__imp__sub_82E793D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f0,11900(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11900, temp.u32);
	// lfs f13,9080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9080);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10600(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10600, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79418"))) PPC_WEAK_FUNC(sub_82E79418);
PPC_FUNC_IMPL(__imp__sub_82E79418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11900(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11900);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79428"))) PPC_WEAK_FUNC(sub_82E79428);
PPC_FUNC_IMPL(__imp__sub_82E79428) {
	PPC_FUNC_PROLOGUE();
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r10,10540(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// slw r9,r5,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79454"))) PPC_WEAK_FUNC(sub_82E79454);
PPC_FUNC_IMPL(__imp__sub_82E79454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79458"))) PPC_WEAK_FUNC(sub_82E79458);
PPC_FUNC_IMPL(__imp__sub_82E79458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// srw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79468"))) PPC_WEAK_FUNC(sub_82E79468);
PPC_FUNC_IMPL(__imp__sub_82E79468) {
	PPC_FUNC_PROLOGUE();
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r10,10544(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// slw r9,r5,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79494"))) PPC_WEAK_FUNC(sub_82E79494);
PPC_FUNC_IMPL(__imp__sub_82E79494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79498"))) PPC_WEAK_FUNC(sub_82E79498);
PPC_FUNC_IMPL(__imp__sub_82E79498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// srw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E794A8"))) PPC_WEAK_FUNC(sub_82E794A8);
PPC_FUNC_IMPL(__imp__sub_82E794A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E794C8"))) PPC_WEAK_FUNC(sub_82E794C8);
PPC_FUNC_IMPL(__imp__sub_82E794C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E794EC"))) PPC_WEAK_FUNC(sub_82E794EC);
PPC_FUNC_IMPL(__imp__sub_82E794EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E794F0"))) PPC_WEAK_FUNC(sub_82E794F0);
PPC_FUNC_IMPL(__imp__sub_82E794F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,24,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79514"))) PPC_WEAK_FUNC(sub_82E79514);
PPC_FUNC_IMPL(__imp__sub_82E79514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79518"))) PPC_WEAK_FUNC(sub_82E79518);
PPC_FUNC_IMPL(__imp__sub_82E79518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7953C"))) PPC_WEAK_FUNC(sub_82E7953C);
PPC_FUNC_IMPL(__imp__sub_82E7953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79540"))) PPC_WEAK_FUNC(sub_82E79540);
PPC_FUNC_IMPL(__imp__sub_82E79540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79564"))) PPC_WEAK_FUNC(sub_82E79564);
PPC_FUNC_IMPL(__imp__sub_82E79564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79568"))) PPC_WEAK_FUNC(sub_82E79568);
PPC_FUNC_IMPL(__imp__sub_82E79568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7958C"))) PPC_WEAK_FUNC(sub_82E7958C);
PPC_FUNC_IMPL(__imp__sub_82E7958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79590"))) PPC_WEAK_FUNC(sub_82E79590);
PPC_FUNC_IMPL(__imp__sub_82E79590) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r11,0,8,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E795B4"))) PPC_WEAK_FUNC(sub_82E795B4);
PPC_FUNC_IMPL(__imp__sub_82E795B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E795B8"))) PPC_WEAK_FUNC(sub_82E795B8);
PPC_FUNC_IMPL(__imp__sub_82E795B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E795D4"))) PPC_WEAK_FUNC(sub_82E795D4);
PPC_FUNC_IMPL(__imp__sub_82E795D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E795D8"))) PPC_WEAK_FUNC(sub_82E795D8);
PPC_FUNC_IMPL(__imp__sub_82E795D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E795F8"))) PPC_WEAK_FUNC(sub_82E795F8);
PPC_FUNC_IMPL(__imp__sub_82E795F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7961C"))) PPC_WEAK_FUNC(sub_82E7961C);
PPC_FUNC_IMPL(__imp__sub_82E7961C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79620"))) PPC_WEAK_FUNC(sub_82E79620);
PPC_FUNC_IMPL(__imp__sub_82E79620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,24,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79644"))) PPC_WEAK_FUNC(sub_82E79644);
PPC_FUNC_IMPL(__imp__sub_82E79644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79648"))) PPC_WEAK_FUNC(sub_82E79648);
PPC_FUNC_IMPL(__imp__sub_82E79648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7966C"))) PPC_WEAK_FUNC(sub_82E7966C);
PPC_FUNC_IMPL(__imp__sub_82E7966C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79670"))) PPC_WEAK_FUNC(sub_82E79670);
PPC_FUNC_IMPL(__imp__sub_82E79670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79694"))) PPC_WEAK_FUNC(sub_82E79694);
PPC_FUNC_IMPL(__imp__sub_82E79694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79698"))) PPC_WEAK_FUNC(sub_82E79698);
PPC_FUNC_IMPL(__imp__sub_82E79698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E796BC"))) PPC_WEAK_FUNC(sub_82E796BC);
PPC_FUNC_IMPL(__imp__sub_82E796BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E796C0"))) PPC_WEAK_FUNC(sub_82E796C0);
PPC_FUNC_IMPL(__imp__sub_82E796C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r11,0,8,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E796E4"))) PPC_WEAK_FUNC(sub_82E796E4);
PPC_FUNC_IMPL(__imp__sub_82E796E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E796E8"))) PPC_WEAK_FUNC(sub_82E796E8);
PPC_FUNC_IMPL(__imp__sub_82E796E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79704"))) PPC_WEAK_FUNC(sub_82E79704);
PPC_FUNC_IMPL(__imp__sub_82E79704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79708"))) PPC_WEAK_FUNC(sub_82E79708);
PPC_FUNC_IMPL(__imp__sub_82E79708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79714"))) PPC_WEAK_FUNC(sub_82E79714);
PPC_FUNC_IMPL(__imp__sub_82E79714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79718"))) PPC_WEAK_FUNC(sub_82E79718);
PPC_FUNC_IMPL(__imp__sub_82E79718) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79724"))) PPC_WEAK_FUNC(sub_82E79724);
PPC_FUNC_IMPL(__imp__sub_82E79724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79728"))) PPC_WEAK_FUNC(sub_82E79728);
PPC_FUNC_IMPL(__imp__sub_82E79728) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79734"))) PPC_WEAK_FUNC(sub_82E79734);
PPC_FUNC_IMPL(__imp__sub_82E79734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79738"))) PPC_WEAK_FUNC(sub_82E79738);
PPC_FUNC_IMPL(__imp__sub_82E79738) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79744"))) PPC_WEAK_FUNC(sub_82E79744);
PPC_FUNC_IMPL(__imp__sub_82E79744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79748"))) PPC_WEAK_FUNC(sub_82E79748);
PPC_FUNC_IMPL(__imp__sub_82E79748) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79754"))) PPC_WEAK_FUNC(sub_82E79754);
PPC_FUNC_IMPL(__imp__sub_82E79754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79758"))) PPC_WEAK_FUNC(sub_82E79758);
PPC_FUNC_IMPL(__imp__sub_82E79758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79764"))) PPC_WEAK_FUNC(sub_82E79764);
PPC_FUNC_IMPL(__imp__sub_82E79764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79768"))) PPC_WEAK_FUNC(sub_82E79768);
PPC_FUNC_IMPL(__imp__sub_82E79768) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79774"))) PPC_WEAK_FUNC(sub_82E79774);
PPC_FUNC_IMPL(__imp__sub_82E79774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79778"))) PPC_WEAK_FUNC(sub_82E79778);
PPC_FUNC_IMPL(__imp__sub_82E79778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79784"))) PPC_WEAK_FUNC(sub_82E79784);
PPC_FUNC_IMPL(__imp__sub_82E79784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79788"))) PPC_WEAK_FUNC(sub_82E79788);
PPC_FUNC_IMPL(__imp__sub_82E79788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79794"))) PPC_WEAK_FUNC(sub_82E79794);
PPC_FUNC_IMPL(__imp__sub_82E79794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79798"))) PPC_WEAK_FUNC(sub_82E79798);
PPC_FUNC_IMPL(__imp__sub_82E79798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E797A4"))) PPC_WEAK_FUNC(sub_82E797A4);
PPC_FUNC_IMPL(__imp__sub_82E797A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E797A8"))) PPC_WEAK_FUNC(sub_82E797A8);
PPC_FUNC_IMPL(__imp__sub_82E797A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E797B4"))) PPC_WEAK_FUNC(sub_82E797B4);
PPC_FUNC_IMPL(__imp__sub_82E797B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E797B8"))) PPC_WEAK_FUNC(sub_82E797B8);
PPC_FUNC_IMPL(__imp__sub_82E797B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E797C4"))) PPC_WEAK_FUNC(sub_82E797C4);
PPC_FUNC_IMPL(__imp__sub_82E797C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E797C8"))) PPC_WEAK_FUNC(sub_82E797C8);
PPC_FUNC_IMPL(__imp__sub_82E797C8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E797D4"))) PPC_WEAK_FUNC(sub_82E797D4);
PPC_FUNC_IMPL(__imp__sub_82E797D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E797D8"))) PPC_WEAK_FUNC(sub_82E797D8);
PPC_FUNC_IMPL(__imp__sub_82E797D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E797E4"))) PPC_WEAK_FUNC(sub_82E797E4);
PPC_FUNC_IMPL(__imp__sub_82E797E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E797E8"))) PPC_WEAK_FUNC(sub_82E797E8);
PPC_FUNC_IMPL(__imp__sub_82E797E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E797F4"))) PPC_WEAK_FUNC(sub_82E797F4);
PPC_FUNC_IMPL(__imp__sub_82E797F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E797F8"))) PPC_WEAK_FUNC(sub_82E797F8);
PPC_FUNC_IMPL(__imp__sub_82E797F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79804"))) PPC_WEAK_FUNC(sub_82E79804);
PPC_FUNC_IMPL(__imp__sub_82E79804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79808"))) PPC_WEAK_FUNC(sub_82E79808);
PPC_FUNC_IMPL(__imp__sub_82E79808) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,1087
	ctx.r11.s64 = 1087;
	// bne cr6,0x82e79818
	if (!ctx.cr6.eq) goto loc_82E79818;
	// li r11,1024
	ctx.r11.s64 = 1024;
loc_82E79818:
	// stw r11,10572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10572, ctx.r11.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,10564(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79848"))) PPC_WEAK_FUNC(sub_82E79848);
PPC_FUNC_IMPL(__imp__sub_82E79848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10572);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79854"))) PPC_WEAK_FUNC(sub_82E79854);
PPC_FUNC_IMPL(__imp__sub_82E79854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E79858"))) PPC_WEAK_FUNC(sub_82E79858);
PPC_FUNC_IMPL(__imp__sub_82E79858) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3110
	ctx.r11.s64 = ctx.r4.s64 + 3110;
	// addi r10,r4,3007
	ctx.r10.s64 = ctx.r4.s64 + 3007;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82e798a0
	if (ctx.cr6.eq) goto loc_82E798A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82e798a0
	if (ctx.cr6.eq) goto loc_82E798A0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82e798a0
	if (ctx.cr6.eq) goto loc_82E798A0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82E798A0:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82e798bc
	if (ctx.cr6.eq) goto loc_82E798BC;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
loc_82E798BC:
	// lwz r6,28(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r5,r10,2593
	ctx.r5.s64 = ctx.r10.s64 + 2593;
	// rlwinm r8,r6,16,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// rlwinm r7,r6,15,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0x7;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// and r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & ctx.r11.u64;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// rlwinm r8,r6,0,16,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 | ctx.r7.u64;
	// addis r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 131072;
	// rlwinm r7,r7,16,12,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xF0000;
	// addi r6,r6,263
	ctx.r6.s64 = ctx.r6.s64 + 263;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r8,r6,56
	ctx.r8.u64 = ctx.r6.u64 & 0xFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srawi r10,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 16;
	// srd r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r8.u8 & 0x7F));
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,0,16,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// ldx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stdx r11,r10,r3
	PPC_STORE_U64(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7993C"))) PPC_WEAK_FUNC(sub_82E7993C);
PPC_FUNC_IMPL(__imp__sub_82E7993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

