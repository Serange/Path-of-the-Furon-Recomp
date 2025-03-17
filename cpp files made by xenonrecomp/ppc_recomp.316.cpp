#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A6AAAC"))) PPC_WEAK_FUNC(sub_82A6AAAC);
PPC_FUNC_IMPL(__imp__sub_82A6AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6AAB0"))) PPC_WEAK_FUNC(sub_82A6AAB0);
PPC_FUNC_IMPL(__imp__sub_82A6AAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,936(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 936);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a6aad8
	if (ctx.cr6.eq) goto loc_82A6AAD8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// b 0x82a6aba0
	sub_82A6ABA0(ctx, base);
	return;
loc_82A6AAD8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,888(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 888);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// bgt cr6,0x82a6aaf8
	if (ctx.cr6.gt) goto loc_82A6AAF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82a6aba0
	sub_82A6ABA0(ctx, base);
	return;
loc_82A6AAF8:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82a6aba0
	sub_82A6ABA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6AB00"))) PPC_WEAK_FUNC(sub_82A6AB00);
PPC_FUNC_IMPL(__imp__sub_82A6AB00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6AB04"))) PPC_WEAK_FUNC(sub_82A6AB04);
PPC_FUNC_IMPL(__imp__sub_82A6AB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6AB08"))) PPC_WEAK_FUNC(sub_82A6AB08);
PPC_FUNC_IMPL(__imp__sub_82A6AB08) {
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
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-18304
	ctx.r9.s64 = ctx.r10.s64 + -18304;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f12,916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
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
	// rlwinm r4,r8,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r11,r8,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// lfsx f11,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f31,f11,f0,f1
	ctx.f31.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82563f48
	ctx.lr = 0x82A6AB68;
	sub_82563F48(ctx, base);
	// lfs f10,920(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f10.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// fmuls f1,f10,f31
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6AB84;
	sub_82563F48(ctx, base);
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

__attribute__((alias("__imp__sub_82A6AB9C"))) PPC_WEAK_FUNC(sub_82A6AB9C);
PPC_FUNC_IMPL(__imp__sub_82A6AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6ABA0"))) PPC_WEAK_FUNC(sub_82A6ABA0);
PPC_FUNC_IMPL(__imp__sub_82A6ABA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6ABA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r30,936(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 936);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a6ad68
	if (ctx.cr6.eq) goto loc_82A6AD68;
	// stb r4,936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 936, ctx.r4.u8);
	// bl 0x82a6b0b8
	ctx.lr = 0x82A6ABC8;
	sub_82A6B0B8(ctx, base);
	// lbz r11,936(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 936);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82a6ad68
	if (ctx.cr6.gt) goto loc_82A6AD68;
	// lis r12,-32089
	ctx.r12.s64 = -2102984704;
	// addi r12,r12,-21524
	ctx.r12.s64 = ctx.r12.s64 + -21524;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A6AC00;
	case 1:
		goto loc_82A6AC10;
	case 2:
		goto loc_82A6AD0C;
	case 3:
		goto loc_82A6ACD4;
	case 4:
		goto loc_82A6AC94;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-21504(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21504);
	// lwz r21,-21488(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21488);
	// lwz r21,-21236(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21236);
	// lwz r21,-21292(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21292);
	// lwz r21,-21356(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21356);
loc_82A6AC00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6af68
	ctx.lr = 0x82A6AC08;
	sub_82A6AF68(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A6AC10:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6ad68
	if (ctx.cr6.eq) goto loc_82A6AD68;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a6ac38
	if (ctx.cr6.gt) goto loc_82A6AC38;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a6ac40
	goto loc_82A6AC40;
loc_82A6AC38:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A6AC40:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A6AC48;
	sub_8258A128(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a6ad68
	if (ctx.cr6.eq) goto loc_82A6AD68;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,21044
	ctx.r4.s64 = ctx.r11.s64 + 21044;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A6AC74;
	sub_8233E028(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825ce828
	ctx.lr = 0x82A6AC8C;
	sub_825CE828(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A6AC94:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x82A6ACA4;
	sub_822960C0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// bl 0x82570f58
	ctx.lr = 0x82A6ACB0;
	sub_82570F58(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82A6ACB8;
	sub_82299080(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r9.u32);
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A6ACD4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
	// bl 0x82295680
	ctx.lr = 0x82A6ACE4;
	sub_82295680(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// bl 0x82570f58
	ctx.lr = 0x82A6ACF0;
	sub_82570F58(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x82A6ACF8;
	sub_82299080(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// stw r9,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r9.u32);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// b 0x82a6ad38
	goto loc_82A6AD38;
loc_82A6AD0C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x82A6AD1C;
	sub_822960C0(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// bl 0x82570f58
	ctx.lr = 0x82A6AD28;
	sub_82570F58(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82299080
	ctx.lr = 0x82A6AD30;
	sub_82299080(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
loc_82A6AD38:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// bne cr6,0x82a6ad60
	if (!ctx.cr6.eq) goto loc_82A6AD60;
	// lfs f0,872(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,868(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,872(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A6AD60:
	// lfs f0,868(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
loc_82A6AD68:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6AD70"))) PPC_WEAK_FUNC(sub_82A6AD70);
PPC_FUNC_IMPL(__imp__sub_82A6AD70) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a6adac
	if (ctx.cr6.eq) goto loc_82A6ADAC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a6adb8
	if (!ctx.cr6.eq) goto loc_82A6ADB8;
loc_82A6ADAC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a6ae70
	goto loc_82A6AE70;
loc_82A6ADB8:
	// lbz r11,936(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 936);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82a6ae5c
	if (ctx.cr6.gt) goto loc_82A6AE5C;
	// lis r12,-32089
	ctx.r12.s64 = -2102984704;
	// addi r12,r12,-21028
	ctx.r12.s64 = ctx.r12.s64 + -21028;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A6ADF0;
	case 1:
		goto loc_82A6AE14;
	case 2:
		goto loc_82A6AE04;
	case 3:
		goto loc_82A6ADF0;
	case 4:
		goto loc_82A6AE14;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-21008(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21008);
	// lwz r21,-20972(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20972);
	// lwz r21,-20988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20988);
	// lwz r21,-21008(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21008);
	// lwz r21,-20972(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20972);
loc_82A6ADF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6a1e0
	ctx.lr = 0x82A6ADFC;
	sub_82A6A1E0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82a6ae54
	goto loc_82A6AE54;
loc_82A6AE04:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6a1e0
	ctx.lr = 0x82A6AE10;
	sub_82A6A1E0(ctx, base);
	// b 0x82a6ae5c
	goto loc_82A6AE5C;
loc_82A6AE14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6a1e0
	ctx.lr = 0x82A6AE20;
	sub_82A6A1E0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a6ae3c
	if (ctx.cr6.eq) goto loc_82A6AE3C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a6ae40
	goto loc_82A6AE40;
loc_82A6AE3C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82A6AE40:
	// bl 0x82cb0328
	ctx.lr = 0x82A6AE44;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82a6ae54
	if (ctx.cr6.eq) goto loc_82A6AE54;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82A6AE54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6aba0
	ctx.lr = 0x82A6AE5C;
	sub_82A6ABA0(ctx, base);
loc_82A6AE5C:
	// lfs f0,876(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 876);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82A6AE70:
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

__attribute__((alias("__imp__sub_82A6AE8C"))) PPC_WEAK_FUNC(sub_82A6AE8C);
PPC_FUNC_IMPL(__imp__sub_82A6AE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6AE90"))) PPC_WEAK_FUNC(sub_82A6AE90);
PPC_FUNC_IMPL(__imp__sub_82A6AE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6AE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r5,888(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82a6aebc
	if (!ctx.cr6.gt) goto loc_82A6AEBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,884
	ctx.r3.s64 = ctx.r31.s64 + 884;
	// bl 0x8233cc50
	ctx.lr = 0x82A6AEBC;
	sub_8233CC50(ctx, base);
loc_82A6AEBC:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r30.u32);
	// stw r30,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r30.u32);
	// stw r30,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r30.u32);
	// beq cr6,0x82a6af08
	if (ctx.cr6.eq) goto loc_82A6AF08;
	// stb r30,936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 936, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6b0b8
	ctx.lr = 0x82A6AEE0;
	sub_82A6B0B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6af68
	ctx.lr = 0x82A6AEE8;
	sub_82A6AF68(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,176(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// bl 0x82a6ab08
	ctx.lr = 0x82A6AEFC;
	sub_82A6AB08(ctx, base);
	// stw r30,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A6AF08:
	// lbz r11,936(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 936);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a6af30
	if (!ctx.cr6.gt) goto loc_82A6AF30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82a6af24
	if (!ctx.cr6.gt) goto loc_82A6AF24;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82a6af30
	if (!ctx.cr6.eq) goto loc_82A6AF30;
loc_82A6AF24:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6aba0
	ctx.lr = 0x82A6AF30;
	sub_82A6ABA0(ctx, base);
loc_82A6AF30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6AF38"))) PPC_WEAK_FUNC(sub_82A6AF38);
PPC_FUNC_IMPL(__imp__sub_82A6AF38) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,936(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 936);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82a6af58
	if (ctx.cr6.eq) goto loc_82A6AF58;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82a6af58
	if (ctx.cr6.eq) goto loc_82A6AF58;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82A6AF58:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6AF60"))) PPC_WEAK_FUNC(sub_82A6AF60);
PPC_FUNC_IMPL(__imp__sub_82A6AF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,864(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 864);
	// b 0x82570f58
	sub_82570F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6AF68"))) PPC_WEAK_FUNC(sub_82A6AF68);
PPC_FUNC_IMPL(__imp__sub_82A6AF68) {
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
	// lwz r5,888(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82a6af98
	if (!ctx.cr6.gt) goto loc_82A6AF98;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,884
	ctx.r3.s64 = ctx.r31.s64 + 884;
	// bl 0x8233cc50
	ctx.lr = 0x82A6AF98;
	sub_8233CC50(ctx, base);
loc_82A6AF98:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r30,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r30.u32);
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// stw r30,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r30.u32);
	// bl 0x822960c0
	ctx.lr = 0x82A6AFB8;
	sub_822960C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// bl 0x82570f58
	ctx.lr = 0x82A6AFC4;
	sub_82570F58(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a6afe8
	if (ctx.cr6.eq) goto loc_82A6AFE8;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82A6AFE8;
	sub_82294520(ctx, base);
loc_82A6AFE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82A6AFF0;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_82A6B008"))) PPC_WEAK_FUNC(sub_82A6B008);
PPC_FUNC_IMPL(__imp__sub_82A6B008) {
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
	// lwz r5,888(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82a6b034
	if (!ctx.cr6.gt) goto loc_82A6B034;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,884
	ctx.r3.s64 = ctx.r31.s64 + 884;
	// bl 0x8233cc50
	ctx.lr = 0x82A6B034;
	sub_8233CC50(ctx, base);
loc_82A6B034:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A6B058"))) PPC_WEAK_FUNC(sub_82A6B058);
PPC_FUNC_IMPL(__imp__sub_82A6B058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r8,r9,-18304
	ctx.r8.s64 = ctx.r9.s64 + -18304;
	// lfs f13,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f1,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
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
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f0,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f7,176(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6B0B8"))) PPC_WEAK_FUNC(sub_82A6B0B8);
PPC_FUNC_IMPL(__imp__sub_82A6B0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6B0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6b13c
	if (ctx.cr6.eq) goto loc_82A6B13C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a6b0f0
	if (ctx.cr6.gt) goto loc_82A6B0F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a6b0f8
	goto loc_82A6B0F8;
loc_82A6B0F0:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A6B0F8:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A6B100;
	sub_8258A128(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a6b13c
	if (ctx.cr6.eq) goto loc_82A6B13C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,21044
	ctx.r4.s64 = ctx.r11.s64 + 21044;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A6B12C;
	sub_8233E028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x825ce990
	ctx.lr = 0x82A6B13C;
	sub_825CE990(ctx, base);
loc_82A6B13C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6B144"))) PPC_WEAK_FUNC(sub_82A6B144);
PPC_FUNC_IMPL(__imp__sub_82A6B144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6B148"))) PPC_WEAK_FUNC(sub_82A6B148);
PPC_FUNC_IMPL(__imp__sub_82A6B148) {
	PPC_FUNC_PROLOGUE();
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
	// bgt cr6,0x82a6b168
	if (ctx.cr6.gt) goto loc_82A6B168;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a6b170
	goto loc_82A6B170;
loc_82A6B168:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A6B170:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// b 0x8258a128
	sub_8258A128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6B178"))) PPC_WEAK_FUNC(sub_82A6B178);
PPC_FUNC_IMPL(__imp__sub_82A6B178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A6B180;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823824d8
	ctx.lr = 0x82A6B190;
	sub_823824D8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
loc_82A6B198:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6b1b0
	if (ctx.cr6.eq) goto loc_82A6B1B0;
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a6b27c
	if (!ctx.cr6.eq) goto loc_82A6B27C;
loc_82A6B1B0:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a6b27c
	if (!ctx.cr6.eq) goto loc_82A6B27C;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a6b1d0
	if (ctx.cr6.eq) goto loc_82A6B1D0;
	// lwz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// b 0x82a6b1d4
	goto loc_82A6B1D4;
loc_82A6B1D0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82A6B1D4:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A6B1E8;
	sub_8233E028(ctx, base);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a6b218
	if (!ctx.cr6.eq) goto loc_82A6B218;
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a6b218
	if (!ctx.cr6.eq) goto loc_82A6B218;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6fc00
	ctx.lr = 0x82A6B214;
	sub_82A6FC00(ctx, base);
	// stw r3,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r3.u32);
loc_82A6B218:
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a6b22c
	if (ctx.cr6.eq) goto loc_82A6B22C;
	// lwz r4,528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// b 0x82a6b230
	goto loc_82A6B230;
loc_82A6B22C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82A6B230:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x82A6B244;
	sub_8233E028(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a6b270
	if (!ctx.cr6.eq) goto loc_82A6B270;
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a6b270
	if (!ctx.cr6.eq) goto loc_82A6B270;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6fc80
	ctx.lr = 0x82A6B26C;
	sub_82A6FC80(ctx, base);
	// stw r3,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r3.u32);
loc_82A6B270:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82382368
	ctx.lr = 0x82A6B278;
	sub_82382368(ctx, base);
	// b 0x82a6b198
	goto loc_82A6B198;
loc_82A6B27C:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lwz r3,-26064(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26064);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a6b2b8
	if (!ctx.cr6.eq) goto loc_82A6B2B8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827e8c30
	ctx.lr = 0x82A6B2AC;
	sub_827E8C30(ctx, base);
	// stw r3,-26064(r30)
	PPC_STORE_U32(ctx.r30.u32 + -26064, ctx.r3.u32);
	// bl 0x827e8cf0
	ctx.lr = 0x82A6B2B4;
	sub_827E8CF0(ctx, base);
	// lwz r3,-26064(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26064);
loc_82A6B2B8:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// rldicr r6,r6,46,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 46) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a93e8
	ctx.lr = 0x82A6B2E0;
	sub_822A93E8(ctx, base);
	// bl 0x82a6fd00
	ctx.lr = 0x82A6B2E4;
	sub_82A6FD00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r3.u32);
	// beq cr6,0x82a6b318
	if (ctx.cr6.eq) goto loc_82A6B318;
	// lbz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 552);
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// lwz r9,544(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r11,204(r3)
	PPC_STORE_U8(ctx.r3.u32 + 204, ctx.r11.u8);
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
	// lwz r6,272(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 272);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A6B318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A6B318:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6b34c
	if (ctx.cr6.eq) goto loc_82A6B34C;
	// lwz r3,492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6b34c
	if (ctx.cr6.eq) goto loc_82A6B34C;
	// bl 0x825dc078
	ctx.lr = 0x82A6B338;
	sub_825DC078(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6b34c
	if (ctx.cr6.eq) goto loc_82A6B34C;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// stw r11,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r11.u32);
loc_82A6B34C:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6b37c
	if (ctx.cr6.eq) goto loc_82A6B37C;
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6b37c
	if (ctx.cr6.eq) goto loc_82A6B37C;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6b37c
	if (ctx.cr6.eq) goto loc_82A6B37C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a6b380
	if (!ctx.cr6.eq) goto loc_82A6B380;
loc_82A6B37C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82A6B380:
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a6b3bc
	if (!ctx.cr6.eq) goto loc_82A6B3BC;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 33554432;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bl 0x8260ac08
	ctx.lr = 0x82A6B3AC;
	sub_8260AC08(ctx, base);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A6B3BC:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6B3CC"))) PPC_WEAK_FUNC(sub_82A6B3CC);
PPC_FUNC_IMPL(__imp__sub_82A6B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6B3D0"))) PPC_WEAK_FUNC(sub_82A6B3D0);
PPC_FUNC_IMPL(__imp__sub_82A6B3D0) {
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
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6b414
	if (ctx.cr6.eq) goto loc_82A6B414;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a6b414
	if (ctx.cr6.eq) goto loc_82A6B414;
	// bl 0x82a6b808
	ctx.lr = 0x82A6B408;
	sub_82A6B808(ctx, base);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a6b418
	goto loc_82A6B418;
loc_82A6B414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A6B418:
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

__attribute__((alias("__imp__sub_82A6B430"))) PPC_WEAK_FUNC(sub_82A6B430);
PPC_FUNC_IMPL(__imp__sub_82A6B430) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6b514
	if (ctx.cr6.eq) goto loc_82A6B514;
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6b514
	if (ctx.cr6.eq) goto loc_82A6B514;
	// lwz r3,500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,668(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A6B4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// lfs f10,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f7,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// lfs f11,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,-31264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8276feb0
	ctx.lr = 0x82A6B514;
	sub_8276FEB0(ctx, base);
loc_82A6B514:
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

__attribute__((alias("__imp__sub_82A6B528"))) PPC_WEAK_FUNC(sub_82A6B528);
PPC_FUNC_IMPL(__imp__sub_82A6B528) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lwz r3,500(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6b588
	if (ctx.cr6.eq) goto loc_82A6B588;
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r7,256(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicr r5,r10,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825cd468
	ctx.lr = 0x82A6B588;
	sub_825CD468(ctx, base);
loc_82A6B588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6B598"))) PPC_WEAK_FUNC(sub_82A6B598);
PPC_FUNC_IMPL(__imp__sub_82A6B598) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addis r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82a6b5d4
	if (!ctx.cr6.lt) goto loc_82A6B5D4;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_82A6B5D4:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6B5DC"))) PPC_WEAK_FUNC(sub_82A6B5DC);
PPC_FUNC_IMPL(__imp__sub_82A6B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6B5E0"))) PPC_WEAK_FUNC(sub_82A6B5E0);
PPC_FUNC_IMPL(__imp__sub_82A6B5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6B5E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6b6f0
	if (ctx.cr6.eq) goto loc_82A6B6F0;
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r8,256(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823b1058
	ctx.lr = 0x82A6B630;
	sub_823B1058(ctx, base);
	// lwz r10,500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6b654
	if (ctx.cr6.eq) goto loc_82A6B654;
loc_82A6B640:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a6b664
	if (ctx.cr6.eq) goto loc_82A6B664;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a6b640
	if (!ctx.cr6.eq) goto loc_82A6B640;
loc_82A6B654:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a6b6a0
	if (ctx.cr6.eq) goto loc_82A6B6A0;
loc_82A6B664:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a6b6e0
	if (!ctx.cr6.gt) goto loc_82A6B6E0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82a6b6e0
	if (!ctx.cr6.lt) goto loc_82A6B6E0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 32768;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82a6b6dc
	if (!ctx.cr6.lt) goto loc_82A6B6DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82a6b6e0
	goto loc_82A6B6E0;
loc_82A6B6A0:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,6371
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6371, ctx.xer);
	// ble cr6,0x82a6b6e0
	if (!ctx.cr6.gt) goto loc_82A6B6E0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,59164
	ctx.r9.u64 = ctx.r9.u64 | 59164;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82a6b6e0
	if (!ctx.cr6.lt) goto loc_82A6B6E0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 32768;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82a6b6dc
	if (!ctx.cr6.lt) goto loc_82A6B6DC;
	// li r11,6371
	ctx.r11.s64 = 6371;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82a6b6e0
	goto loc_82A6B6E0;
loc_82A6B6DC:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82A6B6E0:
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x825cd468
	ctx.lr = 0x82A6B6F0;
	sub_825CD468(ctx, base);
loc_82A6B6F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6B6F8"))) PPC_WEAK_FUNC(sub_82A6B6F8);
PPC_FUNC_IMPL(__imp__sub_82A6B6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6B700;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lwz r3,500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6b7a4
	if (ctx.cr6.eq) goto loc_82A6B7A4;
	// bl 0x829d91a8
	ctx.lr = 0x82A6B71C;
	sub_829D91A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a6b79c
	if (ctx.cr6.eq) goto loc_82A6B79C;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// ld r4,-2652(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + -2652);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82A6B778;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A6B794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A6B79C:
	// lwz r3,500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// bl 0x82977b10
	ctx.lr = 0x82A6B7A4;
	sub_82977B10(ctx, base);
loc_82A6B7A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6B7AC"))) PPC_WEAK_FUNC(sub_82A6B7AC);
PPC_FUNC_IMPL(__imp__sub_82A6B7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6B7B0"))) PPC_WEAK_FUNC(sub_82A6B7B0);
PPC_FUNC_IMPL(__imp__sub_82A6B7B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6b7d0
	if (ctx.cr6.eq) goto loc_82A6B7D0;
	// lwz r11,500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82A6B7D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6B7D8"))) PPC_WEAK_FUNC(sub_82A6B7D8);
PPC_FUNC_IMPL(__imp__sub_82A6B7D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6b7f4
	if (ctx.cr6.eq) goto loc_82A6B7F4;
	// lwz r11,500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a6b7fc
	if (!ctx.cr6.eq) goto loc_82A6B7FC;
loc_82A6B7F4:
	// lwz r3,512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// blr 
	return;
loc_82A6B7FC:
	// lwz r3,504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6B804"))) PPC_WEAK_FUNC(sub_82A6B804);
PPC_FUNC_IMPL(__imp__sub_82A6B804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6B808"))) PPC_WEAK_FUNC(sub_82A6B808);
PPC_FUNC_IMPL(__imp__sub_82A6B808) {
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
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6b8f4
	if (ctx.cr6.eq) goto loc_82A6B8F4;
	// lis r9,-31881
	ctx.r9.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// lwz r10,-18524(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18524);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a6b870
	if (!ctx.cr6.eq) goto loc_82A6B870;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,-18524(r9)
	PPC_STORE_U32(ctx.r9.u32 + -18524, ctx.r10.u32);
	// lfs f0,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,21088(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21088);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x82a6b87c
	goto loc_82A6B87C;
loc_82A6B870:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
loc_82A6B87C:
	// lwz r4,500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f10,244(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lwz r3,-31264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lfs f7,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fadds f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f11,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8276feb0
	ctx.lr = 0x82A6B8D8;
	sub_8276FEB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r10.u32);
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
loc_82A6B8F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A6B910"))) PPC_WEAK_FUNC(sub_82A6B910);
PPC_FUNC_IMPL(__imp__sub_82A6B910) {
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
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6ba50
	if (ctx.cr6.eq) goto loc_82A6BA50;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,1004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fmr f11,f31
	ctx.f11.f64 = ctx.f31.f64;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82a6b97c
	if (ctx.cr6.eq) goto loc_82A6B97C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r4,964(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 964);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6B978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_82A6B97C:
	// lfs f13,1016(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// beq cr6,0x82a6ba50
	if (ctx.cr6.eq) goto loc_82A6BA50;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// lfs f12,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f12.f64 = double(temp.f32);
	// bge cr6,0x82a6b9a0
	if (!ctx.cr6.lt) goto loc_82A6B9A0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82a6b9a8
	goto loc_82A6B9A8;
loc_82A6B9A0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
loc_82A6B9A8:
	// lfs f10,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// addi r10,r11,-18304
	ctx.r10.s64 = ctx.r11.s64 + -18304;
	// fmadds f0,f9,f30,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f11.f64));
	// blt cr6,0x82a6ba08
	if (ctx.cr6.lt) goto loc_82A6BA08;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
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
	// lfsx f10,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
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
	// rlwinm r3,r5,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lfsx f7,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f1,f7,f9,f0
	ctx.f1.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// b 0x82a6ba48
	goto loc_82A6BA48;
loc_82A6BA08:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
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
	// lfsx f11,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f31,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
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
	// rlwinm r3,r5,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lfsx f8,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f1,f8,f0,f10
	ctx.f1.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
loc_82A6BA48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6be80
	ctx.lr = 0x82A6BA50;
	sub_82A6BE80(ctx, base);
loc_82A6BA50:
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

__attribute__((alias("__imp__sub_82A6BA6C"))) PPC_WEAK_FUNC(sub_82A6BA6C);
PPC_FUNC_IMPL(__imp__sub_82A6BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6BA70"))) PPC_WEAK_FUNC(sub_82A6BA70);
PPC_FUNC_IMPL(__imp__sub_82A6BA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r8,-18304
	ctx.r7.s64 = ctx.r8.s64 + -18304;
	// lfs f13,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// lfsx f11,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f1,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
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
	// rlwinm r6,r9,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lfsx f8,r7,r5
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f1,f8,f0,f10
	ctx.f1.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f1,176(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,972(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 972);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6BAEC"))) PPC_WEAK_FUNC(sub_82A6BAEC);
PPC_FUNC_IMPL(__imp__sub_82A6BAEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6BAF0"))) PPC_WEAK_FUNC(sub_82A6BAF0);
PPC_FUNC_IMPL(__imp__sub_82A6BAF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,980(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 980);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6BB14"))) PPC_WEAK_FUNC(sub_82A6BB14);
PPC_FUNC_IMPL(__imp__sub_82A6BB14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6BB18"))) PPC_WEAK_FUNC(sub_82A6BB18);
PPC_FUNC_IMPL(__imp__sub_82A6BB18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,988(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 988);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6BB3C"))) PPC_WEAK_FUNC(sub_82A6BB3C);
PPC_FUNC_IMPL(__imp__sub_82A6BB3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6BB40"))) PPC_WEAK_FUNC(sub_82A6BB40);
PPC_FUNC_IMPL(__imp__sub_82A6BB40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,996(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 996);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6BB6C"))) PPC_WEAK_FUNC(sub_82A6BB6C);
PPC_FUNC_IMPL(__imp__sub_82A6BB6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6BB70"))) PPC_WEAK_FUNC(sub_82A6BB70);
PPC_FUNC_IMPL(__imp__sub_82A6BB70) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x82a6bbe0
	if (ctx.cr6.eq) goto loc_82A6BBE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6BBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6BBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x82a6bbf0
	goto loc_82A6BBF0;
loc_82A6BBE0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82A6BBF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A6BC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82A6BC30"))) PPC_WEAK_FUNC(sub_82A6BC30);
PPC_FUNC_IMPL(__imp__sub_82A6BC30) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a6bcd0
	if (ctx.cr6.eq) goto loc_82A6BCD0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a6bcac
	if (ctx.cr6.eq) goto loc_82A6BCAC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6bc74
	if (ctx.cr6.eq) goto loc_82A6BC74;
	// lfs f0,1016(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a6bca8
	goto loc_82A6BCA8;
loc_82A6BC74:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,1004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82a6bca4
	if (ctx.cr6.eq) goto loc_82A6BCA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r4,964(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 964);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6BCA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A6BCA4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_82A6BCA8:
	// stfs f0,1016(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
loc_82A6BCAC:
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a6bcd0
	if (!ctx.cr6.eq) goto loc_82A6BCD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,1016(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a6bcf0
	ctx.lr = 0x82A6BCD0;
	sub_82A6BCF0(ctx, base);
loc_82A6BCD0:
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

__attribute__((alias("__imp__sub_82A6BCE8"))) PPC_WEAK_FUNC(sub_82A6BCE8);
PPC_FUNC_IMPL(__imp__sub_82A6BCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1012(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1012, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6BCF0"))) PPC_WEAK_FUNC(sub_82A6BCF0);
PPC_FUNC_IMPL(__imp__sub_82A6BCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A6BCF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f13,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r8,-18304
	ctx.r6.s64 = ctx.r8.s64 + -18304;
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1008(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1008);
	// rlwinm r7,r11,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// rlwinm r3,r5,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lfsx f11,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f1,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
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
	// rlwinm r5,r9,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// or r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 | ctx.r5.u64;
	// lfsx f8,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f1,f8,f0,f10
	ctx.f1.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// beq cr6,0x82a6bdd8
	if (ctx.cr6.eq) goto loc_82A6BDD8;
	// lwz r11,1024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1024);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
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
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// blt 0x82a6bdf8
	if (ctx.cr0.lt) goto loc_82A6BDF8;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A6BD9C:
	// lwz r11,1020(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1020);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6bdc4
	if (ctx.cr6.eq) goto loc_82A6BDC4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// blt cr6,0x82a6bdbc
	if (ctx.cr6.lt) goto loc_82A6BDBC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A6BDBC:
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a6c698
	ctx.lr = 0x82A6BDC4;
	sub_82A6C698(ctx, base);
loc_82A6BDC4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bge 0x82a6bd9c
	if (!ctx.cr0.lt) goto loc_82A6BD9C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A6BDD8:
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6bdf0
	if (ctx.cr6.eq) goto loc_82A6BDF0;
	// stfs f1,1016(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1016, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A6BDF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a6be80
	ctx.lr = 0x82A6BDF8;
	sub_82A6BE80(ctx, base);
loc_82A6BDF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6BE00"))) PPC_WEAK_FUNC(sub_82A6BE00);
PPC_FUNC_IMPL(__imp__sub_82A6BE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r8,-18304
	ctx.r7.s64 = ctx.r8.s64 + -18304;
	// lfs f13,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// lfsx f11,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f1,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
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
	// rlwinm r6,r9,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lfsx f8,r7,r5
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f1,f8,f0,f10
	ctx.f1.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f1,1016(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1016, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,964(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 964);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6BE7C"))) PPC_WEAK_FUNC(sub_82A6BE7C);
PPC_FUNC_IMPL(__imp__sub_82A6BE7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6BE80"))) PPC_WEAK_FUNC(sub_82A6BE80);
PPC_FUNC_IMPL(__imp__sub_82A6BE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-18304
	ctx.r10.s64 = ctx.r10.s64 + -18304;
	// lfs f13,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f0,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f11,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f1,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// ld r4,964(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 964);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// rlwinm r9,r11,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r8,r11,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f11,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f1,f11,f0,f13
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6BEF8"))) PPC_WEAK_FUNC(sub_82A6BEF8);
PPC_FUNC_IMPL(__imp__sub_82A6BEF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6BEFC"))) PPC_WEAK_FUNC(sub_82A6BEFC);
PPC_FUNC_IMPL(__imp__sub_82A6BEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6BF00"))) PPC_WEAK_FUNC(sub_82A6BF00);
PPC_FUNC_IMPL(__imp__sub_82A6BF00) {
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
	// lwz r11,1008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6bf38
	if (ctx.cr6.eq) goto loc_82A6BF38;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a6bf38
	if (!ctx.cr6.eq) goto loc_82A6BF38;
	// lfs f1,1016(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1016);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A6BF38:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,1004(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1004);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82a6bf70
	if (ctx.cr6.eq) goto loc_82A6BF70;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r4,964(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 964);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,276(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A6BF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A6BF70:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6BF84"))) PPC_WEAK_FUNC(sub_82A6BF84);
PPC_FUNC_IMPL(__imp__sub_82A6BF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6BF88"))) PPC_WEAK_FUNC(sub_82A6BF88);
PPC_FUNC_IMPL(__imp__sub_82A6BF88) {
	PPC_FUNC_PROLOGUE();
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
	// bgt cr6,0x82a6bfa8
	if (ctx.cr6.gt) goto loc_82A6BFA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a6bfb0
	goto loc_82A6BFB0;
loc_82A6BFA8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A6BFB0:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// b 0x8258a128
	sub_8258A128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6BFB8"))) PPC_WEAK_FUNC(sub_82A6BFB8);
PPC_FUNC_IMPL(__imp__sub_82A6BFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A6BFC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,1008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// lwz r31,960(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// rlwimi r11,r4,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// stw r11,1008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1008, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6c03c
	if (ctx.cr6.eq) goto loc_82A6C03C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a6c02c
	if (ctx.cr6.eq) goto loc_82A6C02C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-18212(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18212);
	// bl 0x8229e490
	ctx.lr = 0x82A6C010;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A6C02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A6C02C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6c0e8
	ctx.lr = 0x82A6C034;
	sub_82A6C0E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A6C03C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a6c084
	if (ctx.cr6.eq) goto loc_82A6C084;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
	// ld r4,-18212(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18212);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82A6C068;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A6C084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A6C084:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6c470
	ctx.lr = 0x82A6C08C;
	sub_82A6C470(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6C094"))) PPC_WEAK_FUNC(sub_82A6C094);
PPC_FUNC_IMPL(__imp__sub_82A6C094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6C098"))) PPC_WEAK_FUNC(sub_82A6C098);
PPC_FUNC_IMPL(__imp__sub_82A6C098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6C0A4"))) PPC_WEAK_FUNC(sub_82A6C0A4);
PPC_FUNC_IMPL(__imp__sub_82A6C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6C0A8"))) PPC_WEAK_FUNC(sub_82A6C0A8);
PPC_FUNC_IMPL(__imp__sub_82A6C0A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x82a6c540
	sub_82A6C540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6C0B8"))) PPC_WEAK_FUNC(sub_82A6C0B8);
PPC_FUNC_IMPL(__imp__sub_82A6C0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6C0BC"))) PPC_WEAK_FUNC(sub_82A6C0BC);
PPC_FUNC_IMPL(__imp__sub_82A6C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6C0C0"))) PPC_WEAK_FUNC(sub_82A6C0C0);
PPC_FUNC_IMPL(__imp__sub_82A6C0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1040(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// stw r4,1040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1040, ctx.r4.u32);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6c540
	sub_82A6C540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6C0E4"))) PPC_WEAK_FUNC(sub_82A6C0E4);
PPC_FUNC_IMPL(__imp__sub_82A6C0E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6C0E8"))) PPC_WEAK_FUNC(sub_82A6C0E8);
PPC_FUNC_IMPL(__imp__sub_82A6C0E8) {
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
	// bl 0x82a6c470
	ctx.lr = 0x82A6C10C;
	sub_82A6C470(ctx, base);
	// lwz r3,960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,3
	ctx.r4.s64 = 3;
	// bne cr6,0x82a6c128
	if (!ctx.cr6.eq) goto loc_82A6C128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6C128:
	// bl 0x82563ce8
	ctx.lr = 0x82A6C12C;
	sub_82563CE8(ctx, base);
	// lwz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// li r6,0
	ctx.r6.s64 = 0;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// li r5,3
	ctx.r5.s64 = 3;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r4,0
	ctx.r4.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f31,f12,f1
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// bl 0x82563ce8
	ctx.lr = 0x82A6C15C;
	sub_82563CE8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82563ce8
	ctx.lr = 0x82A6C174;
	sub_82563CE8(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f13,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82a6c1b8
	if (ctx.cr6.eq) goto loc_82A6C1B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6C1A0;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6C1B8;
	sub_82563F48(ctx, base);
loc_82A6C1B8:
	// lwz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a6c1e0
	if (!ctx.cr6.gt) goto loc_82A6C1E0;
loc_82A6C1C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6c208
	ctx.lr = 0x82A6C1D0;
	sub_82A6C208(ctx, base);
	// lwz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a6c1c8
	if (ctx.cr6.lt) goto loc_82A6C1C8;
loc_82A6C1E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6c540
	ctx.lr = 0x82A6C1E8;
	sub_82A6C540(ctx, base);
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

__attribute__((alias("__imp__sub_82A6C208"))) PPC_WEAK_FUNC(sub_82A6C208);
PPC_FUNC_IMPL(__imp__sub_82A6C208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A6C210;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r3,-25064(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25064);
	// lwz r28,25104(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25104);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x82a6c258
	if (!ctx.cr6.eq) goto loc_82A6C258;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82a67dc8
	ctx.lr = 0x82A6C24C;
	sub_82A67DC8(ctx, base);
	// stw r3,-25064(r30)
	PPC_STORE_U32(ctx.r30.u32 + -25064, ctx.r3.u32);
	// bl 0x82a67e78
	ctx.lr = 0x82A6C254;
	sub_82A67E78(ctx, base);
	// lwz r3,-25064(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25064);
loc_82A6C258:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x82A6C27C;
	sub_822A93E8(ctx, base);
	// bl 0x82a6fd80
	ctx.lr = 0x82A6C280;
	sub_82A6FD80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a6c2dc
	if (ctx.cr6.eq) goto loc_82A6C2DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6C2B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1036(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r4,1032(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// bl 0x82a6c628
	ctx.lr = 0x82A6C2C0;
	sub_82A6C628(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1020
	ctx.r3.s64 = ctx.r31.s64 + 1020;
	// bl 0x82a6fb88
	ctx.lr = 0x82A6C2CC;
	sub_82A6FB88(ctx, base);
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82a6c2e8
	ctx.lr = 0x82A6C2DC;
	sub_82A6C2E8(ctx, base);
loc_82A6C2DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6C2E4"))) PPC_WEAK_FUNC(sub_82A6C2E4);
PPC_FUNC_IMPL(__imp__sub_82A6C2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6C2E8"))) PPC_WEAK_FUNC(sub_82A6C2E8);
PPC_FUNC_IMPL(__imp__sub_82A6C2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6C2F0;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a6c45c
	if (!ctx.cr6.lt) goto loc_82A6C45C;
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a6c45c
	if (ctx.cr6.eq) goto loc_82A6C45C;
	// lwz r3,960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82a6c344
	if (!ctx.cr6.eq) goto loc_82A6C344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6C344:
	// bl 0x82563ce8
	ctx.lr = 0x82A6C348;
	sub_82563CE8(ctx, base);
	// lwz r3,960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// bne cr6,0x82a6c368
	if (!ctx.cr6.eq) goto loc_82A6C368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6C368:
	// bl 0x82563ce8
	ctx.lr = 0x82A6C36C;
	sub_82563CE8(ctx, base);
	// lwz r3,960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x82a6c38c
	if (!ctx.cr6.eq) goto loc_82A6C38C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6C38C:
	// bl 0x82563ce8
	ctx.lr = 0x82A6C390;
	sub_82563CE8(ctx, base);
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6c3e8
	if (ctx.cr6.eq) goto loc_82A6C3E8;
	// lwz r3,960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// bne cr6,0x82a6c3c0
	if (!ctx.cr6.eq) goto loc_82A6C3C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6C3C0:
	// bl 0x82563ce8
	ctx.lr = 0x82A6C3C4;
	sub_82563CE8(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f1,f11,f31,f0
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// b 0x82a6c400
	goto loc_82A6C400;
loc_82A6C3E8:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f12,f31,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f30.f64));
loc_82A6C400:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6C414;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6C42C;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6C444;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6C45C;
	sub_82563F48(ctx, base);
loc_82A6C45C:
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

__attribute__((alias("__imp__sub_82A6C470"))) PPC_WEAK_FUNC(sub_82A6C470);
PPC_FUNC_IMPL(__imp__sub_82A6C470) {
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
	// lwz r11,1024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a6c4a8
	if (ctx.cr0.lt) goto loc_82A6C4A8;
loc_82A6C494:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6c4c0
	ctx.lr = 0x82A6C4A0;
	sub_82A6C4C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82a6c494
	if (!ctx.cr0.lt) goto loc_82A6C494;
loc_82A6C4A8:
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

__attribute__((alias("__imp__sub_82A6C4C0"))) PPC_WEAK_FUNC(sub_82A6C4C0);
PPC_FUNC_IMPL(__imp__sub_82A6C4C0) {
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
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82a6c4ec
	if (!ctx.cr6.lt) goto loc_82A6C4EC;
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a6c524
	if (!ctx.cr6.lt) goto loc_82A6C524;
loc_82A6C4EC:
	// lwz r11,1020(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r3,1020
	ctx.r30.s64 = ctx.r3.s64 + 1020;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a6c50c
	if (ctx.cr6.eq) goto loc_82A6C50C;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82562628
	ctx.lr = 0x82A6C50C;
	sub_82562628(ctx, base);
loc_82A6C50C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d180
	ctx.lr = 0x82A6C524;
	sub_8232D180(ctx, base);
loc_82A6C524:
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

__attribute__((alias("__imp__sub_82A6C53C"))) PPC_WEAK_FUNC(sub_82A6C53C);
PPC_FUNC_IMPL(__imp__sub_82A6C53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6C540"))) PPC_WEAK_FUNC(sub_82A6C540);
PPC_FUNC_IMPL(__imp__sub_82A6C540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A6C548;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// lwz r30,1024(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82a6c58c
	if (!ctx.cr6.gt) goto loc_82A6C58C;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a6c5a8
	if (ctx.cr6.lt) goto loc_82A6C5A8;
loc_82A6C56C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6c4c0
	ctx.lr = 0x82A6C578;
	sub_82A6C4C0(ctx, base);
	// lwz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a6c56c
	if (!ctx.cr6.lt) goto loc_82A6C56C;
	// b 0x82a6c5a8
	goto loc_82A6C5A8;
loc_82A6C58C:
	// bge cr6,0x82a6c5a8
	if (!ctx.cr6.lt) goto loc_82A6C5A8;
loc_82A6C590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6c208
	ctx.lr = 0x82A6C598;
	sub_82A6C208(ctx, base);
	// lwz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a6c590
	if (ctx.cr6.lt) goto loc_82A6C590;
loc_82A6C5A8:
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a6c620
	if (!ctx.cr6.gt) goto loc_82A6C620;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A6C5BC:
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6c60c
	if (ctx.cr6.eq) goto loc_82A6C60C;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r28,1036(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r3,964(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6c60c
	if (ctx.cr6.eq) goto loc_82A6C60C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,1032(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r4,968(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 968);
	// bl 0x8244fd80
	ctx.lr = 0x82A6C5F4;
	sub_8244FD80(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r4,976(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 976);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,964(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	// bl 0x8244fd80
	ctx.lr = 0x82A6C60C;
	sub_8244FD80(ctx, base);
loc_82A6C60C:
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a6c5bc
	if (ctx.cr6.lt) goto loc_82A6C5BC;
loc_82A6C620:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6C628"))) PPC_WEAK_FUNC(sub_82A6C628);
PPC_FUNC_IMPL(__imp__sub_82A6C628) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6c680
	if (ctx.cr6.eq) goto loc_82A6C680;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,968(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 968);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8244fd80
	ctx.lr = 0x82A6C668;
	sub_8244FD80(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r4,976(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 976);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	// bl 0x8244fd80
	ctx.lr = 0x82A6C680;
	sub_8244FD80(ctx, base);
loc_82A6C680:
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

__attribute__((alias("__imp__sub_82A6C698"))) PPC_WEAK_FUNC(sub_82A6C698);
PPC_FUNC_IMPL(__imp__sub_82A6C698) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 960);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a6c6f0
	if (ctx.cr6.eq) goto loc_82A6C6F0;
	// lwz r3,964(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 964);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 960, ctx.r11.u32);
	// beq cr6,0x82a6c6f0
	if (ctx.cr6.eq) goto loc_82A6C6F0;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// ld r4,984(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 984);
	// li r7,0
	ctx.r7.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r6,1
	ctx.r6.s64 = 1;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8244fc30
	ctx.lr = 0x82A6C6F0;
	sub_8244FC30(ctx, base);
loc_82A6C6F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6C700"))) PPC_WEAK_FUNC(sub_82A6C700);
PPC_FUNC_IMPL(__imp__sub_82A6C700) {
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
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82a6b910
	ctx.lr = 0x82A6C724;
	sub_82A6B910(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,1072(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82a6c768
	if (!ctx.cr6.gt) goto loc_82A6C768;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,1072(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82a6c768
	if (ctx.cr6.gt) goto loc_82A6C768;
	// lwz r3,1004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6c768
	if (ctx.cr6.eq) goto loc_82A6C768;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1084(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1084);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A6C768;
	sub_8244FC30(ctx, base);
loc_82A6C768:
	// lwz r3,1004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6c798
	if (ctx.cr6.eq) goto loc_82A6C798;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r4,964(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 964);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6C794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
loc_82A6C798:
	// lfs f0,1056(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1056);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a6c7c0
	if (ctx.cr6.gt) goto loc_82A6C7C0;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,1060(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1064(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fdivs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmadds f1,f9,f10,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f12.f64));
	// b 0x82a6c7c4
	goto loc_82A6C7C4;
loc_82A6C7C0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82A6C7C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6c7e8
	ctx.lr = 0x82A6C7CC;
	sub_82A6C7E8(ctx, base);
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

__attribute__((alias("__imp__sub_82A6C7E8"))) PPC_WEAK_FUNC(sub_82A6C7E8);
PPC_FUNC_IMPL(__imp__sub_82A6C7E8) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6c850
	if (ctx.cr6.eq) goto loc_82A6C850;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r4,1076(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1076);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6C82C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82a6c850
	if (ctx.cr6.eq) goto loc_82A6C850;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1076(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1076);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,1004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A6C850;
	sub_8244FC30(ctx, base);
loc_82A6C850:
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

__attribute__((alias("__imp__sub_82A6C868"))) PPC_WEAK_FUNC(sub_82A6C868);
PPC_FUNC_IMPL(__imp__sub_82A6C868) {
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
	// lwz r3,1004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6c8a0
	if (ctx.cr6.eq) goto loc_82A6C8A0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// ld r4,1084(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1084);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244fc30
	ctx.lr = 0x82A6C8A0;
	sub_8244FC30(ctx, base);
loc_82A6C8A0:
	// lfs f0,1068(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1068);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1072(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
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

__attribute__((alias("__imp__sub_82A6C8BC"))) PPC_WEAK_FUNC(sub_82A6C8BC);
PPC_FUNC_IMPL(__imp__sub_82A6C8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6C8C0"))) PPC_WEAK_FUNC(sub_82A6C8C0);
PPC_FUNC_IMPL(__imp__sub_82A6C8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// ld r4,1084(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1084);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6C8E8"))) PPC_WEAK_FUNC(sub_82A6C8E8);
PPC_FUNC_IMPL(__imp__sub_82A6C8E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6C8EC"))) PPC_WEAK_FUNC(sub_82A6C8EC);
PPC_FUNC_IMPL(__imp__sub_82A6C8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6C8F0"))) PPC_WEAK_FUNC(sub_82A6C8F0);
PPC_FUNC_IMPL(__imp__sub_82A6C8F0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82563ce8
	ctx.lr = 0x82A6C920;
	sub_82563CE8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82563ce8
	ctx.lr = 0x82A6C938;
	sub_82563CE8(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82a6c97c
	if (ctx.cr6.eq) goto loc_82A6C97C;
	// li r7,0
	ctx.r7.s64 = 0;
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6C964;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6C97C;
	sub_82563F48(ctx, base);
loc_82A6C97C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82A6C998"))) PPC_WEAK_FUNC(sub_82A6C998);
PPC_FUNC_IMPL(__imp__sub_82A6C998) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,1112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1116(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1116);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6C9C4"))) PPC_WEAK_FUNC(sub_82A6C9C4);
PPC_FUNC_IMPL(__imp__sub_82A6C9C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6C9C8"))) PPC_WEAK_FUNC(sub_82A6C9C8);
PPC_FUNC_IMPL(__imp__sub_82A6C9C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// stw r4,1032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1032, ctx.r4.u32);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// stw r5,1036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1036, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x82a6c540
	sub_82A6C540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6C9FC"))) PPC_WEAK_FUNC(sub_82A6C9FC);
PPC_FUNC_IMPL(__imp__sub_82A6C9FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CA00"))) PPC_WEAK_FUNC(sub_82A6CA00);
PPC_FUNC_IMPL(__imp__sub_82A6CA00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bfb8
	sub_82A6BFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CA10"))) PPC_WEAK_FUNC(sub_82A6CA10);
PPC_FUNC_IMPL(__imp__sub_82A6CA10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CA14"))) PPC_WEAK_FUNC(sub_82A6CA14);
PPC_FUNC_IMPL(__imp__sub_82A6CA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CA18"))) PPC_WEAK_FUNC(sub_82A6CA18);
PPC_FUNC_IMPL(__imp__sub_82A6CA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82556ff8
	sub_82556FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CA28"))) PPC_WEAK_FUNC(sub_82A6CA28);
PPC_FUNC_IMPL(__imp__sub_82A6CA28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CA2C"))) PPC_WEAK_FUNC(sub_82A6CA2C);
PPC_FUNC_IMPL(__imp__sub_82A6CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CA30"))) PPC_WEAK_FUNC(sub_82A6CA30);
PPC_FUNC_IMPL(__imp__sub_82A6CA30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6c8f0
	sub_82A6C8F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CA40"))) PPC_WEAK_FUNC(sub_82A6CA40);
PPC_FUNC_IMPL(__imp__sub_82A6CA40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CA44"))) PPC_WEAK_FUNC(sub_82A6CA44);
PPC_FUNC_IMPL(__imp__sub_82A6CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CA48"))) PPC_WEAK_FUNC(sub_82A6CA48);
PPC_FUNC_IMPL(__imp__sub_82A6CA48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1040(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// stw r4,1040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1040, ctx.r4.u32);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6c540
	sub_82A6C540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CA78"))) PPC_WEAK_FUNC(sub_82A6CA78);
PPC_FUNC_IMPL(__imp__sub_82A6CA78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CA7C"))) PPC_WEAK_FUNC(sub_82A6CA7C);
PPC_FUNC_IMPL(__imp__sub_82A6CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CA80"))) PPC_WEAK_FUNC(sub_82A6CA80);
PPC_FUNC_IMPL(__imp__sub_82A6CA80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bcf0
	sub_82A6BCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CA90"))) PPC_WEAK_FUNC(sub_82A6CA90);
PPC_FUNC_IMPL(__imp__sub_82A6CA90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CA94"))) PPC_WEAK_FUNC(sub_82A6CA94);
PPC_FUNC_IMPL(__imp__sub_82A6CA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CA98"))) PPC_WEAK_FUNC(sub_82A6CA98);
PPC_FUNC_IMPL(__imp__sub_82A6CA98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1116(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1116);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CACC"))) PPC_WEAK_FUNC(sub_82A6CACC);
PPC_FUNC_IMPL(__imp__sub_82A6CACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CAD0"))) PPC_WEAK_FUNC(sub_82A6CAD0);
PPC_FUNC_IMPL(__imp__sub_82A6CAD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,996(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 996);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CB04"))) PPC_WEAK_FUNC(sub_82A6CB04);
PPC_FUNC_IMPL(__imp__sub_82A6CB04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CB08"))) PPC_WEAK_FUNC(sub_82A6CB08);
PPC_FUNC_IMPL(__imp__sub_82A6CB08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,988(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 988);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CB34"))) PPC_WEAK_FUNC(sub_82A6CB34);
PPC_FUNC_IMPL(__imp__sub_82A6CB34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CB38"))) PPC_WEAK_FUNC(sub_82A6CB38);
PPC_FUNC_IMPL(__imp__sub_82A6CB38) {
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
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6cb64
	if (ctx.cr6.eq) goto loc_82A6CB64;
	// bl 0x82556ff8
	ctx.lr = 0x82A6CB64;
	sub_82556FF8(ctx, base);
loc_82A6CB64:
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6cb7c
	if (ctx.cr6.eq) goto loc_82A6CB7C;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82556ff8
	ctx.lr = 0x82A6CB7C;
	sub_82556FF8(ctx, base);
loc_82A6CB7C:
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

__attribute__((alias("__imp__sub_82A6CB94"))) PPC_WEAK_FUNC(sub_82A6CB94);
PPC_FUNC_IMPL(__imp__sub_82A6CB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CB98"))) PPC_WEAK_FUNC(sub_82A6CB98);
PPC_FUNC_IMPL(__imp__sub_82A6CB98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6c8f0
	sub_82A6C8F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CBA8"))) PPC_WEAK_FUNC(sub_82A6CBA8);
PPC_FUNC_IMPL(__imp__sub_82A6CBA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CBAC"))) PPC_WEAK_FUNC(sub_82A6CBAC);
PPC_FUNC_IMPL(__imp__sub_82A6CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CBB0"))) PPC_WEAK_FUNC(sub_82A6CBB0);
PPC_FUNC_IMPL(__imp__sub_82A6CBB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bcf0
	sub_82A6BCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CBC0"))) PPC_WEAK_FUNC(sub_82A6CBC0);
PPC_FUNC_IMPL(__imp__sub_82A6CBC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CBC4"))) PPC_WEAK_FUNC(sub_82A6CBC4);
PPC_FUNC_IMPL(__imp__sub_82A6CBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CBC8"))) PPC_WEAK_FUNC(sub_82A6CBC8);
PPC_FUNC_IMPL(__imp__sub_82A6CBC8) {
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
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6cbf4
	if (ctx.cr6.eq) goto loc_82A6CBF4;
	// bl 0x82556ff8
	ctx.lr = 0x82A6CBF4;
	sub_82556FF8(ctx, base);
loc_82A6CBF4:
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6cc0c
	if (ctx.cr6.eq) goto loc_82A6CC0C;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82556ff8
	ctx.lr = 0x82A6CC0C;
	sub_82556FF8(ctx, base);
loc_82A6CC0C:
	// lwz r3,904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6cc24
	if (ctx.cr6.eq) goto loc_82A6CC24;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82556ff8
	ctx.lr = 0x82A6CC24;
	sub_82556FF8(ctx, base);
loc_82A6CC24:
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

__attribute__((alias("__imp__sub_82A6CC3C"))) PPC_WEAK_FUNC(sub_82A6CC3C);
PPC_FUNC_IMPL(__imp__sub_82A6CC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CC40"))) PPC_WEAK_FUNC(sub_82A6CC40);
PPC_FUNC_IMPL(__imp__sub_82A6CC40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6c8f0
	sub_82A6C8F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CC50"))) PPC_WEAK_FUNC(sub_82A6CC50);
PPC_FUNC_IMPL(__imp__sub_82A6CC50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CC54"))) PPC_WEAK_FUNC(sub_82A6CC54);
PPC_FUNC_IMPL(__imp__sub_82A6CC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CC58"))) PPC_WEAK_FUNC(sub_82A6CC58);
PPC_FUNC_IMPL(__imp__sub_82A6CC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bcf0
	sub_82A6BCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CC68"))) PPC_WEAK_FUNC(sub_82A6CC68);
PPC_FUNC_IMPL(__imp__sub_82A6CC68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CC6C"))) PPC_WEAK_FUNC(sub_82A6CC6C);
PPC_FUNC_IMPL(__imp__sub_82A6CC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CC70"))) PPC_WEAK_FUNC(sub_82A6CC70);
PPC_FUNC_IMPL(__imp__sub_82A6CC70) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r9,-18304
	ctx.r8.s64 = ctx.r9.s64 + -18304;
	// lfs f13,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f1,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
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
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f31,f8,f0,f10
	ctx.f31.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f31,176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// beq cr6,0x82a6ccf8
	if (ctx.cr6.eq) goto loc_82A6CCF8;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a6ba70
	ctx.lr = 0x82A6CCF8;
	sub_82A6BA70(ctx, base);
loc_82A6CCF8:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6cd4c
	if (ctx.cr6.eq) goto loc_82A6CD4C;
	// lwz r3,868(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r3,196
	ctx.r11.s64 = ctx.r3.s64 + 196;
	// lfs f0,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a6cd20
	if (!ctx.cr6.eq) goto loc_82A6CD20;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A6CD20:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// oris r7,r9,16384
	ctx.r7.u64 = ctx.r9.u64 | 1073741824;
	// rlwinm r6,r8,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1;
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a6cd48
	if (!ctx.cr6.eq) goto loc_82A6CD48;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6cd4c
	if (ctx.cr6.eq) goto loc_82A6CD4C;
loc_82A6CD48:
	// bl 0x825a2e30
	ctx.lr = 0x82A6CD4C;
	sub_825A2E30(ctx, base);
loc_82A6CD4C:
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6cda0
	if (ctx.cr6.eq) goto loc_82A6CDA0;
	// lwz r3,868(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r3,196
	ctx.r11.s64 = ctx.r3.s64 + 196;
	// lfs f0,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a6cd74
	if (!ctx.cr6.eq) goto loc_82A6CD74;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A6CD74:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// oris r7,r9,16384
	ctx.r7.u64 = ctx.r9.u64 | 1073741824;
	// rlwinm r6,r8,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1;
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a6cd9c
	if (!ctx.cr6.eq) goto loc_82A6CD9C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6cda0
	if (ctx.cr6.eq) goto loc_82A6CDA0;
loc_82A6CD9C:
	// bl 0x825a2e30
	ctx.lr = 0x82A6CDA0;
	sub_825A2E30(ctx, base);
loc_82A6CDA0:
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

__attribute__((alias("__imp__sub_82A6CDB8"))) PPC_WEAK_FUNC(sub_82A6CDB8);
PPC_FUNC_IMPL(__imp__sub_82A6CDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r3,964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 964);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r8,r9,-18304
	ctx.r8.s64 = ctx.r9.s64 + -18304;
	// lfs f13,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f1,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
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
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f1,f8,f0,f10
	ctx.f1.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// b 0x82a6bcf0
	sub_82A6BCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CE20"))) PPC_WEAK_FUNC(sub_82A6CE20);
PPC_FUNC_IMPL(__imp__sub_82A6CE20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6CE24"))) PPC_WEAK_FUNC(sub_82A6CE24);
PPC_FUNC_IMPL(__imp__sub_82A6CE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6CE28"))) PPC_WEAK_FUNC(sub_82A6CE28);
PPC_FUNC_IMPL(__imp__sub_82A6CE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A6CE30;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,972(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 972);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82a6cf08
	if (!ctx.cr6.eq) goto loc_82A6CF08;
	// lwz r11,968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6cf60
	if (ctx.cr6.eq) goto loc_82A6CF60;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// lwz r11,-17580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17580);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a6ce98
	if (!ctx.cr6.eq) goto loc_82A6CE98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,-17580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17580, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,21100
	ctx.r4.s64 = ctx.r9.s64 + 21100;
	// bl 0x82295680
	ctx.lr = 0x82A6CE8C;
	sub_82295680(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,20520
	ctx.r3.s64 = ctx.r8.s64 + 20520;
	// bl 0x82cb0ae8
	ctx.lr = 0x82A6CE98;
	sub_82CB0AE8(ctx, base);
loc_82A6CE98:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a70100
	ctx.lr = 0x82A6CEA4;
	sub_82A70100(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a70100
	ctx.lr = 0x82A6CEB4;
	sub_82A70100(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822952c8
	ctx.lr = 0x82A6CEC4;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822952c8
	ctx.lr = 0x82A6CED4;
	sub_822952C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A6CEDC;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82A6CEE4;
	sub_82299080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82A6CEEC;
	sub_82299080(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// bl 0x82570f58
	ctx.lr = 0x82A6CEF8;
	sub_82570F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A6CF00;
	sub_82299080(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A6CF08:
	// lwz r3,964(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6cf60
	if (ctx.cr6.eq) goto loc_82A6CF60;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x82a6cf30
	if (ctx.cr6.gt) goto loc_82A6CF30;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a6be00
	ctx.lr = 0x82A6CF28;
	sub_82A6BE00(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A6CF30:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x82a6be00
	ctx.lr = 0x82A6CF60;
	sub_82A6BE00(ctx, base);
loc_82A6CF60:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6CF68"))) PPC_WEAK_FUNC(sub_82A6CF68);
PPC_FUNC_IMPL(__imp__sub_82A6CF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A6CF70;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,972(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 972);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82a6d048
	if (!ctx.cr6.eq) goto loc_82A6D048;
	// lwz r11,968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6d07c
	if (ctx.cr6.eq) goto loc_82A6D07C;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,-17392
	ctx.r31.s64 = ctx.r11.s64 + -17392;
	// lwz r11,-17380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17380);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a6cfd8
	if (!ctx.cr6.eq) goto loc_82A6CFD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,-17380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17380, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,21100
	ctx.r4.s64 = ctx.r9.s64 + 21100;
	// bl 0x82295680
	ctx.lr = 0x82A6CFCC;
	sub_82295680(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,20616
	ctx.r3.s64 = ctx.r8.s64 + 20616;
	// bl 0x82cb0ae8
	ctx.lr = 0x82A6CFD8;
	sub_82CB0AE8(ctx, base);
loc_82A6CFD8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a70100
	ctx.lr = 0x82A6CFE4;
	sub_82A70100(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a70100
	ctx.lr = 0x82A6CFF4;
	sub_82A70100(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822952c8
	ctx.lr = 0x82A6D004;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822952c8
	ctx.lr = 0x82A6D014;
	sub_822952C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A6D01C;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82A6D024;
	sub_82299080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82A6D02C;
	sub_82299080(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// bl 0x82570f58
	ctx.lr = 0x82A6D038;
	sub_82570F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A6D040;
	sub_82299080(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A6D048:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x82a6cdb8
	ctx.lr = 0x82A6D07C;
	sub_82A6CDB8(ctx, base);
loc_82A6D07C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6D084"))) PPC_WEAK_FUNC(sub_82A6D084);
PPC_FUNC_IMPL(__imp__sub_82A6D084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6D088"))) PPC_WEAK_FUNC(sub_82A6D088);
PPC_FUNC_IMPL(__imp__sub_82A6D088) {
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
	// lwz r11,964(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6d10c
	if (ctx.cr6.eq) goto loc_82A6D10C;
	// lwz r10,1008(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a6d0c4
	if (ctx.cr6.eq) goto loc_82A6D0C4;
	// lfs f1,1016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A6D0C4:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,1004(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82a6d0f8
	if (ctx.cr6.eq) goto loc_82A6D0F8;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ld r4,964(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 964);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6D0F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A6D0F8:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A6D10C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6D124"))) PPC_WEAK_FUNC(sub_82A6D124);
PPC_FUNC_IMPL(__imp__sub_82A6D124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6D128"))) PPC_WEAK_FUNC(sub_82A6D128);
PPC_FUNC_IMPL(__imp__sub_82A6D128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6D130;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6d1c0
	if (ctx.cr6.eq) goto loc_82A6D1C0;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,-26284
	ctx.r31.s64 = ctx.r11.s64 + -26284;
	// lwz r11,-26272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26272);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a6d188
	if (!ctx.cr6.eq) goto loc_82A6D188;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,-26272(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26272, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,21104
	ctx.r4.s64 = ctx.r9.s64 + 21104;
	// bl 0x82295680
	ctx.lr = 0x82A6D17C;
	sub_82295680(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,20712
	ctx.r3.s64 = ctx.r8.s64 + 20712;
	// bl 0x82cb0ae8
	ctx.lr = 0x82A6D188;
	sub_82CB0AE8(ctx, base);
loc_82A6D188:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a70100
	ctx.lr = 0x82A6D194;
	sub_82A70100(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822952c8
	ctx.lr = 0x82A6D1A4;
	sub_822952C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A6D1AC;
	sub_82299080(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// bl 0x82570f58
	ctx.lr = 0x82A6D1B8;
	sub_82570F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A6D1C0;
	sub_82299080(ctx, base);
loc_82A6D1C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6D1C8"))) PPC_WEAK_FUNC(sub_82A6D1C8);
PPC_FUNC_IMPL(__imp__sub_82A6D1C8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r11,-29076
	ctx.r9.s64 = ctx.r11.s64 + -29076;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r8,-18304
	ctx.r7.s64 = ctx.r8.s64 + -18304;
	// lfs f12,-29076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29076);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3368);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f11,916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// lfsx f9,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f8,f9,f1,f13
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
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
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f6,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f31,f6,f0,f8
	ctx.f31.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fsubs f5,f31,f11
	ctx.f5.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fabs f4,f5
	ctx.f4.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// blt cr6,0x82a6d2d0
	if (ctx.cr6.lt) goto loc_82A6D2D0;
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// stfs f31,916(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6d280
	if (ctx.cr6.eq) goto loc_82A6D280;
	// bl 0x82a6fe00
	ctx.lr = 0x82A6D268;
	sub_82A6FE00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6d278
	if (ctx.cr6.eq) goto loc_82A6D278;
	// stfs f31,844(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 844, temp.u32);
	// b 0x82a6d280
	goto loc_82A6D280;
loc_82A6D278:
	// lwz r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// stfs f31,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
loc_82A6D280:
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6d294
	if (ctx.cr6.eq) goto loc_82A6D294;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a6ba70
	ctx.lr = 0x82A6D294;
	sub_82A6BA70(ctx, base);
loc_82A6D294:
	// lwz r3,904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6d2a8
	if (ctx.cr6.eq) goto loc_82A6D2A8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a6ba70
	ctx.lr = 0x82A6D2A8;
	sub_82A6BA70(ctx, base);
loc_82A6D2A8:
	// lwz r3,908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6d2bc
	if (ctx.cr6.eq) goto loc_82A6D2BC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a6ba70
	ctx.lr = 0x82A6D2BC;
	sub_82A6BA70(ctx, base);
loc_82A6D2BC:
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6d2d0
	if (ctx.cr6.eq) goto loc_82A6D2D0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a6ba70
	ctx.lr = 0x82A6D2D0;
	sub_82A6BA70(ctx, base);
loc_82A6D2D0:
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

__attribute__((alias("__imp__sub_82A6D2E8"))) PPC_WEAK_FUNC(sub_82A6D2E8);
PPC_FUNC_IMPL(__imp__sub_82A6D2E8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a6d334
	if (ctx.cr6.eq) goto loc_82A6D334;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a6d324
	if (ctx.cr6.eq) goto loc_82A6D324;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a6d314
	if (ctx.cr6.eq) goto loc_82A6D314;
	// lwz r3,900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6be00
	sub_82A6BE00(ctx, base);
	return;
loc_82A6D314:
	// lwz r3,912(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6be00
	sub_82A6BE00(ctx, base);
	return;
loc_82A6D324:
	// lwz r3,908(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6be00
	sub_82A6BE00(ctx, base);
	return;
loc_82A6D334:
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6be00
	sub_82A6BE00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6D344"))) PPC_WEAK_FUNC(sub_82A6D344);
PPC_FUNC_IMPL(__imp__sub_82A6D344) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6D348"))) PPC_WEAK_FUNC(sub_82A6D348);
PPC_FUNC_IMPL(__imp__sub_82A6D348) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a6d394
	if (ctx.cr6.eq) goto loc_82A6D394;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a6d384
	if (ctx.cr6.eq) goto loc_82A6D384;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a6d374
	if (ctx.cr6.eq) goto loc_82A6D374;
	// lwz r3,900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bcf0
	sub_82A6BCF0(ctx, base);
	return;
loc_82A6D374:
	// lwz r3,912(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bcf0
	sub_82A6BCF0(ctx, base);
	return;
loc_82A6D384:
	// lwz r3,908(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bcf0
	sub_82A6BCF0(ctx, base);
	return;
loc_82A6D394:
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bcf0
	sub_82A6BCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6D3A4"))) PPC_WEAK_FUNC(sub_82A6D3A4);
PPC_FUNC_IMPL(__imp__sub_82A6D3A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6D3A8"))) PPC_WEAK_FUNC(sub_82A6D3A8);
PPC_FUNC_IMPL(__imp__sub_82A6D3A8) {
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
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6d3dc
	if (ctx.cr6.eq) goto loc_82A6D3DC;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82556ff8
	ctx.lr = 0x82A6D3DC;
	sub_82556FF8(ctx, base);
loc_82A6D3DC:
	// lwz r3,904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6d3f0
	if (ctx.cr6.eq) goto loc_82A6D3F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82556ff8
	ctx.lr = 0x82A6D3F0;
	sub_82556FF8(ctx, base);
loc_82A6D3F0:
	// lwz r3,908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6d404
	if (ctx.cr6.eq) goto loc_82A6D404;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82556ff8
	ctx.lr = 0x82A6D404;
	sub_82556FF8(ctx, base);
loc_82A6D404:
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6d418
	if (ctx.cr6.eq) goto loc_82A6D418;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82556ff8
	ctx.lr = 0x82A6D418;
	sub_82556FF8(ctx, base);
loc_82A6D418:
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

__attribute__((alias("__imp__sub_82A6D430"))) PPC_WEAK_FUNC(sub_82A6D430);
PPC_FUNC_IMPL(__imp__sub_82A6D430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A6D450"))) PPC_WEAK_FUNC(sub_82A6D450);
PPC_FUNC_IMPL(__imp__sub_82A6D450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6D454"))) PPC_WEAK_FUNC(sub_82A6D454);
PPC_FUNC_IMPL(__imp__sub_82A6D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6D458"))) PPC_WEAK_FUNC(sub_82A6D458);
PPC_FUNC_IMPL(__imp__sub_82A6D458) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a6d4fc
	if (ctx.cr6.eq) goto loc_82A6D4FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a6d4d0
	if (ctx.cr6.eq) goto loc_82A6D4D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a6d4a4
	if (ctx.cr6.eq) goto loc_82A6D4A4;
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,980(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 980);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
loc_82A6D4A4:
	// lwz r11,912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,980(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 980);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
loc_82A6D4D0:
	// lwz r11,908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,980(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 980);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
loc_82A6D4FC:
	// lwz r11,904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,980(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 980);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6D528"))) PPC_WEAK_FUNC(sub_82A6D528);
PPC_FUNC_IMPL(__imp__sub_82A6D528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6D52C"))) PPC_WEAK_FUNC(sub_82A6D52C);
PPC_FUNC_IMPL(__imp__sub_82A6D52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6D530"))) PPC_WEAK_FUNC(sub_82A6D530);
PPC_FUNC_IMPL(__imp__sub_82A6D530) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a6d5d4
	if (ctx.cr6.eq) goto loc_82A6D5D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a6d5a8
	if (ctx.cr6.eq) goto loc_82A6D5A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a6d57c
	if (ctx.cr6.eq) goto loc_82A6D57C;
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,988(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 988);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
loc_82A6D57C:
	// lwz r11,912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,988(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 988);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
loc_82A6D5A8:
	// lwz r11,908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,988(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 988);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
loc_82A6D5D4:
	// lwz r11,904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,988(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 988);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6D600"))) PPC_WEAK_FUNC(sub_82A6D600);
PPC_FUNC_IMPL(__imp__sub_82A6D600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6D604"))) PPC_WEAK_FUNC(sub_82A6D604);
PPC_FUNC_IMPL(__imp__sub_82A6D604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6D608"))) PPC_WEAK_FUNC(sub_82A6D608);
PPC_FUNC_IMPL(__imp__sub_82A6D608) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a6d6bc
	if (ctx.cr6.eq) goto loc_82A6D6BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a6d68c
	if (ctx.cr6.eq) goto loc_82A6D68C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a6d65c
	if (ctx.cr6.eq) goto loc_82A6D65C;
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,996(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 996);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
loc_82A6D65C:
	// lwz r11,912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,996(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 996);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
loc_82A6D68C:
	// lwz r11,908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,996(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 996);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
loc_82A6D6BC:
	// lwz r11,904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,996(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 996);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6D6EC"))) PPC_WEAK_FUNC(sub_82A6D6EC);
PPC_FUNC_IMPL(__imp__sub_82A6D6EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6D6F0"))) PPC_WEAK_FUNC(sub_82A6D6F0);
PPC_FUNC_IMPL(__imp__sub_82A6D6F0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a6d73c
	if (ctx.cr6.eq) goto loc_82A6D73C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a6d72c
	if (ctx.cr6.eq) goto loc_82A6D72C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a6d71c
	if (ctx.cr6.eq) goto loc_82A6D71C;
	// lwz r3,900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bb70
	sub_82A6BB70(ctx, base);
	return;
loc_82A6D71C:
	// lwz r3,912(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bb70
	sub_82A6BB70(ctx, base);
	return;
loc_82A6D72C:
	// lwz r3,908(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bb70
	sub_82A6BB70(ctx, base);
	return;
loc_82A6D73C:
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a6bb70
	sub_82A6BB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6D74C"))) PPC_WEAK_FUNC(sub_82A6D74C);
PPC_FUNC_IMPL(__imp__sub_82A6D74C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6D750"))) PPC_WEAK_FUNC(sub_82A6D750);
PPC_FUNC_IMPL(__imp__sub_82A6D750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6D758;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r11,60
	ctx.r11.s64 = 60;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r4,r10,r11
	ctx.r4.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mulli r9,r4,60
	ctx.r9.s64 = ctx.r4.s64 * 60;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r7,21108
	ctx.r31.s64 = ctx.r7.s64 + 21108;
	// fsubs f31,f1,f11
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fctiwz f10,f31
	ctx.f10.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a70100
	ctx.lr = 0x82A6D7B0;
	sub_82A70100(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82295ff0
	ctx.lr = 0x82A6D7C0;
	sub_82295FF0(ctx, base);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// beq cr6,0x82a6d7e8
	if (ctx.cr6.eq) goto loc_82A6D7E8;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82A6D7E8;
	sub_82294520(ctx, base);
loc_82A6D7E8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x82A6D7F0;
	sub_82294CC8(ctx, base);
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// bge cr6,0x82a6d808
	if (!ctx.cr6.lt) goto loc_82A6D808;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-16936
	ctx.r4.s64 = ctx.r11.s64 + -16936;
	// bl 0x822b3f98
	ctx.lr = 0x82A6D808;
	sub_822B3F98(ctx, base);
loc_82A6D808:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a70100
	ctx.lr = 0x82A6D814;
	sub_82A70100(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822951d0
	ctx.lr = 0x82A6D820;
	sub_822951D0(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a6d844
	if (ctx.cr6.eq) goto loc_82A6D844;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x82A6D844;
	sub_82294520(ctx, base);
loc_82A6D844:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294cc8
	ctx.lr = 0x82A6D84C;
	sub_82294CC8(ctx, base);
	// lwz r11,880(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 880);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6d8dc
	if (ctx.cr6.eq) goto loc_82A6D8DC;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-29008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29008);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a70100
	ctx.lr = 0x82A6D894;
	sub_82A70100(ctx, base);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r9,21116
	ctx.r4.s64 = ctx.r9.s64 + 21116;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295680
	ctx.lr = 0x82A6D8A8;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822952c8
	ctx.lr = 0x82A6D8B8;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822951d0
	ctx.lr = 0x82A6D8C4;
	sub_822951D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A6D8CC;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82A6D8D4;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82A6D8DC;
	sub_82299080(ctx, base);
loc_82A6D8DC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82570f58
	ctx.lr = 0x82A6D8E8;
	sub_82570F58(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a6d90c
	if (ctx.cr6.eq) goto loc_82A6D90C;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x82A6D90C;
	sub_82294520(ctx, base);
loc_82A6D90C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294cc8
	ctx.lr = 0x82A6D914;
	sub_82294CC8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6D920"))) PPC_WEAK_FUNC(sub_82A6D920);
PPC_FUNC_IMPL(__imp__sub_82A6D920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A6D928;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r6.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r11,r10,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// addi r29,r30,60
	ctx.r29.s64 = ctx.r30.s64 + 60;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82a6d95c
	if (!ctx.cr6.eq) goto loc_82A6D95C;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a6d970
	goto loc_82A6D970;
loc_82A6D95C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825941e0
	ctx.lr = 0x82A6D970;
	sub_825941E0(ctx, base);
loc_82A6D970:
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82a6d984
	if (!ctx.cr6.eq) goto loc_82A6D984;
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a6d998
	goto loc_82A6D998;
loc_82A6D984:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825941e0
	ctx.lr = 0x82A6D998;
	sub_825941E0(ctx, base);
loc_82A6D998:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r11,22036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22036);
	// lwz r10,22032(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22032);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lfs f0,-16544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16544);
	ctx.f0.f64 = double(temp.f32);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f4,0(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6D9F8"))) PPC_WEAK_FUNC(sub_82A6D9F8);
PPC_FUNC_IMPL(__imp__sub_82A6D9F8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a6d920
	ctx.lr = 0x82A6DA1C;
	sub_82A6D920(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,21152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f9,f10,f0,f13
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82A6DA5C"))) PPC_WEAK_FUNC(sub_82A6DA5C);
PPC_FUNC_IMPL(__imp__sub_82A6DA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6DA60"))) PPC_WEAK_FUNC(sub_82A6DA60);
PPC_FUNC_IMPL(__imp__sub_82A6DA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f1,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82a6da98
	if (ctx.cr6.lt) goto loc_82A6DA98;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f1,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82a6da98
	if (!ctx.cr6.lt) goto loc_82A6DA98;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82A6DA98:
	// ld r4,960(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 960);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DAA8"))) PPC_WEAK_FUNC(sub_82A6DAA8);
PPC_FUNC_IMPL(__imp__sub_82A6DAA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DAAC"))) PPC_WEAK_FUNC(sub_82A6DAAC);
PPC_FUNC_IMPL(__imp__sub_82A6DAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6DAB0"))) PPC_WEAK_FUNC(sub_82A6DAB0);
PPC_FUNC_IMPL(__imp__sub_82A6DAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f1,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82a6dae8
	if (ctx.cr6.lt) goto loc_82A6DAE8;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f1,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82a6dae8
	if (!ctx.cr6.lt) goto loc_82A6DAE8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82A6DAE8:
	// ld r4,968(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 968);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DAF8"))) PPC_WEAK_FUNC(sub_82A6DAF8);
PPC_FUNC_IMPL(__imp__sub_82A6DAF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DAFC"))) PPC_WEAK_FUNC(sub_82A6DAFC);
PPC_FUNC_IMPL(__imp__sub_82A6DAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6DB00"))) PPC_WEAK_FUNC(sub_82A6DB00);
PPC_FUNC_IMPL(__imp__sub_82A6DB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a6db24
	if (ctx.cr6.eq) goto loc_82A6DB24;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f1,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a6db2c
	goto loc_82A6DB2C;
loc_82A6DB24:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f1,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
loc_82A6DB2C:
	// ld r4,976(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 976);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DB3C"))) PPC_WEAK_FUNC(sub_82A6DB3C);
PPC_FUNC_IMPL(__imp__sub_82A6DB3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DB40"))) PPC_WEAK_FUNC(sub_82A6DB40);
PPC_FUNC_IMPL(__imp__sub_82A6DB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a6db64
	if (ctx.cr6.eq) goto loc_82A6DB64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f1,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a6db6c
	goto loc_82A6DB6C;
loc_82A6DB64:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f1,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
loc_82A6DB6C:
	// ld r4,984(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 984);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DB7C"))) PPC_WEAK_FUNC(sub_82A6DB7C);
PPC_FUNC_IMPL(__imp__sub_82A6DB7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DB80"))) PPC_WEAK_FUNC(sub_82A6DB80);
PPC_FUNC_IMPL(__imp__sub_82A6DB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a6dba4
	if (ctx.cr6.eq) goto loc_82A6DBA4;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f1,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a6dbac
	goto loc_82A6DBAC;
loc_82A6DBA4:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f1,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
loc_82A6DBAC:
	// ld r4,992(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 992);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DBBC"))) PPC_WEAK_FUNC(sub_82A6DBBC);
PPC_FUNC_IMPL(__imp__sub_82A6DBBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DBC0"))) PPC_WEAK_FUNC(sub_82A6DBC0);
PPC_FUNC_IMPL(__imp__sub_82A6DBC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1024(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1024);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DBE0"))) PPC_WEAK_FUNC(sub_82A6DBE0);
PPC_FUNC_IMPL(__imp__sub_82A6DBE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DBE4"))) PPC_WEAK_FUNC(sub_82A6DBE4);
PPC_FUNC_IMPL(__imp__sub_82A6DBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6DBE8"))) PPC_WEAK_FUNC(sub_82A6DBE8);
PPC_FUNC_IMPL(__imp__sub_82A6DBE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1032(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1032);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DC08"))) PPC_WEAK_FUNC(sub_82A6DC08);
PPC_FUNC_IMPL(__imp__sub_82A6DC08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DC0C"))) PPC_WEAK_FUNC(sub_82A6DC0C);
PPC_FUNC_IMPL(__imp__sub_82A6DC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6DC10"))) PPC_WEAK_FUNC(sub_82A6DC10);
PPC_FUNC_IMPL(__imp__sub_82A6DC10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1040(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1040);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DC30"))) PPC_WEAK_FUNC(sub_82A6DC30);
PPC_FUNC_IMPL(__imp__sub_82A6DC30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DC34"))) PPC_WEAK_FUNC(sub_82A6DC34);
PPC_FUNC_IMPL(__imp__sub_82A6DC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6DC38"))) PPC_WEAK_FUNC(sub_82A6DC38);
PPC_FUNC_IMPL(__imp__sub_82A6DC38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1048(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1048);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DC58"))) PPC_WEAK_FUNC(sub_82A6DC58);
PPC_FUNC_IMPL(__imp__sub_82A6DC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DC5C"))) PPC_WEAK_FUNC(sub_82A6DC5C);
PPC_FUNC_IMPL(__imp__sub_82A6DC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6DC60"))) PPC_WEAK_FUNC(sub_82A6DC60);
PPC_FUNC_IMPL(__imp__sub_82A6DC60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1056(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1056);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DC8C"))) PPC_WEAK_FUNC(sub_82A6DC8C);
PPC_FUNC_IMPL(__imp__sub_82A6DC8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DC90"))) PPC_WEAK_FUNC(sub_82A6DC90);
PPC_FUNC_IMPL(__imp__sub_82A6DC90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1064(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1064);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DCBC"))) PPC_WEAK_FUNC(sub_82A6DCBC);
PPC_FUNC_IMPL(__imp__sub_82A6DCBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DCC0"))) PPC_WEAK_FUNC(sub_82A6DCC0);
PPC_FUNC_IMPL(__imp__sub_82A6DCC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1072(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1072);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DCEC"))) PPC_WEAK_FUNC(sub_82A6DCEC);
PPC_FUNC_IMPL(__imp__sub_82A6DCEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DCF0"))) PPC_WEAK_FUNC(sub_82A6DCF0);
PPC_FUNC_IMPL(__imp__sub_82A6DCF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1080(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1080);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DD1C"))) PPC_WEAK_FUNC(sub_82A6DD1C);
PPC_FUNC_IMPL(__imp__sub_82A6DD1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DD20"))) PPC_WEAK_FUNC(sub_82A6DD20);
PPC_FUNC_IMPL(__imp__sub_82A6DD20) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1088(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1088);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DD4C"))) PPC_WEAK_FUNC(sub_82A6DD4C);
PPC_FUNC_IMPL(__imp__sub_82A6DD4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DD50"))) PPC_WEAK_FUNC(sub_82A6DD50);
PPC_FUNC_IMPL(__imp__sub_82A6DD50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1096(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1096);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DD7C"))) PPC_WEAK_FUNC(sub_82A6DD7C);
PPC_FUNC_IMPL(__imp__sub_82A6DD7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DD80"))) PPC_WEAK_FUNC(sub_82A6DD80);
PPC_FUNC_IMPL(__imp__sub_82A6DD80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1104(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1104);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x8244fa60
	sub_8244FA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DDAC"))) PPC_WEAK_FUNC(sub_82A6DDAC);
PPC_FUNC_IMPL(__imp__sub_82A6DDAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DDB0"))) PPC_WEAK_FUNC(sub_82A6DDB0);
PPC_FUNC_IMPL(__imp__sub_82A6DDB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1112(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1112);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DDD4"))) PPC_WEAK_FUNC(sub_82A6DDD4);
PPC_FUNC_IMPL(__imp__sub_82A6DDD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DDD8"))) PPC_WEAK_FUNC(sub_82A6DDD8);
PPC_FUNC_IMPL(__imp__sub_82A6DDD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,1136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,1120(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1120);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DDFC"))) PPC_WEAK_FUNC(sub_82A6DDFC);
PPC_FUNC_IMPL(__imp__sub_82A6DDFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DE00"))) PPC_WEAK_FUNC(sub_82A6DE00);
PPC_FUNC_IMPL(__imp__sub_82A6DE00) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6de70
	if (ctx.cr6.eq) goto loc_82A6DE70;
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r4,1008(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1008);
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r5,1140(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1140);
	// ld r6,1148(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1148);
	// bl 0x8244fa60
	ctx.lr = 0x82A6DE40;
	sub_8244FA60(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1016(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1016);
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// ld r5,1156(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1156);
	// ld r6,1164(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1164);
	// bl 0x8244fa60
	ctx.lr = 0x82A6DE5C;
	sub_8244FA60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// bl 0x82a6de88
	ctx.lr = 0x82A6DE70;
	sub_82A6DE88(ctx, base);
loc_82A6DE70:
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

__attribute__((alias("__imp__sub_82A6DE88"))) PPC_WEAK_FUNC(sub_82A6DE88);
PPC_FUNC_IMPL(__imp__sub_82A6DE88) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,1136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6dfe0
	if (ctx.cr6.eq) goto loc_82A6DFE0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r31,r11,-32344
	ctx.r31.s64 = ctx.r11.s64 + -32344;
	// lfs f29,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x82a6dee0
	if (!ctx.cr6.lt) goto loc_82A6DEE0;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x82a6deec
	goto loc_82A6DEEC;
loc_82A6DEE0:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x82a6deec
	if (ctx.cr6.lt) goto loc_82A6DEEC;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_82A6DEEC:
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,1000(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1000);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A6DF00;
	sub_8244FC30(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a6dfe0
	if (!ctx.cr6.lt) goto loc_82A6DFE0;
	// lwz r11,1172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82a6df94
	if (ctx.cr6.gt) goto loc_82A6DF94;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,-18004
	ctx.r31.s64 = ctx.r11.s64 + -18004;
	// lwz r11,-17988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17988);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a6df4c
	if (!ctx.cr6.eq) goto loc_82A6DF4C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f30,0(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r11,-17988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17988, ctx.r11.u32);
	// stfs f30,12(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82A6DF4C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// ld r4,1008(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1008);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x8244fa60
	ctx.lr = 0x82A6DF6C;
	sub_8244FA60(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r4,1016(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1016);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,1136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x8244fa60
	ctx.lr = 0x82A6DF88;
	sub_8244FA60(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r10.u32);
	// b 0x82a6dfd4
	goto loc_82A6DFD4;
loc_82A6DF94:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82a6dfd4
	if (!ctx.cr6.eq) goto loc_82A6DFD4;
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r4,1008(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1008);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,1136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// ld r5,1140(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1140);
	// ld r6,1148(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1148);
	// bl 0x8244fa60
	ctx.lr = 0x82A6DFB8;
	sub_8244FA60(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r4,1016(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1016);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,1136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// ld r5,1156(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1156);
	// ld r6,1164(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1164);
	// bl 0x8244fa60
	ctx.lr = 0x82A6DFD4;
	sub_8244FA60(ctx, base);
loc_82A6DFD4:
	// lwz r11,1172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1172);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r11.u32);
loc_82A6DFE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82A6E004"))) PPC_WEAK_FUNC(sub_82A6E004);
PPC_FUNC_IMPL(__imp__sub_82A6E004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E008"))) PPC_WEAK_FUNC(sub_82A6E008);
PPC_FUNC_IMPL(__imp__sub_82A6E008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// beq cr6,0x82a6e024
	if (ctx.cr6.eq) goto loc_82A6E024;
	// lfs f1,1132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82563f48
	sub_82563F48(ctx, base);
	return;
loc_82A6E024:
	// lfs f1,1128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82563f48
	sub_82563F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6E02C"))) PPC_WEAK_FUNC(sub_82A6E02C);
PPC_FUNC_IMPL(__imp__sub_82A6E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E030"))) PPC_WEAK_FUNC(sub_82A6E030);
PPC_FUNC_IMPL(__imp__sub_82A6E030) {
	PPC_FUNC_PROLOGUE();
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
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6E05C;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6E074;
	sub_82563F48(ctx, base);
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

__attribute__((alias("__imp__sub_82A6E08C"))) PPC_WEAK_FUNC(sub_82A6E08C);
PPC_FUNC_IMPL(__imp__sub_82A6E08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E090"))) PPC_WEAK_FUNC(sub_82A6E090);
PPC_FUNC_IMPL(__imp__sub_82A6E090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r4,1184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1184, ctx.r4.u32);
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a6e0a0
	goto loc_82A6E0A0;
loc_82A6E0A0:
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e1e8
	if (ctx.cr6.eq) goto loc_82A6E1E8;
	// bl 0x82981a78
	ctx.lr = 0x82A6E0C8;
	sub_82981A78(ctx, base);
	// lwz r10,1184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e0ec
	if (ctx.cr6.eq) goto loc_82A6E0EC;
loc_82A6E0D8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a6e0fc
	if (ctx.cr6.eq) goto loc_82A6E0FC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a6e0d8
	if (!ctx.cr6.eq) goto loc_82A6E0D8;
loc_82A6E0EC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a6e114
	if (ctx.cr6.eq) goto loc_82A6E114;
loc_82A6E0FC:
	// lwz r9,244(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// lwz r8,248(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// lwz r11,252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// b 0x82a6e13c
	goto loc_82A6E13C;
loc_82A6E114:
	// lwz r11,368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,396
	ctx.r11.s64 = ctx.r11.s64 + 396;
	// bne cr6,0x82a6e128
	if (!ctx.cr6.eq) goto loc_82A6E128;
	// addi r11,r10,244
	ctx.r11.s64 = ctx.r10.s64 + 244;
loc_82A6E128:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_82A6E13C:
	// rldicr r5,r11,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6e200
	ctx.lr = 0x82A6E14C;
	sub_82A6E200(ctx, base);
	// lwz r3,1184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6E160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82a6e1a8
	if (ctx.cr6.eq) goto loc_82A6E1A8;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82a6e184
	if (!ctx.cr6.lt) goto loc_82A6E184;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82a6e198
	goto loc_82A6E198;
loc_82A6E184:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a6e198
	if (ctx.cr6.lt) goto loc_82A6E198;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82A6E198:
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,960(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 960);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8244fc30
	ctx.lr = 0x82A6E1A8;
	sub_8244FC30(ctx, base);
loc_82A6E1A8:
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e1c8
	if (ctx.cr6.eq) goto loc_82A6E1C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,976(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 976);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A6E1C8;
	sub_8244FC30(ctx, base);
loc_82A6E1C8:
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e1e8
	if (ctx.cr6.eq) goto loc_82A6E1E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,984(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 984);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A6E1E8;
	sub_8244FC30(ctx, base);
loc_82A6E1E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82A6E0A0"))) PPC_WEAK_FUNC(sub_82A6E0A0);
PPC_FUNC_IMPL(__imp__sub_82A6E0A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e1e8
	if (ctx.cr6.eq) goto loc_82A6E1E8;
	// bl 0x82981a78
	ctx.lr = 0x82A6E0C8;
	sub_82981A78(ctx, base);
	// lwz r10,1184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e0ec
	if (ctx.cr6.eq) goto loc_82A6E0EC;
loc_82A6E0D8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a6e0fc
	if (ctx.cr6.eq) goto loc_82A6E0FC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a6e0d8
	if (!ctx.cr6.eq) goto loc_82A6E0D8;
loc_82A6E0EC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a6e114
	if (ctx.cr6.eq) goto loc_82A6E114;
loc_82A6E0FC:
	// lwz r9,244(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// lwz r8,248(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// lwz r11,252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// b 0x82a6e13c
	goto loc_82A6E13C;
loc_82A6E114:
	// lwz r11,368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,396
	ctx.r11.s64 = ctx.r11.s64 + 396;
	// bne cr6,0x82a6e128
	if (!ctx.cr6.eq) goto loc_82A6E128;
	// addi r11,r10,244
	ctx.r11.s64 = ctx.r10.s64 + 244;
loc_82A6E128:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_82A6E13C:
	// rldicr r5,r11,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6e200
	ctx.lr = 0x82A6E14C;
	sub_82A6E200(ctx, base);
	// lwz r3,1184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6E160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82a6e1a8
	if (ctx.cr6.eq) goto loc_82A6E1A8;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82a6e184
	if (!ctx.cr6.lt) goto loc_82A6E184;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82a6e198
	goto loc_82A6E198;
loc_82A6E184:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a6e198
	if (ctx.cr6.lt) goto loc_82A6E198;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82A6E198:
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,960(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 960);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8244fc30
	ctx.lr = 0x82A6E1A8;
	sub_8244FC30(ctx, base);
loc_82A6E1A8:
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e1c8
	if (ctx.cr6.eq) goto loc_82A6E1C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,976(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 976);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A6E1C8;
	sub_8244FC30(ctx, base);
loc_82A6E1C8:
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e1e8
	if (ctx.cr6.eq) goto loc_82A6E1E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,984(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 984);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A6E1E8;
	sub_8244FC30(ctx, base);
loc_82A6E1E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82A6E200"))) PPC_WEAK_FUNC(sub_82A6E200);
PPC_FUNC_IMPL(__imp__sub_82A6E200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A6E208;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6adc
	ctx.lr = 0x82A6E210;
	__savefpr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// std r4,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r4.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r5,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r5.u64);
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e568
	if (ctx.cr6.eq) goto loc_82A6E568;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a6e24c
	if (ctx.cr6.gt) goto loc_82A6E24C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82a6e254
	goto loc_82A6E254;
loc_82A6E24C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A6E254:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A6E25C;
	sub_8258A128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e568
	if (ctx.cr6.eq) goto loc_82A6E568;
	// lwz r11,2220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e568
	if (ctx.cr6.eq) goto loc_82A6E568;
	// lwz r3,756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e568
	if (ctx.cr6.eq) goto loc_82A6E568;
	// bl 0x826127a8
	ctx.lr = 0x82A6E280;
	sub_826127A8(ctx, base);
	// lwz r11,1196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1196);
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a6e2a4
	if (!ctx.cr6.gt) goto loc_82A6E2A4;
	// lwz r10,25344(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,740(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_82A6E2A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e568
	if (ctx.cr6.eq) goto loc_82A6E568;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e568
	if (ctx.cr6.eq) goto loc_82A6E568;
	// lwz r9,-31264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a6e2d4
	if (ctx.cr6.gt) goto loc_82A6E2D4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82a6e2dc
	goto loc_82A6E2DC;
loc_82A6E2D4:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82A6E2DC:
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lfs f0,856(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82a6e2f4
	if (ctx.cr6.gt) goto loc_82A6E2F4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82a6e2fc
	goto loc_82A6E2FC;
loc_82A6E2F4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A6E2FC:
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,64(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// lfs f13,852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r9,68(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// ld r10,100(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 100);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// std r10,132(r1)
	PPC_STORE_U64(ctx.r1.u32 + 132, ctx.r10.u64);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// bl 0x826229c0
	ctx.lr = 0x82A6E35C;
	sub_826229C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e560
	if (ctx.cr6.eq) goto loc_82A6E560;
	// lfs f0,312(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f10,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f10,f13,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f11,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f9,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f3,f13,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f7,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f6,f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f1,f12,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f4.f64));
	// lfs f27,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f12,f12,f11,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f5.f64));
	// lfs f26,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f26.f64 = double(temp.f32);
	// lfs f1,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// lfs f25,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f25.f64 = double(temp.f32);
	// lfs f10,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f6,f2
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fadds f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fmuls f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f5,f13,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f6,f3,f11
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmadds f4,f31,f9,f7
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f2,f28,f9,f5
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f29,f9,f6
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f13,f30,f8,f4
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f11,f26,f8,f2
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f12,f8,f27,f3
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f27.f64 + ctx.f3.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f25.f64));
	// fadds f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x82a6e560
	if (ctx.cr6.lt) goto loc_82A6E560;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,1196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1196);
	// addi r31,r10,-28972
	ctx.r31.s64 = ctx.r10.s64 + -28972;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,-3472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -3472);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,-19124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -19124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// ble cr6,0x82a6e470
	if (!ctx.cr6.gt) goto loc_82A6E470;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,-17728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17728);
	ctx.f13.f64 = double(temp.f32);
loc_82A6E470:
	// fadds f9,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lfs f12,-16008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16008);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-28844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f30,f8,f12,f0
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f31,f7,f0,f0
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f0.f64));
	// bne cr6,0x82a6e4bc
	if (!ctx.cr6.eq) goto loc_82A6E4BC;
	// fcmpu cr6,f31,f10
	ctx.cr6.compare(ctx.f31.f64, ctx.f10.f64);
	// bge cr6,0x82a6e4b4
	if (!ctx.cr6.lt) goto loc_82A6E4B4;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lfs f0,-14292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14292);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// b 0x82a6e4d8
	goto loc_82A6E4D8;
loc_82A6E4B4:
	// fadds f31,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// b 0x82a6e4d8
	goto loc_82A6E4D8;
loc_82A6E4BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a6e4d8
	if (!ctx.cr6.eq) goto loc_82A6E4D8;
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x82a6e4d8
	if (!ctx.cr6.gt) goto loc_82A6E4D8;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lfs f0,-14292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14292);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_82A6E4D8:
	// lwz r11,25344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e504
	if (ctx.cr6.eq) goto loc_82A6E504;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e504
	if (ctx.cr6.eq) goto loc_82A6E504;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e504
	if (ctx.cr6.eq) goto loc_82A6E504;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
loc_82A6E504:
	// bl 0x82a6fe80
	ctx.lr = 0x82A6E508;
	sub_82A6FE80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e530
	if (ctx.cr6.eq) goto loc_82A6E530;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a6e530
	if (!ctx.cr6.eq) goto loc_82A6E530;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,26244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26244);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_82A6E530:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6E548;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6E560;
	sub_82563F48(ctx, base);
loc_82A6E560:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827d95d8
	ctx.lr = 0x82A6E568;
	sub_827D95D8(ctx, base);
loc_82A6E568:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b28
	ctx.lr = 0x82A6E574;
	__restfpr_25(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6E578"))) PPC_WEAK_FUNC(sub_82A6E578);
PPC_FUNC_IMPL(__imp__sub_82A6E578) {
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
	// subfic r11,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r6.s64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6E5B8;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6E5D0;
	sub_82563F48(ctx, base);
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

__attribute__((alias("__imp__sub_82A6E5EC"))) PPC_WEAK_FUNC(sub_82A6E5EC);
PPC_FUNC_IMPL(__imp__sub_82A6E5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E5F0"))) PPC_WEAK_FUNC(sub_82A6E5F0);
PPC_FUNC_IMPL(__imp__sub_82A6E5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1188(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1188, temp.u32);
	// lfs f1,1192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1192);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a6e600
	sub_82A6E600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6E5FC"))) PPC_WEAK_FUNC(sub_82A6E5FC);
PPC_FUNC_IMPL(__imp__sub_82A6E5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E600"))) PPC_WEAK_FUNC(sub_82A6E600);
PPC_FUNC_IMPL(__imp__sub_82A6E600) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f1,1192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
	// lfs f0,1188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// bl 0x82563f48
	ctx.lr = 0x82A6E630;
	sub_82563F48(ctx, base);
	// lfs f13,1188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	ctx.f12.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// fmuls f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A6E650;
	sub_82563F48(ctx, base);
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

__attribute__((alias("__imp__sub_82A6E664"))) PPC_WEAK_FUNC(sub_82A6E664);
PPC_FUNC_IMPL(__imp__sub_82A6E664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E668"))) PPC_WEAK_FUNC(sub_82A6E668);
PPC_FUNC_IMPL(__imp__sub_82A6E668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A6E670;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e718
	if (ctx.cr6.eq) goto loc_82A6E718;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// ld r4,968(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 968);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244fc30
	ctx.lr = 0x82A6E6A8;
	sub_8244FC30(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,21248
	ctx.r4.s64 = ctx.r10.s64 + 21248;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A6E6C8;
	sub_8233E028(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// bl 0x8244fd80
	ctx.lr = 0x82A6E6E0;
	sub_8244FD80(ctx, base);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r9,21272
	ctx.r4.s64 = ctx.r9.s64 + 21272;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A6E700;
	sub_8233E028(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// bl 0x8244fd80
	ctx.lr = 0x82A6E718;
	sub_8244FD80(ctx, base);
loc_82A6E718:
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e73c
	if (ctx.cr6.eq) goto loc_82A6E73C;
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r4,1080(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1080);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8244fa60
	ctx.lr = 0x82A6E73C;
	sub_8244FA60(ctx, base);
loc_82A6E73C:
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e760
	if (ctx.cr6.eq) goto loc_82A6E760;
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r4,1088(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1088);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8244fa60
	ctx.lr = 0x82A6E760;
	sub_8244FA60(ctx, base);
loc_82A6E760:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6E768"))) PPC_WEAK_FUNC(sub_82A6E768);
PPC_FUNC_IMPL(__imp__sub_82A6E768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6E770;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e7c0
	if (ctx.cr6.eq) goto loc_82A6E7C0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,21248
	ctx.r4.s64 = ctx.r11.s64 + 21248;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A6E7A8;
	sub_8233E028(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// bl 0x8244fd80
	ctx.lr = 0x82A6E7C0;
	sub_8244FD80(ctx, base);
loc_82A6E7C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6E7C8"))) PPC_WEAK_FUNC(sub_82A6E7C8);
PPC_FUNC_IMPL(__imp__sub_82A6E7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82A6E7D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e8e0
	if (ctx.cr6.eq) goto loc_82A6E8E0;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a6e808
	if (ctx.cr6.gt) goto loc_82A6E808;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82a6e810
	goto loc_82A6E810;
loc_82A6E808:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A6E810:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A6E818;
	sub_8258A128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e8e0
	if (ctx.cr6.eq) goto loc_82A6E8E0;
	// lwz r28,2208(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2208);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a6e8e0
	if (ctx.cr6.eq) goto loc_82A6E8E0;
	// lwz r11,1104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6e8e0
	if (ctx.cr6.eq) goto loc_82A6E8E0;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r25,72(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r30,28868(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// lwz r29,25104(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25104);
	// bl 0x829a48b0
	ctx.lr = 0x82A6E85C;
	sub_829A48B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x822a93e8
	ctx.lr = 0x82A6E87C;
	sub_822A93E8(ctx, base);
	// bl 0x82a6ff00
	ctx.lr = 0x82A6E880;
	sub_82A6FF00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a6e8e0
	if (ctx.cr6.eq) goto loc_82A6E8E0;
	// bl 0x82a700a0
	ctx.lr = 0x82A6E894;
	sub_82A700A0(ctx, base);
	// lwz r3,1104(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1104);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6E8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r26.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a6e0a0
	ctx.lr = 0x82A6E8C8;
	sub_82A6E0A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,60
	ctx.r3.s64 = ctx.r27.s64 + 60;
	// bl 0x82a6fa18
	ctx.lr = 0x82A6E8D4;
	sub_82A6FA18(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82A6E8E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6E8EC"))) PPC_WEAK_FUNC(sub_82A6E8EC);
PPC_FUNC_IMPL(__imp__sub_82A6E8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E8F0"))) PPC_WEAK_FUNC(sub_82A6E8F0);
PPC_FUNC_IMPL(__imp__sub_82A6E8F0) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a6e948
	if (ctx.cr6.eq) goto loc_82A6E948;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82a6f9b0
	ctx.lr = 0x82A6E920;
	sub_82A6F9B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6e948
	if (ctx.cr6.eq) goto loc_82A6E948;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a6e960
	ctx.lr = 0x82A6E934;
	sub_82A6E960(ctx, base);
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
loc_82A6E948:
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
}

__attribute__((alias("__imp__sub_82A6E960"))) PPC_WEAK_FUNC(sub_82A6E960);
PPC_FUNC_IMPL(__imp__sub_82A6E960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6E968;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82a6ea28
	if (ctx.cr6.lt) goto loc_82A6EA28;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a6ea28
	if (!ctx.cr6.lt) goto loc_82A6EA28;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6ea04
	if (ctx.cr6.eq) goto loc_82A6EA04;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a6ea04
	if (ctx.cr6.eq) goto loc_82A6EA04;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a6e9c4
	if (ctx.cr6.gt) goto loc_82A6E9C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a6e9cc
	goto loc_82A6E9CC;
loc_82A6E9C4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A6E9CC:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A6E9D4;
	sub_8258A128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6ea04
	if (ctx.cr6.eq) goto loc_82A6EA04;
	// lwz r11,2208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6ea04
	if (ctx.cr6.eq) goto loc_82A6EA04;
	// lwz r3,1104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6ea04
	if (ctx.cr6.eq) goto loc_82A6EA04;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82562628
	ctx.lr = 0x82A6EA04;
	sub_82562628(ctx, base);
loc_82A6EA04:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8232d180
	ctx.lr = 0x82A6EA1C;
	sub_8232D180(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A6EA28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6EA34"))) PPC_WEAK_FUNC(sub_82A6EA34);
PPC_FUNC_IMPL(__imp__sub_82A6EA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6EA38"))) PPC_WEAK_FUNC(sub_82A6EA38);
PPC_FUNC_IMPL(__imp__sub_82A6EA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82a6ea7c
	if (!ctx.cr6.gt) goto loc_82A6EA7C;
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82A6EA50:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a6ea6c
	if (ctx.cr6.eq) goto loc_82A6EA6C;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,1184(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1184);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82a6ea84
	if (ctx.cr6.eq) goto loc_82A6EA84;
loc_82A6EA6C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a6ea50
	if (ctx.cr6.lt) goto loc_82A6EA50;
loc_82A6EA7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A6EA84:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x82a6e8f0
	sub_82A6E8F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6EA90"))) PPC_WEAK_FUNC(sub_82A6EA90);
PPC_FUNC_IMPL(__imp__sub_82A6EA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6EA98;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a6eb10
	if (!ctx.cr6.gt) goto loc_82A6EB10;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A6EABC:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6eae8
	if (ctx.cr6.eq) goto loc_82A6EAE8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6eae8
	if (ctx.cr6.eq) goto loc_82A6EAE8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a6e0a0
	ctx.lr = 0x82A6EAE4;
	sub_82A6E0A0(ctx, base);
	// b 0x82a6eafc
	goto loc_82A6EAFC;
loc_82A6EAE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a6e960
	ctx.lr = 0x82A6EAF4;
	sub_82A6E960(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_82A6EAFC:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a6eabc
	if (ctx.cr6.lt) goto loc_82A6EABC;
loc_82A6EB10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6EB1C"))) PPC_WEAK_FUNC(sub_82A6EB1C);
PPC_FUNC_IMPL(__imp__sub_82A6EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6EB20"))) PPC_WEAK_FUNC(sub_82A6EB20);
PPC_FUNC_IMPL(__imp__sub_82A6EB20) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6ec38
	if (ctx.cr6.eq) goto loc_82A6EC38;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,988(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// stfs f31,992(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// stfs f31,996(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 996, temp.u32);
	// beq cr6,0x82a6ebe0
	if (ctx.cr6.eq) goto loc_82A6EBE0;
	// lwz r11,868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6ebe0
	if (ctx.cr6.eq) goto loc_82A6EBE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x82A6EB80;
	sub_822960C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// bl 0x82570f58
	ctx.lr = 0x82A6EB8C;
	sub_82570F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A6EB94;
	sub_82299080(ctx, base);
	// lwz r10,980(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// lwz r3,868(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 868);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r3,196
	ctx.r11.s64 = ctx.r3.s64 + 196;
	// lfs f0,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a6ebb4
	if (!ctx.cr6.eq) goto loc_82A6EBB4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A6EBB4:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// oris r7,r9,16384
	ctx.r7.u64 = ctx.r9.u64 | 1073741824;
	// rlwinm r6,r8,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1;
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a6ebdc
	if (!ctx.cr6.eq) goto loc_82A6EBDC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6ebe0
	if (ctx.cr6.eq) goto loc_82A6EBE0;
loc_82A6EBDC:
	// bl 0x825a2e30
	ctx.lr = 0x82A6EBE0;
	sub_825A2E30(ctx, base);
loc_82A6EBE0:
	// lwz r3,976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6ec00
	if (ctx.cr6.eq) goto loc_82A6EC00;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,964(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 964);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A6EC00;
	sub_8244FC30(ctx, base);
loc_82A6EC00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6EC14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6ec24
	if (ctx.cr6.eq) goto loc_82A6EC24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a705a8
	ctx.lr = 0x82A6EC24;
	sub_82A705A8(ctx, base);
loc_82A6EC24:
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stb r10,984(r31)
	PPC_STORE_U8(ctx.r31.u32 + 984, ctx.r10.u8);
	// stw r9,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r9.u32);
loc_82A6EC38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82A6EC50"))) PPC_WEAK_FUNC(sub_82A6EC50);
PPC_FUNC_IMPL(__imp__sub_82A6EC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A6EC58;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-32444
	ctx.r30.s64 = ctx.r11.s64 + -32444;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f0,-1192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -1192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// blt cr6,0x82a6ef08
	if (ctx.cr6.lt) goto loc_82A6EF08;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r11,11272
	ctx.r27.s64 = ctx.r11.s64 + 11272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a6eca4
	if (ctx.cr6.eq) goto loc_82A6ECA4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82a6eca8
	goto loc_82A6ECA8;
loc_82A6ECA4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82A6ECA8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82A6ECB0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a6ef08
	if (ctx.cr6.eq) goto loc_82A6EF08;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a6eccc
	if (ctx.cr6.eq) goto loc_82A6ECCC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82a6ecd0
	goto loc_82A6ECD0;
loc_82A6ECCC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82A6ECD0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x82cb0328
	ctx.lr = 0x82A6ECDC;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a6ef08
	if (ctx.cr6.eq) goto loc_82A6EF08;
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// lfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6ee50
	if (ctx.cr6.eq) goto loc_82A6EE50;
	// lwz r11,868(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 868);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6ee50
	if (ctx.cr6.eq) goto loc_82A6EE50;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,216(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r11,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r28,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r28.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r11,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r11.u8);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x82563ce8
	ctx.lr = 0x82A6ED5C;
	sub_82563CE8(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r5,1012(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// addi r30,r31,1008
	ctx.r30.s64 = ctx.r31.s64 + 1008;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-16448(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16448);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82a6fa80
	ctx.lr = 0x82A6ED80;
	sub_82A6FA80(ctx, base);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a6ed94
	if (ctx.cr6.eq) goto loc_82A6ED94;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82a6ed98
	goto loc_82A6ED98;
loc_82A6ED94:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82A6ED98:
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825adfe0
	ctx.lr = 0x82A6EDB4;
	sub_825ADFE0(ctx, base);
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82a6ee38
	if (!ctx.cr6.gt) goto loc_82A6EE38;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// bl 0x82295680
	ctx.lr = 0x82A6EDD8;
	sub_82295680(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822952c8
	ctx.lr = 0x82A6EDE8;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822952c8
	ctx.lr = 0x82A6EDF8;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// bl 0x82570f58
	ctx.lr = 0x82A6EE04;
	sub_82570F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A6EE0C;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A6EE14;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82A6EE1C;
	sub_82299080(ctx, base);
	// lwz r10,972(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// lfs f0,1004(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r28.u32);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stfs f0,1000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// stw r9,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r9.u32);
	// b 0x82a6ee50
	goto loc_82A6EE50;
loc_82A6EE38:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// bl 0x82570f58
	ctx.lr = 0x82A6EE44;
	sub_82570F58(ctx, base);
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r10.u32);
loc_82A6EE50:
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6eedc
	if (ctx.cr6.eq) goto loc_82A6EEDC;
	// lbz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 984);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82a6ee84
	if (!ctx.cr6.eq) goto loc_82A6EE84;
	// stfs f29,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-72(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A6EE84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,860(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f29,996(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 996, temp.u32);
	// stb r10,984(r31)
	PPC_STORE_U8(ctx.r31.u32 + 984, ctx.r10.u8);
	// stfs f0,992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// lwz r9,588(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A6EEAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6ef10
	if (ctx.cr6.eq) goto loc_82A6EF10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a70038
	ctx.lr = 0x82A6EEBC;
	sub_82A70038(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A6EEDC:
	// stfs f30,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a6f2e0
	ctx.lr = 0x82A6EEEC;
	sub_82A6F2E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,984(r31)
	PPC_STORE_U8(ctx.r31.u32 + 984, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A6EF08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6eb20
	ctx.lr = 0x82A6EF10;
	sub_82A6EB20(ctx, base);
loc_82A6EF10:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6EF24"))) PPC_WEAK_FUNC(sub_82A6EF24);
PPC_FUNC_IMPL(__imp__sub_82A6EF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6EF28"))) PPC_WEAK_FUNC(sub_82A6EF28);
PPC_FUNC_IMPL(__imp__sub_82A6EF28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,980(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82571b30
	sub_82571B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6EF38"))) PPC_WEAK_FUNC(sub_82A6EF38);
PPC_FUNC_IMPL(__imp__sub_82A6EF38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6EF3C"))) PPC_WEAK_FUNC(sub_82A6EF3C);
PPC_FUNC_IMPL(__imp__sub_82A6EF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6EF40"))) PPC_WEAK_FUNC(sub_82A6EF40);
PPC_FUNC_IMPL(__imp__sub_82A6EF40) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,984(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 984);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6EF50"))) PPC_WEAK_FUNC(sub_82A6EF50);
PPC_FUNC_IMPL(__imp__sub_82A6EF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6EF58;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r8,-18304
	ctx.r7.s64 = ctx.r8.s64 + -18304;
	// lfs f0,-15872(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15872);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f31,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lbz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 984);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lfsx f12,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f30,f12,f0,f1
	ctx.f30.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// beq cr6,0x82a6f250
	if (ctx.cr6.eq) goto loc_82A6F250;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a6f090
	if (ctx.cr6.eq) goto loc_82A6F090;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a6f2c8
	if (!ctx.cr6.eq) goto loc_82A6F2C8;
	// lfs f0,992(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82a6efe8
	if (!ctx.cr6.gt) goto loc_82A6EFE8;
	// lfs f13,860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fdivs f11,f30,f13
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// lfs f10,988(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,992(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f9,988(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
loc_82A6EFE8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-32444
	ctx.r10.s64 = ctx.r11.s64 + -32444;
	// lfs f0,3368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a6f00c
	if (ctx.cr6.lt) goto loc_82A6F00C;
	// lfs f13,988(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a6f2bc
	if (!ctx.cr6.lt) goto loc_82A6F2BC;
loc_82A6F00C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// stfs f31,988(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,984(r31)
	PPC_STORE_U8(ctx.r31.u32 + 984, ctx.r11.u8);
	// addi r3,r31,1008
	ctx.r3.s64 = ctx.r31.s64 + 1008;
	// lwz r5,1012(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// bl 0x82a6fa80
	ctx.lr = 0x82A6F02C;
	sub_82A6FA80(ctx, base);
	// lwz r10,980(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6f05c
	if (ctx.cr6.eq) goto loc_82A6F05C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x82A6F048;
	sub_822960C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// bl 0x82570f58
	ctx.lr = 0x82A6F054;
	sub_82570F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A6F05C;
	sub_82299080(ctx, base);
loc_82A6F05C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6F070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6f2bc
	if (ctx.cr6.eq) goto loc_82A6F2BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a705a8
	ctx.lr = 0x82A6F080;
	sub_82A705A8(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// rlwinm r10,r11,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r10,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
	// b 0x82a6f2bc
	goto loc_82A6F2BC;
loc_82A6F090:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,972(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// addi r9,r11,-32444
	ctx.r9.s64 = ctx.r11.s64 + -32444;
	// rlwinm r8,r10,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f29,3368(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x82a6f1fc
	if (ctx.cr6.eq) goto loc_82A6F1FC;
	// lfs f0,1000(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82a6f0c0
	if (!ctx.cr6.gt) goto loc_82A6F0C0;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,1000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
loc_82A6F0C0:
	// lfs f0,1000(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a6f1fc
	if (!ctx.cr6.lt) goto loc_82A6F1FC;
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// lwz r10,1012(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82a6f11c
	if (!ctx.cr6.eq) goto loc_82A6F11C;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f13,1004(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1008(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,26244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26244);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1000(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82570f58
	ctx.lr = 0x82A6F118;
	sub_82570F58(ctx, base);
	// b 0x82a6f1fc
	goto loc_82A6F1FC;
loc_82A6F11C:
	// lfs f0,1004(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stfs f0,1000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// blt cr6,0x82a6f190
	if (ctx.cr6.lt) goto loc_82A6F190;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,1008(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-12592
	ctx.r4.s64 = ctx.r10.s64 + -12592;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// bl 0x82295680
	ctx.lr = 0x82A6F14C;
	sub_82295680(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822952c8
	ctx.lr = 0x82A6F15C;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822952c8
	ctx.lr = 0x82A6F16C;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// bl 0x82570f58
	ctx.lr = 0x82A6F178;
	sub_82570F58(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A6F180;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82A6F188;
	sub_82299080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82a6f1f8
	goto loc_82A6F1F8;
loc_82A6F190:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1008(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-12592
	ctx.r4.s64 = ctx.r10.s64 + -12592;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// bl 0x82295680
	ctx.lr = 0x82A6F1B8;
	sub_82295680(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822952c8
	ctx.lr = 0x82A6F1C8;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822952c8
	ctx.lr = 0x82A6F1D8;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// bl 0x82570f58
	ctx.lr = 0x82A6F1E4;
	sub_82570F58(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82A6F1EC;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82A6F1F4;
	sub_82299080(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_82A6F1F8:
	// bl 0x82299080
	ctx.lr = 0x82A6F1FC;
	sub_82299080(ctx, base);
loc_82A6F1FC:
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6f2c8
	if (ctx.cr6.eq) goto loc_82A6F2C8;
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82a6f220
	if (!ctx.cr6.gt) goto loc_82A6F220;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
loc_82A6F220:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a6f2c8
	if (!ctx.cr6.lt) goto loc_82A6F2C8;
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f0,860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// stb r11,984(r31)
	PPC_STORE_U8(ctx.r31.u32 + 984, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A6F250:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82a6f278
	if (!ctx.cr6.gt) goto loc_82A6F278;
	// lfs f13,860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fdivs f11,f30,f13
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// lfs f10,988(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,992(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,988(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
loc_82A6F278:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-32444
	ctx.r11.s64 = ctx.r11.s64 + -32444;
	// lfs f0,3368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a6f2a4
	if (ctx.cr6.lt) goto loc_82A6F2A4;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// lfs f13,988(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-14320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14320);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a6f2bc
	if (!ctx.cr6.gt) goto loc_82A6F2BC;
loc_82A6F2A4:
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f13,996(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,992(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// stb r10,984(r31)
	PPC_STORE_U8(ctx.r31.u32 + 984, ctx.r10.u8);
	// stfs f0,988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
loc_82A6F2BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a6f2e0
	ctx.lr = 0x82A6F2C8;
	sub_82A6F2E0(ctx, base);
loc_82A6F2C8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_82A6F2DC"))) PPC_WEAK_FUNC(sub_82A6F2DC);
PPC_FUNC_IMPL(__imp__sub_82A6F2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F2E0"))) PPC_WEAK_FUNC(sub_82A6F2E0);
PPC_FUNC_IMPL(__imp__sub_82A6F2E0) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6f350
	if (ctx.cr6.eq) goto loc_82A6F350;
	// lwz r3,868(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r3,196
	ctx.r11.s64 = ctx.r3.s64 + 196;
	// lfs f0,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a6f324
	if (!ctx.cr6.eq) goto loc_82A6F324;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A6F324:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// oris r7,r9,16384
	ctx.r7.u64 = ctx.r9.u64 | 1073741824;
	// rlwinm r6,r8,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1;
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a6f34c
	if (!ctx.cr6.eq) goto loc_82A6F34C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a6f350
	if (ctx.cr6.eq) goto loc_82A6F350;
loc_82A6F34C:
	// bl 0x825a2e30
	ctx.lr = 0x82A6F350;
	sub_825A2E30(ctx, base);
loc_82A6F350:
	// lwz r3,976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6f3a0
	if (ctx.cr6.eq) goto loc_82A6F3A0;
	// lfs f13,960(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,964(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 964);
	// addi r9,r10,-18304
	ctx.r9.s64 = ctx.r10.s64 + -18304;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// rlwinm r5,r8,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r11,r8,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 | ctx.r11.u64;
	// lfsx f11,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f1,f11,f13,f31
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A6F3A0;
	sub_8244FC30(ctx, base);
loc_82A6F3A0:
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

__attribute__((alias("__imp__sub_82A6F3B8"))) PPC_WEAK_FUNC(sub_82A6F3B8);
PPC_FUNC_IMPL(__imp__sub_82A6F3B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a6f3e8
	if (ctx.cr6.eq) goto loc_82A6F3E8;
	// lwz r30,960(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// b 0x82a6f3ec
	goto loc_82A6F3EC;
loc_82A6F3E8:
	// lwz r30,964(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
loc_82A6F3EC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x82a6f448
	if (ctx.cr6.eq) goto loc_82A6F448;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6F428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6F440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x82a6f450
	goto loc_82A6F450;
loc_82A6F448:
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82A6F450:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A6F478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,860(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lwz r7,640(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 640);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A6F498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82A6F4B8"))) PPC_WEAK_FUNC(sub_82A6F4B8);
PPC_FUNC_IMPL(__imp__sub_82A6F4B8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,964(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 964);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82a6f4e0
	sub_82A6F4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F4DC"))) PPC_WEAK_FUNC(sub_82A6F4DC);
PPC_FUNC_IMPL(__imp__sub_82A6F4DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6F4E0"))) PPC_WEAK_FUNC(sub_82A6F4E0);
PPC_FUNC_IMPL(__imp__sub_82A6F4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6F4E8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x82a6f554
	if (ctx.cr6.eq) goto loc_82A6F554;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6F534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6F54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x82a6f564
	goto loc_82A6F564;
loc_82A6F554:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82A6F564:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A6F58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a6f5ec
	if (ctx.cr6.eq) goto loc_82A6F5EC;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82a6f5a4
	if (!ctx.cr6.gt) goto loc_82A6F5A4;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82a6f5a8
	goto loc_82A6F5A8;
loc_82A6F5A4:
	// lfs f0,852(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
loc_82A6F5A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,860(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,844(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// stb r29,972(r31)
	PPC_STORE_U8(ctx.r31.u32 + 972, ctx.r29.u8);
	// stfs f13,976(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6F5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6f5ec
	if (ctx.cr6.eq) goto loc_82A6F5EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a70038
	ctx.lr = 0x82A6F5E0;
	sub_82A70038(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
loc_82A6F5EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F5FC"))) PPC_WEAK_FUNC(sub_82A6F5FC);
PPC_FUNC_IMPL(__imp__sub_82A6F5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F600"))) PPC_WEAK_FUNC(sub_82A6F600);
PPC_FUNC_IMPL(__imp__sub_82A6F600) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r10,r11,-32444
	ctx.r10.s64 = ctx.r11.s64 + -32444;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r8,-18304
	ctx.r7.s64 = ctx.r8.s64 + -18304;
	// lfs f0,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1296(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1296);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lbz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 972);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lfsx f11,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f13,f1
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// beq cr6,0x82a6f738
	if (ctx.cr6.eq) goto loc_82A6F738;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a6f704
	if (ctx.cr6.eq) goto loc_82A6F704;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a6f79c
	if (!ctx.cr6.eq) goto loc_82A6F79C;
	// lfs f12,976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a6f694
	if (!ctx.cr6.gt) goto loc_82A6F694;
	// lfs f11,860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fdivs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// lfs f8,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,976(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfs f7,844(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
loc_82A6F694:
	// lfs f12,976(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a6f6b0
	if (ctx.cr6.lt) goto loc_82A6F6B0;
	// lfs f12,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82a6f79c
	if (!ctx.cr6.lt) goto loc_82A6F79C;
loc_82A6F6B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,844(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// stb r10,972(r31)
	PPC_STORE_U8(ctx.r31.u32 + 972, ctx.r10.u8);
	// lwz r9,588(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A6F6D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6f79c
	if (ctx.cr6.eq) goto loc_82A6F79C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a705a8
	ctx.lr = 0x82A6F6E4;
	sub_82A705A8(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// rlwinm r10,r11,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r10,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
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
loc_82A6F704:
	// lfs f12,976(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a6f718
	if (!ctx.cr6.gt) goto loc_82A6F718;
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f0,976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
loc_82A6F718:
	// lfs f13,976(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a6f79c
	if (!ctx.cr6.lt) goto loc_82A6F79C;
	// lfs f0,860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f0,976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// b 0x82a6f798
	goto loc_82A6F798;
loc_82A6F738:
	// lfs f12,976(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a6f760
	if (!ctx.cr6.gt) goto loc_82A6F760;
	// lfs f0,860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f10,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,976(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,844(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
loc_82A6F760:
	// lfs f13,976(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a6f784
	if (ctx.cr6.lt) goto loc_82A6F784;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lfs f13,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-14320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14320);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a6f79c
	if (!ctx.cr6.gt) goto loc_82A6F79C;
loc_82A6F784:
	// lfs f13,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f13.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// stfs f13,976(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
loc_82A6F798:
	// stb r11,972(r31)
	PPC_STORE_U8(ctx.r31.u32 + 972, ctx.r11.u8);
loc_82A6F79C:
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

__attribute__((alias("__imp__sub_82A6F7B0"))) PPC_WEAK_FUNC(sub_82A6F7B0);
PPC_FUNC_IMPL(__imp__sub_82A6F7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A6F7B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6f7f0
	if (ctx.cr6.eq) goto loc_82A6F7F0;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6f7f0
	if (ctx.cr6.eq) goto loc_82A6F7F0;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a6f7f0
	if (ctx.cr6.eq) goto loc_82A6F7F0;
	// lwz r30,160(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
loc_82A6F7F0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,7092
	ctx.r4.s64 = ctx.r11.s64 + 7092;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A6F810;
	sub_8233E028(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x82544158
	ctx.lr = 0x82A6F820;
	sub_82544158(ctx, base);
	// bl 0x82747268
	ctx.lr = 0x82A6F824;
	sub_82747268(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6f89c
	if (ctx.cr6.eq) goto loc_82A6F89C;
	// lbz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a6f89c
	if (ctx.cr6.lt) goto loc_82A6F89C;
	// lwz r10,1092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a6f89c
	if (!ctx.cr6.lt) goto loc_82A6F89C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,1088(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x82294bb8
	ctx.lr = 0x82A6F860;
	sub_82294BB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1100
	ctx.r3.s64 = ctx.r31.s64 + 1100;
	// bl 0x822bbe90
	ctx.lr = 0x82A6F86C;
	sub_822BBE90(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f1,860(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f1.f64 = double(temp.f32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,640(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 640);
	// lfs f3,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A6F894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A6F89C;
	sub_82299080(ctx, base);
loc_82A6F89C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F8A4"))) PPC_WEAK_FUNC(sub_82A6F8A4);
PPC_FUNC_IMPL(__imp__sub_82A6F8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F8A8"))) PPC_WEAK_FUNC(sub_82A6F8A8);
PPC_FUNC_IMPL(__imp__sub_82A6F8A8) {
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
	// bl 0x82ad8d38
	ctx.lr = 0x82A6F8C0;
	sub_82AD8D38(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-16332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82a6f8f4
	if (ctx.cr6.eq) goto loc_82A6F8F4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r4,972(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 972);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6F8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A6F8F4:
	// lfs f1,844(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x82a6f920
	if (ctx.cr6.eq) goto loc_82A6F920;
	// lwz r3,960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a6f920
	if (ctx.cr6.eq) goto loc_82A6F920;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,972(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 972);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8244fc30
	ctx.lr = 0x82A6F920;
	sub_8244FC30(ctx, base);
loc_82A6F920:
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

__attribute__((alias("__imp__sub_82A6F934"))) PPC_WEAK_FUNC(sub_82A6F934);
PPC_FUNC_IMPL(__imp__sub_82A6F934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F938"))) PPC_WEAK_FUNC(sub_82A6F938);
PPC_FUNC_IMPL(__imp__sub_82A6F938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f1,860(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 860);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f3.f64 = double(temp.f32);
	// lwz r8,640(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 640);
	// lfs f2,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A6F95C"))) PPC_WEAK_FUNC(sub_82A6F95C);
PPC_FUNC_IMPL(__imp__sub_82A6F95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F960"))) PPC_WEAK_FUNC(sub_82A6F960);
PPC_FUNC_IMPL(__imp__sub_82A6F960) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,972(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 972);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F980"))) PPC_WEAK_FUNC(sub_82A6F980);
PPC_FUNC_IMPL(__imp__sub_82A6F980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6F984"))) PPC_WEAK_FUNC(sub_82A6F984);
PPC_FUNC_IMPL(__imp__sub_82A6F984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F988"))) PPC_WEAK_FUNC(sub_82A6F988);
PPC_FUNC_IMPL(__imp__sub_82A6F988) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r4,964(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 964);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fd80
	sub_8244FD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F9AC"))) PPC_WEAK_FUNC(sub_82A6F9AC);
PPC_FUNC_IMPL(__imp__sub_82A6F9AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6F9B0"))) PPC_WEAK_FUNC(sub_82A6F9B0);
PPC_FUNC_IMPL(__imp__sub_82A6F9B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82a6f9f4
	if (!ctx.cr6.gt) goto loc_82A6F9F4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82A6F9CC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a6f9fc
	if (ctx.cr6.eq) goto loc_82A6F9FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a6f9cc
	if (ctx.cr6.lt) goto loc_82A6F9CC;
loc_82A6F9F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A6F9FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6FA04"))) PPC_WEAK_FUNC(sub_82A6FA04);
PPC_FUNC_IMPL(__imp__sub_82A6FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6FA08"))) PPC_WEAK_FUNC(sub_82A6FA08);
PPC_FUNC_IMPL(__imp__sub_82A6FA08) {
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

__attribute__((alias("__imp__sub_82A6FA18"))) PPC_WEAK_FUNC(sub_82A6FA18);
PPC_FUNC_IMPL(__imp__sub_82A6FA18) {
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
	ctx.lr = 0x82A6FA48;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a6fa60
	if (ctx.cr0.eq) goto loc_82A6FA60;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A6FA60:
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

__attribute__((alias("__imp__sub_82A6FA80"))) PPC_WEAK_FUNC(sub_82A6FA80);
PPC_FUNC_IMPL(__imp__sub_82A6FA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82A6FA88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82a6fb54
	if (!ctx.cr6.gt) goto loc_82A6FB54;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
loc_82A6FAAC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a6fb08
	if (ctx.cr6.eq) goto loc_82A6FB08;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a6fb08
	if (ctx.cr6.eq) goto loc_82A6FB08;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a6fae8
	if (!ctx.cr6.eq) goto loc_82A6FAE8;
	// bl 0x822900a0
	ctx.lr = 0x82A6FAE4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82A6FAE8:
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
	ctx.lr = 0x82A6FB04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82A6FB08:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a6fb3c
	if (ctx.cr6.eq) goto loc_82A6FB3C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a6fb28
	if (!ctx.cr6.eq) goto loc_82A6FB28;
	// bl 0x822900a0
	ctx.lr = 0x82A6FB24;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82A6FB28:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6FB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A6FB3C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bne 0x82a6faac
	if (!ctx.cr0.eq) goto loc_82A6FAAC;
loc_82A6FB54:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8232d180
	ctx.lr = 0x82A6FB6C;
	sub_8232D180(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6FB74"))) PPC_WEAK_FUNC(sub_82A6FB74);
PPC_FUNC_IMPL(__imp__sub_82A6FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

