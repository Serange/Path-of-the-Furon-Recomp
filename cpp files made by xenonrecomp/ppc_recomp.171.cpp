#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8267FF08"))) PPC_WEAK_FUNC(sub_8267FF08);
PPC_FUNC_IMPL(__imp__sub_8267FF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8267FF10;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,24668
	ctx.r8.s64 = ctx.r10.s64 + 24668;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x8267fcf8
	ctx.lr = 0x8267FF4C;
	sub_8267FCF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r10,r4,1
	ctx.r10.u64 = ctx.r4.u64 ^ 1;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8267ff84
	if (ctx.cr6.eq) goto loc_8267FF84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8267ff88
	if (!ctx.cr6.eq) goto loc_8267FF88;
loc_8267FF84:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8267FF88:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267FF94"))) PPC_WEAK_FUNC(sub_8267FF94);
PPC_FUNC_IMPL(__imp__sub_8267FF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267FF98"))) PPC_WEAK_FUNC(sub_8267FF98);
PPC_FUNC_IMPL(__imp__sub_8267FF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8267FFA0;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6ae8
	ctx.lr = 0x8267FFA8;
	__savefpr_28(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f0,188(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f28,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x8267ffd8
	if (ctx.cr6.lt) goto loc_8267FFD8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8267FFD8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267FFEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82680468
	if (!ctx.cr6.eq) goto loc_82680468;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82680468
	if (ctx.cr6.eq) goto loc_82680468;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r29,r11,-18304
	ctx.r29.s64 = ctx.r11.s64 + -18304;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r8,r11,70
	ctx.r8.s64 = ctx.r11.s64 + 70;
	// lwz r7,716(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 716);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lwz r5,60(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lwzx r4,r6,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r26,0(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bne cr6,0x826800c4
	if (!ctx.cr6.eq) goto loc_826800C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,468
	ctx.r3.s64 = 468;
	// bl 0x822959a8
	ctx.lr = 0x82680040;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826800a4
	if (ctx.cr6.eq) goto loc_826800A4;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// lfs f13,724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 724);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
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
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f10,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f11,f31
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f31.f64;
	// fdivs f8,f28,f9
	ctx.f8.f64 = double(float(ctx.f28.f64 / ctx.f9.f64));
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x826818f8
	ctx.lr = 0x826800A0;
	sub_826818F8(ctx, base);
	// b 0x826800a8
	goto loc_826800A8;
loc_826800A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826800A8:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r11,r11,70
	ctx.r11.s64 = ctx.r11.s64 + 70;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r9,304(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 1073741824;
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
loc_826800C4:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82680208
	if (ctx.cr6.eq) goto loc_82680208;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r27,r31,292
	ctx.r27.s64 = ctx.r31.s64 + 292;
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r11,672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// stw r28,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r28.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82680104
	if (ctx.cr6.eq) goto loc_82680104;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82294520
	ctx.lr = 0x82680104;
	sub_82294520(ctx, base);
loc_82680104:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lfs f0,752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// lfs f13,748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,672(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 724);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f10,f10
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f9,200(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
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
	// rlwinm r6,r8,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lfsx f8,r29,r5
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f13,f0
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
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
	// rlwinm r3,r4,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r11,r4,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// lfsx f5,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsel f4,f5,f11,f7
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
	// fmuls f29,f4,f9
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// ble cr6,0x82680208
	if (!ctx.cr6.gt) goto loc_82680208;
	// addi r29,r25,384
	ctx.r29.s64 = ctx.r25.s64 + 384;
loc_82680180:
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfsx f11,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f3,f10,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f30
	ctx.cr6.compare(ctx.f3.f64, ctx.f30.f64);
	// bge cr6,0x826801f0
	if (!ctx.cr6.lt) goto loc_826801F0;
	// addi r3,r25,400
	ctx.r3.s64 = ctx.r25.s64 + 400;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82831810
	ctx.lr = 0x826801DC;
	sub_82831810(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826801f0
	if (ctx.cr6.eq) goto loc_826801F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ab8c0
	ctx.lr = 0x826801F0;
	sub_822AB8C0(ctx, base);
loc_826801F0:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r10,672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82680180
	if (ctx.cr6.lt) goto loc_82680180;
loc_82680208:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82680468
	if (ctx.cr6.eq) goto loc_82680468;
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82680468
	if (ctx.cr6.eq) goto loc_82680468;
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82680468
	if (ctx.cr6.eq) goto loc_82680468;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268026c
	if (ctx.cr6.eq) goto loc_8268026C;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r29,r31,292
	ctx.r29.s64 = ctx.r31.s64 + 292;
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r11,r11,70
	ctx.r11.s64 = ctx.r11.s64 + 70;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82682008
	ctx.lr = 0x8268025C;
	sub_82682008(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82682238
	ctx.lr = 0x8268026C;
	sub_82682238(ctx, base);
loc_8268026C:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r9,424(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// addi r8,r11,70
	ctx.r8.s64 = ctx.r11.s64 + 70;
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// clrlwi r6,r9,9
	ctx.r6.u64 = ctx.r9.u32 & 0x7FFFFF;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r9,r10,24668
	ctx.r9.s64 = ctx.r10.s64 + 24668;
	// oris r8,r6,8192
	ctx.r8.u64 = ctx.r6.u64 | 536870912;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stfs f31,416(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stfs f31,420(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stw r8,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r8.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r7,r10,436
	ctx.r7.s64 = ctx.r10.s64 + 436;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r11,44
	ctx.r6.s64 = ctx.r11.s64 + 44;
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82680300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// addi r11,r11,-17840
	ctx.r11.s64 = ctx.r11.s64 + -17840;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82680324:
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// bdnz 0x82680324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82680324;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// li r8,8
	ctx.r8.s64 = 8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82680348:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82680348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82680348;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82680368:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82680368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82680368;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stw r28,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,-31696(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31696);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82680398
	if (!ctx.cr6.eq) goto loc_82680398;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
loc_82680398:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r8,3
	ctx.r8.s64 = 3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r7,716(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// lwz r6,60(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r4,80(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// stw r28,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r28.u32);
	// mullw r3,r4,r10
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// divw r10,r3,r8
	ctx.r10.s32 = ctx.r3.s32 / ctx.r8.s32;
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x826803d0
	if (!ctx.cr6.eq) goto loc_826803D0;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
loc_826803D0:
	// lwz r11,716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r9,424(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r30,r9,0,7,3
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// stw r30,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r30.u32);
	// mullw r11,r6,r10
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r5.u32);
	// bl 0x823bbff0
	ctx.lr = 0x82680404;
	sub_823BBFF0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r31,312
	ctx.r4.s64 = ctx.r31.s64 + 312;
	// rlwimi r30,r3,20,9,11
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r3.u32, 20) & 0x700000) | (ctx.r30.u64 & 0xFFFFFFFFFF8FFFFF);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r30.u32);
	// bl 0x8240a888
	ctx.lr = 0x8268041C;
	sub_8240A888(ctx, base);
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8240a888
	ctx.lr = 0x82680428;
	sub_8240A888(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f28,108(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bl 0x828200a8
	ctx.lr = 0x8268045C;
	sub_828200A8(ctx, base);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r9,r10,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
loc_82680468:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b34
	ctx.lr = 0x82680474;
	__restfpr_28(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82680478"))) PPC_WEAK_FUNC(sub_82680478);
PPC_FUNC_IMPL(__imp__sub_82680478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82680480;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82650188
	ctx.lr = 0x82680494;
	sub_82650188(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826804ac
	if (ctx.cr6.eq) goto loc_826804AC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,453
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 453, ctx.xer);
	// blt cr6,0x826804b8
	if (ctx.cr6.lt) goto loc_826804B8;
loc_826804AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,656
	ctx.r3.s64 = ctx.r29.s64 + 656;
	// bl 0x826816c0
	ctx.lr = 0x826804B8;
	sub_826816C0(ctx, base);
loc_826804B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826806e4
	if (ctx.cr6.eq) goto loc_826806E4;
	// lwz r10,660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826806e4
	if (ctx.cr6.eq) goto loc_826806E4;
	// lwz r11,672(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 672);
	// addi r31,r29,668
	ctx.r31.s64 = ctx.r29.s64 + 668;
	// lwz r9,676(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 676);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x826804fc
	if (!ctx.cr6.gt) goto loc_826804FC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x826804FC;
	sub_82294520(ctx, base);
loc_826804FC:
	// lwz r11,660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826806c0
	if (!ctx.cr6.gt) goto loc_826806C0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lfs f31,-17496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17496);
	ctx.f31.f64 = double(temp.f32);
loc_8268051C:
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x8240a888
	ctx.lr = 0x82680530;
	sub_8240A888(ctx, base);
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x8240a888
	ctx.lr = 0x82680544;
	sub_8240A888(ctx, base);
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8240a888
	ctx.lr = 0x82680558;
	sub_8240A888(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82680570;
	sub_82294AC0(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// lwz r9,656(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// lfs f6,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f4,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// add r10,r30,r9
	ctx.r10.u64 = ctx.r30.u64 + ctx.r9.u64;
	// fadds f12,f11,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fadds f11,f1,f8
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fadds f10,f0,f5
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f9,f13,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// lwzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f7,f11,f31
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r9,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r9.u32);
	// fmuls f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fmuls f5,f9,f31
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f5,156(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r8,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r7.u32);
	// bl 0x8240ac20
	ctx.lr = 0x82680624;
	sub_8240AC20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,-4(r4)
	PPC_STORE_U32(ctx.r4.u32 + -4, ctx.r6.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r26,20(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rldicr r8,r6,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r6,r4,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 36);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// ld r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12);
	// rldicr r4,r26,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8267f1e0
	ctx.lr = 0x826806AC;
	sub_8267F1E0(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// lwz r3,660(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8268051c
	if (ctx.cr6.lt) goto loc_8268051C;
loc_826806C0:
	// lwz r11,664(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// addi r3,r29,656
	ctx.r3.s64 = ctx.r29.s64 + 656;
	// stw r27,660(r29)
	PPC_STORE_U32(ctx.r29.u32 + 660, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826806e4
	if (ctx.cr6.eq) goto loc_826806E4;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x82294520
	ctx.lr = 0x826806E4;
	sub_82294520(ctx, base);
loc_826806E4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826806F0"))) PPC_WEAK_FUNC(sub_826806F0);
PPC_FUNC_IMPL(__imp__sub_826806F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x826806F8;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,672(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// lwz r10,-156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// stfs f0,-152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// lwz r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// stfs f0,-160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// lwz r11,-160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// stw r10,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r10.u32);
	// lfs f9,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r9.u32);
	// lfs f10,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r11.u32);
	// lfs f8,-116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -116);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// lfs f12,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r9.u32);
	// lfs f13,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f11.f64 = double(temp.f32);
	// ble cr6,0x826808a4
	if (!ctx.cr6.gt) goto loc_826808A4;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r11,668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// lwz r9,672(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// addi r10,r10,-18304
	ctx.r10.s64 = ctx.r10.s64 + -18304;
loc_82680770:
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8268084c
	if (ctx.cr6.eq) goto loc_8268084C;
	// lfs f7,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f31,f9,f6
	ctx.f31.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f30,f10,f4
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
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
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
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
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
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
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
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
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
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
	// rlwinm r29,r7,27,29,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// rlwinm r28,r6,27,29,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
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
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// rlwinm r27,r5,27,29,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// rlwinm r26,r4,27,29,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r25,r31,27,29,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x4;
	// rlwinm r24,r30,27,29,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x4;
	// rlwinm r5,r5,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// rlwinm r4,r4,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// rlwinm r31,r31,30,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x4;
	// rlwinm r30,r30,30,29,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x4;
	// or r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 | ctx.r7.u64;
	// or r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 | ctx.r6.u64;
	// or r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 | ctx.r5.u64;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// or r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 | ctx.r31.u64;
	// or r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 | ctx.r30.u64;
	// lfsx f5,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f3,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsel f11,f5,f7,f11
	ctx.f11.f64 = ctx.f5.f64 >= 0.0 ? ctx.f7.f64 : ctx.f11.f64;
	// fsel f12,f3,f6,f12
	ctx.f12.f64 = ctx.f3.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// lfsx f2,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// fsel f13,f2,f4,f13
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f4.f64 : ctx.f13.f64;
	// lfsx f5,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsel f8,f1,f8,f7
	ctx.f8.f64 = ctx.f1.f64 >= 0.0 ? ctx.f8.f64 : ctx.f7.f64;
	// lfsx f3,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsel f9,f5,f9,f6
	ctx.f9.f64 = ctx.f5.f64 >= 0.0 ? ctx.f9.f64 : ctx.f6.f64;
	// fsel f10,f3,f10,f4
	ctx.f10.f64 = ctx.f3.f64 >= 0.0 ? ctx.f10.f64 : ctx.f4.f64;
	// b 0x82680898
	goto loc_82680898;
loc_8268084C:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r5,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r5.u32);
	// stw r7,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r7.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r6,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r6.u32);
	// lfs f8,-116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -116);
	ctx.f8.f64 = double(temp.f32);
	// stw r4,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r4.u32);
	// lfs f11,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f11.f64 = double(temp.f32);
	// stw r31,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r31.u32);
	// lfs f12,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r7.u32);
	// lfs f13,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f10.f64 = double(temp.f32);
loc_82680898:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne 0x82680770
	if (!ctx.cr0.eq) goto loc_82680770;
loc_826808A4:
	// fsubs f8,f8,f11
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// addi r10,r3,396
	ctx.r10.s64 = ctx.r3.s64 + 396;
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// li r9,7
	ctx.r9.s64 = 7;
	// lfs f0,-28844(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f9,-160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,-152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f0,-156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// lwz r3,-160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// stw r3,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r3.u32);
	// fadds f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f3,-144(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// lwz r8,-144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fadds f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f6,-136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// lwz r7,-156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// fadds f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lwz r6,-152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// stfs f5,-140(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// lwz r4,-140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// stw r4,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r4.u32);
	// fmadds f2,f10,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f4.f64));
	// lwz r5,-136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	// stw r6,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r6.u32);
	// stw r7,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r7.u32);
	// stw r8,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r8.u32);
	// stw r5,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r5.u32);
	// fmadds f1,f9,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// stfs f0,-104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8268093C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8268093c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268093C;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268095C"))) PPC_WEAK_FUNC(sub_8268095C);
PPC_FUNC_IMPL(__imp__sub_8268095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82680960"))) PPC_WEAK_FUNC(sub_82680960);
PPC_FUNC_IMPL(__imp__sub_82680960) {
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
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826809d0
	if (ctx.cr6.eq) goto loc_826809D0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x826809d0
	if (!ctx.cr6.gt) goto loc_826809D0;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826809d0
	if (!ctx.cr6.gt) goto loc_826809D0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x822959a8
	ctx.lr = 0x826809AC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826809d0
	if (ctx.cr6.eq) goto loc_826809D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267fa30
	ctx.lr = 0x826809BC;
	sub_8267FA30(ctx, base);
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
loc_826809D0:
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

__attribute__((alias("__imp__sub_826809E8"))) PPC_WEAK_FUNC(sub_826809E8);
PPC_FUNC_IMPL(__imp__sub_826809E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826809F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,24700
	ctx.r9.s64 = ctx.r11.s64 + 24700;
	// addi r8,r10,-18824
	ctx.r8.s64 = ctx.r10.s64 + -18824;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,396
	ctx.r4.s64 = ctx.r30.s64 + 396;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r6,672(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// rlwinm r28,r6,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82381228
	ctx.lr = 0x82680A34;
	sub_82381228(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x82474ea0
	ctx.lr = 0x82680A58;
	sub_82474EA0(ctx, base);
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// addi r3,r5,24676
	ctx.r3.s64 = ctx.r5.s64 + 24676;
	// addi r10,r4,24696
	ctx.r10.s64 = ctx.r4.s64 + 24696;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82680A8C"))) PPC_WEAK_FUNC(sub_82680A8C);
PPC_FUNC_IMPL(__imp__sub_82680A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82680A90"))) PPC_WEAK_FUNC(sub_82680A90);
PPC_FUNC_IMPL(__imp__sub_82680A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82680A98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 3;
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// lwz r11,716(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 716);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,668(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 668);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// lfs f0,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lfs f13,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// lfs f12,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// fcfid f1,f8
	ctx.f1.f64 = double(ctx.f8.s64);
	// fcfid f0,f6
	ctx.f0.f64 = double(ctx.f6.s64);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fadds f7,f4,f9
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f6,f3,f8
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8267f3f8
	ctx.lr = 0x82680BD0;
	sub_8267F3F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82680BE0;
	sub_82CB1160(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82680BF0;
	sub_82CB1160(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82680BF8"))) PPC_WEAK_FUNC(sub_82680BF8);
PPC_FUNC_IMPL(__imp__sub_82680BF8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680C08"))) PPC_WEAK_FUNC(sub_82680C08);
PPC_FUNC_IMPL(__imp__sub_82680C08) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680C10"))) PPC_WEAK_FUNC(sub_82680C10);
PPC_FUNC_IMPL(__imp__sub_82680C10) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680C18"))) PPC_WEAK_FUNC(sub_82680C18);
PPC_FUNC_IMPL(__imp__sub_82680C18) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680C20"))) PPC_WEAK_FUNC(sub_82680C20);
PPC_FUNC_IMPL(__imp__sub_82680C20) {
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
	// addi r31,r3,-64
	ctx.r31.s64 = ctx.r3.s64 + -64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82680c78
	ctx.lr = 0x82680C44;
	sub_82680C78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82680c5c
	if (ctx.cr6.eq) goto loc_82680C5C;
	// bl 0x82294a58
	ctx.lr = 0x82680C58;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82680C5C:
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

__attribute__((alias("__imp__sub_82680C74"))) PPC_WEAK_FUNC(sub_82680C74);
PPC_FUNC_IMPL(__imp__sub_82680C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82680C78"))) PPC_WEAK_FUNC(sub_82680C78);
PPC_FUNC_IMPL(__imp__sub_82680C78) {
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// addi r8,r10,-3168
	ctx.r8.s64 = ctx.r10.s64 + -3168;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r5,r7,-3148
	ctx.r5.s64 = ctx.r7.s64 + -3148;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,-56(r6)
	PPC_STORE_U32(ctx.r6.u32 + -56, ctx.r5.u32);
	// bl 0x824283e8
	ctx.lr = 0x82680CBC;
	sub_824283E8(ctx, base);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// addi r3,r4,-18824
	ctx.r3.s64 = ctx.r4.s64 + -18824;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82680CDC"))) PPC_WEAK_FUNC(sub_82680CDC);
PPC_FUNC_IMPL(__imp__sub_82680CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82680CE0"))) PPC_WEAK_FUNC(sub_82680CE0);
PPC_FUNC_IMPL(__imp__sub_82680CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,-60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -60);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r8,r10,-3168
	ctx.r8.s64 = ctx.r10.s64 + -3168;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r8,-64(r3)
	PPC_STORE_U32(ctx.r3.u32 + -64, ctx.r8.u32);
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r7,-3148
	ctx.r5.s64 = ctx.r7.s64 + -3148;
	// stw r5,-56(r6)
	PPC_STORE_U32(ctx.r6.u32 + -56, ctx.r5.u32);
	// b 0x824283e8
	sub_824283E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82680D10"))) PPC_WEAK_FUNC(sub_82680D10);
PPC_FUNC_IMPL(__imp__sub_82680D10) {
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
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r7,r9,24736
	ctx.r7.s64 = ctx.r9.s64 + 24736;
	// addi r4,r8,-18824
	ctx.r4.s64 = ctx.r8.s64 + -18824;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,-3196
	ctx.r7.s64 = ctx.r11.s64 + -3196;
	// lwz r4,448(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// addi r3,r9,-3180
	ctx.r3.s64 = ctx.r9.s64 + -3180;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// rlwinm r9,r4,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0x1;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r3,-32236
	ctx.r3.s64 = -2112618496;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r11,r9,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// addi r8,r7,24744
	ctx.r8.s64 = ctx.r7.s64 + 24744;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r7,r3,24764
	ctx.r7.s64 = ctx.r3.s64 + 24764;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lis r3,-32236
	ctx.r3.s64 = -2112618496;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lfs f0,-15120(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r3,24708
	ctx.r9.s64 = ctx.r3.s64 + 24708;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// oris r5,r7,32768
	ctx.r5.u64 = ctx.r7.u64 | 2147483648;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r4,24732
	ctx.r9.s64 = ctx.r4.s64 + 24732;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bl 0x82474f50
	ctx.lr = 0x82680DF8;
	sub_82474F50(ctx, base);
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

__attribute__((alias("__imp__sub_82680E10"))) PPC_WEAK_FUNC(sub_82680E10);
PPC_FUNC_IMPL(__imp__sub_82680E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680E14"))) PPC_WEAK_FUNC(sub_82680E14);
PPC_FUNC_IMPL(__imp__sub_82680E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82680E18"))) PPC_WEAK_FUNC(sub_82680E18);
PPC_FUNC_IMPL(__imp__sub_82680E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82680E20;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6ae0
	ctx.lr = 0x82680E28;
	__savefpr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x826810b0
	if (ctx.cr6.eq) goto loc_826810B0;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ble cr6,0x82680ec4
	if (!ctx.cr6.gt) goto loc_82680EC4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,12(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r8,r11,-18304
	ctx.r8.s64 = ctx.r11.s64 + -18304;
loc_82680E78:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82680E80:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfsx f12,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r4,r6,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lfsx f10,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82680e80
	if (!ctx.cr0.eq) goto loc_82680E80;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82680e78
	if (!ctx.cr0.eq) goto loc_82680E78;
loc_82680EC4:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r11,704
	ctx.r11.s64 = 704;
	// addi r10,r10,-704
	ctx.r10.s64 = ctx.r10.s64 + -704;
loc_82680ED0:
	// lwz r9,28(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,716
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 716, ctx.xer);
	// blt cr6,0x82680ed0
	if (ctx.cr6.lt) goto loc_82680ED0;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lwz r10,672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826810b0
	if (!ctx.cr6.gt) goto loc_826810B0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f31,-17784(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17784);
	// fdivs f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f29,-18212(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	ctx.f29.f64 = double(temp.f32);
	// fdivs f27,f0,f12
	ctx.f27.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fdivs f26,f0,f11
	ctx.f26.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f30,-18308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18308);
	ctx.f30.f64 = double(temp.f32);
loc_82680F40:
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e640b8
	ctx.lr = 0x82680F54;
	sub_82E640B8(ctx, base);
	// lwz r10,12(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r8,8
	ctx.r8.s64 = 8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82680F68:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82680F70:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f29,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82680f70
	if (!ctx.cr0.eq) goto loc_82680F70;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82680f68
	if (!ctx.cr0.eq) goto loc_82680F68;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f28,f0
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lwz r11,668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82cb4db8
	ctx.lr = 0x82680FB0;
	sub_82CB4DB8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmul f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 * ctx.f31.f64;
	// bl 0x82cb4c00
	ctx.lr = 0x82680FBC;
	sub_82CB4C00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82680fe0
	if (!ctx.cr6.lt) goto loc_82680FE0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x82680ff0
	goto loc_82680FF0;
loc_82680FE0:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x82680ff0
	if (ctx.cr6.lt) goto loc_82680FF0;
	// li r30,255
	ctx.r30.s64 = 255;
loc_82680FF0:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f27,f0
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// bl 0x82cb4db8
	ctx.lr = 0x82680FFC;
	sub_82CB4DB8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmul f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 * ctx.f31.f64;
	// bl 0x82cb4c00
	ctx.lr = 0x82681008;
	sub_82CB4C00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8268102c
	if (!ctx.cr6.lt) goto loc_8268102C;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x82681038
	goto loc_82681038;
loc_8268102C:
	// cmpwi cr6,r31,255
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 255, ctx.xer);
	// blt cr6,0x82681038
	if (ctx.cr6.lt) goto loc_82681038;
	// li r31,255
	ctx.r31.s64 = 255;
loc_82681038:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f26,f0
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// bl 0x82cb4db8
	ctx.lr = 0x82681044;
	sub_82CB4DB8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmul f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 * ctx.f31.f64;
	// bl 0x82cb4c00
	ctx.lr = 0x82681050;
	sub_82CB4C00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82681074
	if (!ctx.cr6.lt) goto loc_82681074;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82681080
	goto loc_82681080;
loc_82681074:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x82681080
	if (ctx.cr6.lt) goto loc_82681080;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82681080:
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r8.u32);
	// lwz r7,28(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lwz r6,672(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 672);
	// cmpw cr6,r26,r6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82680f40
	if (ctx.cr6.lt) goto loc_82680F40;
loc_826810B0:
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
	// addi r31,r11,680
	ctx.r31.s64 = ctx.r11.s64 + 680;
	// lwz r10,688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// stw r22,684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 684, ctx.r22.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82681110
	if (ctx.cr6.eq) goto loc_82681110;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82681110
	if (ctx.cr6.eq) goto loc_82681110;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826810f0
	if (!ctx.cr6.eq) goto loc_826810F0;
	// bl 0x822900a0
	ctx.lr = 0x826810EC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_826810F0:
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
	ctx.lr = 0x8268110C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82681110:
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// addi r31,r11,692
	ctx.r31.s64 = ctx.r11.s64 + 692;
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// stw r22,696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 696, ctx.r22.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8268116c
	if (ctx.cr6.eq) goto loc_8268116C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8268116c
	if (ctx.cr6.eq) goto loc_8268116C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8268114c
	if (!ctx.cr6.eq) goto loc_8268114C;
	// bl 0x822900a0
	ctx.lr = 0x82681148;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_8268114C:
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
	ctx.lr = 0x82681168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8268116C:
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268128c
	if (!ctx.cr6.gt) goto loc_8268128C;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82681180:
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwzx r27,r25,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// beq cr6,0x826811c0
	if (ctx.cr6.eq) goto loc_826811C0;
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826811c0
	if (!ctx.cr6.gt) goto loc_826811C0;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
loc_826811A4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8268129c
	if (ctx.cr6.eq) goto loc_8268129C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826811a4
	if (ctx.cr6.lt) goto loc_826811A4;
loc_826811C0:
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// addi r31,r11,692
	ctx.r31.s64 = ctx.r11.s64 + 692;
	// lwz r29,696(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 696);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
loc_826811D0:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82681248
	if (!ctx.cr6.gt) goto loc_82681248;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bne cr6,0x8268120c
	if (!ctx.cr6.eq) goto loc_8268120C;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82681248
	if (ctx.cr6.eq) goto loc_82681248;
loc_8268120C:
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r30,r11,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82681228
	if (!ctx.cr6.eq) goto loc_82681228;
	// bl 0x822900a0
	ctx.lr = 0x82681224;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82681228:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82681244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82681248:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82681278
	if (ctx.cr0.eq) goto loc_82681278;
	// lwz r10,240(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 240);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,244(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 244);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,248(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 248);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,252(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 252);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_82681278:
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82681180
	if (ctx.cr6.lt) goto loc_82681180;
loc_8268128C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6b2c
	ctx.lr = 0x82681298;
	__restfpr_26(ctx, base);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8268129C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x826811c0
	if (ctx.cr6.eq) goto loc_826811C0;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// addi r31,r11,680
	ctx.r31.s64 = ctx.r11.s64 + 680;
	// lwz r29,684(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// lwz r10,688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// b 0x826811d0
	goto loc_826811D0;
}

__attribute__((alias("__imp__sub_826812B8"))) PPC_WEAK_FUNC(sub_826812B8);
PPC_FUNC_IMPL(__imp__sub_826812B8) {
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
	// addi r31,r3,-44
	ctx.r31.s64 = ctx.r3.s64 + -44;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82681358
	ctx.lr = 0x826812DC;
	sub_82681358(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-18824
	ctx.r9.s64 = ctx.r11.s64 + -18824;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82681300
	if (ctx.cr6.eq) goto loc_82681300;
	// bl 0x82294a58
	ctx.lr = 0x826812FC;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82681300:
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

__attribute__((alias("__imp__sub_82681318"))) PPC_WEAK_FUNC(sub_82681318);
PPC_FUNC_IMPL(__imp__sub_82681318) {
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
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82681358
	ctx.lr = 0x82681334;
	sub_82681358(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-18824
	ctx.r10.s64 = ctx.r11.s64 + -18824;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82681354"))) PPC_WEAK_FUNC(sub_82681354);
PPC_FUNC_IMPL(__imp__sub_82681354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681358"))) PPC_WEAK_FUNC(sub_82681358);
PPC_FUNC_IMPL(__imp__sub_82681358) {
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
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// bl 0x824283e8
	ctx.lr = 0x82681374;
	sub_824283E8(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,-40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// addi r9,r10,-3196
	ctx.r9.s64 = ctx.r10.s64 + -3196;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r9,-44(r31)
	PPC_STORE_U32(ctx.r31.u32 + -44, ctx.r9.u32);
	// addi r7,r8,-3180
	ctx.r7.s64 = ctx.r8.s64 + -3180;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,-20(r5)
	PPC_STORE_U32(ctx.r5.u32 + -20, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_826813B0"))) PPC_WEAK_FUNC(sub_826813B0);
PPC_FUNC_IMPL(__imp__sub_826813B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826813B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,72
	ctx.r3.s64 = 72;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822959a8
	ctx.lr = 0x826813D4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826813f4
	if (ctx.cr6.eq) goto loc_826813F4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826809e8
	ctx.lr = 0x826813EC;
	sub_826809E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826813f8
	goto loc_826813F8;
loc_826813F4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826813F8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82681420
	if (ctx.cr6.eq) goto loc_82681420;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82681420:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8246b740
	ctx.lr = 0x8268142C;
	sub_8246B740(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82681468
	if (ctx.cr6.eq) goto loc_82681468;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82681468
	if (!ctx.cr0.eq) goto loc_82681468;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82681468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82681468:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822959a8
	ctx.lr = 0x82681474;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268149c
	if (ctx.cr6.eq) goto loc_8268149C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82680d10
	ctx.lr = 0x82681494;
	sub_82680D10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826814a0
	goto loc_826814A0;
loc_8268149C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826814A0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826814c8
	if (ctx.cr6.eq) goto loc_826814C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_826814C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// bl 0x8246b7d0
	ctx.lr = 0x826814D4;
	sub_8246B7D0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82681510
	if (ctx.cr6.eq) goto loc_82681510;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82681510
	if (!ctx.cr0.eq) goto loc_82681510;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82681510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82681510:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82681518"))) PPC_WEAK_FUNC(sub_82681518);
PPC_FUNC_IMPL(__imp__sub_82681518) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82363ad8
	ctx.lr = 0x8268153C;
	sub_82363AD8(ctx, base);
	// bl 0x822b4df0
	ctx.lr = 0x82681540;
	sub_822B4DF0(ctx, base);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,680
	ctx.r3.s64 = ctx.r31.s64 + 680;
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82681568
	if (ctx.cr6.eq) goto loc_82681568;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82294520
	ctx.lr = 0x82681568;
	sub_82294520(ctx, base);
loc_82681568:
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// addi r3,r31,692
	ctx.r3.s64 = ctx.r31.s64 + 692;
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8268158c
	if (ctx.cr6.eq) goto loc_8268158C;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82294520
	ctx.lr = 0x8268158C;
	sub_82294520(ctx, base);
loc_8268158C:
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826815d8
	if (!ctx.cr6.gt) goto loc_826815D8;
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826815B8:
	// lwz r9,668(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r8,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// lwz r7,672(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826815b8
	if (ctx.cr6.lt) goto loc_826815B8;
loc_826815D8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82363770
	ctx.lr = 0x826815E0;
	sub_82363770(ctx, base);
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

__attribute__((alias("__imp__sub_826815F8"))) PPC_WEAK_FUNC(sub_826815F8);
PPC_FUNC_IMPL(__imp__sub_826815F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8268162c
	if (!ctx.cr6.gt) goto loc_8268162C;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82681610:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82681630
	if (ctx.cr6.eq) goto loc_82681630;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82681610
	if (ctx.cr6.lt) goto loc_82681610;
loc_8268162C:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82681630:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681644"))) PPC_WEAK_FUNC(sub_82681644);
PPC_FUNC_IMPL(__imp__sub_82681644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681648"))) PPC_WEAK_FUNC(sub_82681648);
PPC_FUNC_IMPL(__imp__sub_82681648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268164C"))) PPC_WEAK_FUNC(sub_8268164C);
PPC_FUNC_IMPL(__imp__sub_8268164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681650"))) PPC_WEAK_FUNC(sub_82681650);
PPC_FUNC_IMPL(__imp__sub_82681650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82681658;
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
	// beq cr6,0x82681698
	if (ctx.cr6.eq) goto loc_82681698;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82681684
	if (!ctx.cr6.eq) goto loc_82681684;
	// bl 0x822900a0
	ctx.lr = 0x82681680;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82681684:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82681698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82681698:
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

__attribute__((alias("__imp__sub_826816B0"))) PPC_WEAK_FUNC(sub_826816B0);
PPC_FUNC_IMPL(__imp__sub_826816B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,60
	ctx.r10.s64 = ctx.r4.s64 * 60;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826816C0"))) PPC_WEAK_FUNC(sub_826816C0);
PPC_FUNC_IMPL(__imp__sub_826816C0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r5,r10,60
	ctx.r5.s64 = ctx.r10.s64 * 60;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r4,r9,60
	ctx.r4.s64 = ctx.r9.s64 * 60;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82681700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826817b4
	if (!ctx.cr6.eq) goto loc_826817B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,455
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 455, ctx.xer);
	// blt cr6,0x826817b4
	if (ctx.cr6.lt) goto loc_826817B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// blt cr6,0x826817b4
	if (ctx.cr6.lt) goto loc_826817B4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826817c0
	if (ctx.cr6.eq) goto loc_826817C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8268174C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8268177c
	if (ctx.cr6.eq) goto loc_8268177C;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82681778;
	sub_82294520(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8268177C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82681790;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r5,r10,60
	ctx.r5.s64 = ctx.r10.s64 * 60;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826817B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826817c0
	goto loc_826817C0;
loc_826817B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82681e90
	ctx.lr = 0x826817C0;
	sub_82681E90(ctx, base);
loc_826817C0:
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

__attribute__((alias("__imp__sub_826817D8"))) PPC_WEAK_FUNC(sub_826817D8);
PPC_FUNC_IMPL(__imp__sub_826817D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826817FC"))) PPC_WEAK_FUNC(sub_826817FC);
PPC_FUNC_IMPL(__imp__sub_826817FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681800"))) PPC_WEAK_FUNC(sub_82681800);
PPC_FUNC_IMPL(__imp__sub_82681800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681804"))) PPC_WEAK_FUNC(sub_82681804);
PPC_FUNC_IMPL(__imp__sub_82681804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681808"))) PPC_WEAK_FUNC(sub_82681808);
PPC_FUNC_IMPL(__imp__sub_82681808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82681810;
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
	// beq cr6,0x82681850
	if (ctx.cr6.eq) goto loc_82681850;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8268183c
	if (!ctx.cr6.eq) goto loc_8268183C;
	// bl 0x822900a0
	ctx.lr = 0x82681838;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8268183C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82681850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82681850:
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

__attribute__((alias("__imp__sub_82681868"))) PPC_WEAK_FUNC(sub_82681868);
PPC_FUNC_IMPL(__imp__sub_82681868) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681880"))) PPC_WEAK_FUNC(sub_82681880);
PPC_FUNC_IMPL(__imp__sub_82681880) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681898"))) PPC_WEAK_FUNC(sub_82681898);
PPC_FUNC_IMPL(__imp__sub_82681898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826818B8"))) PPC_WEAK_FUNC(sub_826818B8);
PPC_FUNC_IMPL(__imp__sub_826818B8) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826818CC"))) PPC_WEAK_FUNC(sub_826818CC);
PPC_FUNC_IMPL(__imp__sub_826818CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826818D0"))) PPC_WEAK_FUNC(sub_826818D0);
PPC_FUNC_IMPL(__imp__sub_826818D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826818EC"))) PPC_WEAK_FUNC(sub_826818EC);
PPC_FUNC_IMPL(__imp__sub_826818EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826818F0"))) PPC_WEAK_FUNC(sub_826818F0);
PPC_FUNC_IMPL(__imp__sub_826818F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826818F4"))) PPC_WEAK_FUNC(sub_826818F4);
PPC_FUNC_IMPL(__imp__sub_826818F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826818F8"))) PPC_WEAK_FUNC(sub_826818F8);
PPC_FUNC_IMPL(__imp__sub_826818F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82681900;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r9,24640
	ctx.r8.s64 = ctx.r9.s64 + 24640;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r11,r4,1
	ctx.r11.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r31,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r31.u32);
	// bl 0x82681c68
	ctx.lr = 0x82681964;
	sub_82681C68(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r11,r31,436
	ctx.r11.s64 = ctx.r31.s64 + 436;
	// lwz r7,452(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addi r9,r10,24512
	ctx.r9.s64 = ctx.r10.s64 + 24512;
	// stw r6,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r6.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// stw r8,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r8.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826819A4"))) PPC_WEAK_FUNC(sub_826819A4);
PPC_FUNC_IMPL(__imp__sub_826819A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826819A8"))) PPC_WEAK_FUNC(sub_826819A8);
PPC_FUNC_IMPL(__imp__sub_826819A8) {
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826819D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826819EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,436(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82681A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681a40
	if (ctx.cr6.eq) goto loc_82681A40;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82681a40
	if (!ctx.cr0.eq) goto loc_82681A40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82681A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82681A40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82475d80
	ctx.lr = 0x82681A48;
	sub_82475D80(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681a88
	if (ctx.cr6.eq) goto loc_82681A88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82681a88
	if (!ctx.cr0.eq) goto loc_82681A88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82681A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82681A88:
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

__attribute__((alias("__imp__sub_82681AA0"))) PPC_WEAK_FUNC(sub_82681AA0);
PPC_FUNC_IMPL(__imp__sub_82681AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82681AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82682008
	ctx.lr = 0x82681AC0;
	sub_82682008(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82682238
	ctx.lr = 0x82681AD0;
	sub_82682238(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82681AD8"))) PPC_WEAK_FUNC(sub_82681AD8);
PPC_FUNC_IMPL(__imp__sub_82681AD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681AE0"))) PPC_WEAK_FUNC(sub_82681AE0);
PPC_FUNC_IMPL(__imp__sub_82681AE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681AE8"))) PPC_WEAK_FUNC(sub_82681AE8);
PPC_FUNC_IMPL(__imp__sub_82681AE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,436
	ctx.r3.s64 = ctx.r3.s64 + 436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681AF0"))) PPC_WEAK_FUNC(sub_82681AF0);
PPC_FUNC_IMPL(__imp__sub_82681AF0) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,672(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 672);
	// mulli r4,r9,60
	ctx.r4.s64 = ctx.r9.s64 * 60;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82681b7c
	if (ctx.cr6.eq) goto loc_82681B7C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828c9fc0
	ctx.lr = 0x82681B2C;
	sub_828C9FC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x82681B3C;
	sub_82473550(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681b7c
	if (ctx.cr6.eq) goto loc_82681B7C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82681b7c
	if (!ctx.cr0.eq) goto loc_82681B7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82681B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82681B7C:
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

__attribute__((alias("__imp__sub_82681B90"))) PPC_WEAK_FUNC(sub_82681B90);
PPC_FUNC_IMPL(__imp__sub_82681B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82681BD8"))) PPC_WEAK_FUNC(sub_82681BD8);
PPC_FUNC_IMPL(__imp__sub_82681BD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681BDC"))) PPC_WEAK_FUNC(sub_82681BDC);
PPC_FUNC_IMPL(__imp__sub_82681BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681BE0"))) PPC_WEAK_FUNC(sub_82681BE0);
PPC_FUNC_IMPL(__imp__sub_82681BE0) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,23908
	ctx.r4.s64 = ctx.r11.s64 + 23908;
	// bl 0x822960c0
	ctx.lr = 0x82681C00;
	sub_822960C0(ctx, base);
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

__attribute__((alias("__imp__sub_82681C18"))) PPC_WEAK_FUNC(sub_82681C18);
PPC_FUNC_IMPL(__imp__sub_82681C18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681C20"))) PPC_WEAK_FUNC(sub_82681C20);
PPC_FUNC_IMPL(__imp__sub_82681C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82681C60"))) PPC_WEAK_FUNC(sub_82681C60);
PPC_FUNC_IMPL(__imp__sub_82681C60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681C64"))) PPC_WEAK_FUNC(sub_82681C64);
PPC_FUNC_IMPL(__imp__sub_82681C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681C68"))) PPC_WEAK_FUNC(sub_82681C68);
PPC_FUNC_IMPL(__imp__sub_82681C68) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r5,r10,24468
	ctx.r5.s64 = ctx.r10.s64 + 24468;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stb r11,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r11.u8);
	// stb r9,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r9.u8);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r8,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r8.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// bl 0x82681d48
	ctx.lr = 0x82681CE0;
	sub_82681D48(ctx, base);
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

__attribute__((alias("__imp__sub_82681CF8"))) PPC_WEAK_FUNC(sub_82681CF8);
PPC_FUNC_IMPL(__imp__sub_82681CF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82475d80
	sub_82475D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82681CFC"))) PPC_WEAK_FUNC(sub_82681CFC);
PPC_FUNC_IMPL(__imp__sub_82681CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681D00"))) PPC_WEAK_FUNC(sub_82681D00);
PPC_FUNC_IMPL(__imp__sub_82681D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82681D40"))) PPC_WEAK_FUNC(sub_82681D40);
PPC_FUNC_IMPL(__imp__sub_82681D40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681D44"))) PPC_WEAK_FUNC(sub_82681D44);
PPC_FUNC_IMPL(__imp__sub_82681D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681D48"))) PPC_WEAK_FUNC(sub_82681D48);
PPC_FUNC_IMPL(__imp__sub_82681D48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stb r11,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r11.u8);
	// stb r11,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stb r11,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r11.u8);
	// stb r11,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r11.u8);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stb r11,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r11.u8);
	// stb r11,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, ctx.r11.u8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stb r11,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r11.u8);
	// stb r11,82(r3)
	PPC_STORE_U8(ctx.r3.u32 + 82, ctx.r11.u8);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// stb r11,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r11.u8);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// stb r11,106(r3)
	PPC_STORE_U8(ctx.r3.u32 + 106, ctx.r11.u8);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// stb r11,117(r3)
	PPC_STORE_U8(ctx.r3.u32 + 117, ctx.r11.u8);
	// stb r11,118(r3)
	PPC_STORE_U8(ctx.r3.u32 + 118, ctx.r11.u8);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// stb r11,129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 129, ctx.r11.u8);
	// stb r11,130(r3)
	PPC_STORE_U8(ctx.r3.u32 + 130, ctx.r11.u8);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681E34"))) PPC_WEAK_FUNC(sub_82681E34);
PPC_FUNC_IMPL(__imp__sub_82681E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681E38"))) PPC_WEAK_FUNC(sub_82681E38);
PPC_FUNC_IMPL(__imp__sub_82681E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82681e6c
	if (!ctx.cr6.gt) goto loc_82681E6C;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82681E50:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82681e74
	if (ctx.cr6.eq) goto loc_82681E74;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82681e50
	if (ctx.cr6.lt) goto loc_82681E50;
loc_82681E6C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82681E74:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681E7C"))) PPC_WEAK_FUNC(sub_82681E7C);
PPC_FUNC_IMPL(__imp__sub_82681E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681E80"))) PPC_WEAK_FUNC(sub_82681E80);
PPC_FUNC_IMPL(__imp__sub_82681E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681E84"))) PPC_WEAK_FUNC(sub_82681E84);
PPC_FUNC_IMPL(__imp__sub_82681E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681E88"))) PPC_WEAK_FUNC(sub_82681E88);
PPC_FUNC_IMPL(__imp__sub_82681E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681E8C"))) PPC_WEAK_FUNC(sub_82681E8C);
PPC_FUNC_IMPL(__imp__sub_82681E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681E90"))) PPC_WEAK_FUNC(sub_82681E90);
PPC_FUNC_IMPL(__imp__sub_82681E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82681E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r5,r10,60
	ctx.r5.s64 = ctx.r10.s64 * 60;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r4,r9,60
	ctx.r4.s64 = ctx.r9.s64 * 60;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82681EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82681f78
	if (ctx.cr6.eq) goto loc_82681F78;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82681EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82681f20
	if (ctx.cr6.eq) goto loc_82681F20;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82681F1C;
	sub_82294520(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82681F20:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82681fbc
	if (!ctx.cr6.gt) goto loc_82681FBC;
loc_82681F2C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82681F44;
	sub_82294AC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8267ef40
	ctx.lr = 0x82681F5C;
	sub_8267EF40(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82681f2c
	if (ctx.cr6.lt) goto loc_82681F2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82681F78:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82681F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82681fbc
	if (!ctx.cr6.gt) goto loc_82681FBC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82681F98:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x8267ef40
	ctx.lr = 0x82681FA8;
	sub_8267EF40(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 + 60;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82681f98
	if (ctx.cr6.lt) goto loc_82681F98;
loc_82681FBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82681FC8"))) PPC_WEAK_FUNC(sub_82681FC8);
PPC_FUNC_IMPL(__imp__sub_82681FC8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mulli r5,r9,60
	ctx.r5.s64 = ctx.r9.s64 * 60;
	// mulli r4,r8,60
	ctx.r4.s64 = ctx.r8.s64 * 60;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82681FF0"))) PPC_WEAK_FUNC(sub_82681FF0);
PPC_FUNC_IMPL(__imp__sub_82681FF0) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,60
	ctx.r5.s64 = 60;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82682000"))) PPC_WEAK_FUNC(sub_82682000);
PPC_FUNC_IMPL(__imp__sub_82682000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682004"))) PPC_WEAK_FUNC(sub_82682004);
PPC_FUNC_IMPL(__imp__sub_82682004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682008"))) PPC_WEAK_FUNC(sub_82682008);
PPC_FUNC_IMPL(__imp__sub_82682008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82682010;
	__savegprlr_17(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82682034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,436(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// lwz r7,672(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 672);
	// lwz r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r7,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r7.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82682054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82681d48
	ctx.lr = 0x82682060;
	sub_82681D48(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// stb r9,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r9.u8);
	// li r3,32
	ctx.r3.s64 = 32;
	// stb r5,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r5.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r3,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r3.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r4,20
	ctx.r4.s64 = 20;
	// stb r8,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r8.u8);
	// li r5,24
	ctx.r5.s64 = 24;
	// stb r10,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r10.u8);
	// stb r4,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r4.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r9,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r9.u8);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stb r9,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r9.u8);
	// li r11,60
	ctx.r11.s64 = 60;
	// stb r5,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r5.u8);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stb r4,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r4.u8);
	// li r28,12
	ctx.r28.s64 = 12;
	// stb r8,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// li r23,36
	ctx.r23.s64 = 36;
	// stw r8,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// stb r10,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r10.u8);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stb r10,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r10.u8);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stb r10,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r10.u8);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stb r10,198(r1)
	PPC_STORE_U8(ctx.r1.u32 + 198, ctx.r10.u8);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r22,44(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stb r3,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r3.u8);
	// lwz r21,116(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r3,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r3.u8);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stb r3,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r3.u8);
	// stb r3,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r3.u8);
	// lwz r20,180(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r28,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r28.u8);
	// stb r11,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r11.u8);
	// stb r3,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r3.u8);
	// stw r6,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r6.u32);
	// stw r4,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r4.u32);
	// stw r21,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r21.u32);
	// stb r5,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r5.u8);
	// stb r11,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// stb r23,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r23.u8);
	// stb r11,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r11.u8);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,48
	ctx.r6.s64 = 48;
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// lwz r19,132(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r18,164(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r28,256
	ctx.r3.s64 = ctx.r28.s64 + 256;
	// lwz r17,196(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r20,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r20.u32);
	// stw r7,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// stw r9,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// stw r23,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r23.u32);
	// stw r27,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r27.u32);
	// stw r29,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// stw r21,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r21.u32);
	// stw r26,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r26.u32);
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// stw r19,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r19.u32);
	// stw r25,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r25.u32);
	// stw r22,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r22.u32);
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// stw r8,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r8.u32);
	// stw r18,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r18.u32);
	// stw r24,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r24.u32);
	// stb r6,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r6.u8);
	// stb r11,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r11.u8);
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// stw r29,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r29.u32);
	// stw r17,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r17.u32);
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x826821E0;
	sub_82CB1160(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828328f8
	ctx.lr = 0x826821E8;
	sub_828328F8(ctx, base);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x826821FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82682204"))) PPC_WEAK_FUNC(sub_82682204);
PPC_FUNC_IMPL(__imp__sub_82682204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682208"))) PPC_WEAK_FUNC(sub_82682208);
PPC_FUNC_IMPL(__imp__sub_82682208) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r9,r10,24640
	ctx.r9.s64 = ctx.r10.s64 + 24640;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682238"))) PPC_WEAK_FUNC(sub_82682238);
PPC_FUNC_IMPL(__imp__sub_82682238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82682240;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ae4
	ctx.lr = 0x82682248;
	__savefpr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mulli r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 * 60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826823c4
	if (ctx.cr6.eq) goto loc_826823C4;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e76378
	ctx.lr = 0x8268227C;
	sub_82E76378(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e76f10
	ctx.lr = 0x82682290;
	sub_82E76F10(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826822AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x826823b8
	if (!ctx.cr6.gt) goto loc_826823B8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f27,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f28.f64 = double(temp.f32);
loc_826822D4:
	// stfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x8267f8a0
	ctx.lr = 0x826822F4;
	sub_8267F8A0(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmr f29,f28
	ctx.f29.f64 = ctx.f28.f64;
	// ble cr6,0x8268235c
	if (!ctx.cr6.gt) goto loc_8268235C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82682314:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lfs f1,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8265bb08
	ctx.lr = 0x82682330;
	sub_8265BB08(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fadds f29,f12,f29
	ctx.f29.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// blt cr6,0x82682314
	if (ctx.cr6.lt) goto loc_82682314;
loc_8268235C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f29,f0
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f8,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fadds f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f6,184(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f5,188(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x826823A0;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,60
	ctx.r24.s64 = ctx.r24.s64 + 60;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826822d4
	if (ctx.cr6.lt) goto loc_826822D4;
loc_826823B8:
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82e77010
	ctx.lr = 0x826823C4;
	sub_82E77010(ctx, base);
loc_826823C4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b30
	ctx.lr = 0x826823D0;
	__restfpr_27(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826823D4"))) PPC_WEAK_FUNC(sub_826823D4);
PPC_FUNC_IMPL(__imp__sub_826823D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826823D8"))) PPC_WEAK_FUNC(sub_826823D8);
PPC_FUNC_IMPL(__imp__sub_826823D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826823DC"))) PPC_WEAK_FUNC(sub_826823DC);
PPC_FUNC_IMPL(__imp__sub_826823DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826823E0"))) PPC_WEAK_FUNC(sub_826823E0);
PPC_FUNC_IMPL(__imp__sub_826823E0) {
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

__attribute__((alias("__imp__sub_826823F0"))) PPC_WEAK_FUNC(sub_826823F0);
PPC_FUNC_IMPL(__imp__sub_826823F0) {
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
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8268241C;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
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

__attribute__((alias("__imp__sub_8268243C"))) PPC_WEAK_FUNC(sub_8268243C);
PPC_FUNC_IMPL(__imp__sub_8268243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682440"))) PPC_WEAK_FUNC(sub_82682440);
PPC_FUNC_IMPL(__imp__sub_82682440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682444"))) PPC_WEAK_FUNC(sub_82682444);
PPC_FUNC_IMPL(__imp__sub_82682444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682448"))) PPC_WEAK_FUNC(sub_82682448);
PPC_FUNC_IMPL(__imp__sub_82682448) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682450"))) PPC_WEAK_FUNC(sub_82682450);
PPC_FUNC_IMPL(__imp__sub_82682450) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// stb r6,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r6.u8);
	// stb r7,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682468"))) PPC_WEAK_FUNC(sub_82682468);
PPC_FUNC_IMPL(__imp__sub_82682468) {
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
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82e640b8
	ctx.lr = 0x82682490;
	sub_82E640B8(ctx, base);
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

__attribute__((alias("__imp__sub_826824A8"))) PPC_WEAK_FUNC(sub_826824A8);
PPC_FUNC_IMPL(__imp__sub_826824A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826824B8"))) PPC_WEAK_FUNC(sub_826824B8);
PPC_FUNC_IMPL(__imp__sub_826824B8) {
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

__attribute__((alias("__imp__sub_826824C8"))) PPC_WEAK_FUNC(sub_826824C8);
PPC_FUNC_IMPL(__imp__sub_826824C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826824D0"))) PPC_WEAK_FUNC(sub_826824D0);
PPC_FUNC_IMPL(__imp__sub_826824D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,-28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// addi r8,r10,-3196
	ctx.r8.s64 = ctx.r10.s64 + -3196;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r8,-32(r3)
	PPC_STORE_U32(ctx.r3.u32 + -32, ctx.r8.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r7,-3180
	ctx.r5.s64 = ctx.r7.s64 + -3180;
	// stw r5,-20(r6)
	PPC_STORE_U32(ctx.r6.u32 + -20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826824FC"))) PPC_WEAK_FUNC(sub_826824FC);
PPC_FUNC_IMPL(__imp__sub_826824FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682500"))) PPC_WEAK_FUNC(sub_82682500);
PPC_FUNC_IMPL(__imp__sub_82682500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,-3196
	ctx.r8.s64 = ctx.r11.s64 + -3196;
	// addi r7,r9,-3180
	ctx.r7.s64 = ctx.r9.s64 + -3180;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// addi r7,r9,24744
	ctx.r7.s64 = ctx.r9.s64 + 24744;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r9,r6,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r8,r10,24764
	ctx.r8.s64 = ctx.r10.s64 + 24764;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lfs f0,-15120(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// oris r11,r4,32768
	ctx.r11.u64 = ctx.r4.u64 | 2147483648;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682578"))) PPC_WEAK_FUNC(sub_82682578);
PPC_FUNC_IMPL(__imp__sub_82682578) {
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,-28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r31,r3,-32
	ctx.r31.s64 = ctx.r3.s64 + -32;
	// addi r8,r10,-3196
	ctx.r8.s64 = ctx.r10.s64 + -3196;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r8,-32(r3)
	PPC_STORE_U32(ctx.r3.u32 + -32, ctx.r8.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r11,r7,-3180
	ctx.r11.s64 = ctx.r7.s64 + -3180;
	// addi r10,r6,-18824
	ctx.r10.s64 = ctx.r6.s64 + -18824;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// stw r11,-20(r5)
	PPC_STORE_U32(ctx.r5.u32 + -20, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826825d8
	if (ctx.cr6.eq) goto loc_826825D8;
	// bl 0x82294a58
	ctx.lr = 0x826825D4;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826825D8:
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

__attribute__((alias("__imp__sub_826825EC"))) PPC_WEAK_FUNC(sub_826825EC);
PPC_FUNC_IMPL(__imp__sub_826825EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826825F0"))) PPC_WEAK_FUNC(sub_826825F0);
PPC_FUNC_IMPL(__imp__sub_826825F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// addi r8,r10,-3196
	ctx.r8.s64 = ctx.r10.s64 + -3196;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r7,-3180
	ctx.r4.s64 = ctx.r7.s64 + -3180;
	// addi r11,r6,-18824
	ctx.r11.s64 = ctx.r6.s64 + -18824;
	// stw r4,-20(r5)
	PPC_STORE_U32(ctx.r5.u32 + -20, ctx.r4.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682628"))) PPC_WEAK_FUNC(sub_82682628);
PPC_FUNC_IMPL(__imp__sub_82682628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f5,12(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682668"))) PPC_WEAK_FUNC(sub_82682668);
PPC_FUNC_IMPL(__imp__sub_82682668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,264(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r9,r8,29,0,8
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 29) & 0xFF800000) | (ctx.r9.u64 & 0xFFFFFFFF007FFFFF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,260(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r9,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826826AC"))) PPC_WEAK_FUNC(sub_826826AC);
PPC_FUNC_IMPL(__imp__sub_826826AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826826B0"))) PPC_WEAK_FUNC(sub_826826B0);
PPC_FUNC_IMPL(__imp__sub_826826B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lwz r8,24(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// lwz r7,28(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// lwz r6,32(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// lwz r4,36(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// lwz r11,40(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682768"))) PPC_WEAK_FUNC(sub_82682768);
PPC_FUNC_IMPL(__imp__sub_82682768) {
	PPC_FUNC_PROLOGUE();
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r10,12(r3)
	PPC_STORE_U64(ctx.r3.u32 + 12, ctx.r10.u64);
	// std r9,20(r3)
	PPC_STORE_U64(ctx.r3.u32 + 20, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682790"))) PPC_WEAK_FUNC(sub_82682790);
PPC_FUNC_IMPL(__imp__sub_82682790) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826827C4"))) PPC_WEAK_FUNC(sub_826827C4);
PPC_FUNC_IMPL(__imp__sub_826827C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826827C8"))) PPC_WEAK_FUNC(sub_826827C8);
PPC_FUNC_IMPL(__imp__sub_826827C8) {
	PPC_FUNC_PROLOGUE();
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r10,12(r3)
	PPC_STORE_U64(ctx.r3.u32 + 12, ctx.r10.u64);
	// std r9,20(r3)
	PPC_STORE_U64(ctx.r3.u32 + 20, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826827EC"))) PPC_WEAK_FUNC(sub_826827EC);
PPC_FUNC_IMPL(__imp__sub_826827EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826827F0"))) PPC_WEAK_FUNC(sub_826827F0);
PPC_FUNC_IMPL(__imp__sub_826827F0) {
	PPC_FUNC_PROLOGUE();
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r10,12(r3)
	PPC_STORE_U64(ctx.r3.u32 + 12, ctx.r10.u64);
	// std r9,20(r3)
	PPC_STORE_U64(ctx.r3.u32 + 20, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682818"))) PPC_WEAK_FUNC(sub_82682818);
PPC_FUNC_IMPL(__imp__sub_82682818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682864"))) PPC_WEAK_FUNC(sub_82682864);
PPC_FUNC_IMPL(__imp__sub_82682864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682868"))) PPC_WEAK_FUNC(sub_82682868);
PPC_FUNC_IMPL(__imp__sub_82682868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268288C"))) PPC_WEAK_FUNC(sub_8268288C);
PPC_FUNC_IMPL(__imp__sub_8268288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682890"))) PPC_WEAK_FUNC(sub_82682890);
PPC_FUNC_IMPL(__imp__sub_82682890) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682898"))) PPC_WEAK_FUNC(sub_82682898);
PPC_FUNC_IMPL(__imp__sub_82682898) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826828C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_826828D8"))) PPC_WEAK_FUNC(sub_826828D8);
PPC_FUNC_IMPL(__imp__sub_826828D8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826828E0"))) PPC_WEAK_FUNC(sub_826828E0);
PPC_FUNC_IMPL(__imp__sub_826828E0) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,24992
	ctx.r10.s64 = ctx.r11.s64 + 24992;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82682904;
	sub_8229C068(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-15752
	ctx.r8.s64 = ctx.r9.s64 + -15752;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82682918;
	sub_8229C068(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x825366b0
	ctx.lr = 0x82682920;
	sub_825366B0(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825333f0
	ctx.lr = 0x82682928;
	sub_825333F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x82682930;
	sub_8229C628(ctx, base);
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

__attribute__((alias("__imp__sub_82682944"))) PPC_WEAK_FUNC(sub_82682944);
PPC_FUNC_IMPL(__imp__sub_82682944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682948"))) PPC_WEAK_FUNC(sub_82682948);
PPC_FUNC_IMPL(__imp__sub_82682948) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r9,24992
	ctx.r8.s64 = ctx.r9.s64 + 24992;
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

__attribute__((alias("__imp__sub_82682970"))) PPC_WEAK_FUNC(sub_82682970);
PPC_FUNC_IMPL(__imp__sub_82682970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// rlwinm r3,r11,10,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268297C"))) PPC_WEAK_FUNC(sub_8268297C);
PPC_FUNC_IMPL(__imp__sub_8268297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682980"))) PPC_WEAK_FUNC(sub_82682980);
PPC_FUNC_IMPL(__imp__sub_82682980) {
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
	// bl 0x826828e0
	ctx.lr = 0x826829A0;
	sub_826828E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826829d4
	if (ctx.cr6.eq) goto loc_826829D4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826829cc
	if (ctx.cr6.lt) goto loc_826829CC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826829d4
	if (!ctx.cr6.gt) goto loc_826829D4;
loc_826829CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826829D4;
	sub_82294A58(ctx, base);
loc_826829D4:
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

__attribute__((alias("__imp__sub_826829F0"))) PPC_WEAK_FUNC(sub_826829F0);
PPC_FUNC_IMPL(__imp__sub_826829F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r9,24992
	ctx.r8.s64 = ctx.r9.s64 + 24992;
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

__attribute__((alias("__imp__sub_82682A10"))) PPC_WEAK_FUNC(sub_82682A10);
PPC_FUNC_IMPL(__imp__sub_82682A10) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682A18"))) PPC_WEAK_FUNC(sub_82682A18);
PPC_FUNC_IMPL(__imp__sub_82682A18) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,25368
	ctx.r10.s64 = ctx.r11.s64 + 25368;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82682A3C;
	sub_8229C068(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x826864b0
	ctx.lr = 0x82682A44;
	sub_826864B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826828e0
	ctx.lr = 0x82682A4C;
	sub_826828E0(ctx, base);
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

__attribute__((alias("__imp__sub_82682A60"))) PPC_WEAK_FUNC(sub_82682A60);
PPC_FUNC_IMPL(__imp__sub_82682A60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r9,25368
	ctx.r8.s64 = ctx.r9.s64 + 25368;
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

__attribute__((alias("__imp__sub_82682A88"))) PPC_WEAK_FUNC(sub_82682A88);
PPC_FUNC_IMPL(__imp__sub_82682A88) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,25368
	ctx.r10.s64 = ctx.r11.s64 + 25368;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82682AB4;
	sub_8229C068(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x826864b0
	ctx.lr = 0x82682ABC;
	sub_826864B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826828e0
	ctx.lr = 0x82682AC4;
	sub_826828E0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82682af8
	if (ctx.cr6.eq) goto loc_82682AF8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82682af0
	if (ctx.cr6.lt) goto loc_82682AF0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82682af8
	if (!ctx.cr6.gt) goto loc_82682AF8;
loc_82682AF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82682AF8;
	sub_82294A58(ctx, base);
loc_82682AF8:
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

__attribute__((alias("__imp__sub_82682B14"))) PPC_WEAK_FUNC(sub_82682B14);
PPC_FUNC_IMPL(__imp__sub_82682B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682B18"))) PPC_WEAK_FUNC(sub_82682B18);
PPC_FUNC_IMPL(__imp__sub_82682B18) {
	PPC_FUNC_PROLOGUE();
	// b 0x826864b0
	sub_826864B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82682B1C"))) PPC_WEAK_FUNC(sub_82682B1C);
PPC_FUNC_IMPL(__imp__sub_82682B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682B20"))) PPC_WEAK_FUNC(sub_82682B20);
PPC_FUNC_IMPL(__imp__sub_82682B20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r9,25368
	ctx.r8.s64 = ctx.r9.s64 + 25368;
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

__attribute__((alias("__imp__sub_82682B40"))) PPC_WEAK_FUNC(sub_82682B40);
PPC_FUNC_IMPL(__imp__sub_82682B40) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682B48"))) PPC_WEAK_FUNC(sub_82682B48);
PPC_FUNC_IMPL(__imp__sub_82682B48) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,25752
	ctx.r10.s64 = ctx.r11.s64 + 25752;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82682B6C;
	sub_8229C068(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,25368
	ctx.r8.s64 = ctx.r9.s64 + 25368;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82682B80;
	sub_8229C068(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x826864b0
	ctx.lr = 0x82682B88;
	sub_826864B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826828e0
	ctx.lr = 0x82682B90;
	sub_826828E0(ctx, base);
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

__attribute__((alias("__imp__sub_82682BA4"))) PPC_WEAK_FUNC(sub_82682BA4);
PPC_FUNC_IMPL(__imp__sub_82682BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682BA8"))) PPC_WEAK_FUNC(sub_82682BA8);
PPC_FUNC_IMPL(__imp__sub_82682BA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r9,25752
	ctx.r8.s64 = ctx.r9.s64 + 25752;
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

__attribute__((alias("__imp__sub_82682BD0"))) PPC_WEAK_FUNC(sub_82682BD0);
PPC_FUNC_IMPL(__imp__sub_82682BD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682BD8"))) PPC_WEAK_FUNC(sub_82682BD8);
PPC_FUNC_IMPL(__imp__sub_82682BD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682BE0"))) PPC_WEAK_FUNC(sub_82682BE0);
PPC_FUNC_IMPL(__imp__sub_82682BE0) {
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
	// bl 0x82682b48
	ctx.lr = 0x82682C00;
	sub_82682B48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682c34
	if (ctx.cr6.eq) goto loc_82682C34;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82682c2c
	if (ctx.cr6.lt) goto loc_82682C2C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82682c34
	if (!ctx.cr6.gt) goto loc_82682C34;
loc_82682C2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82682C34;
	sub_82294A58(ctx, base);
loc_82682C34:
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

__attribute__((alias("__imp__sub_82682C50"))) PPC_WEAK_FUNC(sub_82682C50);
PPC_FUNC_IMPL(__imp__sub_82682C50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r9,25752
	ctx.r8.s64 = ctx.r9.s64 + 25752;
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

__attribute__((alias("__imp__sub_82682C70"))) PPC_WEAK_FUNC(sub_82682C70);
PPC_FUNC_IMPL(__imp__sub_82682C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82682C8C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82682d14
	if (ctx.cr6.eq) goto loc_82682D14;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32152
	ctx.r31.s64 = -2107113472;
	// addi r11,r7,24776
	ctx.r11.s64 = ctx.r7.s64 + 24776;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,10568
	ctx.r5.s64 = ctx.r31.s64 + 10568;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,244
	ctx.r5.s64 = 244;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82682D00;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82682D14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682D2C"))) PPC_WEAK_FUNC(sub_82682D2C);
PPC_FUNC_IMPL(__imp__sub_82682D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682D30"))) PPC_WEAK_FUNC(sub_82682D30);
PPC_FUNC_IMPL(__imp__sub_82682D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82682D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-29812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29812);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82682d64
	if (!ctx.cr6.eq) goto loc_82682D64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82522ef0
	ctx.lr = 0x82682D58;
	sub_82522EF0(ctx, base);
	// stw r3,-29812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29812, ctx.r3.u32);
	// bl 0x82522fb0
	ctx.lr = 0x82682D60;
	sub_82522FB0(ctx, base);
	// lwz r10,-29812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29812);
loc_82682D64:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27964(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27964);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82682d84
	if (ctx.cr6.eq) goto loc_82682D84;
	// bl 0x822d8978
	ctx.lr = 0x82682D78;
	sub_822D8978(ctx, base);
	// lwz r11,-27964(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27964);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82682d8c
	goto loc_82682D8C;
loc_82682D84:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82682D8C:
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
	// bne cr6,0x82682dbc
	if (!ctx.cr6.eq) goto loc_82682DBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82682DAC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82682DB4;
	sub_822AADA8(ctx, base);
	// lwz r11,-27964(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27964);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82682DBC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82682de8
	if (!ctx.cr6.eq) goto loc_82682DE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82682DD8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82682DE0;
	sub_82398640(ctx, base);
	// lwz r11,-27964(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27964);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82682DE8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82682e20
	if (ctx.cr6.eq) goto loc_82682E20;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82682E04;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82682e20
	if (!ctx.cr6.eq) goto loc_82682E20;
	// lwz r3,-27964(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27964);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82682E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82682E20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82682E28"))) PPC_WEAK_FUNC(sub_82682E28);
PPC_FUNC_IMPL(__imp__sub_82682E28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682E30"))) PPC_WEAK_FUNC(sub_82682E30);
PPC_FUNC_IMPL(__imp__sub_82682E30) {
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
	// lwz r11,-29812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29812);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82682e74
	if (!ctx.cr6.eq) goto loc_82682E74;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82522ef0
	ctx.lr = 0x82682E68;
	sub_82522EF0(ctx, base);
	// stw r3,-29812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29812, ctx.r3.u32);
	// bl 0x82522fb0
	ctx.lr = 0x82682E70;
	sub_82522FB0(ctx, base);
	// lwz r11,-29812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29812);
loc_82682E74:
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

__attribute__((alias("__imp__sub_82682E9C"))) PPC_WEAK_FUNC(sub_82682E9C);
PPC_FUNC_IMPL(__imp__sub_82682E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682EA0"))) PPC_WEAK_FUNC(sub_82682EA0);
PPC_FUNC_IMPL(__imp__sub_82682EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82682EBC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82682f44
	if (ctx.cr6.eq) goto loc_82682F44;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32152
	ctx.r31.s64 = -2107113472;
	// addi r11,r7,24812
	ctx.r11.s64 = ctx.r7.s64 + 24812;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,10848
	ctx.r5.s64 = ctx.r31.s64 + 10848;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82682F30;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82682F44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682F5C"))) PPC_WEAK_FUNC(sub_82682F5C);
PPC_FUNC_IMPL(__imp__sub_82682F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682F60"))) PPC_WEAK_FUNC(sub_82682F60);
PPC_FUNC_IMPL(__imp__sub_82682F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82682F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27964(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27964);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82682f94
	if (!ctx.cr6.eq) goto loc_82682F94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82682c70
	ctx.lr = 0x82682F88;
	sub_82682C70(ctx, base);
	// stw r3,-27964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27964, ctx.r3.u32);
	// bl 0x82682d30
	ctx.lr = 0x82682F90;
	sub_82682D30(ctx, base);
	// lwz r10,-27964(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27964);
loc_82682F94:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27960);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82682fb4
	if (ctx.cr6.eq) goto loc_82682FB4;
	// bl 0x822d9388
	ctx.lr = 0x82682FA8;
	sub_822D9388(ctx, base);
	// lwz r11,-27960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27960);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82682fbc
	goto loc_82682FBC;
loc_82682FB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82682FBC:
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
	// bne cr6,0x82682fec
	if (!ctx.cr6.eq) goto loc_82682FEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82682FDC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82682FE4;
	sub_822AADA8(ctx, base);
	// lwz r11,-27960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27960);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82682FEC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82683018
	if (!ctx.cr6.eq) goto loc_82683018;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82683008;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82683010;
	sub_82398640(ctx, base);
	// lwz r11,-27960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27960);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82683018:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82683050
	if (ctx.cr6.eq) goto loc_82683050;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82683034;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82683050
	if (!ctx.cr6.eq) goto loc_82683050;
	// lwz r3,-27960(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27960);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82683050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82683050:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82683058"))) PPC_WEAK_FUNC(sub_82683058);
PPC_FUNC_IMPL(__imp__sub_82683058) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82683060"))) PPC_WEAK_FUNC(sub_82683060);
PPC_FUNC_IMPL(__imp__sub_82683060) {
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
	// lwz r11,-27964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27964);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826830a4
	if (!ctx.cr6.eq) goto loc_826830A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82682c70
	ctx.lr = 0x82683098;
	sub_82682C70(ctx, base);
	// stw r3,-27964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27964, ctx.r3.u32);
	// bl 0x82682d30
	ctx.lr = 0x826830A0;
	sub_82682D30(ctx, base);
	// lwz r11,-27964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27964);
loc_826830A4:
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

__attribute__((alias("__imp__sub_826830CC"))) PPC_WEAK_FUNC(sub_826830CC);
PPC_FUNC_IMPL(__imp__sub_826830CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826830D0"))) PPC_WEAK_FUNC(sub_826830D0);
PPC_FUNC_IMPL(__imp__sub_826830D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826830EC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82683174
	if (ctx.cr6.eq) goto loc_82683174;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32152
	ctx.r31.s64 = -2107113472;
	// addi r11,r7,24868
	ctx.r11.s64 = ctx.r7.s64 + 24868;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,11176
	ctx.r5.s64 = ctx.r31.s64 + 11176;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,360
	ctx.r5.s64 = 360;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82683160;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82683174:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268318C"))) PPC_WEAK_FUNC(sub_8268318C);
PPC_FUNC_IMPL(__imp__sub_8268318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82683190"))) PPC_WEAK_FUNC(sub_82683190);
PPC_FUNC_IMPL(__imp__sub_82683190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82683198;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27960);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826831c4
	if (!ctx.cr6.eq) goto loc_826831C4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82682ea0
	ctx.lr = 0x826831B8;
	sub_82682EA0(ctx, base);
	// stw r3,-27960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27960, ctx.r3.u32);
	// bl 0x82682f60
	ctx.lr = 0x826831C0;
	sub_82682F60(ctx, base);
	// lwz r10,-27960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27960);
loc_826831C4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27956(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27956);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826831e4
	if (ctx.cr6.eq) goto loc_826831E4;
	// bl 0x822d93d8
	ctx.lr = 0x826831D8;
	sub_822D93D8(ctx, base);
	// lwz r11,-27956(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27956);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826831ec
	goto loc_826831EC;
loc_826831E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826831EC:
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
	// bne cr6,0x8268321c
	if (!ctx.cr6.eq) goto loc_8268321C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x8268320C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82683214;
	sub_822AADA8(ctx, base);
	// lwz r11,-27956(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27956);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_8268321C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82683248
	if (!ctx.cr6.eq) goto loc_82683248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82683238;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82683240;
	sub_82398640(ctx, base);
	// lwz r11,-27956(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27956);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82683248:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82683280
	if (ctx.cr6.eq) goto loc_82683280;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82683264;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82683280
	if (!ctx.cr6.eq) goto loc_82683280;
	// lwz r3,-27956(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27956);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82683280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82683280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82683288"))) PPC_WEAK_FUNC(sub_82683288);
PPC_FUNC_IMPL(__imp__sub_82683288) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82683290"))) PPC_WEAK_FUNC(sub_82683290);
PPC_FUNC_IMPL(__imp__sub_82683290) {
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
	// lwz r11,-27960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27960);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826832d4
	if (!ctx.cr6.eq) goto loc_826832D4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82682ea0
	ctx.lr = 0x826832C8;
	sub_82682EA0(ctx, base);
	// stw r3,-27960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27960, ctx.r3.u32);
	// bl 0x82682f60
	ctx.lr = 0x826832D0;
	sub_82682F60(ctx, base);
	// lwz r11,-27960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27960);
loc_826832D4:
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

__attribute__((alias("__imp__sub_826832FC"))) PPC_WEAK_FUNC(sub_826832FC);
PPC_FUNC_IMPL(__imp__sub_826832FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82683300"))) PPC_WEAK_FUNC(sub_82683300);
PPC_FUNC_IMPL(__imp__sub_82683300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f1,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268332C"))) PPC_WEAK_FUNC(sub_8268332C);
PPC_FUNC_IMPL(__imp__sub_8268332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82683330"))) PPC_WEAK_FUNC(sub_82683330);
PPC_FUNC_IMPL(__imp__sub_82683330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82683368"))) PPC_WEAK_FUNC(sub_82683368);
PPC_FUNC_IMPL(__imp__sub_82683368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268336C"))) PPC_WEAK_FUNC(sub_8268336C);
PPC_FUNC_IMPL(__imp__sub_8268336C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82683370"))) PPC_WEAK_FUNC(sub_82683370);
PPC_FUNC_IMPL(__imp__sub_82683370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826833d8
	if (ctx.cr6.eq) goto loc_826833D8;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x826833d8
	if (ctx.cr6.eq) goto loc_826833D8;
	// lfs f2,196(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fdivs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f0.f64));
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,24932
	ctx.r4.s64 = ctx.r10.s64 + 24932;
	// lfs f0,32548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8232e868
	ctx.lr = 0x826833D4;
	sub_8232E868(ctx, base);
	// b 0x826833e8
	goto loc_826833E8;
loc_826833D8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24924
	ctx.r4.s64 = ctx.r11.s64 + 24924;
	// bl 0x8232e868
	ctx.lr = 0x826833E8;
	sub_8232E868(ctx, base);
loc_826833E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82683400"))) PPC_WEAK_FUNC(sub_82683400);
PPC_FUNC_IMPL(__imp__sub_82683400) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 180);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82683428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683488
	if (ctx.cr6.eq) goto loc_82683488;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82683488
	if (ctx.cr6.eq) goto loc_82683488;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,528(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82683464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,80(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82683488
	if (ctx.cr6.eq) goto loc_82683488;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82683488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82683488:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,28896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28896);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826834A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_826834BC"))) PPC_WEAK_FUNC(sub_826834BC);
PPC_FUNC_IMPL(__imp__sub_826834BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826834C0"))) PPC_WEAK_FUNC(sub_826834C0);
PPC_FUNC_IMPL(__imp__sub_826834C0) {
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
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// bl 0x82521338
	ctx.lr = 0x826834DC;
	sub_82521338(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826834F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82683508"))) PPC_WEAK_FUNC(sub_82683508);
PPC_FUNC_IMPL(__imp__sub_82683508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268351c
	if (ctx.cr6.eq) goto loc_8268351C;
	// lwz r11,916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
loc_8268351C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,180(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 180);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82683530"))) PPC_WEAK_FUNC(sub_82683530);
PPC_FUNC_IMPL(__imp__sub_82683530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lfs f0,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r9,944(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 944);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r6,r8,18,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x1;
	// fmuls f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// b 0x82683598
	sub_82683598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82683594"))) PPC_WEAK_FUNC(sub_82683594);
PPC_FUNC_IMPL(__imp__sub_82683594) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82683598"))) PPC_WEAK_FUNC(sub_82683598);
PPC_FUNC_IMPL(__imp__sub_82683598) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683748
	if (ctx.cr6.eq) goto loc_82683748;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x82683748
	if (ctx.cr6.eq) goto loc_82683748;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// beq cr6,0x82683748
	if (ctx.cr6.eq) goto loc_82683748;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82683678
	if (ctx.cr6.eq) goto loc_82683678;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82683678
	if (!ctx.cr6.gt) goto loc_82683678;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82683614
	if (!ctx.cr6.eq) goto loc_82683614;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82683628
	if (ctx.cr6.eq) goto loc_82683628;
loc_82683614:
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8268362c
	if (!ctx.cr6.eq) goto loc_8268362C;
loc_82683628:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8268362C:
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82683640
	if (ctx.cr6.lt) goto loc_82683640;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82683640:
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r8,r9,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82683678
	if (!ctx.cr6.eq) goto loc_82683678;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82683660
	if (!ctx.cr6.eq) goto loc_82683660;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683678
	if (ctx.cr6.eq) goto loc_82683678;
loc_82683660:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82684d98
	ctx.lr = 0x8268366C;
	sub_82684D98(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683748
	if (ctx.cr6.eq) goto loc_82683748;
loc_82683678:
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f1,196(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f2,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// ble cr6,0x826836d4
	if (!ctx.cr6.gt) goto loc_826836D4;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826836b4
	if (ctx.cr6.eq) goto loc_826836B4;
	// bl 0x82cb4fa0
	ctx.lr = 0x826836A8;
	sub_82CB4FA0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// b 0x82683748
	goto loc_82683748;
loc_826836B4:
	// lfs f0,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f30,f29
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f29.f64));
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// fdivs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// fsubs f1,f29,f11
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// b 0x8268372c
	goto loc_8268372C;
loc_826836D4:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82683748
	if (!ctx.cr6.lt) goto loc_82683748;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82683714
	if (ctx.cr6.eq) goto loc_82683714;
	// bl 0x82cb4fa0
	ctx.lr = 0x826836F0;
	sub_82CB4FA0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82683748
	if (!ctx.cr6.lt) goto loc_82683748;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f13,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,196(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// b 0x82683748
	goto loc_82683748;
loc_82683714:
	// fdivs f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f29.f64));
	// stfs f31,196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fdivs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fadds f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
loc_8268372C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r11,1
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// lwz r8,372(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82683748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82683748:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_82683768"))) PPC_WEAK_FUNC(sub_82683768);
PPC_FUNC_IMPL(__imp__sub_82683768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82683770;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826837d4
	if (!ctx.cr6.gt) goto loc_826837D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268379C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,356(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826837C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8268379c
	if (ctx.cr6.lt) goto loc_8268379C;
loc_826837D4:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82683838
	if (ctx.cr6.eq) goto loc_82683838;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r30,76(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82683838
	if (ctx.cr6.eq) goto loc_82683838;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// ld r4,-20536(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20536);
	// bl 0x8229e490
	ctx.lr = 0x8268381C;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82683838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82683838:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82683848"))) PPC_WEAK_FUNC(sub_82683848);
PPC_FUNC_IMPL(__imp__sub_82683848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82683850;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825261d0
	ctx.lr = 0x82683874;
	sub_825261D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826838b0
	if (!ctx.cr6.eq) goto loc_826838B0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,208
	ctx.r5.s64 = ctx.r31.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826838b8
	ctx.lr = 0x8268389C;
	sub_826838B8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82526260
	ctx.lr = 0x826838B0;
	sub_82526260(ctx, base);
loc_826838B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826838B8"))) PPC_WEAK_FUNC(sub_826838B8);
PPC_FUNC_IMPL(__imp__sub_826838B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x826838C0;
	__savegprlr_16(ctx, base);
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// addi r11,r11,-13736
	ctx.r11.s64 = ctx.r11.s64 + -13736;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826838F8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826838f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826838F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82683be0
	if (ctx.cr6.eq) goto loc_82683BE0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82683be0
	if (ctx.cr6.eq) goto loc_82683BE0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r22,40(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// lwz r9,60(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,236(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 236);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,88(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r26,704(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x82683970
	if (!ctx.cr6.eq) goto loc_82683970;
	// lbz r11,237(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 237);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82683970
	if (!ctx.cr6.eq) goto loc_82683970;
	// lbz r11,238(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 238);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683974
	if (ctx.cr6.eq) goto loc_82683974;
loc_82683970:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82683974:
	// lbz r11,239(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 239);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268399c
	if (!ctx.cr6.eq) goto loc_8268399C;
	// lbz r11,240(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268399c
	if (!ctx.cr6.eq) goto loc_8268399C;
	// lbz r11,241(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 241);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x826839a0
	if (ctx.cr6.eq) goto loc_826839A0;
loc_8268399C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826839A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826839b4
	if (!ctx.cr6.eq) goto loc_826839B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r18,0
	ctx.r18.s64 = 0;
	// beq cr6,0x826839b8
	if (ctx.cr6.eq) goto loc_826839B8;
loc_826839B4:
	// li r18,1
	ctx.r18.s64 = 1;
loc_826839B8:
	// lwz r11,944(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 944);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// rlwinm r24,r11,18,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82683bf8
	if (!ctx.cr6.gt) goto loc_82683BF8;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r20,r11,-17776
	ctx.r20.s64 = ctx.r11.s64 + -17776;
	// lfs f31,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f30.f64 = double(temp.f32);
loc_826839E8:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,12(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// lbzx r31,r11,r23
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// rotlwi r9,r31,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bne cr6,0x82683a88
	if (!ctx.cr6.eq) goto loc_82683A88;
	// lwz r10,124(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 124);
	// mulli r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 * 68;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r6,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82683A70:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82683a70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82683A70;
	// b 0x82683bc0
	goto loc_82683BC0;
loc_82683A88:
	// lwz r11,192(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 192);
	// cntlzw r10,r31
	ctx.r10.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82683ac8
	if (ctx.cr6.eq) goto loc_82683AC8;
	// lwz r11,92(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82683ac8
	if (!ctx.cr6.eq) goto loc_82683AC8;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82683ac0
	if (ctx.cr6.eq) goto loc_82683AC0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82683ac8
	if (!ctx.cr6.eq) goto loc_82683AC8;
loc_82683AC0:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82683acc
	goto loc_82683ACC;
loc_82683AC8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82683ACC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lfs f1,196(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82639d58
	ctx.lr = 0x82683AE8;
	sub_82639D58(ctx, base);
	// lwz r11,60(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82683b3c
	if (ctx.cr6.eq) goto loc_82683B3C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82683b3c
	if (!ctx.cr6.gt) goto loc_82683B3C;
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82683b3c
	if (!ctx.cr6.eq) goto loc_82683B3C;
	// lwz r9,124(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 124);
	// mulli r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 * 68;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
loc_82683B3C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82683ba0
	if (ctx.cr6.eq) goto loc_82683BA0;
	// lwz r11,192(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 192);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82683b7c
	if (ctx.cr6.eq) goto loc_82683B7C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
loc_82683B7C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82683ba0
	if (ctx.cr6.eq) goto loc_82683BA0;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82683c08
	ctx.lr = 0x82683BA0;
	sub_82683C08(ctx, base);
loc_82683BA0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82683bc0
	if (!ctx.cr6.gt) goto loc_82683BC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_82683BC0:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826839e8
	if (ctx.cr6.lt) goto loc_826839E8;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_82683BE0:
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x82683BF8;
	sub_82526028(ctx, base);
loc_82683BF8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82683C08"))) PPC_WEAK_FUNC(sub_82683C08);
PPC_FUNC_IMPL(__imp__sub_82683C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82683C10;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ab0
	ctx.lr = 0x82683C18;
	__savefpr_14(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r31,60(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// bl 0x823d7698
	ctx.lr = 0x82683C48;
	sub_823D7698(ctx, base);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82683C54:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82683c54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82683C54;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823829d8
	ctx.lr = 0x82683C74;
	sub_823829D8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,944(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r8,r10,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f30,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82639d58
	ctx.lr = 0x82683C9C;
	sub_82639D58(ctx, base);
	// lbz r9,236(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 236);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x82683cc8
	if (ctx.cr6.eq) goto loc_82683CC8;
	// lbz r11,237(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 237);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82683cc8
	if (ctx.cr6.eq) goto loc_82683CC8;
	// lbz r11,238(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 238);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82683ccc
	if (!ctx.cr6.eq) goto loc_82683CCC;
loc_82683CC8:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82683CCC:
	// lbz r11,239(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 239);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82683cf4
	if (ctx.cr6.eq) goto loc_82683CF4;
	// lbz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82683cf4
	if (ctx.cr6.eq) goto loc_82683CF4;
	// lbz r11,241(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 241);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82683cf8
	if (!ctx.cr6.eq) goto loc_82683CF8;
loc_82683CF4:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82683CF8:
	// lfs f22,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f22.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f21,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f15.f64 = double(temp.f32);
	// lfs f14,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f14.f64 = double(temp.f32);
	// lfs f23,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f23.f64 = double(temp.f32);
	// bne cr6,0x82683d30
	if (!ctx.cr6.eq) goto loc_82683D30;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82684918
	if (ctx.cr6.eq) goto loc_82684918;
loc_82683D30:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lfs f29,200(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x82683dec
	if (!ctx.cr6.eq) goto loc_82683DEC;
	// lwz r10,192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683de0
	if (ctx.cr6.eq) goto loc_82683DE0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82683de0
	if (ctx.cr6.eq) goto loc_82683DE0;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82683d80
	if (ctx.cr6.gt) goto loc_82683D80;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82683d88
	goto loc_82683D88;
loc_82683D80:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82683D88:
	// lfs f0,860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,88(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x82683dac
	if (!ctx.cr6.gt) goto loc_82683DAC;
	// fsubs f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// b 0x82683de4
	goto loc_82683DE4;
loc_82683DAC:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f2,80(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f31,f2
	ctx.cr6.compare(ctx.f31.f64, ctx.f2.f64);
	// ble cr6,0x82683de4
	if (!ctx.cr6.gt) goto loc_82683DE4;
	// rlwinm r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683dd8
	if (ctx.cr6.eq) goto loc_82683DD8;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4fa0
	ctx.lr = 0x82683DD0;
	sub_82CB4FA0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// b 0x82683de4
	goto loc_82683DE4;
loc_82683DD8:
	// fmr f31,f2
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f2.f64;
	// b 0x82683de4
	goto loc_82683DE4;
loc_82683DE0:
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
loc_82683DE4:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// beq cr6,0x826848f0
	if (ctx.cr6.eq) goto loc_826848F0;
loc_82683DEC:
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// beq cr6,0x82683e20
	if (ctx.cr6.eq) goto loc_82683E20;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r10,944(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 944);
	// rlwinm r8,r10,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// bl 0x82639d58
	ctx.lr = 0x82683E1C;
	sub_82639D58(ctx, base);
	// b 0x82683e44
	goto loc_82683E44;
loc_82683E20:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82683E30:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82683e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82683E30;
loc_82683E44:
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82683e78
	if (ctx.cr6.eq) goto loc_82683E78;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,944(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 944);
	// rlwinm r8,r10,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// bl 0x82639d58
	ctx.lr = 0x82683E74;
	sub_82639D58(ctx, base);
	// b 0x82683e9c
	goto loc_82683E9C;
loc_82683E78:
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82683E88:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82683e88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82683E88;
loc_82683E9C:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// ble cr6,0x82683ed8
	if (!ctx.cr6.gt) goto loc_82683ED8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82683eb4
	if (!ctx.cr6.eq) goto loc_82683EB4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82683ed8
	if (ctx.cr6.eq) goto loc_82683ED8;
loc_82683EB4:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f1,80(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,944(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 944);
	// rlwinm r8,r10,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// bl 0x82639d58
	ctx.lr = 0x82683ED8;
	sub_82639D58(ctx, base);
loc_82683ED8:
	// stfs f30,28(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 28, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82684064
	if (ctx.cr6.eq) goto loc_82684064;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// ble cr6,0x82683f50
	if (!ctx.cr6.gt) goto loc_82683F50;
	// lfs f0,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f9,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// lfs f2,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f1,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f12,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f8,f3,f4
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82683f80
	goto loc_82683F80;
loc_82683F50:
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f7,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82683F80:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// stw r9,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r9.u32);
	// lbz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 236);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82683fbc
	if (!ctx.cr6.eq) goto loc_82683FBC;
	// lbz r10,237(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 237);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82683fbc
	if (!ctx.cr6.eq) goto loc_82683FBC;
	// lbz r10,238(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 238);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82684088
	if (ctx.cr6.eq) goto loc_82684088;
loc_82683FBC:
	// lfs f13,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lfs f0,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f21,f13
	ctx.f11.f64 = double(float(ctx.f21.f64 * ctx.f13.f64));
	// fmuls f12,f17,f0
	ctx.f12.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// lfs f10,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f22,f13
	ctx.f9.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// lfs f8,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f10,f15,f11
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f15.f64 + ctx.f11.f64));
	// fmadds f5,f20,f13,f12
	ctx.f5.f64 = double(float(ctx.f20.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f3,f10,f16,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f16.f64 + ctx.f9.f64));
	// fmadds f1,f18,f0,f4
	ctx.f1.f64 = double(float(ctx.f18.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f2,f14,f10,f5
	ctx.f2.f64 = double(float(ctx.f14.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f0,f19,f0,f3
	ctx.f0.f64 = double(float(ctx.f19.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f13,f7,f30,f1
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f1.f64));
	// fmadds f12,f8,f30,f2
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fmadds f0,f6,f30,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f0.f64));
	// beq cr6,0x82684010
	if (ctx.cr6.eq) goto loc_82684010;
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
loc_82684010:
	// lbz r11,237(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 237);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82684020
	if (ctx.cr6.eq) goto loc_82684020;
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
loc_82684020:
	// lbz r11,238(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 238);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82684030
	if (ctx.cr6.eq) goto loc_82684030;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82684030:
	// fmuls f11,f15,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f15.f64 * ctx.f13.f64));
	// fmuls f10,f21,f13
	ctx.f10.f64 = double(float(ctx.f21.f64 * ctx.f13.f64));
	// fmuls f9,f18,f13
	ctx.f9.f64 = double(float(ctx.f18.f64 * ctx.f13.f64));
	// fmadds f8,f16,f0,f11
	ctx.f8.f64 = double(float(ctx.f16.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f7,f22,f0,f10
	ctx.f7.f64 = double(float(ctx.f22.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f6,f19,f0,f9
	ctx.f6.f64 = double(float(ctx.f19.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f5,f14,f12,f8
	ctx.f5.f64 = double(float(ctx.f14.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f4,f20,f12,f7
	ctx.f4.f64 = double(float(ctx.f20.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f3,f17,f12,f6
	ctx.f3.f64 = double(float(ctx.f17.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82684070
	goto loc_82684070;
loc_82684064:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82684070:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r9.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// stw r10,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r10.u32);
loc_82684088:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x826848c4
	if (ctx.cr6.eq) goto loc_826848C4;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ble cr6,0x826841ec
	if (!ctx.cr6.gt) goto loc_826841EC;
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f0
	ctx.f5.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f4,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f13
	ctx.f3.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f2,f4
	ctx.f2.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// lfs f0,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f0,f23
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f13,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fneg f31,f10
	ctx.f31.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// fneg f25,f6
	ctx.f25.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f28,f13,f5
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f8,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f27,f0,f3
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfs f7,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f26,f11,f2
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f24,f0,f2
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f14,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f14.f64 = double(temp.f32);
	// fmadds f1,f3,f11,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmadds f4,f5,f10,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fneg f29,f9
	ctx.f29.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f9,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f15,f10,f25
	ctx.f15.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// fmsubs f28,f10,f12,f28
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f28.f64));
	// fmsubs f27,f11,f23,f27
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f23.f64 - ctx.f27.f64));
	// fmadds f0,f0,f31,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f26.f64));
	// fmsubs f11,f11,f31,f24
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 - ctx.f24.f64));
	// fmadds f1,f9,f2,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fmuls f26,f13,f25
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fmadds f4,f8,f25,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f25.f64 + ctx.f4.f64));
	// fmadds f13,f13,f29,f15
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f15.f64));
	// lfs f15,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f15.f64 = double(temp.f32);
	// fnmsubs f28,f8,f29,f28
	ctx.f28.f64 = double(float(-(ctx.f8.f64 * ctx.f29.f64 - ctx.f28.f64)));
	// fnmsubs f27,f9,f31,f27
	ctx.f27.f64 = double(float(-(ctx.f9.f64 * ctx.f31.f64 - ctx.f27.f64)));
	// fnmsubs f0,f3,f9,f0
	ctx.f0.f64 = double(float(-(ctx.f3.f64 * ctx.f9.f64 - ctx.f0.f64)));
	// fmadds f11,f3,f7,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fnmsubs f3,f7,f31,f1
	ctx.f3.f64 = double(float(-(ctx.f7.f64 * ctx.f31.f64 - ctx.f1.f64)));
	// fmsubs f10,f10,f29,f26
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 - ctx.f26.f64));
	// fnmsubs f1,f6,f29,f4
	ctx.f1.f64 = double(float(-(ctx.f6.f64 * ctx.f29.f64 - ctx.f4.f64)));
	// fnmsubs f4,f6,f25,f28
	ctx.f4.f64 = double(float(-(ctx.f6.f64 * ctx.f25.f64 - ctx.f28.f64)));
	// fnmsubs f2,f7,f2,f27
	ctx.f2.f64 = double(float(-(ctx.f7.f64 * ctx.f2.f64 - ctx.f27.f64)));
	// fmadds f0,f7,f23,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f23.f64 + ctx.f0.f64));
	// fnmsubs f7,f5,f8,f13
	ctx.f7.f64 = double(float(-(ctx.f5.f64 * ctx.f8.f64 - ctx.f13.f64)));
	// fmadds f10,f5,f6,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f5,f9,f23,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f23.f64 + ctx.f11.f64));
	// fmuls f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmuls f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f31,f4,f0
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f7,f6,f12,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f8,f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmsubs f6,f4,f2,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 - ctx.f13.f64));
	// fmadds f13,f3,f4,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fmsubs f12,f4,f5,f9
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 - ctx.f9.f64));
	// fmadds f11,f1,f5,f31
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f31.f64));
	// fnmsubs f10,f8,f5,f6
	ctx.f10.f64 = double(float(-(ctx.f8.f64 * ctx.f5.f64 - ctx.f6.f64)));
	// fmadds f9,f8,f0,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f6,f3,f7,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fnmsubs f4,f3,f8,f11
	ctx.f4.f64 = double(float(-(ctx.f3.f64 * ctx.f8.f64 - ctx.f11.f64)));
	// fnmsubs f3,f7,f0,f10
	ctx.f3.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fnmsubs f1,f7,f5,f9
	ctx.f1.f64 = double(float(-(ctx.f7.f64 * ctx.f5.f64 - ctx.f9.f64)));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f0,f8,f2,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f6.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f13,f7,f2,f4
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f4.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// stw r7,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r7.u32);
	// b 0x82684284
	goto loc_82684284;
loc_826841EC:
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f8,f13
	ctx.f8.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f11,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f2,f8,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f1,f9,f12,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmsubs f7,f13,f12,f4
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f4.f64));
	// fmsubs f6,f5,f12,f3
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 - ctx.f3.f64));
	// fmadds f4,f0,f5,f2
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f3,f8,f11,f1
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fnmsubs f2,f5,f11,f7
	ctx.f2.f64 = double(float(-(ctx.f5.f64 * ctx.f11.f64 - ctx.f7.f64)));
	// fmadds f1,f9,f10,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fnmsubs f0,f9,f11,f4
	ctx.f0.f64 = double(float(-(ctx.f9.f64 * ctx.f11.f64 - ctx.f4.f64)));
	// fnmsubs f12,f5,f10,f3
	ctx.f12.f64 = double(float(-(ctx.f5.f64 * ctx.f10.f64 - ctx.f3.f64)));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fnmsubs f9,f8,f10,f2
	ctx.f9.f64 = double(float(-(ctx.f8.f64 * ctx.f10.f64 - ctx.f2.f64)));
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f8,f13,f11,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f1.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f7,f13,f10,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stw r7,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// stw r9,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
loc_82684284:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d1868
	ctx.lr = 0x8268428C;
	sub_823D1868(ctx, base);
	// lbz r11,239(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 239);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x826842b0
	if (!ctx.cr6.eq) goto loc_826842B0;
	// lbz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x826842b0
	if (!ctx.cr6.eq) goto loc_826842B0;
	// lbz r11,241(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 241);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826844c8
	if (ctx.cr6.eq) goto loc_826844C8;
loc_826842B0:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d4218
	ctx.lr = 0x826842BC;
	sub_823D4218(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f9,f29,f0
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f28,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f8,f29,f12
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// lfs f27,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f7,f12,f31
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fneg f25,f28
	ctx.f25.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fneg f26,f29
	ctx.f26.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fneg f24,f27
	ctx.f24.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// fmsubs f5,f13,f31,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f9.f64));
	// fmadds f6,f29,f13,f10
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmsubs f2,f11,f31,f8
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 - ctx.f8.f64));
	// fmadds f1,f29,f11,f7
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f10,f24
	ctx.f10.f64 = ctx.f24.f64;
	// fnmsubs f8,f11,f27,f5
	ctx.f8.f64 = double(float(-(ctx.f11.f64 * ctx.f27.f64 - ctx.f5.f64)));
	// fmadds f9,f12,f27,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f27.f64 + ctx.f6.f64));
	// fmadds f7,f0,f28,f2
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f2.f64));
	// fnmsubs f6,f0,f27,f1
	ctx.f6.f64 = double(float(-(ctx.f0.f64 * ctx.f27.f64 - ctx.f1.f64)));
	// fnmsubs f2,f12,f28,f8
	ctx.f2.f64 = double(float(-(ctx.f12.f64 * ctx.f28.f64 - ctx.f8.f64)));
	// fnmsubs f5,f11,f28,f9
	ctx.f5.f64 = double(float(-(ctx.f11.f64 * ctx.f28.f64 - ctx.f9.f64)));
	// fmadds f1,f13,f27,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f7.f64));
	// fmadds f0,f13,f28,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f6.f64));
	// fmuls f11,f2,f3
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f13,f5,f31
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f12,f5,f3
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f6,f5,f10,f11
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f8,f4,f2,f13
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmsubs f7,f2,f10,f12
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 - ctx.f12.f64));
	// fmsubs f5,f2,f31,f9
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 - ctx.f9.f64));
	// fnmsubs f12,f4,f1,f6
	ctx.f12.f64 = double(float(-(ctx.f4.f64 * ctx.f1.f64 - ctx.f6.f64)));
	// fmadds f2,f1,f3,f8
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f13,f4,f0,f7
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fnmsubs f11,f1,f10,f5
	ctx.f11.f64 = double(float(-(ctx.f1.f64 * ctx.f10.f64 - ctx.f5.f64)));
	// fmadds f8,f0,f31,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fnmsubs f10,f0,f10,f2
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f10.f64 - ctx.f2.f64)));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f9,f1,f31,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fnmsubs f7,f0,f3,f11
	ctx.f7.f64 = double(float(-(ctx.f0.f64 * ctx.f3.f64 - ctx.f11.f64)));
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x823d1868
	ctx.lr = 0x8268438C;
	sub_823D1868(ctx, base);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823d7798
	ctx.lr = 0x826843A8;
	sub_823D7798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d40c0
	ctx.lr = 0x826843B4;
	sub_823D40C0(ctx, base);
	// lbz r11,239(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 239);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826843c4
	if (ctx.cr6.eq) goto loc_826843C4;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
loc_826843C4:
	// lbz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826843d4
	if (ctx.cr6.eq) goto loc_826843D4;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_826843D4:
	// lbz r11,241(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 241);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826843e4
	if (ctx.cr6.eq) goto loc_826843E4;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
loc_826843E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823d7698
	ctx.lr = 0x826843F0;
	sub_823D7698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d4218
	ctx.lr = 0x826843FC;
	sub_823D4218(ctx, base);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f26,f13
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmuls f10,f26,f0
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f12,f26
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmuls f7,f26,f11
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f11.f64));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmsubs f5,f11,f31,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 - ctx.f9.f64));
	// fmadds f6,f13,f24,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f24.f64 + ctx.f10.f64));
	// fmsubs f4,f0,f31,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f8.f64));
	// fmadds f3,f13,f31,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fmadds f1,f0,f24,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 + ctx.f5.f64));
	// fmadds f2,f12,f31,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f6.f64));
	// fnmsubs f10,f11,f24,f4
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f24.f64 - ctx.f4.f64)));
	// fnmsubs f9,f12,f24,f3
	ctx.f9.f64 = double(float(-(ctx.f12.f64 * ctx.f24.f64 - ctx.f3.f64)));
	// fmadds f7,f12,f25,f1
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f25.f64 + ctx.f1.f64));
	// fnmsubs f8,f11,f25,f2
	ctx.f8.f64 = double(float(-(ctx.f11.f64 * ctx.f25.f64 - ctx.f2.f64)));
	// fnmsubs f6,f13,f25,f10
	ctx.f6.f64 = double(float(-(ctx.f13.f64 * ctx.f25.f64 - ctx.f10.f64)));
	// fmadds f5,f0,f25,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 + ctx.f9.f64));
	// fmuls f3,f7,f28
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmuls f4,f8,f28
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmuls f2,f8,f27
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fmuls f1,f8,f29
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmadds f13,f29,f6,f3
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmsubs f0,f6,f27,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 - ctx.f4.f64));
	// fmadds f12,f6,f28,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f2.f64));
	// fmsubs f11,f6,f31,f1
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 - ctx.f1.f64));
	// fmadds f9,f8,f31,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f10,f29,f5,f0
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fnmsubs f8,f29,f7,f12
	ctx.f8.f64 = double(float(-(ctx.f29.f64 * ctx.f7.f64 - ctx.f12.f64)));
	// fnmsubs f6,f7,f27,f11
	ctx.f6.f64 = double(float(-(ctx.f7.f64 * ctx.f27.f64 - ctx.f11.f64)));
	// fnmsubs f3,f5,f27,f9
	ctx.f3.f64 = double(float(-(ctx.f5.f64 * ctx.f27.f64 - ctx.f9.f64)));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f4,f7,f31,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f2,f5,f31,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fnmsubs f1,f5,f28,f6
	ctx.f1.f64 = double(float(-(ctx.f5.f64 * ctx.f28.f64 - ctx.f6.f64)));
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stw r7,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// stw r9,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// bl 0x823d1868
	ctx.lr = 0x826844C8;
	sub_823D1868(ctx, base);
loc_826844C8:
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x826844ec
	if (!ctx.cr6.eq) goto loc_826844EC;
	// lfs f0,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x826844ec
	if (!ctx.cr6.eq) goto loc_826844EC;
	// lfs f0,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82684918
	if (ctx.cr6.eq) goto loc_82684918;
loc_826844EC:
	// lfs f11,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f23
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f7,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f2,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fneg f7,f13
	ctx.f7.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f8,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fneg f11,f2
	ctx.f11.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// lfs f5,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fneg f1,f3
	ctx.f1.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// lfs f3,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f12,f8,f9,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f31,f5,f9
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmsubs f13,f5,f6,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f13.f64));
	// fmadds f12,f10,f5,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fmsubs f2,f5,f23,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f23.f64 - ctx.f2.f64));
	// fmadds f5,f0,f6,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f31.f64));
	// fmadds f0,f8,f23,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f23.f64 + ctx.f13.f64));
	// fnmsubs f13,f4,f6,f12
	ctx.f13.f64 = double(float(-(ctx.f4.f64 * ctx.f6.f64 - ctx.f12.f64)));
	// fnmsubs f2,f8,f6,f2
	ctx.f2.f64 = double(float(-(ctx.f8.f64 * ctx.f6.f64 - ctx.f2.f64)));
	// fnmsubs f12,f10,f8,f5
	ctx.f12.f64 = double(float(-(ctx.f10.f64 * ctx.f8.f64 - ctx.f5.f64)));
	// fmadds f8,f10,f4,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmuls f6,f13,f3
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fnmsubs f9,f4,f9,f2
	ctx.f9.f64 = double(float(-(ctx.f4.f64 * ctx.f9.f64 - ctx.f2.f64)));
	// fmuls f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f13,f4,f23,f12
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f23.f64 + ctx.f12.f64));
	// fmadds f12,f8,f7,f6
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmsubs f10,f9,f11,f5
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f5.f64));
	// fmadds f6,f9,f7,f2
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmsubs f5,f9,f3,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 - ctx.f0.f64));
	// fmadds f4,f1,f9,f12
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f2,f8,f3,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fnmsubs f0,f1,f8,f6
	ctx.f0.f64 = double(float(-(ctx.f1.f64 * ctx.f8.f64 - ctx.f6.f64)));
	// fnmsubs f12,f8,f11,f5
	ctx.f12.f64 = double(float(-(ctx.f8.f64 * ctx.f11.f64 - ctx.f5.f64)));
	// fnmsubs f11,f13,f11,f4
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f4.f64)));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f10,f1,f13,f2
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f9,f13,f3,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f0.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fnmsubs f8,f13,f7,f12
	ctx.f8.f64 = double(float(-(ctx.f13.f64 * ctx.f7.f64 - ctx.f12.f64)));
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x823d1868
	ctx.lr = 0x826845C8;
	sub_823D1868(ctx, base);
	// lbz r11,239(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 239);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x826845ec
	if (!ctx.cr6.eq) goto loc_826845EC;
	// lbz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x826845ec
	if (!ctx.cr6.eq) goto loc_826845EC;
	// lbz r11,241(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 241);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82684808
	if (ctx.cr6.eq) goto loc_82684808;
loc_826845EC:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d4218
	ctx.lr = 0x826845F8;
	sub_823D4218(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f9,f0,f29
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f7,f29,f12
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// lfs f27,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f8,f29,f13
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fneg f25,f28
	ctx.f25.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fneg f24,f27
	ctx.f24.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// fneg f26,f29
	ctx.f26.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fmadds f6,f28,f13,f10
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmsubs f5,f31,f11,f9
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 - ctx.f9.f64));
	// fmadds f10,f31,f13,f7
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmsubs f4,f31,f12,f8
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fmadds f9,f29,f11,f6
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fnmsubs f8,f28,f12,f5
	ctx.f8.f64 = double(float(-(ctx.f28.f64 * ctx.f12.f64 - ctx.f5.f64)));
	// fnmsubs f6,f0,f28,f10
	ctx.f6.f64 = double(float(-(ctx.f0.f64 * ctx.f28.f64 - ctx.f10.f64)));
	// fmadds f7,f28,f11,f4
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fnmsubs f5,f27,f12,f9
	ctx.f5.f64 = double(float(-(ctx.f27.f64 * ctx.f12.f64 - ctx.f9.f64)));
	// fnmsubs f4,f27,f13,f8
	ctx.f4.f64 = double(float(-(ctx.f27.f64 * ctx.f13.f64 - ctx.f8.f64)));
	// fmadds f13,f27,f11,f6
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f0,f0,f27,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f7.f64));
	// fmuls f12,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f10,f5,f2
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f11,f3,f4
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f9,f5,f3
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmsubs f8,f4,f2,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 - ctx.f12.f64));
	// fmadds f6,f4,f1,f10
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f7,f0,f1,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmsubs f4,f4,f31,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 - ctx.f9.f64));
	// fmadds f12,f0,f31,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fnmsubs f10,f3,f0,f6
	ctx.f10.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f6.f64)));
	// fmadds f11,f5,f31,f7
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fnmsubs f9,f0,f2,f4
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f2.f64 - ctx.f4.f64)));
	// fmadds f8,f3,f13,f12
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f6,f13,f31,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fnmsubs f7,f13,f2,f11
	ctx.f7.f64 = double(float(-(ctx.f13.f64 * ctx.f2.f64 - ctx.f11.f64)));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fnmsubs f5,f13,f1,f9
	ctx.f5.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f9.f64)));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x823d1868
	ctx.lr = 0x826846C8;
	sub_823D1868(ctx, base);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823d7798
	ctx.lr = 0x826846E4;
	sub_823D7798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d40c0
	ctx.lr = 0x826846F0;
	sub_823D40C0(ctx, base);
	// lbz r11,239(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 239);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82684700
	if (ctx.cr6.eq) goto loc_82684700;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
loc_82684700:
	// lbz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82684710
	if (ctx.cr6.eq) goto loc_82684710;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_82684710:
	// lbz r11,241(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 241);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82684720
	if (ctx.cr6.eq) goto loc_82684720;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
loc_82684720:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823d7698
	ctx.lr = 0x8268472C;
	sub_823D7698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d4218
	ctx.lr = 0x82684738;
	sub_823D4218(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f26,f0
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f26,f13
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmuls f8,f12,f26
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f26,f11
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f11.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmadds f6,f13,f25,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f25.f64 + ctx.f10.f64));
	// fmsubs f5,f11,f31,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 - ctx.f9.f64));
	// fmsubs f4,f0,f31,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f8.f64));
	// fmadds f3,f13,f31,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fmadds f2,f12,f31,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f6.f64));
	// fmadds f1,f0,f25,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 + ctx.f5.f64));
	// fnmsubs f10,f11,f25,f4
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f25.f64 - ctx.f4.f64)));
	// fnmsubs f9,f12,f25,f3
	ctx.f9.f64 = double(float(-(ctx.f12.f64 * ctx.f25.f64 - ctx.f3.f64)));
	// fnmsubs f8,f11,f24,f2
	ctx.f8.f64 = double(float(-(ctx.f11.f64 * ctx.f24.f64 - ctx.f2.f64)));
	// fmadds f7,f12,f24,f1
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f24.f64 + ctx.f1.f64));
	// fnmsubs f6,f13,f24,f10
	ctx.f6.f64 = double(float(-(ctx.f13.f64 * ctx.f24.f64 - ctx.f10.f64)));
	// fmadds f5,f0,f24,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 + ctx.f9.f64));
	// fmuls f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f3,f8,f27
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fmuls f2,f8,f28
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmuls f1,f8,f29
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmadds f0,f7,f27,f4
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f27.f64 + ctx.f4.f64));
	// fmsubs f13,f6,f28,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 - ctx.f3.f64));
	// fmadds f12,f6,f27,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 + ctx.f2.f64));
	// fmsubs f11,f6,f31,f1
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 - ctx.f1.f64));
	// fmadds f10,f29,f6,f0
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f6.f64 + ctx.f0.f64));
	// fmadds f9,f7,f31,f13
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fnmsubs f8,f29,f7,f12
	ctx.f8.f64 = double(float(-(ctx.f29.f64 * ctx.f7.f64 - ctx.f12.f64)));
	// fnmsubs f7,f7,f28,f11
	ctx.f7.f64 = double(float(-(ctx.f7.f64 * ctx.f28.f64 - ctx.f11.f64)));
	// fnmsubs f6,f5,f28,f10
	ctx.f6.f64 = double(float(-(ctx.f5.f64 * ctx.f28.f64 - ctx.f10.f64)));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f4,f29,f5,f9
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f5.f64 + ctx.f9.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f3,f5,f31,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fnmsubs f2,f5,f27,f7
	ctx.f2.f64 = double(float(-(ctx.f5.f64 * ctx.f27.f64 - ctx.f7.f64)));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// bl 0x823d1868
	ctx.lr = 0x82684808;
	sub_823D1868(ctx, base);
loc_82684808:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x823d7798
	ctx.lr = 0x82684824;
	sub_823D7798(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82684834:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82684834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82684834;
	// lfs f0,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f3,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfs f9,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// lfs f1,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f9,f8,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmadds f12,f7,f9,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f11,f9,f1,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f10,f6,f5,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f9,f6,f4,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f12.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f8,f6,f0,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// stw r9,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r9.u32);
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// b 0x82684918
	goto loc_82684918;
loc_826848C4:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r10,r11,-17776
	ctx.r10.s64 = ctx.r11.s64 + -17776;
	// lwz r9,-17776(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17776);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r6.u32);
	// b 0x82684918
	goto loc_82684918;
loc_826848F0:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r11,-13736
	ctx.r11.s64 = ctx.r11.s64 + -13736;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82684904:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82684904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82684904;
loc_82684918:
	// lbz r11,239(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 239);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268496c
	if (ctx.cr6.eq) goto loc_8268496C;
	// lbz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82684964
	if (ctx.cr6.eq) goto loc_82684964;
	// lbz r10,241(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 241);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82684964
	if (ctx.cr6.eq) goto loc_82684964;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// stw r9,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r9.u32);
	// stw r8,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r8.u32);
	// stw r7,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r7.u32);
	// b 0x82684c10
	goto loc_82684C10;
loc_82684964:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82684984
	if (!ctx.cr6.eq) goto loc_82684984;
loc_8268496C:
	// lbz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82684984
	if (!ctx.cr6.eq) goto loc_82684984;
	// lbz r11,241(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 241);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82684c10
	if (ctx.cr6.eq) goto loc_82684C10;
loc_82684984:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823d4218
	ctx.lr = 0x82684990;
	sub_823D4218(ctx, base);
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f27,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f7,f27,f0
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f5,f27,f13
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// lfs f31,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f6,f28,f0
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f26,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f3,f27,f11
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// fmuls f1,f27,f9
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f9.f64));
	// fmuls f29,f27,f8
	ctx.f29.f64 = double(float(ctx.f27.f64 * ctx.f8.f64));
	// fmuls f2,f27,f12
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// fmsubs f7,f31,f13,f7
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fmadds f5,f31,f0,f5
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f6,f12,f31,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f6.f64));
	// fmadds f4,f9,f28,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f4.f64));
	// fmsubs f3,f10,f31,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 - ctx.f3.f64));
	// fmsubs f1,f8,f31,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 - ctx.f1.f64));
	// fmadds f29,f9,f31,f29
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f29.f64));
	// fmsubs f2,f31,f23,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f23.f64 - ctx.f2.f64));
	// fmadds f7,f12,f26,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f7.f64));
	// fnmsubs f5,f12,f28,f5
	ctx.f5.f64 = double(float(-(ctx.f12.f64 * ctx.f28.f64 - ctx.f5.f64)));
	// fmadds f6,f27,f23,f6
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f23.f64 + ctx.f6.f64));
	// fmadds f4,f27,f10,f4
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fnmsubs f3,f8,f28,f3
	ctx.f3.f64 = double(float(-(ctx.f8.f64 * ctx.f28.f64 - ctx.f3.f64)));
	// fmadds f1,f11,f26,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f1.f64));
	// fnmsubs f12,f11,f28,f29
	ctx.f12.f64 = double(float(-(ctx.f11.f64 * ctx.f28.f64 - ctx.f29.f64)));
	// fnmsubs f2,f28,f13,f2
	ctx.f2.f64 = double(float(-(ctx.f28.f64 * ctx.f13.f64 - ctx.f2.f64)));
	// fmadds f24,f28,f23,f7
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f23.f64 + ctx.f7.f64));
	// fmadds f23,f26,f23,f5
	ctx.f23.f64 = double(float(ctx.f26.f64 * ctx.f23.f64 + ctx.f5.f64));
	// fnmsubs f25,f26,f13,f6
	ctx.f25.f64 = double(float(-(ctx.f26.f64 * ctx.f13.f64 - ctx.f6.f64)));
	// fnmsubs f11,f8,f26,f4
	ctx.f11.f64 = double(float(-(ctx.f8.f64 * ctx.f26.f64 - ctx.f4.f64)));
	// fnmsubs f9,f9,f26,f3
	ctx.f9.f64 = double(float(-(ctx.f9.f64 * ctx.f26.f64 - ctx.f3.f64)));
	// fmadds f8,f10,f28,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmadds f7,f10,f26,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f12.f64));
	// fnmsubs f29,f26,f0,f2
	ctx.f29.f64 = double(float(-(ctx.f26.f64 * ctx.f0.f64 - ctx.f2.f64)));
	// fneg f6,f24
	ctx.f6.u64 = ctx.f24.u64 ^ 0x8000000000000000;
	// fneg f4,f23
	ctx.f4.u64 = ctx.f23.u64 ^ 0x8000000000000000;
	// fneg f5,f25
	ctx.f5.u64 = ctx.f25.u64 ^ 0x8000000000000000;
	// fmuls f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmadds f13,f4,f9,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmsubs f10,f6,f9,f1
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 - ctx.f1.f64));
	// fmadds f12,f4,f8,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmsubs f9,f9,f29,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 - ctx.f0.f64));
	// fnmsubs f3,f5,f8,f13
	ctx.f3.f64 = double(float(-(ctx.f5.f64 * ctx.f8.f64 - ctx.f13.f64)));
	// fmadds f1,f8,f29,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f10.f64));
	// fmadds f2,f11,f29,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fnmsubs f0,f6,f8,f9
	ctx.f0.f64 = double(float(-(ctx.f6.f64 * ctx.f8.f64 - ctx.f9.f64)));
	// fmadds f13,f7,f29,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f3.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f11,f5,f7,f1
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f1.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fnmsubs f12,f6,f7,f2
	ctx.f12.f64 = double(float(-(ctx.f6.f64 * ctx.f7.f64 - ctx.f2.f64)));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fnmsubs f10,f4,f7,f0
	ctx.f10.f64 = double(float(-(ctx.f4.f64 * ctx.f7.f64 - ctx.f0.f64)));
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x823d1868
	ctx.lr = 0x82684AA0;
	sub_823D1868(ctx, base);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823d7798
	ctx.lr = 0x82684ABC;
	sub_823D7798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d40c0
	ctx.lr = 0x82684AC8;
	sub_823D40C0(ctx, base);
	// lbz r11,239(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 239);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82684ad8
	if (ctx.cr6.eq) goto loc_82684AD8;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
loc_82684AD8:
	// lbz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82684ae8
	if (ctx.cr6.eq) goto loc_82684AE8;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_82684AE8:
	// lbz r11,241(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 241);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82684af8
	if (ctx.cr6.eq) goto loc_82684AF8;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
loc_82684AF8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823d7698
	ctx.lr = 0x82684B04;
	sub_823D7698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d4218
	ctx.lr = 0x82684B10;
	sub_823D4218(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f25,f0
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f9,f23,f13
	ctx.f9.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f24,f13
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f13.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f25,f13
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmadds f6,f12,f23,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f23.f64 + ctx.f10.f64));
	// fmsubs f5,f0,f24,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 - ctx.f9.f64));
	// fmadds f4,f0,f23,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f23.f64 + ctx.f8.f64));
	// fmsubs f3,f0,f29,f7
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 - ctx.f7.f64));
	// fmadds f2,f29,f13,f6
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f1,f12,f29,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f5.f64));
	// fnmsubs f0,f25,f12,f4
	ctx.f0.f64 = double(float(-(ctx.f25.f64 * ctx.f12.f64 - ctx.f4.f64)));
	// fnmsubs f13,f12,f24,f3
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f24.f64 - ctx.f3.f64)));
	// fnmsubs f12,f11,f24,f2
	ctx.f12.f64 = double(float(-(ctx.f11.f64 * ctx.f24.f64 - ctx.f2.f64)));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f10,f25,f11,f1
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 + ctx.f1.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f9,f11,f29,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f0.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fnmsubs f8,f11,f23,f13
	ctx.f8.f64 = double(float(-(ctx.f11.f64 * ctx.f23.f64 - ctx.f13.f64)));
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x823d1868
	ctx.lr = 0x82684B78;
	sub_823D1868(ctx, base);
	// fneg f7,f27
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fneg f6,f28
	ctx.f6.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f26
	ctx.f5.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmuls f2,f12,f7
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f3,f13,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f1,f7,f11
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmadds f8,f13,f31,f2
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f2.f64));
	// fmadds f10,f6,f13,f4
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmsubs f9,f12,f31,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f3.f64));
	// fmsubs f7,f0,f31,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f1.f64));
	// fnmsubs f2,f6,f11,f8
	ctx.f2.f64 = double(float(-(ctx.f6.f64 * ctx.f11.f64 - ctx.f8.f64)));
	// fmadds f4,f31,f11,f10
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f3,f6,f0,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fnmsubs f1,f6,f12,f7
	ctx.f1.f64 = double(float(-(ctx.f6.f64 * ctx.f12.f64 - ctx.f7.f64)));
	// fmadds f10,f5,f0,f2
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fnmsubs f12,f5,f12,f4
	ctx.f12.f64 = double(float(-(ctx.f5.f64 * ctx.f12.f64 - ctx.f4.f64)));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f11,f5,f11,f3
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fnmsubs f9,f5,f13,f1
	ctx.f9.f64 = double(float(-(ctx.f5.f64 * ctx.f13.f64 - ctx.f1.f64)));
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r7.u32);
	// stw r10,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r10.u32);
	// stw r8,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r8.u32);
	// bl 0x823d1868
	ctx.lr = 0x82684C10;
	sub_823D1868(ctx, base);
loc_82684C10:
	// lbz r10,236(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82684c64
	if (ctx.cr6.eq) goto loc_82684C64;
	// lbz r11,237(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 237);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82684c5c
	if (ctx.cr6.eq) goto loc_82684C5C;
	// lbz r11,238(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 238);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82684c5c
	if (ctx.cr6.eq) goto loc_82684C5C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r11.u32);
	// stw r10,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r10.u32);
	// stw r9,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r9.u32);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6afc
	ctx.lr = 0x82684C58;
	__restfpr_14(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82684C5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82684c7c
	if (!ctx.cr6.eq) goto loc_82684C7C;
loc_82684C64:
	// lbz r11,237(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 237);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82684c7c
	if (!ctx.cr6.eq) goto loc_82684C7C;
	// lbz r11,238(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 238);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82684d84
	if (ctx.cr6.eq) goto loc_82684D84;
loc_82684C7C:
	// lfs f0,20(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r24,16
	ctx.r11.s64 = ctx.r24.s64 + 16;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f17
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f17.f64));
	// fmuls f10,f0,f18
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f18.f64));
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f0,f19
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// lfs f8,24(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f17,f13
	ctx.f7.f64 = double(float(ctx.f17.f64 * ctx.f13.f64));
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f12,f15
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f15.f64));
	// lfs f3,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f12,f16
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f16.f64));
	// lfs f5,16(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f30
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// lfs f3,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f2,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fmuls f3,f3,f30
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmadds f11,f8,f20,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f20.f64 + ctx.f11.f64));
	// fmadds f10,f8,f21,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f21.f64 + ctx.f10.f64));
	// fmadds f9,f8,f22,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f22.f64 + ctx.f9.f64));
	// fmadds f8,f0,f20,f7
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f20.f64 + ctx.f7.f64));
	// fmadds f7,f0,f21,f6
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f21.f64 + ctx.f6.f64));
	// fmadds f6,f0,f22,f4
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f22.f64 + ctx.f4.f64));
	// fmadds f4,f14,f5,f11
	ctx.f4.f64 = double(float(ctx.f14.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fmadds f0,f15,f5,f10
	ctx.f0.f64 = double(float(ctx.f15.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f11,f16,f5,f9
	ctx.f11.f64 = double(float(ctx.f16.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fmadds f10,f14,f12,f8
	ctx.f10.f64 = double(float(ctx.f14.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f9,f18,f13,f7
	ctx.f9.f64 = double(float(ctx.f18.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f8,f19,f13,f6
	ctx.f8.f64 = double(float(ctx.f19.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fadds f12,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fadds f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fadds f0,f11,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// fadds f11,f10,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fadds f10,f9,f2
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f9,f8,f3
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// beq cr6,0x82684d1c
	if (ctx.cr6.eq) goto loc_82684D1C;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_82684D1C:
	// lbz r10,237(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 237);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82684d2c
	if (ctx.cr6.eq) goto loc_82684D2C;
	// fmr f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64;
loc_82684D2C:
	// lbz r10,238(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 238);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82684d3c
	if (ctx.cr6.eq) goto loc_82684D3C;
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
loc_82684D3C:
	// fmuls f11,f13,f15
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f15.f64));
	// fmuls f10,f13,f18
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f18.f64));
	// fmuls f9,f13,f21
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f21.f64));
	// fmadds f8,f0,f16,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f16.f64 + ctx.f11.f64));
	// fmadds f7,f0,f19,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f19.f64 + ctx.f10.f64));
	// fmadds f6,f0,f22,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f22.f64 + ctx.f9.f64));
	// fmadds f5,f14,f12,f8
	ctx.f5.f64 = double(float(ctx.f14.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f4,f12,f17,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f17.f64 + ctx.f7.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f3,f12,f20,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f20.f64 + ctx.f6.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82684D84:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6afc
	ctx.lr = 0x82684D90;
	__restfpr_14(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82684D94"))) PPC_WEAK_FUNC(sub_82684D94);
PPC_FUNC_IMPL(__imp__sub_82684D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82684D98"))) PPC_WEAK_FUNC(sub_82684D98);
PPC_FUNC_IMPL(__imp__sub_82684D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82684DA0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,204(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8268500c
	if (ctx.cr6.eq) goto loc_8268500C;
	// lwz r28,72(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8268500c
	if (ctx.cr6.eq) goto loc_8268500C;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// lfs f12,-17940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17940);
	ctx.f12.f64 = double(temp.f32);
	// lfs f29,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// fmr f30,f12
	ctx.f30.f64 = ctx.f12.f64;
	// blt cr6,0x82684f00
	if (ctx.cr6.lt) goto loc_82684F00;
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lfs f11,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r28,-3
	ctx.r9.s64 = ctx.r28.s64 + -3;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_82684E00:
	// lfs f13,-32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82684e28
	if (!ctx.cr6.lt) goto loc_82684E28;
	// lwz r8,192(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r7,r8,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82684e3c
	if (ctx.cr6.eq) goto loc_82684E3C;
	// lfs f10,80(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
loc_82684E28:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82684e3c
	if (!ctx.cr6.lt) goto loc_82684E3C;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_82684E3C:
	// lfs f13,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82684e64
	if (!ctx.cr6.lt) goto loc_82684E64;
	// lwz r8,192(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r7,r8,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82684e78
	if (ctx.cr6.eq) goto loc_82684E78;
	// lfs f10,80(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
loc_82684E64:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82684e78
	if (!ctx.cr6.lt) goto loc_82684E78;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_82684E78:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82684ea0
	if (!ctx.cr6.lt) goto loc_82684EA0;
	// lwz r8,192(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r7,r8,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82684eb4
	if (ctx.cr6.eq) goto loc_82684EB4;
	// lfs f10,80(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
loc_82684EA0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82684eb4
	if (!ctx.cr6.lt) goto loc_82684EB4;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_82684EB4:
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82684edc
	if (!ctx.cr6.lt) goto loc_82684EDC;
	// lwz r8,192(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r7,r8,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82684ef0
	if (ctx.cr6.eq) goto loc_82684EF0;
	// lfs f10,80(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
loc_82684EDC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82684ef0
	if (!ctx.cr6.lt) goto loc_82684EF0;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_82684EF0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82684e00
	if (ctx.cr6.lt) goto loc_82684E00;
loc_82684F00:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82684f68
	if (!ctx.cr6.lt) goto loc_82684F68;
	// lwz r8,204(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,68(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82684F1C:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82684f44
	if (!ctx.cr6.lt) goto loc_82684F44;
	// lwz r9,192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r7,r9,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82684f58
	if (ctx.cr6.eq) goto loc_82684F58;
	// lfs f10,80(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
loc_82684F44:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82684f58
	if (!ctx.cr6.lt) goto loc_82684F58;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_82684F58:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82684f1c
	if (ctx.cr6.lt) goto loc_82684F1C;
loc_82684F68:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8268500c
	if (ctx.cr6.eq) goto loc_8268500C;
	// fsubs f31,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// oris r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 33554432;
	// stw r10,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r10.u32);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x82685000
	if (!ctx.cr6.gt) goto loc_82685000;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
loc_82684F8C:
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82684fb4
	if (ctx.cr6.eq) goto loc_82684FB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82684FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82684FB4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// divw r9,r11,r28
	ctx.r9.s32 = ctx.r11.s32 / ctx.r28.s32;
	// mullw r8,r9,r28
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// subf. r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// bne 0x82684ff0
	if (!ctx.cr0.eq) goto loc_82684FF0;
	// lwz r10,192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82685000
	if (ctx.cr6.eq) goto loc_82685000;
	// lfs f12,80(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82684FF0:
	// fsubs f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bgt cr6,0x82684f8c
	if (ctx.cr6.gt) goto loc_82684F8C;
loc_82685000:
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r10.u32);
loc_8268500C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82685020"))) PPC_WEAK_FUNC(sub_82685020);
PPC_FUNC_IMPL(__imp__sub_82685020) {
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
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268506c
	if (ctx.cr6.eq) goto loc_8268506C;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8268512c
	if (!ctx.cr6.eq) goto loc_8268512C;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8268512c
	if (!ctx.cr6.eq) goto loc_8268512C;
loc_8268506C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bne cr6,0x82685098
	if (!ctx.cr6.eq) goto loc_82685098;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8268512c
	if (ctx.cr6.eq) goto loc_8268512C;
loc_82685098:
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8268512c
	if (ctx.cr6.eq) goto loc_8268512C;
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268512c
	if (ctx.cr6.eq) goto loc_8268512C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 180);
	// bl 0x825e58d8
	ctx.lr = 0x826850BC;
	sub_825E58D8(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826850dc
	if (ctx.cr6.eq) goto loc_826850DC;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r4,704(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// bl 0x8263a8b0
	ctx.lr = 0x826850D4;
	sub_8263A8B0(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// b 0x8268512c
	goto loc_8268512C;
loc_826850DC:
	// lwz r11,944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8268512c
	if (!ctx.cr6.eq) goto loc_8268512C;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lwz r11,-19792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19792);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82685110
	if (!ctx.cr6.eq) goto loc_82685110;
	// lis r9,-31881
	ctx.r9.s64 = -2089353216;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-19792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19792, ctx.r11.u32);
	// stw r30,-19796(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19796, ctx.r30.u32);
loc_82685110:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8268512c
	if (!ctx.cr6.eq) goto loc_8268512C;
	// lis r9,-31881
	ctx.r9.s64 = -2089353216;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-19792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19792, ctx.r11.u32);
	// stw r31,-19800(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19800, ctx.r31.u32);
loc_8268512C:
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

__attribute__((alias("__imp__sub_82685144"))) PPC_WEAK_FUNC(sub_82685144);
PPC_FUNC_IMPL(__imp__sub_82685144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82685148"))) PPC_WEAK_FUNC(sub_82685148);
PPC_FUNC_IMPL(__imp__sub_82685148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// rlwimi r9,r4,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stfs f2,196(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// stfs f2,200(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stfs f1,188(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,3,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000000;
	// stw r7,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r3,76(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82686528
	sub_82686528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82685194"))) PPC_WEAK_FUNC(sub_82685194);
PPC_FUNC_IMPL(__imp__sub_82685194) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685198"))) PPC_WEAK_FUNC(sub_82685198);
PPC_FUNC_IMPL(__imp__sub_82685198) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826851A8"))) PPC_WEAK_FUNC(sub_826851A8);
PPC_FUNC_IMPL(__imp__sub_826851A8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f12,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826851e8
	if (ctx.cr6.eq) goto loc_826851E8;
	// lfs f13,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826851ec
	goto loc_826851EC;
loc_826851E8:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
loc_826851EC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fcmpu cr6,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// lfd f0,-17672(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17672);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// bge cr6,0x8268520c
	if (!ctx.cr6.lt) goto loc_8268520C;
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
	// b 0x82685218
	goto loc_82685218;
loc_8268520C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82685218
	if (ctx.cr6.lt) goto loc_82685218;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82685218:
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// beq cr6,0x82685258
	if (ctx.cr6.eq) goto loc_82685258;
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x82685258
	if (!ctx.cr6.gt) goto loc_82685258;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82685258
	if (!ctx.cr6.eq) goto loc_82685258;
	// lfs f0,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82685258
	if (ctx.cr6.lt) goto loc_82685258;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82684d98
	ctx.lr = 0x82685258;
	sub_82684D98(ctx, base);
loc_82685258:
	// stfs f31,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8268526c
	if (!ctx.cr6.eq) goto loc_8268526C;
	// stfs f31,200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
loc_8268526C:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8268528C"))) PPC_WEAK_FUNC(sub_8268528C);
PPC_FUNC_IMPL(__imp__sub_8268528C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82685290"))) PPC_WEAK_FUNC(sub_82685290);
PPC_FUNC_IMPL(__imp__sub_82685290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f1,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f1,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826852D8"))) PPC_WEAK_FUNC(sub_826852D8);
PPC_FUNC_IMPL(__imp__sub_826852D8) {
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
	// lfs f0,224(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfd f2,-18352(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// bl 0x82cb4fa0
	ctx.lr = 0x826852F8;
	sub_82CB4FA0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82685318
	if (!ctx.cr6.lt) goto loc_82685318;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82685318:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685328"))) PPC_WEAK_FUNC(sub_82685328);
PPC_FUNC_IMPL(__imp__sub_82685328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f31,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82685358
	if (ctx.cr6.eq) goto loc_82685358;
	// lfs f0,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_82685358:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82685370
	if (!ctx.cr6.eq) goto loc_82685370;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826853b8
	if (ctx.cr6.eq) goto loc_826853B8;
loc_82685370:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826853b8
	if (ctx.cr6.eq) goto loc_826853B8;
	// lwz r3,716(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// bl 0x825eac10
	ctx.lr = 0x82685384;
	sub_825EAC10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826853b8
	if (ctx.cr6.eq) goto loc_826853B8;
	// ld r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 216);
	// bl 0x8252b6e0
	ctx.lr = 0x82685398;
	sub_8252B6E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826853b8
	if (ctx.cr6.eq) goto loc_826853B8;
	// lwz r11,196(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 196);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// b 0x826853bc
	goto loc_826853BC;
loc_826853B8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_826853BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826853D4"))) PPC_WEAK_FUNC(sub_826853D4);
PPC_FUNC_IMPL(__imp__sub_826853D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826853D8"))) PPC_WEAK_FUNC(sub_826853D8);
PPC_FUNC_IMPL(__imp__sub_826853D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268542c
	if (ctx.cr6.eq) goto loc_8268542C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82685414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8268542c
	if (ctx.cr6.eq) goto loc_8268542C;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// b 0x82685430
	goto loc_82685430;
loc_8268542C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82685430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685448"))) PPC_WEAK_FUNC(sub_82685448);
PPC_FUNC_IMPL(__imp__sub_82685448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826854c8
	if (ctx.cr6.eq) goto loc_826854C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82685484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x826854c8
	if (!ctx.cr6.gt) goto loc_826854C8;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f0,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r10,-18304
	ctx.r9.s64 = ctx.r10.s64 + -18304;
	// lfs f13,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
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
	// rlwinm r6,r8,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lfsx f11,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f12,f31
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// fdivs f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// b 0x826854cc
	goto loc_826854CC;
loc_826854C8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_826854CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826854E4"))) PPC_WEAK_FUNC(sub_826854E4);
PPC_FUNC_IMPL(__imp__sub_826854E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826854E8"))) PPC_WEAK_FUNC(sub_826854E8);
PPC_FUNC_IMPL(__imp__sub_826854E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,385
	ctx.r10.s64 = 385;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r4,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826854FC"))) PPC_WEAK_FUNC(sub_826854FC);
PPC_FUNC_IMPL(__imp__sub_826854FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82685500"))) PPC_WEAK_FUNC(sub_82685500);
PPC_FUNC_IMPL(__imp__sub_82685500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268551c
	if (ctx.cr6.eq) goto loc_8268551C;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8268551C:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685530"))) PPC_WEAK_FUNC(sub_82685530);
PPC_FUNC_IMPL(__imp__sub_82685530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82685538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826855c4
	if (!ctx.cr6.gt) goto loc_826855C4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82685558:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x826856e8
	ctx.lr = 0x82685570;
	sub_826856E8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826855b8
	if (!ctx.cr6.eq) goto loc_826855B8;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826855b8
	if (ctx.cr6.eq) goto loc_826855B8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r9,308(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826855A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r29,r6,1
	ctx.r29.u64 = ctx.r6.u64 ^ 1;
loc_826855B8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x82685558
	if (!ctx.cr0.eq) goto loc_82685558;
loc_826855C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826855CC"))) PPC_WEAK_FUNC(sub_826855CC);
PPC_FUNC_IMPL(__imp__sub_826855CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826855D0"))) PPC_WEAK_FUNC(sub_826855D0);
PPC_FUNC_IMPL(__imp__sub_826855D0) {
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
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// bl 0x82521338
	ctx.lr = 0x826855EC;
	sub_82521338(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82685604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,376(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 376);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82685618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8268562C"))) PPC_WEAK_FUNC(sub_8268562C);
PPC_FUNC_IMPL(__imp__sub_8268562C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82685630"))) PPC_WEAK_FUNC(sub_82685630);
PPC_FUNC_IMPL(__imp__sub_82685630) {
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
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82685658
	if (ctx.cr6.eq) goto loc_82685658;
	// lwz r11,916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82685658:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 180);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82685670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,376(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 376);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82685684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82685698"))) PPC_WEAK_FUNC(sub_82685698);
PPC_FUNC_IMPL(__imp__sub_82685698) {
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
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826856C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82683400
	ctx.lr = 0x826856D0;
	sub_82683400(ctx, base);
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

__attribute__((alias("__imp__sub_826856E8"))) PPC_WEAK_FUNC(sub_826856E8);
PPC_FUNC_IMPL(__imp__sub_826856E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826856F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r28,156(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82685718
	if (!ctx.cr6.eq) goto loc_82685718;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82685764
	if (ctx.cr6.eq) goto loc_82685764;
loc_82685718:
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82685764
	if (ctx.cr6.eq) goto loc_82685764;
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82685764
	if (ctx.cr6.eq) goto loc_82685764;
	// bl 0x825e58d8
	ctx.lr = 0x82685734;
	sub_825E58D8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82685764
	if (ctx.cr6.eq) goto loc_82685764;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r4,704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// bl 0x8263a8b0
	ctx.lr = 0x82685758;
	sub_8263A8B0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82685764:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82685784"))) PPC_WEAK_FUNC(sub_82685784);
PPC_FUNC_IMPL(__imp__sub_82685784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82685788"))) PPC_WEAK_FUNC(sub_82685788);
PPC_FUNC_IMPL(__imp__sub_82685788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82685790;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x825261d0
	ctx.lr = 0x826857C0;
	sub_825261D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82685e10
	if (!ctx.cr6.eq) goto loc_82685E10;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r22,-1
	ctx.r22.s64 = -1;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f29,-18284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18284);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x82685820
	if (!ctx.cr6.gt) goto loc_82685820;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lfs f13,-17656(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17656);
	ctx.f13.f64 = double(temp.f32);
loc_826857F8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82685810
	if (!ctx.cr6.gt) goto loc_82685810;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826859c8
	if (!ctx.cr6.lt) goto loc_826859C8;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_82685810:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826857f8
	if (ctx.cr6.lt) goto loc_826857F8;
loc_82685820:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt cr6,0x82685dc8
	if (ctx.cr6.lt) goto loc_82685DC8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lfs f31,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
loc_82685854:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82685db8
	if (!ctx.cr6.gt) goto loc_82685DB8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826858b8
	if (!ctx.cr6.eq) goto loc_826858B8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,704(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// lwz r11,128(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x826858b8
	if (!ctx.cr6.gt) goto loc_826858B8;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// li r4,32
	ctx.r4.s64 = 32;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x826858B4;
	sub_82294520(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826858B8:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x826838b8
	ctx.lr = 0x826858E0;
	sub_826838B8(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82685b48
	if (ctx.cr6.eq) goto loc_82685B48;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82685a08
	if (ctx.cr6.eq) goto loc_82685A08;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f6,176(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f4,f12,f8
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f5,180(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f3,f11,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f4,184(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// fmuls f2,f10,f8
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// fmuls f1,f9,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f0,f7,f8
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r19,136(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r4,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
	// fmuls f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stfs f12,252(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r19,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r19.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826859B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826859b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826859B0;
	// b 0x82685b38
	goto loc_82685B38;
loc_826859C8:
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826838b8
	ctx.lr = 0x826859F4;
	sub_826838B8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82685A08:
	// lfs f13,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f11,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f5,f8,f12,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f30
	ctx.cr6.compare(ctx.f4.f64, ctx.f30.f64);
	// bge cr6,0x82685a98
	if (!ctx.cr6.lt) goto loc_82685A98;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f8,172(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
loc_82685A98:
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r11,r27,16
	ctx.r11.s64 = ctx.r27.s64 + 16;
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// lfs f4,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f10,f8,f3
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f9,f11,f3
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f11,f4,f3
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f8,f12,f3
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f12,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fadds f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f7,16(r27)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// fadds f6,f1,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f6,20(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// fadds f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f5,24(r27)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// lfs f1,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fadds f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f10,12(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lfs f4,28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fadds f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// lfs f11,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// lfs f9,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f6,4(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f7,8(r27)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f2,28(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 28, temp.u32);
loc_82685B38:
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x82685b48
	if (!ctx.cr6.eq) goto loc_82685B48;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823d1868
	ctx.lr = 0x82685B48;
	sub_823D1868(ctx, base);
loc_82685B48:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82685db4
	if (!ctx.cr6.gt) goto loc_82685DB4;
loc_82685B58:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lfsx f0,r9,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82685c48
	if (ctx.cr6.eq) goto loc_82685C48;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// add r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 + ctx.r28.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// add r5,r30,r10
	ctx.r5.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f12,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f10,200(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f8,192(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f9,204(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f2,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f2,f12
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f5,196(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r19,0(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r19,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r19.u32);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stfs f12,284(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stw r5,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r5.u32);
	// stw r6,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r6.u32);
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82685C30:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82685c30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82685C30;
	// b 0x82685d90
	goto loc_82685D90;
loc_82685C48:
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lfsx f13,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f9,f8,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f4,f7,f6,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f3,f0,f13,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f30
	ctx.cr6.compare(ctx.f3.f64, ctx.f30.f64);
	// bge cr6,0x82685cd8
	if (!ctx.cr6.lt) goto loc_82685CD8;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,216(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f10,212(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f9,220(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
loc_82685CD8:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lfs f8,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f12,f7
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f9,f0,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fadds f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fadds f6,f1,f2
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fadds f7,f3,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// fadds f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f11,f13,f5
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_82685D90:
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x82685da4
	if (!ctx.cr6.eq) goto loc_82685DA4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x823d1868
	ctx.lr = 0x82685DA4;
	sub_823D1868(ctx, base);
loc_82685DA4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82685b58
	if (ctx.cr6.lt) goto loc_82685B58;
loc_82685DB4:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
loc_82685DB8:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x82685854
	if (!ctx.cr6.gt) goto loc_82685854;
loc_82685DC8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,0(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82526260
	ctx.lr = 0x82685DDC;
	sub_82526260(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82685e10
	if (ctx.cr6.eq) goto loc_82685E10;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82685dfc
	if (!ctx.cr6.eq) goto loc_82685DFC;
	// bl 0x822900a0
	ctx.lr = 0x82685DF8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82685DFC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82685E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82685E10:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82685E24"))) PPC_WEAK_FUNC(sub_82685E24);
PPC_FUNC_IMPL(__imp__sub_82685E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82685E28"))) PPC_WEAK_FUNC(sub_82685E28);
PPC_FUNC_IMPL(__imp__sub_82685E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r8,296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwz r7,300(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r6,304(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r5,308(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r4,312(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// stw r4,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r4.u32);
	// lwz r10,316(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r9,320(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r8,324(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// stw r8,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r7,328(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// stw r7,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r7.u32);
	// lwz r6,332(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// stw r6,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r6.u32);
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r5,336(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// stw r5,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r5.u32);
	// lwz r4,340(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// stw r4,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r4.u32);
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r9,348(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// stw r9,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r8,352(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// stw r8,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r8.u32);
	// lwz r7,356(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// stw r7,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r7.u32);
	// b 0x82685530
	sub_82685530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82685EE0"))) PPC_WEAK_FUNC(sub_82685EE0);
PPC_FUNC_IMPL(__imp__sub_82685EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,256(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// lwz r10,260(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685EF4"))) PPC_WEAK_FUNC(sub_82685EF4);
PPC_FUNC_IMPL(__imp__sub_82685EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82685EF8"))) PPC_WEAK_FUNC(sub_82685EF8);
PPC_FUNC_IMPL(__imp__sub_82685EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,21152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32540);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82685f1c
	if (ctx.cr6.lt) goto loc_82685F1C;
loc_82685F10:
	// fsubs f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82685f10
	if (!ctx.cr6.lt) goto loc_82685F10;
loc_82685F1C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82685F2C:
	// fadds f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82685f2c
	if (ctx.cr6.lt) goto loc_82685F2C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685F3C"))) PPC_WEAK_FUNC(sub_82685F3C);
PPC_FUNC_IMPL(__imp__sub_82685F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82685F40"))) PPC_WEAK_FUNC(sub_82685F40);
PPC_FUNC_IMPL(__imp__sub_82685F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826863a0
	if (ctx.cr6.eq) goto loc_826863A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82685F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-32444
	ctx.r11.s64 = ctx.r11.s64 + -32444;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lfs f13,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -552);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f9,-18204(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18204);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,21152(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21152);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x82685ff4
	if (ctx.cr6.eq) goto loc_82685FF4;
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82685fd8
	if (ctx.cr6.lt) goto loc_82685FD8;
loc_82685FCC:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82685fcc
	if (!ctx.cr6.lt) goto loc_82685FCC;
loc_82685FD8:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82685fec
	if (!ctx.cr6.lt) goto loc_82685FEC;
loc_82685FE0:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82685fe0
	if (ctx.cr6.lt) goto loc_82685FE0;
loc_82685FEC:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82685FF4:
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8268603c
	if (ctx.cr6.eq) goto loc_8268603C;
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8268601c
	if (ctx.cr6.lt) goto loc_8268601C;
loc_82686010:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82686010
	if (!ctx.cr6.lt) goto loc_82686010;
loc_8268601C:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82686030
	if (!ctx.cr6.lt) goto loc_82686030;
loc_82686024:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82686024
	if (ctx.cr6.lt) goto loc_82686024;
loc_82686030:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82686040
	goto loc_82686040;
loc_8268603C:
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
loc_82686040:
	// lfs f0,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82686060
	if (ctx.cr6.eq) goto loc_82686060;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x82686060
	if (!ctx.cr6.lt) goto loc_82686060;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fdivs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82686060:
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8268607c
	if (ctx.cr6.eq) goto loc_8268607C;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x8268607c
	if (!ctx.cr6.gt) goto loc_8268607C;
	// fdivs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8268607C:
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8268609c
	if (ctx.cr6.eq) goto loc_8268609C;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x8268609c
	if (!ctx.cr6.lt) goto loc_8268609C;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fdivs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8268609C:
	// lfs f0,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x826860b8
	if (ctx.cr6.eq) goto loc_826860B8;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x826860b8
	if (!ctx.cr6.gt) goto loc_826860B8;
	// fdivs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_826860B8:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x826860d4
	if (!ctx.cr6.lt) goto loc_826860D4;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// b 0x826860e0
	goto loc_826860E0;
loc_826860D4:
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x826860e4
	if (ctx.cr6.lt) goto loc_826860E4;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_826860E0:
	// stfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_826860E4:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x826860f4
	if (!ctx.cr6.lt) goto loc_826860F4;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// b 0x82686100
	goto loc_82686100;
loc_826860F4:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x82686104
	if (ctx.cr6.lt) goto loc_82686104;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82686100:
	// stfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82686104:
	// fcmpu cr6,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// blt cr6,0x82686254
	if (ctx.cr6.lt) goto loc_82686254;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x826861a8
	if (ctx.cr6.lt) goto loc_826861A8;
	// fnmsubs f9,f10,f0,f0
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f12,-17768(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17768);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f8,f10,f12,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f9.f64));
	// fmadds f7,f8,f11,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f7,136(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 136, temp.u32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f5,f11,f12,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f11.f64));
	// fmadds f4,f5,f6,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f4,220(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 220, temp.u32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f1,f11,f0,f0
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// fmuls f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmadds f11,f0,f3,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f2.f64));
	// stfs f11,108(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 108, temp.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,244(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmadds f7,f8,f10,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f7,192(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 192, temp.u32);
	// lwz r6,244(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,24(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lwz r5,244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,52(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,80(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// b 0x82686398
	goto loc_82686398;
loc_826861A8:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82686254
	if (!ctx.cr6.lt) goto loc_82686254;
	// fnmsubs f9,f10,f0,f0
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,-17768(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17768);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f8,f10,f12,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f9.f64));
	// fmadds f7,f8,f11,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f7,164(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 164, temp.u32);
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f6,f11,f12,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f11.f64));
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f5,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfs f4,248(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 248, temp.u32);
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f1,f11,f0,f0
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// fmuls f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmadds f11,f0,f3,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f2.f64));
	// stfs f11,136(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 136, temp.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,244(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmadds f7,f8,f10,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f7,220(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 220, temp.u32);
	// lwz r6,244(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,24(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lwz r5,244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,52(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,80(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,192(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// b 0x826863a0
	goto loc_826863A0;
loc_82686254:
	// fcmpu cr6,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x826863a0
	if (!ctx.cr6.lt) goto loc_826863A0;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x826862f0
	if (ctx.cr6.lt) goto loc_826862F0;
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,-17768(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17768);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f9,f10,f0,f0
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// fmsubs f8,f10,f12,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f9.f64));
	// fmadds f7,f8,f11,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f7,52(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f5,f11,f12,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f11.f64));
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f5,f6,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f4,136(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 136, temp.u32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// fnmsubs f1,f11,f0,f0
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// fmuls f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fsubs f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fmadds f11,f0,f2,f3
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f3.f64));
	// stfs f11,24(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lwz r7,244(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmadds f7,f9,f8,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f10.f64));
	// stfs f7,108(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 108, temp.u32);
	// lwz r6,244(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,80(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 80, temp.u32);
	// lwz r5,244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,164(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 164, temp.u32);
	// b 0x82686388
	goto loc_82686388;
loc_826862F0:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x826863a0
	if (!ctx.cr6.lt) goto loc_826863A0;
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,-17768(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17768);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f9,f10,f0,f0
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// fmsubs f8,f10,f12,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f9.f64));
	// fmadds f7,f8,f11,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f7,80(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f5,f11,f12,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f11.f64));
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f5,f6,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f4,164(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 164, temp.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f2,f11,f0,f0
	ctx.f2.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// fmuls f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f3
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fmadds f11,f0,f1,f3
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f11,52(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// lwz r7,244(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmadds f7,f8,f10,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f7,136(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 136, temp.u32);
	// lwz r6,244(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,24(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lwz r5,244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,108(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 108, temp.u32);
loc_82686388:
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,192(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 192, temp.u32);
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,220(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
loc_82686398:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f13,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 248, temp.u32);
loc_826863A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82683530
	ctx.lr = 0x826863B0;
	sub_82683530(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826863CC"))) PPC_WEAK_FUNC(sub_826863CC);
PPC_FUNC_IMPL(__imp__sub_826863CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826863D0"))) PPC_WEAK_FUNC(sub_826863D0);
PPC_FUNC_IMPL(__imp__sub_826863D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x826863ec
	if (!ctx.cr6.eq) goto loc_826863EC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,256(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f0.f64));
	// blr 
	return;
loc_826863EC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,260(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,-18200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82686408"))) PPC_WEAK_FUNC(sub_82686408);
PPC_FUNC_IMPL(__imp__sub_82686408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,-28844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bne cr6,0x82686430
	if (!ctx.cr6.eq) goto loc_82686430;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f0,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,256(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// blr 
	return;
loc_82686430:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-18204(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,260(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82686444"))) PPC_WEAK_FUNC(sub_82686444);
PPC_FUNC_IMPL(__imp__sub_82686444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82686448"))) PPC_WEAK_FUNC(sub_82686448);
PPC_FUNC_IMPL(__imp__sub_82686448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f2,260(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lfs f1,256(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,-16524
	ctx.r4.s64 = ctx.r11.s64 + -16524;
	// bl 0x8232e868
	ctx.lr = 0x82686480;
	sub_8232E868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82686498"))) PPC_WEAK_FUNC(sub_82686498);
PPC_FUNC_IMPL(__imp__sub_82686498) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826864A4"))) PPC_WEAK_FUNC(sub_826864A4);
PPC_FUNC_IMPL(__imp__sub_826864A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826864A8"))) PPC_WEAK_FUNC(sub_826864A8);
PPC_FUNC_IMPL(__imp__sub_826864A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826864AC"))) PPC_WEAK_FUNC(sub_826864AC);
PPC_FUNC_IMPL(__imp__sub_826864AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826864B0"))) PPC_WEAK_FUNC(sub_826864B0);
PPC_FUNC_IMPL(__imp__sub_826864B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826864B8;
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
	// beq cr6,0x826864f8
	if (ctx.cr6.eq) goto loc_826864F8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826864e4
	if (!ctx.cr6.eq) goto loc_826864E4;
	// bl 0x822900a0
	ctx.lr = 0x826864E0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_826864E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826864F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826864F8:
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

__attribute__((alias("__imp__sub_82686510"))) PPC_WEAK_FUNC(sub_82686510);
PPC_FUNC_IMPL(__imp__sub_82686510) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82686520"))) PPC_WEAK_FUNC(sub_82686520);
PPC_FUNC_IMPL(__imp__sub_82686520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82686524"))) PPC_WEAK_FUNC(sub_82686524);
PPC_FUNC_IMPL(__imp__sub_82686524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82686528"))) PPC_WEAK_FUNC(sub_82686528);
PPC_FUNC_IMPL(__imp__sub_82686528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82686530;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
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
	// ld r4,-20528(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20528);
	// bl 0x8229e490
	ctx.lr = 0x82686554;
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
	ctx.lr = 0x82686570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82686578"))) PPC_WEAK_FUNC(sub_82686578);
PPC_FUNC_IMPL(__imp__sub_82686578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268657C"))) PPC_WEAK_FUNC(sub_8268657C);
PPC_FUNC_IMPL(__imp__sub_8268657C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82686580"))) PPC_WEAK_FUNC(sub_82686580);
PPC_FUNC_IMPL(__imp__sub_82686580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82686588;
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
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
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
	// ld r4,-20536(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20536);
	// bl 0x8229e490
	ctx.lr = 0x826865B4;
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
	ctx.lr = 0x826865D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826865D8"))) PPC_WEAK_FUNC(sub_826865D8);
PPC_FUNC_IMPL(__imp__sub_826865D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826865DC"))) PPC_WEAK_FUNC(sub_826865DC);
PPC_FUNC_IMPL(__imp__sub_826865DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826865E0"))) PPC_WEAK_FUNC(sub_826865E0);
PPC_FUNC_IMPL(__imp__sub_826865E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826865E4"))) PPC_WEAK_FUNC(sub_826865E4);
PPC_FUNC_IMPL(__imp__sub_826865E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826865E8"))) PPC_WEAK_FUNC(sub_826865E8);
PPC_FUNC_IMPL(__imp__sub_826865E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82686604;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268668c
	if (ctx.cr6.eq) goto loc_8268668C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32152
	ctx.r31.s64 = -2107113472;
	// addi r11,r7,26136
	ctx.r11.s64 = ctx.r7.s64 + 26136;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,27192
	ctx.r5.s64 = ctx.r31.s64 + 27192;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,564
	ctx.r5.s64 = 564;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82686678;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8268668C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826866A4"))) PPC_WEAK_FUNC(sub_826866A4);
PPC_FUNC_IMPL(__imp__sub_826866A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826866A8"))) PPC_WEAK_FUNC(sub_826866A8);
PPC_FUNC_IMPL(__imp__sub_826866A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826866B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28580);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826866dc
	if (!ctx.cr6.eq) goto loc_826866DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82607068
	ctx.lr = 0x826866D0;
	sub_82607068(ctx, base);
	// stw r3,-28580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28580, ctx.r3.u32);
	// bl 0x82607128
	ctx.lr = 0x826866D8;
	sub_82607128(ctx, base);
	// lwz r10,-28580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28580);
loc_826866DC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27952(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27952);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826866fc
	if (ctx.cr6.eq) goto loc_826866FC;
	// bl 0x82310888
	ctx.lr = 0x826866F0;
	sub_82310888(ctx, base);
	// lwz r11,-27952(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27952);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82686704
	goto loc_82686704;
loc_826866FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82686704:
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
	// bne cr6,0x82686734
	if (!ctx.cr6.eq) goto loc_82686734;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82686724;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x8268672C;
	sub_822AADA8(ctx, base);
	// lwz r11,-27952(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27952);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82686734:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82686760
	if (!ctx.cr6.eq) goto loc_82686760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82686750;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82686758;
	sub_82398640(ctx, base);
	// lwz r11,-27952(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27952);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82686760:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82686798
	if (ctx.cr6.eq) goto loc_82686798;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8268677C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82686798
	if (!ctx.cr6.eq) goto loc_82686798;
	// lwz r3,-27952(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27952);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82686798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82686798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826867A0"))) PPC_WEAK_FUNC(sub_826867A0);
PPC_FUNC_IMPL(__imp__sub_826867A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826867A8"))) PPC_WEAK_FUNC(sub_826867A8);
PPC_FUNC_IMPL(__imp__sub_826867A8) {
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
	// lwz r11,-28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28580);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826867ec
	if (!ctx.cr6.eq) goto loc_826867EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82607068
	ctx.lr = 0x826867E0;
	sub_82607068(ctx, base);
	// stw r3,-28580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28580, ctx.r3.u32);
	// bl 0x82607128
	ctx.lr = 0x826867E8;
	sub_82607128(ctx, base);
	// lwz r11,-28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28580);
loc_826867EC:
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

__attribute__((alias("__imp__sub_82686814"))) PPC_WEAK_FUNC(sub_82686814);
PPC_FUNC_IMPL(__imp__sub_82686814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82686818"))) PPC_WEAK_FUNC(sub_82686818);
PPC_FUNC_IMPL(__imp__sub_82686818) {
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
	// bl 0x8265a298
	ctx.lr = 0x82686830;
	sub_8265A298(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82686870
	if (ctx.cr6.eq) goto loc_82686870;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8268685c
	if (ctx.cr6.gt) goto loc_8268685C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82686864
	goto loc_82686864;
loc_8268685C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82686864:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,660
	ctx.r3.s64 = ctx.r11.s64 + 660;
	// bl 0x82686958
	ctx.lr = 0x82686870;
	sub_82686958(ctx, base);
loc_82686870:
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

__attribute__((alias("__imp__sub_82686884"))) PPC_WEAK_FUNC(sub_82686884);
PPC_FUNC_IMPL(__imp__sub_82686884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82686888"))) PPC_WEAK_FUNC(sub_82686888);
PPC_FUNC_IMPL(__imp__sub_82686888) {
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
	// bl 0x8265a620
	ctx.lr = 0x826868A0;
	sub_8265A620(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826868c4
	if (ctx.cr6.gt) goto loc_826868C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826868cc
	goto loc_826868CC;
loc_826868C4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826868CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,660
	ctx.r3.s64 = ctx.r11.s64 + 660;
	// bl 0x826868f0
	ctx.lr = 0x826868D8;
	sub_826868F0(ctx, base);
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

__attribute__((alias("__imp__sub_826868EC"))) PPC_WEAK_FUNC(sub_826868EC);
PPC_FUNC_IMPL(__imp__sub_826868EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826868F0"))) PPC_WEAK_FUNC(sub_826868F0);
PPC_FUNC_IMPL(__imp__sub_826868F0) {
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
	ctx.lr = 0x82686920;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82686938
	if (ctx.cr0.eq) goto loc_82686938;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82686938:
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

__attribute__((alias("__imp__sub_82686958"))) PPC_WEAK_FUNC(sub_82686958);
PPC_FUNC_IMPL(__imp__sub_82686958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82686960;
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
	// ble cr6,0x826869c8
	if (!ctx.cr6.gt) goto loc_826869C8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82686980:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826869b4
	if (!ctx.cr6.eq) goto loc_826869B4;
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
	ctx.lr = 0x826869AC;
	sub_8232D180(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_826869B4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82686980
	if (ctx.cr6.lt) goto loc_82686980;
loc_826869C8:
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

__attribute__((alias("__imp__sub_826869D8"))) PPC_WEAK_FUNC(sub_826869D8);
PPC_FUNC_IMPL(__imp__sub_826869D8) {
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

__attribute__((alias("__imp__sub_826869E8"))) PPC_WEAK_FUNC(sub_826869E8);
PPC_FUNC_IMPL(__imp__sub_826869E8) {
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
	ctx.lr = 0x82686A14;
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

__attribute__((alias("__imp__sub_82686A34"))) PPC_WEAK_FUNC(sub_82686A34);
PPC_FUNC_IMPL(__imp__sub_82686A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82686A38"))) PPC_WEAK_FUNC(sub_82686A38);
PPC_FUNC_IMPL(__imp__sub_82686A38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,26168
	ctx.r7.s64 = ctx.r9.s64 + 26168;
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

