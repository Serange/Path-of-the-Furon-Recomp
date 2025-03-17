#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DB2004"))) PPC_WEAK_FUNC(sub_82DB2004);
PPC_FUNC_IMPL(__imp__sub_82DB2004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2008"))) PPC_WEAK_FUNC(sub_82DB2008);
PPC_FUNC_IMPL(__imp__sub_82DB2008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,7616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,-17812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82db203c
	if (!ctx.cr6.lt) goto loc_82DB203C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DB203C:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82db20c4
	if (ctx.cr6.gt) goto loc_82DB20C4;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,8292
	ctx.r12.s64 = ctx.r12.s64 + 8292;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB2074;
	case 1:
		goto loc_82DB2084;
	case 2:
		goto loc_82DB2098;
	case 3:
		goto loc_82DB20AC;
	default:
		__builtin_unreachable();
	}
	// lwz r22,8308(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8308);
	// lwz r22,8324(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8324);
	// lwz r22,8344(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8344);
	// lwz r22,8364(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8364);
loc_82DB2074:
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DB2084:
	// subfic r11,r11,16462
	ctx.xer.ca = ctx.r11.u32 <= 16462;
	ctx.r11.s64 = 16462 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DB2098:
	// addi r11,r11,-16305
	ctx.r11.s64 = ctx.r11.s64 + -16305;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DB20AC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32846
	ctx.r10.u64 = ctx.r10.u64 | 32846;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DB20C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB20D0"))) PPC_WEAK_FUNC(sub_82DB20D0);
PPC_FUNC_IMPL(__imp__sub_82DB20D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DB20D8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-31909
	ctx.r28.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,316
	ctx.r29.s64 = ctx.r31.s64 + 316;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r28)
	PPC_STORE_U32(ctx.r28.u32 + 19872, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,2940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2940);
	ctx.f31.f64 = double(temp.f32);
loc_82DB2100:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82cb4940
	ctx.lr = 0x82DB211C;
	sub_82CB4940(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,8192
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8192, ctx.xer);
	// blt cr6,0x82db2100
	if (ctx.cr6.lt) goto loc_82DB2100;
	// addi r11,r31,312
	ctx.r11.s64 = ctx.r31.s64 + 312;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db214c
	if (ctx.cr6.eq) goto loc_82DB214C;
	// lwz r9,1244(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1244);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82DB214C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,4194
	ctx.r8.s64 = 274857984;
	// lwz r10,1256(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1256);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r8,r8,19923
	ctx.r8.u64 = ctx.r8.u64 | 19923;
	// addi r5,r11,4576
	ctx.r5.s64 = ctx.r11.s64 + 4576;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,215
	ctx.r6.s64 = 215;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,4568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4568);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulhw r11,r11,r8
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r4.u32);
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB21C8;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// bne cr6,0x82db21e4
	if (!ctx.cr6.eq) goto loc_82DB21E4;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DB21E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// ble cr6,0x82db2244
	if (!ctx.cr6.gt) goto loc_82DB2244;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DB2204:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB2228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db2248
	if (!ctx.cr6.eq) goto loc_82DB2248;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db2204
	if (ctx.cr6.lt) goto loc_82DB2204;
