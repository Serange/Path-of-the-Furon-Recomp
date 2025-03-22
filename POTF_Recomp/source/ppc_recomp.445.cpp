#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DB49CC"))) PPC_WEAK_FUNC(sub_82DB49CC);
PPC_FUNC_IMPL(__imp__sub_82DB49CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB49D0"))) PPC_WEAK_FUNC(sub_82DB49D0);
PPC_FUNC_IMPL(__imp__sub_82DB49D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,276
	ctx.r11.s64 = ctx.r3.s64 + 276;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82DB49E0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db49e0
	if (!ctx.cr6.eq) goto loc_82DB49E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB4A00"))) PPC_WEAK_FUNC(sub_82DB4A00);
PPC_FUNC_IMPL(__imp__sub_82DB4A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f12,5328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5328);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// lwz r10,1244(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1244);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f11,-18288(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18288);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// blt cr6,0x82db4a60
	if (ctx.cr6.lt) goto loc_82DB4A60;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,404(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 404, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,408(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 408, temp.u32);
	// blr 
	return;
loc_82DB4A60:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x82db4a98
	if (ctx.cr6.gt) goto loc_82DB4A98;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f12,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,-18292(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18292);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfs f13,404(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 404, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,408(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 408, temp.u32);
	// blr 
	return;
loc_82DB4A98:
	// fsubs f12,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,7980(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7980);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fdivs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lfs f13,-18396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18396);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,404(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 404, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,408(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 408, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB4AD0"))) PPC_WEAK_FUNC(sub_82DB4AD0);
PPC_FUNC_IMPL(__imp__sub_82DB4AD0) {
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
	// bl 0x82cb6ad8
	ctx.lr = 0x82DB4AE8;
	__savefpr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82db4e90
	if (ctx.cr6.eq) goto loc_82DB4E90;
	// lfs f1,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x82db4b18
	if (ctx.cr6.eq) goto loc_82DB4B18;
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// bl 0x82db4a00
	ctx.lr = 0x82DB4B18;
	sub_82DB4A00(ctx, base);
loc_82DB4B18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82db4b40
	if (!ctx.cr6.eq) goto loc_82DB4B40;
	// mullw r11,r6,r30
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82DB4B3C;
	sub_82CB1160(ctx, base);
	// b 0x82db4e90
	goto loc_82DB4E90;
loc_82DB4B40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82db4b90
	if (!ctx.cr6.eq) goto loc_82DB4B90;
	// mullw r11,r6,r30
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB4B64;
	sub_82CB16F0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82db4e90
	if (!ctx.cr6.gt) goto loc_82DB4E90;
	// addi r11,r31,276
	ctx.r11.s64 = ctx.r31.s64 + 276;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82DB4B74:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db4b74
	if (!ctx.cr6.eq) goto loc_82DB4B74;
	// b 0x82db4e90
	goto loc_82DB4E90;
loc_82DB4B90:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82db4c00
	if (!ctx.cr6.eq) goto loc_82DB4C00;
	// lfs f11,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f10,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x82db4bf4
	if (ctx.cr6.eq) goto loc_82DB4BF4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfs f0,26816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26816);
	ctx.f0.f64 = double(temp.f32);
loc_82DB4BB0:
	// lfs f12,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f13,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f13,f12,f10,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// bne cr6,0x82db4bb0
	if (!ctx.cr6.eq) goto loc_82DB4BB0;
	// stfs f0,26816(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26816, temp.u32);
loc_82DB4BF4:
	// stfs f11,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f10,280(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// b 0x82db4e90
	goto loc_82DB4E90;
loc_82DB4C00:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82db4ca0
	if (!ctx.cr6.eq) goto loc_82DB4CA0;
	// lfs f11,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f9,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// beq cr6,0x82db4c8c
	if (ctx.cr6.eq) goto loc_82DB4C8C;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfs f12,26816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26816);
	ctx.f12.f64 = double(temp.f32);
loc_82DB4C28:
	// lfs f13,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// lfs f0,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fmadds f11,f7,f0,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f10,f6,f0,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmuls f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmadds f0,f13,f9,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmadds f13,f13,f8,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f6.f64));
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// bne cr6,0x82db4c28
	if (!ctx.cr6.eq) goto loc_82DB4C28;
	// stfs f12,26816(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26816, temp.u32);
loc_82DB4C8C:
	// stfs f11,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f9,280(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f10,284(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f8,288(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// b 0x82db4e90
	goto loc_82DB4E90;
loc_82DB4CA0:
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x82db4df8
	if (!ctx.cr6.eq) goto loc_82DB4DF8;
	// lfs f11,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f5,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82db4dc4
	if (ctx.cr6.eq) goto loc_82DB4DC4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfs f12,26816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26816);
	ctx.f12.f64 = double(temp.f32);
loc_82DB4CE8:
	// lfs f13,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lfs f30,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f29,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fadds f30,f30,f12
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// lfs f28,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fadds f29,f29,f12
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f12.f64));
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f27,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fadds f28,f28,f12
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f12.f64));
	// lfs f26,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f0,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lfs f25,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f25.f64 = double(temp.f32);
	// fadds f27,f27,f12
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f12.f64));
	// fmuls f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// fmuls f2,f13,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fadds f26,f26,f12
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f12.f64));
	// fadds f25,f25,f12
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f12.f64));
	// fmadds f11,f30,f0,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmadds f10,f29,f0,f10
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmuls f30,f13,f8
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmadds f9,f28,f0,f9
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmuls f24,f13,f7
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmadds f8,f27,f0,f3
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmuls f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmadds f7,f26,f0,f2
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f29,f0,f11
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f6,f25,f0,f6
	ctx.f6.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmuls f28,f0,f10
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f27,f0,f9
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// fmadds f8,f0,f8,f30
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f30.f64));
	// stfs f8,12(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// fmr f2,f7
	ctx.f2.f64 = ctx.f7.f64;
	// fmadds f7,f0,f7,f24
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f24.f64));
	// stfs f7,16(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// fmadds f5,f13,f5,f29
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f29.f64));
	// stfs f5,0(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmadds f0,f0,f6,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f31.f64));
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// fmadds f4,f13,f4,f28
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f28.f64));
	// stfs f4,4(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fmadds f13,f13,f1,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f27.f64));
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// bne cr6,0x82db4ce8
	if (!ctx.cr6.eq) goto loc_82DB4CE8;
	// stfs f12,26816(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26816, temp.u32);
loc_82DB4DC4:
	// stfs f11,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f5,280(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f10,284(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f4,288(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f9,292(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f1,296(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f3,300(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stfs f8,304(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f2,308(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f7,312(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f6,316(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f31,320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// b 0x82db4e90
	goto loc_82DB4E90;
loc_82DB4DF8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82db4e90
	if (!ctx.cr6.gt) goto loc_82DB4E90;
	// lis r3,-31909
	ctx.r3.s64 = -2091188224;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r9,r31,280
	ctx.r9.s64 = ctx.r31.s64 + 280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f11,26816(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 26816);
	ctx.f11.f64 = double(temp.f32);
loc_82DB4E18:
	// lfs f12,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82db4e70
	if (ctx.cr6.eq) goto loc_82DB4E70;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB4E34:
	// lfs f13,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fadds f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f0,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadds f12,f9,f0,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// bne cr6,0x82db4e34
	if (!ctx.cr6.eq) goto loc_82DB4E34;
loc_82DB4E70:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stfs f10,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,-4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82db4e18
	if (!ctx.cr6.eq) goto loc_82DB4E18;
	// stfs f11,26816(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 26816, temp.u32);
loc_82DB4E90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b24
	ctx.lr = 0x82DB4EA0;
	__restfpr_24(ctx, base);
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

__attribute__((alias("__imp__sub_82DB4EB4"))) PPC_WEAK_FUNC(sub_82DB4EB4);
PPC_FUNC_IMPL(__imp__sub_82DB4EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4EB8"))) PPC_WEAK_FUNC(sub_82DB4EB8);
PPC_FUNC_IMPL(__imp__sub_82DB4EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82db4ec4
	if (!ctx.cr6.eq) goto loc_82DB4EC4;
	// stfs f1,272(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
loc_82DB4EC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB4ECC"))) PPC_WEAK_FUNC(sub_82DB4ECC);
PPC_FUNC_IMPL(__imp__sub_82DB4ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4ED0"))) PPC_WEAK_FUNC(sub_82DB4ED0);
PPC_FUNC_IMPL(__imp__sub_82DB4ED0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82db4f0c
	if (!ctx.cr6.eq) goto loc_82DB4F0C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f1,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB4F0C;
	sub_82CB61F0(ctx, base);
loc_82DB4F0C:
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

__attribute__((alias("__imp__sub_82DB4F20"))) PPC_WEAK_FUNC(sub_82DB4F20);
PPC_FUNC_IMPL(__imp__sub_82DB4F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db4f30
	if (!ctx.cr6.eq) goto loc_82DB4F30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB4F30:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 + 276;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82DB4F40:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db4f40
	if (!ctx.cr6.eq) goto loc_82DB4F40;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB4F60"))) PPC_WEAK_FUNC(sub_82DB4F60);
PPC_FUNC_IMPL(__imp__sub_82DB4F60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db4f70
	if (!ctx.cr6.eq) goto loc_82DB4F70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB4F70:
	// b 0x82db4ad0
	sub_82DB4AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB4F74"))) PPC_WEAK_FUNC(sub_82DB4F74);
PPC_FUNC_IMPL(__imp__sub_82DB4F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4F78"))) PPC_WEAK_FUNC(sub_82DB4F78);
PPC_FUNC_IMPL(__imp__sub_82DB4F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db4f88
	if (!ctx.cr6.eq) goto loc_82DB4F88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB4F88:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stfs f1,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB4F9C"))) PPC_WEAK_FUNC(sub_82DB4F9C);
PPC_FUNC_IMPL(__imp__sub_82DB4F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4FA0"))) PPC_WEAK_FUNC(sub_82DB4FA0);
PPC_FUNC_IMPL(__imp__sub_82DB4FA0) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x82db4fc0
	if (!ctx.cr6.eq) goto loc_82DB4FC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB4FC0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82db4fec
	if (!ctx.cr6.eq) goto loc_82DB4FEC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f1,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB4FEC;
	sub_82CB61F0(ctx, base);
loc_82DB4FEC:
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

__attribute__((alias("__imp__sub_82DB5000"))) PPC_WEAK_FUNC(sub_82DB5000);
PPC_FUNC_IMPL(__imp__sub_82DB5000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB5008;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82db5070
	if (!ctx.cr6.gt) goto loc_82DB5070;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DB5030:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB5054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db50ac
	if (!ctx.cr6.eq) goto loc_82DB50AC;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db5030
	if (ctx.cr6.lt) goto loc_82DB5030;
loc_82DB5070:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r31,276
	ctx.r11.s64 = ctx.r31.s64 + 276;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82DB5080:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db5080
	if (!ctx.cr6.eq) goto loc_82DB5080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// bl 0x82db4a00
	ctx.lr = 0x82DB50A8;
	sub_82DB4A00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB50AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB50B4"))) PPC_WEAK_FUNC(sub_82DB50B4);
PPC_FUNC_IMPL(__imp__sub_82DB50B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB50B8"))) PPC_WEAK_FUNC(sub_82DB50B8);
PPC_FUNC_IMPL(__imp__sub_82DB50B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db50c8
	if (!ctx.cr6.eq) goto loc_82DB50C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB50C8:
	// b 0x82db5000
	sub_82DB5000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB50CC"))) PPC_WEAK_FUNC(sub_82DB50CC);
PPC_FUNC_IMPL(__imp__sub_82DB50CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB50D0"))) PPC_WEAK_FUNC(sub_82DB50D0);
PPC_FUNC_IMPL(__imp__sub_82DB50D0) {
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
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,26680
	ctx.r31.s64 = ctx.r11.s64 + 26680;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB50F8;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5420
	ctx.r4.s64 = ctx.r11.s64 + 5420;
	// bl 0x82da4448
	ctx.lr = 0x82DB5108;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r5,20664
	ctx.r10.s64 = ctx.r5.s64 + 20664;
	// addi r11,r11,26632
	ctx.r11.s64 = ctx.r11.s64 + 26632;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r6,20256
	ctx.r10.s64 = ctx.r6.s64 + 20256;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,20320
	ctx.r10.s64 = ctx.r7.s64 + 20320;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,20344
	ctx.r11.s64 = ctx.r8.s64 + 20344;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,20384
	ctx.r11.s64 = ctx.r9.s64 + 20384;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,412
	ctx.r11.s64 = 412;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB5194"))) PPC_WEAK_FUNC(sub_82DB5194);
PPC_FUNC_IMPL(__imp__sub_82DB5194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5198"))) PPC_WEAK_FUNC(sub_82DB5198);
PPC_FUNC_IMPL(__imp__sub_82DB5198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,284
	ctx.r11.s64 = ctx.r3.s64 + 284;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82DB51A8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db51a8
	if (!ctx.cr6.eq) goto loc_82DB51A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB51C8"))) PPC_WEAK_FUNC(sub_82DB51C8);
PPC_FUNC_IMPL(__imp__sub_82DB51C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,-21480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21480);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfd f1,-16744(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16744);
	// lwz r11,1244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1244);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f13,-16200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16200);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-18292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18292);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82DB523C;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f31,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82db5268
	if (!ctx.cr6.gt) goto loc_82DB5268;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82DB5268:
	// fdivs f1,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f29.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfd f2,-18376(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18376);
	// fmuls f29,f0,f1
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82DB5280;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmadds f11,f0,f30,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f0,-18284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82db52b8
	if (!ctx.cr6.lt) goto loc_82DB52B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
loc_82DB52B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,5496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5496);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82db52e4
	if (!ctx.cr6.gt) goto loc_82DB52E4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82db52e4
	if (!ctx.cr6.lt) goto loc_82DB52E4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// lfs f11,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f11.f64 = double(temp.f32);
loc_82DB52E4:
	// stfs f12,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f13,416(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f11,420(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB5314"))) PPC_WEAK_FUNC(sub_82DB5314);
PPC_FUNC_IMPL(__imp__sub_82DB5314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5318"))) PPC_WEAK_FUNC(sub_82DB5318);
PPC_FUNC_IMPL(__imp__sub_82DB5318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DB5320;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ad8
	ctx.lr = 0x82DB5328;
	__savefpr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82db573c
	if (ctx.cr6.eq) goto loc_82DB573C;
	// lfs f1,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82db5368
	if (!ctx.cr6.eq) goto loc_82DB5368;
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82db537c
	if (ctx.cr6.eq) goto loc_82DB537C;
loc_82DB5368:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f2.f64 = double(temp.f32);
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f2,276(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// bl 0x82db51c8
	ctx.lr = 0x82DB537C;
	sub_82DB51C8(ctx, base);
loc_82DB537C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82db5408
	if (!ctx.cr6.eq) goto loc_82DB5408;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82db5408
	if (!ctx.cr6.eq) goto loc_82DB5408;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82db5408
	if (!ctx.cr6.eq) goto loc_82DB5408;
	// mullw r11,r28,r27
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB53CC;
	sub_82CB16F0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82db573c
	if (!ctx.cr6.gt) goto loc_82DB573C;
	// addi r11,r31,288
	ctx.r11.s64 = ctx.r31.s64 + 288;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82DB53DC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db53dc
	if (!ctx.cr6.eq) goto loc_82DB53DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b24
	ctx.lr = 0x82DB5404;
	__restfpr_24(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB5408:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82db5488
	if (!ctx.cr6.eq) goto loc_82DB5488;
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f12,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82db546c
	if (ctx.cr6.eq) goto loc_82DB546C;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfs f0,27056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27056);
	ctx.f0.f64 = double(temp.f32);
loc_82DB5428:
	// lfs f11,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// lfs f10,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f8.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// fmadds f11,f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f13,f8,f13,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x82db5428
	if (!ctx.cr6.eq) goto loc_82DB5428;
	// stfs f0,27056(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27056, temp.u32);
loc_82DB546C:
	// stfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f12,288(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b24
	ctx.lr = 0x82DB5484;
	__restfpr_24(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB5488:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82db5534
	if (!ctx.cr6.eq) goto loc_82DB5534;
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f8,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f7.f64 = double(temp.f32);
	// beq cr6,0x82db5510
	if (ctx.cr6.eq) goto loc_82DB5510;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfs f0,27056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27056);
	ctx.f0.f64 = double(temp.f32);
loc_82DB54B0:
	// lfs f10,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f10.f64 = double(temp.f32);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f10,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lfs f11,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f9,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f9.f64 = double(temp.f32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f6,f6,f11,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f11,f5,f11,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f13,f9,f13,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f12,f9,f12,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne cr6,0x82db54b0
	if (!ctx.cr6.eq) goto loc_82DB54B0;
	// stfs f0,27056(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27056, temp.u32);
loc_82DB5510:
	// stfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f8,288(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f12,292(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f7,296(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b24
	ctx.lr = 0x82DB5530;
	__restfpr_24(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB5534:
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// bne cr6,0x82db56a4
	if (!ctx.cr6.eq) goto loc_82DB56A4;
	// lfs f10,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f2,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f2.f64 = double(temp.f32);
	// lfs f9,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f31.f64 = double(temp.f32);
	// lfs f7,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f7.f64 = double(temp.f32);
	// lfs f30,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f30.f64 = double(temp.f32);
	// lfs f6,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f6.f64 = double(temp.f32);
	// lfs f29,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f29.f64 = double(temp.f32);
	// lfs f5,324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f5.f64 = double(temp.f32);
	// lfs f28,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82db5660
	if (ctx.cr6.eq) goto loc_82DB5660;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfs f0,27056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27056);
	ctx.f0.f64 = double(temp.f32);
loc_82DB557C:
	// lfs f12,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f12.f64 = double(temp.f32);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f3,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f27,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// lfs f26,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// fadds f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfs f25,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f24,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f30,f12,f30
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f29,f12,f29
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// lfs f13,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f13.f64 = double(temp.f32);
	// fadds f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// lfs f11,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f11.f64 = double(temp.f32);
	// fadds f26,f26,f0
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f0.f64));
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// fadds f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f0.f64));
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fadds f24,f24,f0
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// fmadds f4,f4,f13,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f3,f3,f13,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmr f1,f9
	ctx.f1.f64 = ctx.f9.f64;
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f31,f27,f13,f31
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fmadds f30,f26,f13,f30
	ctx.f30.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmadds f29,f25,f13,f29
	ctx.f29.f64 = double(float(ctx.f25.f64 * ctx.f13.f64 + ctx.f29.f64));
	// fmadds f28,f24,f13,f12
	ctx.f28.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f13,f11,f10,f4
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f4.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f9,f11,f9,f3
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f3.f64));
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmadds f12,f11,f8,f31
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f31.f64));
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmadds f4,f11,f7,f30
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f30.f64));
	// stfs f4,12(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fmadds f3,f11,f6,f29
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f29.f64));
	// stfs f3,16(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fmr f31,f8
	ctx.f31.f64 = ctx.f8.f64;
	// fmadds f11,f11,f5,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f28.f64));
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// fmr f30,f7
	ctx.f30.f64 = ctx.f7.f64;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// fmr f29,f6
	ctx.f29.f64 = ctx.f6.f64;
	// fmr f28,f5
	ctx.f28.f64 = ctx.f5.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmr f7,f4
	ctx.f7.f64 = ctx.f4.f64;
	// fmr f6,f3
	ctx.f6.f64 = ctx.f3.f64;
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// bne cr6,0x82db557c
	if (!ctx.cr6.eq) goto loc_82DB557C;
	// stfs f0,27056(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27056, temp.u32);
loc_82DB5660:
	// stfs f10,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f2,288(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f9,292(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f1,296(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f8,300(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stfs f31,304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f7,308(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f30,312(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f6,316(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f29,320(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f5,324(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f28,328(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b24
	ctx.lr = 0x82DB56A0;
	__restfpr_24(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB56A4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82db573c
	if (!ctx.cr6.gt) goto loc_82DB573C;
	// lis r4,-31909
	ctx.r4.s64 = -2091188224;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r9,r31,288
	ctx.r9.s64 = ctx.r31.s64 + 288;
	// subf r7,r30,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lfs f12,27056(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 27056);
	ctx.f12.f64 = double(temp.f32);
loc_82DB56C4:
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82db571c
	if (ctx.cr6.eq) goto loc_82DB571C;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB56E0:
	// lfsx f11,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f10,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f8.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadds f11,f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f0,f8,f0,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne cr6,0x82db56e0
	if (!ctx.cr6.eq) goto loc_82DB56E0;
loc_82DB571C:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f0,-4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82db56c4
	if (!ctx.cr6.eq) goto loc_82DB56C4;
	// stfs f12,27056(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 27056, temp.u32);
loc_82DB573C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b24
	ctx.lr = 0x82DB574C;
	__restfpr_24(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB5750"))) PPC_WEAK_FUNC(sub_82DB5750);
PPC_FUNC_IMPL(__imp__sub_82DB5750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x82db576c
	if (ctx.cr6.lt) goto loc_82DB576C;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stfs f1,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// blr 
	return;
loc_82DB576C:
	// stfs f1,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB5774"))) PPC_WEAK_FUNC(sub_82DB5774);
PPC_FUNC_IMPL(__imp__sub_82DB5774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5778"))) PPC_WEAK_FUNC(sub_82DB5778);
PPC_FUNC_IMPL(__imp__sub_82DB5778) {
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
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82db57cc
	if (ctx.cr6.lt) goto loc_82DB57CC;
	// bne cr6,0x82db57ec
	if (!ctx.cr6.eq) goto loc_82DB57EC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB57B8;
	sub_82CB61F0(ctx, base);
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
loc_82DB57CC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB57EC;
	sub_82CB61F0(ctx, base);
loc_82DB57EC:
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

__attribute__((alias("__imp__sub_82DB5800"))) PPC_WEAK_FUNC(sub_82DB5800);
PPC_FUNC_IMPL(__imp__sub_82DB5800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db5810
	if (!ctx.cr6.eq) goto loc_82DB5810;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB5810:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82DB5820:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db5820
	if (!ctx.cr6.eq) goto loc_82DB5820;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB5840"))) PPC_WEAK_FUNC(sub_82DB5840);
PPC_FUNC_IMPL(__imp__sub_82DB5840) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db5850
	if (!ctx.cr6.eq) goto loc_82DB5850;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB5850:
	// b 0x82db5318
	sub_82DB5318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB5854"))) PPC_WEAK_FUNC(sub_82DB5854);
PPC_FUNC_IMPL(__imp__sub_82DB5854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5858"))) PPC_WEAK_FUNC(sub_82DB5858);
PPC_FUNC_IMPL(__imp__sub_82DB5858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db5868
	if (!ctx.cr6.eq) goto loc_82DB5868;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB5868:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x82db5880
	if (ctx.cr6.lt) goto loc_82DB5880;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stfs f1,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// blr 
	return;
loc_82DB5880:
	// stfs f1,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB5888"))) PPC_WEAK_FUNC(sub_82DB5888);
PPC_FUNC_IMPL(__imp__sub_82DB5888) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db5898
	if (!ctx.cr6.eq) goto loc_82DB5898;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB5898:
	// b 0x82db5778
	sub_82DB5778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB589C"))) PPC_WEAK_FUNC(sub_82DB589C);
PPC_FUNC_IMPL(__imp__sub_82DB589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB58A0"))) PPC_WEAK_FUNC(sub_82DB58A0);
PPC_FUNC_IMPL(__imp__sub_82DB58A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB58A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82db5910
	if (!ctx.cr6.gt) goto loc_82DB5910;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DB58D0:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB58F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db5954
	if (!ctx.cr6.eq) goto loc_82DB5954;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db58d0
	if (ctx.cr6.lt) goto loc_82DB58D0;
loc_82DB5910:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r31,284
	ctx.r11.s64 = ctx.r31.s64 + 284;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82DB5920:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db5920
	if (!ctx.cr6.eq) goto loc_82DB5920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f2.f64 = double(temp.f32);
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f2,276(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// bl 0x82db51c8
	ctx.lr = 0x82DB5950;
	sub_82DB51C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB5954:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB595C"))) PPC_WEAK_FUNC(sub_82DB595C);
PPC_FUNC_IMPL(__imp__sub_82DB595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5960"))) PPC_WEAK_FUNC(sub_82DB5960);
PPC_FUNC_IMPL(__imp__sub_82DB5960) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db5970
	if (!ctx.cr6.eq) goto loc_82DB5970;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB5970:
	// b 0x82db58a0
	sub_82DB58A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB5974"))) PPC_WEAK_FUNC(sub_82DB5974);
PPC_FUNC_IMPL(__imp__sub_82DB5974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5978"))) PPC_WEAK_FUNC(sub_82DB5978);
PPC_FUNC_IMPL(__imp__sub_82DB5978) {
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
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,26920
	ctx.r31.s64 = ctx.r11.s64 + 26920;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB59A0;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5500
	ctx.r4.s64 = ctx.r11.s64 + 5500;
	// bl 0x82da4448
	ctx.lr = 0x82DB59B0;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r5,22880
	ctx.r10.s64 = ctx.r5.s64 + 22880;
	// addi r11,r11,26824
	ctx.r11.s64 = ctx.r11.s64 + 26824;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r6,22528
	ctx.r10.s64 = ctx.r6.s64 + 22528;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,22592
	ctx.r10.s64 = ctx.r7.s64 + 22592;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,22616
	ctx.r11.s64 = ctx.r8.s64 + 22616;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,22664
	ctx.r11.s64 = ctx.r9.s64 + 22664;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,424
	ctx.r11.s64 = 424;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB5A3C"))) PPC_WEAK_FUNC(sub_82DB5A3C);
PPC_FUNC_IMPL(__imp__sub_82DB5A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5A40"))) PPC_WEAK_FUNC(sub_82DB5A40);
PPC_FUNC_IMPL(__imp__sub_82DB5A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// addi r11,r3,548
	ctx.r11.s64 = ctx.r3.s64 + 548;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,27296(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27296);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,27296(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 27296, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,292
	ctx.r10.s64 = ctx.r10.s64 + 292;
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f11,f10,f0,f11
	ctx.f11.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// fnmsubs f11,f9,f12,f11
	ctx.f11.f64 = double(float(-(ctx.f9.f64 * ctx.f12.f64 - ctx.f11.f64)));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f10,f8,f0,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f12,f7,f12,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fnmsubs f12,f11,f13,f12
	ctx.f12.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fnmsubs f12,f9,f0,f12
	ctx.f12.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f13,f8,f13,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f1,f6,f0,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB5AD0"))) PPC_WEAK_FUNC(sub_82DB5AD0);
PPC_FUNC_IMPL(__imp__sub_82DB5AD0) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfd f1,-18352(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// bl 0x82cb4590
	ctx.lr = 0x82DB5B08;
	sub_82CB4590(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82cb5128
	ctx.lr = 0x82DB5B24;
	sub_82CB5128(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

__attribute__((alias("__imp__sub_82DB5B78"))) PPC_WEAK_FUNC(sub_82DB5B78);
PPC_FUNC_IMPL(__imp__sub_82DB5B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f5,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f2,f7
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f11,f3,f7
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// lfs f13,6484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f2,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f12,f7
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f11,f7
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f12,f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f11,f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f8,f12,f7,f4
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f12,f11,f7,f1
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f1.f64));
	// lfs f11,17708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17708);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmsubs f10,f10,f13,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmsubs f9,f9,f13,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f2.f64));
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fmsubs f7,f4,f0,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f7.f64));
	// fmsubs f11,f1,f0,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f11.f64));
	// fdivs f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fadds f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fadds f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB5C38"))) PPC_WEAK_FUNC(sub_82DB5C38);
PPC_FUNC_IMPL(__imp__sub_82DB5C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82DB5C40;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
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
	// bl 0x82db5ad0
	ctx.lr = 0x82DB5C74;
	sub_82DB5AD0(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db5ad0
	ctx.lr = 0x82DB5C90;
	sub_82DB5AD0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lfs f8,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lfs f7,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f0,7676(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,6484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f8,f31
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f9,f7,f31
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmadds f8,f8,f13,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f7,f7,f13,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f6,f8,f31,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f8,f7,f31,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f11.f64));
	// lfs f7,17708(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17708);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f7,f9,f7
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmsubs f10,f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f3.f64));
	// fmsubs f9,f9,f13,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f2.f64));
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f4,f12,f0,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f4.f64));
	// fmsubs f7,f11,f0,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f7.f64));
	// fdivs f0,f13,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fdivs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f7,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f11,f10,f8
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB5D78"))) PPC_WEAK_FUNC(sub_82DB5D78);
PPC_FUNC_IMPL(__imp__sub_82DB5D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82db5d8c
	if (!ctx.cr6.eq) goto loc_82DB5D8C;
	// stfs f1,280(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DB5D8C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82db5d98
	if (!ctx.cr6.eq) goto loc_82DB5D98;
	// stfs f1,272(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
loc_82DB5D98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB5DA0"))) PPC_WEAK_FUNC(sub_82DB5DA0);
PPC_FUNC_IMPL(__imp__sub_82DB5DA0) {
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
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82db5df4
	if (ctx.cr6.lt) goto loc_82DB5DF4;
	// bne cr6,0x82db5e14
	if (!ctx.cr6.eq) goto loc_82DB5E14;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB5DE0;
	sub_82CB61F0(ctx, base);
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
loc_82DB5DF4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB5E14;
	sub_82CB61F0(ctx, base);
loc_82DB5E14:
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

__attribute__((alias("__imp__sub_82DB5E28"))) PPC_WEAK_FUNC(sub_82DB5E28);
PPC_FUNC_IMPL(__imp__sub_82DB5E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82DB5E30;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ae4
	ctx.lr = 0x82DB5E38;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f27,f2
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f2.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82db5f68
	if (ctx.cr6.lt) goto loc_82DB5F68;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fdivs f31,f0,f1
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// addi r28,r27,552
	ctx.r28.s64 = ctx.r27.s64 + 552;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// addi r31,r27,284
	ctx.r31.s64 = ctx.r27.s64 + 284;
	// lwz r11,1244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1244);
	// addi r30,r27,588
	ctx.r30.s64 = ctx.r27.s64 + 588;
	// li r26,2
	ctx.r26.s64 = 2;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f28.f64 = double(temp.f32);
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
loc_82DB5E9C:
	// lfs f13,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82db5c38
	ctx.lr = 0x82DB5F00;
	sub_82DB5C38(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x82db5f3c
	if (ctx.cr6.eq) goto loc_82DB5F3C;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82DB5F18:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82db5f18
	if (!ctx.cr6.eq) goto loc_82DB5F18;
loc_82DB5F3C:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// fmuls f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82db5e9c
	if (!ctx.cr6.eq) goto loc_82DB5E9C;
	// stfs f29,548(r27)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r27.u32 + 548, temp.u32);
loc_82DB5F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b30
	ctx.lr = 0x82DB5F78;
	__restfpr_27(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB5F7C"))) PPC_WEAK_FUNC(sub_82DB5F7C);
PPC_FUNC_IMPL(__imp__sub_82DB5F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5F80"))) PPC_WEAK_FUNC(sub_82DB5F80);
PPC_FUNC_IMPL(__imp__sub_82DB5F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db5f90
	if (!ctx.cr6.eq) goto loc_82DB5F90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB5F90:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82db5fa4
	if (!ctx.cr6.eq) goto loc_82DB5FA4;
	// stfs f1,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DB5FA4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82db5fb0
	if (!ctx.cr6.eq) goto loc_82DB5FB0;
	// stfs f1,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
loc_82DB5FB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB5FB8"))) PPC_WEAK_FUNC(sub_82DB5FB8);
PPC_FUNC_IMPL(__imp__sub_82DB5FB8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db5fc8
	if (!ctx.cr6.eq) goto loc_82DB5FC8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB5FC8:
	// b 0x82db5da0
	sub_82DB5DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB5FCC"))) PPC_WEAK_FUNC(sub_82DB5FCC);
PPC_FUNC_IMPL(__imp__sub_82DB5FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5FD0"))) PPC_WEAK_FUNC(sub_82DB5FD0);
PPC_FUNC_IMPL(__imp__sub_82DB5FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB5FD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// stfs f0,596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f0,604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f13,588(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stfs f13,592(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f13,612(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// lfs f12,5656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5656);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f12,600(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stfs f13,616(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// lfs f12,5652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5652);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,624(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// ble cr6,0x82db6098
	if (!ctx.cr6.gt) goto loc_82DB6098;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DB6058:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB607C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db60b4
	if (!ctx.cr6.eq) goto loc_82DB60B4;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db6058
	if (ctx.cr6.lt) goto loc_82DB6058;
loc_82DB6098:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f2.f64 = double(temp.f32);
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f2,276(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// bl 0x82db5e28
	ctx.lr = 0x82DB60B0;
	sub_82DB5E28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB60B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB60BC"))) PPC_WEAK_FUNC(sub_82DB60BC);
PPC_FUNC_IMPL(__imp__sub_82DB60BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB60C0"))) PPC_WEAK_FUNC(sub_82DB60C0);
PPC_FUNC_IMPL(__imp__sub_82DB60C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DB60C8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ab0
	ctx.lr = 0x82DB60D0;
	__savefpr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82db66d8
	if (ctx.cr6.eq) goto loc_82DB66D8;
	// lfs f1,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82db6110
	if (!ctx.cr6.eq) goto loc_82DB6110;
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82db6124
	if (ctx.cr6.eq) goto loc_82DB6124;
loc_82DB6110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f2.f64 = double(temp.f32);
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f2,276(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// bl 0x82db5e28
	ctx.lr = 0x82DB6124;
	sub_82DB5E28(ctx, base);
loc_82DB6124:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82db61f4
	if (!ctx.cr6.eq) goto loc_82DB61F4;
	// addi r11,r31,292
	ctx.r11.s64 = ctx.r31.s64 + 292;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82db66d8
	if (ctx.cr6.eq) goto loc_82DB66D8;
	// lis r9,-31909
	ctx.r9.s64 = -2091188224;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// lfs f12,27300(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27300);
	ctx.f12.f64 = double(temp.f32);
loc_82DB6144:
	// lfs f9,564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f6,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f4.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f8,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lfs f5,568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f5.f64 = double(temp.f32);
	// fadds f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// lfs f3,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f3.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f2,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f0,f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f9.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f9,f1,f13,f4
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmsubs f8,f7,f3,f6
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 - ctx.f6.f64));
	// fnmsubs f13,f5,f13,f0
	ctx.f13.f64 = double(float(-(ctx.f5.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// fnmsubs f0,f31,f11,f8
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f11.f64 - ctx.f8.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fnmsubs f13,f10,f2,f13
	ctx.f13.f64 = double(float(-(ctx.f10.f64 * ctx.f2.f64 - ctx.f13.f64)));
	// fadds f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// bne cr6,0x82db6144
	if (!ctx.cr6.eq) goto loc_82DB6144;
	// stfs f12,27300(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 27300, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6afc
	ctx.lr = 0x82DB61F0;
	__restfpr_14(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB61F4:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x82db632c
	if (!ctx.cr6.eq) goto loc_82DB632C;
	// addi r10,r31,292
	ctx.r10.s64 = ctx.r31.s64 + 292;
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82db66d8
	if (ctx.cr6.eq) goto loc_82DB66D8;
	// lis r8,-31909
	ctx.r8.s64 = -2091188224;
	// addi r9,r27,-4
	ctx.r9.s64 = ctx.r27.s64 + -4;
	// lfs f0,27300(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27300);
	ctx.f0.f64 = double(temp.f32);
loc_82DB6218:
	// lfs f11,564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f25,f9,f11
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f29,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f5,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f5.f64 = double(temp.f32);
	// fadds f27,f29,f0
	ctx.f27.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f28,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f24,f5,f13
	ctx.f24.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f26,f28,f0
	ctx.f26.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// fmuls f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// lfs f10,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f6.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f4,568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f4.f64 = double(temp.f32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f25,f13,f10,f25
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f25.f64));
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f8,f10,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f11.f64));
	// lfs f2,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f2.f64 = double(temp.f32);
	// lfs f29,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmsubs f10,f27,f6,f24
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f6.f64 - ctx.f24.f64));
	// lfs f30,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f1,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f8,f26,f6,f5
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f6.f64 - ctx.f5.f64));
	// lfs f28,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f28.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fnmsubs f6,f12,f4,f25
	ctx.f6.f64 = double(float(-(ctx.f12.f64 * ctx.f4.f64 - ctx.f25.f64)));
	// fnmsubs f5,f3,f4,f11
	ctx.f5.f64 = double(float(-(ctx.f3.f64 * ctx.f4.f64 - ctx.f11.f64)));
	// fmuls f4,f31,f29
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fnmsubs f11,f9,f2,f10
	ctx.f11.f64 = double(float(-(ctx.f9.f64 * ctx.f2.f64 - ctx.f10.f64)));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fnmsubs f10,f7,f2,f8
	ctx.f10.f64 = double(float(-(ctx.f7.f64 * ctx.f2.f64 - ctx.f8.f64)));
	// fmuls f7,f30,f29
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// fnmsubs f9,f31,f1,f6
	ctx.f9.f64 = double(float(-(ctx.f31.f64 * ctx.f1.f64 - ctx.f6.f64)));
	// fnmsubs f8,f30,f1,f5
	ctx.f8.f64 = double(float(-(ctx.f30.f64 * ctx.f1.f64 - ctx.f5.f64)));
	// fmadds f13,f12,f28,f4
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f4.f64));
	// fmadds f12,f3,f28,f7
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f28.f64 + ctx.f7.f64));
	// fadds f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,-4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fadds f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne cr6,0x82db6218
	if (!ctx.cr6.eq) goto loc_82DB6218;
	// stfs f0,27300(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 27300, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6afc
	ctx.lr = 0x82DB6328;
	__restfpr_14(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB632C:
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bne cr6,0x82db6604
	if (!ctx.cr6.eq) goto loc_82DB6604;
	// addi r6,r31,292
	ctx.r6.s64 = ctx.r31.s64 + 292;
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
	// addi r10,r31,324
	ctx.r10.s64 = ctx.r31.s64 + 324;
	// addi r9,r31,340
	ctx.r9.s64 = ctx.r31.s64 + 340;
	// addi r8,r31,356
	ctx.r8.s64 = ctx.r31.s64 + 356;
	// addi r7,r31,372
	ctx.r7.s64 = ctx.r31.s64 + 372;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82db66d8
	if (ctx.cr6.eq) goto loc_82DB66D8;
	// lis r4,-31909
	ctx.r4.s64 = -2091188224;
	// addi r5,r27,-20
	ctx.r5.s64 = ctx.r27.s64 + -20;
	// lfs f0,27300(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 27300);
	ctx.f0.f64 = double(temp.f32);
loc_82DB6360:
	// lfs f10,552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f18,f10,f6
	ctx.f18.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fadds f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f17,f10,f30
	ctx.f17.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// lfs f29,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f16,f10,f29
	ctx.f16.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// lfs f28,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f31,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f15,f10,f28
	ctx.f15.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// lfs f27,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// lfs f21,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f14,f10,f27
	ctx.f14.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fadds f21,f21,f0
	ctx.f21.f64 = double(float(ctx.f21.f64 + ctx.f0.f64));
	// lfs f11,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f3,f3,f11,f18
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 - ctx.f18.f64));
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f26,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f19,f4,f13
	ctx.f19.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmsubs f2,f2,f11,f17
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 - ctx.f17.f64));
	// lfs f20,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f20.f64 = double(temp.f32);
	// lfs f25,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f10,f10,f26
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fmsubs f1,f1,f11,f16
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 - ctx.f16.f64));
	// lfs f8,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f8.f64 = double(temp.f32);
	// fadds f20,f20,f0
	ctx.f20.f64 = double(float(ctx.f20.f64 + ctx.f0.f64));
	// lfs f24,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// fmsubs f31,f31,f11,f15
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 - ctx.f15.f64));
	// lfs f23,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f15,f25,f13
	ctx.f15.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// lfs f22,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f21,f21,f11,f14
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f11.f64 - ctx.f14.f64));
	// lfs f12,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f14,f24,f13
	ctx.f14.f64 = double(float(ctx.f24.f64 * ctx.f13.f64));
	// lfs f9,568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f4,f4,f8,f3
	ctx.f4.f64 = double(float(-(ctx.f4.f64 * ctx.f8.f64 - ctx.f3.f64)));
	// lfs f5,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f19,f6,f12,f19
	ctx.f19.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f19.f64));
	// lfs f7,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f3,f25,f8,f2
	ctx.f3.f64 = double(float(-(ctx.f25.f64 * ctx.f8.f64 - ctx.f2.f64)));
	// lfs f18,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f17.f64 = double(temp.f32);
	// fnmsubs f2,f24,f8,f1
	ctx.f2.f64 = double(float(-(ctx.f24.f64 * ctx.f8.f64 - ctx.f1.f64)));
	// lfs f16,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f16.f64 = double(temp.f32);
	// fmsubs f11,f20,f11,f10
	ctx.f11.f64 = double(float(ctx.f20.f64 * ctx.f11.f64 - ctx.f10.f64));
	// lfs f20,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f20.f64 = double(temp.f32);
	// fnmsubs f1,f23,f8,f31
	ctx.f1.f64 = double(float(-(ctx.f23.f64 * ctx.f8.f64 - ctx.f31.f64)));
	// lfs f25,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f23,f23,f13
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// lfs f24,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f24.f64 = double(temp.f32);
	// fnmsubs f31,f22,f8,f21
	ctx.f31.f64 = double(float(-(ctx.f22.f64 * ctx.f8.f64 - ctx.f21.f64)));
	// lfs f21,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f22,f22,f13
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// fmuls f13,f21,f13
	ctx.f13.f64 = double(float(ctx.f21.f64 * ctx.f13.f64));
	// fmadds f30,f30,f12,f15
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f15.f64));
	// fnmsubs f10,f5,f9,f19
	ctx.f10.f64 = double(float(-(ctx.f5.f64 * ctx.f9.f64 - ctx.f19.f64)));
	// fnmsubs f8,f21,f8,f11
	ctx.f8.f64 = double(float(-(ctx.f21.f64 * ctx.f8.f64 - ctx.f11.f64)));
	// lfs f11,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f21,f29,f12,f14
	ctx.f21.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f14.f64));
	// fmadds f28,f28,f12,f23
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 + ctx.f23.f64));
	// fmuls f23,f20,f11
	ctx.f23.f64 = double(float(ctx.f20.f64 * ctx.f11.f64));
	// fmadds f27,f27,f12,f22
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f12.f64 + ctx.f22.f64));
	// fmadds f26,f26,f12,f13
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f30,f13,f9,f30
	ctx.f30.f64 = double(float(-(ctx.f13.f64 * ctx.f9.f64 - ctx.f30.f64)));
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f19,f20,f7,f10
	ctx.f19.f64 = double(float(-(ctx.f20.f64 * ctx.f7.f64 - ctx.f10.f64)));
	// lfs f10,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f22,f18,f9,f21
	ctx.f22.f64 = double(float(-(ctx.f18.f64 * ctx.f9.f64 - ctx.f21.f64)));
	// fnmsubs f28,f17,f9,f28
	ctx.f28.f64 = double(float(-(ctx.f17.f64 * ctx.f9.f64 - ctx.f28.f64)));
	// fnmsubs f27,f16,f9,f27
	ctx.f27.f64 = double(float(-(ctx.f16.f64 * ctx.f9.f64 - ctx.f27.f64)));
	// fnmsubs f26,f25,f9,f26
	ctx.f26.f64 = double(float(-(ctx.f25.f64 * ctx.f9.f64 - ctx.f26.f64)));
	// fnmsubs f29,f12,f7,f30
	ctx.f29.f64 = double(float(-(ctx.f12.f64 * ctx.f7.f64 - ctx.f30.f64)));
	// fmuls f21,f12,f11
	ctx.f21.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f15,f9,f11
	ctx.f15.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f9,f9,f7,f28
	ctx.f9.f64 = double(float(-(ctx.f9.f64 * ctx.f7.f64 - ctx.f28.f64)));
	// lfs f30,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f28,f5,f10,f23
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f23.f64));
	// stfs f6,4(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f20,f12,f11
	ctx.f20.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f5,12(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmuls f14,f30,f11
	ctx.f14.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f11,f24,f11
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f11.f64));
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// fnmsubs f30,f30,f7,f27
	ctx.f30.f64 = double(float(-(ctx.f30.f64 * ctx.f7.f64 - ctx.f27.f64)));
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// fnmsubs f12,f12,f7,f22
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * ctx.f7.f64 - ctx.f22.f64)));
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// fadds f6,f19,f4
	ctx.f6.f64 = double(float(ctx.f19.f64 + ctx.f4.f64));
	// stfs f6,8(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmadds f13,f13,f10,f21
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f21.f64));
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f7,f24,f7,f26
	ctx.f7.f64 = double(float(-(ctx.f24.f64 * ctx.f7.f64 - ctx.f26.f64)));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f26,f17,f10,f15
	ctx.f26.f64 = double(float(ctx.f17.f64 * ctx.f10.f64 + ctx.f15.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f6,f28,f19
	ctx.f6.f64 = double(float(ctx.f28.f64 + ctx.f19.f64));
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// fmadds f27,f18,f10,f20
	ctx.f27.f64 = double(float(ctx.f18.f64 * ctx.f10.f64 + ctx.f20.f64));
	// fmadds f23,f16,f10,f14
	ctx.f23.f64 = double(float(ctx.f16.f64 * ctx.f10.f64 + ctx.f14.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fadds f28,f13,f29
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f13,f25,f10,f11
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fadds f5,f26,f9
	ctx.f5.f64 = double(float(ctx.f26.f64 + ctx.f9.f64));
	// fadds f11,f29,f3
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f3.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f27,f27,f12
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f12.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f26,f23,f30
	ctx.f26.f64 = double(float(ctx.f23.f64 + ctx.f30.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f10,12(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fadds f11,f9,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fadds f12,f30,f31
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// stfs f2,0(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f30,f7,f8
	ctx.f30.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f9,12(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fadds f9,f28,f3
	ctx.f9.f64 = double(float(ctx.f28.f64 + ctx.f3.f64));
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fadds f11,f5,f1
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f10,f6,f4
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f6,f27,f2
	ctx.f6.f64 = double(float(ctx.f27.f64 + ctx.f2.f64));
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f26,f31
	ctx.f4.f64 = double(float(ctx.f26.f64 + ctx.f31.f64));
	// lfs f3,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f3,12(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stfs f31,0(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f5,12(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f30,8(r7)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f10,-4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + -4, temp.u32);
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f6,4(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f4,12(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f13,16(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// bne cr6,0x82db6360
	if (!ctx.cr6.eq) goto loc_82DB6360;
	// stfs f0,27300(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 27300, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6afc
	ctx.lr = 0x82DB6600;
	__restfpr_14(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB6604:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82db66d8
	if (ctx.cr6.eq) goto loc_82DB66D8;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lis r6,-31909
	ctx.r6.s64 = -2091188224;
loc_82DB6618:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82db66c8
	if (!ctx.cr6.gt) goto loc_82DB66C8;
	// addi r10,r31,548
	ctx.r10.s64 = ctx.r31.s64 + 548;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r11,r31,296
	ctx.r11.s64 = ctx.r31.s64 + 296;
	// subf r7,r27,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r27.s64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82DB6634:
	// lfsx f13,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lfs f0,27296(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 27296);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,27296(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 27296, temp.u32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fnmsubs f11,f0,f11,f13
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f11,f10,f12,f11
	ctx.f11.f64 = double(float(-(ctx.f10.f64 * ctx.f12.f64 - ctx.f11.f64)));
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f7,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f10,f9,f0,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f12,f8,f12,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fnmsubs f12,f11,f13,f12
	ctx.f12.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fnmsubs f12,f9,f0,f12
	ctx.f12.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmadds f13,f7,f13,f12
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f0,f6,f0,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82db6634
	if (!ctx.cr6.eq) goto loc_82DB6634;
loc_82DB66C8:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82db6618
	if (!ctx.cr6.eq) goto loc_82DB6618;
loc_82DB66D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6afc
	ctx.lr = 0x82DB66E8;
	__restfpr_14(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB66EC"))) PPC_WEAK_FUNC(sub_82DB66EC);
PPC_FUNC_IMPL(__imp__sub_82DB66EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB66F0"))) PPC_WEAK_FUNC(sub_82DB66F0);
PPC_FUNC_IMPL(__imp__sub_82DB66F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db6700
	if (!ctx.cr6.eq) goto loc_82DB6700;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB6700:
	// b 0x82db5fd0
	sub_82DB5FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6704"))) PPC_WEAK_FUNC(sub_82DB6704);
PPC_FUNC_IMPL(__imp__sub_82DB6704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6708"))) PPC_WEAK_FUNC(sub_82DB6708);
PPC_FUNC_IMPL(__imp__sub_82DB6708) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db6718
	if (!ctx.cr6.eq) goto loc_82DB6718;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB6718:
	// b 0x82db60c0
	sub_82DB60C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB671C"))) PPC_WEAK_FUNC(sub_82DB671C);
PPC_FUNC_IMPL(__imp__sub_82DB671C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6720"))) PPC_WEAK_FUNC(sub_82DB6720);
PPC_FUNC_IMPL(__imp__sub_82DB6720) {
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
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,27160
	ctx.r31.s64 = ctx.r11.s64 + 27160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB6748;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5660
	ctx.r4.s64 = ctx.r11.s64 + 5660;
	// bl 0x82da4448
	ctx.lr = 0x82DB6758;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r11,r11,27064
	ctx.r11.s64 = ctx.r11.s64 + 27064;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r6,26352
	ctx.r10.s64 = ctx.r6.s64 + 26352;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r7,26376
	ctx.r10.s64 = ctx.r7.s64 + 26376;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,24448
	ctx.r11.s64 = ctx.r8.s64 + 24448;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,24504
	ctx.r11.s64 = ctx.r9.s64 + 24504;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,632
	ctx.r11.s64 = 632;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB67D8"))) PPC_WEAK_FUNC(sub_82DB67D8);
PPC_FUNC_IMPL(__imp__sub_82DB67D8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82db6804
	if (ctx.cr6.eq) goto loc_82DB6804;
loc_82DB67EC:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82db67ec
	if (!ctx.cr6.eq) goto loc_82DB67EC;
loc_82DB6804:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB680C"))) PPC_WEAK_FUNC(sub_82DB680C);
PPC_FUNC_IMPL(__imp__sub_82DB680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6810"))) PPC_WEAK_FUNC(sub_82DB6810);
PPC_FUNC_IMPL(__imp__sub_82DB6810) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82da76a0
	sub_82DA76A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6820"))) PPC_WEAK_FUNC(sub_82DB6820);
PPC_FUNC_IMPL(__imp__sub_82DB6820) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82da7e70
	sub_82DA7E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6828"))) PPC_WEAK_FUNC(sub_82DB6828);
PPC_FUNC_IMPL(__imp__sub_82DB6828) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db6838
	if (!ctx.cr6.eq) goto loc_82DB6838;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB6838:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82de89a0
	sub_82DE89A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6848"))) PPC_WEAK_FUNC(sub_82DB6848);
PPC_FUNC_IMPL(__imp__sub_82DB6848) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 640, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB6858"))) PPC_WEAK_FUNC(sub_82DB6858);
PPC_FUNC_IMPL(__imp__sub_82DB6858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB6868"))) PPC_WEAK_FUNC(sub_82DB6868);
PPC_FUNC_IMPL(__imp__sub_82DB6868) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da4420
	ctx.lr = 0x82DB688C;
	sub_82DA4420(ctx, base);
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// blt cr6,0x82db689c
	if (ctx.cr6.lt) goto loc_82DB689C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82db68b0
	goto loc_82DB68B0;
loc_82DB689C:
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4468
	ctx.lr = 0x82DB68AC;
	sub_82DA4468(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB68B0:
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

__attribute__((alias("__imp__sub_82DB68C8"))) PPC_WEAK_FUNC(sub_82DB68C8);
PPC_FUNC_IMPL(__imp__sub_82DB68C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DB68D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82db68f8
	if (!ctx.cr6.eq) goto loc_82DB68F8;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB68F8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5680
	ctx.r5.s64 = ctx.r11.s64 + 5680;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,657
	ctx.r6.s64 = 657;
	// li r4,92
	ctx.r4.s64 = 92;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB691C;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82db6930
	if (!ctx.cr6.eq) goto loc_82DB6930;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB6930:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r10,r30,256
	ctx.xer.ca = ctx.r30.u32 > 4294967039;
	ctx.r10.s64 = ctx.r30.s64 + 256;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// addi r11,r30,304
	ctx.r11.s64 = ctx.r30.s64 + 304;
	// bne 0x82db69e0
	if (!ctx.cr0.eq) goto loc_82DB69E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB69E0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82db6a0c
	if (ctx.cr6.eq) goto loc_82DB6A0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82DB6A0C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82db6a48
	if (ctx.cr6.eq) goto loc_82DB6A48;
	// addi r10,r30,304
	ctx.r10.s64 = ctx.r30.s64 + 304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82db6a40
	if (ctx.cr6.eq) goto loc_82DB6A40;
loc_82DB6A28:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82db6a44
	if (ctx.cr6.eq) goto loc_82DB6A44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82db6a28
	if (!ctx.cr6.eq) goto loc_82DB6A28;
loc_82DB6A40:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82DB6A44:
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_82DB6A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6A54"))) PPC_WEAK_FUNC(sub_82DB6A54);
PPC_FUNC_IMPL(__imp__sub_82DB6A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6A58"))) PPC_WEAK_FUNC(sub_82DB6A58);
PPC_FUNC_IMPL(__imp__sub_82DB6A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DB6A60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82db6a88
	if (!ctx.cr6.eq) goto loc_82DB6A88;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB6A88:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5680
	ctx.r5.s64 = ctx.r11.s64 + 5680;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,723
	ctx.r6.s64 = 723;
	// li r4,92
	ctx.r4.s64 = 92;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB6AAC;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82db6ac0
	if (!ctx.cr6.eq) goto loc_82DB6AC0;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB6AC0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,232
	ctx.r9.s64 = 232;
	// addic. r8,r30,256
	ctx.xer.ca = ctx.r30.u32 > 4294967039;
	ctx.r8.s64 = ctx.r30.s64 + 256;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// addi r10,r30,304
	ctx.r10.s64 = ctx.r30.s64 + 304;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// bne 0x82db6b58
	if (!ctx.cr0.eq) goto loc_82DB6B58;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82DB6B58:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82db6b84
	if (ctx.cr6.eq) goto loc_82DB6B84;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_82DB6B84:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82db6bc0
	if (ctx.cr6.eq) goto loc_82DB6BC0;
	// addi r10,r30,304
	ctx.r10.s64 = ctx.r30.s64 + 304;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82db6bb8
	if (ctx.cr6.eq) goto loc_82DB6BB8;
loc_82DB6BA0:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82db6bbc
	if (ctx.cr6.eq) goto loc_82DB6BBC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82db6ba0
	if (!ctx.cr6.eq) goto loc_82DB6BA0;
loc_82DB6BB8:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82DB6BBC:
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_82DB6BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6BCC"))) PPC_WEAK_FUNC(sub_82DB6BCC);
PPC_FUNC_IMPL(__imp__sub_82DB6BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6BD0"))) PPC_WEAK_FUNC(sub_82DB6BD0);
PPC_FUNC_IMPL(__imp__sub_82DB6BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DB6BD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82db6c00
	if (!ctx.cr6.eq) goto loc_82DB6C00;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB6C00:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5680
	ctx.r5.s64 = ctx.r11.s64 + 5680;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,789
	ctx.r6.s64 = 789;
	// li r4,136
	ctx.r4.s64 = 136;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB6C24;
	sub_82D862B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82db6c3c
	if (!ctx.cr6.eq) goto loc_82DB6C3C;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB6C3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da4448
	ctx.lr = 0x82DB6C48;
	sub_82DA4448(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addic. r10,r29,348
	ctx.xer.ca = ctx.r29.u32 > 4294966947;
	ctx.r10.s64 = ctx.r29.s64 + 348;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r11,r29,440
	ctx.r11.s64 = ctx.r29.s64 + 440;
	// bne 0x82db6d10
	if (!ctx.cr0.eq) goto loc_82DB6D10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB6D10:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r31,92
	ctx.r8.s64 = ctx.r31.s64 + 92;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82db6d3c
	if (ctx.cr6.eq) goto loc_82DB6D3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82DB6D3C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82db6d78
	if (ctx.cr6.eq) goto loc_82DB6D78;
	// addi r10,r29,440
	ctx.r10.s64 = ctx.r29.s64 + 440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82db6d70
	if (ctx.cr6.eq) goto loc_82DB6D70;
loc_82DB6D58:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82db6d74
	if (ctx.cr6.eq) goto loc_82DB6D74;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82db6d58
	if (!ctx.cr6.eq) goto loc_82DB6D58;
loc_82DB6D70:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82DB6D74:
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82DB6D78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6D84"))) PPC_WEAK_FUNC(sub_82DB6D84);
PPC_FUNC_IMPL(__imp__sub_82DB6D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6D88"))) PPC_WEAK_FUNC(sub_82DB6D88);
PPC_FUNC_IMPL(__imp__sub_82DB6D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DB6D90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82db6db8
	if (!ctx.cr6.eq) goto loc_82DB6DB8;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB6DB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5680
	ctx.r5.s64 = ctx.r11.s64 + 5680;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,864
	ctx.r6.s64 = 864;
	// li r4,136
	ctx.r4.s64 = 136;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB6DDC;
	sub_82D862B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82db6df4
	if (!ctx.cr6.eq) goto loc_82DB6DF4;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB6DF4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da4448
	ctx.lr = 0x82DB6E00;
	sub_82DA4448(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,252
	ctx.r10.s64 = 252;
	// li r8,5
	ctx.r8.s64 = 5;
	// addic. r7,r29,348
	ctx.xer.ca = ctx.r29.u32 > 4294966947;
	ctx.r7.s64 = ctx.r29.s64 + 348;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r11,r29,440
	ctx.r11.s64 = ctx.r29.s64 + 440;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// bne 0x82db6ea8
	if (!ctx.cr0.eq) goto loc_82DB6EA8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82DB6EA8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r31,92
	ctx.r8.s64 = ctx.r31.s64 + 92;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82db6ed4
	if (ctx.cr6.eq) goto loc_82DB6ED4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82DB6ED4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82db6f0c
	if (ctx.cr6.eq) goto loc_82DB6F0C;
	// addi r10,r29,440
	ctx.r10.s64 = ctx.r29.s64 + 440;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82db6f04
	if (ctx.cr6.eq) goto loc_82DB6F04;
loc_82DB6EEC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82db6f08
	if (ctx.cr6.eq) goto loc_82DB6F08;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82db6eec
	if (!ctx.cr6.eq) goto loc_82DB6EEC;
loc_82DB6F04:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82DB6F08:
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82DB6F0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6F18"))) PPC_WEAK_FUNC(sub_82DB6F18);
PPC_FUNC_IMPL(__imp__sub_82DB6F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DB6F20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82db6f48
	if (!ctx.cr6.eq) goto loc_82DB6F48;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB6F48:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5680
	ctx.r5.s64 = ctx.r11.s64 + 5680;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,933
	ctx.r6.s64 = 933;
	// li r4,156
	ctx.r4.s64 = 156;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB6F6C;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82db6f80
	if (!ctx.cr6.eq) goto loc_82DB6F80;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB6F80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r10,r30,484
	ctx.xer.ca = ctx.r30.u32 > 4294966811;
	ctx.r10.s64 = ctx.r30.s64 + 484;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// addi r11,r30,536
	ctx.r11.s64 = ctx.r30.s64 + 536;
	// bne 0x82db70c4
	if (!ctx.cr0.eq) goto loc_82DB70C4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82DB70C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r3,52
	ctx.r8.s64 = ctx.r3.s64 + 52;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82db70ec
	if (ctx.cr6.eq) goto loc_82DB70EC;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_82DB70EC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82db7124
	if (ctx.cr6.eq) goto loc_82DB7124;
	// addi r10,r30,536
	ctx.r10.s64 = ctx.r30.s64 + 536;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82db711c
	if (ctx.cr6.eq) goto loc_82DB711C;
loc_82DB7104:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82db7120
	if (ctx.cr6.eq) goto loc_82DB7120;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82db7104
	if (!ctx.cr6.eq) goto loc_82DB7104;
loc_82DB711C:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82DB7120:
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_82DB7124:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB7130"))) PPC_WEAK_FUNC(sub_82DB7130);
PPC_FUNC_IMPL(__imp__sub_82DB7130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DB7138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82db7160
	if (!ctx.cr6.eq) goto loc_82DB7160;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB7160:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5680
	ctx.r5.s64 = ctx.r11.s64 + 5680;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,1018
	ctx.r6.s64 = 1018;
	// li r4,156
	ctx.r4.s64 = 156;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB7184;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82db7198
	if (!ctx.cr6.eq) goto loc_82DB7198;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB7198:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,224
	ctx.r8.s64 = 224;
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r7,r30,484
	ctx.xer.ca = ctx.r30.u32 > 4294966811;
	ctx.r7.s64 = ctx.r30.s64 + 484;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// addi r11,r30,536
	ctx.r11.s64 = ctx.r30.s64 + 536;
	// bne 0x82db7220
	if (!ctx.cr0.eq) goto loc_82DB7220;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82DB7220:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r3,52
	ctx.r8.s64 = ctx.r3.s64 + 52;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82db7248
	if (ctx.cr6.eq) goto loc_82DB7248;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_82DB7248:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82db7280
	if (ctx.cr6.eq) goto loc_82DB7280;
	// addi r10,r30,536
	ctx.r10.s64 = ctx.r30.s64 + 536;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82db7278
	if (ctx.cr6.eq) goto loc_82DB7278;
loc_82DB7260:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82db727c
	if (ctx.cr6.eq) goto loc_82DB727C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82db7260
	if (!ctx.cr6.eq) goto loc_82DB7260;
loc_82DB7278:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82DB727C:
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_82DB7280:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB728C"))) PPC_WEAK_FUNC(sub_82DB728C);
PPC_FUNC_IMPL(__imp__sub_82DB728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7290"))) PPC_WEAK_FUNC(sub_82DB7290);
PPC_FUNC_IMPL(__imp__sub_82DB7290) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82db72a0
	if (!ctx.cr6.eq) goto loc_82DB72A0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82DB72A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,256
	ctx.r9.s64 = ctx.r3.s64 + 256;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// bne cr6,0x82db72c0
	if (!ctx.cr6.eq) goto loc_82DB72C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB72C0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82db72f0
	if (ctx.cr6.eq) goto loc_82DB72F0;
loc_82DB72C8:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// bne cr6,0x82db72e8
	if (!ctx.cr6.eq) goto loc_82DB72E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB72E8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82db72c8
	if (!ctx.cr6.eq) goto loc_82DB72C8;
loc_82DB72F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB72F8"))) PPC_WEAK_FUNC(sub_82DB72F8);
PPC_FUNC_IMPL(__imp__sub_82DB72F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82db7308
	if (!ctx.cr6.eq) goto loc_82DB7308;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82DB7308:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,348
	ctx.r9.s64 = ctx.r3.s64 + 348;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-92
	ctx.r11.s64 = ctx.r11.s64 + -92;
	// bne cr6,0x82db7328
	if (!ctx.cr6.eq) goto loc_82DB7328;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB7328:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82db7358
	if (ctx.cr6.eq) goto loc_82DB7358;
loc_82DB7330:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-92
	ctx.r11.s64 = ctx.r11.s64 + -92;
	// bne cr6,0x82db7350
	if (!ctx.cr6.eq) goto loc_82DB7350;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB7350:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82db7330
	if (!ctx.cr6.eq) goto loc_82DB7330;
loc_82DB7358:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7360"))) PPC_WEAK_FUNC(sub_82DB7360);
PPC_FUNC_IMPL(__imp__sub_82DB7360) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82db7370
	if (!ctx.cr6.eq) goto loc_82DB7370;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82DB7370:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,484
	ctx.r9.s64 = ctx.r3.s64 + 484;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// bne cr6,0x82db7390
	if (!ctx.cr6.eq) goto loc_82DB7390;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB7390:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82db73c0
	if (ctx.cr6.eq) goto loc_82DB73C0;
loc_82DB7398:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// bne cr6,0x82db73b8
	if (!ctx.cr6.eq) goto loc_82DB73B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB73B8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82db7398
	if (!ctx.cr6.eq) goto loc_82DB7398;
loc_82DB73C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB73C8"))) PPC_WEAK_FUNC(sub_82DB73C8);
PPC_FUNC_IMPL(__imp__sub_82DB73C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82db73d8
	if (!ctx.cr6.eq) goto loc_82DB73D8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82DB73D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,256
	ctx.r9.s64 = ctx.r3.s64 + 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// bne cr6,0x82db73fc
	if (!ctx.cr6.eq) goto loc_82DB73FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB73FC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82db742c
	if (ctx.cr6.eq) goto loc_82DB742C;
loc_82DB7404:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82db7434
	if (ctx.cr6.eq) goto loc_82DB7434;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// bne cr6,0x82db7424
	if (!ctx.cr6.eq) goto loc_82DB7424;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB7424:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82db7404
	if (!ctx.cr6.eq) goto loc_82DB7404;
loc_82DB742C:
	// li r3,66
	ctx.r3.s64 = 66;
	// blr 
	return;
loc_82DB7434:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7440"))) PPC_WEAK_FUNC(sub_82DB7440);
PPC_FUNC_IMPL(__imp__sub_82DB7440) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82db7450
	if (!ctx.cr6.eq) goto loc_82DB7450;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82DB7450:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,348
	ctx.r9.s64 = ctx.r3.s64 + 348;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-92
	ctx.r11.s64 = ctx.r11.s64 + -92;
	// bne cr6,0x82db7474
	if (!ctx.cr6.eq) goto loc_82DB7474;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB7474:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82db74a4
	if (ctx.cr6.eq) goto loc_82DB74A4;
loc_82DB747C:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82db74ac
	if (ctx.cr6.eq) goto loc_82DB74AC;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-92
	ctx.r11.s64 = ctx.r11.s64 + -92;
	// bne cr6,0x82db749c
	if (!ctx.cr6.eq) goto loc_82DB749C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB749C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82db747c
	if (!ctx.cr6.eq) goto loc_82DB747C;
loc_82DB74A4:
	// li r3,66
	ctx.r3.s64 = 66;
	// blr 
	return;
loc_82DB74AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB74B8"))) PPC_WEAK_FUNC(sub_82DB74B8);
PPC_FUNC_IMPL(__imp__sub_82DB74B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82db74c8
	if (!ctx.cr6.eq) goto loc_82DB74C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82DB74C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,484
	ctx.r9.s64 = ctx.r3.s64 + 484;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// bne cr6,0x82db74ec
	if (!ctx.cr6.eq) goto loc_82DB74EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB74EC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82db751c
	if (ctx.cr6.eq) goto loc_82DB751C;
loc_82DB74F4:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82db7524
	if (ctx.cr6.eq) goto loc_82DB7524;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// bne cr6,0x82db7514
	if (!ctx.cr6.eq) goto loc_82DB7514;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB7514:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82db74f4
	if (!ctx.cr6.eq) goto loc_82DB74F4;
loc_82DB751C:
	// li r3,66
	ctx.r3.s64 = 66;
	// blr 
	return;
loc_82DB7524:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7530"))) PPC_WEAK_FUNC(sub_82DB7530);
PPC_FUNC_IMPL(__imp__sub_82DB7530) {
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
	// bl 0x82d96640
	ctx.lr = 0x82DB7548;
	sub_82D96640(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,5752
	ctx.r11.s64 = ctx.r11.s64 + 5752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB756C"))) PPC_WEAK_FUNC(sub_82DB756C);
PPC_FUNC_IMPL(__imp__sub_82DB756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7570"))) PPC_WEAK_FUNC(sub_82DB7570);
PPC_FUNC_IMPL(__imp__sub_82DB7570) {
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
	// bl 0x82df6560
	ctx.lr = 0x82DB7588;
	sub_82DF6560(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,5840
	ctx.r11.s64 = ctx.r11.s64 + 5840;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB75AC"))) PPC_WEAK_FUNC(sub_82DB75AC);
PPC_FUNC_IMPL(__imp__sub_82DB75AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB75B0"))) PPC_WEAK_FUNC(sub_82DB75B0);
PPC_FUNC_IMPL(__imp__sub_82DB75B0) {
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
	// bl 0x82d96640
	ctx.lr = 0x82DB75C8;
	sub_82D96640(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,5928
	ctx.r11.s64 = ctx.r11.s64 + 5928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB75EC"))) PPC_WEAK_FUNC(sub_82DB75EC);
PPC_FUNC_IMPL(__imp__sub_82DB75EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB75F0"))) PPC_WEAK_FUNC(sub_82DB75F0);
PPC_FUNC_IMPL(__imp__sub_82DB75F0) {
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
	// bl 0x82d96640
	ctx.lr = 0x82DB7608;
	sub_82D96640(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,6016
	ctx.r11.s64 = ctx.r11.s64 + 6016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB762C"))) PPC_WEAK_FUNC(sub_82DB762C);
PPC_FUNC_IMPL(__imp__sub_82DB762C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7630"))) PPC_WEAK_FUNC(sub_82DB7630);
PPC_FUNC_IMPL(__imp__sub_82DB7630) {
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
	// bl 0x82df6560
	ctx.lr = 0x82DB764C;
	sub_82DF6560(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,388
	ctx.r30.s64 = ctx.r31.s64 + 388;
	// addi r11,r11,6104
	ctx.r11.s64 = ctx.r11.s64 + 6104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82da8228
	ctx.lr = 0x82DB7664;
	sub_82DA8228(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-960
	ctx.r11.s64 = ctx.r11.s64 + -960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB7694"))) PPC_WEAK_FUNC(sub_82DB7694);
PPC_FUNC_IMPL(__imp__sub_82DB7694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7698"))) PPC_WEAK_FUNC(sub_82DB7698);
PPC_FUNC_IMPL(__imp__sub_82DB7698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DB76A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82db7798
	if (ctx.cr6.eq) goto loc_82DB7798;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82db7798
	if (ctx.cr6.eq) goto loc_82DB7798;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82db770c
	if (ctx.cr6.eq) goto loc_82DB770C;
	// cmplwi cr6,r4,528
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 528, ctx.xer);
	// bge cr6,0x82db76dc
	if (!ctx.cr6.lt) goto loc_82DB76DC;
	// li r4,528
	ctx.r4.s64 = 528;
loc_82DB76DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5680
	ctx.r5.s64 = ctx.r11.s64 + 5680;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,1818
	ctx.r6.s64 = 1818;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB76FC;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82db7750
	if (ctx.cr6.eq) goto loc_82DB7750;
	// bl 0x82de6930
	ctx.lr = 0x82DB7708;
	sub_82DE6930(ctx, base);
	// b 0x82db7744
	goto loc_82DB7744;
loc_82DB770C:
	// cmplwi cr6,r4,224
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 224, ctx.xer);
	// bge cr6,0x82db7718
	if (!ctx.cr6.lt) goto loc_82DB7718;
	// li r4,224
	ctx.r4.s64 = 224;
loc_82DB7718:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5680
	ctx.r5.s64 = ctx.r11.s64 + 5680;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,1822
	ctx.r6.s64 = 1822;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB7738;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82db7750
	if (ctx.cr6.eq) goto loc_82DB7750;
	// bl 0x82de0c70
	ctx.lr = 0x82DB7744;
	sub_82DE0C70(ctx, base);
loc_82DB7744:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82db7764
	if (!ctx.cr6.eq) goto loc_82DB7764;
loc_82DB7750:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,42
	ctx.r3.s64 = 42;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB7764:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r5,156
	ctx.r5.s64 = 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82DB7774;
	sub_82CB1160(ctx, base);
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// lwz r10,640(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 640);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB7798:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB77A4"))) PPC_WEAK_FUNC(sub_82DB77A4);
PPC_FUNC_IMPL(__imp__sub_82DB77A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB77A8"))) PPC_WEAK_FUNC(sub_82DB77A8);
PPC_FUNC_IMPL(__imp__sub_82DB77A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB77C0"))) PPC_WEAK_FUNC(sub_82DB77C0);
PPC_FUNC_IMPL(__imp__sub_82DB77C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DB77C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82da4468
	ctx.lr = 0x82DB7808;
	sub_82DA4468(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82da4420
	ctx.lr = 0x82DB7810;
	sub_82DA4420(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82db7858
	if (ctx.cr6.eq) goto loc_82DB7858;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// bl 0x82da4420
	ctx.lr = 0x82DB7828;
	sub_82DA4420(ctx, base);
	// lbzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82db7858
	if (ctx.cr6.eq) goto loc_82DB7858;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82da4420
	ctx.lr = 0x82DB783C;
	sub_82DA4420(ctx, base);
	// lbzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82db7858
	if (ctx.cr6.eq) goto loc_82DB7858;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,6372
	ctx.r4.s64 = ctx.r11.s64 + 6372;
	// bl 0x82da4498
	ctx.lr = 0x82DB7858;
	sub_82DA4498(ctx, base);
loc_82DB7858:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82da4498
	ctx.lr = 0x82DB7864;
	sub_82DA4498(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82da4420
	ctx.lr = 0x82DB786C;
	sub_82DA4420(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82da4380
	ctx.lr = 0x82DB7878;
	sub_82DA4380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82db7894
	if (ctx.cr6.eq) goto loc_82DB7894;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4380
	ctx.lr = 0x82DB788C;
	sub_82DA4380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db7aa4
	if (!ctx.cr6.eq) goto loc_82DB7AA4;
loc_82DB7894:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,21574
	ctx.r31.s64 = ctx.r11.s64 + 21574;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,6344
	ctx.r4.s64 = ctx.r11.s64 + 6344;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82cb61f0
	ctx.lr = 0x82DB78B4;
	sub_82CB61F0(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da4388
	ctx.lr = 0x82DB78C4;
	sub_82DA4388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db78f4
	if (!ctx.cr6.eq) goto loc_82DB78F4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DB78D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82db6a58
	ctx.lr = 0x82DB78EC;
	sub_82DB6A58(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB78F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,6312
	ctx.r4.s64 = ctx.r11.s64 + 6312;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb61f0
	ctx.lr = 0x82DB790C;
	sub_82CB61F0(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da4388
	ctx.lr = 0x82DB791C;
	sub_82DA4388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db794c
	if (!ctx.cr6.eq) goto loc_82DB794C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DB7930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82db68c8
	ctx.lr = 0x82DB7944;
	sub_82DB68C8(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB794C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,6284
	ctx.r4.s64 = ctx.r11.s64 + 6284;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb61f0
	ctx.lr = 0x82DB7964;
	sub_82CB61F0(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da4388
	ctx.lr = 0x82DB7974;
	sub_82DA4388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db79a4
	if (!ctx.cr6.eq) goto loc_82DB79A4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DB7988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82db6d88
	ctx.lr = 0x82DB799C;
	sub_82DB6D88(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB79A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,6256
	ctx.r4.s64 = ctx.r11.s64 + 6256;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb61f0
	ctx.lr = 0x82DB79BC;
	sub_82CB61F0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da4388
	ctx.lr = 0x82DB79CC;
	sub_82DA4388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db79fc
	if (!ctx.cr6.eq) goto loc_82DB79FC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DB79E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82db6bd0
	ctx.lr = 0x82DB79F4;
	sub_82DB6BD0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB79FC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,6224
	ctx.r4.s64 = ctx.r11.s64 + 6224;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb61f0
	ctx.lr = 0x82DB7A14;
	sub_82CB61F0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da4388
	ctx.lr = 0x82DB7A24;
	sub_82DA4388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db7a54
	if (!ctx.cr6.eq) goto loc_82DB7A54;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DB7A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82db7130
	ctx.lr = 0x82DB7A4C;
	sub_82DB7130(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB7A54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,6192
	ctx.r4.s64 = ctx.r11.s64 + 6192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb61f0
	ctx.lr = 0x82DB7A6C;
	sub_82CB61F0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da4388
	ctx.lr = 0x82DB7A7C;
	sub_82DA4388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db7aa4
	if (!ctx.cr6.eq) goto loc_82DB7AA4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DB7A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82db6f18
	ctx.lr = 0x82DB7AA4;
	sub_82DB6F18(ctx, base);
loc_82DB7AA4:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB7AAC"))) PPC_WEAK_FUNC(sub_82DB7AAC);
PPC_FUNC_IMPL(__imp__sub_82DB7AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7AB0"))) PPC_WEAK_FUNC(sub_82DB7AB0);
PPC_FUNC_IMPL(__imp__sub_82DB7AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB7AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82db7bbc
	if (ctx.cr6.lt) goto loc_82DB7BBC;
	// beq cr6,0x82db7b88
	if (ctx.cr6.eq) goto loc_82DB7B88;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82db7ae4
	if (ctx.cr6.lt) goto loc_82DB7AE4;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DB7AE4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82db7440
	ctx.lr = 0x82DB7AEC;
	sub_82DB7440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db7c38
	if (!ctx.cr6.eq) goto loc_82DB7C38;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r29,-31909
	ctx.r29.s64 = -2091188224;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,5680
	ctx.r30.s64 = ctx.r11.s64 + 5680;
	// beq cr6,0x82db7b38
	if (ctx.cr6.eq) goto loc_82DB7B38;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db7b38
	if (ctx.cr6.eq) goto loc_82DB7B38;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,609
	ctx.r6.s64 = 609;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB7B38;
	sub_82D861B0(ctx, base);
loc_82DB7B38:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db7b4c
	if (ctx.cr6.eq) goto loc_82DB7B4C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82da4390
	ctx.lr = 0x82DB7B4C;
	sub_82DA4390(ctx, base);
loc_82DB7B4C:
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,620
	ctx.r6.s64 = 620;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// b 0x82db7c24
	goto loc_82DB7C24;
loc_82DB7B88:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82db73c8
	ctx.lr = 0x82DB7B90;
	sub_82DB73C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db7c38
	if (!ctx.cr6.eq) goto loc_82DB7C38;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db7bb0
	if (ctx.cr6.eq) goto loc_82DB7BB0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82da4390
	ctx.lr = 0x82DB7BB0;
	sub_82DA4390(ctx, base);
loc_82DB7BB0:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// li r6,592
	ctx.r6.s64 = 592;
	// b 0x82db7bec
	goto loc_82DB7BEC;
loc_82DB7BBC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82db74b8
	ctx.lr = 0x82DB7BC4;
	sub_82DB74B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db7c38
	if (!ctx.cr6.eq) goto loc_82DB7C38;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db7be4
	if (ctx.cr6.eq) goto loc_82DB7BE4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82da4390
	ctx.lr = 0x82DB7BE4;
	sub_82DA4390(ctx, base);
loc_82DB7BE4:
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// li r6,572
	ctx.r6.s64 = 572;
loc_82DB7BEC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r10,5680
	ctx.r5.s64 = ctx.r10.s64 + 5680;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
loc_82DB7C24:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d861b0
	ctx.lr = 0x82DB7C34;
	sub_82D861B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB7C38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB7C40"))) PPC_WEAK_FUNC(sub_82DB7C40);
PPC_FUNC_IMPL(__imp__sub_82DB7C40) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r8,r9,-556
	ctx.r8.s64 = ctx.r9.s64 + -556;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r7,r7,6376
	ctx.r7.s64 = ctx.r7.s64 + 6376;
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// addi r4,r4,26640
	ctx.r4.s64 = ctx.r4.s64 + 26640;
	// addi r5,r5,26656
	ctx.r5.s64 = ctx.r5.s64 + 26656;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// addi r6,r6,26664
	ctx.r6.s64 = ctx.r6.s64 + 26664;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r9,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r9.u32);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7CB8"))) PPC_WEAK_FUNC(sub_82DB7CB8);
PPC_FUNC_IMPL(__imp__sub_82DB7CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DB7CC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r28,304
	ctx.r31.s64 = ctx.r28.s64 + 304;
	// addi r30,r28,440
	ctx.r30.s64 = ctx.r28.s64 + 440;
	// addi r29,r28,536
	ctx.r29.s64 = ctx.r28.s64 + 536;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r29,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r29.u32);
	// stw r29,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r29.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// stw r27,640(r28)
	PPC_STORE_U32(ctx.r28.u32 + 640, ctx.r27.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82DB7D0C;
	sub_82CB16F0(ctx, base);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r29,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r29.u32);
	// stw r29,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r29.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB7D3C"))) PPC_WEAK_FUNC(sub_82DB7D3C);
PPC_FUNC_IMPL(__imp__sub_82DB7D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7D40"))) PPC_WEAK_FUNC(sub_82DB7D40);
PPC_FUNC_IMPL(__imp__sub_82DB7D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82DB7D48;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82db7290
	ctx.lr = 0x82DB7D58;
	sub_82DB7290(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db7fc8
	if (!ctx.cr6.eq) goto loc_82DB7FC8;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r11,5680
	ctx.r28.s64 = ctx.r11.s64 + 5680;
	// lis r27,-31909
	ctx.r27.s64 = -2091188224;
	// ble cr6,0x82db7e00
	if (!ctx.cr6.gt) goto loc_82DB7E00;
loc_82DB7D80:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82db73c8
	ctx.lr = 0x82DB7D90;
	sub_82DB73C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db7fc8
	if (!ctx.cr6.eq) goto loc_82DB7FC8;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db7db0
	if (ctx.cr6.eq) goto loc_82DB7DB0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82da4390
	ctx.lr = 0x82DB7DB0;
	sub_82DA4390(ctx, base);
loc_82DB7DB0:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,592
	ctx.r6.s64 = 592;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB7DF4;
	sub_82D861B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82db7d80
	if (ctx.cr6.lt) goto loc_82DB7D80;
loc_82DB7E00:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82db72f8
	ctx.lr = 0x82DB7E0C;
	sub_82DB72F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db7fc8
	if (!ctx.cr6.eq) goto loc_82DB7FC8;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82db7ed8
	if (!ctx.cr6.gt) goto loc_82DB7ED8;
loc_82DB7E24:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82db7440
	ctx.lr = 0x82DB7E34;
	sub_82DB7440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db7fc8
	if (!ctx.cr6.eq) goto loc_82DB7FC8;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db7e74
	if (ctx.cr6.eq) goto loc_82DB7E74;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db7e74
	if (ctx.cr6.eq) goto loc_82DB7E74;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,609
	ctx.r6.s64 = 609;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB7E74;
	sub_82D861B0(ctx, base);
loc_82DB7E74:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db7e88
	if (ctx.cr6.eq) goto loc_82DB7E88;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82da4390
	ctx.lr = 0x82DB7E88;
	sub_82DA4390(ctx, base);
loc_82DB7E88:
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,620
	ctx.r6.s64 = 620;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB7ECC;
	sub_82D861B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82db7e24
	if (ctx.cr6.lt) goto loc_82DB7E24;
loc_82DB7ED8:
	// addi r10,r25,484
	ctx.r10.s64 = ctx.r25.s64 + 484;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// bne cr6,0x82db7ef4
	if (!ctx.cr6.eq) goto loc_82DB7EF4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82DB7EF4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82db7f1c
	if (ctx.cr6.eq) goto loc_82DB7F1C;
loc_82DB7EFC:
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// bne cr6,0x82db7f14
	if (!ctx.cr6.eq) goto loc_82DB7F14;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82DB7F14:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82db7efc
	if (!ctx.cr6.eq) goto loc_82DB7EFC;
loc_82DB7F1C:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82db7fa8
	if (!ctx.cr6.gt) goto loc_82DB7FA8;
loc_82DB7F28:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82db74b8
	ctx.lr = 0x82DB7F38;
	sub_82DB74B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db7fc8
	if (!ctx.cr6.eq) goto loc_82DB7FC8;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db7f58
	if (ctx.cr6.eq) goto loc_82DB7F58;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82da4390
	ctx.lr = 0x82DB7F58;
	sub_82DA4390(ctx, base);
loc_82DB7F58:
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,572
	ctx.r6.s64 = 572;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB7F9C;
	sub_82D861B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82db7f28
	if (ctx.cr6.lt) goto loc_82DB7F28;
loc_82DB7FA8:
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,141
	ctx.r6.s64 = 141;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB7FC4;
	sub_82D861B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB7FC8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB7FD0"))) PPC_WEAK_FUNC(sub_82DB7FD0);
PPC_FUNC_IMPL(__imp__sub_82DB7FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB7FD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82db8080
	if (ctx.cr6.eq) goto loc_82DB8080;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82db8080
	if (ctx.cr6.eq) goto loc_82DB8080;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r4,232
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 232, ctx.xer);
	// bge cr6,0x82db8004
	if (!ctx.cr6.lt) goto loc_82DB8004;
	// li r4,232
	ctx.r4.s64 = 232;
loc_82DB8004:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5680
	ctx.r5.s64 = ctx.r11.s64 + 5680;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,1339
	ctx.r6.s64 = 1339;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB8024;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82db803c
	if (ctx.cr6.eq) goto loc_82DB803C;
	// bl 0x82db7c40
	ctx.lr = 0x82DB8030;
	sub_82DB7C40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82db8048
	if (!ctx.cr6.eq) goto loc_82DB8048;
loc_82DB803C:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DB8048:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82DB8058;
	sub_82CB1160(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82db8074
	if (!ctx.cr6.eq) goto loc_82DB8074;
	// lis r11,-32037
	ctx.r11.s64 = -2099576832;
	// addi r11,r11,-29112
	ctx.r11.s64 = ctx.r11.s64 + -29112;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_82DB8074:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DB8080:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB808C"))) PPC_WEAK_FUNC(sub_82DB808C);
PPC_FUNC_IMPL(__imp__sub_82DB808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB8090"))) PPC_WEAK_FUNC(sub_82DB8090);
PPC_FUNC_IMPL(__imp__sub_82DB8090) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r8,r9,-556
	ctx.r8.s64 = ctx.r9.s64 + -556;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// addi r7,r7,6380
	ctx.r7.s64 = ctx.r7.s64 + 6380;
	// addi r4,r4,26640
	ctx.r4.s64 = ctx.r4.s64 + 26640;
	// addi r5,r5,26656
	ctx.r5.s64 = ctx.r5.s64 + 26656;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// addi r6,r6,26664
	ctx.r6.s64 = ctx.r6.s64 + 26664;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r9,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r9.u32);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB8108"))) PPC_WEAK_FUNC(sub_82DB8108);
PPC_FUNC_IMPL(__imp__sub_82DB8108) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r8,r9,-556
	ctx.r8.s64 = ctx.r9.s64 + -556;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// addi r7,r7,6384
	ctx.r7.s64 = ctx.r7.s64 + 6384;
	// addi r4,r4,26640
	ctx.r4.s64 = ctx.r4.s64 + 26640;
	// addi r5,r5,26656
	ctx.r5.s64 = ctx.r5.s64 + 26656;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// addi r6,r6,26664
	ctx.r6.s64 = ctx.r6.s64 + 26664;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r9,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r9.u32);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB8180"))) PPC_WEAK_FUNC(sub_82DB8180);
PPC_FUNC_IMPL(__imp__sub_82DB8180) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r8,r9,-556
	ctx.r8.s64 = ctx.r9.s64 + -556;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// addi r7,r7,6388
	ctx.r7.s64 = ctx.r7.s64 + 6388;
	// addi r4,r4,26640
	ctx.r4.s64 = ctx.r4.s64 + 26640;
	// addi r5,r5,26656
	ctx.r5.s64 = ctx.r5.s64 + 26656;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// addi r6,r6,26664
	ctx.r6.s64 = ctx.r6.s64 + 26664;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r9,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r9.u32);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB81F8"))) PPC_WEAK_FUNC(sub_82DB81F8);
PPC_FUNC_IMPL(__imp__sub_82DB81F8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r8,r9,-556
	ctx.r8.s64 = ctx.r9.s64 + -556;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// addi r7,r7,6392
	ctx.r7.s64 = ctx.r7.s64 + 6392;
	// addi r4,r4,26640
	ctx.r4.s64 = ctx.r4.s64 + 26640;
	// addi r5,r5,26656
	ctx.r5.s64 = ctx.r5.s64 + 26656;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// addi r6,r6,26664
	ctx.r6.s64 = ctx.r6.s64 + 26664;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r9,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r9.u32);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB8270"))) PPC_WEAK_FUNC(sub_82DB8270);
PPC_FUNC_IMPL(__imp__sub_82DB8270) {
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
	// bl 0x82df6560
	ctx.lr = 0x82DB828C;
	sub_82DF6560(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,388
	ctx.r30.s64 = ctx.r31.s64 + 388;
	// addi r11,r11,6104
	ctx.r11.s64 = ctx.r11.s64 + 6104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82da8228
	ctx.lr = 0x82DB82A4;
	sub_82DA8228(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-960
	ctx.r10.s64 = ctx.r10.s64 + -960;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r31,10480
	ctx.r11.s64 = ctx.r31.s64 + 10480;
	// stw r6,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r6.u32);
	// addi r9,r9,6400
	ctx.r9.s64 = ctx.r9.s64 + 6400;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// addi r7,r8,-556
	ctx.r7.s64 = ctx.r8.s64 + -556;
	// addi r30,r10,26664
	ctx.r30.s64 = ctx.r10.s64 + 26664;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// addi r6,r9,6380
	ctx.r6.s64 = ctx.r9.s64 + 6380;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// addi r4,r4,26640
	ctx.r4.s64 = ctx.r4.s64 + 26640;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r5,r5,26656
	ctx.r5.s64 = ctx.r5.s64 + 26656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,19872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19872);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r8,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r8.u32);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82DB8358"))) PPC_WEAK_FUNC(sub_82DB8358);
PPC_FUNC_IMPL(__imp__sub_82DB8358) {
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
	// bl 0x82df6560
	ctx.lr = 0x82DB8374;
	sub_82DF6560(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,388
	ctx.r30.s64 = ctx.r31.s64 + 388;
	// addi r11,r11,6104
	ctx.r11.s64 = ctx.r11.s64 + 6104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82da8228
	ctx.lr = 0x82DB838C;
	sub_82DA8228(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-960
	ctx.r10.s64 = ctx.r10.s64 + -960;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r31,1776
	ctx.r11.s64 = ctx.r31.s64 + 1776;
	// stw r6,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r6.u32);
	// addi r9,r9,6488
	ctx.r9.s64 = ctx.r9.s64 + 6488;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// addi r7,r8,-556
	ctx.r7.s64 = ctx.r8.s64 + -556;
	// addi r30,r10,26664
	ctx.r30.s64 = ctx.r10.s64 + 26664;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// addi r6,r9,6384
	ctx.r6.s64 = ctx.r9.s64 + 6384;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// addi r4,r4,26640
	ctx.r4.s64 = ctx.r4.s64 + 26640;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r5,r5,26656
	ctx.r5.s64 = ctx.r5.s64 + 26656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,19872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19872);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r8,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r8.u32);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82DB8440"))) PPC_WEAK_FUNC(sub_82DB8440);
PPC_FUNC_IMPL(__imp__sub_82DB8440) {
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
	// bl 0x82df6560
	ctx.lr = 0x82DB845C;
	sub_82DF6560(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,388
	ctx.r30.s64 = ctx.r31.s64 + 388;
	// addi r11,r11,6104
	ctx.r11.s64 = ctx.r11.s64 + 6104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82da8228
	ctx.lr = 0x82DB8474;
	sub_82DA8228(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-960
	ctx.r10.s64 = ctx.r10.s64 + -960;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r31,5360
	ctx.r11.s64 = ctx.r31.s64 + 5360;
	// stw r6,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r6.u32);
	// addi r9,r9,6576
	ctx.r9.s64 = ctx.r9.s64 + 6576;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// addi r7,r8,-556
	ctx.r7.s64 = ctx.r8.s64 + -556;
	// addi r30,r10,26664
	ctx.r30.s64 = ctx.r10.s64 + 26664;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// addi r6,r9,6388
	ctx.r6.s64 = ctx.r9.s64 + 6388;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// addi r4,r4,26640
	ctx.r4.s64 = ctx.r4.s64 + 26640;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r5,r5,26656
	ctx.r5.s64 = ctx.r5.s64 + 26656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,19872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19872);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r8,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r8.u32);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82DB8528"))) PPC_WEAK_FUNC(sub_82DB8528);
PPC_FUNC_IMPL(__imp__sub_82DB8528) {
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
	// bl 0x82df6560
	ctx.lr = 0x82DB8544;
	sub_82DF6560(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,388
	ctx.r30.s64 = ctx.r31.s64 + 388;
	// addi r11,r11,6104
	ctx.r11.s64 = ctx.r11.s64 + 6104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82da8228
	ctx.lr = 0x82DB855C;
	sub_82DA8228(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-960
	ctx.r10.s64 = ctx.r10.s64 + -960;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r31,9840
	ctx.r11.s64 = ctx.r31.s64 + 9840;
	// stw r6,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r6.u32);
	// addi r9,r9,6664
	ctx.r9.s64 = ctx.r9.s64 + 6664;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// addi r7,r8,-556
	ctx.r7.s64 = ctx.r8.s64 + -556;
	// addi r30,r10,26664
	ctx.r30.s64 = ctx.r10.s64 + 26664;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// addi r6,r9,6392
	ctx.r6.s64 = ctx.r9.s64 + 6392;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// addi r4,r4,26640
	ctx.r4.s64 = ctx.r4.s64 + 26640;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r5,r5,26656
	ctx.r5.s64 = ctx.r5.s64 + 26656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,19872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19872);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r8,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r8.u32);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82DB8610"))) PPC_WEAK_FUNC(sub_82DB8610);
PPC_FUNC_IMPL(__imp__sub_82DB8610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82DB8618;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82db8914
	if (ctx.cr6.eq) goto loc_82DB8914;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82db8914
	if (ctx.cr6.eq) goto loc_82DB8914;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,112(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// lis r28,-31909
	ctx.r28.s64 = -2091188224;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,5680
	ctx.r29.s64 = ctx.r11.s64 + 5680;
	// bne cr6,0x82db885c
	if (!ctx.cr6.eq) goto loc_82DB885C;
	// lwz r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82db8914
	if (ctx.cr6.gt) goto loc_82DB8914;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,-31112
	ctx.r12.s64 = ctx.r12.s64 + -31112;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DB8698;
	case 1:
		goto loc_82DB86E8;
	case 2:
		goto loc_82DB86E8;
	case 3:
		goto loc_82DB86E8;
	case 4:
		goto loc_82DB86E8;
	case 5:
		goto loc_82DB87C0;
	case 6:
		goto loc_82DB8800;
	case 7:
		goto loc_82DB8780;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-31080(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31080);
	// lwz r22,-31000(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31000);
	// lwz r22,-31000(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31000);
	// lwz r22,-31000(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31000);
	// lwz r22,-31000(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31000);
	// lwz r22,-30784(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -30784);
	// lwz r22,-30720(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -30720);
	// lwz r22,-30848(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -30848);
loc_82DB8698:
	// cmplwi cr6,r4,268
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 268, ctx.xer);
	// bge cr6,0x82db86a4
	if (!ctx.cr6.lt) goto loc_82DB86A4;
	// li r4,268
	ctx.r4.s64 = 268;
loc_82DB86A4:
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1467
	ctx.r6.s64 = 1467;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB86BC;
	sub_82D862B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82db86d4
	if (!ctx.cr6.eq) goto loc_82DB86D4;
loc_82DB86C8:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82DB86D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d96640
	ctx.lr = 0x82DB86DC;
	sub_82D96640(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,5752
	ctx.r11.s64 = ctx.r11.s64 + 5752;
	// b 0x82db883c
	goto loc_82DB883C;
loc_82DB86E8:
	// cmplwi cr6,r4,1120
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1120, ctx.xer);
	// bge cr6,0x82db86f4
	if (!ctx.cr6.lt) goto loc_82DB86F4;
	// li r4,1120
	ctx.r4.s64 = 1120;
loc_82DB86F4:
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82db8704
	if (!ctx.cr6.eq) goto loc_82DB8704;
	// lis r7,48
	ctx.r7.s64 = 3145728;
loc_82DB8704:
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r6,1573
	ctx.r6.s64 = 1573;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB8718;
	sub_82D862B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82db86c8
	if (ctx.cr6.eq) goto loc_82DB86C8;
	// lwz r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82db8738
	if (!ctx.cr6.eq) goto loc_82DB8738;
	// bl 0x82db8270
	ctx.lr = 0x82DB8734;
	sub_82DB8270(ctx, base);
	// b 0x82db8840
	goto loc_82DB8840;
loc_82DB8738:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82db874c
	if (!ctx.cr6.eq) goto loc_82DB874C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db8358
	ctx.lr = 0x82DB8748;
	sub_82DB8358(ctx, base);
	// b 0x82db8840
	goto loc_82DB8840;
loc_82DB874C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82db8760
	if (!ctx.cr6.eq) goto loc_82DB8760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db8440
	ctx.lr = 0x82DB875C;
	sub_82DB8440(ctx, base);
	// b 0x82db8840
	goto loc_82DB8840;
loc_82DB8760:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82db8774
	if (!ctx.cr6.eq) goto loc_82DB8774;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db8528
	ctx.lr = 0x82DB8770;
	sub_82DB8528(ctx, base);
	// b 0x82db8840
	goto loc_82DB8840;
loc_82DB8774:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82DB8780:
	// cmplwi cr6,r4,384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 384, ctx.xer);
	// bge cr6,0x82db878c
	if (!ctx.cr6.lt) goto loc_82DB878C;
	// li r4,384
	ctx.r4.s64 = 384;
loc_82DB878C:
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1643
	ctx.r6.s64 = 1643;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB87A4;
	sub_82D862B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82db86c8
	if (ctx.cr6.eq) goto loc_82DB86C8;
	// bl 0x82df6560
	ctx.lr = 0x82DB87B4;
	sub_82DF6560(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,5840
	ctx.r11.s64 = ctx.r11.s64 + 5840;
	// b 0x82db883c
	goto loc_82DB883C;
loc_82DB87C0:
	// cmplwi cr6,r4,276
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 276, ctx.xer);
	// bge cr6,0x82db87cc
	if (!ctx.cr6.lt) goto loc_82DB87CC;
	// li r4,276
	ctx.r4.s64 = 276;
loc_82DB87CC:
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1662
	ctx.r6.s64 = 1662;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB87E4;
	sub_82D862B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82db8848
	if (ctx.cr6.eq) goto loc_82DB8848;
	// bl 0x82d96640
	ctx.lr = 0x82DB87F4;
	sub_82D96640(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,5928
	ctx.r11.s64 = ctx.r11.s64 + 5928;
	// b 0x82db883c
	goto loc_82DB883C;
loc_82DB8800:
	// cmplwi cr6,r4,304
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 304, ctx.xer);
	// bge cr6,0x82db880c
	if (!ctx.cr6.lt) goto loc_82DB880C;
	// li r4,304
	ctx.r4.s64 = 304;
loc_82DB880C:
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1693
	ctx.r6.s64 = 1693;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB8824;
	sub_82D862B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82db86c8
	if (ctx.cr6.eq) goto loc_82DB86C8;
	// bl 0x82d96640
	ctx.lr = 0x82DB8834;
	sub_82D96640(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,6016
	ctx.r11.s64 = ctx.r11.s64 + 6016;
loc_82DB883C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DB8840:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82db885c
	if (!ctx.cr6.eq) goto loc_82DB885C;
loc_82DB8848:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,42
	ctx.r3.s64 = 42;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82DB885C:
	// lwz r11,640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DB887C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82db88b0
	if (ctx.cr6.eq) goto loc_82DB88B0;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1723
	ctx.r6.s64 = 1723;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB88A4;
	sub_82D861B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82DB88B0:
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db8904
	if (ctx.cr6.eq) goto loc_82DB8904;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DB88D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82db8904
	if (ctx.cr6.eq) goto loc_82DB8904;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1768
	ctx.r6.s64 = 1768;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB88F8;
	sub_82D861B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82DB8904:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82DB8914:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB8920"))) PPC_WEAK_FUNC(sub_82DB8920);
PPC_FUNC_IMPL(__imp__sub_82DB8920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB8928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82db8990
	if (!ctx.cr6.gt) goto loc_82DB8990;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DB8950:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB8974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db8994
	if (!ctx.cr6.eq) goto loc_82DB8994;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db8950
	if (ctx.cr6.lt) goto loc_82DB8950;
loc_82DB8990:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB8994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB899C"))) PPC_WEAK_FUNC(sub_82DB899C);
PPC_FUNC_IMPL(__imp__sub_82DB899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB89A0"))) PPC_WEAK_FUNC(sub_82DB89A0);
PPC_FUNC_IMPL(__imp__sub_82DB89A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB89A8"))) PPC_WEAK_FUNC(sub_82DB89A8);
PPC_FUNC_IMPL(__imp__sub_82DB89A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB89B0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82db9224
	if (ctx.cr6.eq) goto loc_82DB9224;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82db9224
	if (ctx.cr6.gt) goto loc_82DB9224;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,-30224
	ctx.r12.s64 = ctx.r12.s64 + -30224;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DB8A08;
	case 1:
		goto loc_82DB8A70;
	case 2:
		goto loc_82DB8C48;
	case 3:
		goto loc_82DB8D9C;
	case 4:
		goto loc_82DB8EF0;
	case 5:
		goto loc_82DB91C8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-30200(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -30200);
	// lwz r22,-30096(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -30096);
	// lwz r22,-29624(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29624);
	// lwz r22,-29284(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29284);
	// lwz r22,-28944(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28944);
	// lwz r22,-28216(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28216);
loc_82DB8A08:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82db9224
	if (ctx.cr6.eq) goto loc_82DB9224;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f31,-18292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18292);
	ctx.f31.f64 = double(temp.f32);
loc_82DB8A1C:
	// lfs f1,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb4860
	ctx.lr = 0x82DB8A24;
	sub_82CB4860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82db8a4c
	if (ctx.cr6.lt) goto loc_82DB8A4C;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8A4C:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82db8a1c
	if (!ctx.cr6.eq) goto loc_82DB8A1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DB8A70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82db8bc8
	if (ctx.cr6.lt) goto loc_82DB8BC8;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB8A98:
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8ae0
	if (ctx.cr6.lt) goto loc_82DB8AE0;
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// stw r8,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r8.u32);
loc_82DB8AE0:
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8b28
	if (ctx.cr6.lt) goto loc_82DB8B28;
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// stw r8,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r8.u32);
loc_82DB8B28:
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8b70
	if (ctx.cr6.lt) goto loc_82DB8B70;
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// stw r8,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r8.u32);
loc_82DB8B70:
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8bb8
	if (ctx.cr6.lt) goto loc_82DB8BB8;
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// stw r8,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r8.u32);
loc_82DB8BB8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db8a98
	if (!ctx.cr6.eq) goto loc_82DB8A98;
loc_82DB8BC8:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9224
	if (!ctx.cr6.lt) goto loc_82DB9224;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82DB8BDC:
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8c24
	if (ctx.cr6.lt) goto loc_82DB8C24;
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
loc_82DB8C24:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db8bdc
	if (!ctx.cr6.eq) goto loc_82DB8BDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DB8C48:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// lfs f12,7676(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82db8d38
	if (ctx.cr6.lt) goto loc_82DB8D38;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB8C78:
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8ca4
	if (ctx.cr6.lt) goto loc_82DB8CA4;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8CA4:
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8cd0
	if (ctx.cr6.lt) goto loc_82DB8CD0;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8CD0:
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8cfc
	if (ctx.cr6.lt) goto loc_82DB8CFC;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8CFC:
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8d28
	if (ctx.cr6.lt) goto loc_82DB8D28;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8D28:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db8c78
	if (!ctx.cr6.eq) goto loc_82DB8C78;
loc_82DB8D38:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9224
	if (!ctx.cr6.lt) goto loc_82DB9224;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82DB8D4C:
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8d78
	if (ctx.cr6.lt) goto loc_82DB8D78;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8D78:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db8d4c
	if (!ctx.cr6.eq) goto loc_82DB8D4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DB8D9C:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// lfs f12,-18204(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18204);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82db8e8c
	if (ctx.cr6.lt) goto loc_82DB8E8C;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB8DCC:
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8df8
	if (ctx.cr6.lt) goto loc_82DB8DF8;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8DF8:
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8e24
	if (ctx.cr6.lt) goto loc_82DB8E24;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8E24:
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8e50
	if (ctx.cr6.lt) goto loc_82DB8E50;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8E50:
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8e7c
	if (ctx.cr6.lt) goto loc_82DB8E7C;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8E7C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db8dcc
	if (!ctx.cr6.eq) goto loc_82DB8DCC;
loc_82DB8E8C:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9224
	if (!ctx.cr6.lt) goto loc_82DB9224;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82DB8EA0:
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db8ecc
	if (ctx.cr6.lt) goto loc_82DB8ECC;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8ECC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db8ea0
	if (!ctx.cr6.eq) goto loc_82DB8EA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DB8EF0:
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// lfs f10,-18324(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x82db9118
	if (ctx.cr6.lt) goto loc_82DB9118;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB8F28:
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lfs f13,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lfs f0,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f0,f9,f11,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82db8f6c
	if (ctx.cr6.gt) goto loc_82DB8F6C;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82db8fa0
	if (!ctx.cr6.lt) goto loc_82DB8FA0;
loc_82DB8F6C:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// lfs f9,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB8FA0:
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lfs f13,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lfs f0,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f0,f9,f11,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82db8fe4
	if (ctx.cr6.gt) goto loc_82DB8FE4;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82db9018
	if (!ctx.cr6.lt) goto loc_82DB9018;
loc_82DB8FE4:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// lfs f9,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB9018:
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lfs f13,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lfs f0,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f0,f9,f11,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82db905c
	if (ctx.cr6.gt) goto loc_82DB905C;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82db9090
	if (!ctx.cr6.lt) goto loc_82DB9090;
loc_82DB905C:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// lfs f9,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB9090:
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lfs f13,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lfs f0,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f9,128(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f0,f9,f11,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82db90d4
	if (ctx.cr6.gt) goto loc_82DB90D4;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82db9108
	if (!ctx.cr6.lt) goto loc_82DB9108;
loc_82DB90D4:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// lfs f9,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB9108:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82db8f28
	if (!ctx.cr6.eq) goto loc_82DB8F28;
loc_82DB9118:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9224
	if (!ctx.cr6.lt) goto loc_82DB9224;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r8,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r8.s64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82DB912C:
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lfs f13,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lfs f0,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f9,136(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f0,f9,f11,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82db9170
	if (ctx.cr6.gt) goto loc_82DB9170;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82db91a4
	if (!ctx.cr6.lt) goto loc_82DB91A4;
loc_82DB9170:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// lfs f9,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82DB91A4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82db912c
	if (!ctx.cr6.eq) goto loc_82DB912C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DB91C8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82db9224
	if (ctx.cr6.eq) goto loc_82DB9224;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f30,-16476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16476);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
loc_82DB91E4:
	// bl 0x82cb2308
	ctx.lr = 0x82DB91E8;
	sub_82CB2308(ctx, base);
	// srawi r11,r3,15
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 15;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// rlwinm r11,r11,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f0,f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f31.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x82db91e4
	if (!ctx.cr6.eq) goto loc_82DB91E4;
loc_82DB9224:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB9238"))) PPC_WEAK_FUNC(sub_82DB9238);
PPC_FUNC_IMPL(__imp__sub_82DB9238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82db9250
	if (ctx.cr6.lt) goto loc_82DB9250;
	// bne cr6,0x82db925c
	if (!ctx.cr6.eq) goto loc_82DB925C;
	// stfs f1,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// b 0x82db925c
	goto loc_82DB925C;
loc_82DB9250:
	// addi r10,r11,272
	ctx.r10.s64 = ctx.r11.s64 + 272;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
loc_82DB925C:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f0,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
	// lwz r10,1244(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1244);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB9294"))) PPC_WEAK_FUNC(sub_82DB9294);
PPC_FUNC_IMPL(__imp__sub_82DB9294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB9298"))) PPC_WEAK_FUNC(sub_82DB9298);
PPC_FUNC_IMPL(__imp__sub_82DB9298) {
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
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82db92ec
	if (ctx.cr6.lt) goto loc_82DB92EC;
	// bne cr6,0x82db938c
	if (!ctx.cr6.eq) goto loc_82DB938C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB92D8;
	sub_82CB61F0(ctx, base);
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
loc_82DB92EC:
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82db938c
	if (ctx.cr6.gt) goto loc_82DB938C;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,-27860
	ctx.r12.s64 = ctx.r12.s64 + -27860;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DB9344;
	case 1:
		goto loc_82DB9350;
	case 2:
		goto loc_82DB935C;
	case 3:
		goto loc_82DB9368;
	case 4:
		goto loc_82DB9374;
	case 5:
		goto loc_82DB9380;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-27836(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27836);
	// lwz r22,-27824(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27824);
	// lwz r22,-27812(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27812);
	// lwz r22,-27800(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27800);
	// lwz r22,-27788(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27788);
	// lwz r22,-27776(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27776);
loc_82DB9344:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,6904
	ctx.r4.s64 = ctx.r11.s64 + 6904;
	// b 0x82db9388
	goto loc_82DB9388;
loc_82DB9350:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,6896
	ctx.r4.s64 = ctx.r11.s64 + 6896;
	// b 0x82db9388
	goto loc_82DB9388;
loc_82DB935C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,6888
	ctx.r4.s64 = ctx.r11.s64 + 6888;
	// b 0x82db9388
	goto loc_82DB9388;
loc_82DB9368:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,6876
	ctx.r4.s64 = ctx.r11.s64 + 6876;
	// b 0x82db9388
	goto loc_82DB9388;
loc_82DB9374:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,6864
	ctx.r4.s64 = ctx.r11.s64 + 6864;
	// b 0x82db9388
	goto loc_82DB9388;
loc_82DB9380:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,6856
	ctx.r4.s64 = ctx.r11.s64 + 6856;
loc_82DB9388:
	// bl 0x82da4448
	ctx.lr = 0x82DB938C;
	sub_82DA4448(ctx, base);
loc_82DB938C:
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

__attribute__((alias("__imp__sub_82DB93A0"))) PPC_WEAK_FUNC(sub_82DB93A0);
PPC_FUNC_IMPL(__imp__sub_82DB93A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db93b0
	if (!ctx.cr6.eq) goto loc_82DB93B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB93B0:
	// b 0x82db8920
	sub_82DB8920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB93B4"))) PPC_WEAK_FUNC(sub_82DB93B4);
PPC_FUNC_IMPL(__imp__sub_82DB93B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB93B8"))) PPC_WEAK_FUNC(sub_82DB93B8);
PPC_FUNC_IMPL(__imp__sub_82DB93B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB93C0"))) PPC_WEAK_FUNC(sub_82DB93C0);
PPC_FUNC_IMPL(__imp__sub_82DB93C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db93d0
	if (!ctx.cr6.eq) goto loc_82DB93D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB93D0:
	// b 0x82db89a8
	sub_82DB89A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB93D4"))) PPC_WEAK_FUNC(sub_82DB93D4);
PPC_FUNC_IMPL(__imp__sub_82DB93D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB93D8"))) PPC_WEAK_FUNC(sub_82DB93D8);
PPC_FUNC_IMPL(__imp__sub_82DB93D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db93e8
	if (!ctx.cr6.eq) goto loc_82DB93E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB93E8:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82db93fc
	if (ctx.cr6.lt) goto loc_82DB93FC;
	// bne cr6,0x82db9408
	if (!ctx.cr6.eq) goto loc_82DB9408;
	// stfs f1,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// b 0x82db9408
	goto loc_82DB9408;
loc_82DB93FC:
	// addi r10,r11,272
	ctx.r10.s64 = ctx.r11.s64 + 272;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
loc_82DB9408:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f0,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
	// lwz r10,1244(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1244);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB9440"))) PPC_WEAK_FUNC(sub_82DB9440);
PPC_FUNC_IMPL(__imp__sub_82DB9440) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db9450
	if (!ctx.cr6.eq) goto loc_82DB9450;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB9450:
	// b 0x82db9298
	sub_82DB9298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB9454"))) PPC_WEAK_FUNC(sub_82DB9454);
PPC_FUNC_IMPL(__imp__sub_82DB9454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB9458"))) PPC_WEAK_FUNC(sub_82DB9458);
PPC_FUNC_IMPL(__imp__sub_82DB9458) {
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
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,27400
	ctx.r31.s64 = ctx.r11.s64 + 27400;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB9480;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6912
	ctx.r4.s64 = ctx.r11.s64 + 6912;
	// bl 0x82da4448
	ctx.lr = 0x82DB9490;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,-32036
	ctx.r5.s64 = -2099511296;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r6,-32036
	ctx.r6.s64 = -2099511296;
	// lis r7,-32036
	ctx.r7.s64 = -2099511296;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r8,-32036
	ctx.r8.s64 = -2099511296;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,27304
	ctx.r11.s64 = ctx.r11.s64 + 27304;
	// lis r9,-32036
	ctx.r9.s64 = -2099511296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r10,r5,-27744
	ctx.r10.s64 = ctx.r5.s64 + -27744;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r6,-27720
	ctx.r10.s64 = ctx.r6.s64 + -27720;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r10,r7,-27712
	ctx.r10.s64 = ctx.r7.s64 + -27712;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,-27688
	ctx.r11.s64 = ctx.r8.s64 + -27688;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,-27584
	ctx.r11.s64 = ctx.r9.s64 + -27584;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,288
	ctx.r11.s64 = 288;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB9524"))) PPC_WEAK_FUNC(sub_82DB9524);
PPC_FUNC_IMPL(__imp__sub_82DB9524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB9528"))) PPC_WEAK_FUNC(sub_82DB9528);
PPC_FUNC_IMPL(__imp__sub_82DB9528) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB9530"))) PPC_WEAK_FUNC(sub_82DB9530);
PPC_FUNC_IMPL(__imp__sub_82DB9530) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82db9588
	if (!ctx.cr6.eq) goto loc_82DB9588;
	// rlwinm r6,r5,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82da76a0
	ctx.lr = 0x82DB9568;
	sub_82DA76A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_82DB9588:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82da76a0
	ctx.lr = 0x82DB9594;
	sub_82DA76A0(ctx, base);
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

__attribute__((alias("__imp__sub_82DB95A8"))) PPC_WEAK_FUNC(sub_82DB95A8);
PPC_FUNC_IMPL(__imp__sub_82DB95A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bne cr6,0x82db95b8
	if (!ctx.cr6.eq) goto loc_82DB95B8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82db95e8
	goto loc_82DB95E8;
loc_82DB95B8:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// clrldi r9,r5,32
	ctx.r9.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lwz r8,268(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mulld r9,r8,r9
	ctx.r9.s64 = ctx.r8.s64 * ctx.r9.s64;
	// tdllei r11,0
	// divdu r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 / ctx.r11.u64;
	// twllei r10,0
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_82DB95E8:
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82da7e70
	sub_82DA7E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB95FC"))) PPC_WEAK_FUNC(sub_82DB95FC);
PPC_FUNC_IMPL(__imp__sub_82DB95FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB9600"))) PPC_WEAK_FUNC(sub_82DB9600);
PPC_FUNC_IMPL(__imp__sub_82DB9600) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB9608"))) PPC_WEAK_FUNC(sub_82DB9608);
PPC_FUNC_IMPL(__imp__sub_82DB9608) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB9610"))) PPC_WEAK_FUNC(sub_82DB9610);
PPC_FUNC_IMPL(__imp__sub_82DB9610) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db9634
	if (!ctx.cr6.eq) goto loc_82DB9634;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB9634:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r10,256(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82db9678
	if (!ctx.cr6.eq) goto loc_82DB9678;
	// rlwinm r6,r5,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82da76a0
	ctx.lr = 0x82DB9658;
	sub_82DA76A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_82DB9678:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82da76a0
	ctx.lr = 0x82DB9684;
	sub_82DA76A0(ctx, base);
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

__attribute__((alias("__imp__sub_82DB9698"))) PPC_WEAK_FUNC(sub_82DB9698);
PPC_FUNC_IMPL(__imp__sub_82DB9698) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r9,r3,-24
	ctx.r9.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db96a8
	if (!ctx.cr6.eq) goto loc_82DB96A8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82DB96A8:
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bne cr6,0x82db96b8
	if (!ctx.cr6.eq) goto loc_82DB96B8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82db96e8
	goto loc_82DB96E8;
loc_82DB96B8:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// clrldi r8,r5,32
	ctx.r8.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lwz r7,268(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mulld r8,r7,r8
	ctx.r8.s64 = ctx.r7.s64 * ctx.r8.s64;
	// tdllei r11,0
	// divdu r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 / ctx.r11.u64;
	// twllei r10,0
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_82DB96E8:
	// lwz r10,156(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,224(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82da7e70
	sub_82DA7E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB96FC"))) PPC_WEAK_FUNC(sub_82DB96FC);
PPC_FUNC_IMPL(__imp__sub_82DB96FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB9700"))) PPC_WEAK_FUNC(sub_82DB9700);
PPC_FUNC_IMPL(__imp__sub_82DB9700) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB9708"))) PPC_WEAK_FUNC(sub_82DB9708);
PPC_FUNC_IMPL(__imp__sub_82DB9708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DB9710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r28,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r28.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x82da7e70
	ctx.lr = 0x82DB9754;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db9a40
	if (!ctx.cr6.eq) goto loc_82DB9A40;
	// addi r11,r31,232
	ctx.r11.s64 = ctx.r31.s64 + 232;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r4,r11,268
	ctx.r4.s64 = ctx.r11.s64 + 268;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DB977C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db9a40
	if (!ctx.cr6.eq) goto loc_82DB9A40;
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db97c8
	if (ctx.cr6.eq) goto loc_82DB97C8;
	// rlwinm r11,r29,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// beq cr6,0x82db97b8
	if (ctx.cr6.eq) goto loc_82DB97B8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82db97c8
	if (ctx.cr6.eq) goto loc_82DB97C8;
loc_82DB97AC:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB97B8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82db97ac
	if (ctx.cr6.lt) goto loc_82DB97AC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x82db97ac
	if (ctx.cr6.gt) goto loc_82DB97AC;
loc_82DB97C8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r9,268(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// beq cr6,0x82db9924
	if (ctx.cr6.eq) goto loc_82DB9924;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x82db9924
	if (ctx.cr6.gt) goto loc_82DB9924;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,-26588
	ctx.r12.s64 = ctx.r12.s64 + -26588;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB9888;
	case 1:
		goto loc_82DB9850;
	case 2:
		goto loc_82DB9858;
	case 3:
		goto loc_82DB9860;
	case 4:
		goto loc_82DB9868;
	case 5:
		goto loc_82DB9868;
	case 6:
		goto loc_82DB9888;
	case 7:
		goto loc_82DB9888;
	case 8:
		goto loc_82DB9888;
	case 9:
		goto loc_82DB9888;
	case 10:
		goto loc_82DB9888;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-26488(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26488);
	// lwz r22,-26544(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26544);
	// lwz r22,-26536(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26536);
	// lwz r22,-26528(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26528);
	// lwz r22,-26520(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26520);
	// lwz r22,-26520(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26520);
	// lwz r22,-26488(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26488);
	// lwz r22,-26488(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26488);
	// lwz r22,-26488(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26488);
	// lwz r22,-26488(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26488);
	// lwz r22,-26488(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26488);
loc_82DB9850:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82db986c
	goto loc_82DB986C;
loc_82DB9858:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82db986c
	goto loc_82DB986C;
loc_82DB9860:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82db986c
	goto loc_82DB986C;
loc_82DB9868:
	// li r10,32
	ctx.r10.s64 = 32;
loc_82DB986C:
	// rldicl r9,r9,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 3) & 0x7FFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicr r9,r9,0,60
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r10,0
	// divdu r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 / ctx.r10.u64;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82db9914
	goto loc_82DB9914;
loc_82DB9888:
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,-26464
	ctx.r12.s64 = ctx.r12.s64 + -26464;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-26352(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26352);
	// lwz r22,-26332(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26332);
	// lwz r22,-26332(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26332);
	// lwz r22,-26332(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26332);
	// lwz r22,-26332(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26332);
	// lwz r22,-26332(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26332);
	// lwz r22,-26420(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26420);
	// lwz r22,-26404(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26404);
	// lwz r22,-26376(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26376);
	// lwz r22,-26360(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26360);
	// lwz r22,-26360(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26360);
	// mulli r10,r9,14
	ctx.r10.s64 = ctx.r9.s64 * 14;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82db9914
	goto loc_82DB9914;
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r9,14563
	ctx.r9.s64 = 954400768;
	// ori r9,r9,36409
	ctx.r9.u64 = ctx.r9.u64 | 36409;
	// mulhwu r10,r10,r9
	ctx.r10.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82db9914
	goto loc_82DB9914;
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82db9914
	goto loc_82DB9914;
	// stw r9,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// b 0x82db9924
	goto loc_82DB9924;
	// stw r28,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r28.u32);
loc_82DB9914:
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// twllei r8,0
	// divwu r10,r10,r8
	ctx.r10.u32 = ctx.r10.u32 / ctx.r8.u32;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
loc_82DB9924:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82db9a3c
	if (!ctx.cr6.eq) goto loc_82DB9A3C;
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x82db9968
	if (!ctx.cr6.gt) goto loc_82DB9968;
	// li r3,75
	ctx.r3.s64 = 75;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB9968:
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r30,r8,39368
	ctx.r30.u64 = ctx.r8.u64 | 39368;
	// stw r9,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r9.u32);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82db9a3c
	if (!ctx.cr6.eq) goto loc_82DB9A3C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38092
	ctx.r11.u64 = ctx.r11.u64 | 38092;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82db99b4
	if (!ctx.cr6.eq) goto loc_82DB99B4;
	// li r6,32
	ctx.r6.s64 = 32;
loc_82DB99B4:
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,-26172
	ctx.r3.s64 = ctx.r3.s64 + -26172;
	// bl 0x82da9108
	ctx.lr = 0x82DB99C8;
	sub_82DA9108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db9a40
	if (!ctx.cr6.eq) goto loc_82DB9A40;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82db9a3c
	if (!ctx.cr6.gt) goto loc_82DB9A3C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// ori r6,r11,39372
	ctx.r6.u64 = ctx.r11.u64 | 39372;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,17
	ctx.r5.s64 = 17;
	// ori r7,r11,39632
	ctx.r7.u64 = ctx.r11.u64 | 39632;
loc_82DB99FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// addi r8,r11,284
	ctx.r8.s64 = ctx.r11.s64 + 284;
	// stw r8,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r8.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r8,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r8.u32);
	// sth r5,284(r11)
	PPC_STORE_U16(ctx.r11.u32 + 284, ctx.r5.u16);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db99fc
	if (ctx.cr6.lt) goto loc_82DB99FC;
loc_82DB9A3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB9A40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB9A48"))) PPC_WEAK_FUNC(sub_82DB9A48);
PPC_FUNC_IMPL(__imp__sub_82DB9A48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db9a58
	if (!ctx.cr6.eq) goto loc_82DB9A58;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB9A58:
	// b 0x82db9708
	sub_82DB9708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB9A5C"))) PPC_WEAK_FUNC(sub_82DB9A5C);
PPC_FUNC_IMPL(__imp__sub_82DB9A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB9A60"))) PPC_WEAK_FUNC(sub_82DB9A60);
PPC_FUNC_IMPL(__imp__sub_82DB9A60) {
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
	// li r5,92
	ctx.r5.s64 = 92;
	// addi r31,r11,27536
	ctx.r31.s64 = ctx.r11.s64 + 27536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB9A88;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,-32036
	ctx.r6.s64 = -2099511296;
	// addi r11,r11,6928
	ctx.r11.s64 = ctx.r11.s64 + 6928;
	// lis r7,-32036
	ctx.r7.s64 = -2099511296;
	// lis r8,-32036
	ctx.r8.s64 = -2099511296;
	// lis r9,-32036
	ctx.r9.s64 = -2099511296;
	// lis r10,-32036
	ctx.r10.s64 = -2099511296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r6,-26040
	ctx.r11.s64 = ctx.r6.s64 + -26040;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r11,r7,-27128
	ctx.r11.s64 = ctx.r7.s64 + -27128;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r11,r8,-27120
	ctx.r11.s64 = ctx.r8.s64 + -27120;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r11,r9,-26984
	ctx.r11.s64 = ctx.r9.s64 + -26984;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r11,r10,-26880
	ctx.r11.s64 = ctx.r10.s64 + -26880;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,532
	ctx.r11.s64 = 532;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB9B0C"))) PPC_WEAK_FUNC(sub_82DB9B0C);
PPC_FUNC_IMPL(__imp__sub_82DB9B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB9B10"))) PPC_WEAK_FUNC(sub_82DB9B10);
PPC_FUNC_IMPL(__imp__sub_82DB9B10) {
	PPC_FUNC_PROLOGUE();
	// b 0x82df8840
	sub_82DF8840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB9B14"))) PPC_WEAK_FUNC(sub_82DB9B14);
PPC_FUNC_IMPL(__imp__sub_82DB9B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB9B18"))) PPC_WEAK_FUNC(sub_82DB9B18);
PPC_FUNC_IMPL(__imp__sub_82DB9B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82DB9B20;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ae8
	ctx.lr = 0x82DB9B28;
	__savefpr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r24,r11,27632
	ctx.r24.s64 = ctx.r11.s64 + 27632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lfs f28,16608(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16608);
	ctx.f28.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lfs f30,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// li r25,16
	ctx.r25.s64 = 16;
	// lfs f31,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f31.f64 = double(temp.f32);
	// li r26,64
	ctx.r26.s64 = 64;
loc_82DB9B60:
	// sraw r29,r25,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r25.s32 < 0) & (((ctx.r25.s32 >> temp.u32) << temp.u32) != ctx.r25.s32);
	ctx.r29.s64 = ctx.r25.s32 >> temp.u32;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sraw r11,r26,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r26.s32 < 0) & (((ctx.r26.s32 >> temp.u32) << temp.u32) != ctx.r26.s32);
	ctx.r11.s64 = ctx.r26.s32 >> temp.u32;
	// ble cr6,0x82db9bd0
	if (!ctx.cr6.gt) goto loc_82DB9BD0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f29,f0
	ctx.f29.f64 = double(float(ctx.f0.f64));
loc_82DB9B8C:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fdivs f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f29.f64));
	// bl 0x82cb4940
	ctx.lr = 0x82DB9BB0;
	sub_82CB4940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// blt cr6,0x82db9b8c
	if (ctx.cr6.lt) goto loc_82DB9B8C;
loc_82DB9BD0:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r11,r24,20
	ctx.r11.s64 = ctx.r24.s64 + 20;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db9b60
	if (ctx.cr6.lt) goto loc_82DB9B60;
	// lis r11,-31894
	ctx.r11.s64 = -2090205184;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// addi r11,r11,-22680
	ctx.r11.s64 = ctx.r11.s64 + -22680;
	// addi r4,r10,27656
	ctx.r4.s64 = ctx.r10.s64 + 27656;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// lis r10,-31894
	ctx.r10.s64 = -2090205184;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// neg r7,r23
	ctx.r7.s64 = -ctx.r23.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,2112
	ctx.r6.s64 = ctx.r11.s64 + 2112;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,-20440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20440, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// li r3,256
	ctx.r3.s64 = 256;
	// lfs f0,6944(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6944);
	ctx.f0.f64 = double(temp.f32);
loc_82DB9C24:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9c68
	if (!ctx.cr6.lt) goto loc_82DB9C68;
	// lwz r10,-4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DB9C68:
	// clrlwi r10,r5,27
	ctx.r10.u64 = ctx.r5.u32 & 0x1F;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x82db9c78
	if (!ctx.cr6.eq) goto loc_82DB9C78;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DB9C78:
	// clrlwi r10,r5,26
	ctx.r10.u64 = ctx.r5.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82db9c88
	if (!ctx.cr6.eq) goto loc_82DB9C88;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DB9C88:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9cd0
	if (!ctx.cr6.lt) goto loc_82DB9CD0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DB9CD0:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// clrlwi r31,r10,27
	ctx.r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// bne cr6,0x82db9ce4
	if (!ctx.cr6.eq) goto loc_82DB9CE4;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DB9CE4:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82db9cf4
	if (!ctx.cr6.eq) goto loc_82DB9CF4;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DB9CF4:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9d3c
	if (!ctx.cr6.lt) goto loc_82DB9D3C;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DB9D3C:
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x82db9d4c
	if (!ctx.cr6.eq) goto loc_82DB9D4C;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DB9D4C:
	// clrlwi r10,r8,26
	ctx.r10.u64 = ctx.r8.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82db9d5c
	if (!ctx.cr6.eq) goto loc_82DB9D5C;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DB9D5C:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9da4
	if (!ctx.cr6.lt) goto loc_82DB9DA4;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DB9DA4:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// clrlwi r31,r10,27
	ctx.r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// bne cr6,0x82db9db8
	if (!ctx.cr6.eq) goto loc_82DB9DB8;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DB9DB8:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82db9dc8
	if (!ctx.cr6.eq) goto loc_82DB9DC8;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DB9DC8:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9e10
	if (!ctx.cr6.lt) goto loc_82DB9E10;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r31.u64);
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,152(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DB9E10:
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// clrlwi r31,r10,27
	ctx.r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// bne cr6,0x82db9e24
	if (!ctx.cr6.eq) goto loc_82DB9E24;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DB9E24:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82db9e34
	if (!ctx.cr6.eq) goto loc_82DB9E34;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DB9E34:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9e7c
	if (!ctx.cr6.lt) goto loc_82DB9E7C;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r31.u64);
	// std r10,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// lfd f13,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,168(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DB9E7C:
	// addi r10,r8,3
	ctx.r10.s64 = ctx.r8.s64 + 3;
	// clrlwi r31,r10,27
	ctx.r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// bne cr6,0x82db9e90
	if (!ctx.cr6.eq) goto loc_82DB9E90;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DB9E90:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82db9ea0
	if (!ctx.cr6.eq) goto loc_82DB9EA0;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DB9EA0:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9ee8
	if (!ctx.cr6.lt) goto loc_82DB9EE8;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r31.u64);
	// std r10,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// lfd f13,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,184(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DB9EE8:
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// clrlwi r31,r10,27
	ctx.r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// bne cr6,0x82db9efc
	if (!ctx.cr6.eq) goto loc_82DB9EFC;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DB9EFC:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82db9f0c
	if (!ctx.cr6.eq) goto loc_82DB9F0C;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DB9F0C:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9f54
	if (!ctx.cr6.lt) goto loc_82DB9F54;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r31.u64);
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lfd f13,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,200(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DB9F54:
	// addi r10,r8,5
	ctx.r10.s64 = ctx.r8.s64 + 5;
	// clrlwi r31,r10,27
	ctx.r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// bne cr6,0x82db9f68
	if (!ctx.cr6.eq) goto loc_82DB9F68;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DB9F68:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82db9f78
	if (!ctx.cr6.eq) goto loc_82DB9F78;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DB9F78:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpwi cr6,r8,258
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 258, ctx.xer);
	// blt cr6,0x82db9c24
	if (ctx.cr6.lt) goto loc_82DB9C24;
	// subfic r10,r5,512
	ctx.xer.ca = ctx.r5.u32 <= 512;
	ctx.r10.s64 = 512 - ctx.r5.s64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82dba1d0
	if (ctx.cr6.lt) goto loc_82DBA1D0;
	// subfic r10,r5,508
	ctx.xer.ca = ctx.r5.u32 <= 508;
	ctx.r10.s64 = 508 - ctx.r5.s64;
	// addi r8,r5,2
	ctx.r8.s64 = ctx.r5.s64 + 2;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r4,1016
	ctx.r9.s64 = ctx.r4.s64 + 1016;
	// subfic r10,r10,63
	ctx.xer.ca = ctx.r10.u32 <= 63;
	ctx.r10.s64 = 63 - ctx.r10.s64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB9FB4:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82db9ff8
	if (!ctx.cr6.lt) goto loc_82DB9FF8;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r31.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// lfd f13,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,192(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DB9FF8:
	// srawi r10,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 5;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x82dba014
	if (!ctx.cr6.eq) goto loc_82DBA014;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DBA014:
	// srawi r10,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 6;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82dba030
	if (!ctx.cr6.eq) goto loc_82DBA030;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DBA030:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82dba078
	if (!ctx.cr6.lt) goto loc_82DBA078;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r31.u64);
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// lfd f13,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,176(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DBA078:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// srawi r31,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 5;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// rlwinm r31,r31,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r31,r31,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// bne cr6,0x82dba098
	if (!ctx.cr6.eq) goto loc_82DBA098;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DBA098:
	// srawi r31,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 6;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// rlwinm r31,r31,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82dba0b4
	if (!ctx.cr6.eq) goto loc_82DBA0B4;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DBA0B4:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82dba0fc
	if (!ctx.cr6.lt) goto loc_82DBA0FC;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r31.u64);
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f13,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DBA0FC:
	// srawi r10,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 5;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x82dba118
	if (!ctx.cr6.eq) goto loc_82DBA118;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DBA118:
	// srawi r10,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 6;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82dba134
	if (!ctx.cr6.eq) goto loc_82DBA134;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DBA134:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82dba17c
	if (!ctx.cr6.lt) goto loc_82DBA17C;
	// lwz r10,-4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r31.u64);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f13,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DBA17C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// srawi r31,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 5;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// rlwinm r31,r31,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r31,r31,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// bne cr6,0x82dba19c
	if (!ctx.cr6.eq) goto loc_82DBA19C;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DBA19C:
	// srawi r31,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 6;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// rlwinm r31,r31,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82dba1b8
	if (!ctx.cr6.eq) goto loc_82DBA1B8;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DBA1B8:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r8,511
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 511, ctx.xer);
	// blt cr6,0x82db9fb4
	if (ctx.cr6.lt) goto loc_82DB9FB4;
loc_82DBA1D0:
	// cmpwi cr6,r5,512
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 512, ctx.xer);
	// bge cr6,0x82dba270
	if (!ctx.cr6.lt) goto loc_82DBA270;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_82DBA1E0:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82dba224
	if (!ctx.cr6.lt) goto loc_82DBA224;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// lfd f13,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,192(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82DBA224:
	// srawi r9,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 5;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// bne cr6,0x82dba240
	if (!ctx.cr6.eq) goto loc_82DBA240;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82DBA240:
	// srawi r9,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 6;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cmpwi cr6,r9,63
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 63, ctx.xer);
	// bne cr6,0x82dba25c
	if (!ctx.cr6.eq) goto loc_82DBA25C;
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
loc_82DBA25C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmpwi cr6,r5,512
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 512, ctx.xer);
	// blt cr6,0x82dba1e0
	if (ctx.cr6.lt) goto loc_82DBA1E0;
loc_82DBA270:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b34
	ctx.lr = 0x82DBA280;
	__restfpr_28(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBA284"))) PPC_WEAK_FUNC(sub_82DBA284);
PPC_FUNC_IMPL(__imp__sub_82DBA284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBA288"))) PPC_WEAK_FUNC(sub_82DBA288);
PPC_FUNC_IMPL(__imp__sub_82DBA288) {
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
	// lis r11,-31894
	ctx.r11.s64 = -2090205184;
	// lis r10,-31894
	ctx.r10.s64 = -2090205184;
	// addi r11,r11,-22680
	ctx.r11.s64 = ctx.r11.s64 + -22680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,-20440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20440, ctx.r11.u32);
	// bl 0x82db9b18
	ctx.lr = 0x82DBA2B4;
	sub_82DB9B18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dba2d0
	if (!ctx.cr6.eq) goto loc_82DBA2D0;
	// bl 0x82dfe388
	ctx.lr = 0x82DBA2C0;
	sub_82DFE388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dba2d0
	if (!ctx.cr6.eq) goto loc_82DBA2D0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82df9408
	ctx.lr = 0x82DBA2D0;
	sub_82DF9408(ctx, base);
loc_82DBA2D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBA2E0"))) PPC_WEAK_FUNC(sub_82DBA2E0);
PPC_FUNC_IMPL(__imp__sub_82DBA2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82DBA2E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da8018
	ctx.lr = 0x82DBA304;
	sub_82DA8018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dba45c
	if (!ctx.cr6.eq) goto loc_82DBA45C;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r30,18588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18588, ctx.r30.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r30,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r30.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82dba43c
	if (!ctx.cr6.gt) goto loc_82DBA43C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r27,r11,6952
	ctx.r27.s64 = ctx.r11.s64 + 6952;
	// lis r26,-31909
	ctx.r26.s64 = -2091188224;
loc_82DBA33C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82da76a0
	ctx.lr = 0x82DBA354;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dba43c
	if (!ctx.cr6.eq) goto loc_82DBA43C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df8170
	ctx.lr = 0x82DBA374;
	sub_82DF8170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dba464
	if (!ctx.cr6.eq) goto loc_82DBA464;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82dba464
	if (!ctx.cr6.lt) goto loc_82DBA464;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,18588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18588);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82dba3f4
	if (ctx.cr6.lt) goto loc_82DBA3F4;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,365
	ctx.r7.s64 = 365;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,18588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18588);
	// addi r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 + 1000;
	// stw r10,18588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18588, ctx.r10.u32);
	// lwz r10,19872(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,18588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18588);
	// lwz r4,18592(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18592);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d862b8
	ctx.lr = 0x82DBA3DC;
	sub_82D862B8(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r3,18592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18592, ctx.r3.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,18592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dba488
	if (ctx.cr6.eq) goto loc_82DBA488;
loc_82DBA3F4:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r11,18592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18592);
	// stwx r30,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r30.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// bl 0x82da7e70
	ctx.lr = 0x82DBA434;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dba474
	if (ctx.cr6.eq) goto loc_82DBA474;
loc_82DBA43C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82da7e70
	ctx.lr = 0x82DBA44C;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dba45c
	if (!ctx.cr6.eq) goto loc_82DBA45C;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r28,18588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18588, ctx.r28.u32);
loc_82DBA45C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82DBA464:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82da7e70
	ctx.lr = 0x82DBA474;
	sub_82DA7E70(ctx, base);
loc_82DBA474:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82dba33c
	if (ctx.cr6.lt) goto loc_82DBA33C;
	// b 0x82dba43c
	goto loc_82DBA43C;
loc_82DBA488:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBA494"))) PPC_WEAK_FUNC(sub_82DBA494);
PPC_FUNC_IMPL(__imp__sub_82DBA494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBA498"))) PPC_WEAK_FUNC(sub_82DBA498);
PPC_FUNC_IMPL(__imp__sub_82DBA498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DBA4A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,6952
	ctx.r29.s64 = ctx.r11.s64 + 6952;
	// lis r28,-31909
	ctx.r28.s64 = -2091188224;
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dba4e4
	if (ctx.cr6.eq) goto loc_82DBA4E4;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,875
	ctx.r6.s64 = 875;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBA4DC;
	sub_82D861B0(ctx, base);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
loc_82DBA4E4:
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dba50c
	if (ctx.cr6.eq) goto loc_82DBA50C;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,880
	ctx.r6.s64 = 880;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBA508;
	sub_82D861B0(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82DBA50C:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dba56c
	if (ctx.cr6.eq) goto loc_82DBA56C;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r4,18592(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18592);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dba548
	if (ctx.cr6.eq) goto loc_82DBA548;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,887
	ctx.r6.s64 = 887;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBA540;
	sub_82D861B0(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r30,18592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18592, ctx.r30.u32);
loc_82DBA548:
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,891
	ctx.r6.s64 = 891;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBA564;
	sub_82D861B0(ctx, base);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
loc_82DBA56C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBA578"))) PPC_WEAK_FUNC(sub_82DBA578);
PPC_FUNC_IMPL(__imp__sub_82DBA578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82DBA580;
	__savegprlr_23(ctx, base);
	// stwu r1,-3248(r1)
	ea = -3248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82DBA59C:
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82dba5b0
	if (ctx.cr6.gt) goto loc_82DBA5B0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DBA5B0:
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82dba7a8
	if (!ctx.cr6.lt) goto loc_82DBA7A8;
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82dba5dc
	if (!ctx.cr6.gt) goto loc_82DBA5DC;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mulli r10,r26,18732
	ctx.r10.s64 = ctx.r26.s64 * 18732;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
loc_82DBA5DC:
	// li r5,3072
	ctx.r5.s64 = 3072;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBA5F4;
	sub_82CB16F0(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bne cr6,0x82dba608
	if (!ctx.cr6.eq) goto loc_82DBA608;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82DBA608:
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82dba61c
	if (!ctx.cr6.gt) goto loc_82DBA61C;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82DBA61C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82da76a0
	ctx.lr = 0x82DBA634;
	sub_82DA76A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dba784
	if (!ctx.cr6.eq) goto loc_82DBA784;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82dba650
	if (ctx.cr6.eq) goto loc_82DBA650;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r25,18600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18600, ctx.r25.u32);
loc_82DBA650:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df8170
	ctx.lr = 0x82DBA668;
	sub_82DF8170(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dba724
	if (!ctx.cr6.eq) goto loc_82DBA724;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82dba71c
	if (ctx.cr6.eq) goto loc_82DBA71C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da8018
	ctx.lr = 0x82DBA688;
	sub_82DA8018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dba784
	if (!ctx.cr6.eq) goto loc_82DBA784;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBA6A4;
	sub_82DA7E70(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82da76a0
	ctx.lr = 0x82DBA6BC;
	sub_82DA76A0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x82dba6f8
	if (!ctx.cr6.eq) goto loc_82DBA6F8;
	// rlwinm r11,r11,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r11,57344
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57344, ctx.xer);
	// beq cr6,0x82dba6fc
	if (ctx.cr6.eq) goto loc_82DBA6FC;
loc_82DBA6F8:
	// li r30,19
	ctx.r30.s64 = 19;
loc_82DBA6FC:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dba71c
	if (ctx.cr6.eq) goto loc_82DBA71C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82da7e70
	ctx.lr = 0x82DBA71C;
	sub_82DA7E70(ctx, base);
loc_82DBA71C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82dba734
	if (ctx.cr6.eq) goto loc_82DBA734;
loc_82DBA724:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82da7e70
	ctx.lr = 0x82DBA734;
	sub_82DA7E70(ctx, base);
loc_82DBA734:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dba61c
	if (!ctx.cr6.eq) goto loc_82DBA61C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82da76a0
	ctx.lr = 0x82DBA758;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dba7cc
	if (!ctx.cr6.eq) goto loc_82DBA7CC;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df86f8
	ctx.lr = 0x82DBA774;
	sub_82DF86F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82dba784
	if (ctx.cr6.eq) goto loc_82DBA784;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82DBA784:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82dba7a0
	if (!ctx.cr6.gt) goto loc_82DBA7A0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82dba59c
	goto loc_82DBA59C;
loc_82DBA7A0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x82dba59c
	goto loc_82DBA59C;
loc_82DBA7A8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82dba7c8
	if (!ctx.cr6.gt) goto loc_82DBA7C8;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
loc_82DBA7C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82DBA7CC:
	// addi r1,r1,3248
	ctx.r1.s64 = ctx.r1.s64 + 3248;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBA7D4"))) PPC_WEAK_FUNC(sub_82DBA7D4);
PPC_FUNC_IMPL(__imp__sub_82DBA7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBA7D8"))) PPC_WEAK_FUNC(sub_82DBA7D8);
PPC_FUNC_IMPL(__imp__sub_82DBA7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DBA7E0;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4736(r1)
	ea = -4736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bne cr6,0x82dba814
	if (!ctx.cr6.eq) goto loc_82DBA814;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82da7e70
	ctx.lr = 0x82DBA80C;
	sub_82DA7E70(ctx, base);
	// addi r1,r1,4736
	ctx.r1.s64 = ctx.r1.s64 + 4736;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DBA814:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r6,248(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// twllei r6,0
	// lwz r11,260(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// divwu r11,r10,r6
	ctx.r11.u32 = ctx.r10.u32 / ctx.r6.u32;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dba87c
	if (ctx.cr6.eq) goto loc_82DBA87C;
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mullw r7,r6,r11
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// rlwinm r8,r8,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subfic r10,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r8.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82dba86c
	if (!ctx.cr6.lt) goto loc_82DBA86C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82DBA86C:
	// mullw r8,r6,r10
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82dba884
	goto loc_82DBA884;
loc_82DBA87C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82DBA884:
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// rlwinm r10,r10,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dba8c0
	if (ctx.cr6.eq) goto loc_82DBA8C0;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r8,18592(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18592);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82dba8c0
	if (ctx.cr6.eq) goto loc_82DBA8C0;
	// lwz r10,18588(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18588);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82dba8b4
	if (!ctx.cr6.gt) goto loc_82DBA8B4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82DBA8B4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x82dbaa48
	goto loc_82DBAA48;
loc_82DBA8C0:
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// twllei r5,0
	// lbz r11,18729(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18729);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbaa10
	if (ctx.cr6.eq) goto loc_82DBAA10;
	// divwu r11,r30,r5
	ctx.r11.u32 = ctx.r30.u32 / ctx.r5.u32;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82dba938
	if (!ctx.cr6.gt) goto loc_82DBA938;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r8,272(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f12,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82dba944
	if (!ctx.cr6.lt) goto loc_82DBA944;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82dba950
	goto loc_82DBA950;
loc_82DBA938:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82dba950
	goto loc_82DBA950;
loc_82DBA944:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82dba950
	if (!ctx.cr6.gt) goto loc_82DBA950;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82DBA950:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x82dba96c
	if (!ctx.cr6.gt) goto loc_82DBA96C;
	// li r11,99
	ctx.r11.s64 = 99;
loc_82DBA96C:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// lbz r9,18628(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18628);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x82dba9a4
	if (!ctx.cr6.lt) goto loc_82DBA9A4;
	// lbz r10,18629(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18629);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// b 0x82dba9ac
	goto loc_82DBA9AC;
loc_82DBA9A4:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f12,-16900(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16900);
	ctx.f12.f64 = double(temp.f32);
loc_82DBA9AC:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r9,268(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	// fsubs f12,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f0,-16488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x82dbaa48
	if (!ctx.cr6.gt) goto loc_82DBAA48;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// b 0x82dbaa48
	goto loc_82DBAA48;
loc_82DBAA10:
	// divwu r10,r30,r5
	ctx.r10.u32 = ctx.r30.u32 / ctx.r5.u32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82dbaa44
	if (!ctx.cr6.gt) goto loc_82DBAA44;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r9,268(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mulld r10,r10,r9
	ctx.r10.s64 = ctx.r10.s64 * ctx.r9.s64;
	// tdllei r11,0
	// divdu r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 / ctx.r11.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82dbaa48
	goto loc_82DBAA48;
loc_82DBAA44:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82DBAA48:
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r9,268(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82dbaa64
	if (!ctx.cr6.gt) goto loc_82DBAA64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82DBAA64:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBAA70;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbaac4
	if (!ctx.cr6.eq) goto loc_82DBAAC4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82dbaac4
	if (ctx.cr6.eq) goto loc_82DBAAC4;
loc_82DBAA80:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,4608
	ctx.r5.s64 = 4608;
	// cmplwi cr6,r30,4608
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4608, ctx.xer);
	// bge cr6,0x82dbaa94
	if (!ctx.cr6.lt) goto loc_82DBAA94;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82DBAA94:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de8b80
	ctx.lr = 0x82DBAAA4;
	sub_82DE8B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbaac4
	if (!ctx.cr6.eq) goto loc_82DBAAC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82dbaac4
	if (ctx.cr6.lt) goto loc_82DBAAC4;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82dbaa80
	if (!ctx.cr6.eq) goto loc_82DBAA80;
loc_82DBAAC4:
	// addi r1,r1,4736
	ctx.r1.s64 = ctx.r1.s64 + 4736;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBAACC"))) PPC_WEAK_FUNC(sub_82DBAACC);
PPC_FUNC_IMPL(__imp__sub_82DBAACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBAAD0"))) PPC_WEAK_FUNC(sub_82DBAAD0);
PPC_FUNC_IMPL(__imp__sub_82DBAAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DBAAD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dbab7c
	if (ctx.cr6.eq) goto loc_82DBAB7C;
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dbab7c
	if (ctx.cr6.eq) goto loc_82DBAB7C;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbab50
	if (!ctx.cr6.gt) goto loc_82DBAB50;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82DBAB0C:
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lwz r10,136(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DBAB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,288
	ctx.r31.s64 = ctx.r31.s64 + 288;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbab0c
	if (ctx.cr6.lt) goto loc_82DBAB0C;
loc_82DBAB50:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,240(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,6952
	ctx.r5.s64 = ctx.r11.s64 + 6952;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,1358
	ctx.r6.s64 = 1358;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBAB74;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r11.u32);
loc_82DBAB7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBAB88"))) PPC_WEAK_FUNC(sub_82DBAB88);
PPC_FUNC_IMPL(__imp__sub_82DBAB88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbab98
	if (!ctx.cr6.eq) goto loc_82DBAB98;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBAB98:
	// b 0x82dba498
	sub_82DBA498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBAB9C"))) PPC_WEAK_FUNC(sub_82DBAB9C);
PPC_FUNC_IMPL(__imp__sub_82DBAB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBABA0"))) PPC_WEAK_FUNC(sub_82DBABA0);
PPC_FUNC_IMPL(__imp__sub_82DBABA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbabb0
	if (!ctx.cr6.eq) goto loc_82DBABB0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBABB0:
	// b 0x82dbaad0
	sub_82DBAAD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBABB4"))) PPC_WEAK_FUNC(sub_82DBABB4);
PPC_FUNC_IMPL(__imp__sub_82DBABB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBABB8"))) PPC_WEAK_FUNC(sub_82DBABB8);
PPC_FUNC_IMPL(__imp__sub_82DBABB8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbabc8
	if (!ctx.cr6.eq) goto loc_82DBABC8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBABC8:
	// b 0x82dba578
	sub_82DBA578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBABCC"))) PPC_WEAK_FUNC(sub_82DBABCC);
PPC_FUNC_IMPL(__imp__sub_82DBABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBABD0"))) PPC_WEAK_FUNC(sub_82DBABD0);
PPC_FUNC_IMPL(__imp__sub_82DBABD0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbabe0
	if (!ctx.cr6.eq) goto loc_82DBABE0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBABE0:
	// b 0x82dba7d8
	sub_82DBA7D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBABE4"))) PPC_WEAK_FUNC(sub_82DBABE4);
PPC_FUNC_IMPL(__imp__sub_82DBABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBABE8"))) PPC_WEAK_FUNC(sub_82DBABE8);
PPC_FUNC_IMPL(__imp__sub_82DBABE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbabf8
	if (!ctx.cr6.eq) goto loc_82DBABF8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBABF8:
	// b 0x82df8840
	sub_82DF8840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBABFC"))) PPC_WEAK_FUNC(sub_82DBABFC);
PPC_FUNC_IMPL(__imp__sub_82DBABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBAC00"))) PPC_WEAK_FUNC(sub_82DBAC00);
PPC_FUNC_IMPL(__imp__sub_82DBAC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82DBAC08;
	__savegprlr_20(ctx, base);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r24,-31909
	ctx.r24.s64 = -2091188224;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r10,13
	ctx.r10.s64 = 13;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r11,19872(r24)
	PPC_STORE_U32(ctx.r24.u32 + 19872, ctx.r11.u32);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r26,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r26.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r26,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r26.u32);
	// bl 0x82da7e70
	ctx.lr = 0x82DBAC54;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// stw r26,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r26.u32);
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// stw r26,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r26.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,6384
	ctx.r11.s64 = ctx.r11.s64 + 6384;
	// li r5,328
	ctx.r5.s64 = 328;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r10,19872(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19872);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// addi r10,r7,26640
	ctx.r10.s64 = ctx.r7.s64 + 26640;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// addi r10,r8,26656
	ctx.r10.s64 = ctx.r8.s64 + 26656;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r10,r9,26664
	ctx.r10.s64 = ctx.r9.s64 + 26664;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82DBACD4;
	sub_82CB16F0(ctx, base);
	// li r5,296
	ctx.r5.s64 = 296;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBACE4;
	sub_82CB16F0(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r3.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r22,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r22.u32);
	// bl 0x82da76a0
	ctx.lr = 0x82DBAD10;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,7028
	ctx.r4.s64 = ctx.r11.s64 + 7028;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82da45e8
	ctx.lr = 0x82DBAD2C;
	sub_82DA45E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r23,r11,6952
	ctx.r23.s64 = ctx.r11.s64 + 6952;
	// bne cr6,0x82dbae68
	if (!ctx.cr6.eq) goto loc_82DBAE68;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82da76a0
	ctx.lr = 0x82DBAD54;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,7020
	ctx.r4.s64 = ctx.r11.s64 + 7020;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82da45e8
	ctx.lr = 0x82DBAD70;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbae68
	if (!ctx.cr6.eq) goto loc_82DBAE68;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
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
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// bl 0x82dff218
	ctx.lr = 0x82DBADA4;
	sub_82DFF218(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dbae44
	if (!ctx.cr6.eq) goto loc_82DBAE44;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbae68
	if (ctx.cr6.eq) goto loc_82DBAE68;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82dbae44
	if (ctx.cr6.eq) goto loc_82DBAE44;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// beq cr6,0x82dbade4
	if (ctx.cr6.eq) goto loc_82DBADE4;
	// cmpwi cr6,r11,85
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 85, ctx.xer);
	// beq cr6,0x82dbade4
	if (ctx.cr6.eq) goto loc_82DBADE4;
	// li r30,25
	ctx.r30.s64 = 25;
	// b 0x82dbae14
	goto loc_82DBAE14;
loc_82DBADE4:
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r8,404(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r7,400(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r10,268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// stw r8,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r8.u32);
	// stw r7,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r7.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82DBAE14:
	// lwz r11,19872(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,500
	ctx.r6.s64 = 500;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBAE2C;
	sub_82D861B0(ctx, base);
	// stw r26,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r26.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82dbae68
	if (ctx.cr6.eq) goto loc_82DBAE68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_82DBAE44:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbae68
	if (ctx.cr6.eq) goto loc_82DBAE68;
	// lwz r11,19872(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,513
	ctx.r6.s64 = 513;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBAE64;
	sub_82D861B0(ctx, base);
	// stw r26,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r26.u32);
loc_82DBAE68:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbae9c
	if (!ctx.cr6.eq) goto loc_82DBAE9C;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DBAE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
loc_82DBAE9C:
	// lwz r11,19872(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,538
	ctx.r6.s64 = 538;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,18764
	ctx.r4.s64 = 18764;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DBAEB8;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// bne cr6,0x82dbaed0
	if (!ctx.cr6.eq) goto loc_82DBAED0;
loc_82DBAEC4:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_82DBAED0:
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// li r27,-1
	ctx.r27.s64 = -1;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r27,18504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18504, ctx.r27.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r25,18608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18608, ctx.r25.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stb r26,18728(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18728, ctx.r26.u8);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stb r26,18729(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18729, ctx.r26.u8);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r10,r11,4623
	ctx.r10.s64 = ctx.r11.s64 + 4623;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,9280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9280, ctx.r10.u32);
loc_82DBAF0C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x82dbaf30
	if (!ctx.cr6.gt) goto loc_82DBAF30;
	// rlwinm r11,r21,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbaf30
	if (!ctx.cr6.eq) goto loc_82DBAF30;
	// li r29,4096
	ctx.r29.s64 = 4096;
loc_82DBAF30:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82dbafc8
	if (ctx.cr6.eq) goto loc_82DBAFC8;
loc_82DBAF3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBAF4C;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbaf60
	if (ctx.cr6.eq) goto loc_82DBAF60;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// b 0x82dbafa8
	goto loc_82DBAFA8;
loc_82DBAF60:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82da76a0
	ctx.lr = 0x82DBAF78;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,18600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18600, ctx.r26.u32);
	// bl 0x82df8170
	ctx.lr = 0x82DBAFA0;
	sub_82DF8170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbafc4
	if (ctx.cr6.eq) goto loc_82DBAFC4;
loc_82DBAFA8:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// blt cr6,0x82dbaf3c
	if (ctx.cr6.lt) goto loc_82DBAF3C;
	// b 0x82dbafc8
	goto loc_82DBAFC8;
loc_82DBAFC4:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82DBAFC8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbb138
	if (ctx.cr6.eq) goto loc_82DBB138;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBAFE4;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82da76a0
	ctx.lr = 0x82DBB004;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df8170
	ctx.lr = 0x82DBB024;
	sub_82DF8170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbb03c
	if (ctx.cr6.eq) goto loc_82DBB03C;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
loc_82DBB03C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbaf0c
	if (ctx.cr6.eq) goto loc_82DBAF0C;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,631
	ctx.r6.s64 = 631;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,296
	ctx.r4.s64 = 296;
	// stw r27,18504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18504, ctx.r27.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r25,18608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18608, ctx.r25.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r26,18600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18600, ctx.r26.u32);
	// lwz r11,19872(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DBB07C;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// beq cr6,0x82dbaec4
	if (ctx.cr6.eq) goto loc_82DBAEC4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r30,-31894
	ctx.r30.s64 = -2090205184;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,-20436(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -20436);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne cr6,0x82dbb0d4
	if (!ctx.cr6.eq) goto loc_82DBB0D4;
	// bl 0x82dba288
	ctx.lr = 0x82DBB0CC;
	sub_82DBA288(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stb r11,-20436(r30)
	PPC_STORE_U8(ctx.r30.u32 + -20436, ctx.r11.u8);
loc_82DBB0D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBB0E4;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// rlwinm r27,r21,0,22,22
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x200;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82dbb150
	if (ctx.cr6.eq) goto loc_82DBB150;
	// li r10,10
	ctx.r10.s64 = 10;
	// rlwinm r9,r21,0,25,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// bne cr6,0x82dbb154
	if (!ctx.cr6.eq) goto loc_82DBB154;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// bne cr6,0x82dbb144
	if (!ctx.cr6.eq) goto loc_82DBB144;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// b 0x82dbb154
	goto loc_82DBB154;
loc_82DBB138:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_82DBB144:
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// b 0x82dbb154
	goto loc_82DBB154;
loc_82DBB150:
	// stw r28,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r28.u32);
loc_82DBB154:
	// lis r11,-31894
	ctx.r11.s64 = -2090205184;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r11,-15824
	ctx.r30.s64 = ctx.r11.s64 + -15824;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82DBB174;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,18588
	ctx.r6.s64 = ctx.r11.s64 + 18588;
	// addi r5,r11,18628
	ctx.r5.s64 = ctx.r11.s64 + 18628;
	// bl 0x82df8578
	ctx.lr = 0x82DBB194;
	sub_82DF8578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb1c8
	if (!ctx.cr6.eq) goto loc_82DBB1C8;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x82da76a0
	ctx.lr = 0x82DBB1C0;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
loc_82DBB1C8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-31894
	ctx.r10.s64 = -2090205184;
	// addi r29,r31,248
	ctx.r29.s64 = ctx.r31.s64 + 248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r10,-20432
	ctx.r5.s64 = ctx.r10.s64 + -20432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r30,256(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// stw r28,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r28.u32);
	// bl 0x82df86f8
	ctx.lr = 0x82DBB1F0;
	sub_82DF86F8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r30.u32);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBB208;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbb234
	if (!ctx.cr6.eq) goto loc_82DBB234;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82DBB234:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r30,r21,0,17,17
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82dbb288
	if (ctx.cr6.eq) goto loc_82DBB288;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbb288
	if (ctx.cr6.eq) goto loc_82DBB288;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x82da7e70
	ctx.lr = 0x82DBB270;
	sub_82DA7E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dba2e0
	ctx.lr = 0x82DBB278;
	sub_82DBA2E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbb2f4
	if (ctx.cr6.eq) goto loc_82DBB2F4;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_82DBB288:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82dbb2a0
	if (!ctx.cr6.eq) goto loc_82DBB2A0;
	// stw r22,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r22.u32);
	// b 0x82dbb2f4
	goto loc_82DBB2F4;
loc_82DBB2A0:
	// lwz r8,232(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lbz r7,18728(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 18728);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82dbb2c8
	if (ctx.cr6.eq) goto loc_82DBB2C8;
	// lwz r10,18588(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18588);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82dbb2f4
	goto loc_82DBB2F4;
loc_82DBB2C8:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// twllei r9,0
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_82DBB2F4:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbb320
	if (ctx.cr6.eq) goto loc_82DBB320;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82dbb320
	if (ctx.cr6.eq) goto loc_82DBB320;
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
loc_82DBB320:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82dbb360
	if (ctx.cr6.eq) goto loc_82DBB360;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lbz r10,18728(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18728);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dbb348
	if (ctx.cr6.eq) goto loc_82DBB348;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82dbb360
	if (ctx.cr6.eq) goto loc_82DBB360;
loc_82DBB348:
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// twllei r9,0
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
loc_82DBB360:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82dbb3cc
	if (ctx.cr6.eq) goto loc_82DBB3CC;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbb410
	if (ctx.cr6.eq) goto loc_82DBB410;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r4,18592(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18592);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbb3a4
	if (ctx.cr6.eq) goto loc_82DBB3A4;
	// lwz r11,19872(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,793
	ctx.r6.s64 = 793;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBB39C;
	sub_82D861B0(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r26,18592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18592, ctx.r26.u32);
loc_82DBB3A4:
	// lwz r11,19872(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,797
	ctx.r6.s64 = 797;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBB3C0;
	sub_82D861B0(ctx, base);
	// stw r26,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r26.u32);
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// b 0x82dbb410
	goto loc_82DBB410;
loc_82DBB3CC:
	// li r11,1152
	ctx.r11.s64 = 1152;
	// li r10,4608
	ctx.r10.s64 = 4608;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,809
	ctx.r6.s64 = 809;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// li r4,4624
	ctx.r4.s64 = 4624;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// lwz r11,19872(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DBB3F8;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
	// beq cr6,0x82dbaec4
	if (ctx.cr6.eq) goto loc_82DBAEC4;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
loc_82DBB410:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82dbb4ec
	if (!ctx.cr6.eq) goto loc_82DBB4EC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r28,r10,39096
	ctx.r28.u64 = ctx.r10.u64 | 39096;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4ec
	if (!ctx.cr6.eq) goto loc_82DBB4EC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,38088
	ctx.r10.u64 = ctx.r10.u64 | 38088;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82dbb47c
	if (!ctx.cr6.eq) goto loc_82DBB47C;
	// li r6,16
	ctx.r6.s64 = 16;
loc_82DBB47C:
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// li r5,1152
	ctx.r5.s64 = 1152;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-26444
	ctx.r3.s64 = ctx.r3.s64 + -26444;
	// bl 0x82da9108
	ctx.lr = 0x82DBB490;
	sub_82DA9108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb4fc
	if (!ctx.cr6.eq) goto loc_82DBB4FC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbb4ec
	if (!ctx.cr6.gt) goto loc_82DBB4EC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// ori r27,r11,39100
	ctx.r27.u64 = ctx.r11.u64 | 39100;
loc_82DBB4B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r3,1116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// stw r26,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r26.u32);
	// stw r26,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r26.u32);
	// bl 0x82df8840
	ctx.lr = 0x82DBB4D4;
	sub_82DF8840(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbb4b8
	if (ctx.cr6.lt) goto loc_82DBB4B8;
loc_82DBB4EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// bl 0x82df8840
	ctx.lr = 0x82DBB4F8;
	sub_82DF8840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBB4FC:
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBB504"))) PPC_WEAK_FUNC(sub_82DBB504);
PPC_FUNC_IMPL(__imp__sub_82DBB504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBB508"))) PPC_WEAK_FUNC(sub_82DBB508);
PPC_FUNC_IMPL(__imp__sub_82DBB508) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbb518
	if (!ctx.cr6.eq) goto loc_82DBB518;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBB518:
	// b 0x82dbac00
	sub_82DBAC00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBB51C"))) PPC_WEAK_FUNC(sub_82DBB51C);
PPC_FUNC_IMPL(__imp__sub_82DBB51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBB520"))) PPC_WEAK_FUNC(sub_82DBB520);
PPC_FUNC_IMPL(__imp__sub_82DBB520) {
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
	// li r5,92
	ctx.r5.s64 = 92;
	// addi r31,r11,28688
	ctx.r31.s64 = ctx.r11.s64 + 28688;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBB548;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r5,-32036
	ctx.r5.s64 = -2099511296;
	// addi r11,r11,7036
	ctx.r11.s64 = ctx.r11.s64 + 7036;
	// lis r6,-32036
	ctx.r6.s64 = -2099511296;
	// lis r7,-32036
	ctx.r7.s64 = -2099511296;
	// lis r8,-32036
	ctx.r8.s64 = -2099511296;
	// lis r9,-32036
	ctx.r9.s64 = -2099511296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32036
	ctx.r10.s64 = -2099511296;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r5,-19192
	ctx.r11.s64 = ctx.r5.s64 + -19192;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r11,r6,-21624
	ctx.r11.s64 = ctx.r6.s64 + -21624;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r11,r7,-21576
	ctx.r11.s64 = ctx.r7.s64 + -21576;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r11,r8,-21552
	ctx.r11.s64 = ctx.r8.s64 + -21552;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r11,r9,-21600
	ctx.r11.s64 = ctx.r9.s64 + -21600;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r11,r10,-21528
	ctx.r11.s64 = ctx.r10.s64 + -21528;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,260
	ctx.r11.s64 = 260;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DBB5D8"))) PPC_WEAK_FUNC(sub_82DBB5D8);
PPC_FUNC_IMPL(__imp__sub_82DBB5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DBB5E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82DBB5F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBB5FC;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb658
	if (!ctx.cr6.eq) goto loc_82DBB658;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82dbb5f0
	if (ctx.cr6.eq) goto loc_82DBB5F0;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82dbb5f0
	if (ctx.cr6.eq) goto loc_82DBB5F0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82dbb5f0
	if (ctx.cr6.eq) goto loc_82DBB5F0;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82dbb5f0
	if (ctx.cr6.eq) goto loc_82DBB5F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82da7e70
	ctx.lr = 0x82DBB63C;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb658
	if (!ctx.cr6.eq) goto loc_82DBB658;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82dbb654
	if (ctx.cr6.eq) goto loc_82DBB654;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82DBB654:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBB658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBB660"))) PPC_WEAK_FUNC(sub_82DBB660);
PPC_FUNC_IMPL(__imp__sub_82DBB660) {
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
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82dbb6e4
	if (ctx.cr6.eq) goto loc_82DBB6E4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82dbb6a0
	if (ctx.cr6.eq) goto loc_82DBB6A0;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82DBB6A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBB6AC;
	sub_82DA7AB0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBB6BC;
	sub_82DA7E70(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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
loc_82DBB6E4:
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

__attribute__((alias("__imp__sub_82DBB6FC"))) PPC_WEAK_FUNC(sub_82DBB6FC);
PPC_FUNC_IMPL(__imp__sub_82DBB6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBB700"))) PPC_WEAK_FUNC(sub_82DBB700);
PPC_FUNC_IMPL(__imp__sub_82DBB700) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBB708"))) PPC_WEAK_FUNC(sub_82DBB708);
PPC_FUNC_IMPL(__imp__sub_82DBB708) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBB710"))) PPC_WEAK_FUNC(sub_82DBB710);
PPC_FUNC_IMPL(__imp__sub_82DBB710) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBB718"))) PPC_WEAK_FUNC(sub_82DBB718);
PPC_FUNC_IMPL(__imp__sub_82DBB718) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBB720"))) PPC_WEAK_FUNC(sub_82DBB720);
PPC_FUNC_IMPL(__imp__sub_82DBB720) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBB728"))) PPC_WEAK_FUNC(sub_82DBB728);
PPC_FUNC_IMPL(__imp__sub_82DBB728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82DBB730;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBB75C;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb88c
	if (!ctx.cr6.eq) goto loc_82DBB88C;
loc_82DBB764:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBB770;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb88c
	if (!ctx.cr6.eq) goto loc_82DBB88C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82dbb764
	if (!ctx.cr6.eq) goto loc_82DBB764;
loc_82DBB784:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBB790;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb88c
	if (!ctx.cr6.eq) goto loc_82DBB88C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// stbx r11,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// beq cr6,0x82dbb7bc
	if (ctx.cr6.eq) goto loc_82DBB7BC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbb784
	if (ctx.cr6.lt) goto loc_82DBB784;
loc_82DBB7BC:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBB7D4;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb88c
	if (!ctx.cr6.eq) goto loc_82DBB88C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82dbb7e8
	if (ctx.cr6.eq) goto loc_82DBB7E8;
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82DBB7E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBB7F4;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb88c
	if (!ctx.cr6.eq) goto loc_82DBB88C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82dbb810
	if (!ctx.cr6.lt) goto loc_82DBB810;
	// stbx r11,r31,r26
	PPC_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82DBB810:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82dbb7e8
	if (!ctx.cr6.eq) goto loc_82DBB7E8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82dbb82c
	if (ctx.cr6.eq) goto loc_82DBB82C;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82DBB82C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBB838;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb88c
	if (!ctx.cr6.eq) goto loc_82DBB88C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x82dbb874
	if (!ctx.cr6.eq) goto loc_82DBB874;
loc_82DBB84C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBB858;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb88c
	if (!ctx.cr6.eq) goto loc_82DBB88C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82dbb84c
	if (!ctx.cr6.eq) goto loc_82DBB84C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82DBB874:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82da7e70
	ctx.lr = 0x82DBB884;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb88c
	if (!ctx.cr6.eq) goto loc_82DBB88C;
loc_82DBB88C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBB894"))) PPC_WEAK_FUNC(sub_82DBB894);
PPC_FUNC_IMPL(__imp__sub_82DBB894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBB898"))) PPC_WEAK_FUNC(sub_82DBB898);
PPC_FUNC_IMPL(__imp__sub_82DBB898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82DBB8A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82da7e70
	ctx.lr = 0x82DBB8C0;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbbf8
	if (!ctx.cr6.eq) goto loc_82DBBBF8;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_82DBB8CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBB8D8;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbbf8
	if (!ctx.cr6.eq) goto loc_82DBBBF8;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r4,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82dbb660
	ctx.lr = 0x82DBB8F4;
	sub_82DBB660(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbb8cc
	if (ctx.cr6.eq) goto loc_82DBB8CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,7076
	ctx.r4.s64 = ctx.r11.s64 + 7076;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da46a0
	ctx.lr = 0x82DBB914;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbb928
	if (ctx.cr6.eq) goto loc_82DBB928;
loc_82DBB91C:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82DBB928:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBB934;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbbf4
	if (!ctx.cr6.eq) goto loc_82DBBBF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,7068
	ctx.r26.s64 = ctx.r11.s64 + 7068;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r11,-744
	ctx.r25.s64 = ctx.r11.s64 + -744;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r11,7060
	ctx.r27.s64 = ctx.r11.s64 + 7060;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r11,7052
	ctx.r24.s64 = ctx.r11.s64 + 7052;
loc_82DBB95C:
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_82DBB960:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBB96C;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb98c
	if (!ctx.cr6.eq) goto loc_82DBB98C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,58
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58, ctx.xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne cr6,0x82dbb960
	if (!ctx.cr6.eq) goto loc_82DBB960;
loc_82DBB98C:
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82DBB99C;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb91c
	if (!ctx.cr6.eq) goto loc_82DBB91C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBB9B0;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbbf4
	if (!ctx.cr6.eq) goto loc_82DBBBF4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_82DBB9C0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBB9CC;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbb9f0
	if (!ctx.cr6.eq) goto loc_82DBB9F0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne cr6,0x82dbb9c0
	if (!ctx.cr6.eq) goto loc_82DBB9C0;
loc_82DBB9F0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
	// bl 0x82cb6a70
	ctx.lr = 0x82DBBA04;
	sub_82CB6A70(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de89a0
	ctx.lr = 0x82DBBA28;
	sub_82DE89A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBBA34;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbbf4
	if (!ctx.cr6.eq) goto loc_82DBBBF4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82DBBA44:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBBA50;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbadc
	if (!ctx.cr6.eq) goto loc_82DBBADC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82dbba7c
	if (ctx.cr6.eq) goto loc_82DBBA7C;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82dbba7c
	if (ctx.cr6.eq) goto loc_82DBBA7C;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82DBBA7C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82dbbacc
	if (ctx.cr6.eq) goto loc_82DBBACC;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82dbba98
	if (ctx.cr6.eq) goto loc_82DBBA98;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82dbbad0
	goto loc_82DBBAD0;
loc_82DBBA98:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBBAA4;
	sub_82DA7AB0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBBAB4;
	sub_82DA7E70(ctx, base);
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// b 0x82dbbad0
	goto loc_82DBBAD0;
loc_82DBBACC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DBBAD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbba44
	if (ctx.cr6.eq) goto loc_82DBBA44;
loc_82DBBADC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stbx r28,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de89a0
	ctx.lr = 0x82DBBB04;
	sub_82DE89A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBBB10;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbbf4
	if (!ctx.cr6.eq) goto loc_82DBBBF4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82DBBB20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBBB2C;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbbb8
	if (!ctx.cr6.eq) goto loc_82DBBBB8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82dbbb58
	if (ctx.cr6.eq) goto loc_82DBBB58;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82dbbb58
	if (ctx.cr6.eq) goto loc_82DBBB58;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82DBBB58:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82dbbba8
	if (ctx.cr6.eq) goto loc_82DBBBA8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82dbbb74
	if (ctx.cr6.eq) goto loc_82DBBB74;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82dbbbac
	goto loc_82DBBBAC;
loc_82DBBB74:
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBBB80;
	sub_82DA7AB0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBBB90;
	sub_82DA7E70(ctx, base);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// b 0x82dbbbac
	goto loc_82DBBBAC;
loc_82DBBBA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DBBBAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbbb20
	if (ctx.cr6.eq) goto loc_82DBBB20;
loc_82DBBBB8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stbx r28,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de89a0
	ctx.lr = 0x82DBBBE0;
	sub_82DE89A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBBBEC;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbb95c
	if (ctx.cr6.eq) goto loc_82DBB95C;
loc_82DBBBF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBBBF8:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBBC00"))) PPC_WEAK_FUNC(sub_82DBBC00);
PPC_FUNC_IMPL(__imp__sub_82DBBC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82DBBC08;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBBC30;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbd8c
	if (!ctx.cr6.eq) goto loc_82DBBD8C;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// subf r26,r27,r24
	ctx.r26.s64 = ctx.r24.s64 - ctx.r27.s64;
	// subfic r25,r27,1
	ctx.xer.ca = ctx.r27.u32 <= 1;
	ctx.r25.s64 = 1 - ctx.r27.s64;
loc_82DBBC4C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBBC58;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbd8c
	if (!ctx.cr6.eq) goto loc_82DBBD8C;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82dbbc90
	if (ctx.cr6.eq) goto loc_82DBBC90;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82dbbc90
	if (ctx.cr6.eq) goto loc_82DBBC90;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82dbbc90
	if (!ctx.cr6.lt) goto loc_82DBBC90;
	// stbx r4,r26,r30
	PPC_STORE_U8(ctx.r26.u32 + ctx.r30.u32, ctx.r4.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82DBBC90:
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x82dbbcfc
	if (!ctx.cr6.eq) goto loc_82DBBCFC;
	// subfic r11,r27,-1
	ctx.xer.ca = ctx.r27.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r27.s64;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r4,r29,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r29.s64;
	// bl 0x82da7e70
	ctx.lr = 0x82DBBCAC;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbd8c
	if (!ctx.cr6.eq) goto loc_82DBBD8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBBCC0;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbd8c
	if (!ctx.cr6.eq) goto loc_82DBBD8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82da7e70
	ctx.lr = 0x82DBBCD8;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbd8c
	if (!ctx.cr6.eq) goto loc_82DBBD8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82dbb660
	ctx.lr = 0x82DBBCEC;
	sub_82DBB660(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbbd74
	if (!ctx.cr6.eq) goto loc_82DBBD74;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82DBBCFC:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82dbbd5c
	if (!ctx.cr6.eq) goto loc_82DBBD5C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82da7e70
	ctx.lr = 0x82DBBD18;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbd8c
	if (!ctx.cr6.eq) goto loc_82DBBD8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBBD2C;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbd8c
	if (!ctx.cr6.eq) goto loc_82DBBD8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r4,r25,r30
	ctx.r4.u64 = ctx.r25.u64 + ctx.r30.u64;
	// bl 0x82da7e70
	ctx.lr = 0x82DBBD44;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbd8c
	if (!ctx.cr6.eq) goto loc_82DBBD8C;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// beq cr6,0x82dbbd74
	if (ctx.cr6.eq) goto loc_82DBBD74;
loc_82DBBD5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbb660
	ctx.lr = 0x82DBBD64;
	sub_82DBB660(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbbc4c
	if (ctx.cr6.eq) goto loc_82DBBC4C;
	// b 0x82dbbd78
	goto loc_82DBBD78;
loc_82DBBD74:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82DBBD78:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82dbbd84
	if (ctx.cr6.eq) goto loc_82DBBD84;
	// stw r29,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r29.u32);
loc_82DBBD84:
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r22,r29,r24
	PPC_STORE_U8(ctx.r29.u32 + ctx.r24.u32, ctx.r22.u8);
loc_82DBBD8C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBBD94"))) PPC_WEAK_FUNC(sub_82DBBD94);
PPC_FUNC_IMPL(__imp__sub_82DBBD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBBD98"))) PPC_WEAK_FUNC(sub_82DBBD98);
PPC_FUNC_IMPL(__imp__sub_82DBBD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DBBDA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBBDC0;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbe30
	if (!ctx.cr6.eq) goto loc_82DBBE30;
loc_82DBBDC8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBBDD4;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbe30
	if (!ctx.cr6.eq) goto loc_82DBBE30;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82dbbe04
	if (ctx.cr6.eq) goto loc_82DBBE04;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82dbbe04
	if (ctx.cr6.eq) goto loc_82DBBE04;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82dbbe04
	if (!ctx.cr6.lt) goto loc_82DBBE04;
	// stbx r4,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82DBBE04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dbb660
	ctx.lr = 0x82DBBE0C;
	sub_82DBB660(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbbdc8
	if (ctx.cr6.eq) goto loc_82DBBDC8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82dbbe24
	if (ctx.cr6.eq) goto loc_82DBBE24;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_82DBBE24:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_82DBBE30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBBE38"))) PPC_WEAK_FUNC(sub_82DBBE38);
PPC_FUNC_IMPL(__imp__sub_82DBBE38) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBBE5C;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbf3c
	if (!ctx.cr6.eq) goto loc_82DBBF3C;
loc_82DBBE64:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBBE70;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbf3c
	if (!ctx.cr6.eq) goto loc_82DBBF3C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// beq cr6,0x82dbbe8c
	if (ctx.cr6.eq) goto loc_82DBBE8C;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x82dbbf2c
	if (!ctx.cr6.eq) goto loc_82DBBF2C;
loc_82DBBE8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBBE98;
	sub_82DA7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbbf3c
	if (!ctx.cr6.eq) goto loc_82DBBF3C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82dbbef4
	if (ctx.cr6.eq) goto loc_82DBBEF4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82dbbec0
	if (ctx.cr6.eq) goto loc_82DBBEC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82dbbef8
	goto loc_82DBBEF8;
loc_82DBBEC0:
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7ab0
	ctx.lr = 0x82DBBECC;
	sub_82DA7AB0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBBEDC;
	sub_82DA7E70(ctx, base);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// b 0x82dbbef8
	goto loc_82DBBEF8;
loc_82DBBEF4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DBBEF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbbe8c
	if (ctx.cr6.eq) goto loc_82DBBE8C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBBF10;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbbe64
	if (ctx.cr6.eq) goto loc_82DBBE64;
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
loc_82DBBF2C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82da7e70
	ctx.lr = 0x82DBBF3C;
	sub_82DA7E70(ctx, base);
loc_82DBBF3C:
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

__attribute__((alias("__imp__sub_82DBBF50"))) PPC_WEAK_FUNC(sub_82DBBF50);
PPC_FUNC_IMPL(__imp__sub_82DBBF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x82DBBF58;
	__savegprlr_16(ctx, base);
	// stwu r1,-1776(r1)
	ea = -1776 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r17,512
	ctx.r17.s64 = 512;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// bl 0x82da7e70
	ctx.lr = 0x82DBBF78;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc210
	if (!ctx.cr6.eq) goto loc_82DBC210;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dbb728
	ctx.lr = 0x82DBBF98;
	sub_82DBB728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc210
	if (!ctx.cr6.eq) goto loc_82DBC210;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r11,7200
	ctx.r3.s64 = ctx.r11.s64 + 7200;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82da46a0
	ctx.lr = 0x82DBBFB4;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbbfc8
	if (ctx.cr6.eq) goto loc_82DBBFC8;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,1776
	ctx.r1.s64 = ctx.r1.s64 + 1776;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_82DBBFC8:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// addi r6,r1,1120
	ctx.r6.s64 = ctx.r1.s64 + 1120;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dbb728
	ctx.lr = 0x82DBBFE8;
	sub_82DBB728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc20c
	if (!ctx.cr6.eq) goto loc_82DBC20C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,7192
	ctx.r27.s64 = ctx.r11.s64 + 7192;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r21,r11,7180
	ctx.r21.s64 = ctx.r11.s64 + 7180;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,7172
	ctx.r26.s64 = ctx.r11.s64 + 7172;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r20,r11,7160
	ctx.r20.s64 = ctx.r11.s64 + 7160;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r11,7148
	ctx.r25.s64 = ctx.r11.s64 + 7148;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r19,r11,7132
	ctx.r19.s64 = ctx.r11.s64 + 7132;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r11,7120
	ctx.r24.s64 = ctx.r11.s64 + 7120;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r18,r11,7104
	ctx.r18.s64 = ctx.r11.s64 + 7104;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r23,r11,7068
	ctx.r23.s64 = ctx.r11.s64 + 7068;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r22,r11,7092
	ctx.r22.s64 = ctx.r11.s64 + 7092;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,7084
	ctx.r29.s64 = ctx.r11.s64 + 7084;
loc_82DBC04C:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r1,1120
	ctx.r10.s64 = ctx.r1.s64 + 1120;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u8);
	// stbx r28,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u8);
	// bl 0x82da46a0
	ctx.lr = 0x82DBC074;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc08c
	if (!ctx.cr6.eq) goto loc_82DBC08C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x82dbc1d0
	goto loc_82DBC1D0;
loc_82DBC08C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82dbc1b4
	if (!ctx.cr6.eq) goto loc_82DBC1B4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82DBC0A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// bne cr6,0x82dbc0a0
	if (!ctx.cr6.eq) goto loc_82DBC0A0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,608
	ctx.r9.s64 = ctx.r1.s64 + 608;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82DBC0C0:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,34
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 34, ctx.xer);
	// beq cr6,0x82dbc0e4
	if (ctx.cr6.eq) goto loc_82DBC0E4;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne cr6,0x82dbc0c0
	if (!ctx.cr6.eq) goto loc_82DBC0C0;
loc_82DBC0E4:
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stbx r28,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// bl 0x82da46a0
	ctx.lr = 0x82DBC0FC;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc114
	if (!ctx.cr6.eq) goto loc_82DBC114;
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// b 0x82dbc1d0
	goto loc_82DBC1D0;
loc_82DBC114:
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC124;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc13c
	if (!ctx.cr6.eq) goto loc_82DBC13C;
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82dbc1d0
	goto loc_82DBC1D0;
loc_82DBC13C:
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC14C;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc164
	if (!ctx.cr6.eq) goto loc_82DBC164;
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x82dbc1d0
	goto loc_82DBC1D0;
loc_82DBC164:
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC174;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc18c
	if (!ctx.cr6.eq) goto loc_82DBC18C;
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// b 0x82dbc1d0
	goto loc_82DBC1D0;
loc_82DBC18C:
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC19C;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc1e4
	if (!ctx.cr6.eq) goto loc_82DBC1E4;
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x82dbc1d0
	goto loc_82DBC1D0;
loc_82DBC1B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r16,r1,1120
	ctx.r16.s64 = ctx.r1.s64 + 1120;
	// bl 0x82da4568
	ctx.lr = 0x82DBC1C4;
	sub_82DA4568(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_82DBC1D0:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de89a0
	ctx.lr = 0x82DBC1E4;
	sub_82DE89A0(ctx, base);
loc_82DBC1E4:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// addi r6,r1,1120
	ctx.r6.s64 = ctx.r1.s64 + 1120;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dbb728
	ctx.lr = 0x82DBC204;
	sub_82DBB728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbc04c
	if (ctx.cr6.eq) goto loc_82DBC04C;
loc_82DBC20C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBC210:
	// addi r1,r1,1776
	ctx.r1.s64 = ctx.r1.s64 + 1776;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBC218"))) PPC_WEAK_FUNC(sub_82DBC218);
PPC_FUNC_IMPL(__imp__sub_82DBC218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82DBC220;
	__savegprlr_22(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBC238;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc470
	if (!ctx.cr6.eq) goto loc_82DBC470;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbc00
	ctx.lr = 0x82DBC254;
	sub_82DBBC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbc268
	if (ctx.cr6.eq) goto loc_82DBC268;
loc_82DBC25C:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82DBC268:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,7252
	ctx.r4.s64 = ctx.r11.s64 + 7252;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC27C;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc25c
	if (!ctx.cr6.eq) goto loc_82DBC25C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbc00
	ctx.lr = 0x82DBC298;
	sub_82DBBC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc46c
	if (!ctx.cr6.eq) goto loc_82DBC46C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r27,r11,24552
	ctx.r27.s64 = ctx.r11.s64 + 24552;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,7236
	ctx.r26.s64 = ctx.r11.s64 + 7236;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,7060
	ctx.r30.s64 = ctx.r11.s64 + 7060;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r11,7228
	ctx.r25.s64 = ctx.r11.s64 + 7228;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,-744
	ctx.r29.s64 = ctx.r11.s64 + -744;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r11,7220
	ctx.r24.s64 = ctx.r11.s64 + 7220;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,7068
	ctx.r28.s64 = ctx.r11.s64 + 7068;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r23,r11,7212
	ctx.r23.s64 = ctx.r11.s64 + 7212;
loc_82DBC2E4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC2F4;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82dbc340
	if (!ctx.cr6.eq) goto loc_82DBC340;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbc00
	ctx.lr = 0x82DBC310;
	sub_82DBBC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc46c
	if (!ctx.cr6.eq) goto loc_82DBC46C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de89a0
	ctx.lr = 0x82DBC33C;
	sub_82DE89A0(ctx, base);
	// b 0x82dbc450
	goto loc_82DBC450;
loc_82DBC340:
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC34C;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82dbc398
	if (!ctx.cr6.eq) goto loc_82DBC398;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbc00
	ctx.lr = 0x82DBC368;
	sub_82DBBC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc46c
	if (!ctx.cr6.eq) goto loc_82DBC46C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de89a0
	ctx.lr = 0x82DBC394;
	sub_82DE89A0(ctx, base);
	// b 0x82dbc450
	goto loc_82DBC450;
loc_82DBC398:
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC3A4;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82dbc408
	if (!ctx.cr6.eq) goto loc_82DBC408;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbc00
	ctx.lr = 0x82DBC3C4;
	sub_82DBBC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc46c
	if (!ctx.cr6.eq) goto loc_82DBC46C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stbx r22,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r22.u8);
	// bl 0x82cb6a70
	ctx.lr = 0x82DBC3E0;
	sub_82CB6A70(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de89a0
	ctx.lr = 0x82DBC404;
	sub_82DE89A0(ctx, base);
	// b 0x82dbc450
	goto loc_82DBC450;
loc_82DBC408:
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC414;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82dbc438
	if (ctx.cr6.eq) goto loc_82DBC438;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC42C;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc450
	if (!ctx.cr6.eq) goto loc_82DBC450;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82DBC438:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbc00
	ctx.lr = 0x82DBC448;
	sub_82DBBC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc46c
	if (!ctx.cr6.eq) goto loc_82DBC46C;
loc_82DBC450:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbc00
	ctx.lr = 0x82DBC464;
	sub_82DBBC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbc2e4
	if (ctx.cr6.eq) goto loc_82DBC2E4;
loc_82DBC46C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBC470:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBC478"))) PPC_WEAK_FUNC(sub_82DBC478);
PPC_FUNC_IMPL(__imp__sub_82DBC478) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82da7e70
	ctx.lr = 0x82DBC4A8;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc51c
	if (!ctx.cr6.eq) goto loc_82DBC51C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbe38
	ctx.lr = 0x82DBC4B8;
	sub_82DBBE38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc518
	if (!ctx.cr6.eq) goto loc_82DBC518;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,7068
	ctx.r30.s64 = ctx.r11.s64 + 7068;
loc_82DBC4C8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbd98
	ctx.lr = 0x82DBC4DC;
	sub_82DBBD98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc518
	if (!ctx.cr6.eq) goto loc_82DBC518;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de89a0
	ctx.lr = 0x82DBC508;
	sub_82DE89A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbe38
	ctx.lr = 0x82DBC510;
	sub_82DBBE38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbc4c8
	if (ctx.cr6.eq) goto loc_82DBC4C8;
loc_82DBC518:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBC51C:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
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

__attribute__((alias("__imp__sub_82DBC534"))) PPC_WEAK_FUNC(sub_82DBC534);
PPC_FUNC_IMPL(__imp__sub_82DBC534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBC538"))) PPC_WEAK_FUNC(sub_82DBC538);
PPC_FUNC_IMPL(__imp__sub_82DBC538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DBC540;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r28,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r28.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bl 0x82da7e70
	ctx.lr = 0x82DBC57C;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc764
	if (!ctx.cr6.eq) goto loc_82DBC764;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbb5d8
	ctx.lr = 0x82DBC590;
	sub_82DBB5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc764
	if (!ctx.cr6.eq) goto loc_82DBC764;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
	// bl 0x82da76a0
	ctx.lr = 0x82DBC5BC;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbc5cc
	if (ctx.cr6.eq) goto loc_82DBC5CC;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x82dbc764
	if (!ctx.cr6.eq) goto loc_82DBC764;
loc_82DBC5CC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r11,7076
	ctx.r3.s64 = ctx.r11.s64 + 7076;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC5E0;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc604
	if (!ctx.cr6.eq) goto loc_82DBC604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbb898
	ctx.lr = 0x82DBC5F0;
	sub_82DBB898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82dbc744
	if (ctx.cr6.eq) goto loc_82DBC744;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DBC604:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC618;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc63c
	if (!ctx.cr6.eq) goto loc_82DBC63C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbc218
	ctx.lr = 0x82DBC628;
	sub_82DBC218(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82dbc744
	if (ctx.cr6.eq) goto loc_82DBC744;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DBC63C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r11,7296
	ctx.r3.s64 = ctx.r11.s64 + 7296;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82da46a0
	ctx.lr = 0x82DBC650;
	sub_82DA46A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc674
	if (!ctx.cr6.eq) goto loc_82DBC674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbf50
	ctx.lr = 0x82DBC660;
	sub_82DBBF50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82dbc744
	if (ctx.cr6.eq) goto loc_82DBC744;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DBC674:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da8098
	ctx.lr = 0x82DBC680;
	sub_82DA8098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbc764
	if (!ctx.cr6.eq) goto loc_82DBC764;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da4420
	ctx.lr = 0x82DBC690;
	sub_82DA4420(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,7288
	ctx.r4.s64 = ctx.r11.s64 + 7288;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82da45e8
	ctx.lr = 0x82DBC6B0;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbc730
	if (ctx.cr6.eq) goto loc_82DBC730;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r10,7280
	ctx.r4.s64 = ctx.r10.s64 + 7280;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82da45e8
	ctx.lr = 0x82DBC6D4;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbc730
	if (ctx.cr6.eq) goto loc_82DBC730;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r10,7272
	ctx.r4.s64 = ctx.r10.s64 + 7272;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82da45e8
	ctx.lr = 0x82DBC6F8;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbc730
	if (ctx.cr6.eq) goto loc_82DBC730;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r10,7264
	ctx.r4.s64 = ctx.r10.s64 + 7264;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82da45e8
	ctx.lr = 0x82DBC71C;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbc730
	if (ctx.cr6.eq) goto loc_82DBC730;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DBC730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbc478
	ctx.lr = 0x82DBC738;
	sub_82DBC478(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dbc760
	if (!ctx.cr6.eq) goto loc_82DBC760;
loc_82DBC744:
	// addi r29,r31,232
	ctx.r29.s64 = ctx.r31.s64 + 232;
	// li r5,296
	ctx.r5.s64 = 296;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBC758;
	sub_82CB16F0(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
loc_82DBC760:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82DBC764:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBC76C"))) PPC_WEAK_FUNC(sub_82DBC76C);
PPC_FUNC_IMPL(__imp__sub_82DBC76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBC770"))) PPC_WEAK_FUNC(sub_82DBC770);
PPC_FUNC_IMPL(__imp__sub_82DBC770) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbc780
	if (!ctx.cr6.eq) goto loc_82DBC780;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBC780:
	// b 0x82dbc538
	sub_82DBC538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBC784"))) PPC_WEAK_FUNC(sub_82DBC784);
PPC_FUNC_IMPL(__imp__sub_82DBC784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBC788"))) PPC_WEAK_FUNC(sub_82DBC788);
PPC_FUNC_IMPL(__imp__sub_82DBC788) {
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
	// li r5,92
	ctx.r5.s64 = 92;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBC7B0;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32036
	ctx.r7.s64 = -2099511296;
	// addi r11,r11,7324
	ctx.r11.s64 = ctx.r11.s64 + 7324;
	// lis r8,-32036
	ctx.r8.s64 = -2099511296;
	// lis r9,-32036
	ctx.r9.s64 = -2099511296;
	// lis r10,-32036
	ctx.r10.s64 = -2099511296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r7,-14480
	ctx.r11.s64 = ctx.r7.s64 + -14480;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r11,r8,-18680
	ctx.r11.s64 = ctx.r8.s64 + -18680;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r11,r9,-18672
	ctx.r11.s64 = ctx.r9.s64 + -18672;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r11,r10,-18664
	ctx.r11.s64 = ctx.r10.s64 + -18664;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,528
	ctx.r11.s64 = 528;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DBC828"))) PPC_WEAK_FUNC(sub_82DBC828);
PPC_FUNC_IMPL(__imp__sub_82DBC828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DBC830;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// stw r4,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r4.u32);
	// bne cr6,0x82dbc8a8
	if (!ctx.cr6.eq) goto loc_82DBC8A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r5,r11,7352
	ctx.r5.s64 = ctx.r11.s64 + 7352;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ble cr6,0x82dbc87c
	if (!ctx.cr6.gt) goto loc_82DBC87C;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r6,107
	ctx.r6.s64 = 107;
	// ori r4,r4,18488
	ctx.r4.u64 = ctx.r4.u64 | 18488;
	// b 0x82dbc884
	goto loc_82DBC884;
loc_82DBC87C:
	// li r6,111
	ctx.r6.s64 = 111;
	// li r4,12860
	ctx.r4.s64 = 12860;
loc_82DBC884:
	// bl 0x82d862b0
	ctx.lr = 0x82DBC888;
	sub_82D862B0(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbc8a4
	if (!ctx.cr6.eq) goto loc_82DBC8A4;
loc_82DBC898:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DBC8A4:
	// stw r11,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r11.u32);
loc_82DBC8A8:
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// lwz r31,244(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82dbc98c
	if (!ctx.cr6.gt) goto loc_82DBC98C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,18472
	ctx.r11.u64 = ctx.r11.u64 | 18472;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,18468
	ctx.r29.s64 = ctx.r29.s64 + 18468;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r31,2083
	ctx.r11.s64 = ctx.r31.s64 + 2083;
	// rlwinm r11,r11,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82dbc924
	if (!ctx.cr6.gt) goto loc_82DBC924;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// li r8,4
	ctx.r8.s64 = 4;
loc_82DBC900:
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r5,264(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x82dbc900
	if (!ctx.cr6.eq) goto loc_82DBC900;
loc_82DBC924:
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r6,18480
	ctx.r6.s64 = ctx.r6.s64 + 18480;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb9700
	ctx.lr = 0x82DBC940;
	sub_82FB9700(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82dbc964
	if (!ctx.cr6.lt) goto loc_82DBC964;
loc_82DBC948:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82dbc898
	if (ctx.cr6.eq) goto loc_82DBC898;
	// li r3,57
	ctx.r3.s64 = 57;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DBC964:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,18476
	ctx.r9.u64 = ctx.r10.u64 | 18476;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r10,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DBC98C:
	// addi r11,r31,2083
	ctx.r11.s64 = ctx.r31.s64 + 2083;
	// addi r3,r31,12840
	ctx.r3.s64 = ctx.r31.s64 + 12840;
	// rlwinm r11,r11,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// addi r10,r11,2048
	ctx.r10.s64 = ctx.r11.s64 + 2048;
	// addi r9,r11,8192
	ctx.r9.s64 = ctx.r11.s64 + 8192;
	// addi r8,r11,4096
	ctx.r8.s64 = ctx.r11.s64 + 4096;
	// addi r7,r11,8704
	ctx.r7.s64 = ctx.r11.s64 + 8704;
	// stw r11,12836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12836, ctx.r11.u32);
	// stw r11,12844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12844, ctx.r11.u32);
	// stw r10,12848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12848, ctx.r10.u32);
	// stw r9,12856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12856, ctx.r9.u32);
	// stw r8,12852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12852, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// bl 0x833b7fe4
	ctx.lr = 0x82DBC9C4;
	__imp__XMACreateContext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82dbc948
	if (ctx.cr6.lt) goto loc_82DBC948;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBC9E0"))) PPC_WEAK_FUNC(sub_82DBC9E0);
PPC_FUNC_IMPL(__imp__sub_82DBC9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DBC9E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbca24
	if (!ctx.cr6.gt) goto loc_82DBCA24;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82DBCA08:
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dbca08
	if (ctx.cr6.lt) goto loc_82DBCA08;
loc_82DBCA24:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r30,244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// ble cr6,0x82dbcaf4
	if (!ctx.cr6.gt) goto loc_82DBCAF4;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// ori r9,r9,18476
	ctx.r9.u64 = ctx.r9.u64 | 18476;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r8,r8,18472
	ctx.r8.u64 = ctx.r8.u64 | 18472;
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// lwzx r3,r30,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r28,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r28.u32);
	// beq cr6,0x82dbca78
	if (ctx.cr6.eq) goto loc_82DBCA78;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBCA78;
	sub_82CB16F0(ctx, base);
loc_82DBCA78:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// ori r11,r11,18484
	ctx.r11.u64 = ctx.r11.u64 | 18484;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r29,r29,18480
	ctx.r29.s64 = ctx.r29.s64 + 18480;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82fba6b0
	ctx.lr = 0x82DBCA98;
	sub_82FBA6B0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82fba748
	ctx.lr = 0x82DBCAA0;
	sub_82FBA748(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbcae0
	if (!ctx.cr6.gt) goto loc_82DBCAE0;
loc_82DBCAB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82fba020
	ctx.lr = 0x82DBCABC;
	sub_82FBA020(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fba2f8
	ctx.lr = 0x82DBCAD0;
	sub_82FBA2F8(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbcab0
	if (ctx.cr6.lt) goto loc_82DBCAB0;
loc_82DBCAE0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82fba960
	ctx.lr = 0x82DBCAE8;
	sub_82FBA960(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DBCAF4:
	// li r10,512
	ctx.r10.s64 = 512;
	// rlwinm r5,r11,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82cb16f0
	ctx.lr = 0x82DBCB10;
	sub_82CB16F0(ctx, base);
	// lwz r3,12840(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dbcc60
	if (ctx.cr6.eq) goto loc_82DBCC60;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833b8024
	ctx.lr = 0x82DBCB24;
	__imp__XMADisableContext(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBCB38;
	sub_82CB16F0(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12844(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12844);
	// bl 0x82cb16f0
	ctx.lr = 0x82DBCB48;
	sub_82CB16F0(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12848);
	// bl 0x82cb16f0
	ctx.lr = 0x82DBCB58;
	sub_82CB16F0(ctx, base);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12856);
	// bl 0x82cb16f0
	ctx.lr = 0x82DBCB68;
	sub_82CB16F0(ctx, base);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12852(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12852);
	// bl 0x82cb16f0
	ctx.lr = 0x82DBCB78;
	sub_82CB16F0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbcb94
	if (!ctx.cr6.gt) goto loc_82DBCB94;
	// cmpwi cr6,r11,24000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24000, ctx.xer);
	// ble cr6,0x82dbcbe4
	if (!ctx.cr6.gt) goto loc_82DBCBE4;
loc_82DBCB94:
	// cmpwi cr6,r11,24001
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24001, ctx.xer);
	// blt cr6,0x82dbcbac
	if (ctx.cr6.lt) goto loc_82DBCBAC;
	// cmpwi cr6,r11,32000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32000, ctx.xer);
	// bgt cr6,0x82dbcbac
	if (ctx.cr6.gt) goto loc_82DBCBAC;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// b 0x82dbcbe4
	goto loc_82DBCBE4;
loc_82DBCBAC:
	// cmpwi cr6,r11,32001
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32001, ctx.xer);
	// blt cr6,0x82dbcbcc
	if (ctx.cr6.lt) goto loc_82DBCBCC;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r8,r8,44100
	ctx.r8.u64 = ctx.r8.u64 | 44100;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82dbcbcc
	if (ctx.cr6.gt) goto loc_82DBCBCC;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x82dbcbe4
	goto loc_82DBCBE4;
loc_82DBCBCC:
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r28,3
	ctx.r28.s64 = 3;
	// ori r8,r8,44101
	ctx.r8.u64 = ctx.r8.u64 | 44101;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82dbcbe4
	if (!ctx.cr6.lt) goto loc_82DBCBE4;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DBCBE4:
	// lwz r11,12844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12844);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,12848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12848);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,12856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12856);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bgt cr6,0x82dbcc20
	if (ctx.cr6.gt) goto loc_82DBCC20;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82DBCC20:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,12852(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12852);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12840(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12840);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x833b8014
	ctx.lr = 0x82DBCC50;
	__imp__XMAInitializeContext(ctx, base);
	// lwz r3,12840(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12840);
	// bl 0x833b8004
	ctx.lr = 0x82DBCC58;
	__imp__XMASetOutputBufferValid(ctx, base);
	// lwz r3,12840(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12840);
	// bl 0x833b7ff4
	ctx.lr = 0x82DBCC60;
	__imp__XMAEnableContext(ctx, base);
loc_82DBCC60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBCC6C"))) PPC_WEAK_FUNC(sub_82DBCC6C);
PPC_FUNC_IMPL(__imp__sub_82DBCC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBCC70"))) PPC_WEAK_FUNC(sub_82DBCC70);
PPC_FUNC_IMPL(__imp__sub_82DBCC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82DBCC78;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// lwz r31,244(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 244);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stb r24,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r24.u8);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82DBCCA8:
	// lwz r3,12840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12840);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82dbccbc
	if (!ctx.cr6.eq) goto loc_82DBCCBC;
	// bl 0x833b80c4
	ctx.lr = 0x82DBCCB8;
	__imp__XMAIsInputBuffer0Valid(ctx, base);
	// b 0x82dbccc0
	goto loc_82DBCCC0;
loc_82DBCCBC:
	// bl 0x833b80b4
	ctx.lr = 0x82DBCCC0;
	__imp__XMAIsInputBuffer1Valid(ctx, base);
loc_82DBCCC0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbcd68
	if (!ctx.cr6.eq) goto loc_82DBCD68;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// bl 0x82da8018
	ctx.lr = 0x82DBCCD8;
	sub_82DA8018(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r10,156(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// addi r11,r29,3211
	ctx.r11.s64 = ctx.r29.s64 + 3211;
	// blt cr6,0x82dbcd18
	if (ctx.cr6.lt) goto loc_82DBCD18;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82DBCD0C;
	sub_82CB16F0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r26,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r26.u8);
	// b 0x82dbcd68
	goto loc_82DBCD68;
loc_82DBCD18:
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x82da76a0
	ctx.lr = 0x82DBCD34;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbcd48
	if (ctx.cr6.eq) goto loc_82DBCD48;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r26,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r26.u8);
	// b 0x82dbcd68
	goto loc_82DBCD68;
loc_82DBCD48:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stb r26,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r26.u8);
	// lwz r3,12840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12840);
	// bne cr6,0x82dbcd64
	if (!ctx.cr6.eq) goto loc_82DBCD64;
	// bl 0x833b80a4
	ctx.lr = 0x82DBCD60;
	__imp__XMASetInputBuffer0Valid(ctx, base);
	// b 0x82dbcd68
	goto loc_82DBCD68;
loc_82DBCD64:
	// bl 0x833b8094
	ctx.lr = 0x82DBCD68;
	__imp__XMASetInputBuffer1Valid(ctx, base);
loc_82DBCD68:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82dbcca8
	if (ctx.cr6.lt) goto loc_82DBCCA8;
	// lwz r3,12840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12840);
	// bl 0x833b8084
	ctx.lr = 0x82DBCD7C;
	__imp__XMAGetInputBufferReadOffset(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,12840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12840);
	// bl 0x833b8074
	ctx.lr = 0x82DBCD88;
	__imp__XMAGetOutputBufferReadOffset(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12840);
	// bl 0x833b8064
	ctx.lr = 0x82DBCD94;
	__imp__XMAGetOutputBufferWriteOffset(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12840);
	// bl 0x833b8054
	ctx.lr = 0x82DBCDA0;
	__imp__XMAIsOutputBufferValid(ctx, base);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82dbce14
	if (!ctx.cr6.eq) goto loc_82DBCE14;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbcde4
	if (!ctx.cr6.eq) goto loc_82DBCDE4;
	// lwz r3,12840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12840);
	// bl 0x833b8004
	ctx.lr = 0x82DBCDB8;
	__imp__XMASetOutputBufferValid(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12840);
	// bl 0x833b8044
	ctx.lr = 0x82DBCDC4;
	__imp__XMASetOutputBufferReadOffset(ctx, base);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82DBCDE4:
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x82dbce54
	if (!ctx.cr6.eq) goto loc_82DBCE54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dbce1c
	if (ctx.cr6.eq) goto loc_82DBCE1C;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// bne cr6,0x82dbce1c
	if (!ctx.cr6.eq) goto loc_82DBCE1C;
	// stw r26,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r26.u32);
	// li r3,22
	ctx.r3.s64 = 22;
	// stw r26,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82DBCE14:
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x82dbce54
	if (!ctx.cr6.eq) goto loc_82DBCE54;
loc_82DBCE1C:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbce54
	if (ctx.cr6.eq) goto loc_82DBCE54;
	// lwz r11,12844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12844);
	// lwz r3,12840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12840);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,21,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7FFF;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x833b8034
	ctx.lr = 0x82DBCE40;
	__imp__XMASetInputBufferReadOffset(ctx, base);
	// stw r26,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r26.u32);
	// stw r26,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82DBCE54:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// ble cr6,0x82dbce64
	if (!ctx.cr6.gt) goto loc_82DBCE64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82DBCE64:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// lwz r3,12840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12840);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// bl 0x833b8044
	ctx.lr = 0x82DBCE84;
	__imp__XMASetOutputBufferReadOffset(ctx, base);
	// lwz r3,12840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12840);
	// bl 0x833b8004
	ctx.lr = 0x82DBCE8C;
	__imp__XMASetOutputBufferValid(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBCE98"))) PPC_WEAK_FUNC(sub_82DBCE98);
PPC_FUNC_IMPL(__imp__sub_82DBCE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82DBCEA0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r21,244(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 244);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r23.u32);
	// lwz r10,232(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82dbcef0
	if (!ctx.cr6.gt) goto loc_82DBCEF0;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82DBCED8:
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,232(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dbced8
	if (ctx.cr6.lt) goto loc_82DBCED8;
loc_82DBCEF0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r24,r21,1
	ctx.r24.s64 = ctx.r21.s64 + 65536;
	// ori r18,r11,18472
	ctx.r18.u64 = ctx.r11.u64 | 18472;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r24,r24,18480
	ctx.r24.s64 = ctx.r24.s64 + 18480;
	// ori r22,r11,32768
	ctx.r22.u64 = ctx.r11.u64 | 32768;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r15,-1
	ctx.r15.s64 = -1;
	// ori r17,r11,18476
	ctx.r17.u64 = ctx.r11.u64 | 18476;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r16,r11,18484
	ctx.r16.u64 = ctx.r11.u64 | 18484;
loc_82DBCF1C:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82fba6b0
	ctx.lr = 0x82DBCF24;
	sub_82FBA6B0(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82fba748
	ctx.lr = 0x82DBCF2C;
	sub_82FBA748(ctx, base);
	// lwz r11,232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbcf6c
	if (!ctx.cr6.gt) goto loc_82DBCF6C;
loc_82DBCF40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82fb9b90
	ctx.lr = 0x82DBCF4C;
	sub_82FB9B90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbcf68
	if (ctx.cr6.eq) goto loc_82DBCF68;
	// lwz r11,232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbcf40
	if (ctx.cr6.lt) goto loc_82DBCF40;
	// b 0x82dbcf6c
	goto loc_82DBCF6C;
loc_82DBCF68:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82DBCF6C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbd07c
	if (ctx.cr6.eq) goto loc_82DBD07C;
	// add r25,r21,r18
	ctx.r25.u64 = ctx.r21.u64 + ctx.r18.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82da8018
	ctx.lr = 0x82DBCF98;
	sub_82DA8018(ctx, base);
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r10,268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + ctx.r22.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82dbcfc8
	if (ctx.cr6.lt) goto loc_82DBCFC8;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82dbd07c
	if (ctx.cr6.eq) goto loc_82DBD07C;
loc_82DBCFC8:
	// add r29,r21,r17
	ctx.r29.u64 = ctx.r21.u64 + ctx.r17.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBCFE0;
	sub_82CB16F0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82DBCFFC;
	sub_82DA76A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82dbd010
	if (ctx.cr6.eq) goto loc_82DBD010;
	// cmpwi cr6,r31,22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 22, ctx.xer);
	// bne cr6,0x82dbd220
	if (!ctx.cr6.eq) goto loc_82DBD220;
loc_82DBD010:
	// add r11,r21,r16
	ctx.r11.u64 = ctx.r21.u64 + ctx.r16.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dbd028
	if (ctx.cr6.eq) goto loc_82DBD028;
	// li r26,2048
	ctx.r26.s64 = 2048;
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
loc_82DBD028:
	// lwz r11,232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbd070
	if (!ctx.cr6.gt) goto loc_82DBD070;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82DBD03C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r6,r31,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82fb9a38
	ctx.lr = 0x82DBD05C;
	sub_82FB9A38(ctx, base);
	// lwz r11,232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 + ctx.r26.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbd03c
	if (ctx.cr6.lt) goto loc_82DBD03C;
loc_82DBD070:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82DBD07C:
	// lwz r11,232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// li r26,512
	ctx.r26.s64 = 512;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbd1c4
	if (!ctx.cr6.gt) goto loc_82DBD1C4;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// subf r28,r21,r14
	ctx.r28.s64 = ctx.r14.s64 - ctx.r21.s64;
loc_82DBD098:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82fb9c60
	ctx.lr = 0x82DBD0A4;
	sub_82FB9C60(ctx, base);
	// rotlwi r11,r20,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r20.u32, 1);
	// lwz r10,232(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// divw r8,r20,r10
	ctx.r8.s32 = ctx.r20.s32 / ctx.r10.s32;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// twllei r10,0
	// rlwinm r31,r8,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// twlgei r11,-1
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82dbd1b0
	if (!ctx.cr6.eq) goto loc_82DBD1B0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82dbd168
	if (ctx.cr6.eq) goto loc_82DBD168;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x82dbd0e8
	if (!ctx.cr6.gt) goto loc_82DBD0E8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82DBD0E8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82dbd0f8
	if (!ctx.cr6.eq) goto loc_82DBD0F8;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// b 0x82dbd104
	goto loc_82DBD104;
loc_82DBD0F8:
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82dbd104
	if (!ctx.cr6.gt) goto loc_82DBD104;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82DBD104:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fb9d38
	ctx.lr = 0x82DBD114;
	sub_82FB9D38(ctx, base);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dbd160
	if (ctx.cr6.eq) goto loc_82DBD160;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82DBD128:
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,232(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne cr6,0x82dbd128
	if (!ctx.cr6.eq) goto loc_82DBD128;
loc_82DBD160:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x82dbd1b0
	goto loc_82DBD1B0;
loc_82DBD168:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82fb9bf8
	ctx.lr = 0x82DBD174;
	sub_82FB9BF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbd1b0
	if (ctx.cr6.eq) goto loc_82DBD1B0;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82dbd1ac
	if (!ctx.cr6.gt) goto loc_82DBD1AC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82DBD18C:
	// sth r23,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r23.u16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r23,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r23.u16);
	// lwz r9,232(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bne cr6,0x82dbd18c
	if (!ctx.cr6.eq) goto loc_82DBD18C;
loc_82DBD1AC:
	// stw r15,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r15.u32);
loc_82DBD1B0:
	// lwz r11,232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbd098
	if (ctx.cr6.lt) goto loc_82DBD098;
loc_82DBD1C4:
	// lwz r11,232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbd1f8
	if (!ctx.cr6.gt) goto loc_82DBD1F8;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82DBD1D8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82dbd1e8
	if (ctx.cr6.eq) goto loc_82DBD1E8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82DBD1E8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbd1d8
	if (!ctx.cr6.eq) goto loc_82DBD1D8;
loc_82DBD1F8:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82fba960
	ctx.lr = 0x82DBD200;
	sub_82FBA960(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82dbd234
	if (!ctx.cr6.gt) goto loc_82DBD234;
	// lwz r11,232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82dbd234
	if (ctx.cr6.eq) goto loc_82DBD234;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82da3e20
	ctx.lr = 0x82DBD21C;
	sub_82DA3E20(ctx, base);
	// b 0x82dbcf1c
	goto loc_82DBCF1C;
loc_82DBD220:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82fba960
	ctx.lr = 0x82DBD228;
	sub_82FBA960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82DBD234:
	// lwz r9,232(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82dbd264
	if (!ctx.cr6.gt) goto loc_82DBD264;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82DBD248:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82dbd270
	if (!ctx.cr6.lt) goto loc_82DBD270;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dbd248
	if (ctx.cr6.lt) goto loc_82DBD248;
loc_82DBD264:
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82DBD270:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r11,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBD294"))) PPC_WEAK_FUNC(sub_82DBD294);
PPC_FUNC_IMPL(__imp__sub_82DBD294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBD298"))) PPC_WEAK_FUNC(sub_82DBD298);
PPC_FUNC_IMPL(__imp__sub_82DBD298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82DBD2A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r4,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,511
	ctx.r5.s64 = 511;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBD2D4;
	sub_82CB16F0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da8018
	ctx.lr = 0x82DBD2E0;
	sub_82DA8018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbd948
	if (!ctx.cr6.eq) goto loc_82DBD948;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r23,4
	ctx.r23.s64 = 4;
	// lis r24,-31909
	ctx.r24.s64 = -2091188224;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r25,r11,7352
	ctx.r25.s64 = ctx.r11.s64 + 7352;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r19,r11,7452
	ctx.r19.s64 = ctx.r11.s64 + 7452;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7444
	ctx.r11.s64 = ctx.r11.s64 + 7444;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7436
	ctx.r11.s64 = ctx.r11.s64 + 7436;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r21,r11,7428
	ctx.r21.s64 = ctx.r11.s64 + 7428;
loc_82DBD330:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// bl 0x82da7e70
	ctx.lr = 0x82DBD340;
	sub_82DA7E70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dbd57c
	if (!ctx.cr6.eq) goto loc_82DBD57C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da76a0
	ctx.lr = 0x82DBD364;
	sub_82DA76A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dbd57c
	if (!ctx.cr6.eq) goto loc_82DBD57C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82da45e8
	ctx.lr = 0x82DBD3A4;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbd508
	if (!ctx.cr6.eq) goto loc_82DBD508;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// blt cr6,0x82dbd594
	if (ctx.cr6.lt) goto loc_82DBD594;
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bgt cr6,0x82dbd594
	if (ctx.cr6.gt) goto loc_82DBD594;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82da76a0
	ctx.lr = 0x82DBD3D4;
	sub_82DA76A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dbd57c
	if (!ctx.cr6.eq) goto loc_82DBD57C;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// rlwimi r10,r11,8,8,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFF00) | (ctx.r10.u64 & 0xFFFFFFFFFF0000FF);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// bne cr6,0x82dbd594
	if (!ctx.cr6.eq) goto loc_82DBD594;
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// lhz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// rlwimi r10,r11,8,8,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFF00) | (ctx.r10.u64 & 0xFFFFFFFFFF0000FF);
	// lbz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lhz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// rlwimi r8,r9,8,8,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFF00) | (ctx.r8.u64 & 0xFFFFFFFFFF0000FF);
	// lbz r5,118(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r7,r10,8,8,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFF00) | (ctx.r7.u64 & 0xFFFFFFFFFF0000FF);
	// rlwimi r5,r6,8,8,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFF00) | (ctx.r5.u64 & 0xFFFFFFFFFF0000FF);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// sth r8,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r8.u16);
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// sth r7,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r7.u16);
	// sth r5,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r5.u16);
	// bgt cr6,0x82dbd594
	if (ctx.cr6.gt) goto loc_82DBD594;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbd820
	if (!ctx.cr6.gt) goto loc_82DBD820;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82DBD45C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// lbz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwimi r17,r10,16,0,15
	ctx.r17.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r17.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwimi r16,r9,16,0,15
	ctx.r16.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r16.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r18,8(r11)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwimi r15,r8,16,0,15
	ctx.r15.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r15.u64 & 0xFFFFFFFF0000FFFF);
	// sth r28,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r28.u16);
	// rlwimi r14,r7,16,0,15
	ctx.r14.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r14.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r10,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwinm r17,r17,8,0,15
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r16,r16,8,0,15
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r15,r15,8,0,15
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r14,r14,8,0,15
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r17,r10
	ctx.r10.u64 = ctx.r17.u64 | ctx.r10.u64;
	// or r9,r16,r9
	ctx.r9.u64 = ctx.r16.u64 | ctx.r9.u64;
	// or r8,r15,r8
	ctx.r8.u64 = ctx.r15.u64 | ctx.r8.u64;
	// or r7,r14,r7
	ctx.r7.u64 = ctx.r14.u64 | ctx.r7.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// or r7,r7,r18
	ctx.r7.u64 = ctx.r7.u64 | ctx.r18.u64;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lhz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82dbd45c
	if (ctx.cr6.lt) goto loc_82DBD45C;
	// b 0x82dbd820
	goto loc_82DBD820;
loc_82DBD508:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBD518;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbd5a8
	if (!ctx.cr6.eq) goto loc_82DBD5A8;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82dbd550
	if (!ctx.cr6.eq) goto loc_82DBD550;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da8018
	ctx.lr = 0x82DBD544;
	sub_82DA8018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dbd57c
	if (!ctx.cr6.eq) goto loc_82DBD57C;
loc_82DBD550:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbd5a0
	if (ctx.cr6.eq) goto loc_82DBD5A0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82da7e70
	ctx.lr = 0x82DBD570;
	sub_82DA7E70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82dbd820
	if (ctx.cr6.eq) goto loc_82DBD820;
loc_82DBD57C:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbd884
	if (ctx.cr6.eq) goto loc_82DBD884;
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbd91c
	if (!ctx.cr6.eq) goto loc_82DBD91C;
loc_82DBD594:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82DBD5A0:
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// b 0x82dbd820
	goto loc_82DBD820;
loc_82DBD5A8:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBD5B8;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbd604
	if (!ctx.cr6.eq) goto loc_82DBD604;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,44
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 44, ctx.xer);
	// blt cr6,0x82dbd594
	if (ctx.cr6.lt) goto loc_82DBD594;
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bgt cr6,0x82dbd594
	if (ctx.cr6.gt) goto loc_82DBD594;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82DBD5E8;
	sub_82DA76A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dbd57c
	if (!ctx.cr6.eq) goto loc_82DBD57C;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82dbd820
	goto loc_82DBD820;
loc_82DBD604:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBD614;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbd810
	if (!ctx.cr6.eq) goto loc_82DBD810;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,19872(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19872);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82dbd6a0
	if (ctx.cr6.eq) goto loc_82DBD6A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,826
	ctx.r6.s64 = 826;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82d862b0
	ctx.lr = 0x82DBD648;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// beq cr6,0x82dbd878
	if (ctx.cr6.eq) goto loc_82DBD878;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da76a0
	ctx.lr = 0x82DBD690;
	sub_82DA76A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dbd57c
	if (!ctx.cr6.eq) goto loc_82DBD57C;
	// b 0x82dbd820
	goto loc_82DBD820;
loc_82DBD6A0:
	// li r6,844
	ctx.r6.s64 = 844;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d862b0
	ctx.lr = 0x82DBD6AC;
	sub_82D862B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r4.u32);
	// beq cr6,0x82dbd878
	if (ctx.cr6.eq) goto loc_82DBD878;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82da76a0
	ctx.lr = 0x82DBD6D0;
	sub_82DA76A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dbd57c
	if (!ctx.cr6.eq) goto loc_82DBD57C;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r5,r10,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbd7b4
	if (!ctx.cr6.gt) goto loc_82DBD7B4;
loc_82DBD71C:
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwinm r4,r10,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r5,r10,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r8,r5,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82dbd7a0
	if (!ctx.cr6.gt) goto loc_82DBD7A0;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_82DBD764:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rlwinm r3,r10,24,16,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r5,r4,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82dbd764
	if (!ctx.cr6.eq) goto loc_82DBD764;
loc_82DBD7A0:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbd71c
	if (ctx.cr6.lt) goto loc_82DBD71C;
loc_82DBD7B4:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82dbd7ec
	if (!ctx.cr6.eq) goto loc_82DBD7EC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// lhz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// twllei r9,0
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r10,0
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82dbd820
	goto loc_82DBD820;
loc_82DBD7EC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82dbd820
	goto loc_82DBD820;
loc_82DBD810:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82da7e70
	ctx.lr = 0x82DBD820;
	sub_82DA7E70(ctx, base);
loc_82DBD820:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r23,r10,8
	ctx.r23.s64 = ctx.r10.s64 + 8;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82dbd854
	if (ctx.cr6.eq) goto loc_82DBD854;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82DBD854:
	// lwz r11,812(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82dbd57c
	if (!ctx.cr6.lt) goto loc_82DBD57C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82dbd57c
	if (ctx.cr6.eq) goto loc_82DBD57C;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbd330
	if (ctx.cr6.eq) goto loc_82DBD330;
	// b 0x82dbd57c
	goto loc_82DBD57C;
loc_82DBD878:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82DBD884:
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbd594
	if (ctx.cr6.eq) goto loc_82DBD594;
	// lbz r10,123(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// li r6,2048
	ctx.r6.s64 = 2048;
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// lbz r9,122(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stb r9,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r9.u8);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// stw r6,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r6.u32);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// stb r11,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r11.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r28,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r28.u32);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// beq cr6,0x82dbd91c
	if (ctx.cr6.eq) goto loc_82DBD91C;
	// addi r10,r29,40
	ctx.r10.s64 = ctx.r29.s64 + 40;
	// addi r11,r1,141
	ctx.r11.s64 = ctx.r1.s64 + 141;
loc_82DBD8F4:
	// lhz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r8,1(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82dbd8f4
	if (ctx.cr6.lt) goto loc_82DBD8F4;
loc_82DBD91C:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbd594
	if (ctx.cr6.eq) goto loc_82DBD594;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82dbd944
	if (!ctx.cr6.eq) goto loc_82DBD944;
	// li r3,25
	ctx.r3.s64 = 25;
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82DBD944:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82DBD948:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBD950"))) PPC_WEAK_FUNC(sub_82DBD950);
PPC_FUNC_IMPL(__imp__sub_82DBD950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82DBD958;
	__savegprlr_26(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,511
	ctx.r5.s64 = 511;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// bl 0x82cb16f0
	ctx.lr = 0x82DBD97C;
	sub_82CB16F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r30,-31909
	ctx.r30.s64 = -2091188224;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,19872(r30)
	PPC_STORE_U32(ctx.r30.u32 + 19872, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r26,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r26.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stb r11,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r11.u8);
	// bl 0x82da7e70
	ctx.lr = 0x82DBD9B4;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbdcec
	if (!ctx.cr6.eq) goto loc_82DBDCEC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da76a0
	ctx.lr = 0x82DBD9D4;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbdcec
	if (!ctx.cr6.eq) goto loc_82DBDCEC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,7028
	ctx.r4.s64 = ctx.r11.s64 + 7028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBD9F0;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbda04
	if (ctx.cr6.eq) goto loc_82DBDA04;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82DBDA04:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82da76a0
	ctx.lr = 0x82DBDA1C;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbdcec
	if (!ctx.cr6.eq) goto loc_82DBDCEC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1055
	ctx.r6.s64 = 1055;
	// addi r5,r11,7352
	ctx.r5.s64 = ctx.r11.s64 + 7352;
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// li r4,296
	ctx.r4.s64 = 296;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,19872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DBDA70;
	sub_82D862B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bne cr6,0x82dbda8c
	if (!ctx.cr6.eq) goto loc_82DBDA8C;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82DBDA8C:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbd298
	ctx.lr = 0x82DBDAA4;
	sub_82DBD298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbdcec
	if (!ctx.cr6.eq) goto loc_82DBDCEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBDABC;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbdcec
	if (!ctx.cr6.eq) goto loc_82DBDCEC;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r26.u32);
	// lbz r10,97(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dbdb08
	if (ctx.cr6.eq) goto loc_82DBDB08;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
loc_82DBDAE0:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,260(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 260);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 260, ctx.r8.u32);
	// lbz r9,97(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dbdae0
	if (ctx.cr6.lt) goto loc_82DBDAE0;
loc_82DBDB08:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ble cr6,0x82dbdb3c
	if (!ctx.cr6.gt) goto loc_82DBDB3C;
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82dbdb40
	goto loc_82DBDB40;
loc_82DBDB3C:
	// li r10,2048
	ctx.r10.s64 = 2048;
loc_82DBDB40:
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// rlwinm r11,r29,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbdb98
	if (!ctx.cr6.eq) goto loc_82DBDB98;
	// rlwinm r30,r29,0,22,22
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82dbdb98
	if (ctx.cr6.eq) goto loc_82DBDB98;
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82dbdb74
	if (!ctx.cr6.gt) goto loc_82DBDB74;
	// li r3,75
	ctx.r3.s64 = 75;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82DBDB74:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r10,9
	ctx.r10.s64 = 9;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 256, ctx.r10.u32);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82dbdbd0
	goto loc_82DBDBD0;
loc_82DBDB98:
	// rlwinm r30,r29,0,22,22
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82dbdbb4
	if (ctx.cr6.eq) goto loc_82DBDBB4;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// b 0x82dbdbd0
	goto loc_82DBDBD0;
loc_82DBDBB4:
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// lbz r4,97(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// bl 0x82dbc828
	ctx.lr = 0x82DBDBC8;
	sub_82DBC828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbdcec
	if (!ctx.cr6.eq) goto loc_82DBDCEC;
loc_82DBDBD0:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbdbe4
	if (ctx.cr6.eq) goto loc_82DBDBE4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82dbdbe8
	goto loc_82DBDBE8;
loc_82DBDBE4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82DBDBE8:
	// li r9,512
	ctx.r9.s64 = 512;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// lwz r11,260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bgt cr6,0x82dbdc0c
	if (ctx.cr6.gt) goto loc_82DBDC0C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DBDC0C:
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// beq cr6,0x82dbdce8
	if (ctx.cr6.eq) goto loc_82DBDCE8;
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbdce8
	if (ctx.cr6.eq) goto loc_82DBDCE8;
	// lwz r11,256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82dbdce8
	if (!ctx.cr6.eq) goto loc_82DBDCE8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r27,r10,39640
	ctx.r27.u64 = ctx.r10.u64 | 39640;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dbdce8
	if (!ctx.cr6.eq) goto loc_82DBDCE8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,38096
	ctx.r10.u64 = ctx.r10.u64 | 38096;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82dbdc64
	if (!ctx.cr6.eq) goto loc_82DBDC64;
	// li r6,32
	ctx.r6.s64 = 32;
loc_82DBDC64:
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,-25900
	ctx.r3.s64 = ctx.r3.s64 + -25900;
	// bl 0x82da9108
	ctx.lr = 0x82DBDC78;
	sub_82DA9108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbdcec
	if (!ctx.cr6.eq) goto loc_82DBDCEC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbdce8
	if (!ctx.cr6.gt) goto loc_82DBDCE8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// ori r29,r11,39644
	ctx.r29.u64 = ctx.r11.u64 | 39644;
loc_82DBDCA0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,1116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// stw r26,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r26.u32);
	// stw r26,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r26.u32);
	// stw r26,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r26.u32);
	// stw r26,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r26.u32);
	// bl 0x82dbc828
	ctx.lr = 0x82DBDCC8;
	sub_82DBC828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbdcec
	if (!ctx.cr6.eq) goto loc_82DBDCEC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbdca0
	if (ctx.cr6.lt) goto loc_82DBDCA0;
loc_82DBDCE8:
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
loc_82DBDCEC:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBDCF4"))) PPC_WEAK_FUNC(sub_82DBDCF4);
PPC_FUNC_IMPL(__imp__sub_82DBDCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBDCF8"))) PPC_WEAK_FUNC(sub_82DBDCF8);
PPC_FUNC_IMPL(__imp__sub_82DBDCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DBDD00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r27,-31909
	ctx.r27.s64 = -2091188224;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,7352
	ctx.r28.s64 = ctx.r11.s64 + 7352;
	// beq cr6,0x82dbdd50
	if (ctx.cr6.eq) goto loc_82DBDD50;
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbdd50
	if (ctx.cr6.eq) goto loc_82DBDD50;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1188
	ctx.r6.s64 = 1188;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBDD4C;
	sub_82D861B0(ctx, base);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
loc_82DBDD50:
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbdd78
	if (ctx.cr6.eq) goto loc_82DBDD78;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1194
	ctx.r6.s64 = 1194;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBDD74;
	sub_82D861B0(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82DBDD78:
	// lwz r29,244(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82dbddf0
	if (ctx.cr6.eq) goto loc_82DBDDF0;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82dbddb0
	if (!ctx.cr6.gt) goto loc_82DBDDB0;
	// addis r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 65536;
	// addi r29,r29,18480
	ctx.r29.s64 = ctx.r29.s64 + 18480;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dbddc4
	if (ctx.cr6.eq) goto loc_82DBDDC4;
	// bl 0x82fb9900
	ctx.lr = 0x82DBDDA8;
	sub_82FB9900(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x82dbddc4
	goto loc_82DBDDC4;
loc_82DBDDB0:
	// lwz r3,12840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dbddc4
	if (ctx.cr6.eq) goto loc_82DBDDC4;
	// bl 0x833b80d4
	ctx.lr = 0x82DBDDC0;
	__imp__XMAReleaseContext(ctx, base);
	// stw r30,12840(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12840, ctx.r30.u32);
loc_82DBDDC4:
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbddec
	if (ctx.cr6.eq) goto loc_82DBDDEC;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// li r6,1223
	ctx.r6.s64 = 1223;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBDDE8;
	sub_82D861B0(ctx, base);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
loc_82DBDDEC:
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
loc_82DBDDF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBDDFC"))) PPC_WEAK_FUNC(sub_82DBDDFC);
PPC_FUNC_IMPL(__imp__sub_82DBDDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBDE00"))) PPC_WEAK_FUNC(sub_82DBDE00);
PPC_FUNC_IMPL(__imp__sub_82DBDE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DBDE08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82dbde3c
	if (!ctx.cr6.gt) goto loc_82DBDE3C;
	// lwz r7,224(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82dbce98
	ctx.lr = 0x82DBDE2C;
	sub_82DBCE98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbdecc
	if (ctx.cr6.eq) goto loc_82DBDECC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DBDE3C:
	// lwz r27,244(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12840(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12840);
	// bl 0x833b8024
	ctx.lr = 0x82DBDE4C;
	__imp__XMADisableContext(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbcc70
	ctx.lr = 0x82DBDE60;
	sub_82DBCC70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82dbde80
	if (ctx.cr6.eq) goto loc_82DBDE80;
	// lwz r3,12840(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12840);
	// bl 0x833b7ff4
	ctx.lr = 0x82DBDE74;
	__imp__XMAEnableContext(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DBDE80:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,12852(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12852);
	// add r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// ble cr6,0x82dbdec0
	if (!ctx.cr6.gt) goto loc_82DBDEC0;
	// subfic r5,r31,2048
	ctx.xer.ca = ctx.r31.u32 <= 2048;
	ctx.r5.s64 = 2048 - ctx.r31.s64;
	// bl 0x82cb1160
	ctx.lr = 0x82DBDEA8;
	sub_82CB1160(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r10,-2048
	ctx.r5.s64 = ctx.r10.s64 + -2048;
	// addi r3,r11,2048
	ctx.r3.s64 = ctx.r11.s64 + 2048;
loc_82DBDEC0:
	// bl 0x82cb1160
	ctx.lr = 0x82DBDEC4;
	sub_82CB1160(ctx, base);
	// lwz r3,12840(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12840);
	// bl 0x833b7ff4
	ctx.lr = 0x82DBDECC;
	__imp__XMAEnableContext(ctx, base);
loc_82DBDECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBDED8"))) PPC_WEAK_FUNC(sub_82DBDED8);
PPC_FUNC_IMPL(__imp__sub_82DBDED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DBDEE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bne cr6,0x82dbdf10
	if (!ctx.cr6.eq) goto loc_82DBDF10;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82da7e70
	ctx.lr = 0x82DBDF08;
	sub_82DA7E70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DBDF10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dbc9e0
	ctx.lr = 0x82DBDF18;
	sub_82DBC9E0(ctx, base);
	// lbz r11,229(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 229);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbe030
	if (ctx.cr6.eq) goto loc_82DBE030;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82dbdf3c
	if (!ctx.cr6.gt) goto loc_82DBDF3C;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
loc_82DBDF3C:
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82dbdf84
	if (!ctx.cr6.gt) goto loc_82DBDF84;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82DBDF5C:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82dbdf74
	if (ctx.cr6.lt) goto loc_82DBDF74;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82dbdf84
	if (!ctx.cr6.gt) goto loc_82DBDF84;
loc_82DBDF74:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82dbdf5c
	if (ctx.cr6.lt) goto loc_82DBDF5C;
loc_82DBDF84:
	// lwz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mullw r11,r31,r9
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82da7e70
	ctx.lr = 0x82DBDF9C;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbe100
	if (!ctx.cr6.eq) goto loc_82DBE100;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// lwz r9,248(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// addi r11,r29,384
	ctx.r11.s64 = ctx.r29.s64 + 384;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82dbdfc8
	if (!ctx.cr6.lt) goto loc_82DBDFC8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82dbdfcc
	goto loc_82DBDFCC;
loc_82DBDFC8:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82DBDFCC:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,260(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82dbe0fc
	if (ctx.cr6.eq) goto loc_82DBE0FC;
	// lis r11,-31894
	ctx.r11.s64 = -2090205184;
	// addi r29,r11,-11984
	ctx.r29.s64 = ctx.r11.s64 + -11984;
loc_82DBDFEC:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// ble cr6,0x82dbe000
	if (!ctx.cr6.gt) goto loc_82DBE000;
	// li r5,2048
	ctx.r5.s64 = 2048;
loc_82DBE000:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de8b80
	ctx.lr = 0x82DBE010;
	sub_82DE8B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbe0fc
	if (!ctx.cr6.eq) goto loc_82DBE0FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82dbdfec
	if (!ctx.cr6.eq) goto loc_82DBDFEC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DBE030:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// rlwinm r9,r10,21,11,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x82dbe050
	if (ctx.cr6.gt) goto loc_82DBE050;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82dbe07c
	goto loc_82DBE07C;
loc_82DBE050:
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// clrldi r7,r29,32
	ctx.r7.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// mulld r9,r8,r7
	ctx.r9.s64 = ctx.r8.s64 * ctx.r7.s64;
	// tdllei r11,0
	// divdu r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 / ctx.r11.u64;
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82dbe07c
	if (!ctx.cr6.gt) goto loc_82DBE07C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82DBE07C:
	// lwz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82da7e70
	ctx.lr = 0x82DBE094;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbe100
	if (!ctx.cr6.eq) goto loc_82DBE100;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r31,r11,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82dbe0fc
	if (ctx.cr6.eq) goto loc_82DBE0FC;
	// lis r11,-31894
	ctx.r11.s64 = -2090205184;
	// addi r29,r11,-14032
	ctx.r29.s64 = ctx.r11.s64 + -14032;
loc_82DBE0C0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// ble cr6,0x82dbe0d4
	if (!ctx.cr6.gt) goto loc_82DBE0D4;
	// li r5,2048
	ctx.r5.s64 = 2048;
loc_82DBE0D4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de8b80
	ctx.lr = 0x82DBE0E4;
	sub_82DE8B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbe0fc
	if (!ctx.cr6.eq) goto loc_82DBE0FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82dbe0c0
	if (!ctx.cr6.eq) goto loc_82DBE0C0;
loc_82DBE0FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBE100:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBE108"))) PPC_WEAK_FUNC(sub_82DBE108);
PPC_FUNC_IMPL(__imp__sub_82DBE108) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbe118
	if (!ctx.cr6.eq) goto loc_82DBE118;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBE118:
	// b 0x82dbd950
	sub_82DBD950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBE11C"))) PPC_WEAK_FUNC(sub_82DBE11C);
PPC_FUNC_IMPL(__imp__sub_82DBE11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBE120"))) PPC_WEAK_FUNC(sub_82DBE120);
PPC_FUNC_IMPL(__imp__sub_82DBE120) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbe130
	if (!ctx.cr6.eq) goto loc_82DBE130;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBE130:
	// b 0x82dbdcf8
	sub_82DBDCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBE134"))) PPC_WEAK_FUNC(sub_82DBE134);
PPC_FUNC_IMPL(__imp__sub_82DBE134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBE138"))) PPC_WEAK_FUNC(sub_82DBE138);
PPC_FUNC_IMPL(__imp__sub_82DBE138) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbe148
	if (!ctx.cr6.eq) goto loc_82DBE148;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBE148:
	// b 0x82dbde00
	sub_82DBDE00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBE14C"))) PPC_WEAK_FUNC(sub_82DBE14C);
PPC_FUNC_IMPL(__imp__sub_82DBE14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBE150"))) PPC_WEAK_FUNC(sub_82DBE150);
PPC_FUNC_IMPL(__imp__sub_82DBE150) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbe160
	if (!ctx.cr6.eq) goto loc_82DBE160;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBE160:
	// b 0x82dbded8
	sub_82DBDED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBE164"))) PPC_WEAK_FUNC(sub_82DBE164);
PPC_FUNC_IMPL(__imp__sub_82DBE164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBE168"))) PPC_WEAK_FUNC(sub_82DBE168);
PPC_FUNC_IMPL(__imp__sub_82DBE168) {
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
	// li r5,92
	ctx.r5.s64 = 92;
	// addi r31,r11,28880
	ctx.r31.s64 = ctx.r11.s64 + 28880;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBE190;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32036
	ctx.r7.s64 = -2099511296;
	// addi r11,r11,7460
	ctx.r11.s64 = ctx.r11.s64 + 7460;
	// lis r8,-32036
	ctx.r8.s64 = -2099511296;
	// lis r9,-32036
	ctx.r9.s64 = -2099511296;
	// lis r10,-32036
	ctx.r10.s64 = -2099511296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r7,-7928
	ctx.r11.s64 = ctx.r7.s64 + -7928;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r11,r8,-7904
	ctx.r11.s64 = ctx.r8.s64 + -7904;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r11,r9,-7880
	ctx.r11.s64 = ctx.r9.s64 + -7880;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r11,r10,-7856
	ctx.r11.s64 = ctx.r10.s64 + -7856;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,252
	ctx.r11.s64 = 252;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DBE208"))) PPC_WEAK_FUNC(sub_82DBE208);
PPC_FUNC_IMPL(__imp__sub_82DBE208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82DBE210;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r11,7480
	ctx.r27.s64 = ctx.r11.s64 + 7480;
	// lis r26,-31909
	ctx.r26.s64 = -2091188224;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbe250
	if (ctx.cr6.eq) goto loc_82DBE250;
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,705
	ctx.r6.s64 = 705;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBE24C;
	sub_82D861B0(ctx, base);
	// stw r24,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r24.u32);
loc_82DBE250:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbe36c
	if (ctx.cr6.eq) goto loc_82DBE36C;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbe34c
	if (!ctx.cr6.gt) goto loc_82DBE34C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82DBE270:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dbe30c
	if (ctx.cr6.eq) goto loc_82DBE30C;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82dbe2e8
	if (!ctx.cr6.gt) goto loc_82DBE2E8;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82DBE298:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbe2cc
	if (ctx.cr6.eq) goto loc_82DBE2CC;
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,726
	ctx.r6.s64 = 726;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBE2CC;
	sub_82D861B0(ctx, base);
loc_82DBE2CC:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82dbe298
	if (ctx.cr6.lt) goto loc_82DBE298;
loc_82DBE2E8:
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r6,730
	ctx.r6.s64 = 730;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r4,268(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// bl 0x82d861b0
	ctx.lr = 0x82DBE30C;
	sub_82D861B0(ctx, base);
loc_82DBE30C:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbe338
	if (ctx.cr6.eq) goto loc_82DBE338;
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,734
	ctx.r6.s64 = 734;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBE338;
	sub_82D861B0(ctx, base);
loc_82DBE338:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,280
	ctx.r30.s64 = ctx.r30.s64 + 280;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbe270
	if (ctx.cr6.lt) goto loc_82DBE270;
loc_82DBE34C:
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,738
	ctx.r6.s64 = 738;
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBE368;
	sub_82D861B0(ctx, base);
	// stw r24,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r24.u32);
loc_82DBE36C:
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbe394
	if (ctx.cr6.eq) goto loc_82DBE394;
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,744
	ctx.r6.s64 = 744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DBE390;
	sub_82D861B0(ctx, base);
	// stw r24,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r24.u32);
loc_82DBE394:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBE3A0"))) PPC_WEAK_FUNC(sub_82DBE3A0);
PPC_FUNC_IMPL(__imp__sub_82DBE3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DBE3A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82DBE3CC;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbe3dc
	if (ctx.cr6.eq) goto loc_82DBE3DC;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x82dbe480
	if (!ctx.cr6.eq) goto loc_82DBE480;
loc_82DBE3DC:
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82dbe434
	if (!ctx.cr6.eq) goto loc_82DBE434;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82dbe480
	if (!ctx.cr6.gt) goto loc_82DBE480;
loc_82DBE40C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// xori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 ^ 128;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82dbe40c
	if (ctx.cr6.lt) goto loc_82DBE40C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DBE434:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbe480
	if (ctx.cr6.eq) goto loc_82DBE480;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82DBE44C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82dbe44c
	if (ctx.cr6.lt) goto loc_82DBE44C;
loc_82DBE480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBE488"))) PPC_WEAK_FUNC(sub_82DBE488);
PPC_FUNC_IMPL(__imp__sub_82DBE488) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbe498
	if (!ctx.cr6.eq) goto loc_82DBE498;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBE498:
	// b 0x82dbe208
	sub_82DBE208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBE49C"))) PPC_WEAK_FUNC(sub_82DBE49C);
PPC_FUNC_IMPL(__imp__sub_82DBE49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBE4A0"))) PPC_WEAK_FUNC(sub_82DBE4A0);
PPC_FUNC_IMPL(__imp__sub_82DBE4A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dbe4b0
	if (!ctx.cr6.eq) goto loc_82DBE4B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBE4B0:
	// b 0x82dbe3a0
	sub_82DBE3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBE4B4"))) PPC_WEAK_FUNC(sub_82DBE4B4);
PPC_FUNC_IMPL(__imp__sub_82DBE4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBE4B8"))) PPC_WEAK_FUNC(sub_82DBE4B8);
PPC_FUNC_IMPL(__imp__sub_82DBE4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82DBE4C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r5,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da8018
	ctx.lr = 0x82DBE4DC;
	sub_82DA8018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r21,r11,7788
	ctx.r21.s64 = ctx.r11.s64 + 7788;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r20,r11,7780
	ctx.r20.s64 = ctx.r11.s64 + 7780;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r19,r11,7772
	ctx.r19.s64 = ctx.r11.s64 + 7772;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r18,r11,7764
	ctx.r18.s64 = ctx.r11.s64 + 7764;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r17,r11,7756
	ctx.r17.s64 = ctx.r11.s64 + 7756;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r16,r11,7748
	ctx.r16.s64 = ctx.r11.s64 + 7748;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r15,r11,7740
	ctx.r15.s64 = ctx.r11.s64 + 7740;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r14,r11,7732
	ctx.r14.s64 = ctx.r11.s64 + 7732;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7724
	ctx.r11.s64 = ctx.r11.s64 + 7724;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7716
	ctx.r11.s64 = ctx.r11.s64 + 7716;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7708
	ctx.r11.s64 = ctx.r11.s64 + 7708;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7700
	ctx.r11.s64 = ctx.r11.s64 + 7700;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7692
	ctx.r11.s64 = ctx.r11.s64 + 7692;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7684
	ctx.r11.s64 = ctx.r11.s64 + 7684;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7676
	ctx.r11.s64 = ctx.r11.s64 + 7676;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7668
	ctx.r11.s64 = ctx.r11.s64 + 7668;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7660
	ctx.r11.s64 = ctx.r11.s64 + 7660;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7436
	ctx.r11.s64 = ctx.r11.s64 + 7436;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7428
	ctx.r11.s64 = ctx.r11.s64 + 7428;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7652
	ctx.r11.s64 = ctx.r11.s64 + 7652;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7644
	ctx.r11.s64 = ctx.r11.s64 + 7644;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7636
	ctx.r11.s64 = ctx.r11.s64 + 7636;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7628
	ctx.r11.s64 = ctx.r11.s64 + 7628;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7620
	ctx.r11.s64 = ctx.r11.s64 + 7620;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,7612
	ctx.r26.s64 = ctx.r11.s64 + 7612;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7604
	ctx.r11.s64 = ctx.r11.s64 + 7604;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r11,7596
	ctx.r25.s64 = ctx.r11.s64 + 7596;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7588
	ctx.r11.s64 = ctx.r11.s64 + 7588;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7580
	ctx.r11.s64 = ctx.r11.s64 + 7580;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r28,-31909
	ctx.r28.s64 = -2091188224;
	// addi r29,r11,7480
	ctx.r29.s64 = ctx.r11.s64 + 7480;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r11,7572
	ctx.r11.s64 = ctx.r11.s64 + 7572;
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r23,r11,7564
	ctx.r23.s64 = ctx.r11.s64 + 7564;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,7556
	ctx.r11.s64 = ctx.r11.s64 + 7556;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r22,r11,7548
	ctx.r22.s64 = ctx.r11.s64 + 7548;
loc_82DBE668:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// bl 0x82da7e70
	ctx.lr = 0x82DBE678;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da76a0
	ctx.lr = 0x82DBE698;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82da45e8
	ctx.lr = 0x82DBE6D4;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBE6EC;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBE704;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBE71C;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,4
	ctx.r5.s64 = 4;
	// bne cr6,0x82dbe780
	if (!ctx.cr6.eq) goto loc_82DBE780;
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82DBE740;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,151
	ctx.r6.s64 = 151;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mulli r4,r10,280
	ctx.r4.s64 = ctx.r10.s64 * 280;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DBE768;
	sub_82D862B0(ctx, base);
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82dbfd90
	if (!ctx.cr6.eq) goto loc_82DBFD90;
loc_82DBE774:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82DBE780:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82da45e8
	ctx.lr = 0x82DBE78C;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,4
	ctx.r5.s64 = 4;
	// bne cr6,0x82dbe834
	if (!ctx.cr6.eq) goto loc_82DBE834;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// bl 0x82da76a0
	ctx.lr = 0x82DBE7AC;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82DBE7D0;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,178
	ctx.r6.s64 = 178;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mulli r4,r10,296
	ctx.r4.s64 = ctx.r10.s64 * 296;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DBE7F8;
	sub_82D862B0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dbe774
	if (ctx.cr6.eq) goto loc_82DBE774;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,184
	ctx.r6.s64 = 184;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mulli r4,r10,296
	ctx.r4.s64 = ctx.r10.s64 * 296;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DBE824;
	sub_82D862B0(ctx, base);
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dbe774
	if (ctx.cr6.eq) goto loc_82DBE774;
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBE834:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82da45e8
	ctx.lr = 0x82DBE840;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbe8f8
	if (!ctx.cr6.eq) goto loc_82DBE8F8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82da76a0
	ctx.lr = 0x82DBE860;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbe4b8
	ctx.lr = 0x82DBE878;
	sub_82DBE4B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82da45e8
	ctx.lr = 0x82DBE890;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbe8a8
	if (!ctx.cr6.eq) goto loc_82DBE8A8;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBE8A8:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82da45e8
	ctx.lr = 0x82DBE8B8;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbe8d0
	if (!ctx.cr6.eq) goto loc_82DBE8D0;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBE8D0:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82da45e8
	ctx.lr = 0x82DBE8E0;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfd90
	if (!ctx.cr6.eq) goto loc_82DBFD90;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBE8F8:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBE908;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbe934
	if (!ctx.cr6.eq) goto loc_82DBE934;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x82da76a0
	ctx.lr = 0x82DBE928;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBE934:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBE944;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbea80
	if (!ctx.cr6.eq) goto loc_82DBEA80;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r6,12
	ctx.r6.s64 = 12;
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x82da76a0
	ctx.lr = 0x82DBE974;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r6,250
	ctx.r6.s64 = 250;
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// lbz r9,256(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 256);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r4,r10,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lbz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 260);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r4,r10,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lbz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 264);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r4,r10,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r11,280
	ctx.r10.s64 = ctx.r11.s64 * 280;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mulli r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 * 68;
	// bl 0x82d862b0
	ctx.lr = 0x82DBEA48;
	sub_82D862B0(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r3.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbe774
	if (ctx.cr6.eq) goto loc_82DBE774;
	// stw r24,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r24.u32);
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBEA80:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBEA90;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbec0c
	if (!ctx.cr6.eq) goto loc_82DBEC0C;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r6,12
	ctx.r6.s64 = 12;
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82DBEACC;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBEC0C:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBEC1C;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbf168
	if (!ctx.cr6.eq) goto loc_82DBF168;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,36
	ctx.r30.s64 = 36;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bge cr6,0x82dbec38
	if (!ctx.cr6.lt) goto loc_82DBEC38;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82DBEC38:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,444(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82da45e8
	ctx.lr = 0x82DBEC48;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbeeac
	if (!ctx.cr6.eq) goto loc_82DBEEAC;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,260
	ctx.r4.s64 = ctx.r11.s64 + 260;
	// bl 0x82da76a0
	ctx.lr = 0x82DBEC78;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lbz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 260);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 264);
	// lbz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 264);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,264(r11)
	PPC_STORE_U16(ctx.r11.u32 + 264, ctx.r10.u16);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,266(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 266);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,266(r11)
	PPC_STORE_U16(ctx.r11.u32 + 266, ctx.r10.u16);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// lbz r9,268(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 268);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// lbz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 272);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lbz r9,280(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 280);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// lbz r9,284(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 284);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// lbz r9,288(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 288);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 292);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r10.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r27.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r9,252(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,288(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,292(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r10,288(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBEEAC:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,444(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82da45e8
	ctx.lr = 0x82DBEEBC;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfd90
	if (!ctx.cr6.eq) goto loc_82DBFD90;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82da76a0
	ctx.lr = 0x82DBEEFC;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r10.u16);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lbz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lbz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r9,268(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lbz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lbz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lbz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lbz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBF168:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBF178;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbf2b4
	if (!ctx.cr6.eq) goto loc_82DBF2B4;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r6,12
	ctx.r6.s64 = 12;
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x82da76a0
	ctx.lr = 0x82DBF1B8;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 48);
	// lbz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r10.u16);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 50);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,50(r11)
	PPC_STORE_U16(ctx.r11.u32 + 50, ctx.r10.u16);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lbz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBF2B4:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBF2C4;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbf72c
	if (!ctx.cr6.eq) goto loc_82DBF72C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82da76a0
	ctx.lr = 0x82DBF2E4;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r10,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r9,r7,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ble cr6,0x82dbf350
	if (!ctx.cr6.gt) goto loc_82DBF350;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r4,r10,-8
	ctx.r4.s64 = ctx.r10.s64 + -8;
	// bl 0x82da7e70
	ctx.lr = 0x82DBF34C;
	sub_82DA7E70(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82DBF350:
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,256(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,19872(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bge cr6,0x82dbf59c
	if (!ctx.cr6.lt) goto loc_82DBF59C;
	// li r6,380
	ctx.r6.s64 = 380;
	// bl 0x82d862b0
	ctx.lr = 0x82DBF394;
	sub_82D862B0(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dbe774
	if (ctx.cr6.eq) goto loc_82DBE774;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r9,r8,68
	ctx.r9.s64 = ctx.r8.s64 * 68;
	// lwz r10,268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,64(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82da76a0
	ctx.lr = 0x82DBF430;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82DBF44C:
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r9,r7,68
	ctx.r9.s64 = ctx.r7.s64 * 68;
	// lwz r10,268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r9,r7,68
	ctx.r9.s64 = ctx.r7.s64 * 68;
	// lwz r10,268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r9,r7,68
	ctx.r9.s64 = ctx.r7.s64 * 68;
	// lwz r10,268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// sth r9,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r9.u16);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r9,r7,68
	ctx.r9.s64 = ctx.r7.s64 * 68;
	// lwz r10,268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// sth r9,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r9.u16);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r9,r7,68
	ctx.r9.s64 = ctx.r7.s64 * 68;
	// lwz r10,268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82dbf44c
	if (ctx.cr6.lt) goto loc_82DBF44C;
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBF59C:
	// li r6,411
	ctx.r6.s64 = 411;
	// bl 0x82d862b0
	ctx.lr = 0x82DBF5A4;
	sub_82D862B0(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r3.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dbe774
	if (ctx.cr6.eq) goto loc_82DBE774;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,276(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82da76a0
	ctx.lr = 0x82DBF610;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82DBF62C:
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// sth r9,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r9.u16);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// sth r9,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r9.u16);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 * 280;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwinm r5,r9,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// or r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82dbf62c
	if (ctx.cr6.lt) goto loc_82DBF62C;
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBF72C:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBF73C;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbf98c
	if (!ctx.cr6.eq) goto loc_82DBF98C;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,40
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 40, ctx.xer);
	// ble cr6,0x82dbf754
	if (!ctx.cr6.gt) goto loc_82DBF754;
	// li r6,40
	ctx.r6.s64 = 40;
loc_82DBF754:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// std r24,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// std r24,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r24.u64);
	// std r24,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r24.u64);
	// std r24,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r24.u64);
	// bl 0x82da76a0
	ctx.lr = 0x82DBF780;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// ble cr6,0x82dbf7ac
	if (!ctx.cr6.gt) goto loc_82DBF7AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x82da7e70
	ctx.lr = 0x82DBF7A4;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
loc_82DBF7AC:
	// lhz r11,206(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 206);
	// lhz r8,194(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 194);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lhz r7,204(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 204);
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lhz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 192);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rotlwi r4,r9,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rotlwi r3,r8,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r6,r6,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r5,r5,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rotlwi r30,r7,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// sth r9,194(r1)
	PPC_STORE_U16(ctx.r1.u32 + 194, ctx.r9.u16);
	// or r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 | ctx.r5.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// or r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 | ctx.r7.u64;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// sth r9,204(r1)
	PPC_STORE_U16(ctx.r1.u32 + 204, ctx.r9.u16);
	// bgt cr6,0x82dbf940
	if (ctx.cr6.gt) goto loc_82DBF940;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,-1968
	ctx.r12.s64 = ctx.r12.s64 + -1968;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DBF8B4;
	case 1:
		goto loc_82DBF940;
	case 2:
		goto loc_82DBF940;
	case 3:
		goto loc_82DBF940;
	case 4:
		goto loc_82DBF940;
	case 5:
		goto loc_82DBF940;
	case 6:
		goto loc_82DBF940;
	case 7:
		goto loc_82DBF940;
	case 8:
		goto loc_82DBF8CC;
	case 9:
		goto loc_82DBF940;
	case 10:
		goto loc_82DBF940;
	case 11:
		goto loc_82DBF940;
	case 12:
		goto loc_82DBF940;
	case 13:
		goto loc_82DBF940;
	case 14:
		goto loc_82DBF940;
	case 15:
		goto loc_82DBF940;
	case 16:
		goto loc_82DBF8E4;
	case 17:
		goto loc_82DBF940;
	case 18:
		goto loc_82DBF940;
	case 19:
		goto loc_82DBF940;
	case 20:
		goto loc_82DBF940;
	case 21:
		goto loc_82DBF940;
	case 22:
		goto loc_82DBF940;
	case 23:
		goto loc_82DBF940;
	case 24:
		goto loc_82DBF8FC;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-1868(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1868);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1844(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1844);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1820(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1820);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1728);
	// lwz r22,-1796(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1796);
loc_82DBF8B4:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82dbf93c
	goto loc_82DBF93C;
loc_82DBF8CC:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r27.u32);
	// b 0x82dbf940
	goto loc_82DBF940;
loc_82DBF8E4:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82dbf93c
	goto loc_82DBF93C;
loc_82DBF8FC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82dbf920
	if (!ctx.cr6.eq) goto loc_82DBF920;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82dbf93c
	goto loc_82DBF93C;
loc_82DBF920:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82dbf940
	if (!ctx.cr6.eq) goto loc_82DBF940;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,5
	ctx.r10.s64 = 5;
loc_82DBF93C:
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
loc_82DBF940:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// lhz r9,194(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 194);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r9.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r9.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// lhz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 204);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r9.u32);
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBF98C:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBF99C;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfb18
	if (!ctx.cr6.eq) goto loc_82DBFB18;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82dbfaf0
	if (ctx.cr6.eq) goto loc_82DBFAF0;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x82dbfaf0
	if (ctx.cr6.gt) goto loc_82DBFAF0;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,-1564
	ctx.r12.s64 = ctx.r12.s64 + -1564;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DBFA48;
	case 1:
		goto loc_82DBFA10;
	case 2:
		goto loc_82DBFA18;
	case 3:
		goto loc_82DBFA20;
	case 4:
		goto loc_82DBFA28;
	case 5:
		goto loc_82DBFA28;
	case 6:
		goto loc_82DBFA48;
	case 7:
		goto loc_82DBFA48;
	case 8:
		goto loc_82DBFA48;
	case 9:
		goto loc_82DBFA48;
	case 10:
		goto loc_82DBFA48;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-1464(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1464);
	// lwz r22,-1520(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1520);
	// lwz r22,-1512(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1512);
	// lwz r22,-1504(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1504);
	// lwz r22,-1496(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1496);
	// lwz r22,-1496(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1496);
	// lwz r22,-1464(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1464);
	// lwz r22,-1464(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1464);
	// lwz r22,-1464(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1464);
	// lwz r22,-1464(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1464);
	// lwz r22,-1464(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1464);
loc_82DBFA10:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82dbfa2c
	goto loc_82DBFA2C;
loc_82DBFA18:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82dbfa2c
	goto loc_82DBFA2C;
loc_82DBFA20:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82dbfa2c
	goto loc_82DBFA2C;
loc_82DBFA28:
	// li r10,32
	ctx.r10.s64 = 32;
loc_82DBFA2C:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicr r8,r8,3,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 3) & 0xFFFFFFFFFFFFFFFF;
	// tdllei r10,0
	// divdu r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 / ctx.r10.u64;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82dbfae0
	goto loc_82DBFAE0;
loc_82DBFA48:
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,-1440
	ctx.r12.s64 = ctx.r12.s64 + -1440;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-1316(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1316);
	// lwz r22,-1296(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1296);
	// lwz r22,-1296(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1296);
	// lwz r22,-1296(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1296);
	// lwz r22,-1296(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1296);
	// lwz r22,-1296(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1296);
	// lwz r22,-1396(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1396);
	// lwz r22,-1376(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1376);
	// lwz r22,-1344(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1344);
	// lwz r22,-1324(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1324);
	// lwz r22,-1324(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1324);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 * 14;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82dbfae0
	goto loc_82DBFAE0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,14563
	ctx.r8.s64 = 954400768;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// ori r8,r8,36409
	ctx.r8.u64 = ctx.r8.u64 | 36409;
	// mulhwu r10,r10,r8
	ctx.r10.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82dbfae0
	goto loc_82DBFAE0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82dbfae0
	goto loc_82DBFAE0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82dbfaec
	goto loc_82DBFAEC;
	// stw r24,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r24.u32);
loc_82DBFAE0:
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// twllei r9,0
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
loc_82DBFAEC:
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
loc_82DBFAF0:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x82da8018
	ctx.lr = 0x82DBFB0C;
	sub_82DA8018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBFB18:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFB28;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfc00
	if (!ctx.cr6.eq) goto loc_82DBFC00;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82dbfb88
	if (!ctx.cr6.lt) goto loc_82DBFB88;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBFB58;
	sub_82CB16F0(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82DBFB7C;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBFB88:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82dbfd90
	if (!ctx.cr6.lt) goto loc_82DBFD90;
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82DBFBB0;
	sub_82CB16F0(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82DBFBD4;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfde8
	if (!ctx.cr6.eq) goto loc_82DBFDE8;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r9,252(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82da4468
	ctx.lr = 0x82DBFBFC;
	sub_82DA4468(ctx, base);
	// b 0x82dbfd90
	goto loc_82DBFD90;
loc_82DBFC00:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFC10;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFC28;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFC40;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFC58;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFC70;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFC88;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFCA0;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFCB8;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFCD0;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFCE8;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFD00;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFD18;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFD30;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFD48;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFD60;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFD78;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfd90
	if (ctx.cr6.eq) goto loc_82DBFD90;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82da7e70
	ctx.lr = 0x82DBFD90;
	sub_82DA7E70(ctx, base);
loc_82DBFD90:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82dbfdd0
	if (ctx.cr6.eq) goto loc_82DBFDD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82DBFDD0:
	// lwz r9,452(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82dbfde4
	if (!ctx.cr6.lt) goto loc_82DBFDE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbe668
	if (!ctx.cr6.eq) goto loc_82DBE668;
loc_82DBFDE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DBFDE8:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBFDF0"))) PPC_WEAK_FUNC(sub_82DBFDF0);
PPC_FUNC_IMPL(__imp__sub_82DBFDF0) {
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
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x82da7e70
	ctx.lr = 0x82DBFE3C;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbff24
	if (!ctx.cr6.eq) goto loc_82DBFF24;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// bl 0x82da76a0
	ctx.lr = 0x82DBFE68;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbff24
	if (!ctx.cr6.eq) goto loc_82DBFF24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,7028
	ctx.r4.s64 = ctx.r11.s64 + 7028;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFE84;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbfe94
	if (ctx.cr6.eq) goto loc_82DBFE94;
loc_82DBFE8C:
	// li r3,25
	ctx.r3.s64 = 25;
	// b 0x82dbff24
	goto loc_82DBFF24;
loc_82DBFE94:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da76a0
	ctx.lr = 0x82DBFEAC;
	sub_82DA76A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbff24
	if (!ctx.cr6.eq) goto loc_82DBFF24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,7796
	ctx.r4.s64 = ctx.r11.s64 + 7796;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da45e8
	ctx.lr = 0x82DBFEC8;
	sub_82DA45E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfe8c
	if (!ctx.cr6.eq) goto loc_82DBFE8C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
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
	// or r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// bl 0x82dbe4b8
	ctx.lr = 0x82DBFF08;
	sub_82DBE4B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbff24
	if (!ctx.cr6.eq) goto loc_82DBFF24;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbfe8c
	if (!ctx.cr6.gt) goto loc_82DBFE8C;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82DBFF24:
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

__attribute__((alias("__imp__sub_82DBFF3C"))) PPC_WEAK_FUNC(sub_82DBFF3C);
PPC_FUNC_IMPL(__imp__sub_82DBFF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBFF40"))) PPC_WEAK_FUNC(sub_82DBFF40);
PPC_FUNC_IMPL(__imp__sub_82DBFF40) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82dc016c
	if (ctx.cr6.lt) goto loc_82DC016C;
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dbff78
	if (ctx.cr6.eq) goto loc_82DBFF78;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82dc016c
	if (!ctx.cr6.lt) goto loc_82DC016C;
loc_82DBFF78:
	// lwz r31,224(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc0170
	if (ctx.cr6.eq) goto loc_82DC0170;
	// lwz r11,256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82dbff9c
	if (ctx.cr6.eq) goto loc_82DBFF9C;
	// stw r4,256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 256, ctx.r4.u32);
loc_82DBFF9C:
	// lwz r9,256(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mulli r7,r9,296
	ctx.r7.s64 = ctx.r9.s64 * 296;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,256(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r6,260(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bgt cr6,0x82dc0154
	if (ctx.cr6.gt) goto loc_82DC0154;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,-44
	ctx.r12.s64 = ctx.r12.s64 + -44;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82DC0040;
	case 1:
		goto loc_82DC0000;
	case 2:
		goto loc_82DC0010;
	case 3:
		goto loc_82DC0020;
	case 4:
		goto loc_82DC0030;
	case 5:
		goto loc_82DC0030;
	case 6:
		goto loc_82DC0040;
	case 7:
		goto loc_82DC0040;
	case 8:
		goto loc_82DC0040;
	case 9:
		goto loc_82DC0040;
	case 10:
		goto loc_82DC0040;
	default:
		__builtin_unreachable();
	}
	// lwz r22,64(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r22,0(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r22,16(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r22,32(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r22,48(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r22,48(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r22,64(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r22,64(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r22,64(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r22,64(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r22,64(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
loc_82DC0000:
	// li r11,8
	ctx.r11.s64 = 8;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82dc0120
	goto loc_82DC0120;
loc_82DC0010:
	// li r11,16
	ctx.r11.s64 = 16;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82dc0120
	goto loc_82DC0120;
loc_82DC0020:
	// li r11,24
	ctx.r11.s64 = 24;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82dc0120
	goto loc_82DC0120;
loc_82DC0030:
	// li r11,32
	ctx.r11.s64 = 32;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82dc0120
	goto loc_82DC0120;
loc_82DC0040:
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,88
	ctx.r12.s64 = ctx.r12.s64 + 88;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,284(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 284);
	// lwz r22,340(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// lwz r22,340(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// lwz r22,340(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// lwz r22,340(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// lwz r22,340(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// lwz r22,132(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// lwz r22,196(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// lwz r22,220(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lwz r22,292(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// lwz r22,292(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// lis r11,9362
	ctx.r11.s64 = 613548032;
	// addi r10,r10,13
	ctx.r10.s64 = ctx.r10.s64 + 13;
	// ori r11,r11,18725
	ctx.r11.u64 = ctx.r11.u64 | 18725;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mulhwu r11,r10,r11
	ctx.r11.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// mulhwu r10,r11,r9
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82dc0120
	goto loc_82DC0120;
	// addi r11,r10,63
	ctx.r11.s64 = ctx.r10.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,6,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFFC;
	// b 0x82dc0120
	goto loc_82DC0120;
	// lis r11,9362
	ctx.r11.s64 = 613548032;
	// addi r10,r10,27
	ctx.r10.s64 = ctx.r10.s64 + 27;
	// ori r11,r11,18725
	ctx.r11.u64 = ctx.r11.u64 | 18725;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mulhwu r11,r10,r11
	ctx.r11.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// mulhwu r10,r11,r9
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x82dc0120
	goto loc_82DC0120;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DC0120:
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// lwz r11,252(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 252);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82da7e70
	ctx.lr = 0x82DC0140;
	sub_82DA7E70(ctx, base);
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
loc_82DC0154:
	// li r3,25
	ctx.r3.s64 = 25;
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
loc_82DC016C:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82DC0170:
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

__attribute__((alias("__imp__sub_82DC0184"))) PPC_WEAK_FUNC(sub_82DC0184);
PPC_FUNC_IMPL(__imp__sub_82DC0184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0188"))) PPC_WEAK_FUNC(sub_82DC0188);
PPC_FUNC_IMPL(__imp__sub_82DC0188) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dc0198
	if (!ctx.cr6.eq) goto loc_82DC0198;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DC0198:
	// b 0x82dbfdf0
	sub_82DBFDF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC019C"))) PPC_WEAK_FUNC(sub_82DC019C);
PPC_FUNC_IMPL(__imp__sub_82DC019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC01A0"))) PPC_WEAK_FUNC(sub_82DC01A0);
PPC_FUNC_IMPL(__imp__sub_82DC01A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dc01b0
	if (!ctx.cr6.eq) goto loc_82DC01B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DC01B0:
	// b 0x82dbff40
	sub_82DBFF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC01B4"))) PPC_WEAK_FUNC(sub_82DC01B4);
PPC_FUNC_IMPL(__imp__sub_82DC01B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC01B8"))) PPC_WEAK_FUNC(sub_82DC01B8);
PPC_FUNC_IMPL(__imp__sub_82DC01B8) {
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
	// li r5,92
	ctx.r5.s64 = 92;
	// addi r31,r11,28976
	ctx.r31.s64 = ctx.r11.s64 + 28976;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DC01E0;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32036
	ctx.r7.s64 = -2099511296;
	// addi r11,r11,7804
	ctx.r11.s64 = ctx.r11.s64 + 7804;
	// lis r8,-32036
	ctx.r8.s64 = -2099511296;
	// lis r9,-32036
	ctx.r9.s64 = -2099511296;
	// lis r10,-32036
	ctx.r10.s64 = -2099511296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r7,392
	ctx.r11.s64 = ctx.r7.s64 + 392;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r11,r8,-7032
	ctx.r11.s64 = ctx.r8.s64 + -7032;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r11,r9,-7008
	ctx.r11.s64 = ctx.r9.s64 + -7008;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r11,r10,416
	ctx.r11.s64 = ctx.r10.s64 + 416;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,264
	ctx.r11.s64 = 264;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DC0258"))) PPC_WEAK_FUNC(sub_82DC0258);
PPC_FUNC_IMPL(__imp__sub_82DC0258) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// beq cr6,0x82dc027c
	if (ctx.cr6.eq) goto loc_82DC027C;
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// blr 
	return;
loc_82DC027C:
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC0288"))) PPC_WEAK_FUNC(sub_82DC0288);
PPC_FUNC_IMPL(__imp__sub_82DC0288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82DC0290;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x82dc0ae0
	if (!ctx.cr6.gt) goto loc_82DC0AE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,8820
	ctx.r30.s64 = ctx.r11.s64 + 8820;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r18,r11,8808
	ctx.r18.s64 = ctx.r11.s64 + 8808;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r17,r11,8796
	ctx.r17.s64 = ctx.r11.s64 + 8796;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r16,r11,8772
	ctx.r16.s64 = ctx.r11.s64 + 8772;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r15,r11,8752
	ctx.r15.s64 = ctx.r11.s64 + 8752;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r14,r11,8732
	ctx.r14.s64 = ctx.r11.s64 + 8732;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8712
	ctx.r11.s64 = ctx.r11.s64 + 8712;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8692
	ctx.r11.s64 = ctx.r11.s64 + 8692;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8668
	ctx.r11.s64 = ctx.r11.s64 + 8668;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8648
	ctx.r11.s64 = ctx.r11.s64 + 8648;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8628
	ctx.r11.s64 = ctx.r11.s64 + 8628;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8608
	ctx.r11.s64 = ctx.r11.s64 + 8608;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8588
	ctx.r11.s64 = ctx.r11.s64 + 8588;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8568
	ctx.r11.s64 = ctx.r11.s64 + 8568;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8548
	ctx.r11.s64 = ctx.r11.s64 + 8548;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8540
	ctx.r11.s64 = ctx.r11.s64 + 8540;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8528
	ctx.r11.s64 = ctx.r11.s64 + 8528;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8512
	ctx.r11.s64 = ctx.r11.s64 + 8512;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8496
	ctx.r11.s64 = ctx.r11.s64 + 8496;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,8484
	ctx.r11.s64 = ctx.r11.s64 + 8484;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,8472
	ctx.r29.s64 = ctx.r11.s64 + 8472;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,8460
	ctx.r28.s64 = ctx.r11.s64 + 8460;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r11,8452
	ctx.r27.s64 = ctx.r11.s64 + 8452;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,8444
	ctx.r26.s64 = ctx.r11.s64 + 8444;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r11,8428
	ctx.r25.s64 = ctx.r11.s64 + 8428;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r11,8420
	ctx.r24.s64 = ctx.r11.s64 + 8420;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r23,r11,8412
	ctx.r23.s64 = ctx.r11.s64 + 8412;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r22,r11,8396
	ctx.r22.s64 = ctx.r11.s64 + 8396;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r21,r11,8376
	ctx.r21.s64 = ctx.r11.s64 + 8376;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r20,r11,8368
	ctx.r20.s64 = ctx.r11.s64 + 8368;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r19,r11,8356
	ctx.r19.s64 = ctx.r11.s64 + 8356;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r11,8352
	ctx.r31.s64 = ctx.r11.s64 + 8352;
	// b 0x82dc03f4
	goto loc_82DC03F4;
loc_82DC03F0:
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
loc_82DC03F4:
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,139
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 139, ctx.xer);
	// bgt cr6,0x82dc06b4
	if (ctx.cr6.gt) goto loc_82DC06B4;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,1072
	ctx.r12.s64 = ctx.r12.s64 + 1072;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DC0660;
	case 1:
		goto loc_82DC0668;
	case 2:
		goto loc_82DC0670;
	case 3:
		goto loc_82DC0678;
	case 4:
		goto loc_82DC0680;
	case 5:
		goto loc_82DC0688;
	case 6:
		goto loc_82DC0690;
	case 7:
		goto loc_82DC06B4;
	case 8:
		goto loc_82DC06B4;
	case 9:
		goto loc_82DC06B4;
	case 10:
		goto loc_82DC06B4;
	case 11:
		goto loc_82DC06B4;
	case 12:
		goto loc_82DC06B4;
	case 13:
		goto loc_82DC06B4;
	case 14:
		goto loc_82DC06B4;
	case 15:
		goto loc_82DC06B4;
	case 16:
		goto loc_82DC06B4;
	case 17:
		goto loc_82DC06B4;
	case 18:
		goto loc_82DC06B4;
	case 19:
		goto loc_82DC06B4;
	case 20:
		goto loc_82DC06B4;
	case 21:
		goto loc_82DC06B4;
	case 22:
		goto loc_82DC06B4;
	case 23:
		goto loc_82DC06B4;
	case 24:
		goto loc_82DC06B4;
	case 25:
		goto loc_82DC06B4;
	case 26:
		goto loc_82DC06B4;
	case 27:
		goto loc_82DC06B4;
	case 28:
		goto loc_82DC06B4;
	case 29:
		goto loc_82DC06B4;
	case 30:
		goto loc_82DC06B4;
	case 31:
		goto loc_82DC06B4;
	case 32:
		goto loc_82DC06B4;
	case 33:
		goto loc_82DC06B4;
	case 34:
		goto loc_82DC06B4;
	case 35:
		goto loc_82DC06B4;
	case 36:
		goto loc_82DC06B4;
	case 37:
		goto loc_82DC06B4;
	case 38:
		goto loc_82DC06B4;
	case 39:
		goto loc_82DC06B4;
	case 40:
		goto loc_82DC06B4;
	case 41:
		goto loc_82DC06B4;
	case 42:
		goto loc_82DC06B4;
	case 43:
		goto loc_82DC06B4;
	case 44:
		goto loc_82DC06B4;
	case 45:
		goto loc_82DC06B4;
	case 46:
		goto loc_82DC06B4;
	case 47:
		goto loc_82DC06B4;
	case 48:
		goto loc_82DC06B4;
	case 49:
		goto loc_82DC06B4;
	case 50:
		goto loc_82DC06B4;
	case 51:
		goto loc_82DC06B4;
	case 52:
		goto loc_82DC06B4;
	case 53:
		goto loc_82DC06B4;
	case 54:
		goto loc_82DC06B4;
	case 55:
		goto loc_82DC06B4;
	case 56:
		goto loc_82DC06B4;
	case 57:
		goto loc_82DC06B4;
	case 58:
		goto loc_82DC06B4;
	case 59:
		goto loc_82DC06B4;
	case 60:
		goto loc_82DC06B4;
	case 61:
		goto loc_82DC06B4;
	case 62:
		goto loc_82DC06B4;
	case 63:
		goto loc_82DC06B4;
	case 64:
		goto loc_82DC06B4;
	case 65:
		goto loc_82DC06B4;
	case 66:
		goto loc_82DC06B4;
	case 67:
		goto loc_82DC06B4;
	case 68:
		goto loc_82DC06B4;
	case 69:
		goto loc_82DC06B4;
	case 70:
		goto loc_82DC06B4;
	case 71:
		goto loc_82DC06B4;
	case 72:
		goto loc_82DC06B4;
	case 73:
		goto loc_82DC06B4;
	case 74:
		goto loc_82DC06B4;
	case 75:
		goto loc_82DC06B4;
	case 76:
		goto loc_82DC06B4;
	case 77:
		goto loc_82DC06B4;
	case 78:
		goto loc_82DC06B4;
	case 79:
		goto loc_82DC06B4;
	case 80:
		goto loc_82DC06B4;
	case 81:
		goto loc_82DC06B4;
	case 82:
		goto loc_82DC06B4;
	case 83:
		goto loc_82DC06B4;
	case 84:
		goto loc_82DC06B4;
	case 85:
		goto loc_82DC06B4;
	case 86:
		goto loc_82DC06B4;
	case 87:
		goto loc_82DC06B4;
	case 88:
		goto loc_82DC06B4;
	case 89:
		goto loc_82DC06B4;
	case 90:
		goto loc_82DC06B4;
	case 91:
		goto loc_82DC06B4;
	case 92:
		goto loc_82DC06B4;
	case 93:
		goto loc_82DC06B4;
	case 94:
		goto loc_82DC06B4;
	case 95:
		goto loc_82DC06B4;
	case 96:
		goto loc_82DC06B4;
	case 97:
		goto loc_82DC06B4;
	case 98:
		goto loc_82DC06B4;
	case 99:
		goto loc_82DC06B4;
	case 100:
		goto loc_82DC06B4;
	case 101:
		goto loc_82DC06B4;
	case 102:
		goto loc_82DC06B4;
	case 103:
		goto loc_82DC06B4;
	case 104:
		goto loc_82DC06B4;
	case 105:
		goto loc_82DC06B4;
	case 106:
		goto loc_82DC06B4;
	case 107:
		goto loc_82DC06B4;
	case 108:
		goto loc_82DC06B4;
	case 109:
		goto loc_82DC06B4;
	case 110:
		goto loc_82DC06B4;
	case 111:
		goto loc_82DC06B4;
	case 112:
		goto loc_82DC06B4;
	case 113:
		goto loc_82DC06B4;
	case 114:
		goto loc_82DC06B4;
	case 115:
		goto loc_82DC06B4;
	case 116:
		goto loc_82DC06B4;
	case 117:
		goto loc_82DC06B4;
	case 118:
		goto loc_82DC06B4;
	case 119:
		goto loc_82DC06B4;
	case 120:
		goto loc_82DC06B4;
	case 121:
		goto loc_82DC06B4;
	case 122:
		goto loc_82DC06B4;
	case 123:
		goto loc_82DC06B4;
	case 124:
		goto loc_82DC06B4;
	case 125:
		goto loc_82DC06B4;
	case 126:
		goto loc_82DC06B4;
	case 127:
		goto loc_82DC06B4;
	case 128:
		goto loc_82DC06B4;
	case 129:
		goto loc_82DC0698;
	case 130:
		goto loc_82DC06B4;
	case 131:
		goto loc_82DC06B4;
	case 132:
		goto loc_82DC06B4;
	case 133:
		goto loc_82DC06B4;
	case 134:
		goto loc_82DC06B4;
	case 135:
		goto loc_82DC06A0;
	case 136:
		goto loc_82DC06B4;
	case 137:
		goto loc_82DC06B4;
	case 138:
		goto loc_82DC06A8;
	case 139:
		goto loc_82DC06B0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,1632(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1632);
	// lwz r22,1640(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1640);
	// lwz r22,1648(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1648);
	// lwz r22,1656(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1656);
	// lwz r22,1664(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1664);
	// lwz r22,1672(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1672);
	// lwz r22,1680(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1680);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1688(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1688);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1696(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1696);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1716(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// lwz r22,1704(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1704);
	// lwz r22,1712(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1712);
loc_82DC0660:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// b 0x82dc06b4
	goto loc_82DC06B4;
loc_82DC0668:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// b 0x82dc06b4
	goto loc_82DC06B4;
loc_82DC0670:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// b 0x82dc06b4
	goto loc_82DC06B4;
loc_82DC0678:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// b 0x82dc06b4
	goto loc_82DC06B4;
loc_82DC0680:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// b 0x82dc06b4
	goto loc_82DC06B4;
loc_82DC0688:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82dc06b4
	goto loc_82DC06B4;
loc_82DC0690:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x82dc06b4
	goto loc_82DC06B4;
loc_82DC0698:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// b 0x82dc06b4
	goto loc_82DC06B4;
loc_82DC06A0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x82dc06b4
	goto loc_82DC06B4;
loc_82DC06A8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x82dc06b4
	goto loc_82DC06B4;
loc_82DC06B0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82DC06B4:
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r11,139
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 139, ctx.xer);
	// bgt cr6,0x82dc095c
	if (ctx.cr6.gt) goto loc_82DC095C;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,1752
	ctx.r12.s64 = ctx.r12.s64 + 1752;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DC0908;
	case 1:
		goto loc_82DC0910;
	case 2:
		goto loc_82DC0918;
	case 3:
		goto loc_82DC0920;
	case 4:
		goto loc_82DC0928;
	case 5:
		goto loc_82DC0930;
	case 6:
		goto loc_82DC0938;
	case 7:
		goto loc_82DC095C;
	case 8:
		goto loc_82DC095C;
	case 9:
		goto loc_82DC095C;
	case 10:
		goto loc_82DC095C;
	case 11:
		goto loc_82DC095C;
	case 12:
		goto loc_82DC095C;
	case 13:
		goto loc_82DC095C;
	case 14:
		goto loc_82DC095C;
	case 15:
		goto loc_82DC095C;
	case 16:
		goto loc_82DC095C;
	case 17:
		goto loc_82DC095C;
	case 18:
		goto loc_82DC095C;
	case 19:
		goto loc_82DC095C;
	case 20:
		goto loc_82DC095C;
	case 21:
		goto loc_82DC095C;
	case 22:
		goto loc_82DC095C;
	case 23:
		goto loc_82DC095C;
	case 24:
		goto loc_82DC095C;
	case 25:
		goto loc_82DC095C;
	case 26:
		goto loc_82DC095C;
	case 27:
		goto loc_82DC095C;
	case 28:
		goto loc_82DC095C;
	case 29:
		goto loc_82DC095C;
	case 30:
		goto loc_82DC095C;
	case 31:
		goto loc_82DC095C;
	case 32:
		goto loc_82DC095C;
	case 33:
		goto loc_82DC095C;
	case 34:
		goto loc_82DC095C;
	case 35:
		goto loc_82DC095C;
	case 36:
		goto loc_82DC095C;
	case 37:
		goto loc_82DC095C;
	case 38:
		goto loc_82DC095C;
	case 39:
		goto loc_82DC095C;
	case 40:
		goto loc_82DC095C;
	case 41:
		goto loc_82DC095C;
	case 42:
		goto loc_82DC095C;
	case 43:
		goto loc_82DC095C;
	case 44:
		goto loc_82DC095C;
	case 45:
		goto loc_82DC095C;
	case 46:
		goto loc_82DC095C;
	case 47:
		goto loc_82DC095C;
	case 48:
		goto loc_82DC095C;
	case 49:
		goto loc_82DC095C;
	case 50:
		goto loc_82DC095C;
	case 51:
		goto loc_82DC095C;
	case 52:
		goto loc_82DC095C;
	case 53:
		goto loc_82DC095C;
	case 54:
		goto loc_82DC095C;
	case 55:
		goto loc_82DC095C;
	case 56:
		goto loc_82DC095C;
	case 57:
		goto loc_82DC095C;
	case 58:
		goto loc_82DC095C;
	case 59:
		goto loc_82DC095C;
	case 60:
		goto loc_82DC095C;
	case 61:
		goto loc_82DC095C;
	case 62:
		goto loc_82DC095C;
	case 63:
		goto loc_82DC095C;
	case 64:
		goto loc_82DC095C;
	case 65:
		goto loc_82DC095C;
	case 66:
		goto loc_82DC095C;
	case 67:
		goto loc_82DC095C;
	case 68:
		goto loc_82DC095C;
	case 69:
		goto loc_82DC095C;
	case 70:
		goto loc_82DC095C;
	case 71:
		goto loc_82DC095C;
	case 72:
		goto loc_82DC095C;
	case 73:
		goto loc_82DC095C;
	case 74:
		goto loc_82DC095C;
	case 75:
		goto loc_82DC095C;
	case 76:
		goto loc_82DC095C;
	case 77:
		goto loc_82DC095C;
	case 78:
		goto loc_82DC095C;
	case 79:
		goto loc_82DC095C;
	case 80:
		goto loc_82DC095C;
	case 81:
		goto loc_82DC095C;
	case 82:
		goto loc_82DC095C;
	case 83:
		goto loc_82DC095C;
	case 84:
		goto loc_82DC095C;
	case 85:
		goto loc_82DC095C;
	case 86:
		goto loc_82DC095C;
	case 87:
		goto loc_82DC095C;
	case 88:
		goto loc_82DC095C;
	case 89:
		goto loc_82DC095C;
	case 90:
		goto loc_82DC095C;
	case 91:
		goto loc_82DC095C;
	case 92:
		goto loc_82DC095C;
	case 93:
		goto loc_82DC095C;
	case 94:
		goto loc_82DC095C;
	case 95:
		goto loc_82DC095C;
	case 96:
		goto loc_82DC095C;
	case 97:
		goto loc_82DC095C;
	case 98:
		goto loc_82DC095C;
	case 99:
		goto loc_82DC095C;
	case 100:
		goto loc_82DC095C;
	case 101:
		goto loc_82DC095C;
	case 102:
		goto loc_82DC095C;
	case 103:
		goto loc_82DC095C;
	case 104:
		goto loc_82DC095C;
	case 105:
		goto loc_82DC095C;
	case 106:
		goto loc_82DC095C;
	case 107:
		goto loc_82DC095C;
	case 108:
		goto loc_82DC095C;
	case 109:
		goto loc_82DC095C;
	case 110:
		goto loc_82DC095C;
	case 111:
		goto loc_82DC095C;
	case 112:
		goto loc_82DC095C;
	case 113:
		goto loc_82DC095C;
	case 114:
		goto loc_82DC095C;
	case 115:
		goto loc_82DC095C;
	case 116:
		goto loc_82DC095C;
	case 117:
		goto loc_82DC095C;
	case 118:
		goto loc_82DC095C;
	case 119:
		goto loc_82DC095C;
	case 120:
		goto loc_82DC095C;
	case 121:
		goto loc_82DC095C;
	case 122:
		goto loc_82DC095C;
	case 123:
		goto loc_82DC095C;
	case 124:
		goto loc_82DC095C;
	case 125:
		goto loc_82DC095C;
	case 126:
		goto loc_82DC095C;
	case 127:
		goto loc_82DC095C;
	case 128:
		goto loc_82DC095C;
	case 129:
		goto loc_82DC0940;
	case 130:
		goto loc_82DC095C;
	case 131:
		goto loc_82DC095C;
	case 132:
		goto loc_82DC095C;
	case 133:
		goto loc_82DC095C;
	case 134:
		goto loc_82DC095C;
	case 135:
		goto loc_82DC0948;
	case 136:
		goto loc_82DC095C;
	case 137:
		goto loc_82DC095C;
	case 138:
		goto loc_82DC0950;
	case 139:
		goto loc_82DC0958;
	default:
		__builtin_unreachable();
	}
	// lwz r22,2312(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2312);
	// lwz r22,2320(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2320);
	// lwz r22,2328(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2328);
	// lwz r22,2336(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2336);
	// lwz r22,2344(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2344);
	// lwz r22,2352(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2352);
	// lwz r22,2360(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2360);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2368(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2368);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2376(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2376);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2396(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2396);
	// lwz r22,2384(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2384);
	// lwz r22,2392(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2392);
loc_82DC0908:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// b 0x82dc095c
	goto loc_82DC095C;
loc_82DC0910:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// b 0x82dc095c
	goto loc_82DC095C;
loc_82DC0918:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// b 0x82dc095c
	goto loc_82DC095C;
loc_82DC0920:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// b 0x82dc095c
	goto loc_82DC095C;
loc_82DC0928:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// b 0x82dc095c
	goto loc_82DC095C;
loc_82DC0930:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// b 0x82dc095c
	goto loc_82DC095C;
loc_82DC0938:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// b 0x82dc095c
	goto loc_82DC095C;
loc_82DC0940:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// b 0x82dc095c
	goto loc_82DC095C;
loc_82DC0948:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// b 0x82dc095c
	goto loc_82DC095C;
loc_82DC0950:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x82dc095c
	goto loc_82DC095C;
loc_82DC0958:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82DC095C:
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,260
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 260, ctx.xer);
	// bgt cr6,0x82dc09d0
	if (ctx.cr6.gt) goto loc_82DC09D0;
	// beq cr6,0x82dc09c8
	if (ctx.cr6.eq) goto loc_82DC09C8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82dc0a94
	if (ctx.cr6.gt) goto loc_82DC0A94;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,2444
	ctx.r12.s64 = ctx.r12.s64 + 2444;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DC09A0;
	case 1:
		goto loc_82DC09A8;
	case 2:
		goto loc_82DC09B0;
	case 3:
		goto loc_82DC09B8;
	case 4:
		goto loc_82DC09C0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,2464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2464);
	// lwz r22,2472(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2472);
	// lwz r22,2480(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2480);
	// lwz r22,2488(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2488);
	// lwz r22,2496(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2496);
loc_82DC09A0:
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC09A8:
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC09B0:
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC09B8:
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC09C0:
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC09C8:
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC09D0:
	// cmpwi cr6,r11,522
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 522, ctx.xer);
	// bgt cr6,0x82dc0a38
	if (ctx.cr6.gt) goto loc_82DC0A38;
	// beq cr6,0x82dc0a30
	if (ctx.cr6.eq) goto loc_82DC0A30;
	// cmpwi cr6,r11,519
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 519, ctx.xer);
	// bgt cr6,0x82dc0a10
	if (ctx.cr6.gt) goto loc_82DC0A10;
	// beq cr6,0x82dc0a08
	if (ctx.cr6.eq) goto loc_82DC0A08;
	// cmpwi cr6,r11,261
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 261, ctx.xer);
	// beq cr6,0x82dc0a00
	if (ctx.cr6.eq) goto loc_82DC0A00;
	// cmpwi cr6,r11,518
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 518, ctx.xer);
	// bne cr6,0x82dc0a94
	if (!ctx.cr6.eq) goto loc_82DC0A94;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC0A00:
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC0A08:
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC0A10:
	// cmpwi cr6,r11,520
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 520, ctx.xer);
	// beq cr6,0x82dc0a28
	if (ctx.cr6.eq) goto loc_82DC0A28;
	// cmpwi cr6,r11,521
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 521, ctx.xer);
	// bne cr6,0x82dc0a94
	if (!ctx.cr6.eq) goto loc_82DC0A94;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC0A28:
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC0A30:
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC0A38:
	// addi r11,r11,-778
	ctx.r11.s64 = ctx.r11.s64 + -778;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82dc0a94
	if (ctx.cr6.gt) goto loc_82DC0A94;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,2652
	ctx.r12.s64 = ctx.r12.s64 + 2652;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DC0A70;
	case 1:
		goto loc_82DC0A78;
	case 2:
		goto loc_82DC0A80;
	case 3:
		goto loc_82DC0A88;
	case 4:
		goto loc_82DC0A90;
	default:
		__builtin_unreachable();
	}
	// lwz r22,2672(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2672);
	// lwz r22,2680(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2680);
	// lwz r22,2688(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2688);
	// lwz r22,2696(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2696);
	// lwz r22,2704(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2704);
loc_82DC0A70:
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC0A78:
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC0A80:
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC0A88:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// b 0x82dc0a94
	goto loc_82DC0A94;
loc_82DC0A90:
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
loc_82DC0A94:
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82dc0aa8
	if (ctx.cr6.eq) goto loc_82DC0AA8;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
loc_82DC0AA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ccb660
	ctx.lr = 0x82DC0AB8;
	sub_82CCB660(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lwz r10,604(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 604);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// blt cr6,0x82dc03f0
	if (ctx.cr6.lt) goto loc_82DC03F0;
loc_82DC0AE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC0AEC"))) PPC_WEAK_FUNC(sub_82DC0AEC);
PPC_FUNC_IMPL(__imp__sub_82DC0AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0AF0"))) PPC_WEAK_FUNC(sub_82DC0AF0);
PPC_FUNC_IMPL(__imp__sub_82DC0AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,604(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82dc0b2c
	if (!ctx.cr6.gt) goto loc_82DC0B2C;
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
loc_82DC0B04:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82dc0b1c
	if (!ctx.cr6.eq) goto loc_82DC0B1C;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82dc0b34
	if (ctx.cr6.eq) goto loc_82DC0B34;
loc_82DC0B1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dc0b04
	if (ctx.cr6.lt) goto loc_82DC0B04;
loc_82DC0B2C:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82DC0B34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC0B3C"))) PPC_WEAK_FUNC(sub_82DC0B3C);
PPC_FUNC_IMPL(__imp__sub_82DC0B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0B40"))) PPC_WEAK_FUNC(sub_82DC0B40);
PPC_FUNC_IMPL(__imp__sub_82DC0B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r11,604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dc11d0
	if (!ctx.cr6.gt) goto loc_82DC11D0;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lfs f13,-17360(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17360);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
loc_82DC0B70:
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82dc11bc
	if (!ctx.cr6.eq) goto loc_82DC11BC;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,139
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 139, ctx.xer);
	// bgt cr6,0x82dc0e8c
	if (ctx.cr6.gt) goto loc_82DC0E8C;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,2992
	ctx.r12.s64 = ctx.r12.s64 + 2992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DC0DE0;
	case 1:
		goto loc_82DC0DF4;
	case 2:
		goto loc_82DC0DFC;
	case 3:
		goto loc_82DC0E20;
	case 4:
		goto loc_82DC0E44;
	case 5:
		goto loc_82DC0E4C;
	case 6:
		goto loc_82DC0E60;
	case 7:
		goto loc_82DC0E8C;
	case 8:
		goto loc_82DC0E8C;
	case 9:
		goto loc_82DC0E8C;
	case 10:
		goto loc_82DC0E8C;
	case 11:
		goto loc_82DC0E8C;
	case 12:
		goto loc_82DC0E8C;
	case 13:
		goto loc_82DC0E8C;
	case 14:
		goto loc_82DC0E8C;
	case 15:
		goto loc_82DC0E8C;
	case 16:
		goto loc_82DC0E8C;
	case 17:
		goto loc_82DC0E8C;
	case 18:
		goto loc_82DC0E8C;
	case 19:
		goto loc_82DC0E8C;
	case 20:
		goto loc_82DC0E8C;
	case 21:
		goto loc_82DC0E8C;
	case 22:
		goto loc_82DC0E8C;
	case 23:
		goto loc_82DC0E8C;
	case 24:
		goto loc_82DC0E8C;
	case 25:
		goto loc_82DC0E8C;
	case 26:
		goto loc_82DC0E8C;
	case 27:
		goto loc_82DC0E8C;
	case 28:
		goto loc_82DC0E8C;
	case 29:
		goto loc_82DC0E8C;
	case 30:
		goto loc_82DC0E8C;
	case 31:
		goto loc_82DC0E8C;
	case 32:
		goto loc_82DC0E8C;
	case 33:
		goto loc_82DC0E8C;
	case 34:
		goto loc_82DC0E8C;
	case 35:
		goto loc_82DC0E8C;
	case 36:
		goto loc_82DC0E8C;
	case 37:
		goto loc_82DC0E8C;
	case 38:
		goto loc_82DC0E8C;
	case 39:
		goto loc_82DC0E8C;
	case 40:
		goto loc_82DC0E8C;
	case 41:
		goto loc_82DC0E8C;
	case 42:
		goto loc_82DC0E8C;
	case 43:
		goto loc_82DC0E8C;
	case 44:
		goto loc_82DC0E8C;
	case 45:
		goto loc_82DC0E8C;
	case 46:
		goto loc_82DC0E8C;
	case 47:
		goto loc_82DC0E8C;
	case 48:
		goto loc_82DC0E8C;
	case 49:
		goto loc_82DC0E8C;
	case 50:
		goto loc_82DC0E8C;
	case 51:
		goto loc_82DC0E8C;
	case 52:
		goto loc_82DC0E8C;
	case 53:
		goto loc_82DC0E8C;
	case 54:
		goto loc_82DC0E8C;
	case 55:
		goto loc_82DC0E8C;
	case 56:
		goto loc_82DC0E8C;
	case 57:
		goto loc_82DC0E8C;
	case 58:
		goto loc_82DC0E8C;
	case 59:
		goto loc_82DC0E8C;
	case 60:
		goto loc_82DC0E8C;
	case 61:
		goto loc_82DC0E8C;
	case 62:
		goto loc_82DC0E8C;
	case 63:
		goto loc_82DC0E8C;
	case 64:
		goto loc_82DC0E8C;
	case 65:
		goto loc_82DC0E8C;
	case 66:
		goto loc_82DC0E8C;
	case 67:
		goto loc_82DC0E8C;
	case 68:
		goto loc_82DC0E8C;
	case 69:
		goto loc_82DC0E8C;
	case 70:
		goto loc_82DC0E8C;
	case 71:
		goto loc_82DC0E8C;
	case 72:
		goto loc_82DC0E8C;
	case 73:
		goto loc_82DC0E8C;
	case 74:
		goto loc_82DC0E8C;
	case 75:
		goto loc_82DC0E8C;
	case 76:
		goto loc_82DC0E8C;
	case 77:
		goto loc_82DC0E8C;
	case 78:
		goto loc_82DC0E8C;
	case 79:
		goto loc_82DC0E8C;
	case 80:
		goto loc_82DC0E8C;
	case 81:
		goto loc_82DC0E8C;
	case 82:
		goto loc_82DC0E8C;
	case 83:
		goto loc_82DC0E8C;
	case 84:
		goto loc_82DC0E8C;
	case 85:
		goto loc_82DC0E8C;
	case 86:
		goto loc_82DC0E8C;
	case 87:
		goto loc_82DC0E8C;
	case 88:
		goto loc_82DC0E8C;
	case 89:
		goto loc_82DC0E8C;
	case 90:
		goto loc_82DC0E8C;
	case 91:
		goto loc_82DC0E8C;
	case 92:
		goto loc_82DC0E8C;
	case 93:
		goto loc_82DC0E8C;
	case 94:
		goto loc_82DC0E8C;
	case 95:
		goto loc_82DC0E8C;
	case 96:
		goto loc_82DC0E8C;
	case 97:
		goto loc_82DC0E8C;
	case 98:
		goto loc_82DC0E8C;
	case 99:
		goto loc_82DC0E8C;
	case 100:
		goto loc_82DC0E8C;
	case 101:
		goto loc_82DC0E8C;
	case 102:
		goto loc_82DC0E8C;
	case 103:
		goto loc_82DC0E8C;
	case 104:
		goto loc_82DC0E8C;
	case 105:
		goto loc_82DC0E8C;
	case 106:
		goto loc_82DC0E8C;
	case 107:
		goto loc_82DC0E8C;
	case 108:
		goto loc_82DC0E8C;
	case 109:
		goto loc_82DC0E8C;
	case 110:
		goto loc_82DC0E8C;
	case 111:
		goto loc_82DC0E8C;
	case 112:
		goto loc_82DC0E8C;
	case 113:
		goto loc_82DC0E8C;
	case 114:
		goto loc_82DC0E8C;
	case 115:
		goto loc_82DC0E8C;
	case 116:
		goto loc_82DC0E8C;
	case 117:
		goto loc_82DC0E8C;
	case 118:
		goto loc_82DC0E8C;
	case 119:
		goto loc_82DC0E8C;
	case 120:
		goto loc_82DC0E8C;
	case 121:
		goto loc_82DC0E8C;
	case 122:
		goto loc_82DC0E8C;
	case 123:
		goto loc_82DC0E8C;
	case 124:
		goto loc_82DC0E8C;
	case 125:
		goto loc_82DC0E8C;
	case 126:
		goto loc_82DC0E8C;
	case 127:
		goto loc_82DC0E8C;
	case 128:
		goto loc_82DC0E8C;
	case 129:
		goto loc_82DC0E68;
	case 130:
		goto loc_82DC0E8C;
	case 131:
		goto loc_82DC0E8C;
	case 132:
		goto loc_82DC0E8C;
	case 133:
		goto loc_82DC0E8C;
	case 134:
		goto loc_82DC0E8C;
	case 135:
		goto loc_82DC0E70;
	case 136:
		goto loc_82DC0E8C;
	case 137:
		goto loc_82DC0E8C;
	case 138:
		goto loc_82DC0E78;
	case 139:
		goto loc_82DC0E80;
	default:
		__builtin_unreachable();
	}
	// lwz r22,3552(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3552);
	// lwz r22,3572(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3572);
	// lwz r22,3580(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3580);
	// lwz r22,3616(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3616);
	// lwz r22,3652(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3652);
	// lwz r22,3660(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3660);
	// lwz r22,3680(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3680);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3688(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3688);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3696(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3696);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3724(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3724);
	// lwz r22,3704(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3704);
	// lwz r22,3712(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3712);
loc_82DC0DE0:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dc11bc
	if (ctx.cr6.eq) goto loc_82DC11BC;
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x82dc0e8c
	goto loc_82DC0E8C;
loc_82DC0DF4:
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// b 0x82dc0e84
	goto loc_82DC0E84;
loc_82DC0DFC:
	// lbz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// rlwinm r31,r4,0,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// std r11,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r11.u64);
	// lfd f12,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// b 0x82dc0e88
	goto loc_82DC0E88;
loc_82DC0E20:
	// lbz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 592);
	// rlwinm r31,r4,0,28,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// std r11,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r11.u64);
	// lfd f12,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// b 0x82dc0e88
	goto loc_82DC0E88;
loc_82DC0E44:
	// rlwinm r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	// b 0x82dc0e84
	goto loc_82DC0E84;
loc_82DC0E4C:
	// rlwinm r11,r4,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dc11bc
	if (ctx.cr6.eq) goto loc_82DC11BC;
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x82dc0e8c
	goto loc_82DC0E8C;
loc_82DC0E60:
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// b 0x82dc0e84
	goto loc_82DC0E84;
loc_82DC0E68:
	// rlwinm r11,r4,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// b 0x82dc0e84
	goto loc_82DC0E84;
loc_82DC0E70:
	// rlwinm r11,r4,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100;
	// b 0x82dc0e84
	goto loc_82DC0E84;
loc_82DC0E78:
	// rlwinm r11,r4,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	// b 0x82dc0e84
	goto loc_82DC0E84;
loc_82DC0E80:
	// rlwinm r11,r4,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400;
loc_82DC0E84:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82DC0E88:
	// beq cr6,0x82dc11bc
	if (ctx.cr6.eq) goto loc_82DC11BC;
loc_82DC0E8C:
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r11,139
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 139, ctx.xer);
	// bgt cr6,0x82dc1170
	if (ctx.cr6.gt) goto loc_82DC1170;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// addi r12,r12,3760
	ctx.r12.s64 = ctx.r12.s64 + 3760;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DC10E0;
	case 1:
		goto loc_82DC10E0;
	case 2:
		goto loc_82DC10E8;
	case 3:
		goto loc_82DC10F8;
	case 4:
		goto loc_82DC1170;
	case 5:
		goto loc_82DC1170;
	case 6:
		goto loc_82DC1170;
	case 7:
		goto loc_82DC1170;
	case 8:
		goto loc_82DC1170;
	case 9:
		goto loc_82DC1170;
	case 10:
		goto loc_82DC1170;
	case 11:
		goto loc_82DC1170;
	case 12:
		goto loc_82DC1170;
	case 13:
		goto loc_82DC1170;
	case 14:
		goto loc_82DC1170;
	case 15:
		goto loc_82DC1170;
	case 16:
		goto loc_82DC1170;
	case 17:
		goto loc_82DC1170;
	case 18:
		goto loc_82DC1170;
	case 19:
		goto loc_82DC1170;
	case 20:
		goto loc_82DC1170;
	case 21:
		goto loc_82DC1170;
	case 22:
		goto loc_82DC1170;
	case 23:
		goto loc_82DC1170;
	case 24:
		goto loc_82DC1170;
	case 25:
		goto loc_82DC1170;
	case 26:
		goto loc_82DC1170;
	case 27:
		goto loc_82DC1170;
	case 28:
		goto loc_82DC1170;
	case 29:
		goto loc_82DC1170;
	case 30:
		goto loc_82DC1170;
	case 31:
		goto loc_82DC1170;
	case 32:
		goto loc_82DC1170;
	case 33:
		goto loc_82DC1170;
	case 34:
		goto loc_82DC1170;
	case 35:
		goto loc_82DC1170;
	case 36:
		goto loc_82DC1170;
	case 37:
		goto loc_82DC1170;
	case 38:
		goto loc_82DC1170;
	case 39:
		goto loc_82DC1170;
	case 40:
		goto loc_82DC1170;
	case 41:
		goto loc_82DC1170;
	case 42:
		goto loc_82DC1170;
	case 43:
		goto loc_82DC1170;
	case 44:
		goto loc_82DC1170;
	case 45:
		goto loc_82DC1170;
	case 46:
		goto loc_82DC1170;
	case 47:
		goto loc_82DC1170;
	case 48:
		goto loc_82DC1170;
	case 49:
		goto loc_82DC1170;
	case 50:
		goto loc_82DC1170;
	case 51:
		goto loc_82DC1170;
	case 52:
		goto loc_82DC1170;
	case 53:
		goto loc_82DC1170;
	case 54:
		goto loc_82DC1170;
	case 55:
		goto loc_82DC1170;
	case 56:
		goto loc_82DC1170;
	case 57:
		goto loc_82DC1170;
	case 58:
		goto loc_82DC1170;
	case 59:
		goto loc_82DC1170;
	case 60:
		goto loc_82DC1170;
	case 61:
		goto loc_82DC1170;
	case 62:
		goto loc_82DC1170;
	case 63:
		goto loc_82DC1170;
	case 64:
		goto loc_82DC1170;
	case 65:
		goto loc_82DC1170;
	case 66:
		goto loc_82DC1170;
	case 67:
		goto loc_82DC1170;
	case 68:
		goto loc_82DC1170;
	case 69:
		goto loc_82DC1170;
	case 70:
		goto loc_82DC1170;
	case 71:
		goto loc_82DC1170;
	case 72:
		goto loc_82DC1170;
	case 73:
		goto loc_82DC1170;
	case 74:
		goto loc_82DC1170;
	case 75:
		goto loc_82DC1170;
	case 76:
		goto loc_82DC1170;
	case 77:
		goto loc_82DC1170;
	case 78:
		goto loc_82DC1170;
	case 79:
		goto loc_82DC1170;
	case 80:
		goto loc_82DC1170;
	case 81:
		goto loc_82DC1170;
	case 82:
		goto loc_82DC1170;
	case 83:
		goto loc_82DC1170;
	case 84:
		goto loc_82DC1170;
	case 85:
		goto loc_82DC1170;
	case 86:
		goto loc_82DC1170;
	case 87:
		goto loc_82DC1170;
	case 88:
		goto loc_82DC1170;
	case 89:
		goto loc_82DC1170;
	case 90:
		goto loc_82DC1170;
	case 91:
		goto loc_82DC1170;
	case 92:
		goto loc_82DC1170;
	case 93:
		goto loc_82DC1170;
	case 94:
		goto loc_82DC1170;
	case 95:
		goto loc_82DC1170;
	case 96:
		goto loc_82DC1170;
	case 97:
		goto loc_82DC1170;
	case 98:
		goto loc_82DC1170;
	case 99:
		goto loc_82DC1170;
	case 100:
		goto loc_82DC1170;
	case 101:
		goto loc_82DC1170;
	case 102:
		goto loc_82DC1170;
	case 103:
		goto loc_82DC1170;
	case 104:
		goto loc_82DC1170;
	case 105:
		goto loc_82DC1170;
	case 106:
		goto loc_82DC1170;
	case 107:
		goto loc_82DC1170;
	case 108:
		goto loc_82DC1170;
	case 109:
		goto loc_82DC1170;
	case 110:
		goto loc_82DC1170;
	case 111:
		goto loc_82DC1170;
	case 112:
		goto loc_82DC1170;
	case 113:
		goto loc_82DC1170;
	case 114:
		goto loc_82DC1170;
	case 115:
		goto loc_82DC1170;
	case 116:
		goto loc_82DC1170;
	case 117:
		goto loc_82DC1170;
	case 118:
		goto loc_82DC1170;
	case 119:
		goto loc_82DC1170;
	case 120:
		goto loc_82DC1170;
	case 121:
		goto loc_82DC1170;
	case 122:
		goto loc_82DC1170;
	case 123:
		goto loc_82DC1170;
	case 124:
		goto loc_82DC1170;
	case 125:
		goto loc_82DC1170;
	case 126:
		goto loc_82DC1170;
	case 127:
		goto loc_82DC1170;
	case 128:
		goto loc_82DC1170;
	case 129:
		goto loc_82DC1108;
	case 130:
		goto loc_82DC1170;
	case 131:
		goto loc_82DC1170;
	case 132:
		goto loc_82DC1170;
	case 133:
		goto loc_82DC1170;
	case 134:
		goto loc_82DC1170;
	case 135:
		goto loc_82DC1120;
	case 136:
		goto loc_82DC1170;
	case 137:
		goto loc_82DC1170;
	case 138:
		goto loc_82DC1138;
	case 139:
		goto loc_82DC1150;
	default:
		__builtin_unreachable();
	}
	// lwz r22,4320(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4320);
	// lwz r22,4320(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4320);
	// lwz r22,4328(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4328);
	// lwz r22,4344(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4344);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4360(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4360);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4384(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4384);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4464(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// lwz r22,4408(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4408);
	// lwz r22,4432(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4432);
loc_82DC10E0:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x82dc1170
	goto loc_82DC1170;
loc_82DC10E8:
	// lbz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// std r11,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r11.u64);
	// lfd f0,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82dc1164
	goto loc_82DC1164;
loc_82DC10F8:
	// lbz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 592);
	// std r11,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f0,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82dc1164
	goto loc_82DC1164;
loc_82DC1108:
	// lwz r11,640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r11.u64);
	// lfd f0,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82dc1164
	goto loc_82DC1164;
loc_82DC1120:
	// lwz r11,640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// lwz r11,708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r11.u64);
	// lfd f0,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82dc1164
	goto loc_82DC1164;
loc_82DC1138:
	// lwz r11,640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r11.u64);
	// lfd f0,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82dc1164
	goto loc_82DC1164;
loc_82DC1150:
	// lwz r11,640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// lwz r11,716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
loc_82DC1164:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82DC1170:
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82dc11b8
	if (ctx.cr6.eq) goto loc_82DC11B8;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r11.u64);
	// lfd f10,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r11,-96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82DC11B8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82DC11BC:
	// lwz r11,604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dc0b70
	if (ctx.cr6.lt) goto loc_82DC0B70;
loc_82DC11D0:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r3,r11,37
	ctx.r3.s64 = ctx.r11.s64 + 37;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC11F0"))) PPC_WEAK_FUNC(sub_82DC11F0);
PPC_FUNC_IMPL(__imp__sub_82DC11F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82dc1208
	if (!ctx.cr6.eq) goto loc_82DC1208;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DC1208:
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfs f0,8872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8872);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,6404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6404);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,8868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82dc1254
	if (!ctx.cr6.lt) goto loc_82DC1254;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82dc126c
	goto loc_82DC126C;
loc_82DC1254:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-17348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dc126c
	if (ctx.cr6.lt) goto loc_82DC126C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,8864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8864);
	ctx.f0.f64 = double(temp.f32);
loc_82DC126C:
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r11,r11,29584
	ctx.r11.s64 = ctx.r11.s64 + 29584;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC1290"))) PPC_WEAK_FUNC(sub_82DC1290);
PPC_FUNC_IMPL(__imp__sub_82DC1290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DC1298;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ae4
	ctx.lr = 0x82DC12A0;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,12800
	ctx.r10.s64 = 12800;
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f31,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,460(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f31,464(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f31,468(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stfs f31,512(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stb r28,624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 624, ctx.r28.u8);
	// lfs f29,8896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8896);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,516(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stw r10,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r10.u32);
	// stfs f31,520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stw r28,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r28.u32);
	// stfs f31,472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stb r29,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r29.u8);
	// stfs f29,476(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stw r28,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r28.u32);
	// lfs f30,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// stb r28,580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 580, ctx.r28.u8);
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f31,484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f31,488(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f29,492(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f29,504(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stfs f31,568(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// stfs f30,572(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stfs f31,576(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f31,528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// stfs f31,532(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stfs f30,536(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f31,540(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f30,544(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f31,556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f31,560(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// bl 0x82dc0b40
	ctx.lr = 0x82DC1360;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc13b8
	if (!ctx.cr6.eq) goto loc_82DC13B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f1,-16744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16744);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,8892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8892);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,10764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10764);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82DC13AC;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
loc_82DC13B8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC13CC;
	sub_82DC0B40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f27,6944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6944);
	ctx.f27.f64 = double(temp.f32);
	// bne cr6,0x82dc13fc
	if (!ctx.cr6.eq) goto loc_82DC13FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfs f0,616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
loc_82DC13FC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC1410;
	sub_82DC0B40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r27,2048
	ctx.r27.s64 = 134217728;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f28,8888(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8888);
	ctx.f28.f64 = double(temp.f32);
	// bne cr6,0x82dc1458
	if (!ctx.cr6.eq) goto loc_82DC1458;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82dc1438
	if (!ctx.cr6.eq) goto loc_82DC1438;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82dc1454
	goto loc_82DC1454;
loc_82DC1438:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f0,f0,f28,f30
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f28.f64 - ctx.f30.f64)));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
loc_82DC1454:
	// stfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
loc_82DC1458:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC146C;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc14c4
	if (!ctx.cr6.eq) goto loc_82DC14C4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f1,-18376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18376);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,8884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmsubs f13,f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 - ctx.f0.f64));
	// lfs f0,8880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8880);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82DC14B0;
	sub_82CB59B0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,8876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
loc_82DC14C4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,261
	ctx.r5.s64 = 261;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC14D8;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc14f0
	if (!ctx.cr6.eq) goto loc_82DC14F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dc11f0
	ctx.lr = 0x82DC14EC;
	sub_82DC11F0(ctx, base);
	// stfs f1,460(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
loc_82DC14F0:
	// lwz r30,604(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82dc1560
	if (!ctx.cr6.gt) goto loc_82DC1560;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
loc_82DC1504:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82dc151c
	if (!ctx.cr6.eq) goto loc_82DC151C;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,518
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 518, ctx.xer);
	// beq cr6,0x82dc1534
	if (ctx.cr6.eq) goto loc_82DC1534;
loc_82DC151C:
	// lwz r9,604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dc1504
	if (ctx.cr6.lt) goto loc_82DC1504;
	// b 0x82dc1560
	goto loc_82DC1560;
loc_82DC1534:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,518
	ctx.r5.s64 = 518;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC1548;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc1560
	if (!ctx.cr6.eq) goto loc_82DC1560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dc11f0
	ctx.lr = 0x82DC155C;
	sub_82DC11F0(ctx, base);
	// stfs f1,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
loc_82DC1560:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82dc15cc
	if (!ctx.cr6.gt) goto loc_82DC15CC;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
loc_82DC1570:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82dc1588
	if (!ctx.cr6.eq) goto loc_82DC1588;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,519
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 519, ctx.xer);
	// beq cr6,0x82dc15a0
	if (ctx.cr6.eq) goto loc_82DC15A0;
loc_82DC1588:
	// lwz r9,604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dc1570
	if (ctx.cr6.lt) goto loc_82DC1570;
	// b 0x82dc15cc
	goto loc_82DC15CC;
loc_82DC15A0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,519
	ctx.r5.s64 = 519;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC15B4;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc15cc
	if (!ctx.cr6.eq) goto loc_82DC15CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dc11f0
	ctx.lr = 0x82DC15C8;
	sub_82DC11F0(ctx, base);
	// stfs f1,484(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
loc_82DC15CC:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82dc1638
	if (!ctx.cr6.gt) goto loc_82DC1638;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
loc_82DC15DC:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82dc15f4
	if (!ctx.cr6.eq) goto loc_82DC15F4;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,521
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 521, ctx.xer);
	// beq cr6,0x82dc160c
	if (ctx.cr6.eq) goto loc_82DC160C;
loc_82DC15F4:
	// lwz r9,604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dc15dc
	if (ctx.cr6.lt) goto loc_82DC15DC;
	// b 0x82dc1638
	goto loc_82DC1638;
loc_82DC160C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,521
	ctx.r5.s64 = 521;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC1620;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc1638
	if (!ctx.cr6.eq) goto loc_82DC1638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dc11f0
	ctx.lr = 0x82DC1634;
	sub_82DC11F0(ctx, base);
	// stfs f1,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
loc_82DC1638:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,522
	ctx.r5.s64 = 522;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC164C;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc1680
	if (!ctx.cr6.eq) goto loc_82DC1680;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82dc167c
	if (ctx.cr6.eq) goto loc_82DC167C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f0,f0,f28,f30
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f28.f64 - ctx.f30.f64)));
	// fmuls f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
loc_82DC167C:
	// stfs f29,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
loc_82DC1680:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC1694;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc1848
	if (!ctx.cr6.eq) goto loc_82DC1848;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r29,580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 580, ctx.r29.u8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// ble cr6,0x82dc172c
	if (!ctx.cr6.gt) goto loc_82DC172C;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
loc_82DC16D0:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82dc16e8
	if (!ctx.cr6.eq) goto loc_82DC16E8;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,778
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 778, ctx.xer);
	// beq cr6,0x82dc1700
	if (ctx.cr6.eq) goto loc_82DC1700;
loc_82DC16E8:
	// lwz r9,604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dc16d0
	if (ctx.cr6.lt) goto loc_82DC16D0;
	// b 0x82dc172c
	goto loc_82DC172C;
loc_82DC1700:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,778
	ctx.r5.s64 = 778;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC1714;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc172c
	if (!ctx.cr6.eq) goto loc_82DC172C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dc11f0
	ctx.lr = 0x82DC1728;
	sub_82DC11F0(ctx, base);
	// stfs f1,528(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
loc_82DC172C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82dc1798
	if (!ctx.cr6.gt) goto loc_82DC1798;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
loc_82DC173C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82dc1754
	if (!ctx.cr6.eq) goto loc_82DC1754;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,779
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 779, ctx.xer);
	// beq cr6,0x82dc176c
	if (ctx.cr6.eq) goto loc_82DC176C;
loc_82DC1754:
	// lwz r9,604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dc173c
	if (ctx.cr6.lt) goto loc_82DC173C;
	// b 0x82dc1798
	goto loc_82DC1798;
loc_82DC176C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,779
	ctx.r5.s64 = 779;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC1780;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc1798
	if (!ctx.cr6.eq) goto loc_82DC1798;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dc11f0
	ctx.lr = 0x82DC1794;
	sub_82DC11F0(ctx, base);
	// stfs f1,540(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
loc_82DC1798:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82dc1804
	if (!ctx.cr6.gt) goto loc_82DC1804;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
loc_82DC17A8:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82dc17c0
	if (!ctx.cr6.eq) goto loc_82DC17C0;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,781
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 781, ctx.xer);
	// beq cr6,0x82dc17d8
	if (ctx.cr6.eq) goto loc_82DC17D8;
loc_82DC17C0:
	// lwz r9,604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dc17a8
	if (ctx.cr6.lt) goto loc_82DC17A8;
	// b 0x82dc1804
	goto loc_82DC1804;
loc_82DC17D8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,781
	ctx.r5.s64 = 781;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC17EC;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc1804
	if (!ctx.cr6.eq) goto loc_82DC1804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dc11f0
	ctx.lr = 0x82DC1800;
	sub_82DC11F0(ctx, base);
	// stfs f1,552(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
loc_82DC1804:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,782
	ctx.r5.s64 = 782;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0b40
	ctx.lr = 0x82DC1818;
	sub_82DC0B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc1848
	if (!ctx.cr6.eq) goto loc_82DC1848;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82dc1844
	if (ctx.cr6.eq) goto loc_82DC1844;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
loc_82DC1844:
	// stfs f31,572(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
loc_82DC1848:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,9904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82dc1864
	if (!ctx.cr6.lt) goto loc_82DC1864;
	// stfs f0,496(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
loc_82DC1864:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b30
	ctx.lr = 0x82DC1870;
	__restfpr_27(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC1874"))) PPC_WEAK_FUNC(sub_82DC1874);
PPC_FUNC_IMPL(__imp__sub_82DC1874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1878"))) PPC_WEAK_FUNC(sub_82DC1878);
PPC_FUNC_IMPL(__imp__sub_82DC1878) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82d9cb18
	ctx.lr = 0x82DC18BC;
	sub_82D9CB18(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stb r30,624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 624, ctx.r30.u8);
	// stw r10,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// addi r11,r11,11944
	ctx.r11.s64 = ctx.r11.s64 + 11944;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82DC1930"))) PPC_WEAK_FUNC(sub_82DC1930);
PPC_FUNC_IMPL(__imp__sub_82DC1930) {
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
	// bl 0x82cb6adc
	ctx.lr = 0x82DC1944;
	__savefpr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f27,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 524);
	// fmr f28,f27
	ctx.f28.f64 = ctx.f27.f64;
	// fmr f26,f27
	ctx.f26.f64 = ctx.f27.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f25,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f25.f64 = double(temp.f32);
	// beq cr6,0x82dc1bb8
	if (ctx.cr6.eq) goto loc_82DC1BB8;
	// lbz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,8908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8908);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82dc1a54
	if (ctx.cr6.eq) goto loc_82DC1A54;
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// lbz r11,700(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dc1a54
	if (!ctx.cr6.eq) goto loc_82DC1A54;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82dc1a54
	if (ctx.cr6.eq) goto loc_82DC1A54;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// bne cr6,0x82dc19ec
	if (!ctx.cr6.eq) goto loc_82DC19EC;
	// fnmsubs f1,f0,f31,f27
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f27.f64)));
	// bl 0x82cb4f48
	ctx.lr = 0x82DC19DC;
	sub_82CB4F48(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7984);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82DC19EC:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82dc1a08
	if (!ctx.cr6.eq) goto loc_82DC1A08;
	// lfs f13,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82dc1a08
	if (!ctx.cr6.lt) goto loc_82DC1A08;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DC1A08:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,496
	ctx.r11.s64 = ctx.r31.s64 + 496;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lfs f11,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// beq cr6,0x82dc1a50
	if (ctx.cr6.eq) goto loc_82DC1A50;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f25
	ctx.cr6.compare(ctx.f12.f64, ctx.f25.f64);
	// beq cr6,0x82dc1a50
	if (ctx.cr6.eq) goto loc_82DC1A50;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// b 0x82dc1a54
	goto loc_82DC1A54;
loc_82DC1A50:
	// stfs f25,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
loc_82DC1A54:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lfs f0,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dc1b10
	if (ctx.cr6.lt) goto loc_82DC1B10;
loc_82DC1A78:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82dc1b10
	if (!ctx.cr6.lt) goto loc_82DC1B10;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82dc1aa8
	if (!ctx.cr6.eq) goto loc_82DC1AA8;
	// lbz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dc1af4
	if (ctx.cr6.eq) goto loc_82DC1AF4;
	// lwz r10,640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// lbz r10,700(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 700);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82dc1af4
	if (!ctx.cr6.eq) goto loc_82DC1AF4;
loc_82DC1AA8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82dc1a78
	if (!ctx.cr6.lt) goto loc_82DC1A78;
	// b 0x82dc1b10
	goto loc_82DC1B10;
loc_82DC1AF4:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
loc_82DC1B10:
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82dc1b28
	if (ctx.cr6.lt) goto loc_82DC1B28;
loc_82DC1B1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc1878
	ctx.lr = 0x82DC1B24;
	sub_82DC1878(ctx, base);
	// b 0x82dc1cc8
	goto loc_82DC1CC8;
loc_82DC1B28:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// ble cr6,0x82dc1b5c
	if (!ctx.cr6.gt) goto loc_82DC1B5C;
	// lfs f12,480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
loc_82DC1B5C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82dc1b74
	if (!ctx.cr6.eq) goto loc_82DC1B74;
	// lfs f13,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82dc1b74
	if (!ctx.cr6.lt) goto loc_82DC1B74;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DC1B74:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc1b84
	if (!ctx.cr6.eq) goto loc_82DC1B84;
	// fnmsubs f28,f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f27.f64)));
	// b 0x82dc1bb8
	goto loc_82DC1BB8;
loc_82DC1B84:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,-18204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18204);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r11,r11,30096
	ctx.r11.s64 = ctx.r11.s64 + 30096;
	// addi r11,r11,768
	ctx.r11.s64 = ctx.r11.s64 + 768;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lfs f28,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
loc_82DC1BB8:
	// lbz r10,600(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 600);
	// lfs f13,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// lfs f12,460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	ctx.f12.f64 = double(temp.f32);
	// mullw r10,r10,r10
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r9,708(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// lwz r11,716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// mullw r11,r11,r11
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mullw r10,r9,r9
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,8904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f29,f10,f0
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f30,f11,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blt cr6,0x82dc1c78
	if (ctx.cr6.lt) goto loc_82DC1C78;
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,8900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8900);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82cb4860
	ctx.lr = 0x82DC1C50;
	sub_82CB4860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,612(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f26,f13,f0,f27
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f27.f64));
	// fcmpu cr6,f26,f25
	ctx.cr6.compare(ctx.f26.f64, ctx.f25.f64);
	// bge cr6,0x82dc1c6c
	if (!ctx.cr6.lt) goto loc_82DC1C6C;
	// fmr f26,f25
	ctx.f26.f64 = ctx.f25.f64;
	// b 0x82dc1c78
	goto loc_82DC1C78;
loc_82DC1C6C:
	// fcmpu cr6,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f27.f64);
	// ble cr6,0x82dc1c78
	if (!ctx.cr6.gt) goto loc_82DC1C78;
	// fmr f26,f27
	ctx.f26.f64 = ctx.f27.f64;
loc_82DC1C78:
	// lfs f0,636(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bne cr6,0x82dc1cac
	if (!ctx.cr6.eq) goto loc_82DC1CAC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-17356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17356);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dc1b1c
	if (ctx.cr6.lt) goto loc_82DC1B1C;
loc_82DC1CAC:
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lfs f13,688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82d99380
	ctx.lr = 0x82DC1CC4;
	sub_82D99380(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DC1CC8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b28
	ctx.lr = 0x82DC1CD4;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC1CE4"))) PPC_WEAK_FUNC(sub_82DC1CE4);
PPC_FUNC_IMPL(__imp__sub_82DC1CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1CE8"))) PPC_WEAK_FUNC(sub_82DC1CE8);
PPC_FUNC_IMPL(__imp__sub_82DC1CE8) {
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
	// bl 0x82cb6ae4
	ctx.lr = 0x82DC1CFC;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 580);
	// lfs f10,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f10.f64 = double(temp.f32);
	// fmr f27,f10
	ctx.f27.f64 = ctx.f10.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dc1f10
	if (ctx.cr6.eq) goto loc_82DC1F10;
	// lbz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82dc1dd8
	if (ctx.cr6.eq) goto loc_82DC1DD8;
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// lbz r11,700(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dc1dd8
	if (!ctx.cr6.eq) goto loc_82DC1DD8;
	// lwz r10,564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82dc1dd8
	if (ctx.cr6.eq) goto loc_82DC1DD8;
	// addi r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 + 44;
	// lfs f13,568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmadds f11,f12,f13,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// bne cr6,0x82dc1d8c
	if (!ctx.cr6.eq) goto loc_82DC1D8C;
	// lfs f0,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82dc1d8c
	if (!ctx.cr6.lt) goto loc_82DC1D8C;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82DC1D8C:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,552
	ctx.r11.s64 = ctx.r31.s64 + 552;
	// stw r10,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// beq cr6,0x82dc1dd4
	if (ctx.cr6.eq) goto loc_82DC1DD4;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// beq cr6,0x82dc1dd4
	if (ctx.cr6.eq) goto loc_82DC1DD4;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// b 0x82dc1dd8
	goto loc_82DC1DD8;
loc_82DC1DD4:
	// stfs f10,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
loc_82DC1DD8:
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// lfs f0,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dc1e9c
	if (ctx.cr6.lt) goto loc_82DC1E9C;
loc_82DC1DFC:
	// lwz r10,564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x82dc1e9c
	if (!ctx.cr6.lt) goto loc_82DC1E9C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82dc1e34
	if (!ctx.cr6.eq) goto loc_82DC1E34;
	// lfs f0,572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82dc1e34
	if (!ctx.cr6.gt) goto loc_82DC1E34;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82dc1e80
	if (ctx.cr6.eq) goto loc_82DC1E80;
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// lbz r11,700(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dc1e80
	if (!ctx.cr6.eq) goto loc_82DC1E80;
loc_82DC1E34:
	// addi r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 + 44;
	// lfs f0,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stw r8,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r8.u32);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82dc1dfc
	if (!ctx.cr6.lt) goto loc_82DC1DFC;
	// b 0x82dc1e9c
	goto loc_82DC1E9C;
loc_82DC1E80:
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
loc_82DC1E9C:
	// lwz r9,564(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x82dc1eb8
	if (ctx.cr6.lt) goto loc_82DC1EB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f27,f10
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f10.f64;
	// stb r11,580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 580, ctx.r11.u8);
	// b 0x82dc1f10
	goto loc_82DC1F10;
loc_82DC1EB8:
	// addi r11,r9,44
	ctx.r11.s64 = ctx.r9.s64 + 44;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// beq cr6,0x82dc1ef0
	if (ctx.cr6.eq) goto loc_82DC1EF0;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
loc_82DC1EF0:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82dc1f08
	if (!ctx.cr6.eq) goto loc_82DC1F08;
	// lfs f13,572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82dc1f08
	if (!ctx.cr6.lt) goto loc_82DC1F08;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DC1F08:
	// lfs f13,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82DC1F10:
	// lbz r9,592(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 592);
	// lfs f0,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// lbz r8,593(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 593);
	// lfs f13,460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r7,596(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 696);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lwz r11,692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,104(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f31,f8
	ctx.f31.f64 = double(float(ctx.f8.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f12,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f30,f9,f12
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f12,-17360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17360);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f29,f11,f12
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// lfs f12,8912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8912);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f12,-16020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16020);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f28,f9,f12
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// blt cr6,0x82dc2010
	if (ctx.cr6.lt) goto loc_82DC2010;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,8900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8900);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82cb4860
	ctx.lr = 0x82DC2000;
	sub_82CB4860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82dc2014
	goto loc_82DC2014;
loc_82DC2010:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_82DC2014:
	// fadds f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f1,-18376(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18376);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,8880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8880);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82DC2040;
	sub_82CB59B0(ctx, base);
	// lwz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DC2068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82d9b8e0
	ctx.lr = 0x82DC2078;
	sub_82D9B8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b30
	ctx.lr = 0x82DC2088;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2098"))) PPC_WEAK_FUNC(sub_82DC2098);
PPC_FUNC_IMPL(__imp__sub_82DC2098) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,640(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lfs f0,-15896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15896);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
	// bl 0x82d99540
	ctx.lr = 0x82DC20E0;
	sub_82D99540(ctx, base);
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

__attribute__((alias("__imp__sub_82DC20F4"))) PPC_WEAK_FUNC(sub_82DC20F4);
PPC_FUNC_IMPL(__imp__sub_82DC20F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC20F8"))) PPC_WEAK_FUNC(sub_82DC20F8);
PPC_FUNC_IMPL(__imp__sub_82DC20F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82DC2100;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,11932(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11932);
	// lwz r10,232(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 232);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82dc231c
	if (!ctx.cr6.gt) goto loc_82DC231C;
	// lwz r3,672(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 672);
	// lwz r31,240(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 240);
loc_82DC2134:
	// lwz r30,260(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82dc2150
	if (!ctx.cr6.eq) goto loc_82DC2150;
	// lbz r30,676(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 676);
	// lwz r27,264(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82dc216c
	if (ctx.cr6.eq) goto loc_82DC216C;
loc_82DC2150:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,280
	ctx.r31.s64 = ctx.r31.s64 + 280;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82dc2134
	if (ctx.cr6.lt) goto loc_82DC2134;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82DC216C:
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r27,244(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r26,236(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82dc22a4
	if (ctx.cr6.eq) goto loc_82DC22A4;
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
loc_82DC2190:
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82dc21a8
	if (ctx.cr6.lt) goto loc_82DC21A8;
	// lhz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82dc21bc
	if (!ctx.cr6.gt) goto loc_82DC21BC;
loc_82DC21A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82dc2190
	if (ctx.cr6.lt) goto loc_82DC2190;
	// b 0x82dc22a4
	goto loc_82DC22A4;
loc_82DC21BC:
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r30,56(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82dc2210
	if (ctx.cr6.eq) goto loc_82DC2210;
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,18(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x82dc2270
	goto loc_82DC2270;
loc_82DC2210:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82dc2260
	if (ctx.cr6.lt) goto loc_82DC2260;
	// lwz r10,244(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 244);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82dc2260
	if (!ctx.cr6.lt) goto loc_82DC2260;
	// lwz r6,252(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 252);
	// mulli r10,r30,296
	ctx.r10.s64 = ctx.r30.s64 * 296;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lhz r6,264(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 264);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r7,252(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 252);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r7,266(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 266);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r8,252(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 252);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x82dc2270
	goto loc_82DC2270;
loc_82DC2260:
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
loc_82DC2270:
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,10(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82DC22A4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,11928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11928);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DC22C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dc2320
	if (!ctx.cr6.eq) goto loc_82DC2320;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,11936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc22f8
	if (ctx.cr6.eq) goto loc_82DC22F8;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82dc22f8
	if (!ctx.cr6.eq) goto loc_82DC22F8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
loc_82DC22F8:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dc231c
	if (ctx.cr6.eq) goto loc_82DC231C;
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dc231c
	if (ctx.cr6.eq) goto loc_82DC231C;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82DC231C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DC2320:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2328"))) PPC_WEAK_FUNC(sub_82DC2328);
PPC_FUNC_IMPL(__imp__sub_82DC2328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DC2330;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r29,16
	ctx.r28.s64 = ctx.r29.s64 + 16;
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82dc2400
	if (ctx.cr6.eq) goto loc_82DC2400;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f30,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-15896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15896);
	ctx.f31.f64 = double(temp.f32);
loc_82DC2360:
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc23f4
	if (ctx.cr6.eq) goto loc_82DC23F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc1930
	ctx.lr = 0x82DC2378;
	sub_82DC1930(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lfs f0,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,11924(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11924);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// bl 0x82dc1ce8
	ctx.lr = 0x82DC2398;
	sub_82DC1CE8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// lfs f0,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,11924(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11924);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// lwz r11,712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f1,f0,f31,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f30.f64));
	// bl 0x82d99540
	ctx.lr = 0x82DC23DC;
	sub_82D99540(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lfs f0,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,11924(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11924);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
loc_82DC23F4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82dc2360
	if (!ctx.cr6.eq) goto loc_82DC2360;
loc_82DC2400:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2414"))) PPC_WEAK_FUNC(sub_82DC2414);
PPC_FUNC_IMPL(__imp__sub_82DC2414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2418"))) PPC_WEAK_FUNC(sub_82DC2418);
PPC_FUNC_IMPL(__imp__sub_82DC2418) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82dc243c
	if (ctx.cr6.lt) goto loc_82DC243C;
loc_82DC242C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,22
	ctx.r3.s64 = 22;
	// stb r11,28(r9)
	PPC_STORE_U8(ctx.r9.u32 + 28, ctx.r11.u8);
	// blr 
	return;
loc_82DC243C:
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lbzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// rlwinm r8,r10,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82dc248c
	if (ctx.cr6.eq) goto loc_82DC248C;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
loc_82DC245C:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82dc242c
	if (!ctx.cr6.lt) goto loc_82DC242C;
	// lbzx r8,r11,r6
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r7,r10,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r3,r10,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// clrlwi r8,r10,25
	ctx.r8.u64 = ctx.r10.u32 & 0x7F;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bne cr6,0x82dc245c
	if (!ctx.cr6.eq) goto loc_82DC245C;
loc_82DC248C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2498"))) PPC_WEAK_FUNC(sub_82DC2498);
PPC_FUNC_IMPL(__imp__sub_82DC2498) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82dc24bc
	if (ctx.cr6.lt) goto loc_82DC24BC;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,22
	ctx.r3.s64 = 22;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// blr 
	return;
loc_82DC24BC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

