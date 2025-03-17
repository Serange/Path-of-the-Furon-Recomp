#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8237D97C"))) PPC_WEAK_FUNC(sub_8237D97C);
PPC_FUNC_IMPL(__imp__sub_8237D97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D980"))) PPC_WEAK_FUNC(sub_8237D980);
PPC_FUNC_IMPL(__imp__sub_8237D980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,18676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18676);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8237d9cc
	if (ctx.cr6.gt) goto loc_8237D9CC;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x8237d9cc
	if (ctx.cr6.gt) goto loc_8237D9CC;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8237d9cc
	if (ctx.cr6.gt) goto loc_8237D9CC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f10,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8237d9d4
	goto loc_8237D9D4;
loc_8237D9CC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f10,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f10.f64 = double(temp.f32);
loc_8237D9D4:
	// fmuls f11,f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r10,-18304
	ctx.r9.s64 = ctx.r10.s64 + -18304;
	// lfs f9,664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fmadds f5,f6,f10,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f5,664(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 664, temp.u32);
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// lfs f4,664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
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
	// lfsx f2,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsel f1,f2,f0,f4
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// stfs f1,664(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 664, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8237DA3C"))) PPC_WEAK_FUNC(sub_8237DA3C);
PPC_FUNC_IMPL(__imp__sub_8237DA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DA40"))) PPC_WEAK_FUNC(sub_8237DA40);
PPC_FUNC_IMPL(__imp__sub_8237DA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x8237DA48;
	__savegprlr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// lwz r11,700(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237dca0
	if (!ctx.cr6.gt) goto loc_8237DCA0;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
loc_8237DA70:
	// lwz r11,696(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 696);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x823819a8
	ctx.lr = 0x8237DA84;
	sub_823819A8(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8237daf8
	if (!ctx.cr6.gt) goto loc_8237DAF8;
	// addi r29,r25,112
	ctx.r29.s64 = ctx.r25.s64 + 112;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8237DA9C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823813a8
	ctx.lr = 0x8237DAA8;
	sub_823813A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r21,r1,144
	ctx.r21.s64 = ctx.r1.s64 + 144;
	// bl 0x82381488
	ctx.lr = 0x8237DAB4;
	sub_82381488(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// bl 0x82381560
	ctx.lr = 0x8237DAC8;
	sub_82381560(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x8237da9c
	if (!ctx.cr0.eq) goto loc_8237DA9C;
loc_8237DAF8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823819a8
	ctx.lr = 0x8237DB04;
	sub_823819A8(ctx, base);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// bl 0x82830ee0
	ctx.lr = 0x8237DB18;
	sub_82830EE0(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// ble cr6,0x8237dba0
	if (!ctx.cr6.gt) goto loc_8237DBA0;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// bne cr6,0x8237db5c
	if (!ctx.cr6.eq) goto loc_8237DB5C;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237dba0
	if (ctx.cr6.eq) goto loc_8237DBA0;
loc_8237DB5C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x8237db80
	if (!ctx.cr6.eq) goto loc_8237DB80;
	// bl 0x822900a0
	ctx.lr = 0x8237DB7C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_8237DB80:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237DB9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_8237DBA0:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8237dbd0
	if (ctx.cr0.eq) goto loc_8237DBD0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823819a8
	ctx.lr = 0x8237DBC4;
	sub_823819A8(ctx, base);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x823819a8
	ctx.lr = 0x8237DBD0;
	sub_823819A8(ctx, base);
loc_8237DBD0:
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237dc04
	if (ctx.cr6.eq) goto loc_8237DC04;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237dbf0
	if (!ctx.cr6.eq) goto loc_8237DBF0;
	// bl 0x822900a0
	ctx.lr = 0x8237DBEC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_8237DBF0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237DC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237DC04:
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// beq cr6,0x8237dc44
	if (ctx.cr6.eq) goto loc_8237DC44;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237dc30
	if (!ctx.cr6.eq) goto loc_8237DC30;
	// bl 0x822900a0
	ctx.lr = 0x8237DC2C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_8237DC30:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237DC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237DC44:
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// beq cr6,0x8237dc80
	if (ctx.cr6.eq) goto loc_8237DC80;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237dc6c
	if (!ctx.cr6.eq) goto loc_8237DC6C;
	// bl 0x822900a0
	ctx.lr = 0x8237DC68;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_8237DC6C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237DC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237DC80:
	// lwz r11,700(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 700);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r23,r23,100
	ctx.r23.s64 = ctx.r23.s64 + 100;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// blt cr6,0x8237da70
	if (ctx.cr6.lt) goto loc_8237DA70;
loc_8237DCA0:
	// lwz r3,700(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 700);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DCAC"))) PPC_WEAK_FUNC(sub_8237DCAC);
PPC_FUNC_IMPL(__imp__sub_8237DCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DCB0"))) PPC_WEAK_FUNC(sub_8237DCB0);
PPC_FUNC_IMPL(__imp__sub_8237DCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8237DCB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r31,76(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237dd5c
	if (ctx.cr6.eq) goto loc_8237DD5C;
	// bl 0x822cb360
	ctx.lr = 0x8237DCDC;
	sub_822CB360(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237dcfc
	if (ctx.cr6.eq) goto loc_8237DCFC;
loc_8237DCE8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8237dd0c
	if (ctx.cr6.eq) goto loc_8237DD0C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237dce8
	if (!ctx.cr6.eq) goto loc_8237DCE8;
loc_8237DCFC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237dd5c
	if (ctx.cr6.eq) goto loc_8237DD5C;
loc_8237DD0C:
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8237dd5c
	if (!ctx.cr6.eq) goto loc_8237DD5C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237da40
	ctx.lr = 0x8237DD2C;
	sub_8237DA40(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf. r31,r31,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x8237dd5c
	if (!ctx.cr0.gt) goto loc_8237DD5C;
	// addi r30,r30,396
	ctx.r30.s64 = ctx.r30.s64 + 396;
loc_8237DD3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82381228
	ctx.lr = 0x8237DD48;
	sub_82381228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8237fed0
	ctx.lr = 0x8237DD54;
	sub_8237FED0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8237dd3c
	if (!ctx.cr0.eq) goto loc_8237DD3C;
loc_8237DD5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DD64"))) PPC_WEAK_FUNC(sub_8237DD64);
PPC_FUNC_IMPL(__imp__sub_8237DD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DD68"))) PPC_WEAK_FUNC(sub_8237DD68);
PPC_FUNC_IMPL(__imp__sub_8237DD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8237DD70;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237de18
	if (ctx.cr6.eq) goto loc_8237DE18;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r26,r11,14488
	ctx.r26.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-27388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27388);
loc_8237DD9C:
	// lwz r30,52(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8237de0c
	if (ctx.cr6.eq) goto loc_8237DE0C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237ddc4
	if (!ctx.cr6.eq) goto loc_8237DDC4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8274b3e8
	ctx.lr = 0x8237DDB8;
	sub_8274B3E8(ctx, base);
	// stw r3,-27388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27388, ctx.r3.u32);
	// bl 0x8274b4a8
	ctx.lr = 0x8237DDC0;
	sub_8274B4A8(ctx, base);
	// lwz r10,-27388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27388);
loc_8237DDC4:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237dde4
	if (ctx.cr6.eq) goto loc_8237DDE4;
loc_8237DDD0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8237ddf4
	if (ctx.cr6.eq) goto loc_8237DDF4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237ddd0
	if (!ctx.cr6.eq) goto loc_8237DDD0;
loc_8237DDE4:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237de0c
	if (ctx.cr6.eq) goto loc_8237DE0C;
loc_8237DDF4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237dcb0
	ctx.lr = 0x8237DE08;
	sub_8237DCB0(ctx, base);
	// lwz r10,-27388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27388);
loc_8237DE0C:
	// lwz r25,0(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8237dd9c
	if (!ctx.cr6.eq) goto loc_8237DD9C;
loc_8237DE18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DE20"))) PPC_WEAK_FUNC(sub_8237DE20);
PPC_FUNC_IMPL(__imp__sub_8237DE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8237DE28;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237dee8
	if (!ctx.cr6.gt) goto loc_8237DEE8;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r23,r11,14488
	ctx.r23.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-27388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27388);
loc_8237DE60:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237ded4
	if (ctx.cr6.eq) goto loc_8237DED4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237de8c
	if (!ctx.cr6.eq) goto loc_8237DE8C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8274b3e8
	ctx.lr = 0x8237DE80;
	sub_8274B3E8(ctx, base);
	// stw r3,-27388(r30)
	PPC_STORE_U32(ctx.r30.u32 + -27388, ctx.r3.u32);
	// bl 0x8274b4a8
	ctx.lr = 0x8237DE88;
	sub_8274B4A8(ctx, base);
	// lwz r10,-27388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27388);
loc_8237DE8C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237deac
	if (ctx.cr6.eq) goto loc_8237DEAC;
loc_8237DE98:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8237debc
	if (ctx.cr6.eq) goto loc_8237DEBC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237de98
	if (!ctx.cr6.eq) goto loc_8237DE98;
loc_8237DEAC:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237ded4
	if (ctx.cr6.eq) goto loc_8237DED4;
loc_8237DEBC:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237dcb0
	ctx.lr = 0x8237DED0;
	sub_8237DCB0(ctx, base);
	// lwz r10,-27388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27388);
loc_8237DED4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8237de60
	if (ctx.cr6.lt) goto loc_8237DE60;
loc_8237DEE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DEF0"))) PPC_WEAK_FUNC(sub_8237DEF0);
PPC_FUNC_IMPL(__imp__sub_8237DEF0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x8237dfe0
	if (ctx.cr6.gt) goto loc_8237DFE0;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// addi r12,r12,-8428
	ctx.r12.s64 = ctx.r12.s64 + -8428;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8237DF48;
	case 1:
		goto loc_8237DF54;
	case 2:
		goto loc_8237DF5C;
	case 3:
		goto loc_8237DF68;
	case 4:
		goto loc_8237DF74;
	case 5:
		goto loc_8237DF80;
	case 6:
		goto loc_8237DF8C;
	case 7:
		goto loc_8237DF98;
	case 8:
		goto loc_8237DFA4;
	case 9:
		goto loc_8237DFB0;
	case 10:
		goto loc_8237DFBC;
	case 11:
		goto loc_8237DFC8;
	case 12:
		goto loc_8237DFD4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-8376(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8376);
	// lwz r17,-8364(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8364);
	// lwz r17,-8356(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8356);
	// lwz r17,-8344(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8344);
	// lwz r17,-8332(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8332);
	// lwz r17,-8320(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8320);
	// lwz r17,-8308(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8308);
	// lwz r17,-8296(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8296);
	// lwz r17,-8284(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8284);
	// lwz r17,-8272(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8272);
	// lwz r17,-8260(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8260);
	// lwz r17,-8248(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8248);
	// lwz r17,-8236(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8236);
loc_8237DF48:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
loc_8237DF54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8237DF5C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
loc_8237DF68:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// blr 
	return;
loc_8237DF74:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r3,r11,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// blr 
	return;
loc_8237DF80:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r3,r11,6,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// blr 
	return;
loc_8237DF8C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r3,r11,7,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// blr 
	return;
loc_8237DF98:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_8237DFA4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r3,r11,9,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// blr 
	return;
loc_8237DFB0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r3,r11,10,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// blr 
	return;
loc_8237DFBC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
loc_8237DFC8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r3,r11,12,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// blr 
	return;
loc_8237DFD4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r3,r11,13,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// blr 
	return;
loc_8237DFE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DFE8"))) PPC_WEAK_FUNC(sub_8237DFE8);
PPC_FUNC_IMPL(__imp__sub_8237DFE8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f30,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f5,f12,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fsqrts f29,f5
	ctx.f29.f64 = double(float(sqrt(ctx.f5.f64)));
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x8237e094
	if (!ctx.cr6.gt) goto loc_8237E094;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237e150
	goto loc_8237E150;
loc_8237E094:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,-18108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82382590
	ctx.lr = 0x8237E0A4;
	sub_82382590(ctx, base);
	// lbz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8237e0c8
	if (!ctx.cr6.eq) goto loc_8237E0C8;
	// fdivs f12,f29,f30
	ctx.f12.f64 = double(float(ctx.f29.f64 / ctx.f30.f64));
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_8237E0C8:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmuls f7,f11,f31
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmsubs f4,f12,f31,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f9.f64));
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f8,f11,f3
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8237E150:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8237E174"))) PPC_WEAK_FUNC(sub_8237E174);
PPC_FUNC_IMPL(__imp__sub_8237E174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E178"))) PPC_WEAK_FUNC(sub_8237E178);
PPC_FUNC_IMPL(__imp__sub_8237E178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8237E180;
	__savegprlr_28(ctx, base);
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8237e37c
	if (!ctx.cr6.gt) goto loc_8237E37C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f10,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f11,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
loc_8237E1AC:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x8237e368
	if (ctx.cr6.gt) goto loc_8237E368;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8237e368
	if (ctx.cr6.gt) goto loc_8237E368;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8237e368
	if (ctx.cr6.gt) goto loc_8237E368;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8237e368
	if (ctx.cr6.gt) goto loc_8237E368;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8237e368
	if (ctx.cr6.gt) goto loc_8237E368;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8237e368
	if (ctx.cr6.gt) goto loc_8237E368;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8237e2f0
	if (ctx.cr6.lt) goto loc_8237E2F0;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_8237E238:
	// lfs f9,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f12,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f3,f13,f6,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x8237e360
	if (ctx.cr6.gt) goto loc_8237E360;
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f0,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f3,f6,f13,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x8237e34c
	if (ctx.cr6.gt) goto loc_8237E34C;
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f13,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f3,f6,f12,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x8237e354
	if (ctx.cr6.gt) goto loc_8237E354;
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f13,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f3,f6,f12,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x8237e35c
	if (ctx.cr6.gt) goto loc_8237E35C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r28,r8,-3
	ctx.r28.s64 = ctx.r8.s64 + -3;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8237e238
	if (ctx.cr6.lt) goto loc_8237E238;
loc_8237E2F0:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8237e364
	if (!ctx.cr6.lt) goto loc_8237E364;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
loc_8237E310:
	// lfs f9,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f13,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f3,f12,f6,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x8237e360
	if (ctx.cr6.gt) goto loc_8237E360;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8237e310
	if (ctx.cr6.lt) goto loc_8237E310;
	// b 0x8237e360
	goto loc_8237E360;
loc_8237E34C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8237e360
	goto loc_8237E360;
loc_8237E354:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x8237e360
	goto loc_8237E360;
loc_8237E35C:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
loc_8237E360:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
loc_8237E364:
	// beq cr6,0x8237e384
	if (ctx.cr6.eq) goto loc_8237E384;
loc_8237E368:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,28
	ctx.r6.s64 = ctx.r6.s64 + 28;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8237e1ac
	if (ctx.cr6.lt) goto loc_8237E1AC;
loc_8237E37C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8237E384:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237E38C"))) PPC_WEAK_FUNC(sub_8237E38C);
PPC_FUNC_IMPL(__imp__sub_8237E38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E390"))) PPC_WEAK_FUNC(sub_8237E390);
PPC_FUNC_IMPL(__imp__sub_8237E390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r7,r8,-23736
	ctx.r7.s64 = ctx.r8.s64 + -23736;
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r9,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r9.u8);
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E3C4"))) PPC_WEAK_FUNC(sub_8237E3C4);
PPC_FUNC_IMPL(__imp__sub_8237E3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E3C8"))) PPC_WEAK_FUNC(sub_8237E3C8);
PPC_FUNC_IMPL(__imp__sub_8237E3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x8237E3D0;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6ae4
	ctx.lr = 0x8237E3D8;
	__savefpr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// fmr f31,f4
	ctx.f31.f64 = ctx.f4.f64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237e544
	if (!ctx.cr6.gt) goto loc_8237E544;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// lwz r22,404(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r21,380(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r24,356(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r30,372(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lfs f27,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f27.f64 = double(temp.f32);
loc_8237E430:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8237e178
	ctx.lr = 0x8237E464;
	sub_8237E178(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237e524
	if (!ctx.cr6.eq) goto loc_8237E524;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f11,f0,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8237dfe8
	ctx.lr = 0x8237E4A4;
	sub_8237DFE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237e524
	if (ctx.cr6.eq) goto loc_8237E524;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r23,1
	ctx.r23.s64 = 1;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// beq cr6,0x8237e524
	if (ctx.cr6.eq) goto loc_8237E524;
	// lfs f0,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f27
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fadds f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8237E524:
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r31,r31,r24
	ctx.r31.u64 = ctx.r31.u64 + ctx.r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8237e53c
	if (ctx.cr6.eq) goto loc_8237E53C;
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
loc_8237E53C:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x8237e430
	if (!ctx.cr0.eq) goto loc_8237E430;
loc_8237E544:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6b30
	ctx.lr = 0x8237E554;
	__restfpr_27(ctx, base);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237E558"))) PPC_WEAK_FUNC(sub_8237E558);
PPC_FUNC_IMPL(__imp__sub_8237E558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,32752
	ctx.r10.s64 = ctx.r11.s64 + 32752;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E568"))) PPC_WEAK_FUNC(sub_8237E568);
PPC_FUNC_IMPL(__imp__sub_8237E568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,18676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18676);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8237e5b4
	if (ctx.cr6.gt) goto loc_8237E5B4;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x8237e5b4
	if (ctx.cr6.gt) goto loc_8237E5B4;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8237e5b4
	if (ctx.cr6.gt) goto loc_8237E5B4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f10,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8237e5bc
	goto loc_8237E5BC;
loc_8237E5B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f10,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f10.f64 = double(temp.f32);
loc_8237E5BC:
	// fmuls f11,f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f9,500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r11,-18304
	ctx.r9.s64 = ctx.r11.s64 + -18304;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// fmadds f8,f13,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fmadds f5,f6,f10,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
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
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f3,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsel f2,f3,f0,f5
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f5.f64;
	// stfs f2,500(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8237E614"))) PPC_WEAK_FUNC(sub_8237E614);
PPC_FUNC_IMPL(__imp__sub_8237E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E618"))) PPC_WEAK_FUNC(sub_8237E618);
PPC_FUNC_IMPL(__imp__sub_8237E618) {
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
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237e654
	if (ctx.cr6.eq) goto loc_8237E654;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82363ad8
	ctx.lr = 0x8237E640;
	sub_82363AD8(ctx, base);
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lfs f0,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,664(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 664, temp.u32);
	// bl 0x82363770
	ctx.lr = 0x8237E654;
	sub_82363770(ctx, base);
loc_8237E654:
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

__attribute__((alias("__imp__sub_8237E668"))) PPC_WEAK_FUNC(sub_8237E668);
PPC_FUNC_IMPL(__imp__sub_8237E668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x8237E670;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237e92c
	if (ctx.cr6.eq) goto loc_8237E92C;
	// lfs f13,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f11,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// lfs f31,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f0,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// fadds f5,f31,f7
	ctx.f5.f64 = double(float(ctx.f31.f64 + ctx.f7.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fsubs f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// bl 0x82381080
	ctx.lr = 0x8237E720;
	sub_82381080(ctx, base);
	// lis r4,-31883
	ctx.r4.s64 = -2089484288;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r27,r11,29152
	ctx.r27.s64 = ctx.r11.s64 + 29152;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,-31264(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31264);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r24,12(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r23,0(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,280(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237E75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r7,520(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x8237dd68
	ctx.lr = 0x8237E794;
	sub_8237DD68(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f2,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r9,-23736
	ctx.r7.s64 = ctx.r9.s64 + -23736;
	// lbz r5,512(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 512);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// lfs f13,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// stfs f2,184(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stb r5,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r5.u8);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// beq cr6,0x8237e8a0
	if (ctx.cr6.eq) goto loc_8237E8A0;
loc_8237E7E8:
	// lwz r26,52(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8237e894
	if (ctx.cr6.eq) goto loc_8237E894;
	// lwz r11,492(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 492);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237e894
	if (!ctx.cr6.eq) goto loc_8237E894;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237e828
	if (ctx.cr6.eq) goto loc_8237E828;
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8237e82c
	if (!ctx.cr6.eq) goto loc_8237E82C;
loc_8237E828:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8237E82C:
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237e850
	if (ctx.cr6.eq) goto loc_8237E850;
	// addi r4,r31,524
	ctx.r4.s64 = ctx.r31.s64 + 524;
	// lbz r3,484(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 484);
	// bl 0x8237def0
	ctx.lr = 0x8237E844;
	sub_8237DEF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bne cr6,0x8237e854
	if (!ctx.cr6.eq) goto loc_8237E854;
loc_8237E850:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8237E854:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8237e864
	if (!ctx.cr6.eq) goto loc_8237E864;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8237e894
	if (ctx.cr6.eq) goto loc_8237E894;
loc_8237E864:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r22,0(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82381228
	ctx.lr = 0x8237E874;
	sub_82381228(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,400(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 400);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237E894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237E894:
	// lwz r25,0(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8237e7e8
	if (!ctx.cr6.eq) goto loc_8237E7E8;
loc_8237E8A0:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8237e8b8
	if (ctx.cr6.eq) goto loc_8237E8B8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82367960
	ctx.lr = 0x8237E8B8;
	sub_82367960(ctx, base);
loc_8237E8B8:
	// stw r23,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r23.u32);
	// lbz r11,513(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 513);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// bne cr6,0x8237e8dc
	if (!ctx.cr6.eq) goto loc_8237E8DC;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// bl 0x8260ac08
	ctx.lr = 0x8237E8DC;
	sub_8260AC08(ctx, base);
loc_8237E8DC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237e918
	if (ctx.cr6.eq) goto loc_8237E918;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237e904
	if (!ctx.cr6.eq) goto loc_8237E904;
	// bl 0x822900a0
	ctx.lr = 0x8237E900;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8237E904:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237E918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237E918:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82380ef0
	ctx.lr = 0x8237E92C;
	sub_82380EF0(ctx, base);
loc_8237E92C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237E938"))) PPC_WEAK_FUNC(sub_8237E938);
PPC_FUNC_IMPL(__imp__sub_8237E938) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,18676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,32428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32428);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fsubs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// bge cr6,0x8237e990
	if (!ctx.cr6.lt) goto loc_8237E990;
	// fsubs f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x8237ea0c
	if (ctx.cr6.lt) goto loc_8237EA0C;
loc_8237E990:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,-15120
	ctx.r11.s64 = ctx.r11.s64 + -15120;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f8,-18324(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bgt cr6,0x8237e9c4
	if (ctx.cr6.gt) goto loc_8237E9C4;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bgt cr6,0x8237e9c4
	if (ctx.cr6.gt) goto loc_8237E9C4;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// b 0x8237e9c8
	goto loc_8237E9C8;
loc_8237E9C4:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_8237E9C8:
	// fcmpu cr6,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// bgt cr6,0x8237e9d4
	if (ctx.cr6.gt) goto loc_8237E9D4;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
loc_8237E9D4:
	// fmuls f12,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f5,524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f5.f64 = double(temp.f32);
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfs f8,516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f13,f13,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f3,f7,f0,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f3,524(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// fsqrts f2,f4
	ctx.f2.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmadds f1,f2,f11,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f1,516(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// fmadds f0,f2,f11,f6
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f0,520(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// b 0x8237ea78
	goto loc_8237EA78;
loc_8237EA0C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-15120
	ctx.r11.s64 = ctx.r11.s64 + -15120;
	// lfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bgt cr6,0x8237ea3c
	if (ctx.cr6.gt) goto loc_8237EA3C;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bgt cr6,0x8237ea3c
	if (ctx.cr6.gt) goto loc_8237EA3C;
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// bgt cr6,0x8237ea3c
	if (ctx.cr6.gt) goto loc_8237EA3C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8237ea44
	goto loc_8237EA44;
loc_8237EA3C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
loc_8237EA44:
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f5,f12,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmadds f3,f4,f0,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,516(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// fmadds f2,f4,f0,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f2,520(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// fmadds f1,f4,f0,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f1,524(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
loc_8237EA78:
	// lfs f0,516(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f11.f64 = double(temp.f32);
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// addi r10,r11,-18304
	ctx.r10.s64 = ctx.r11.s64 + -18304;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
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
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
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
	// rlwinm r9,r7,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// rlwinm r11,r7,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
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
	// rlwinm r7,r6,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r31,r5,27,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// rlwinm r5,r5,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r7,r31,r5
	ctx.r7.u64 = ctx.r31.u64 | ctx.r5.u64;
	// lfsx f7,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f5,f7,f10,f0
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// lfsx f4,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsel f3,f6,f10,f13
	ctx.f3.f64 = ctx.f6.f64 >= 0.0 ? ctx.f10.f64 : ctx.f13.f64;
	// fsel f2,f4,f10,f11
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// stfs f5,516(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// stfs f3,520(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// stfs f2,524(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8237EB0C;
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

__attribute__((alias("__imp__sub_8237EB20"))) PPC_WEAK_FUNC(sub_8237EB20);
PPC_FUNC_IMPL(__imp__sub_8237EB20) {
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
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237eb80
	if (ctx.cr6.eq) goto loc_8237EB80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82363ad8
	ctx.lr = 0x8237EB48;
	sub_82363AD8(ctx, base);
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lfs f0,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,664(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 664, temp.u32);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lfs f13,520(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,668(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 668, temp.u32);
	// lwz r9,492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lfs f12,524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,672(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 672, temp.u32);
	// lwz r8,492(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lfs f11,528(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,676(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 676, temp.u32);
	// bl 0x82363770
	ctx.lr = 0x8237EB80;
	sub_82363770(ctx, base);
loc_8237EB80:
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

__attribute__((alias("__imp__sub_8237EB94"))) PPC_WEAK_FUNC(sub_8237EB94);
PPC_FUNC_IMPL(__imp__sub_8237EB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237EB98"))) PPC_WEAK_FUNC(sub_8237EB98);
PPC_FUNC_IMPL(__imp__sub_8237EB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ae8
	ctx.lr = 0x8237EBA8;
	__savefpr_28(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f7,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,-60(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// lwz r8,-60(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// stfs f7,-56(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lwz r7,-56(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stfs f7,-64(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lfd f1,-17672(r9)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r9.u32 + -17672);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f5,f9
	ctx.f5.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f5,f1
	ctx.cr6.compare(ctx.f5.f64, ctx.f1.f64);
	// blt cr6,0x8237eebc
	if (ctx.cr6.lt) goto loc_8237EEBC;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// fsubs f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f11,f10
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 / ctx.f5.f64));
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f6,f10
	ctx.f30.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f2,f13
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmadds f2,f31,f9,f4
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f0,f30,f8,f2
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// blt cr6,0x8237eebc
	if (ctx.cr6.lt) goto loc_8237EEBC;
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bgt cr6,0x8237eebc
	if (ctx.cr6.gt) goto loc_8237EEBC;
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f31,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f8,f0
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f29,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fadds f5,f5,f7
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f4,f31,f4
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// fadds f31,f29,f30
	ctx.f31.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmadds f7,f13,f2,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fsubs f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fsubs f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// fsubs f13,f6,f31
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f11,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fsqrts f0,f5
	ctx.f0.f64 = double(float(sqrt(ctx.f5.f64)));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bgt cr6,0x8237eebc
	if (ctx.cr6.gt) goto loc_8237EEBC;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8237edfc
	if (!ctx.cr6.gt) goto loc_8237EDFC;
	// fdivs f6,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// lfs f4,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f31,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fsubs f0,f3,f7
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fmuls f29,f12,f8
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f28,f11,f10
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f29,f10,f13,f29
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f29.f64));
	// fmsubs f6,f11,f8,f6
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - ctx.f6.f64));
	// fmsubs f28,f12,f9,f28
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f28.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f29,f29,f5
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f5.f64));
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f28,f28,f5
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f5.f64));
	// fadds f5,f29,f30
	ctx.f5.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// stfs f5,8(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fadds f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// stfs f6,4(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237edc8
	if (ctx.cr6.eq) goto loc_8237EDC8;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f31,f0,f13,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fmadds f31,f12,f30,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fcmpu cr6,f31,f1
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x8237edfc
	if (!ctx.cr6.gt) goto loc_8237EDFC;
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// fmuls f1,f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f30,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f1,f31,f31,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmadds f0,f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x8237edfc
	if (!ctx.cr6.lt) goto loc_8237EDFC;
	// fmuls f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fadds f13,f4,f7
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fadds f12,f6,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// b 0x8237edfc
	goto loc_8237EDFC;
loc_8237EDC8:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f7,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f12,f1,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f11,f0,f7
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fadds f7,f4,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f7,0(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fadds f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f6,4(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f5,8(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
loc_8237EDFC:
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x8237ee70
	if (!ctx.cr6.gt) goto loc_8237EE70;
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// lfs f7,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f2,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f9,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fdivs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fsubs f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fmuls f12,f6,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f11,f4,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fadds f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f9,0(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fadds f8,f11,f5
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f8,4(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f7,f10,f2
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f7,8(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x8237EE64;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8237EE70:
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f7,0(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fadds f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f6,4(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f5,8(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x8237EEB0;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8237EEBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x8237EEC8;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237EED4"))) PPC_WEAK_FUNC(sub_8237EED4);
PPC_FUNC_IMPL(__imp__sub_8237EED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237EED8"))) PPC_WEAK_FUNC(sub_8237EED8);
PPC_FUNC_IMPL(__imp__sub_8237EED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8237EEE0;
	__savegprlr_28(ctx, base);
	// lwz r31,60(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8237f0dc
	if (!ctx.cr6.gt) goto loc_8237F0DC;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lfs f10,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f11,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
loc_8237EF0C:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x8237f0c8
	if (ctx.cr6.gt) goto loc_8237F0C8;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8237f0c8
	if (ctx.cr6.gt) goto loc_8237F0C8;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8237f0c8
	if (ctx.cr6.gt) goto loc_8237F0C8;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8237f0c8
	if (ctx.cr6.gt) goto loc_8237F0C8;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8237f0c8
	if (ctx.cr6.gt) goto loc_8237F0C8;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8237f0c8
	if (ctx.cr6.gt) goto loc_8237F0C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8237f050
	if (ctx.cr6.lt) goto loc_8237F050;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_8237EF98:
	// lfs f9,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f12,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f3,f13,f6,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x8237f0c0
	if (ctx.cr6.gt) goto loc_8237F0C0;
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f0,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f3,f6,f13,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x8237f0ac
	if (ctx.cr6.gt) goto loc_8237F0AC;
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f13,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f3,f6,f12,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x8237f0b4
	if (ctx.cr6.gt) goto loc_8237F0B4;
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f13,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f3,f6,f12,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x8237f0bc
	if (ctx.cr6.gt) goto loc_8237F0BC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r28,r8,-3
	ctx.r28.s64 = ctx.r8.s64 + -3;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8237ef98
	if (ctx.cr6.lt) goto loc_8237EF98;
loc_8237F050:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8237f0c4
	if (!ctx.cr6.lt) goto loc_8237F0C4;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
loc_8237F070:
	// lfs f9,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f13,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f3,f12,f6,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x8237f0c0
	if (ctx.cr6.gt) goto loc_8237F0C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8237f070
	if (ctx.cr6.lt) goto loc_8237F070;
	// b 0x8237f0c0
	goto loc_8237F0C0;
loc_8237F0AC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8237f0c0
	goto loc_8237F0C0;
loc_8237F0B4:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x8237f0c0
	goto loc_8237F0C0;
loc_8237F0BC:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
loc_8237F0C0:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
loc_8237F0C4:
	// beq cr6,0x8237f0e4
	if (ctx.cr6.eq) goto loc_8237F0E4;
loc_8237F0C8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,28
	ctx.r6.s64 = ctx.r6.s64 + 28;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8237ef0c
	if (ctx.cr6.lt) goto loc_8237EF0C;
loc_8237F0DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8237F0E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237F0EC"))) PPC_WEAK_FUNC(sub_8237F0EC);
PPC_FUNC_IMPL(__imp__sub_8237F0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237F0F0"))) PPC_WEAK_FUNC(sub_8237F0F0);
PPC_FUNC_IMPL(__imp__sub_8237F0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r8,r11,-23732
	ctx.r8.s64 = ctx.r11.s64 + -23732;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f2,32(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stfs f3,36(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// stfs f5,44(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f6,48(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f7,52(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237F164"))) PPC_WEAK_FUNC(sub_8237F164);
PPC_FUNC_IMPL(__imp__sub_8237F164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237F168"))) PPC_WEAK_FUNC(sub_8237F168);
PPC_FUNC_IMPL(__imp__sub_8237F168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x8237F170;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,364(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8237f28c
	if (!ctx.cr6.gt) goto loc_8237F28C;
	// lwz r22,372(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r25,324(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
loc_8237F1BC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8237eed8
	ctx.lr = 0x8237F1F0;
	sub_8237EED8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237f278
	if (!ctx.cr6.eq) goto loc_8237F278;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8237eb98
	ctx.lr = 0x8237F230;
	sub_8237EB98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237f278
	if (ctx.cr6.eq) goto loc_8237F278;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r23,1
	ctx.r23.s64 = 1;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8237F278:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// bne 0x8237f1bc
	if (!ctx.cr0.eq) goto loc_8237F1BC;
loc_8237F28C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237F2A4"))) PPC_WEAK_FUNC(sub_8237F2A4);
PPC_FUNC_IMPL(__imp__sub_8237F2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237F2A8"))) PPC_WEAK_FUNC(sub_8237F2A8);
PPC_FUNC_IMPL(__imp__sub_8237F2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8237F2B0;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6ab0
	ctx.lr = 0x8237F2B8;
	__savefpr_14(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237f93c
	if (ctx.cr6.eq) goto loc_8237F93C;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
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
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// lfs f30,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f30.f64 = double(temp.f32);
	// addi r4,r10,16384
	ctx.r4.s64 = ctx.r10.s64 + 16384;
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// lfs f12,524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r9,16384
	ctx.r30.s64 = ctx.r9.s64 + 16384;
	// lfs f10,520(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	ctx.f10.f64 = double(temp.f32);
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// lfs f9,516(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f9.f64 = double(temp.f32);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// lfs f8,528(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	ctx.f8.f64 = double(temp.f32);
	// addi r29,r8,-22168
	ctx.r29.s64 = ctx.r8.s64 + -22168;
	// lfs f7,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// lfs f6,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r8,r7,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// lfs f5,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r7,r3,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFC;
	// fmuls f4,f30,f11
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// rlwinm r6,r6,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// fsubs f27,f9,f10
	ctx.f27.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// rlwinm r3,r30,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFC;
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// lfsx f3,r8,r29
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r4,r4,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// lfsx f2,r7,r29
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	ctx.f2.f64 = double(temp.f32);
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// lfsx f1,r6,r29
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f2,f3
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// lfsx f0,r3,r29
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,16384
	ctx.r3.s64 = ctx.r11.s64 + 16384;
	// fmuls f31,f0,f1
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfsx f29,r5,r29
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfsx f0,r4,r29
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f2,f29
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// rlwinm r5,r8,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// fmuls f28,f0,f1
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// srawi r7,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// lfsx f26,r5,r29
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	ctx.f26.f64 = double(temp.f32);
	// rlwinm r4,r7,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// rlwinm r3,r8,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// fmadds f11,f31,f29,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f29.f64 + ctx.f11.f64));
	// lfs f0,-28844(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16384
	ctx.r10.s64 = ctx.r10.s64 + 16384;
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fnmsubs f3,f2,f1,f3
	ctx.f3.f64 = double(float(-(ctx.f2.f64 * ctx.f1.f64 - ctx.f3.f64)));
	// addi r7,r9,16384
	ctx.r7.s64 = ctx.r9.s64 + 16384;
	// fmuls f2,f28,f13
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// lfsx f25,r4,r29
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	ctx.f25.f64 = double(temp.f32);
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// srawi r4,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 2;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fneg f3,f1
	ctx.f3.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmuls f2,f13,f12
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f2,204(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f3,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfsx f3,r3,r29
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfsx f2,r5,r29
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r9,r4,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(ctx.f27.f64, ctx.f31.f64);
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
	// rlwinm r4,r5,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// fadds f13,f8,f29
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f29.f64));
	// rlwinm r3,r5,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r10,-18304
	ctx.r8.s64 = ctx.r10.s64 + -18304;
	// lfsx f13,r9,r29
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// fmuls f28,f13,f3
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f0,f2,f26
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f26.f64));
	// rlwinm r11,r6,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f2,f2,f25
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f25.f64));
	// li r9,1
	ctx.r9.s64 = 1;
	// fneg f29,f29
	ctx.f29.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// lfsx f26,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f26.f64 = double(temp.f32);
	// stb r9,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r9.u8);
	// fsel f10,f26,f9,f10
	ctx.f10.f64 = ctx.f26.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// lfsx f27,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f27,f27,f3
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f3.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmsubs f3,f2,f3,f13
	ctx.f3.f64 = double(float(-(ctx.f2.f64 * ctx.f3.f64 - ctx.f13.f64)));
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmadds f9,f28,f25,f0
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f25.f64 + ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f2,f29,f8
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f8.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f13,f9,f4
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f9,f3,f4
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f27,f4
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f4.f64));
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r5.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// fmuls f3,f10,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stw r6,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r6.u32);
	// fmuls f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f0,f4,f8
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fadds f13,f7,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fadds f10,f6,f2
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fadds f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fsubs f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82381080
	ctx.lr = 0x8237F514;
	sub_82381080(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f5,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f5.f64 = double(temp.f32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// addi r6,r11,16384
	ctx.r6.s64 = ctx.r11.s64 + 16384;
	// lfs f4,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f4.f64 = double(temp.f32);
	// srawi r7,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// lfs f3,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r10,16384
	ctx.r5.s64 = ctx.r10.s64 + 16384;
	// lfs f13,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// srawi r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// fmuls f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// fmuls f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// addi r3,r9,16384
	ctx.r3.s64 = ctx.r9.s64 + 16384;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// lfs f12,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r5,r10,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// fmuls f8,f5,f30
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// rlwinm r3,r9,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// fmuls f3,f12,f1
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// rlwinm r6,r11,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// rlwinm r8,r8,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// lfs f10,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r4,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfsx f0,r5,r29
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r7,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// lfsx f30,r3,r29
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f1,f0
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfsx f4,r6,r29
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f26,f30,f0
	ctx.f26.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfsx f5,r8,r29
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f28,f30,f4
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// fmuls f24,f30,f5
	ctx.f24.f64 = double(float(ctx.f30.f64 * ctx.f5.f64));
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// fmuls f21,f2,f0
	ctx.f21.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfsx f27,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f20,f0,f4
	ctx.f20.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfsx f25,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f25.f64 = double(temp.f32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f19,f12,f27
	ctx.f19.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f22,f27,f5
	ctx.f22.f64 = double(float(ctx.f27.f64 * ctx.f5.f64));
	// lfs f0,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f4,f25
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f25.f64));
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmuls f23,f25,f5
	ctx.f23.f64 = double(float(ctx.f25.f64 * ctx.f5.f64));
	// fmuls f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f11,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f12,f12,f26,f10
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * ctx.f26.f64 - ctx.f10.f64)));
	// lfs f7,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f3,f28
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f28.f64));
	// lfs f6,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f24,f3
	ctx.f10.f64 = double(float(ctx.f24.f64 * ctx.f3.f64));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fmuls f9,f11,f2
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// fmuls f17,f25,f27
	ctx.f17.f64 = double(float(ctx.f25.f64 * ctx.f27.f64));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmuls f16,f21,f5
	ctx.f16.f64 = double(float(ctx.f21.f64 * ctx.f5.f64));
	// fmuls f11,f11,f21
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f21.f64));
	// fmsubs f15,f22,f30,f31
	ctx.f15.f64 = double(float(ctx.f22.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmadds f18,f23,f27,f28
	ctx.f18.f64 = double(float(ctx.f23.f64 * ctx.f27.f64 + ctx.f28.f64));
	// fmadds f14,f28,f27,f23
	ctx.f14.f64 = double(float(ctx.f28.f64 * ctx.f27.f64 + ctx.f23.f64));
	// fmadds f21,f3,f20,f19
	ctx.f21.f64 = double(float(ctx.f3.f64 * ctx.f20.f64 + ctx.f19.f64));
	// fmadds f13,f13,f27,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f12.f64));
	// fmadds f12,f0,f25,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 + ctx.f10.f64));
	// fmuls f22,f22,f9
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f9.f64));
	// fmuls f10,f1,f27
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f27.f64));
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f10,f26,f1
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f1.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f29,f25
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f1,f15,f2
	ctx.f1.f64 = double(float(ctx.f15.f64 * ctx.f2.f64));
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f10,f18,f2
	ctx.f10.f64 = double(float(ctx.f18.f64 * ctx.f2.f64));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f2,f20,f8
	ctx.f2.f64 = double(float(ctx.f20.f64 * ctx.f8.f64));
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f1,f3,f17
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f17.f64));
	// fmuls f10,f14,f8
	ctx.f10.f64 = double(float(ctx.f14.f64 * ctx.f8.f64));
	// fmadds f12,f9,f28,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f12.f64));
	// fnmsubs f13,f22,f30,f13
	ctx.f13.f64 = double(float(-(ctx.f22.f64 * ctx.f30.f64 - ctx.f13.f64)));
	// fnmsubs f2,f17,f4,f24
	ctx.f2.f64 = double(float(-(ctx.f17.f64 * ctx.f4.f64 - ctx.f24.f64)));
	// fnmsubs f11,f11,f5,f21
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f5.f64 - ctx.f21.f64)));
	// fneg f0,f16
	ctx.f0.u64 = ctx.f16.u64 ^ 0x8000000000000000;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f0,f9,f23
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f23.f64));
	// fnmsubs f5,f1,f4,f12
	ctx.f5.f64 = double(float(-(ctx.f1.f64 * ctx.f4.f64 - ctx.f12.f64)));
	// fmadds f4,f31,f9,f13
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fneg f1,f10
	ctx.f1.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f13,f2,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fsubs f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f11,f0,f27,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f5.f64));
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmadds f10,f3,f23,f4
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f23.f64 + ctx.f4.f64));
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// stfs f9,180(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x82380ab0
	ctx.lr = 0x8237F6C0;
	sub_82380AB0(ctx, base);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// li r11,7
	ctx.r11.s64 = 7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8237F6CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8237f6cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237F6CC;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// lwz r29,280(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82381228
	ctx.lr = 0x8237F710;
	sub_82381228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237F728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// stw r27,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r27.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// lwz r7,536(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// bl 0x8237de20
	ctx.lr = 0x8237F758;
	sub_8237DE20(ctx, base);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r7,-23732
	ctx.r3.s64 = ctx.r7.s64 + -23732;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// lfs f0,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// lfs f13,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,208(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lfs f12,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f12.f64 = double(temp.f32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lfs f11,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// lfs f10,512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,520(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	ctx.f9.f64 = double(temp.f32);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lfs f8,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stfs f10,172(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f8,180(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r6,532(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// not r4,r6
	ctx.r4.u64 = ~ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r3,r4,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x1;
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// ble cr6,0x8237f8b4
	if (!ctx.cr6.gt) goto loc_8237F8B4;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_8237F800:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r29,r26,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8237f8a0
	if (ctx.cr6.eq) goto loc_8237F8A0;
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237f834
	if (ctx.cr6.eq) goto loc_8237F834;
	// lwz r10,540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8237f838
	if (!ctx.cr6.eq) goto loc_8237F838;
loc_8237F834:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8237F838:
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237f85c
	if (ctx.cr6.eq) goto loc_8237F85C;
	// addi r4,r31,540
	ctx.r4.s64 = ctx.r31.s64 + 540;
	// lbz r3,484(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 484);
	// bl 0x8237def0
	ctx.lr = 0x8237F850;
	sub_8237DEF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bne cr6,0x8237f860
	if (!ctx.cr6.eq) goto loc_8237F860;
loc_8237F85C:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8237F860:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8237f870
	if (!ctx.cr6.eq) goto loc_8237F870;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8237f8a0
	if (ctx.cr6.eq) goto loc_8237F8A0;
loc_8237F870:
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r24,0(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82381228
	ctx.lr = 0x8237F880;
	sub_82381228(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,400(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 400);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237F8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237F8A0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8237f800
	if (ctx.cr6.lt) goto loc_8237F800;
loc_8237F8B4:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237f8f0
	if (ctx.cr6.eq) goto loc_8237F8F0;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237f8dc
	if (!ctx.cr6.eq) goto loc_8237F8DC;
	// bl 0x822900a0
	ctx.lr = 0x8237F8D8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8237F8DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237F8F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237F8F0:
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// bl 0x82380ef0
	ctx.lr = 0x8237F904;
	sub_82380EF0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237f93c
	if (ctx.cr6.eq) goto loc_8237F93C;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237f928
	if (!ctx.cr6.eq) goto loc_8237F928;
	// bl 0x822900a0
	ctx.lr = 0x8237F924;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8237F928:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237F93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237F93C:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6afc
	ctx.lr = 0x8237F948;
	__restfpr_14(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237F94C"))) PPC_WEAK_FUNC(sub_8237F94C);
PPC_FUNC_IMPL(__imp__sub_8237F94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237F950"))) PPC_WEAK_FUNC(sub_8237F950);
PPC_FUNC_IMPL(__imp__sub_8237F950) {
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
	// lwz r3,368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237f984
	if (ctx.cr6.eq) goto loc_8237F984;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8247b9c8
	ctx.lr = 0x8237F984;
	sub_8247B9C8(ctx, base);
loc_8237F984:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237F994"))) PPC_WEAK_FUNC(sub_8237F994);
PPC_FUNC_IMPL(__imp__sub_8237F994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237F998"))) PPC_WEAK_FUNC(sub_8237F998);
PPC_FUNC_IMPL(__imp__sub_8237F998) {
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
	// lwz r3,900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237f9cc
	if (ctx.cr6.eq) goto loc_8237F9CC;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8247b9c8
	ctx.lr = 0x8237F9CC;
	sub_8247B9C8(ctx, base);
loc_8237F9CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237F9DC"))) PPC_WEAK_FUNC(sub_8237F9DC);
PPC_FUNC_IMPL(__imp__sub_8237F9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237F9E0"))) PPC_WEAK_FUNC(sub_8237F9E0);
PPC_FUNC_IMPL(__imp__sub_8237F9E0) {
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
	// lwz r3,492(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237fa14
	if (ctx.cr6.eq) goto loc_8237FA14;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8247b9c8
	ctx.lr = 0x8237FA14;
	sub_8247B9C8(ctx, base);
loc_8237FA14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237FA24"))) PPC_WEAK_FUNC(sub_8237FA24);
PPC_FUNC_IMPL(__imp__sub_8237FA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FA28"))) PPC_WEAK_FUNC(sub_8237FA28);
PPC_FUNC_IMPL(__imp__sub_8237FA28) {
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
	// lwz r3,492(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237fa5c
	if (ctx.cr6.eq) goto loc_8237FA5C;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8247b9c8
	ctx.lr = 0x8237FA5C;
	sub_8247B9C8(ctx, base);
loc_8237FA5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237FA6C"))) PPC_WEAK_FUNC(sub_8237FA6C);
PPC_FUNC_IMPL(__imp__sub_8237FA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FA70"))) PPC_WEAK_FUNC(sub_8237FA70);
PPC_FUNC_IMPL(__imp__sub_8237FA70) {
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
	// lwz r3,492(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237faa4
	if (ctx.cr6.eq) goto loc_8237FAA4;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8247b9c8
	ctx.lr = 0x8237FAA4;
	sub_8247B9C8(ctx, base);
loc_8237FAA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237FAB4"))) PPC_WEAK_FUNC(sub_8237FAB4);
PPC_FUNC_IMPL(__imp__sub_8237FAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FAB8"))) PPC_WEAK_FUNC(sub_8237FAB8);
PPC_FUNC_IMPL(__imp__sub_8237FAB8) {
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

__attribute__((alias("__imp__sub_8237FACC"))) PPC_WEAK_FUNC(sub_8237FACC);
PPC_FUNC_IMPL(__imp__sub_8237FACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FAD0"))) PPC_WEAK_FUNC(sub_8237FAD0);
PPC_FUNC_IMPL(__imp__sub_8237FAD0) {
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

__attribute__((alias("__imp__sub_8237FAE8"))) PPC_WEAK_FUNC(sub_8237FAE8);
PPC_FUNC_IMPL(__imp__sub_8237FAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8237FAF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8237FB10;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8237fb40
	if (ctx.cr0.eq) goto loc_8237FB40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823819a8
	ctx.lr = 0x8237FB34;
	sub_823819A8(ctx, base);
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x823819a8
	ctx.lr = 0x8237FB40;
	sub_823819A8(ctx, base);
loc_8237FB40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237FB50"))) PPC_WEAK_FUNC(sub_8237FB50);
PPC_FUNC_IMPL(__imp__sub_8237FB50) {
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

__attribute__((alias("__imp__sub_8237FB64"))) PPC_WEAK_FUNC(sub_8237FB64);
PPC_FUNC_IMPL(__imp__sub_8237FB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FB68"))) PPC_WEAK_FUNC(sub_8237FB68);
PPC_FUNC_IMPL(__imp__sub_8237FB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8237FB70;
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
	// beq cr6,0x8237fbb0
	if (ctx.cr6.eq) goto loc_8237FBB0;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237fb9c
	if (!ctx.cr6.eq) goto loc_8237FB9C;
	// bl 0x822900a0
	ctx.lr = 0x8237FB98;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8237FB9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237FBB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237FBB0:
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

__attribute__((alias("__imp__sub_8237FBC8"))) PPC_WEAK_FUNC(sub_8237FBC8);
PPC_FUNC_IMPL(__imp__sub_8237FBC8) {
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

__attribute__((alias("__imp__sub_8237FBD8"))) PPC_WEAK_FUNC(sub_8237FBD8);
PPC_FUNC_IMPL(__imp__sub_8237FBD8) {
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

__attribute__((alias("__imp__sub_8237FBE8"))) PPC_WEAK_FUNC(sub_8237FBE8);
PPC_FUNC_IMPL(__imp__sub_8237FBE8) {
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

__attribute__((alias("__imp__sub_8237FBF8"))) PPC_WEAK_FUNC(sub_8237FBF8);
PPC_FUNC_IMPL(__imp__sub_8237FBF8) {
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

__attribute__((alias("__imp__sub_8237FC0C"))) PPC_WEAK_FUNC(sub_8237FC0C);
PPC_FUNC_IMPL(__imp__sub_8237FC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FC10"))) PPC_WEAK_FUNC(sub_8237FC10);
PPC_FUNC_IMPL(__imp__sub_8237FC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8237FC18;
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
	// beq cr6,0x8237fc58
	if (ctx.cr6.eq) goto loc_8237FC58;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237fc44
	if (!ctx.cr6.eq) goto loc_8237FC44;
	// bl 0x822900a0
	ctx.lr = 0x8237FC40;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8237FC44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237FC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237FC58:
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

__attribute__((alias("__imp__sub_8237FC70"))) PPC_WEAK_FUNC(sub_8237FC70);
PPC_FUNC_IMPL(__imp__sub_8237FC70) {
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

__attribute__((alias("__imp__sub_8237FC80"))) PPC_WEAK_FUNC(sub_8237FC80);
PPC_FUNC_IMPL(__imp__sub_8237FC80) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_8237FC98"))) PPC_WEAK_FUNC(sub_8237FC98);
PPC_FUNC_IMPL(__imp__sub_8237FC98) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
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

__attribute__((alias("__imp__sub_8237FCB0"))) PPC_WEAK_FUNC(sub_8237FCB0);
PPC_FUNC_IMPL(__imp__sub_8237FCB0) {
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

__attribute__((alias("__imp__sub_8237FCC0"))) PPC_WEAK_FUNC(sub_8237FCC0);
PPC_FUNC_IMPL(__imp__sub_8237FCC0) {
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

__attribute__((alias("__imp__sub_8237FCD0"))) PPC_WEAK_FUNC(sub_8237FCD0);
PPC_FUNC_IMPL(__imp__sub_8237FCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8237FCD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8237fd9c
	if (ctx.cr6.gt) goto loc_8237FD9C;
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
	// bne cr6,0x8237fd18
	if (!ctx.cr6.eq) goto loc_8237FD18;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8237fd20
	goto loc_8237FD20;
loc_8237FD18:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8237FD20:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8237fd9c
	if (!ctx.cr6.lt) goto loc_8237FD9C;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb0fe0
	ctx.lr = 0x8237FD34;
	sub_82CB0FE0(ctx, base);
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
	// beq cr6,0x8237fd64
	if (ctx.cr6.eq) goto loc_8237FD64;
loc_8237FD4C:
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
	// bne cr6,0x8237fd4c
	if (!ctx.cr6.eq) goto loc_8237FD4C;
loc_8237FD64:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237fd74
	if (ctx.cr6.eq) goto loc_8237FD74;
	// bl 0x82cb3d50
	ctx.lr = 0x8237FD74;
	sub_82CB3D50(ctx, base);
loc_8237FD74:
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
loc_8237FD9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
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
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237FDBC"))) PPC_WEAK_FUNC(sub_8237FDBC);
PPC_FUNC_IMPL(__imp__sub_8237FDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FDC0"))) PPC_WEAK_FUNC(sub_8237FDC0);
PPC_FUNC_IMPL(__imp__sub_8237FDC0) {
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

__attribute__((alias("__imp__sub_8237FDD4"))) PPC_WEAK_FUNC(sub_8237FDD4);
PPC_FUNC_IMPL(__imp__sub_8237FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FDD8"))) PPC_WEAK_FUNC(sub_8237FDD8);
PPC_FUNC_IMPL(__imp__sub_8237FDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8237FDE0;
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
	// beq cr6,0x8237fe20
	if (ctx.cr6.eq) goto loc_8237FE20;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237fe0c
	if (!ctx.cr6.eq) goto loc_8237FE0C;
	// bl 0x822900a0
	ctx.lr = 0x8237FE08;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8237FE0C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237FE20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237FE20:
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

__attribute__((alias("__imp__sub_8237FE38"))) PPC_WEAK_FUNC(sub_8237FE38);
PPC_FUNC_IMPL(__imp__sub_8237FE38) {
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

__attribute__((alias("__imp__sub_8237FE48"))) PPC_WEAK_FUNC(sub_8237FE48);
PPC_FUNC_IMPL(__imp__sub_8237FE48) {
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

__attribute__((alias("__imp__sub_8237FE5C"))) PPC_WEAK_FUNC(sub_8237FE5C);
PPC_FUNC_IMPL(__imp__sub_8237FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FE60"))) PPC_WEAK_FUNC(sub_8237FE60);
PPC_FUNC_IMPL(__imp__sub_8237FE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8237FE68;
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
	// beq cr6,0x8237fea8
	if (ctx.cr6.eq) goto loc_8237FEA8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237fe94
	if (!ctx.cr6.eq) goto loc_8237FE94;
	// bl 0x822900a0
	ctx.lr = 0x8237FE90;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8237FE94:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237FEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237FEA8:
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

__attribute__((alias("__imp__sub_8237FEC0"))) PPC_WEAK_FUNC(sub_8237FEC0);
PPC_FUNC_IMPL(__imp__sub_8237FEC0) {
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

__attribute__((alias("__imp__sub_8237FED0"))) PPC_WEAK_FUNC(sub_8237FED0);
PPC_FUNC_IMPL(__imp__sub_8237FED0) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8237FF00;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8237ff30
	if (ctx.cr0.eq) goto loc_8237FF30;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8237FF1C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8237ff1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237FF1C;
loc_8237FF30:
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

__attribute__((alias("__imp__sub_8237FF50"))) PPC_WEAK_FUNC(sub_8237FF50);
PPC_FUNC_IMPL(__imp__sub_8237FF50) {
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
	// bl 0x823819a8
	ctx.lr = 0x8237FF70;
	sub_823819A8(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// bl 0x823819a8
	ctx.lr = 0x8237FF7C;
	sub_823819A8(ctx, base);
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

__attribute__((alias("__imp__sub_8237FF98"))) PPC_WEAK_FUNC(sub_8237FF98);
PPC_FUNC_IMPL(__imp__sub_8237FF98) {
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

__attribute__((alias("__imp__sub_8237FFA8"))) PPC_WEAK_FUNC(sub_8237FFA8);
PPC_FUNC_IMPL(__imp__sub_8237FFA8) {
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
	// beq cr6,0x82380010
	if (ctx.cr6.eq) goto loc_82380010;
	// bl 0x822d2e90
	ctx.lr = 0x8237FFC8;
	sub_822D2E90(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237ffe8
	if (ctx.cr6.eq) goto loc_8237FFE8;
loc_8237FFD4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8237fff8
	if (ctx.cr6.eq) goto loc_8237FFF8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237ffd4
	if (!ctx.cr6.eq) goto loc_8237FFD4;
loc_8237FFE8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82380010
	if (ctx.cr6.eq) goto loc_82380010;
loc_8237FFF8:
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
loc_82380010:
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

__attribute__((alias("__imp__sub_82380028"))) PPC_WEAK_FUNC(sub_82380028);
PPC_FUNC_IMPL(__imp__sub_82380028) {
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
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82380054;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_8238007C"))) PPC_WEAK_FUNC(sub_8238007C);
PPC_FUNC_IMPL(__imp__sub_8238007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380080"))) PPC_WEAK_FUNC(sub_82380080);
PPC_FUNC_IMPL(__imp__sub_82380080) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x823800AC;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
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

__attribute__((alias("__imp__sub_823800CC"))) PPC_WEAK_FUNC(sub_823800CC);
PPC_FUNC_IMPL(__imp__sub_823800CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823800D0"))) PPC_WEAK_FUNC(sub_823800D0);
PPC_FUNC_IMPL(__imp__sub_823800D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823800D4"))) PPC_WEAK_FUNC(sub_823800D4);
PPC_FUNC_IMPL(__imp__sub_823800D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823800D8"))) PPC_WEAK_FUNC(sub_823800D8);
PPC_FUNC_IMPL(__imp__sub_823800D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823800E0"))) PPC_WEAK_FUNC(sub_823800E0);
PPC_FUNC_IMPL(__imp__sub_823800E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823800E8"))) PPC_WEAK_FUNC(sub_823800E8);
PPC_FUNC_IMPL(__imp__sub_823800E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823800F0"))) PPC_WEAK_FUNC(sub_823800F0);
PPC_FUNC_IMPL(__imp__sub_823800F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823800F4"))) PPC_WEAK_FUNC(sub_823800F4);
PPC_FUNC_IMPL(__imp__sub_823800F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823800F8"))) PPC_WEAK_FUNC(sub_823800F8);
PPC_FUNC_IMPL(__imp__sub_823800F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380100"))) PPC_WEAK_FUNC(sub_82380100);
PPC_FUNC_IMPL(__imp__sub_82380100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380104"))) PPC_WEAK_FUNC(sub_82380104);
PPC_FUNC_IMPL(__imp__sub_82380104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380108"))) PPC_WEAK_FUNC(sub_82380108);
PPC_FUNC_IMPL(__imp__sub_82380108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238010C"))) PPC_WEAK_FUNC(sub_8238010C);
PPC_FUNC_IMPL(__imp__sub_8238010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380110"))) PPC_WEAK_FUNC(sub_82380110);
PPC_FUNC_IMPL(__imp__sub_82380110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238012c
	if (ctx.cr6.eq) goto loc_8238012C;
loc_8238011C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238011c
	if (!ctx.cr6.eq) goto loc_8238011C;
loc_8238012C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,908(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8238013C"))) PPC_WEAK_FUNC(sub_8238013C);
PPC_FUNC_IMPL(__imp__sub_8238013C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380140"))) PPC_WEAK_FUNC(sub_82380140);
PPC_FUNC_IMPL(__imp__sub_82380140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8238014C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238014c
	if (!ctx.cr6.eq) goto loc_8238014C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380160"))) PPC_WEAK_FUNC(sub_82380160);
PPC_FUNC_IMPL(__imp__sub_82380160) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380168"))) PPC_WEAK_FUNC(sub_82380168);
PPC_FUNC_IMPL(__imp__sub_82380168) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380170"))) PPC_WEAK_FUNC(sub_82380170);
PPC_FUNC_IMPL(__imp__sub_82380170) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380178"))) PPC_WEAK_FUNC(sub_82380178);
PPC_FUNC_IMPL(__imp__sub_82380178) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380180"))) PPC_WEAK_FUNC(sub_82380180);
PPC_FUNC_IMPL(__imp__sub_82380180) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380188"))) PPC_WEAK_FUNC(sub_82380188);
PPC_FUNC_IMPL(__imp__sub_82380188) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380190"))) PPC_WEAK_FUNC(sub_82380190);
PPC_FUNC_IMPL(__imp__sub_82380190) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380198"))) PPC_WEAK_FUNC(sub_82380198);
PPC_FUNC_IMPL(__imp__sub_82380198) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801A0"))) PPC_WEAK_FUNC(sub_823801A0);
PPC_FUNC_IMPL(__imp__sub_823801A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801A8"))) PPC_WEAK_FUNC(sub_823801A8);
PPC_FUNC_IMPL(__imp__sub_823801A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801B0"))) PPC_WEAK_FUNC(sub_823801B0);
PPC_FUNC_IMPL(__imp__sub_823801B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801B8"))) PPC_WEAK_FUNC(sub_823801B8);
PPC_FUNC_IMPL(__imp__sub_823801B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801C0"))) PPC_WEAK_FUNC(sub_823801C0);
PPC_FUNC_IMPL(__imp__sub_823801C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801C4"))) PPC_WEAK_FUNC(sub_823801C4);
PPC_FUNC_IMPL(__imp__sub_823801C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823801C8"))) PPC_WEAK_FUNC(sub_823801C8);
PPC_FUNC_IMPL(__imp__sub_823801C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801CC"))) PPC_WEAK_FUNC(sub_823801CC);
PPC_FUNC_IMPL(__imp__sub_823801CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823801D0"))) PPC_WEAK_FUNC(sub_823801D0);
PPC_FUNC_IMPL(__imp__sub_823801D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801D4"))) PPC_WEAK_FUNC(sub_823801D4);
PPC_FUNC_IMPL(__imp__sub_823801D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823801D8"))) PPC_WEAK_FUNC(sub_823801D8);
PPC_FUNC_IMPL(__imp__sub_823801D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801E0"))) PPC_WEAK_FUNC(sub_823801E0);
PPC_FUNC_IMPL(__imp__sub_823801E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801E8"))) PPC_WEAK_FUNC(sub_823801E8);
PPC_FUNC_IMPL(__imp__sub_823801E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801F0"))) PPC_WEAK_FUNC(sub_823801F0);
PPC_FUNC_IMPL(__imp__sub_823801F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801F4"))) PPC_WEAK_FUNC(sub_823801F4);
PPC_FUNC_IMPL(__imp__sub_823801F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823801F8"))) PPC_WEAK_FUNC(sub_823801F8);
PPC_FUNC_IMPL(__imp__sub_823801F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823801FC"))) PPC_WEAK_FUNC(sub_823801FC);
PPC_FUNC_IMPL(__imp__sub_823801FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380200"))) PPC_WEAK_FUNC(sub_82380200);
PPC_FUNC_IMPL(__imp__sub_82380200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380204"))) PPC_WEAK_FUNC(sub_82380204);
PPC_FUNC_IMPL(__imp__sub_82380204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380208"))) PPC_WEAK_FUNC(sub_82380208);
PPC_FUNC_IMPL(__imp__sub_82380208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238020C"))) PPC_WEAK_FUNC(sub_8238020C);
PPC_FUNC_IMPL(__imp__sub_8238020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380210"))) PPC_WEAK_FUNC(sub_82380210);
PPC_FUNC_IMPL(__imp__sub_82380210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380214"))) PPC_WEAK_FUNC(sub_82380214);
PPC_FUNC_IMPL(__imp__sub_82380214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380218"))) PPC_WEAK_FUNC(sub_82380218);
PPC_FUNC_IMPL(__imp__sub_82380218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238021C"))) PPC_WEAK_FUNC(sub_8238021C);
PPC_FUNC_IMPL(__imp__sub_8238021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380220"))) PPC_WEAK_FUNC(sub_82380220);
PPC_FUNC_IMPL(__imp__sub_82380220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380224"))) PPC_WEAK_FUNC(sub_82380224);
PPC_FUNC_IMPL(__imp__sub_82380224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380228"))) PPC_WEAK_FUNC(sub_82380228);
PPC_FUNC_IMPL(__imp__sub_82380228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238022C"))) PPC_WEAK_FUNC(sub_8238022C);
PPC_FUNC_IMPL(__imp__sub_8238022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380230"))) PPC_WEAK_FUNC(sub_82380230);
PPC_FUNC_IMPL(__imp__sub_82380230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380234"))) PPC_WEAK_FUNC(sub_82380234);
PPC_FUNC_IMPL(__imp__sub_82380234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380238"))) PPC_WEAK_FUNC(sub_82380238);
PPC_FUNC_IMPL(__imp__sub_82380238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238023C"))) PPC_WEAK_FUNC(sub_8238023C);
PPC_FUNC_IMPL(__imp__sub_8238023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380240"))) PPC_WEAK_FUNC(sub_82380240);
PPC_FUNC_IMPL(__imp__sub_82380240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380244"))) PPC_WEAK_FUNC(sub_82380244);
PPC_FUNC_IMPL(__imp__sub_82380244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380248"))) PPC_WEAK_FUNC(sub_82380248);
PPC_FUNC_IMPL(__imp__sub_82380248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238024C"))) PPC_WEAK_FUNC(sub_8238024C);
PPC_FUNC_IMPL(__imp__sub_8238024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380250"))) PPC_WEAK_FUNC(sub_82380250);
PPC_FUNC_IMPL(__imp__sub_82380250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380254"))) PPC_WEAK_FUNC(sub_82380254);
PPC_FUNC_IMPL(__imp__sub_82380254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380258"))) PPC_WEAK_FUNC(sub_82380258);
PPC_FUNC_IMPL(__imp__sub_82380258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238025C"))) PPC_WEAK_FUNC(sub_8238025C);
PPC_FUNC_IMPL(__imp__sub_8238025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380260"))) PPC_WEAK_FUNC(sub_82380260);
PPC_FUNC_IMPL(__imp__sub_82380260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380264"))) PPC_WEAK_FUNC(sub_82380264);
PPC_FUNC_IMPL(__imp__sub_82380264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380268"))) PPC_WEAK_FUNC(sub_82380268);
PPC_FUNC_IMPL(__imp__sub_82380268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238026C"))) PPC_WEAK_FUNC(sub_8238026C);
PPC_FUNC_IMPL(__imp__sub_8238026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380270"))) PPC_WEAK_FUNC(sub_82380270);
PPC_FUNC_IMPL(__imp__sub_82380270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380274"))) PPC_WEAK_FUNC(sub_82380274);
PPC_FUNC_IMPL(__imp__sub_82380274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380278"))) PPC_WEAK_FUNC(sub_82380278);
PPC_FUNC_IMPL(__imp__sub_82380278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238027C"))) PPC_WEAK_FUNC(sub_8238027C);
PPC_FUNC_IMPL(__imp__sub_8238027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380280"))) PPC_WEAK_FUNC(sub_82380280);
PPC_FUNC_IMPL(__imp__sub_82380280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380284"))) PPC_WEAK_FUNC(sub_82380284);
PPC_FUNC_IMPL(__imp__sub_82380284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380288"))) PPC_WEAK_FUNC(sub_82380288);
PPC_FUNC_IMPL(__imp__sub_82380288) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380290"))) PPC_WEAK_FUNC(sub_82380290);
PPC_FUNC_IMPL(__imp__sub_82380290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380294"))) PPC_WEAK_FUNC(sub_82380294);
PPC_FUNC_IMPL(__imp__sub_82380294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380298"))) PPC_WEAK_FUNC(sub_82380298);
PPC_FUNC_IMPL(__imp__sub_82380298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823802A8"))) PPC_WEAK_FUNC(sub_823802A8);
PPC_FUNC_IMPL(__imp__sub_823802A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823802dc
	if (!ctx.cr6.eq) goto loc_823802DC;
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823802d4
	if (ctx.cr6.eq) goto loc_823802D4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823802dc
	if (ctx.cr6.eq) goto loc_823802DC;
loc_823802D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823802DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823802E4"))) PPC_WEAK_FUNC(sub_823802E4);
PPC_FUNC_IMPL(__imp__sub_823802E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823802E8"))) PPC_WEAK_FUNC(sub_823802E8);
PPC_FUNC_IMPL(__imp__sub_823802E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823802EC"))) PPC_WEAK_FUNC(sub_823802EC);
PPC_FUNC_IMPL(__imp__sub_823802EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823802F0"))) PPC_WEAK_FUNC(sub_823802F0);
PPC_FUNC_IMPL(__imp__sub_823802F0) {
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
	// bl 0x82ff179c
	ctx.lr = 0x82380304;
	__savevmx_121(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f0,352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f13,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r9,-17552
	ctx.r10.s64 = ctx.r9.s64 + -17552;
	// lfs f12,348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f11,340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f10,344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fdivs f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// addi r9,r8,-17520
	ctx.r9.s64 = ctx.r8.s64 + -17520;
	// addi r8,r7,-17568
	ctx.r8.s64 = ctx.r7.s64 + -17568;
	// lfs f9,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lfs f4,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r6,-17536
	ctx.r7.s64 = ctx.r6.s64 + -17536;
	// lfs f3,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f3.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lvx128 v127,r0,r10
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v126,r0,r9
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fneg f2,f9
	ctx.f2.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lvx128 v125,r0,r8
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f0,-15120(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	ctx.f1.f64 = double(temp.f32);
	// fneg f12,f4
	ctx.f12.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// lfs f11,364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f3
	ctx.f10.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// lfs f9,360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// lvx128 v124,r0,r7
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f5,f8,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// stfs f9,260(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f11,264(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// vor128 v123,v127,v127
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// stfs f13,268(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// vor128 v122,v126,v126
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vor128 v121,v125,v125
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,256(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f2,192(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f10,196(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x82380630
	ctx.lr = 0x82380408;
	sub_82380630(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lvx128 v62,r3,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r10
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v60,v63,v62
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v59,r3,r11
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v57,v59,v61
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v56,v59,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v55,v60,v57
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v54,v58,v56
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrglw128 v53,v60,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v52,v58,v56
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmsum4fp128 v51,v122,v55
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v55.f32), 0xFF));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// vmsum4fp128 v50,v122,v54
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// vmsum4fp128 v49,v122,v53
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vmsum4fp128 v48,v122,v52
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// vmsum4fp128 v47,v123,v55
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v55.f32), 0xFF));
	// vmrghw128 v45,v127,v125
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), _mm_load_si128((__m128i*)ctx.v127.u32)));
	// vmsum4fp128 v46,v123,v54
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v44,v123,v53
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// lvx128 v61,r0,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v43,v123,v52
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmrglw128 v36,v62,v61
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v40,v62,v61
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmsum4fp128 v42,v121,v55
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v55.f32), 0xFF));
	// vmsum4fp128 v41,v121,v54
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// lvx128 v60,r0,r3
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v35,v63,v55
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v55.f32), 0xFF));
	// vmrglw128 v34,v60,v124
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v124.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmsum4fp128 v33,v63,v54
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmrghw128 v38,v60,v124
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v124.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmsum4fp128 v32,v63,v53
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// lvx128 v59,r0,r8
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v61,v63,v52
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmrghw128 v54,v126,v59
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v126.u32)));
	// vmsum4fp128 v39,v121,v53
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmrghw128 v58,v36,v34
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmsum4fp128 v37,v121,v52
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmrghw128 v62,v40,v38
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrglw128 v60,v40,v38
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v57,v51,v50
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrglw128 v56,v36,v34
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v55,v49,v48
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrglw128 v48,v126,v59
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v126.u32)));
	// vmrghw128 v53,v47,v46
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrglw128 v52,v127,v125
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), _mm_load_si128((__m128i*)ctx.v127.u32)));
	// vmrghw128 v51,v57,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v50,v44,v43
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrghw128 v49,v42,v41
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmrglw128 v34,v45,v54
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v42,v35,v33
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmsum4fp128 v46,v51,v62
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmrghw128 v44,v53,v50
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmsum4fp128 v43,v51,v58
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmrghw128 v38,v32,v61
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmsum4fp128 v41,v51,v60
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v40,v51,v56
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmrghw128 v32,v52,v48
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrghw128 v47,v39,v37
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmsum4fp128 v36,v44,v62
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmrghw128 v39,v45,v54
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v63,v42,v38
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmsum4fp128 v35,v44,v58
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v33,v44,v60
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmrglw128 v57,v52,v48
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrghw128 v37,v49,v47
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmsum4fp128 v61,v44,v56
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v52,v63,v62
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v51,v63,v58
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v59,v37,v62
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v55,v37,v58
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v54,v37,v60
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v53,v37,v56
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v50,v63,v60
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmrghw128 v48,v46,v43
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmsum4fp128 v49,v63,v56
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmrghw128 v47,v41,v40
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v46,v36,v35
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v45,v48,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v44,v33,v61
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmsum4fp128 v42,v45,v39
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmrghw128 v36,v52,v51
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmsum4fp128 v40,v45,v32
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// vmrghw128 v38,v46,v44
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v43,v59,v55
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmsum4fp128 v37,v45,v34
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v34.f32), 0xFF));
	// vmsum4fp128 v35,v45,v57
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmrghw128 v41,v54,v53
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v33,v50,v49
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmsum4fp128 v62,v38,v39
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmrghw128 v63,v43,v41
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmsum4fp128 v60,v38,v32
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// vmsum4fp128 v59,v38,v34
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v34.f32), 0xFF));
	// vmrghw128 v58,v42,v40
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmsum4fp128 v56,v38,v57
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmrghw128 v55,v37,v35
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v61,v36,v33
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vmsum4fp128 v54,v63,v39
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v53,v63,v32
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// vmsum4fp128 v52,v63,v34
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v34.f32), 0xFF));
	// vmrghw128 v50,v58,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmsum4fp128 v49,v61,v39
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v51,v63,v57
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v48,v61,v32
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// vmsum4fp128 v47,v61,v34
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v34.f32), 0xFF));
	// vmsum4fp128 v46,v61,v57
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// stvx128 v50,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v45,v62,v60
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v44,v59,v56
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v43,v54,v53
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v41,v45,v44
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v42,v52,v51
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrghw128 v40,v49,v48
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v39,v47,v46
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v38,v43,v42
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// stvx128 v41,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v37,v40,v39
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// stvx128 v38,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ff1a34
	ctx.lr = 0x8238061C;
	__restvmx_121(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238062C"))) PPC_WEAK_FUNC(sub_8238062C);
PPC_FUNC_IMPL(__imp__sub_8238062C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380630"))) PPC_WEAK_FUNC(sub_82380630);
PPC_FUNC_IMPL(__imp__sub_82380630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// subfic r7,r11,16384
	ctx.xer.ca = ctx.r11.u32 <= 16384;
	ctx.r7.s64 = 16384 - ctx.r11.s64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// neg r5,r11
	ctx.r5.s64 = -ctx.r11.s64;
	// srawi r4,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 2;
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// lfs f0,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// subfic r7,r9,16384
	ctx.xer.ca = ctx.r9.u32 <= 16384;
	ctx.r7.s64 = 16384 - ctx.r9.s64;
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// neg r5,r9
	ctx.r5.s64 = -ctx.r9.s64;
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// stfs f0,-108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// srawi r8,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 2;
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// addi r7,r10,-22168
	ctx.r7.s64 = ctx.r10.s64 + -22168;
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// rlwinm r5,r8,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// rlwinm r10,r9,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// subfic r9,r6,16384
	ctx.xer.ca = ctx.r6.u32 <= 16384;
	ctx.r9.s64 = 16384 - ctx.r6.s64;
	// stfs f0,-52(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// neg r8,r6
	ctx.r8.s64 = -ctx.r6.s64;
	// stfs f0,-200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// stfs f0,-196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// lfsx f13,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfsx f12,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f13,-136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// stfs f12,-144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r9,r9,-17520
	ctx.r9.s64 = ctx.r9.s64 + -17520;
	// addi r10,r10,-17536
	ctx.r10.s64 = ctx.r10.s64 + -17536;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// rlwinm r8,r11,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stfs f0,-184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// addi r30,r1,-112
	ctx.r30.s64 = ctx.r1.s64 + -112;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfsx f10,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r8,r4,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// lfsx f8,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// vmrghw128 v61,v62,v63
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrglw128 v58,v62,v63
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// rlwinm r6,r6,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// vor128 v57,v63,v63
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// addi r5,r11,-17552
	ctx.r5.s64 = ctx.r11.s64 + -17552;
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfsx f6,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f6.f64 = double(temp.f32);
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// stfs f0,-180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// lfsx f5,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r1,-192
	ctx.r8.s64 = ctx.r1.s64 + -192;
	// lvx128 v59,r0,r5
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r4,-17568
	ctx.r11.s64 = ctx.r4.s64 + -17568;
	// stfs f10,-44(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f6,-40(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f6,-60(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f9,-56(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lvx128 v63,r0,r31
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r30
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v56,v63,v62
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stfs f5,-208(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// vmrglw128 v55,v63,v62
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stfs f8,-204(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// vmrghw128 v54,v56,v61
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// stfs f7,-192(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// stfs f5,-188(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// vmrglw128 v53,v56,v61
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v51,v55,v58
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lvx128 v62,r0,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v49,v55,v58
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lvx128 v52,r0,r11
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// vmsum4fp128 v48,v63,v54
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v39,v62,v53
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// vmsum4fp128 v41,v62,v51
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vor128 v50,v57,v57
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_load_si128((__m128i*)ctx.v57.u8));
	// vmsum4fp128 v37,v62,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// li r5,16
	ctx.r5.s64 = 16;
	// vmsum4fp128 v47,v63,v53
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// li r4,32
	ctx.r4.s64 = 32;
	// vmsum4fp128 v46,v63,v51
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// lvx128 v61,r0,r7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v45,v63,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// lvx128 v60,r0,r6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v43,v62,v54
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmrghw128 v42,v60,v57
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmsum4fp128 v36,v52,v54
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmrglw128 v38,v60,v57
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmsum4fp128 v32,v52,v53
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmrghw128 v44,v59,v61
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmsum4fp128 v34,v52,v51
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrglw128 v40,v59,v61
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmsum4fp128 v62,v52,v49
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// li r11,48
	ctx.r11.s64 = 48;
	// vmsum4fp128 v60,v50,v54
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v59,v50,v51
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrghw128 v35,v44,v42
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmsum4fp128 v58,v50,v53
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmrglw128 v33,v44,v42
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmsum4fp128 v57,v50,v49
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmrghw128 v63,v40,v38
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrglw128 v61,v40,v38
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v52,v39,v37
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v56,v48,v46
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v55,v47,v45
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v54,v43,v41
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v51,v36,v34
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v49,v32,v62
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v53,v56,v55
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v47,v54,v52
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v45,v60,v59
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v42,v51,v49
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v43,v58,v57
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmsum4fp128 v50,v53,v35
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmsum4fp128 v48,v53,v63
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v46,v53,v33
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// vmsum4fp128 v44,v53,v61
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v41,v47,v35
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmrghw128 v38,v45,v43
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmsum4fp128 v40,v47,v63
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v39,v47,v33
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// vmsum4fp128 v37,v47,v61
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v36,v42,v35
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmsum4fp128 v34,v42,v63
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v32,v42,v33
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// vmsum4fp128 v62,v42,v61
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v60,v38,v35
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmsum4fp128 v59,v38,v63
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v58,v38,v33
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// vmsum4fp128 v57,v38,v61
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmrghw128 v56,v50,v48
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v55,v46,v44
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v54,v41,v40
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v52,v39,v37
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v53,v56,v55
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v51,v36,v34
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v50,v32,v62
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v49,v54,v52
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v48,v60,v59
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v46,v51,v50
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// stvx128 v53,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v47,v58,v57
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stvx128 v49,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v45,v48,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// stvx128 v46,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v45,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823808D0"))) PPC_WEAK_FUNC(sub_823808D0);
PPC_FUNC_IMPL(__imp__sub_823808D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f2,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f1,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380954"))) PPC_WEAK_FUNC(sub_82380954);
PPC_FUNC_IMPL(__imp__sub_82380954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380958"))) PPC_WEAK_FUNC(sub_82380958);
PPC_FUNC_IMPL(__imp__sub_82380958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// rlwinm r9,r11,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// addi r8,r10,-22168
	ctx.r8.s64 = ctx.r10.s64 + -22168;
	// lfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380970"))) PPC_WEAK_FUNC(sub_82380970);
PPC_FUNC_IMPL(__imp__sub_82380970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,16384
	ctx.r11.s64 = ctx.r4.s64 + 16384;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// addi r8,r10,-22168
	ctx.r8.s64 = ctx.r10.s64 + -22168;
	// rlwinm r7,r9,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// lfsx f1,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238098C"))) PPC_WEAK_FUNC(sub_8238098C);
PPC_FUNC_IMPL(__imp__sub_8238098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380990"))) PPC_WEAK_FUNC(sub_82380990);
PPC_FUNC_IMPL(__imp__sub_82380990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f4,12(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823809A4"))) PPC_WEAK_FUNC(sub_823809A4);
PPC_FUNC_IMPL(__imp__sub_823809A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823809A8"))) PPC_WEAK_FUNC(sub_823809A8);
PPC_FUNC_IMPL(__imp__sub_823809A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823809AC"))) PPC_WEAK_FUNC(sub_823809AC);
PPC_FUNC_IMPL(__imp__sub_823809AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823809B0"))) PPC_WEAK_FUNC(sub_823809B0);
PPC_FUNC_IMPL(__imp__sub_823809B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
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
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380A10"))) PPC_WEAK_FUNC(sub_82380A10);
PPC_FUNC_IMPL(__imp__sub_82380A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380A14"))) PPC_WEAK_FUNC(sub_82380A14);
PPC_FUNC_IMPL(__imp__sub_82380A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380A18"))) PPC_WEAK_FUNC(sub_82380A18);
PPC_FUNC_IMPL(__imp__sub_82380A18) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380A20"))) PPC_WEAK_FUNC(sub_82380A20);
PPC_FUNC_IMPL(__imp__sub_82380A20) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380A28"))) PPC_WEAK_FUNC(sub_82380A28);
PPC_FUNC_IMPL(__imp__sub_82380A28) {
	PPC_FUNC_PROLOGUE();
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82380a4c
	if (ctx.cr6.eq) goto loc_82380A4C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82380A4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380A54"))) PPC_WEAK_FUNC(sub_82380A54);
PPC_FUNC_IMPL(__imp__sub_82380A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380A58"))) PPC_WEAK_FUNC(sub_82380A58);
PPC_FUNC_IMPL(__imp__sub_82380A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82380a84
	if (!ctx.cr6.eq) goto loc_82380A84;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rldicr r12,r12,61,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 61) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82380A84:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380A8C"))) PPC_WEAK_FUNC(sub_82380A8C);
PPC_FUNC_IMPL(__imp__sub_82380A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380A90"))) PPC_WEAK_FUNC(sub_82380A90);
PPC_FUNC_IMPL(__imp__sub_82380A90) {
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

__attribute__((alias("__imp__sub_82380AA8"))) PPC_WEAK_FUNC(sub_82380AA8);
PPC_FUNC_IMPL(__imp__sub_82380AA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380AAC"))) PPC_WEAK_FUNC(sub_82380AAC);
PPC_FUNC_IMPL(__imp__sub_82380AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380AB0"))) PPC_WEAK_FUNC(sub_82380AB0);
PPC_FUNC_IMPL(__imp__sub_82380AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82380AB8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ad8
	ctx.lr = 0x82380AC0;
	__savefpr_24(ctx, base);
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lfs f3,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// lwz r6,-136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	// lfs f12,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f5,f13,f8
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// lwz r31,-140(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// lfs f2,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f8,f6,f11,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f7.f64));
	// lfs f7,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f5,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// lwz r11,-144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	// lfs f10,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// fmadds f3,f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f8.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmadds f2,f4,f2,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f9.f64));
	// lfs f13,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f5,f4,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f6.f64));
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stfs f12,-144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stfs f13,-140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// addi r11,r11,-18304
	ctx.r11.s64 = ctx.r11.s64 + -18304;
	// fadds f8,f3,f1
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f8,-120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// lwz r10,-120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	// fadds f6,f2,f10
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fmadds f5,f11,f7,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f9.f64));
	// stfs f6,-128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lwz r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// fadds f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// stfs f4,-124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// lwz r6,-124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82380BA4:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82380BB0:
	// lfs f11,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f1,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f31,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// lfs f30,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// lfs f29,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f1,f1,f7,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f10,f10,f7,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f7,f11,f3,f4
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f6,f3,f5,f1
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fmadds f5,f30,f3,f10
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fmadds f4,f9,f31,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fmadds f3,f29,f0,f6
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f2,f27,f0,f5
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f1,f28,f0,f4
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fsubs f11,f3,f26
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f26.f64));
	// fsubs f10,f2,f24
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f24.f64));
	// fsubs f9,f1,f25
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f25.f64));
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
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
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
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// rlwinm r29,r6,27,29,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r28,r31,27,29,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x4;
	// rlwinm r27,r30,27,29,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x4;
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// rlwinm r31,r31,30,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x4;
	// rlwinm r30,r30,30,29,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x4;
	// or r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 | ctx.r6.u64;
	// or r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 | ctx.r31.u64;
	// or r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 | ctx.r30.u64;
	// lfsx f7,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f5,f7,f3,f26
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f3.f64 : ctx.f26.f64;
	// lfsx f4,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsel f3,f6,f1,f25
	ctx.f3.f64 = ctx.f6.f64 >= 0.0 ? ctx.f1.f64 : ctx.f25.f64;
	// fsel f2,f4,f2,f24
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f2.f64 : ctx.f24.f64;
	// stfs f5,12(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f1,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f4,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f8,f1
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f11,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f11,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f1,f10,f3,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f10,f7,f9,f1
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f11,f0,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmadds f1,f8,f7,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f4.f64));
	// lfs f4,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f6,f3,f2
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f2.f64));
	// lfs f11,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f2,f9,f4
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// lfs f8,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f3,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f30,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f1,f5,f31,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmadds f11,f11,f7,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
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
	// rlwinm r31,r6,27,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// fmadds f10,f8,f0,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f1.f64));
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// fmadds f8,f6,f0,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// or r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 | ctx.r6.u64;
	// lfsx f7,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f6,f7,f9,f4
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f4.f64;
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f5,f10,f3
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fsubs f4,f8,f30
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f30.f64));
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
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
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
	// rlwinm r30,r6,27,29,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r29,r31,27,29,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x4;
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// rlwinm r31,r31,30,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x4;
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// or r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 | ctx.r31.u64;
	// lfsx f2,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// fsel f11,f2,f10,f3
	ctx.f11.f64 = ctx.f2.f64 >= 0.0 ? ctx.f10.f64 : ctx.f3.f64;
	// fsel f10,f1,f8,f30
	ctx.f10.f64 = ctx.f1.f64 >= 0.0 ? ctx.f8.f64 : ctx.f30.f64;
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// bne 0x82380bb0
	if (!ctx.cr0.eq) goto loc_82380BB0;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82380ba4
	if (!ctx.cr0.eq) goto loc_82380BA4;
	// lfs f13,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f9,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f5
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f9,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f12,f8,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f11,f3,f3,f4
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f10,f7,f7,f13
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fmadds f9,f6,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f8,f2,f2,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fsubs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
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
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r8,r10,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f6,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f5,f6,f10,f9
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fsubs f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
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
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lfsx f3,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsel f2,f3,f8,f5
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f8.f64 : ctx.f5.f64;
	// fsqrts f0,f2
	ctx.f0.f64 = double(float(sqrt(ctx.f2.f64)));
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b24
	ctx.lr = 0x82380E48;
	__restfpr_24(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82380E4C"))) PPC_WEAK_FUNC(sub_82380E4C);
PPC_FUNC_IMPL(__imp__sub_82380E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380E50"))) PPC_WEAK_FUNC(sub_82380E50);
PPC_FUNC_IMPL(__imp__sub_82380E50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380E54"))) PPC_WEAK_FUNC(sub_82380E54);
PPC_FUNC_IMPL(__imp__sub_82380E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380E58"))) PPC_WEAK_FUNC(sub_82380E58);
PPC_FUNC_IMPL(__imp__sub_82380E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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

__attribute__((alias("__imp__sub_82380E7C"))) PPC_WEAK_FUNC(sub_82380E7C);
PPC_FUNC_IMPL(__imp__sub_82380E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380E80"))) PPC_WEAK_FUNC(sub_82380E80);
PPC_FUNC_IMPL(__imp__sub_82380E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f1,f12,f11,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380E98"))) PPC_WEAK_FUNC(sub_82380E98);
PPC_FUNC_IMPL(__imp__sub_82380E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f1,f11
	ctx.f1.f64 = double(float(sqrt(ctx.f11.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380EB0"))) PPC_WEAK_FUNC(sub_82380EB0);
PPC_FUNC_IMPL(__imp__sub_82380EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,32428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32428);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82380ee8
	if (!ctx.cr6.lt) goto loc_82380EE8;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82380EE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380EF0"))) PPC_WEAK_FUNC(sub_82380EF0);
PPC_FUNC_IMPL(__imp__sub_82380EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82380EF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82380fb8
	if (!ctx.cr6.gt) goto loc_82380FB8;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82380F1C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82380f58
	if (ctx.cr6.eq) goto loc_82380F58;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82380f44
	if (!ctx.cr6.eq) goto loc_82380F44;
	// bl 0x822900a0
	ctx.lr = 0x82380F40;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82380F44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82380F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82380F58:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82380f98
	if (ctx.cr6.eq) goto loc_82380F98;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82380f84
	if (!ctx.cr6.eq) goto loc_82380F84;
	// bl 0x822900a0
	ctx.lr = 0x82380F80;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82380F84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82380F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82380F98:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82380f1c
	if (ctx.cr6.lt) goto loc_82380F1C;
loc_82380FB8:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82380fec
	if (ctx.cr6.eq) goto loc_82380FEC;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82380fd8
	if (!ctx.cr6.eq) goto loc_82380FD8;
	// bl 0x822900a0
	ctx.lr = 0x82380FD4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82380FD8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82380FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82380FEC:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82381000"))) PPC_WEAK_FUNC(sub_82381000);
PPC_FUNC_IMPL(__imp__sub_82381000) {
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82381948
	ctx.lr = 0x8238101C;
	sub_82381948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82381948
	ctx.lr = 0x82381024;
	sub_82381948(ctx, base);
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

__attribute__((alias("__imp__sub_8238103C"))) PPC_WEAK_FUNC(sub_8238103C);
PPC_FUNC_IMPL(__imp__sub_8238103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381040"))) PPC_WEAK_FUNC(sub_82381040);
PPC_FUNC_IMPL(__imp__sub_82381040) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stb r9,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r9.u8);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381080"))) PPC_WEAK_FUNC(sub_82381080);
PPC_FUNC_IMPL(__imp__sub_82381080) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82382830
	ctx.lr = 0x823810A4;
	sub_82382830(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
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

__attribute__((alias("__imp__sub_823810DC"))) PPC_WEAK_FUNC(sub_823810DC);
PPC_FUNC_IMPL(__imp__sub_823810DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823810E0"))) PPC_WEAK_FUNC(sub_823810E0);
PPC_FUNC_IMPL(__imp__sub_823810E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823810E4"))) PPC_WEAK_FUNC(sub_823810E4);
PPC_FUNC_IMPL(__imp__sub_823810E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823810E8"))) PPC_WEAK_FUNC(sub_823810E8);
PPC_FUNC_IMPL(__imp__sub_823810E8) {
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

__attribute__((alias("__imp__sub_823810F8"))) PPC_WEAK_FUNC(sub_823810F8);
PPC_FUNC_IMPL(__imp__sub_823810F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f11,f10,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f5,f9,f8,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fsubs f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381128"))) PPC_WEAK_FUNC(sub_82381128);
PPC_FUNC_IMPL(__imp__sub_82381128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8238118c
	if (ctx.cr6.gt) goto loc_8238118C;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8238118c
	if (ctx.cr6.gt) goto loc_8238118C;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8238118c
	if (ctx.cr6.gt) goto loc_8238118C;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8238118c
	if (ctx.cr6.gt) goto loc_8238118C;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8238118c
	if (ctx.cr6.gt) goto loc_8238118C;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8238118C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381194"))) PPC_WEAK_FUNC(sub_82381194);
PPC_FUNC_IMPL(__imp__sub_82381194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381198"))) PPC_WEAK_FUNC(sub_82381198);
PPC_FUNC_IMPL(__imp__sub_82381198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823811E4"))) PPC_WEAK_FUNC(sub_823811E4);
PPC_FUNC_IMPL(__imp__sub_823811E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823811E8"))) PPC_WEAK_FUNC(sub_823811E8);
PPC_FUNC_IMPL(__imp__sub_823811E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmsubs f5,f13,f0,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmsubs f4,f8,f12,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmsubs f3,f10,f11,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f3,4(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381228"))) PPC_WEAK_FUNC(sub_82381228);
PPC_FUNC_IMPL(__imp__sub_82381228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f10,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// lfs f8,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,-32(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f5,-28(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// stb r9,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r9.u8);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lwz r7,-32(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stfs f9,-8(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r6,-28(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// fsubs f2,f0,f4
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// stfs f2,-16(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f3,-24(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fsubs f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stw r6,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r6.u32);
	// stw r5,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823812C0"))) PPC_WEAK_FUNC(sub_823812C0);
PPC_FUNC_IMPL(__imp__sub_823812C0) {
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82381948
	ctx.lr = 0x823812DC;
	sub_82381948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82381948
	ctx.lr = 0x823812E4;
	sub_82381948(ctx, base);
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

__attribute__((alias("__imp__sub_823812F8"))) PPC_WEAK_FUNC(sub_823812F8);
PPC_FUNC_IMPL(__imp__sub_823812F8) {
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
	// bl 0x823819a8
	ctx.lr = 0x82381310;
	sub_823819A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82830ee0
	ctx.lr = 0x82381328;
	sub_82830EE0(ctx, base);
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

__attribute__((alias("__imp__sub_82381340"))) PPC_WEAK_FUNC(sub_82381340);
PPC_FUNC_IMPL(__imp__sub_82381340) {
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

__attribute__((alias("__imp__sub_82381354"))) PPC_WEAK_FUNC(sub_82381354);
PPC_FUNC_IMPL(__imp__sub_82381354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381358"))) PPC_WEAK_FUNC(sub_82381358);
PPC_FUNC_IMPL(__imp__sub_82381358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82381360;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823813a8
	ctx.lr = 0x8238137C;
	sub_823813A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// bl 0x82381488
	ctx.lr = 0x82381388;
	sub_82381488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x82381560
	ctx.lr = 0x8238139C;
	sub_82381560(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823813A8"))) PPC_WEAK_FUNC(sub_823813A8);
PPC_FUNC_IMPL(__imp__sub_823813A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ae0
	ctx.lr = 0x823813B8;
	__savefpr_26(ctx, base);
	// lfs f10,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f4,f8
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f6,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f30,f2,f12
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f31,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f29,f31,f10
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f31,f9
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// lfs f13,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f4,f11
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f26,f2,f6
	ctx.f26.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmsubs f7,f11,f12,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmsubs f1,f31,f12,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 - ctx.f1.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmsubs f5,f6,f10,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f5.f64));
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fmsubs f12,f4,f10,f30
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 - ctx.f30.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmsubs f3,f8,f9,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f3.f64));
	// stfs f3,4(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmsubs f10,f2,f8,f29
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 - ctx.f29.f64));
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmsubs f8,f4,f6,f27
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 - ctx.f27.f64));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmsubs f9,f2,f9,f28
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 - ctx.f28.f64));
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmsubs f7,f31,f11,f26
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 - ctx.f26.f64));
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f7,40(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b2c
	ctx.lr = 0x8238147C;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381488"))) PPC_WEAK_FUNC(sub_82381488);
PPC_FUNC_IMPL(__imp__sub_82381488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ae8
	ctx.lr = 0x82381498;
	__savefpr_28(ctx, base);
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f9,f5
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f4,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// fmsubs f12,f7,f11,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f12.f64));
	// lfs f29,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f29.f64 = double(temp.f32);
	// fmsubs f8,f5,f11,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 - ctx.f8.f64));
	// lfs f28,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmsubs f11,f4,f11,f6
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 - ctx.f6.f64));
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f3,f7,f10,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f3.f64));
	// lfs f6,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f1,f4,f10,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 - ctx.f1.f64));
	// fmsubs f13,f7,f9,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 - ctx.f13.f64));
	// fmuls f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f7,f2,f11
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f4,f3,f31
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmsubs f12,f0,f8,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 - ctx.f10.f64));
	// fmsubs f11,f0,f11,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f9.f64));
	// fmsubs f10,f31,f8,f7
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f8.f64 - ctx.f7.f64));
	// fmsubs f9,f0,f1,f4
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 - ctx.f4.f64));
	// fmadds f8,f3,f30,f12
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmadds f7,f13,f30,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fmadds f4,f30,f1,f10
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f3,f13,f2,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmuls f2,f8,f29
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmsubs f1,f4,f28,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 - ctx.f2.f64));
	// fmadds f0,f7,f5,f1
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fnmsubs f1,f3,f6,f0
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f6.f64 - ctx.f0.f64)));
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x82381550;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238155C"))) PPC_WEAK_FUNC(sub_8238155C);
PPC_FUNC_IMPL(__imp__sub_8238155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381560"))) PPC_WEAK_FUNC(sub_82381560);
PPC_FUNC_IMPL(__imp__sub_82381560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lfs f11,32(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f10,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lwz r10,17952(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17952);
	// lfs f2,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lfs f3,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// clrlwi r31,r10,31
	ctx.r31.u64 = ctx.r10.u32 & 0x1;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,17936
	ctx.r11.s64 = ctx.r11.s64 + 17936;
	// lfs f10,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f31,40(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f9,f4,f5,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f9.f64));
	// lfs f0,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f7.f64));
	// lfs f7,52(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f2,f5,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f6.f64));
	// lfs f5,56(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,-32444(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -32444);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f2,f11,f13,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f13,f10,f12,f3
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f11,f31,f12,f6
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f10,f4,f0,f2
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmadds f12,f7,f0,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f11,f5,f0,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// bne cr6,0x8238161c
	if (!ctx.cr6.eq) goto loc_8238161C;
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
	// stw r10,17952(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17952, ctx.r10.u32);
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8238161C:
	// fmuls f7,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfd f9,-18352(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// lfs f13,-18108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18108);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f11,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f5,f10,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fsqrt f4,f5
	ctx.f4.f64 = sqrt(ctx.f5.f64);
	// fdiv f3,f9,f4
	ctx.f3.f64 = ctx.f9.f64 / ctx.f4.f64;
	// fcmpu cr6,f5,f13
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// frsp f13,f3
	ctx.f13.f64 = double(float(ctx.f3.f64));
	// ble cr6,0x8238166c
	if (!ctx.cr6.gt) goto loc_8238166C;
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f9,-60(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f7,-56(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f0,-52(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
loc_8238166C:
	// lfs f13,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
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
	// fmuls f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r4,r7,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// fmuls f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f3,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// or r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 | ctx.r4.u64;
	// lfs f1,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r11,-18304
	ctx.r9.s64 = ctx.r11.s64 + -18304;
	// lfs f2,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// fmuls f13,f3,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f9,f1,f11
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f1,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f3,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f2,f7,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fsel f0,f3,f8,f0
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// lfs f8,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,-40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,-44(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f8,f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f13.f64));
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f9,f12,f7,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f9.f64));
	// lfs f31,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// lfs f7,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f2,f1,f10,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,-56(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f12,-64(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// lwz r6,-64(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r5,-60(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// fmadds f1,f3,f10,f9
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f9.f64));
	// lwz r7,-56(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// fmadds f10,f31,f10,f8
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// fadds f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// fadds f9,f1,f30
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// fadds f7,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f6,f9,f13,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f5,f7,f12,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f5,12(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381784"))) PPC_WEAK_FUNC(sub_82381784);
PPC_FUNC_IMPL(__imp__sub_82381784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381788"))) PPC_WEAK_FUNC(sub_82381788);
PPC_FUNC_IMPL(__imp__sub_82381788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r11,r11,17936
	ctx.r11.s64 = ctx.r11.s64 + 17936;
	// lwz r10,17952(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17952);
	// lfs f11,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823817cc
	if (!ctx.cr6.eq) goto loc_823817CC;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,17952(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17952, ctx.r10.u32);
	// lfs f0,-32444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_823817CC:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfd f12,-18352(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// lfs f13,-18108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18108);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f0,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrt f6,f7
	ctx.f6.f64 = sqrt(ctx.f7.f64);
	// fdiv f5,f12,f6
	ctx.f5.f64 = ctx.f12.f64 / ctx.f6.f64;
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// ble cr6,0x8238182c
	if (!ctx.cr6.gt) goto loc_8238182C;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f10,-16(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,-12(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f7,-8(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f11,-4(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
loc_8238182C:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381840"))) PPC_WEAK_FUNC(sub_82381840);
PPC_FUNC_IMPL(__imp__sub_82381840) {
	PPC_FUNC_PROLOGUE();
	// fsqrt f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = sqrt(ctx.f1.f64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,-18352(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// fdiv f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 / ctx.f13.f64;
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381858"))) PPC_WEAK_FUNC(sub_82381858);
PPC_FUNC_IMPL(__imp__sub_82381858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f4,12(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238186C"))) PPC_WEAK_FUNC(sub_8238186C);
PPC_FUNC_IMPL(__imp__sub_8238186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381870"))) PPC_WEAK_FUNC(sub_82381870);
PPC_FUNC_IMPL(__imp__sub_82381870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823818B0"))) PPC_WEAK_FUNC(sub_823818B0);
PPC_FUNC_IMPL(__imp__sub_823818B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// lfs f12,32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lfs f13,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f13,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f6,f10,f12,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823818FC"))) PPC_WEAK_FUNC(sub_823818FC);
PPC_FUNC_IMPL(__imp__sub_823818FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381900"))) PPC_WEAK_FUNC(sub_82381900);
PPC_FUNC_IMPL(__imp__sub_82381900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f7,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381934"))) PPC_WEAK_FUNC(sub_82381934);
PPC_FUNC_IMPL(__imp__sub_82381934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381938"))) PPC_WEAK_FUNC(sub_82381938);
PPC_FUNC_IMPL(__imp__sub_82381938) {
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

__attribute__((alias("__imp__sub_82381948"))) PPC_WEAK_FUNC(sub_82381948);
PPC_FUNC_IMPL(__imp__sub_82381948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82381950;
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
	// beq cr6,0x82381990
	if (ctx.cr6.eq) goto loc_82381990;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238197c
	if (!ctx.cr6.eq) goto loc_8238197C;
	// bl 0x822900a0
	ctx.lr = 0x82381978;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8238197C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82381990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82381990:
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

__attribute__((alias("__imp__sub_823819A8"))) PPC_WEAK_FUNC(sub_823819A8);
PPC_FUNC_IMPL(__imp__sub_823819A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82381a18
	if (ctx.cr6.eq) goto loc_82381A18;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82381a1c
	if (!ctx.cr6.gt) goto loc_82381A1C;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82294520
	ctx.lr = 0x823819FC;
	sub_82294520(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x82381A10;
	sub_82BEA998(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82381A18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82381A1C:
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

__attribute__((alias("__imp__sub_82381A34"))) PPC_WEAK_FUNC(sub_82381A34);
PPC_FUNC_IMPL(__imp__sub_82381A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381A38"))) PPC_WEAK_FUNC(sub_82381A38);
PPC_FUNC_IMPL(__imp__sub_82381A38) {
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
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82381ad0
	if (ctx.cr6.eq) goto loc_82381AD0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82381aac
	if (!ctx.cr6.gt) goto loc_82381AAC;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82381a8c
	if (ctx.cr6.eq) goto loc_82381A8C;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82294520
	ctx.lr = 0x82381A8C;
	sub_82294520(ctx, base);
loc_82381A8C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x82381AA0;
	sub_82BEA998(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82381ad0
	goto loc_82381AD0;
loc_82381AAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82381ad0
	if (ctx.cr6.eq) goto loc_82381AD0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82381AD0;
	sub_82294520(ctx, base);
loc_82381AD0:
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

__attribute__((alias("__imp__sub_82381AE8"))) PPC_WEAK_FUNC(sub_82381AE8);
PPC_FUNC_IMPL(__imp__sub_82381AE8) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82381B14;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
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

__attribute__((alias("__imp__sub_82381B34"))) PPC_WEAK_FUNC(sub_82381B34);
PPC_FUNC_IMPL(__imp__sub_82381B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381B38"))) PPC_WEAK_FUNC(sub_82381B38);
PPC_FUNC_IMPL(__imp__sub_82381B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381B5C"))) PPC_WEAK_FUNC(sub_82381B5C);
PPC_FUNC_IMPL(__imp__sub_82381B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381B60"))) PPC_WEAK_FUNC(sub_82381B60);
PPC_FUNC_IMPL(__imp__sub_82381B60) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82381B84"))) PPC_WEAK_FUNC(sub_82381B84);
PPC_FUNC_IMPL(__imp__sub_82381B84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381B88"))) PPC_WEAK_FUNC(sub_82381B88);
PPC_FUNC_IMPL(__imp__sub_82381B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,100
	ctx.r10.s64 = ctx.r4.s64 * 100;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381B98"))) PPC_WEAK_FUNC(sub_82381B98);
PPC_FUNC_IMPL(__imp__sub_82381B98) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82381bc0
	if (ctx.cr6.eq) goto loc_82381BC0;
	// bl 0x82367960
	ctx.lr = 0x82381BC0;
	sub_82367960(ctx, base);
loc_82381BC0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381BDC"))) PPC_WEAK_FUNC(sub_82381BDC);
PPC_FUNC_IMPL(__imp__sub_82381BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381BE0"))) PPC_WEAK_FUNC(sub_82381BE0);
PPC_FUNC_IMPL(__imp__sub_82381BE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381BE4"))) PPC_WEAK_FUNC(sub_82381BE4);
PPC_FUNC_IMPL(__imp__sub_82381BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381BE8"))) PPC_WEAK_FUNC(sub_82381BE8);
PPC_FUNC_IMPL(__imp__sub_82381BE8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381C00"))) PPC_WEAK_FUNC(sub_82381C00);
PPC_FUNC_IMPL(__imp__sub_82381C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82381C08;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82e640b8
	ctx.lr = 0x82381C40;
	sub_82E640B8(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82381d58
	ctx.lr = 0x82381C54;
	sub_82381D58(ctx, base);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// ld r4,-20040(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20040);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82381C74;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82381C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823716b8
	ctx.lr = 0x82381C98;
	sub_823716B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82381CA0"))) PPC_WEAK_FUNC(sub_82381CA0);
PPC_FUNC_IMPL(__imp__sub_82381CA0) {
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
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82e640b8
	ctx.lr = 0x82381CD4;
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

__attribute__((alias("__imp__sub_82381CEC"))) PPC_WEAK_FUNC(sub_82381CEC);
PPC_FUNC_IMPL(__imp__sub_82381CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381CF0"))) PPC_WEAK_FUNC(sub_82381CF0);
PPC_FUNC_IMPL(__imp__sub_82381CF0) {
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
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82e640b8
	ctx.lr = 0x82381D20;
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

__attribute__((alias("__imp__sub_82381D38"))) PPC_WEAK_FUNC(sub_82381D38);
PPC_FUNC_IMPL(__imp__sub_82381D38) {
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

__attribute__((alias("__imp__sub_82381D4C"))) PPC_WEAK_FUNC(sub_82381D4C);
PPC_FUNC_IMPL(__imp__sub_82381D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381D50"))) PPC_WEAK_FUNC(sub_82381D50);
PPC_FUNC_IMPL(__imp__sub_82381D50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x823716b8
	sub_823716B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82381D58"))) PPC_WEAK_FUNC(sub_82381D58);
PPC_FUNC_IMPL(__imp__sub_82381D58) {
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
	// bl 0x82381dc8
	ctx.lr = 0x82381D78;
	sub_82381DC8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
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