loc_82DB2244:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB2248:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB2254"))) PPC_WEAK_FUNC(sub_82DB2254);
PPC_FUNC_IMPL(__imp__sub_82DB2254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2258"))) PPC_WEAK_FUNC(sub_82DB2258);
PPC_FUNC_IMPL(__imp__sub_82DB2258) {
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
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82db22a0
	if (ctx.cr6.eq) goto loc_82DB22A0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,4576
	ctx.r5.s64 = ctx.r11.s64 + 4576;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,264
	ctx.r6.s64 = 264;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB2298;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
loc_82DB22A0:
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

__attribute__((alias("__imp__sub_82DB22B8"))) PPC_WEAK_FUNC(sub_82DB22B8);
PPC_FUNC_IMPL(__imp__sub_82DB22B8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82db22e8
	if (ctx.cr6.eq) goto loc_82DB22E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,292(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82cb16f0
	ctx.lr = 0x82DB22E8;
	sub_82CB16F0(ctx, base);
loc_82DB22E8:
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

__attribute__((alias("__imp__sub_82DB22FC"))) PPC_WEAK_FUNC(sub_82DB22FC);
PPC_FUNC_IMPL(__imp__sub_82DB22FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2300"))) PPC_WEAK_FUNC(sub_82DB2300);
PPC_FUNC_IMPL(__imp__sub_82DB2300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82DB2308;
	__savegprlr_17(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x82db27b8
	if (ctx.cr6.eq) goto loc_82DB27B8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82db27b8
	if (ctx.cr6.eq) goto loc_82DB27B8;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// lfs f6,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f6.f64 = double(temp.f32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lfs f8,-17812(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17812);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,7616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7616);
	ctx.f9.f64 = double(temp.f32);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r21,r7,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r24,r5,8
	ctx.r24.s64 = ctx.r5.s64 + 8;
	// ori r19,r6,32846
	ctx.r19.u64 = ctx.r6.u64 | 32846;
loc_82DB2368:
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// lfs f0,300(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// lwz r9,296(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// lwz r8,288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// twllei r8,0
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// divwu r9,r10,r8
	ctx.r9.u32 = ctx.r10.u32 / ctx.r8.u32;
	// std r6,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.r6.u64);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r27,r9,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r26,r27,1
	ctx.r26.s64 = ctx.r27.s64 + 1;
	// lfd f13,-152(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// blt cr6,0x82db2524
	if (ctx.cr6.lt) goto loc_82DB2524;
	// mullw r10,r26,r7
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// mullw r9,r27,r7
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r7,-3
	ctx.r29.s64 = ctx.r7.s64 + -3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// subf r28,r4,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82DB23E4:
	// lwz r31,284(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r30,296(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// lfs f11,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfsx f4,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfsx f3,r31,r8
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f12,r30,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// fmadds f12,f3,f0,f4
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f12,f12,f5,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfsx f12,r28,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, temp.u32);
	// lwz r31,284(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r30,296(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// lfs f11,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// add r18,r31,r9
	ctx.r18.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lfs f5,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,4(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r17,r31,r8
	ctx.r17.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f3,4(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfsx f12,r30,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// fmadds f12,f3,f0,f4
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f12,f12,f5,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfs f12,-4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// lwz r31,284(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r30,296(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// lfs f11,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// add r18,r31,r9
	ctx.r18.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lfs f5,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,8(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r17,r31,r8
	ctx.r17.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f3,8(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfsx f12,r30,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// fmadds f12,f3,f0,f4
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f12,f12,f5,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r31,284(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwz r30,296(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// lfs f11,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// add r18,r31,r9
	ctx.r18.u64 = ctx.r31.u64 + ctx.r9.u64;
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// add r17,r31,r8
	ctx.r17.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lfs f5,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// lfs f4,12(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f3,12(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f4,f3,f0,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// stfsx f12,r30,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// fmadds f11,f4,f5,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82db23e4
	if (ctx.cr6.lt) goto loc_82DB23E4;
loc_82DB2524:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82db25b0
	if (!ctx.cr6.lt) goto loc_82DB25B0;
	// mullw r10,r27,r7
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// fsubs f12,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mullw r9,r26,r7
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r4,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82DB2558:
	// lwz r9,284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r31,296(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// lfs f11,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// mullw r31,r31,r7
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfsx f4,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfsx f3,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// stfsx f13,r31,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// fmadds f13,f3,f0,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f13,f13,f5,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfsx f13,r30,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82db2558
	if (ctx.cr6.lt) goto loc_82DB2558;
loc_82DB25B0:
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82db26a0
	if (!ctx.cr6.eq) goto loc_82DB26A0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82db2668
	if (ctx.cr6.lt) goto loc_82DB2668;
	// addi r31,r7,-3
	ctx.r31.s64 = ctx.r7.s64 + -3;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82DB25D0:
	// lwz r6,288(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lwz r9,284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r6,288(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r9,284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r6,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r6,288(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r9,284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r6,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r6,288(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r9,284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lfsx f0,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// blt cr6,0x82db25d0
	if (ctx.cr6.lt) goto loc_82DB25D0;
loc_82DB2668:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82db26a0
	if (!ctx.cr6.lt) goto loc_82DB26A0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB2674:
	// lwz r8,288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r9,284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// stfsx f0,r8,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// blt cr6,0x82db2674
	if (ctx.cr6.lt) goto loc_82DB2674;
loc_82DB26A0:
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// lwz r9,288(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// blt cr6,0x82db26bc
	if (ctx.cr6.lt) goto loc_82DB26BC;
	// stw r20,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r20.u32);
loc_82DB26BC:
	// lfs f13,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-156
	ctx.r11.s64 = ctx.r1.s64 + -156;
	// fsubs f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82db26e4
	if (!ctx.cr6.lt) goto loc_82DB26E4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DB26E4:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// bgt cr6,0x82db2768
	if (ctx.cr6.gt) goto loc_82DB2768;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,10000
	ctx.r12.s64 = ctx.r12.s64 + 10000;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB2720;
	case 1:
		goto loc_82DB2730;
	case 2:
		goto loc_82DB2744;
	case 3:
		goto loc_82DB2758;
	default:
		__builtin_unreachable();
	}
	// lwz r22,10016(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10016);
	// lwz r22,10032(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10032);
	// lwz r22,10052(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10052);
	// lwz r22,10072(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10072);
loc_82DB2720:
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db276c
	goto loc_82DB276C;
loc_82DB2730:
	// subfic r11,r11,16462
	ctx.xer.ca = ctx.r11.u32 <= 16462;
	ctx.r11.s64 = 16462 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db276c
	goto loc_82DB276C;
loc_82DB2744:
	// addi r11,r11,-16305
	ctx.r11.s64 = ctx.r11.s64 + -16305;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db276c
	goto loc_82DB276C;
loc_82DB2758:
	// subf r11,r11,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db276c
	goto loc_82DB276C;
loc_82DB2768:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_82DB276C:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// lfs f12,308(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,304(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// add r25,r25,r7
	ctx.r25.u64 = ctx.r25.u64 + ctx.r7.u64;
	// add r24,r21,r24
	ctx.r24.u64 = ctx.r21.u64 + ctx.r24.u64;
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// std r11,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r11.u64);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lfd f13,-144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// bne cr6,0x82db2368
	if (!ctx.cr6.eq) goto loc_82DB2368;
loc_82DB27B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB27C0"))) PPC_WEAK_FUNC(sub_82DB27C0);
PPC_FUNC_IMPL(__imp__sub_82DB27C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f30,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f30.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d8ac50
	ctx.lr = 0x82DB27F4;
	sub_82D8AC50(ctx, base);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bgt cr6,0x82db2840
	if (ctx.cr6.gt) goto loc_82DB2840;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,10260
	ctx.r12.s64 = ctx.r12.s64 + 10260;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_82DB2824;
	case 1:
		goto loc_82DB282C;
	case 2:
		goto loc_82DB2834;
	case 3:
		goto loc_82DB283C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,10276(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10276);
	// lwz r22,10284(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10284);
	// lwz r22,10292(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10292);
	// lwz r22,10300(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10300);
loc_82DB2824:
	// stfs f31,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// b 0x82db2840
	goto loc_82DB2840;
loc_82DB282C:
	// stfs f31,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// b 0x82db2840
	goto loc_82DB2840;
loc_82DB2834:
	// stfs f31,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// b 0x82db2840
	goto loc_82DB2840;
loc_82DB283C:
	// stfs f31,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
loc_82DB2840:
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82db28c4
	if (ctx.cr6.eq) goto loc_82DB28C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,6404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6404);
	ctx.f13.f64 = double(temp.f32);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bge cr6,0x82db28a4
	if (!ctx.cr6.lt) goto loc_82DB28A4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82DB28A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// beq cr6,0x82db28c4
	if (ctx.cr6.eq) goto loc_82DB28C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x82cb16f0
	ctx.lr = 0x82DB28C4;
	sub_82CB16F0(ctx, base);
loc_82DB28C4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// bl 0x82d8ac78
	ctx.lr = 0x82DB28F0;
	sub_82D8AC78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_82DB2914"))) PPC_WEAK_FUNC(sub_82DB2914);
PPC_FUNC_IMPL(__imp__sub_82DB2914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2918"))) PPC_WEAK_FUNC(sub_82DB2918);
PPC_FUNC_IMPL(__imp__sub_82DB2918) {
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
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x82db2a30
	if (ctx.cr6.gt) goto loc_82DB2A30;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,10572
	ctx.r12.s64 = ctx.r12.s64 + 10572;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82DB295C;
	case 1:
		goto loc_82DB299C;
	case 2:
		goto loc_82DB29DC;
	case 3:
		goto loc_82DB2A10;
	default:
		__builtin_unreachable();
	}
	// lwz r22,10588(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10588);
	// lwz r22,10652(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10652);
	// lwz r22,10716(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10716);
	// lwz r22,10768(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10768);
loc_82DB295C:
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r10,1916
	ctx.r4.s64 = ctx.r10.s64 + 1916;
	// lfs f0,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB2988;
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
loc_82DB299C:
	// lfs f0,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r10,1916
	ctx.r4.s64 = ctx.r10.s64 + 1916;
	// lfs f0,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB29C8;
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
loc_82DB29DC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB29FC;
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
loc_82DB2A10:
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
	ctx.lr = 0x82DB2A30;
	sub_82CB61F0(ctx, base);
loc_82DB2A30:
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

__attribute__((alias("__imp__sub_82DB2A44"))) PPC_WEAK_FUNC(sub_82DB2A44);
PPC_FUNC_IMPL(__imp__sub_82DB2A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2A48"))) PPC_WEAK_FUNC(sub_82DB2A48);
PPC_FUNC_IMPL(__imp__sub_82DB2A48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db2a58
	if (!ctx.cr6.eq) goto loc_82DB2A58;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB2A58:
	// b 0x82db20d0
	sub_82DB20D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB2A5C"))) PPC_WEAK_FUNC(sub_82DB2A5C);
PPC_FUNC_IMPL(__imp__sub_82DB2A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2A60"))) PPC_WEAK_FUNC(sub_82DB2A60);
PPC_FUNC_IMPL(__imp__sub_82DB2A60) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-24
	ctx.r31.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db2a80
	if (!ctx.cr6.eq) goto loc_82DB2A80;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82DB2A80:
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82db2ab4
	if (ctx.cr6.eq) goto loc_82DB2AB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,4576
	ctx.r5.s64 = ctx.r11.s64 + 4576;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,264
	ctx.r6.s64 = 264;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB2AAC;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
loc_82DB2AB4:
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

__attribute__((alias("__imp__sub_82DB2ACC"))) PPC_WEAK_FUNC(sub_82DB2ACC);
PPC_FUNC_IMPL(__imp__sub_82DB2ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2AD0"))) PPC_WEAK_FUNC(sub_82DB2AD0);
PPC_FUNC_IMPL(__imp__sub_82DB2AD0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db2aec
	if (!ctx.cr6.eq) goto loc_82DB2AEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB2AEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// beq cr6,0x82db2b0c
	if (ctx.cr6.eq) goto loc_82DB2B0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,292(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82cb16f0
	ctx.lr = 0x82DB2B0C;
	sub_82CB16F0(ctx, base);
loc_82DB2B0C:
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

__attribute__((alias("__imp__sub_82DB2B20"))) PPC_WEAK_FUNC(sub_82DB2B20);
PPC_FUNC_IMPL(__imp__sub_82DB2B20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db2b30
	if (!ctx.cr6.eq) goto loc_82DB2B30;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB2B30:
	// b 0x82db2300
	sub_82DB2300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB2B34"))) PPC_WEAK_FUNC(sub_82DB2B34);
PPC_FUNC_IMPL(__imp__sub_82DB2B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2B38"))) PPC_WEAK_FUNC(sub_82DB2B38);
PPC_FUNC_IMPL(__imp__sub_82DB2B38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db2b48
	if (!ctx.cr6.eq) goto loc_82DB2B48;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB2B48:
	// b 0x82db27c0
	sub_82DB27C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB2B4C"))) PPC_WEAK_FUNC(sub_82DB2B4C);
PPC_FUNC_IMPL(__imp__sub_82DB2B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2B50"))) PPC_WEAK_FUNC(sub_82DB2B50);
PPC_FUNC_IMPL(__imp__sub_82DB2B50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db2b60
	if (!ctx.cr6.eq) goto loc_82DB2B60;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB2B60:
	// b 0x82db2918
	sub_82DB2918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB2B64"))) PPC_WEAK_FUNC(sub_82DB2B64);
PPC_FUNC_IMPL(__imp__sub_82DB2B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2B68"))) PPC_WEAK_FUNC(sub_82DB2B68);
PPC_FUNC_IMPL(__imp__sub_82DB2B68) {
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
	// addi r31,r11,25880
	ctx.r31.s64 = ctx.r11.s64 + 25880;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB2B90;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4644
	ctx.r4.s64 = ctx.r11.s64 + 4644;
	// bl 0x82da4448
	ctx.lr = 0x82DB2BA0;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r4,10824
	ctx.r10.s64 = ctx.r4.s64 + 10824;
	// addi r11,r11,25688
	ctx.r11.s64 = ctx.r11.s64 + 25688;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r5,10848
	ctx.r10.s64 = ctx.r5.s64 + 10848;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r10,r6,10960
	ctx.r10.s64 = ctx.r6.s64 + 10960;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,11040
	ctx.r10.s64 = ctx.r7.s64 + 11040;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,11064
	ctx.r11.s64 = ctx.r8.s64 + 11064;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,11088
	ctx.r11.s64 = ctx.r9.s64 + 11088;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,33084
	ctx.r11.u64 = ctx.r11.u64 | 33084;
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

__attribute__((alias("__imp__sub_82DB2C3C"))) PPC_WEAK_FUNC(sub_82DB2C3C);
PPC_FUNC_IMPL(__imp__sub_82DB2C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2C40"))) PPC_WEAK_FUNC(sub_82DB2C40);
PPC_FUNC_IMPL(__imp__sub_82DB2C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB2C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r29,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82db2cb4
	if (!ctx.cr6.gt) goto loc_82DB2CB4;
loc_82DB2C74:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB2C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db2cb8
	if (!ctx.cr6.eq) goto loc_82DB2CB8;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db2c74
	if (ctx.cr6.lt) goto loc_82DB2C74;
loc_82DB2CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB2CB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB2CC0"))) PPC_WEAK_FUNC(sub_82DB2CC0);
PPC_FUNC_IMPL(__imp__sub_82DB2CC0) {
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
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82db2d08
	if (ctx.cr6.eq) goto loc_82DB2D08;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5112
	ctx.r5.s64 = ctx.r11.s64 + 5112;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,150
	ctx.r6.s64 = 150;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB2D00;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82DB2D08:
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

__attribute__((alias("__imp__sub_82DB2D20"))) PPC_WEAK_FUNC(sub_82DB2D20);
PPC_FUNC_IMPL(__imp__sub_82DB2D20) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// stw r10,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82db2d50
	if (ctx.cr6.eq) goto loc_82DB2D50;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,296(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// bl 0x82cb16f0
	ctx.lr = 0x82DB2D50;
	sub_82CB16F0(ctx, base);
loc_82DB2D50:
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

__attribute__((alias("__imp__sub_82DB2D64"))) PPC_WEAK_FUNC(sub_82DB2D64);
PPC_FUNC_IMPL(__imp__sub_82DB2D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2D68"))) PPC_WEAK_FUNC(sub_82DB2D68);
PPC_FUNC_IMPL(__imp__sub_82DB2D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82DB2D70;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82db3520
	if (ctx.cr6.eq) goto loc_82DB3520;
	// lwz r5,316(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// lfs f0,276(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f12,272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bgt cr6,0x82db3510
	if (ctx.cr6.gt) goto loc_82DB3510;
	// lwz r5,288(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82db3510
	if (ctx.cr6.eq) goto loc_82DB3510;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82db2ed8
	if (!ctx.cr6.eq) goto loc_82DB2ED8;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82db3520
	if (ctx.cr6.eq) goto loc_82DB3520;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r22,0
	ctx.r22.s64 = 0;
	// lvx128 v10,r0,r8
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lvx128 v9,r0,r8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v8,r0,r8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DB2E10:
	// lwz r7,300(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,304(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// lwz r5,288(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r7,r3
	ctx.r31.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82db2e38
	if (!ctx.cr6.gt) goto loc_82DB2E38;
	// subf r4,r7,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r7.s64;
loc_82DB2E38:
	// rlwinm r7,r4,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82db2ea8
	if (ctx.cr6.eq) goto loc_82DB2EA8;
loc_82DB2E44:
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// vupkhsh v11,v0
	_mm_store_si128((__m128i*)ctx.v11.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v0.s16))));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsh v7,v0
	_mm_store_si128((__m128i*)ctx.v7.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v0.s16)));
	// lvx128 v12,r11,r29
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// vcfsx v0,v11,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v11.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcfsx v11,v7,15
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v7.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vmaddfp v7,v0,v8,v13
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v6,v11,v8,v12
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v11,v11,v9
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// vctsxs v7,v7,15
	_mm_store_si128((__m128i*)ctx.v7.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_set1_ps(32768))));
	// vctsxs v6,v6,15
	_mm_store_si128((__m128i*)ctx.v6.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_set1_ps(32768))));
	// vmaddfp v0,v13,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v12,v10,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vpkswss v12,v7,v6
	ctx.v12.v8hi = vec_pack_saturate(ctx.v7.v4si, ctx.v6.v4si);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne cr6,0x82db2e44
	if (!ctx.cr6.eq) goto loc_82DB2E44;
loc_82DB2EA8:
	// lwz r8,300(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// lwz r7,304(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// stw r8,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r8.u32);
	// blt cr6,0x82db2ec4
	if (ctx.cr6.lt) goto loc_82DB2EC4;
	// stw r22,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r22.u32);
loc_82DB2EC4:
	// subf r3,r4,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r4.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82db2e10
	if (!ctx.cr6.eq) goto loc_82DB2E10;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82DB2ED8:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82db2fd4
	if (!ctx.cr6.eq) goto loc_82DB2FD4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82db3520
	if (ctx.cr6.eq) goto loc_82DB3520;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r22,0
	ctx.r22.s64 = 0;
	// lvx128 v10,r0,r8
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lvx128 v9,r0,r8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v8,r0,r8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DB2F0C:
	// lwz r7,300(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,304(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// lwz r5,288(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r7,r3
	ctx.r31.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82db2f34
	if (!ctx.cr6.gt) goto loc_82DB2F34;
	// subf r4,r7,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r7.s64;
loc_82DB2F34:
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82db2fa4
	if (ctx.cr6.eq) goto loc_82DB2FA4;
loc_82DB2F40:
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// vupkhsh v11,v0
	_mm_store_si128((__m128i*)ctx.v11.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v0.s16))));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsh v7,v0
	_mm_store_si128((__m128i*)ctx.v7.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v0.s16)));
	// lvx128 v12,r11,r29
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// vcfsx v0,v11,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v11.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcfsx v11,v7,15
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v7.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vmaddfp v7,v0,v8,v13
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v6,v11,v8,v12
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v11,v11,v9
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// vctsxs v7,v7,15
	_mm_store_si128((__m128i*)ctx.v7.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_set1_ps(32768))));
	// vctsxs v6,v6,15
	_mm_store_si128((__m128i*)ctx.v6.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_set1_ps(32768))));
	// vmaddfp v0,v13,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v12,v10,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vpkswss v12,v7,v6
	ctx.v12.v8hi = vec_pack_saturate(ctx.v7.v4si, ctx.v6.v4si);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne cr6,0x82db2f40
	if (!ctx.cr6.eq) goto loc_82DB2F40;
loc_82DB2FA4:
	// lwz r8,300(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// lwz r7,304(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// stw r8,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r8.u32);
	// blt cr6,0x82db2fc0
	if (ctx.cr6.lt) goto loc_82DB2FC0;
	// stw r22,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r22.u32);
loc_82DB2FC0:
	// subf r3,r4,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r4.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82db2f0c
	if (!ctx.cr6.eq) goto loc_82DB2F0C;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82DB2FD4:
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x82db3190
	if (!ctx.cr6.eq) goto loc_82DB3190;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82db3520
	if (ctx.cr6.eq) goto loc_82DB3520;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r30,32
	ctx.r30.s64 = 32;
	// li r31,48
	ctx.r31.s64 = 48;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r3,64
	ctx.r3.s64 = 64;
	// li r4,80
	ctx.r4.s64 = 80;
	// lvx128 v13,r0,r8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r0,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DB3018:
	// lwz r8,300(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r7,304(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,288(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// add r26,r27,r8
	ctx.r26.u64 = ctx.r27.u64 + ctx.r8.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r7.u32, ctx.xer);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// ble cr6,0x82db3048
	if (!ctx.cr6.gt) goto loc_82DB3048;
	// subf r28,r8,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r8.s64;
loc_82DB3048:
	// rlwinm r7,r28,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82db315c
	if (ctx.cr6.eq) goto loc_82DB315C;
	// addi r8,r6,32
	ctx.r8.s64 = ctx.r6.s64 + 32;
loc_82DB3058:
	// lvx128 v11,r0,r8
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r8,-32
	ctx.r6.s64 = ctx.r8.s64 + -32;
	// vupkhsh v2,v11
	_mm_store_si128((__m128i*)ctx.v2.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16))));
	// addi r5,r8,-16
	ctx.r5.s64 = ctx.r8.s64 + -16;
	// vupklsh v1,v11
	_mm_store_si128((__m128i*)ctx.v1.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v11.s16)));
	// lvx128 v10,r0,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r29
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lvx128 v6,r11,r3
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r0,r6
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfsx v11,v2,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v2.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcfsx v2,v1,15
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v1.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsh v31,v4
	_mm_store_si128((__m128i*)ctx.v31.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v4.s16)));
	// vupkhsh v1,v4
	_mm_store_si128((__m128i*)ctx.v1.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v4.s16))));
	// lvx128 v3,r0,r5
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsh v30,v3
	_mm_store_si128((__m128i*)ctx.v30.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v3.s16))));
	// lvx128 v8,r11,r30
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsh v29,v3
	_mm_store_si128((__m128i*)ctx.v29.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v3.s16)));
	// lvx128 v7,r11,r31
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfsx v3,v31,15
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v31.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v5,r11,r4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfsx v4,v1,15
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v1.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// vcfsx v1,v30,15
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v30.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// vcfsx v31,v29,15
	_mm_store_ps(ctx.v31.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v29.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vmulfp128 v29,v3,v13
	_mm_store_ps(ctx.v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v30,v4,v13
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v28,v1,v13
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v27,v31,v13
	_mm_store_ps(ctx.v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v29,v9,v0,v29
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v29.f32)));
	// vmaddfp v30,v10,v0,v30
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v28,v8,v0,v28
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v27,v7,v0,v27
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v27.f32)));
	// vmaddfp v9,v3,v12,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v4,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v7,v31,v12,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v8,v1,v12,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v29,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v29,v11,v12,v6
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v6.f32)));
	// stvx128 v30,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v30,v2,v12,v5
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v11,v11,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v28,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v2,v2,v13
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v27,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vctsxs v9,v9,15
	_mm_store_si128((__m128i*)ctx.v9.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_set1_ps(32768))));
	// vctsxs v10,v10,15
	_mm_store_si128((__m128i*)ctx.v10.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_set1_ps(32768))));
	// vctsxs v7,v7,15
	_mm_store_si128((__m128i*)ctx.v7.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_set1_ps(32768))));
	// vctsxs v8,v8,15
	_mm_store_si128((__m128i*)ctx.v8.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_set1_ps(32768))));
	// vctsxs v3,v29,15
	_mm_store_si128((__m128i*)ctx.v3.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_set1_ps(32768))));
	// vctsxs v4,v30,15
	_mm_store_si128((__m128i*)ctx.v4.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_set1_ps(32768))));
	// vmaddfp v11,v6,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v5,v5,v0,v2
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v2.f32)));
	// vpkswss v10,v10,v9
	ctx.v10.v8hi = vec_pack_saturate(ctx.v10.v4si, ctx.v9.v4si);
	// vpkswss v9,v8,v7
	ctx.v9.v8hi = vec_pack_saturate(ctx.v8.v4si, ctx.v7.v4si);
	// vpkswss v6,v3,v4
	ctx.v6.v8hi = vec_pack_saturate(ctx.v3.v4si, ctx.v4.v4si);
	// stvx128 v11,r10,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v5,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// stvx128 v10,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// bne cr6,0x82db3058
	if (!ctx.cr6.eq) goto loc_82DB3058;
loc_82DB315C:
	// lwz r8,300(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// lwz r7,304(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// stw r8,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r8.u32);
	// blt cr6,0x82db3178
	if (ctx.cr6.lt) goto loc_82DB3178;
	// stw r22,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r22.u32);
loc_82DB3178:
	// subf r27,r28,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r28.s64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82db3018
	if (!ctx.cr6.eq) goto loc_82DB3018;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82DB3190:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82db3520
	if (ctx.cr6.eq) goto loc_82DB3520;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r22,0
	ctx.r22.s64 = 0;
	// lfs f9,-16484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -16484);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-18116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18116);
	ctx.f12.f64 = double(temp.f32);
loc_82DB31C4:
	// lwz r11,300(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// lwz r10,304(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// mullw r8,r11,r7
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r6,288(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r23,r11
	ctx.r5.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r28,r8,r6
	ctx.r28.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82db31f0
	if (!ctx.cr6.gt) goto loc_82DB31F0;
	// subf r24,r11,r10
	ctx.r24.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82DB31F0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82db34dc
	if (ctx.cr6.eq) goto loc_82DB34DC;
	// rlwinm r26,r7,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r7,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82DB3204:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82db341c
	if (ctx.cr6.lt) goto loc_82DB341C;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r6,r4,12
	ctx.r6.s64 = ctx.r4.s64 + 12;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// subf r30,r29,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r29.s64;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB3230:
	// lhz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// lfs f8,280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lfs f7,276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmadds f8,f7,f0,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f8,-4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f8,272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82db327c
	if (!ctx.cr6.gt) goto loc_82DB327C;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82db32a0
	goto loc_82DB32A0;
loc_82DB327C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82db328c
	if (!ctx.cr6.lt) goto loc_82DB328C;
	// li r8,-32768
	ctx.r8.s64 = -32768;
	// b 0x82db32a0
	goto loc_82DB32A0;
loc_82DB328C:
	// fmuls f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_82DB32A0:
	// lhz r5,-2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// sth r8,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r8.u16);
	// lfs f8,280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lfsx f0,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmadds f8,f7,f0,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f8,272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82db32f0
	if (!ctx.cr6.gt) goto loc_82DB32F0;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82db3314
	goto loc_82DB3314;
loc_82DB32F0:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82db3300
	if (!ctx.cr6.lt) goto loc_82DB3300;
	// li r8,-32768
	ctx.r8.s64 = -32768;
	// b 0x82db3314
	goto loc_82DB3314;
loc_82DB3300:
	// fmuls f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_82DB3314:
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r8,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lfs f8,280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lfs f0,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmadds f8,f7,f0,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f8,272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82db3364
	if (!ctx.cr6.gt) goto loc_82DB3364;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82db3388
	goto loc_82DB3388;
loc_82DB3364:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82db3374
	if (!ctx.cr6.lt) goto loc_82DB3374;
	// li r8,-32768
	ctx.r8.s64 = -32768;
	// b 0x82db3388
	goto loc_82DB3388;
loc_82DB3374:
	// fmuls f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_82DB3388:
	// lhz r21,2(r11)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lfs f8,280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// extsh r21,r21
	ctx.r21.s64 = ctx.r21.s16;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// std r21,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r21.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmadds f8,f7,f0,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f8,272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82db33dc
	if (!ctx.cr6.gt) goto loc_82DB33DC;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82db3400
	goto loc_82DB3400;
loc_82DB33DC:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82db33ec
	if (!ctx.cr6.lt) goto loc_82DB33EC;
	// li r8,-32768
	ctx.r8.s64 = -32768;
	// b 0x82db3400
	goto loc_82DB3400;
loc_82DB33EC:
	// fmuls f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_82DB3400:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// sth r8,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r8.u16);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82db3230
	if (!ctx.cr6.eq) goto loc_82DB3230;
loc_82DB341C:
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82db34c4
	if (!ctx.cr6.lt) goto loc_82DB34C4;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r5,r29,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r29.s64;
	// subf r6,r31,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r31.s64;
loc_82DB343C:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lfs f8,280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f0,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lfs f7,276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmadds f8,f7,f0,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f8,272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82db3488
	if (!ctx.cr6.gt) goto loc_82DB3488;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82db34ac
	goto loc_82DB34AC;
loc_82DB3488:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82db3498
	if (!ctx.cr6.lt) goto loc_82DB3498;
	// li r8,-32768
	ctx.r8.s64 = -32768;
	// b 0x82db34ac
	goto loc_82DB34AC;
loc_82DB3498:
	// fmuls f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_82DB34AC:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82db343c
	if (!ctx.cr6.eq) goto loc_82DB343C;
loc_82DB34C4:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// add r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 + ctx.r4.u64;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82db3204
	if (!ctx.cr6.eq) goto loc_82DB3204;
loc_82DB34DC:
	// lwz r11,300(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// lwz r10,304(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r11.u32);
	// blt cr6,0x82db34f8
	if (ctx.cr6.lt) goto loc_82DB34F8;
	// stw r22,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r22.u32);
loc_82DB34F8:
	// subf r23,r24,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r24.s64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82db31c4
	if (!ctx.cr6.eq) goto loc_82DB31C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82DB3510:
	// mullw r11,r6,r8
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82DB3520;
	sub_82CB1160(ctx, base);
loc_82DB3520:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB352C"))) PPC_WEAK_FUNC(sub_82DB352C);
PPC_FUNC_IMPL(__imp__sub_82DB352C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB3530"))) PPC_WEAK_FUNC(sub_82DB3530);
PPC_FUNC_IMPL(__imp__sub_82DB3530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DB3538;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,312
	ctx.r29.s64 = ctx.r31.s64 + 312;
	// addi r28,r31,316
	ctx.r28.s64 = ctx.r31.s64 + 316;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f30,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f30.f64 = double(temp.f32);
	// lwz r27,316(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// beq cr6,0x82db3574
	if (ctx.cr6.eq) goto loc_82DB3574;
	// lwz r10,1244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1244);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_82DB3574:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82db3584
	if (ctx.cr6.eq) goto loc_82DB3584;
	// lwz r11,1256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82DB3584:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d8ac50
	ctx.lr = 0x82DB358C;
	sub_82D8AC50(ctx, base);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bgt cr6,0x82db3600
	if (ctx.cr6.gt) goto loc_82DB3600;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,13740
	ctx.r12.s64 = ctx.r12.s64 + 13740;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_82DB35C0;
	case 1:
		goto loc_82DB35C8;
	case 2:
		goto loc_82DB35D0;
	case 3:
		goto loc_82DB35F4;
	case 4:
		goto loc_82DB35FC;
	default:
		__builtin_unreachable();
	}
	// lwz r22,13760(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13760);
	// lwz r22,13768(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13768);
	// lwz r22,13776(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13776);
	// lwz r22,13812(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13812);
	// lwz r22,13820(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13820);
loc_82DB35C0:
	// stfs f31,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// b 0x82db3600
	goto loc_82DB3600;
loc_82DB35C8:
	// stfs f31,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// b 0x82db3600
	goto loc_82DB3600;
loc_82DB35D0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// beq cr6,0x82db3600
	if (ctx.cr6.eq) goto loc_82DB3600;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82db3600
	goto loc_82DB3600;
loc_82DB35F4:
	// stfs f31,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// b 0x82db3600
	goto loc_82DB3600;
loc_82DB35FC:
	// stfs f31,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
loc_82DB3600:
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82db3624
	if (!ctx.cr6.eq) goto loc_82DB3624;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82db3624
	if (!ctx.cr6.eq) goto loc_82DB3624;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82db3704
	if (!ctx.cr6.eq) goto loc_82DB3704;
loc_82DB3624:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,4194
	ctx.r9.s64 = 274857984;
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ori r9,r9,19923
	ctx.r9.u64 = ctx.r9.u64 | 19923;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lis r29,-31909
	ctx.r29.s64 = -2091188224;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,5112
	ctx.r30.s64 = ctx.r11.s64 + 5112;
	// beq cr6,0x82db369c
	if (ctx.cr6.eq) goto loc_82DB369C;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,733
	ctx.r6.s64 = 733;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB369C;
	sub_82D861B0(ctx, base);
loc_82DB369C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r6,747
	ctx.r6.s64 = 747;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r4.u32);
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DB36C8;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// bne cr6,0x82db36f0
	if (!ctx.cr6.eq) goto loc_82DB36F0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d8ac78
	ctx.lr = 0x82DB36DC;
	sub_82D8AC78(ctx, base);
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB36F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,296(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82DB3704;
	sub_82CB16F0(ctx, base);
loc_82DB3704:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d8ac78
	ctx.lr = 0x82DB370C;
	sub_82D8AC78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB3720"))) PPC_WEAK_FUNC(sub_82DB3720);
PPC_FUNC_IMPL(__imp__sub_82DB3720) {
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
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x82db3888
	if (ctx.cr6.gt) goto loc_82DB3888;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,14164
	ctx.r12.s64 = ctx.r12.s64 + 14164;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82DB3768;
	case 1:
		goto loc_82DB379C;
	case 2:
		goto loc_82DB37DC;
	case 3:
		goto loc_82DB381C;
	case 4:
		goto loc_82DB385C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,14184(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14184);
	// lwz r22,14236(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14236);
	// lwz r22,14300(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14300);
	// lwz r22,14364(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14364);
	// lwz r22,14428(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14428);
loc_82DB3768:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB3788;
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
loc_82DB379C:
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r10,1916
	ctx.r4.s64 = ctx.r10.s64 + 1916;
	// lfs f0,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB37C8;
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
loc_82DB37DC:
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lwz r9,284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// addi r4,r10,24704
	ctx.r4.s64 = ctx.r10.s64 + 24704;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
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
	// lwz r5,284(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB3808;
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
loc_82DB381C:
	// lfs f0,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r10,1916
	ctx.r4.s64 = ctx.r10.s64 + 1916;
	// lfs f0,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB3848;
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
loc_82DB385C:
	// lfs f0,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r10,1916
	ctx.r4.s64 = ctx.r10.s64 + 1916;
	// lfs f0,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB3888;
	sub_82CB61F0(ctx, base);
loc_82DB3888:
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

__attribute__((alias("__imp__sub_82DB389C"))) PPC_WEAK_FUNC(sub_82DB389C);
PPC_FUNC_IMPL(__imp__sub_82DB389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB38A0"))) PPC_WEAK_FUNC(sub_82DB38A0);
PPC_FUNC_IMPL(__imp__sub_82DB38A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db38b0
	if (!ctx.cr6.eq) goto loc_82DB38B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB38B0:
	// b 0x82db2c40
	sub_82DB2C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB38B4"))) PPC_WEAK_FUNC(sub_82DB38B4);
PPC_FUNC_IMPL(__imp__sub_82DB38B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB38B8"))) PPC_WEAK_FUNC(sub_82DB38B8);
PPC_FUNC_IMPL(__imp__sub_82DB38B8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-24
	ctx.r31.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db38d8
	if (!ctx.cr6.eq) goto loc_82DB38D8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82DB38D8:
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82db390c
	if (ctx.cr6.eq) goto loc_82DB390C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5112
	ctx.r5.s64 = ctx.r11.s64 + 5112;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,150
	ctx.r6.s64 = 150;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DB3904;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82DB390C:
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

__attribute__((alias("__imp__sub_82DB3924"))) PPC_WEAK_FUNC(sub_82DB3924);
PPC_FUNC_IMPL(__imp__sub_82DB3924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB3928"))) PPC_WEAK_FUNC(sub_82DB3928);
PPC_FUNC_IMPL(__imp__sub_82DB3928) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db3944
	if (!ctx.cr6.eq) goto loc_82DB3944;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB3944:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r10.u32);
	// beq cr6,0x82db3964
	if (ctx.cr6.eq) goto loc_82DB3964;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,296(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// bl 0x82cb16f0
	ctx.lr = 0x82DB3964;
	sub_82CB16F0(ctx, base);
loc_82DB3964:
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

__attribute__((alias("__imp__sub_82DB3978"))) PPC_WEAK_FUNC(sub_82DB3978);
PPC_FUNC_IMPL(__imp__sub_82DB3978) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db3988
	if (!ctx.cr6.eq) goto loc_82DB3988;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB3988:
	// b 0x82db2d68
	sub_82DB2D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB398C"))) PPC_WEAK_FUNC(sub_82DB398C);
PPC_FUNC_IMPL(__imp__sub_82DB398C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB3990"))) PPC_WEAK_FUNC(sub_82DB3990);
PPC_FUNC_IMPL(__imp__sub_82DB3990) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db39a0
	if (!ctx.cr6.eq) goto loc_82DB39A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB39A0:
	// b 0x82db3530
	sub_82DB3530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB39A4"))) PPC_WEAK_FUNC(sub_82DB39A4);
PPC_FUNC_IMPL(__imp__sub_82DB39A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB39A8"))) PPC_WEAK_FUNC(sub_82DB39A8);
PPC_FUNC_IMPL(__imp__sub_82DB39A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db39b8
	if (!ctx.cr6.eq) goto loc_82DB39B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB39B8:
	// b 0x82db3720
	sub_82DB3720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB39BC"))) PPC_WEAK_FUNC(sub_82DB39BC);
PPC_FUNC_IMPL(__imp__sub_82DB39BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB39C0"))) PPC_WEAK_FUNC(sub_82DB39C0);
PPC_FUNC_IMPL(__imp__sub_82DB39C0) {
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
	// addi r31,r11,26256
	ctx.r31.s64 = ctx.r11.s64 + 26256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB39E8;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5184
	ctx.r4.s64 = ctx.r11.s64 + 5184;
	// bl 0x82da4448
	ctx.lr = 0x82DB39F8;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r4,14496
	ctx.r10.s64 = ctx.r4.s64 + 14496;
	// addi r11,r11,26016
	ctx.r11.s64 = ctx.r11.s64 + 26016;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r5,14520
	ctx.r10.s64 = ctx.r5.s64 + 14520;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r10,r6,14632
	ctx.r10.s64 = ctx.r6.s64 + 14632;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,14712
	ctx.r10.s64 = ctx.r7.s64 + 14712;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,14736
	ctx.r11.s64 = ctx.r8.s64 + 14736;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,14760
	ctx.r11.s64 = ctx.r9.s64 + 14760;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,320
	ctx.r11.s64 = 320;
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

__attribute__((alias("__imp__sub_82DB3A90"))) PPC_WEAK_FUNC(sub_82DB3A90);
PPC_FUNC_IMPL(__imp__sub_82DB3A90) {
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
loc_82DB3AA0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82db3aa0
	if (!ctx.cr6.eq) goto loc_82DB3AA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB3AC8"))) PPC_WEAK_FUNC(sub_82DB3AC8);
PPC_FUNC_IMPL(__imp__sub_82DB3AC8) {
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
	// bl 0x82cb6ae8
	ctx.lr = 0x82DB3ADC;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,-18292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18292);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lwz r11,1244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1244);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4940
	ctx.lr = 0x82DB3B1C;
	sub_82CB4940(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f30,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f29,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f29.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// bl 0x82cb4940
	ctx.lr = 0x82DB3B48;
	sub_82CB4940(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// bl 0x82cb4940
	ctx.lr = 0x82DB3B64;
	sub_82CB4940(ctx, base);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82DB3B8C;
	sub_82CB4860(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f28.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// bl 0x82cb4940
	ctx.lr = 0x82DB3BA8;
	sub_82CB4940(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82DB3BC8;
	sub_82CB4860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fdivs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f28.f64));
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b34
	ctx.lr = 0x82DB3BE8;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB3BF8"))) PPC_WEAK_FUNC(sub_82DB3BF8);
PPC_FUNC_IMPL(__imp__sub_82DB3BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82DB3C00;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6ae0
	ctx.lr = 0x82DB3C08;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82db4630
	if (ctx.cr6.eq) goto loc_82DB4630;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82db3c50
	if (!ctx.cr6.eq) goto loc_82DB3C50;
	// lfs f0,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82db3ca8
	if (ctx.cr6.eq) goto loc_82DB3CA8;
loc_82DB3C50:
	// lfs f2,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,276(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// fsubs f30,f0,f2
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// stfs f2,268(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// bl 0x82db3ac8
	ctx.lr = 0x82DB3C6C;
	sub_82DB3AC8(ctx, base);
	// fabs f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8044);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82db3ca8
	if (ctx.cr6.lt) goto loc_82DB3CA8;
	// addi r11,r31,284
	ctx.r11.s64 = ctx.r31.s64 + 284;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82DB3C88:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f31,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,192(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f31,128(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82db3c88
	if (!ctx.cr6.eq) goto loc_82DB3C88;
loc_82DB3CA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82db3ce4
	if (!ctx.cr6.lt) goto loc_82DB3CE4;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82DB3CD0;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b2c
	ctx.lr = 0x82DB3CE0;
	__restfpr_26(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82DB3CE4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,5328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5328);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82db3d48
	if (!ctx.cr6.eq) goto loc_82DB3D48;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB3D08;
	sub_82CB16F0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82db4630
	if (!ctx.cr6.gt) goto loc_82DB4630;
	// addi r11,r31,284
	ctx.r11.s64 = ctx.r31.s64 + 284;
loc_82DB3D14:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stfs f31,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,192(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stfs f31,128(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82db3d14
	if (!ctx.cr6.eq) goto loc_82DB3D14;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b2c
	ctx.lr = 0x82DB3D44;
	__restfpr_26(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82DB3D48:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82db3fb8
	if (!ctx.cr6.eq) goto loc_82DB3FB8;
	// lis r6,-31909
	ctx.r6.s64 = -2091188224;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// lfs f0,26624(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 26624);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82db3f18
	if (ctx.cr6.lt) goto loc_82DB3F18;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r10,r27,12
	ctx.r10.s64 = ctx.r27.s64 + 12;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r30,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r30.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB3D80:
	// lfs f10,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfs f9,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f12,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f9,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,348(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f8,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f12,284(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f11,476(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// fmadds f13,f12,f8,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fnmsubs f13,f11,f7,f13
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f7.f64 - ctx.f13.f64)));
	// fnmsubs f13,f5,f6,f13
	ctx.f13.f64 = double(float(-(ctx.f5.f64 * ctx.f6.f64 - ctx.f13.f64)));
	// fdivs f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// stfs f13,412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f10,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfsx f12,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f9,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,348(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lfs f8,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f12,284(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f11,476(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// fmadds f13,f12,f8,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fnmsubs f13,f11,f7,f13
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f7.f64 - ctx.f13.f64)));
	// fnmsubs f13,f5,f6,f13
	ctx.f13.f64 = double(float(-(ctx.f5.f64 * ctx.f6.f64 - ctx.f13.f64)));
	// fdivs f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// stfs f13,412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f9,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f8,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f6.f64 = double(temp.f32);
	// stfs f13,348(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stfs f12,284(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fmadds f10,f13,f9,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfs f9,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,476(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// fmadds f10,f12,f8,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fnmsubs f10,f11,f7,f10
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f7.f64 - ctx.f10.f64)));
	// fnmsubs f10,f6,f9,f10
	ctx.f10.f64 = double(float(-(ctx.f6.f64 * ctx.f9.f64 - ctx.f10.f64)));
	// lfs f9,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f13,412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f10,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f9,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,348(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lfs f8,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f4.f64 = double(temp.f32);
	// stfs f12,284(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f11,476(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// fmadds f13,f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f13,f12,f8,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fnmsubs f13,f11,f7,f13
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f7.f64 - ctx.f13.f64)));
	// fnmsubs f13,f5,f6,f13
	ctx.f13.f64 = double(float(-(ctx.f5.f64 * ctx.f6.f64 - ctx.f13.f64)));
	// fdivs f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// stfs f13,412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82db3d80
	if (!ctx.cr6.eq) goto loc_82DB3D80;
	// stfs f0,26624(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 26624, temp.u32);
loc_82DB3F18:
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82db4630
	if (!ctx.cr6.lt) goto loc_82DB4630;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r10,r7,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r7.s64;
loc_82DB3F30:
	// lfs f10,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f9,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfsx f12,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f9,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,348(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f8,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f12,284(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f11,476(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// fmadds f13,f12,f8,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fnmsubs f13,f11,f7,f13
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f7.f64 - ctx.f13.f64)));
	// fnmsubs f13,f5,f6,f13
	ctx.f13.f64 = double(float(-(ctx.f5.f64 * ctx.f6.f64 - ctx.f13.f64)));
	// fdivs f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// stfs f13,412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82db3f30
	if (!ctx.cr6.eq) goto loc_82DB3F30;
	// stfs f0,26624(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 26624, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b2c
	ctx.lr = 0x82DB3FB4;
	__restfpr_26(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82DB3FB8:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82db43a4
	if (!ctx.cr6.eq) goto loc_82DB43A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-31909
	ctx.r6.s64 = -2091188224;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,26624(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 26624);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82db42b0
	if (ctx.cr6.lt) goto loc_82DB42B0;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r10,r27,12
	ctx.r10.s64 = ctx.r27.s64 + 12;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r7,r30,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r30.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB3FF8:
	// lfsx f10,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f12,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f31.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f11.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f8,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f11,f31
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f7,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f6.f64 = double(temp.f32);
	// lfs f30,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f30.f64 = double(temp.f32);
	// stfs f12,284(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f5,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f27,f8,f10
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f3,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f4.f64 = double(temp.f32);
	// lfs f29,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f8,f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f31.f64));
	// lfs f28,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f28.f64 = double(temp.f32);
	// lfs f2,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f1.f64 = double(temp.f32);
	// fdivs f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// stfs f6,348(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stfs f10,288(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f5,476(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f7,352(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// fmadds f31,f9,f7,f27
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f27.f64));
	// stfs f3,480(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// fmadds f12,f6,f9,f8
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmadds f11,f11,f30,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fnmsubs f12,f5,f4,f12
	ctx.f12.f64 = double(float(-(ctx.f5.f64 * ctx.f4.f64 - ctx.f12.f64)));
	// fnmsubs f11,f4,f3,f11
	ctx.f11.f64 = double(float(-(ctx.f4.f64 * ctx.f3.f64 - ctx.f11.f64)));
	// fnmsubs f12,f2,f29,f12
	ctx.f12.f64 = double(float(-(ctx.f2.f64 * ctx.f29.f64 - ctx.f12.f64)));
	// fnmsubs f11,f2,f28,f11
	ctx.f11.f64 = double(float(-(ctx.f2.f64 * ctx.f28.f64 - ctx.f11.f64)));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f12,412(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f11,416(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f11,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f9.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f31,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f31.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f9,f31
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f6,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f7.f64 = double(temp.f32);
	// stfs f11,284(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f29,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f29.f64 = double(temp.f32);
	// lfs f4,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f30,f12,f10
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f5,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f12,f12,f11,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f31.f64));
	// lfs f28,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f28.f64 = double(temp.f32);
	// lfs f8,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f8.f64 = double(temp.f32);
	// lfs f27,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f27.f64 = double(temp.f32);
	// fdivs f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// stfs f6,348(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stfs f10,288(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f4,476(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f2,352(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// fmadds f11,f7,f2,f30
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f30.f64));
	// stfs f1,480(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// fmadds f12,f6,f7,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f11,f9,f29,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f11.f64));
	// fnmsubs f12,f4,f5,f12
	ctx.f12.f64 = double(float(-(ctx.f4.f64 * ctx.f5.f64 - ctx.f12.f64)));
	// fnmsubs f11,f5,f1,f11
	ctx.f11.f64 = double(float(-(ctx.f5.f64 * ctx.f1.f64 - ctx.f11.f64)));
	// fnmsubs f12,f3,f28,f12
	ctx.f12.f64 = double(float(-(ctx.f3.f64 * ctx.f28.f64 - ctx.f12.f64)));
	// fnmsubs f11,f3,f27,f11
	ctx.f11.f64 = double(float(-(ctx.f3.f64 * ctx.f27.f64 - ctx.f11.f64)));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f12,412(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f11,416(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f31.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f12,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f10,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f10.f64 = double(temp.f32);
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f8,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f6,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f4.f64 = double(temp.f32);
	// stfs f11,284(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f5,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f5.f64 = double(temp.f32);
	// lfs f30,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f31,f10,f11,f31
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f31.f64));
	// lfs f2,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f2.f64 = double(temp.f32);
	// lfs f29,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f3,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// stfs f8,348(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stfs f1,288(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f6,476(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f2,480(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// fmadds f31,f8,f9,f31
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f31.f64));
	// fmadds f11,f9,f4,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fnmsubs f31,f6,f7,f31
	ctx.f31.f64 = double(float(-(ctx.f6.f64 * ctx.f7.f64 - ctx.f31.f64)));
	// fnmsubs f31,f5,f30,f31
	ctx.f31.f64 = double(float(-(ctx.f5.f64 * ctx.f30.f64 - ctx.f31.f64)));
	// lfs f30,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f12,f12,f30,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f11.f64));
	// stfs f4,352(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// fmuls f31,f31,f3
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f3.f64));
	// stfs f31,412(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// fnmsubs f12,f7,f2,f12
	ctx.f12.f64 = double(float(-(ctx.f7.f64 * ctx.f2.f64 - ctx.f12.f64)));
	// fnmsubs f12,f5,f29,f12
	ctx.f12.f64 = double(float(-(ctx.f5.f64 * ctx.f29.f64 - ctx.f12.f64)));
	// fmuls f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f12,416(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f31,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f31.f64 = double(temp.f32);
	// lfs f8,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f11,f31
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f7,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f6.f64 = double(temp.f32);
	// lfs f30,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f30.f64 = double(temp.f32);
	// stfs f12,284(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f5,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f27,f8,f10
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f4,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f8,f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f31.f64));
	// lfs f1,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f29.f64 = double(temp.f32);
	// fdivs f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// lfs f28,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f28.f64 = double(temp.f32);
	// stfs f6,348(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stfs f7,352(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f10,288(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// fmadds f31,f9,f7,f27
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f27.f64));
	// fmadds f12,f6,f9,f8
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmadds f11,f11,f30,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fnmsubs f12,f4,f5,f12
	ctx.f12.f64 = double(float(-(ctx.f4.f64 * ctx.f5.f64 - ctx.f12.f64)));
	// fnmsubs f11,f5,f3,f11
	ctx.f11.f64 = double(float(-(ctx.f5.f64 * ctx.f3.f64 - ctx.f11.f64)));
	// fnmsubs f12,f2,f29,f12
	ctx.f12.f64 = double(float(-(ctx.f2.f64 * ctx.f29.f64 - ctx.f12.f64)));
	// fnmsubs f11,f2,f28,f11
	ctx.f11.f64 = double(float(-(ctx.f2.f64 * ctx.f28.f64 - ctx.f11.f64)));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f4,476(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,412(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfs f3,480(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f11,416(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne cr6,0x82db3ff8
	if (!ctx.cr6.eq) goto loc_82DB3FF8;
	// stfs f0,26624(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 26624, temp.u32);
loc_82DB42B0:
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82db4630
	if (!ctx.cr6.lt) goto loc_82DB4630;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r8,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r8.s64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r7,r30,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r30.s64;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82DB42D0:
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f7,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f8,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f26,f10,f8
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfsx f6,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f12.f64 = double(temp.f32);
	// fadds f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// lfs f30,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f30.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f9,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f31.f64 = double(temp.f32);
	// stfs f12,348(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stfs f11,284(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// fmuls f27,f7,f11
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f5,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f2.f64 = double(temp.f32);
	// lfs f29,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f28.f64 = double(temp.f32);
	// lfs f1,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f1.f64 = double(temp.f32);
	// fdivs f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// stfs f10,352(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f6,288(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f5,476(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// fmadds f12,f12,f8,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f27.f64));
	// stfs f4,480(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// fmadds f8,f31,f9,f26
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f9.f64 + ctx.f26.f64));
	// fmadds f12,f9,f30,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmadds f11,f7,f6,f8
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fnmsubs f12,f5,f3,f12
	ctx.f12.f64 = double(float(-(ctx.f5.f64 * ctx.f3.f64 - ctx.f12.f64)));
	// fnmsubs f11,f4,f3,f11
	ctx.f11.f64 = double(float(-(ctx.f4.f64 * ctx.f3.f64 - ctx.f11.f64)));
	// fnmsubs f12,f2,f29,f12
	ctx.f12.f64 = double(float(-(ctx.f2.f64 * ctx.f29.f64 - ctx.f12.f64)));
	// fnmsubs f11,f28,f2,f11
	ctx.f11.f64 = double(float(-(ctx.f28.f64 * ctx.f2.f64 - ctx.f11.f64)));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f12,412(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f11,416(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82db42d0
	if (!ctx.cr6.eq) goto loc_82DB42D0;
	// stfs f0,26624(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 26624, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b2c
	ctx.lr = 0x82DB43A0;
	__restfpr_26(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82DB43A4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82db4630
	if (ctx.cr6.eq) goto loc_82DB4630;
	// lis r25,-31909
	ctx.r25.s64 = -2091188224;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r26,r29,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r5,r27,8
	ctx.r5.s64 = ctx.r27.s64 + 8;
	// lfs f0,26624(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 26624);
	ctx.f0.f64 = double(temp.f32);
loc_82DB43C4:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82db4578
	if (ctx.cr6.lt) goto loc_82DB4578;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,284
	ctx.r11.s64 = ctx.r31.s64 + 284;
	// subf r6,r30,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r30.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB43F0:
	// lfs f12,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f10,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f8,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f11,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f4,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,192(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// fmadds f13,f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f13,f7,f8,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fnmsubs f13,f11,f6,f13
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f6.f64 - ctx.f13.f64)));
	// fnmsubs f13,f4,f5,f13
	ctx.f13.f64 = double(float(-(ctx.f4.f64 * ctx.f5.f64 - ctx.f13.f64)));
	// fdivs f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// stfs f13,128(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f10,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f9,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f12,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f3.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f8,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f11,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f8,f9,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f11,196(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// fmadds f13,f12,f7,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fnmsubs f13,f11,f6,f13
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f6.f64 - ctx.f13.f64)));
	// fnmsubs f13,f4,f5,f13
	ctx.f13.f64 = double(float(-(ctx.f4.f64 * ctx.f5.f64 - ctx.f13.f64)));
	// fdivs f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// stfs f13,132(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f8,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f10,f13,f9,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfs f9,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,72(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,200(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// fmadds f13,f12,f9,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fnmsubs f13,f11,f8,f13
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f8.f64 - ctx.f13.f64)));
	// fnmsubs f13,f6,f7,f13
	ctx.f13.f64 = double(float(-(ctx.f6.f64 * ctx.f7.f64 - ctx.f13.f64)));
	// fdivs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f5.f64));
	// stfs f13,136(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f5,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,76(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f4,204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f4.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,204(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// fmadds f13,f8,f9,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f13,f12,f7,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fnmsubs f13,f6,f11,f13
	ctx.f13.f64 = double(float(-(ctx.f6.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// fnmsubs f13,f4,f5,f13
	ctx.f13.f64 = double(float(-(ctx.f4.f64 * ctx.f5.f64 - ctx.f13.f64)));
	// fdivs f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// stfs f13,140(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x82db43f0
	if (!ctx.cr6.eq) goto loc_82DB43F0;
loc_82DB4578:
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82db4610
	if (!ctx.cr6.lt) goto loc_82DB4610;
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// addi r9,r7,71
	ctx.r9.s64 = ctx.r7.s64 + 71;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r8,r30,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r30.s64;
	// subf r9,r7,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r7.s64;
loc_82DB45A0:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfs f10,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfsx f12,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f9.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f7,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f6,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f11,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f8,f9,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,192(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// fmadds f13,f12,f7,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fnmsubs f13,f11,f6,f13
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f6.f64 - ctx.f13.f64)));
	// fnmsubs f13,f4,f5,f13
	ctx.f13.f64 = double(float(-(ctx.f4.f64 * ctx.f5.f64 - ctx.f13.f64)));
	// fdivs f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// stfs f13,128(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x82db45a0
	if (!ctx.cr6.eq) goto loc_82DB45A0;
loc_82DB4610:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 + ctx.r5.u64;
	// add r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 + ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82db43c4
	if (!ctx.cr6.eq) goto loc_82DB43C4;
	// stfs f0,26624(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 26624, temp.u32);
loc_82DB4630:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b2c
	ctx.lr = 0x82DB4640;
	__restfpr_26(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB4644"))) PPC_WEAK_FUNC(sub_82DB4644);
PPC_FUNC_IMPL(__imp__sub_82DB4644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4648"))) PPC_WEAK_FUNC(sub_82DB4648);
PPC_FUNC_IMPL(__imp__sub_82DB4648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// lwz r11,1244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1244);
	// blt cr6,0x82db4668
	if (ctx.cr6.lt) goto loc_82DB4668;
	// bne cr6,0x82db46a8
	if (!ctx.cr6.eq) goto loc_82DB46A8;
	// stfs f1,280(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DB4668:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f1,272(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,6404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6404);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// blt cr6,0x82db46a8
	if (ctx.cr6.lt) goto loc_82DB46A8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,272(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
loc_82DB46A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB46B0"))) PPC_WEAK_FUNC(sub_82DB46B0);
PPC_FUNC_IMPL(__imp__sub_82DB46B0) {
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
	// blt cr6,0x82db4704
	if (ctx.cr6.lt) goto loc_82DB4704;
	// bne cr6,0x82db4724
	if (!ctx.cr6.eq) goto loc_82DB4724;
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
	ctx.lr = 0x82DB46F0;
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
loc_82DB4704:
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
	ctx.lr = 0x82DB4724;
	sub_82CB61F0(ctx, base);
loc_82DB4724:
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

__attribute__((alias("__imp__sub_82DB4738"))) PPC_WEAK_FUNC(sub_82DB4738);
PPC_FUNC_IMPL(__imp__sub_82DB4738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db4748
	if (!ctx.cr6.eq) goto loc_82DB4748;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB4748:
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
loc_82DB4758:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82db4758
	if (!ctx.cr6.eq) goto loc_82DB4758;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB4780"))) PPC_WEAK_FUNC(sub_82DB4780);
PPC_FUNC_IMPL(__imp__sub_82DB4780) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db4790
	if (!ctx.cr6.eq) goto loc_82DB4790;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB4790:
	// b 0x82db3bf8
	sub_82DB3BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB4794"))) PPC_WEAK_FUNC(sub_82DB4794);
PPC_FUNC_IMPL(__imp__sub_82DB4794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4798"))) PPC_WEAK_FUNC(sub_82DB4798);
PPC_FUNC_IMPL(__imp__sub_82DB4798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db47a8
	if (!ctx.cr6.eq) goto loc_82DB47A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB47A8:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,1244(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1244);
	// blt cr6,0x82db47c8
	if (ctx.cr6.lt) goto loc_82DB47C8;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stfs f1,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// blr 
	return;
loc_82DB47C8:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f1,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
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
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,6404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6404);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB480C"))) PPC_WEAK_FUNC(sub_82DB480C);
PPC_FUNC_IMPL(__imp__sub_82DB480C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4810"))) PPC_WEAK_FUNC(sub_82DB4810);
PPC_FUNC_IMPL(__imp__sub_82DB4810) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db4820
	if (!ctx.cr6.eq) goto loc_82DB4820;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB4820:
	// b 0x82db46b0
	sub_82DB46B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB4824"))) PPC_WEAK_FUNC(sub_82DB4824);
PPC_FUNC_IMPL(__imp__sub_82DB4824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4828"))) PPC_WEAK_FUNC(sub_82DB4828);
PPC_FUNC_IMPL(__imp__sub_82DB4828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB4830;
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
	// ble cr6,0x82db4898
	if (!ctx.cr6.gt) goto loc_82DB4898;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DB4858:
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
	ctx.lr = 0x82DB487C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db48e4
	if (!ctx.cr6.eq) goto loc_82DB48E4;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db4858
	if (ctx.cr6.lt) goto loc_82DB4858;
loc_82DB4898:
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
loc_82DB48A8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82db48a8
	if (!ctx.cr6.eq) goto loc_82DB48A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f2.f64 = double(temp.f32);
	// stfs f1,276(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f2,268(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// bl 0x82db3ac8
	ctx.lr = 0x82DB48E0;
	sub_82DB3AC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB48E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB48EC"))) PPC_WEAK_FUNC(sub_82DB48EC);
PPC_FUNC_IMPL(__imp__sub_82DB48EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB48F0"))) PPC_WEAK_FUNC(sub_82DB48F0);
PPC_FUNC_IMPL(__imp__sub_82DB48F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db4900
	if (!ctx.cr6.eq) goto loc_82DB4900;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB4900:
	// b 0x82db4828
	sub_82DB4828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB4904"))) PPC_WEAK_FUNC(sub_82DB4904);
PPC_FUNC_IMPL(__imp__sub_82DB4904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4908"))) PPC_WEAK_FUNC(sub_82DB4908);
PPC_FUNC_IMPL(__imp__sub_82DB4908) {
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
	// addi r31,r11,26488
	ctx.r31.s64 = ctx.r11.s64 + 26488;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB4930;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5332
	ctx.r4.s64 = ctx.r11.s64 + 5332;
	// bl 0x82da4448
	ctx.lr = 0x82DB4940;
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
	// addi r10,r5,18672
	ctx.r10.s64 = ctx.r5.s64 + 18672;
	// addi r11,r11,26392
	ctx.r11.s64 = ctx.r11.s64 + 26392;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r6,18232
	ctx.r10.s64 = ctx.r6.s64 + 18232;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,18304
	ctx.r10.s64 = ctx.r7.s64 + 18304;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,18328
	ctx.r11.s64 = ctx.r8.s64 + 18328;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,18448
	ctx.r11.s64 = ctx.r9.s64 + 18448;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,564
	ctx.r11.s64 = 564;
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

