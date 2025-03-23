#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83064374"))) PPC_WEAK_FUNC(sub_83064374);
PPC_FUNC_IMPL(__imp__sub_83064374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83064378"))) PPC_WEAK_FUNC(sub_83064378);
PPC_FUNC_IMPL(__imp__sub_83064378) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064380"))) PPC_WEAK_FUNC(sub_83064380);
PPC_FUNC_IMPL(__imp__sub_83064380) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-72
	ctx.r3.s64 = ctx.r3.s64 + -72;
	// b 0x82ff4f88
	sub_82FF4F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83064388"))) PPC_WEAK_FUNC(sub_83064388);
PPC_FUNC_IMPL(__imp__sub_83064388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83064390;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// bl 0x82d5ecb0
	ctx.lr = 0x830643A4;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830643e0
	if (ctx.cr6.eq) goto loc_830643E0;
	// lwz r29,-68(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830643c8
	if (ctx.cr6.eq) goto loc_830643C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-72
	ctx.r3.s64 = ctx.r31.s64 + -72;
	// bl 0x82ff8508
	ctx.lr = 0x830643C8;
	sub_82FF8508(ctx, base);
loc_830643C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83064400
	if (ctx.cr6.eq) goto loc_83064400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x830643D8;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_830643E0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,26768
	ctx.r4.s64 = ctx.r11.s64 + 26768;
	// li r5,687
	ctx.r5.s64 = 687;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83064400;
	sub_82D17988(ctx, base);
loc_83064400:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83064408"))) PPC_WEAK_FUNC(sub_83064408);
PPC_FUNC_IMPL(__imp__sub_83064408) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064410"))) PPC_WEAK_FUNC(sub_83064410);
PPC_FUNC_IMPL(__imp__sub_83064410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83064418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ffca60
	ctx.lr = 0x8306442C;
	sub_82FFCA60(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r11,27868
	ctx.r5.s64 = ctx.r11.s64 + 27868;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f13,6140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83064498:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x83064498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83064498;
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830644e8
	if (ctx.cr6.eq) goto loc_830644E8;
	// bl 0x82ff8508
	ctx.lr = 0x830644E4;
	sub_82FF8508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830644E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830644F0"))) PPC_WEAK_FUNC(sub_830644F0);
PPC_FUNC_IMPL(__imp__sub_830644F0) {
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
	// bl 0x83064410
	ctx.lr = 0x83064510;
	sub_83064410(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,27892
	ctx.r7.s64 = ctx.r10.s64 + 27892;
	// addi r6,r9,28244
	ctx.r6.s64 = ctx.r9.s64 + 28244;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r5,r8,27940
	ctx.r5.s64 = ctx.r8.s64 + 27940;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
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

__attribute__((alias("__imp__sub_83064568"))) PPC_WEAK_FUNC(sub_83064568);
PPC_FUNC_IMPL(__imp__sub_83064568) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830646c0
	if (ctx.cr6.eq) goto loc_830646C0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f5,f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f4,f12,f7
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f7,f3,f12,f6
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f6,f12,f2,f5
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f5,f1,f0,f9
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f4,f11,f0,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fadds f31,f10,f6
	ctx.f31.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f30,f8,f5
	ctx.f30.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f29,f13,f4
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83064624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830646cc
	if (ctx.cr6.eq) goto loc_830646CC;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83064640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8306465C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f8,f29,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f12,f7,f29,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f10.f64));
	// fmadds f11,f6,f29,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f9.f64));
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f5,f31,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f9,f4,f31,f12
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f8,f3,f31,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fadds f31,f2,f10
	ctx.f31.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fadds f30,f1,f9
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fadds f29,f13,f8
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// b 0x830646cc
	goto loc_830646CC;
loc_830646C0:
	// lfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f29.f64 = double(temp.f32);
loc_830646CC:
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fadds f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// fadds f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f9,16(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fadds f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f8,12(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
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

__attribute__((alias("__imp__sub_83064724"))) PPC_WEAK_FUNC(sub_83064724);
PPC_FUNC_IMPL(__imp__sub_83064724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83064728"))) PPC_WEAK_FUNC(sub_83064728);
PPC_FUNC_IMPL(__imp__sub_83064728) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83064874
	if (ctx.cr6.eq) goto loc_83064874;
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f9,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f6,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f1,f6,f13,f10
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f5,f4,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f8.f64));
	// lfs f8,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f3,f4,f7
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f7.f64));
	// lfs f7,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f4,f2,f1
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fmadds f5,f13,f0,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f4,f11,f0,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fadds f31,f6,f9
	ctx.f31.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fadds f30,f8,f5
	ctx.f30.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f29,f7,f4
	ctx.f29.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830647D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83064880
	if (ctx.cr6.eq) goto loc_83064880;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830647F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83064810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f8,f29,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f12,f7,f29,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f10.f64));
	// fmadds f11,f6,f29,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f9.f64));
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f5,f31,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f9,f4,f31,f12
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f8,f3,f31,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fadds f31,f2,f10
	ctx.f31.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fadds f30,f1,f9
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fadds f29,f13,f8
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// b 0x83064880
	goto loc_83064880;
loc_83064874:
	// lfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f29.f64 = double(temp.f32);
loc_83064880:
	// stfs f31,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f30,88(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f29,92(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f0,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_830648B8"))) PPC_WEAK_FUNC(sub_830648B8);
PPC_FUNC_IMPL(__imp__sub_830648B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830648C0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ac4
	ctx.lr = 0x830648C8;
	__savefpr_19(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83064bb0
	if (ctx.cr6.eq) goto loc_83064BB0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f3,f0,f3,f7
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f12,f2,f5
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f5.f64));
	// lfs f5,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f12,f1,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f4.f64));
	// lfs f29,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f26,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f12,f9,f12,f3
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f9,f8,f13,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f8,f13,f6,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fadds f7,f31,f12
	ctx.f7.f64 = double(float(ctx.f31.f64 + ctx.f12.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f6,f30,f9
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f9.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f30,f5,f3
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f24,f11,f3
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f25,f10,f4
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f31,f11,f4
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f23,f5,f0
	ctx.f23.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f4,f29,f13,f30
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f30,f2,f13,f24
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f24.f64));
	// fmadds f0,f1,f12,f25
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f25.f64));
	// fmadds f13,f1,f13,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f31,f2,f12,f31
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fmadds f3,f29,f9,f23
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f9.f64 + ctx.f23.f64));
	// fmadds f2,f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f11,f26,f8,f4
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f8.f64 + ctx.f4.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f10,f1,f9,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f9,f29,f12,f5
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f4,f27,f7,f0
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f7.f64 + ctx.f0.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f28,f8,f30
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f30.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f31,f28,f7,f31
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f7.f64 + ctx.f31.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f13,f27,f8,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f8.f64 + ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f11,f26,f6,f3
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f6.f64 + ctx.f3.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f8,f28,f6,f2
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f6.f64 + ctx.f2.f64));
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f6,f27,f6,f10
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f5,f26,f7,f9
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f7.f64 + ctx.f9.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83064A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83064bf0
	if (ctx.cr6.eq) goto loc_83064BF0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83064A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83064A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f5,f13
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f4,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f28,f13,f3
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f29,f13,f4
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f1,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f26,f12,f3
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f27,f12,f4
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f9,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f0,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmadds f24,f1,f11,f7
	ctx.f24.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f23,f1,f10,f6
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f1,f1,f9,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmuls f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f30,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f5,f10,f30,f28
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f28.f64));
	// lfs f31,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f0,f10,f31,f29
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f29.f64));
	// lfs f29,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f21,f9,f30,f26
	ctx.f21.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f26.f64));
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// lfs f26,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f10,f10,f29,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f22,f9,f31,f27
	ctx.f22.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f27.f64));
	// lfs f6,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// lfs f28,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f9,f9,f29,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f31,f11,f31,f4
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f4.f64));
	// lfs f25,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f23,f28,f7,f23
	ctx.f23.f64 = double(float(ctx.f28.f64 * ctx.f7.f64 + ctx.f23.f64));
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f24,f28,f8,f24
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f24.f64));
	// lfs f20,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f1,f28,f6,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f6.f64 + ctx.f1.f64));
	// lfs f19,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f13,f7,f26,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f26.f64 + ctx.f5.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f13,f11,f30,f3
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f3.f64));
	// lfs f28,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f0,f7,f27,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f27.f64 + ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f12,f7,f25,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f25.f64 + ctx.f10.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f10,f6,f27,f22
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 + ctx.f22.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f4,f6,f25,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f25.f64 + ctx.f9.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f5,f6,f26,f21
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f26.f64 + ctx.f21.f64));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f12,f11,f29,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f2.f64));
	// fmadds f9,f8,f27,f31
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f27.f64 + ctx.f31.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f20,f24
	ctx.f0.f64 = double(float(ctx.f20.f64 + ctx.f24.f64));
	// fadds f11,f19,f23
	ctx.f11.f64 = double(float(ctx.f19.f64 + ctx.f23.f64));
	// fadds f10,f28,f1
	ctx.f10.f64 = double(float(ctx.f28.f64 + ctx.f1.f64));
	// fmadds f7,f8,f26,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fmadds f6,f8,f25,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f25.f64 + ctx.f12.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x83064bec
	goto loc_83064BEC;
loc_83064BB0:
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83064BC4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83064bc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83064BC4;
	// lfs f13,40(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_83064BEC:
	// stfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_83064BF0:
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// lfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// ori r30,r11,255
	ctx.r30.u64 = ctx.r11.u64 | 255;
	// lfs f30,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f30.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lfs f27,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f27.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f26,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f23.f64 = double(temp.f32);
	// bl 0x831c03d8
	ctx.lr = 0x83064C38;
	sub_831C03D8(ctx, base);
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f26,104(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f25,84(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stfs f24,96(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f23,108(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f1,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831c03d8
	ctx.lr = 0x83064C78;
	sub_831C03D8(ctx, base);
	// stfs f25,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f24,92(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f23,104(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f26,112(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f1,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831c03d8
	ctx.lr = 0x83064CB8;
	sub_831C03D8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b10
	ctx.lr = 0x83064CC4;
	__restfpr_19(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83064CC8"))) PPC_WEAK_FUNC(sub_83064CC8);
PPC_FUNC_IMPL(__imp__sub_83064CC8) {
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
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// bl 0x82d5ecb0
	ctx.lr = 0x83064CEC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83064d5c
	if (ctx.cr6.eq) goto loc_83064D5C;
	// addi r8,r31,-72
	ctx.r8.s64 = ctx.r31.s64 + -72;
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r8,12
	ctx.r11.s64 = ctx.r8.s64 + 12;
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83064D14:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83064d14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83064D14;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stb r9,372(r10)
	PPC_STORE_U8(ctx.r10.u32 + 372, ctx.r9.u8);
	// beq cr6,0x83064d7c
	if (ctx.cr6.eq) goto loc_83064D7C;
	// bl 0x82d5ed58
	ctx.lr = 0x83064D58;
	sub_82D5ED58(ctx, base);
	// b 0x83064d7c
	goto loc_83064D7C;
loc_83064D5C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,22952
	ctx.r4.s64 = ctx.r11.s64 + 22952;
	// li r5,118
	ctx.r5.s64 = 118;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83064D7C;
	sub_82D17988(ctx, base);
loc_83064D7C:
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

__attribute__((alias("__imp__sub_83064D94"))) PPC_WEAK_FUNC(sub_83064D94);
PPC_FUNC_IMPL(__imp__sub_83064D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83064D98"))) PPC_WEAK_FUNC(sub_83064D98);
PPC_FUNC_IMPL(__imp__sub_83064D98) {
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
	// bl 0x83064410
	ctx.lr = 0x83064DB8;
	sub_83064410(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,27988
	ctx.r7.s64 = ctx.r10.s64 + 27988;
	// addi r6,r9,28268
	ctx.r6.s64 = ctx.r9.s64 + 28268;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r5,r8,28036
	ctx.r5.s64 = ctx.r8.s64 + 28036;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lfs f13,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f12,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
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

__attribute__((alias("__imp__sub_83064E20"))) PPC_WEAK_FUNC(sub_83064E20);
PPC_FUNC_IMPL(__imp__sub_83064E20) {
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
	// bl 0x82cb6ab8
	ctx.lr = 0x83064E38;
	__savefpr_16(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306507c
	if (ctx.cr6.eq) goto loc_8306507C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f26,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f26.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f28,f10,f9
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f31,f11,f8
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f25,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f27,f10,f8
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f24,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f9,f26,f9
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// lfs f23,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f8,f26,f8
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f19,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f4,f0,f13,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f4.f64));
	// lfs f30,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f7,f13,f3,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f29,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f5,f2,f13,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f17,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f18,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f6,f26,f6
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f6.f64));
	// lfs f26,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f1,f25,f3,f1
	ctx.f1.f64 = double(float(ctx.f25.f64 * ctx.f3.f64 + ctx.f1.f64));
	// lfs f16,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f16.f64 = double(temp.f32);
	// fmadds f28,f24,f3,f28
	ctx.f28.f64 = double(float(ctx.f24.f64 * ctx.f3.f64 + ctx.f28.f64));
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f23,f3,f9
	ctx.f9.f64 = double(float(ctx.f23.f64 * ctx.f3.f64 + ctx.f9.f64));
	// lfs f21,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f31,f25,f2,f31
	ctx.f31.f64 = double(float(ctx.f25.f64 * ctx.f2.f64 + ctx.f31.f64));
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmadds f27,f24,f2,f27
	ctx.f27.f64 = double(float(ctx.f24.f64 * ctx.f2.f64 + ctx.f27.f64));
	// fmadds f3,f23,f2,f8
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f4,f19,f12,f4
	ctx.f4.f64 = double(float(ctx.f19.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f7,f30,f12,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f5,f29,f12,f5
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f2,f25,f0,f11
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f12,f24,f0,f10
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f23,f0,f6
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f24,f17,f30,f28
	ctx.f24.f64 = double(float(ctx.f17.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f23,f18,f30,f1
	ctx.f23.f64 = double(float(ctx.f18.f64 * ctx.f30.f64 + ctx.f1.f64));
	// fmadds f25,f16,f30,f9
	ctx.f25.f64 = double(float(ctx.f16.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fmadds f27,f17,f29,f27
	ctx.f27.f64 = double(float(ctx.f17.f64 * ctx.f29.f64 + ctx.f27.f64));
	// fadds f20,f26,f4
	ctx.f20.f64 = double(float(ctx.f26.f64 + ctx.f4.f64));
	// fmadds f26,f18,f29,f31
	ctx.f26.f64 = double(float(ctx.f18.f64 * ctx.f29.f64 + ctx.f31.f64));
	// fmadds f28,f16,f29,f3
	ctx.f28.f64 = double(float(ctx.f16.f64 * ctx.f29.f64 + ctx.f3.f64));
	// fadds f22,f13,f7
	ctx.f22.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f21,f21,f5
	ctx.f21.f64 = double(float(ctx.f21.f64 + ctx.f5.f64));
	// fmadds f29,f18,f19,f2
	ctx.f29.f64 = double(float(ctx.f18.f64 * ctx.f19.f64 + ctx.f2.f64));
	// fmadds f30,f17,f19,f12
	ctx.f30.f64 = double(float(ctx.f17.f64 * ctx.f19.f64 + ctx.f12.f64));
	// fmadds f31,f16,f19,f11
	ctx.f31.f64 = double(float(ctx.f16.f64 * ctx.f19.f64 + ctx.f11.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83064F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830650d4
	if (ctx.cr6.eq) goto loc_830650D4;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83064F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83064FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f13,f20
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f20.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f0,f20
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f12,f20
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f20.f64));
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f19,f10,f24
	ctx.f19.f64 = double(float(ctx.f10.f64 * ctx.f24.f64));
	// fmuls f2,f11,f24
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f11,f25
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f18,f11,f23
	ctx.f18.f64 = double(float(ctx.f11.f64 * ctx.f23.f64));
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f17,f10,f25
	ctx.f17.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f20,f10,f23
	ctx.f20.f64 = double(float(ctx.f10.f64 * ctx.f23.f64));
	// fmuls f24,f9,f24
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f24.f64));
	// fmadds f11,f11,f22,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f22.f64 + ctx.f5.f64));
	// fmadds f5,f9,f22,f4
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f22.f64 + ctx.f4.f64));
	// fmadds f4,f10,f22,f3
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f22.f64 + ctx.f3.f64));
	// fmuls f3,f9,f25
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// fmadds f25,f7,f27,f19
	ctx.f25.f64 = double(float(ctx.f7.f64 * ctx.f27.f64 + ctx.f19.f64));
	// fmadds f2,f8,f27,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f27.f64 + ctx.f2.f64));
	// fmadds f22,f13,f29,f18
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f18.f64));
	// fmadds f1,f8,f28,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmadds f10,f12,f29,f20
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f20.f64));
	// fmadds f19,f7,f28,f17
	ctx.f19.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f17.f64));
	// lfs f20,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f18,f6,f26
	ctx.f18.f64 = double(float(ctx.f6.f64 * ctx.f26.f64));
	// lfs f17,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f5,f21,f6,f5
	ctx.f5.f64 = double(float(ctx.f21.f64 * ctx.f6.f64 + ctx.f5.f64));
	// lfs f16,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f16.f64 = double(temp.f32);
	// fmadds f4,f7,f21,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f21.f64 + ctx.f4.f64));
	// fmadds f21,f8,f21,f11
	ctx.f21.f64 = double(float(ctx.f8.f64 * ctx.f21.f64 + ctx.f11.f64));
	// fmadds f24,f6,f27,f24
	ctx.f24.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 + ctx.f24.f64));
	// fmadds f3,f6,f28,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f3.f64));
	// fmadds f27,f13,f30,f2
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fmadds f11,f12,f30,f25
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f25.f64));
	// fmadds f28,f13,f31,f1
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmadds f13,f7,f26,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f26.f64 + ctx.f10.f64));
	// fmadds f2,f0,f29,f18
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f18.f64));
	// fmadds f12,f12,f31,f19
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f19.f64));
	// fmadds f26,f8,f26,f22
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f26.f64 + ctx.f22.f64));
	// fadds f22,f20,f5
	ctx.f22.f64 = double(float(ctx.f20.f64 + ctx.f5.f64));
	// fmadds f24,f0,f30,f24
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f24.f64));
	// fmadds f25,f0,f31,f3
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f3.f64));
	// fadds f21,f17,f21
	ctx.f21.f64 = double(float(ctx.f17.f64 + ctx.f21.f64));
	// fadds f20,f16,f4
	ctx.f20.f64 = double(float(ctx.f16.f64 + ctx.f4.f64));
	// fmr f30,f11
	ctx.f30.f64 = ctx.f11.f64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// fmadds f23,f9,f23,f2
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f23.f64 + ctx.f2.f64));
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
	// b 0x830650d4
	goto loc_830650D4;
loc_8306507C:
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83065090:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83065090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83065090;
	// lfs f22,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f22.f64 = double(temp.f32);
	// lfs f31,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// lfs f21,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f21.f64 = double(temp.f32);
	// lfs f30,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f28.f64 = double(temp.f32);
	// lfs f20,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f20.f64 = double(temp.f32);
	// lfs f27,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f23.f64 = double(temp.f32);
loc_830650D4:
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f23
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// fmuls f11,f13,f24
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// lfs f10,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f27,f13
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmuls f8,f0,f26
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f7,f30,f13
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// fmuls f6,f29,f0
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f5,f10,f25
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// fmuls f4,f28,f10
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f10.f64));
	// fmuls f3,f31,f10
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f1,f11
	ctx.f1.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f0,f9
	ctx.f0.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f13,f8
	ctx.f13.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f12,f7
	ctx.f12.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f11,f6
	ctx.f11.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fabs f10,f5
	ctx.f10.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fabs f9,f4
	ctx.f9.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f8,f3
	ctx.f8.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fadds f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fadds f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fsubs f1,f22,f4
	ctx.f1.f64 = double(float(ctx.f22.f64 - ctx.f4.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fadds f0,f22,f4
	ctx.f0.f64 = double(float(ctx.f22.f64 + ctx.f4.f64));
	// fsubs f13,f21,f3
	ctx.f13.f64 = double(float(ctx.f21.f64 - ctx.f3.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fadds f12,f21,f3
	ctx.f12.f64 = double(float(ctx.f21.f64 + ctx.f3.f64));
	// fsubs f11,f20,f2
	ctx.f11.f64 = double(float(ctx.f20.f64 - ctx.f2.f64));
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fadds f10,f20,f2
	ctx.f10.f64 = double(float(ctx.f20.f64 + ctx.f2.f64));
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b04
	ctx.lr = 0x8306517C;
	__restfpr_16(ctx, base);
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

__attribute__((alias("__imp__sub_83065190"))) PPC_WEAK_FUNC(sub_83065190);
PPC_FUNC_IMPL(__imp__sub_83065190) {
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
	// bl 0x82cb6ac0
	ctx.lr = 0x830651A4;
	__savefpr_18(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83065434
	if (ctx.cr6.eq) goto loc_83065434;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f26,f12,f8
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f8
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f30,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f12,f9
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f28,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f27,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f25,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f23,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f7,f10,f3,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f20,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f22,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f5,f2,f10,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f5.f64));
	// lfs f21,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f6,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f0,f10,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f4.f64));
	// lfs f10,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f31,f30,f2,f31
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f2.f64 + ctx.f31.f64));
	// lfs f19,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f24,f28,f2,f26
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f2.f64 + ctx.f26.f64));
	// lfs f18,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f29,f28,f3,f29
	ctx.f29.f64 = double(float(ctx.f28.f64 * ctx.f3.f64 + ctx.f29.f64));
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmadds f1,f30,f3,f1
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f9,f27,f3,f9
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f3.f64 + ctx.f9.f64));
	// lfs f3,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f27,f2,f8
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f8,f25,f6,f7
	ctx.f8.f64 = double(float(ctx.f25.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f7,f23,f6,f5
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f13,f30,f0,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f12,f28,f0,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f11,f27,f0,f11
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f6,f20,f6,f4
	ctx.f6.f64 = double(float(ctx.f20.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f27,f21,f25,f29
	ctx.f27.f64 = double(float(ctx.f21.f64 * ctx.f25.f64 + ctx.f29.f64));
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f28,f22,f25,f1
	ctx.f28.f64 = double(float(ctx.f22.f64 * ctx.f25.f64 + ctx.f1.f64));
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f26,f10,f25,f9
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f25.f64 + ctx.f9.f64));
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f25,f22,f23,f31
	ctx.f25.f64 = double(float(ctx.f22.f64 * ctx.f23.f64 + ctx.f31.f64));
	// stfs f25,92(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f24,f21,f23,f24
	ctx.f24.f64 = double(float(ctx.f21.f64 * ctx.f23.f64 + ctx.f24.f64));
	// stfs f24,96(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f23,f10,f23,f2
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f23.f64 + ctx.f2.f64));
	// stfs f23,100(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f22,f22,f20,f13
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f20.f64 + ctx.f13.f64));
	// stfs f22,104(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f21,f21,f20,f12
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f20.f64 + ctx.f12.f64));
	// stfs f21,108(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f20,f10,f20,f11
	ctx.f20.f64 = double(float(ctx.f10.f64 * ctx.f20.f64 + ctx.f11.f64));
	// stfs f20,112(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f31,f19,f8
	ctx.f31.f64 = double(float(ctx.f19.f64 + ctx.f8.f64));
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f30,f18,f7
	ctx.f30.f64 = double(float(ctx.f18.f64 + ctx.f7.f64));
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f29,f3,f6
	ctx.f29.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83065300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83065474
	if (ctx.cr6.eq) goto loc_83065474;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306531C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83065338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f0,f30
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f3,f12,f30
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f13,f30
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f13,f25
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// lfs f9,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f13,f24
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f30,f12,f25
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// lfs f6,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f25,f0,f25
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f19,f12,f24
	ctx.f19.f64 = double(float(ctx.f12.f64 * ctx.f24.f64));
	// fmuls f12,f12,f23
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// fmadds f5,f11,f29,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f5.f64));
	// fmadds f3,f9,f29,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f3.f64));
	// fmadds f4,f10,f29,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f4.f64));
	// fmuls f29,f0,f24
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// fmadds f13,f10,f20,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f20.f64 + ctx.f13.f64));
	// fmadds f2,f10,f22,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f22.f64 + ctx.f2.f64));
	// fmadds f1,f10,f21,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f21.f64 + ctx.f1.f64));
	// fmadds f10,f9,f22,f30
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f22.f64 + ctx.f30.f64));
	// fmadds f24,f9,f21,f19
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f21.f64 + ctx.f19.f64));
	// lfs f30,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f5,f8,f31,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f5.f64));
	// lfs f19,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f3,f6,f31,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f3.f64));
	// lfs f23,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f4,f7,f31,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f4.f64));
	// fmadds f31,f11,f22,f25
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f22.f64 + ctx.f25.f64));
	// fmadds f29,f11,f21,f29
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f21.f64 + ctx.f29.f64));
	// fmadds f11,f11,f20,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f20.f64 + ctx.f0.f64));
	// fmadds f0,f7,f26,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f26.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f9,f9,f20,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f20.f64 + ctx.f12.f64));
	// fmadds f2,f7,f28,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f2.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f1,f7,f27,f1
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f27.f64 + ctx.f1.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f30,f5
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f5.f64));
	// fadds f12,f19,f3
	ctx.f12.f64 = double(float(ctx.f19.f64 + ctx.f3.f64));
	// fmadds f10,f6,f28,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f10.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f7,f6,f27,f24
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 + ctx.f24.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f30,f23,f4
	ctx.f30.f64 = double(float(ctx.f23.f64 + ctx.f4.f64));
	// fmadds f5,f8,f28,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f31.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f4,f8,f27,f29
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f27.f64 + ctx.f29.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f6,f6,f26,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f26.f64 + ctx.f9.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f3,f26,f8,f11
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f8.f64 + ctx.f11.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// b 0x83065468
	goto loc_83065468;
loc_83065434:
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83065448:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83065448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83065448;
	// lfs f31,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f29.f64 = double(temp.f32);
loc_83065468:
	// stfs f29,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_83065474:
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f12,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stfs f31,84(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stfs f30,88(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f29,92(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f12,104(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830654AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x830654ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830654AC;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b0c
	ctx.lr = 0x830654CC;
	__restfpr_18(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830654DC"))) PPC_WEAK_FUNC(sub_830654DC);
PPC_FUNC_IMPL(__imp__sub_830654DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830654E0"))) PPC_WEAK_FUNC(sub_830654E0);
PPC_FUNC_IMPL(__imp__sub_830654E0) {
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
	// bl 0x82cb6ab8
	ctx.lr = 0x830654F8;
	__savefpr_16(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83065788
	if (ctx.cr6.eq) goto loc_83065788;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f26,f12,f8
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f31,f13,f8
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f30,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f12,f9
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f28,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f27,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f25,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f23,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f7,f10,f3,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f20,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f5,f2,f10,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f5.f64));
	// lfs f22,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f21,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f6,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f0,f10,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f4.f64));
	// lfs f10,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f31,f30,f2,f31
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f2.f64 + ctx.f31.f64));
	// lfs f19,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f24,f28,f2,f26
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f2.f64 + ctx.f26.f64));
	// lfs f18,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f2,f27,f2,f8
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f2.f64 + ctx.f8.f64));
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmadds f29,f28,f3,f29
	ctx.f29.f64 = double(float(ctx.f28.f64 * ctx.f3.f64 + ctx.f29.f64));
	// fmadds f1,f30,f3,f1
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f8,f25,f6,f7
	ctx.f8.f64 = double(float(ctx.f25.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f9,f27,f3,f9
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f3.f64 + ctx.f9.f64));
	// lfs f3,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f7,f23,f6,f5
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f13,f30,f0,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f12,f28,f0,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f11,f27,f0,f11
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f6,f20,f6,f4
	ctx.f6.f64 = double(float(ctx.f20.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f24,f21,f23,f24
	ctx.f24.f64 = double(float(ctx.f21.f64 * ctx.f23.f64 + ctx.f24.f64));
	// stfs f24,96(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f27,f21,f25,f29
	ctx.f27.f64 = double(float(ctx.f21.f64 * ctx.f25.f64 + ctx.f29.f64));
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f28,f22,f25,f1
	ctx.f28.f64 = double(float(ctx.f22.f64 * ctx.f25.f64 + ctx.f1.f64));
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f26,f10,f25,f9
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f25.f64 + ctx.f9.f64));
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f25,f22,f23,f31
	ctx.f25.f64 = double(float(ctx.f22.f64 * ctx.f23.f64 + ctx.f31.f64));
	// stfs f25,92(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f23,f10,f23,f2
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f23.f64 + ctx.f2.f64));
	// stfs f23,100(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f22,f22,f20,f13
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f20.f64 + ctx.f13.f64));
	// stfs f22,104(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f21,f21,f20,f12
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f20.f64 + ctx.f12.f64));
	// stfs f21,108(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f5,f10,f20,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f20.f64 + ctx.f11.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f31,f19,f8
	ctx.f31.f64 = double(float(ctx.f19.f64 + ctx.f8.f64));
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f30,f18,f7
	ctx.f30.f64 = double(float(ctx.f18.f64 + ctx.f7.f64));
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f29,f3,f6
	ctx.f29.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83065658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830657c8
	if (ctx.cr6.eq) goto loc_830657C8;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83065674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83065690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f23
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// lfs f12,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f13,f24
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// fmuls f5,f0,f30
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f12,f30
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f8,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f13,f30
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f18,f0,f23
	ctx.f18.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// lfs f7,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f19,f0,f24
	ctx.f19.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f20,f0,f25
	ctx.f20.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f10,f28
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f23,f12,f23
	ctx.f23.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// fmadds f1,f8,f0,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f2,f8,f21,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f21.f64 + ctx.f2.f64));
	// fmadds f5,f9,f29,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f5.f64));
	// fmadds f4,f7,f29,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f4.f64));
	// fmadds f3,f8,f29,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f3.f64));
	// fmuls f29,f11,f28
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmuls f24,f12,f24
	ctx.f24.f64 = double(float(ctx.f12.f64 * ctx.f24.f64));
	// fmadds f18,f9,f0,f18
	ctx.f18.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f18.f64));
	// fmadds f30,f7,f22,f30
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f22.f64 + ctx.f30.f64));
	// fmadds f23,f7,f0,f23
	ctx.f23.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f23.f64));
	// lfs f16,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f16.f64 = double(temp.f32);
	// fmadds f1,f11,f26,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f1.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f2,f11,f27,f2
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f2.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f2,f9,f22,f20
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f22.f64 + ctx.f20.f64));
	// lfs f17,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f4,f10,f31,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f4.f64));
	// fmadds f3,f11,f31,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f3.f64));
	// fmadds f8,f8,f22,f29
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f22.f64 + ctx.f29.f64));
	// fmadds f1,f9,f21,f19
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f21.f64 + ctx.f19.f64));
	// fmadds f7,f7,f21,f24
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f21.f64 + ctx.f24.f64));
	// fmadds f0,f6,f31,f5
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f5.f64));
	// lfs f5,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f12,f12,f25,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f25.f64 + ctx.f30.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f9,f10,f26,f23
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f23.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f2,f6,f28,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f2.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f29,f16,f4
	ctx.f29.f64 = double(float(ctx.f16.f64 + ctx.f4.f64));
	// fadds f30,f5,f3
	ctx.f30.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fmadds f5,f6,f26,f18
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f26.f64 + ctx.f18.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f4,f13,f25,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f25.f64 + ctx.f8.f64));
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f3,f10,f27,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 + ctx.f7.f64));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f1,f6,f27,f1
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 + ctx.f1.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f31,f17,f0
	ctx.f31.f64 = double(float(ctx.f17.f64 + ctx.f0.f64));
	// b 0x830657bc
	goto loc_830657BC;
loc_83065788:
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8306579C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8306579c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8306579C;
	// lfs f31,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f29.f64 = double(temp.f32);
loc_830657BC:
	// stfs f29,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_830657C8:
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f12,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f30,180(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f29,184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830657FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x830657fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830657FC;
	// lis r5,-128
	ctx.r5.s64 = -8388608;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831bfeb0
	ctx.lr = 0x83065828;
	sub_831BFEB0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b04
	ctx.lr = 0x83065834;
	__restfpr_16(ctx, base);
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

__attribute__((alias("__imp__sub_83065848"))) PPC_WEAK_FUNC(sub_83065848);
PPC_FUNC_IMPL(__imp__sub_83065848) {
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
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306586C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830658dc
	if (ctx.cr6.eq) goto loc_830658DC;
	// addi r8,r31,-72
	ctx.r8.s64 = ctx.r31.s64 + -72;
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r8,12
	ctx.r11.s64 = ctx.r8.s64 + 12;
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83065894:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83065894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83065894;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stb r9,372(r10)
	PPC_STORE_U8(ctx.r10.u32 + 372, ctx.r9.u8);
	// beq cr6,0x830658fc
	if (ctx.cr6.eq) goto loc_830658FC;
	// bl 0x82d5ed58
	ctx.lr = 0x830658D8;
	sub_82D5ED58(ctx, base);
	// b 0x830658fc
	goto loc_830658FC;
loc_830658DC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,23904
	ctx.r4.s64 = ctx.r11.s64 + 23904;
	// li r5,242
	ctx.r5.s64 = 242;
	// addi r8,r4,-128
	ctx.r8.s64 = ctx.r4.s64 + -128;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x830658FC;
	sub_82D17988(ctx, base);
loc_830658FC:
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

__attribute__((alias("__imp__sub_83065914"))) PPC_WEAK_FUNC(sub_83065914);
PPC_FUNC_IMPL(__imp__sub_83065914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83065918"))) PPC_WEAK_FUNC(sub_83065918);
PPC_FUNC_IMPL(__imp__sub_83065918) {
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
	// bl 0x83064410
	ctx.lr = 0x83065938;
	sub_83064410(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,28084
	ctx.r7.s64 = ctx.r10.s64 + 28084;
	// addi r6,r9,28292
	ctx.r6.s64 = ctx.r9.s64 + 28292;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r5,r8,28144
	ctx.r5.s64 = ctx.r8.s64 + 28144;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f13,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
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

__attribute__((alias("__imp__sub_83065998"))) PPC_WEAK_FUNC(sub_83065998);
PPC_FUNC_IMPL(__imp__sub_83065998) {
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
	// bl 0x82cb6ae0
	ctx.lr = 0x830659B0;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r30,84
	ctx.r31.s64 = ctx.r30.s64 + 84;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83065b3c
	if (ctx.cr6.eq) goto loc_83065B3C;
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f2,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f2,f12
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f1,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f7,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f4,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f31,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f31.f64 = double(temp.f32);
	// lfs f3,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f7,f6,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f11.f64));
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f9,f5,f7,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f9.f64));
	// lfs f30,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f8,f4,f7,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// lfs f7,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f1,f5,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f0.f64));
	// lfs f28,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f0,f31,f6,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f26,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f12,f6,f3,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f11,f30,f3,f9
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f9,f7,f3,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f8,f1,f4,f10
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fmadds f30,f31,f30,f5
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fmadds f29,f2,f13,f0
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fadds f28,f28,f12
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f12.f64));
	// fadds f27,f27,f11
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f11.f64));
	// fadds f26,f26,f9
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f9.f64));
	// fmadds f31,f31,f7,f8
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f7.f64 + ctx.f8.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83065A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83065b7c
	if (ctx.cr6.eq) goto loc_83065B7C;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83065A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83065AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f0,f27
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f13,f27
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f3,f12,f27
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f13,f30
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f11,f26,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f5.f64));
	// fmadds f12,f10,f26,f4
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f4.f64));
	// fmadds f5,f9,f26,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f26.f64 + ctx.f3.f64));
	// fmadds f4,f10,f31,f2
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f2.f64));
	// fmadds f3,f9,f31,f1
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmadds f2,f11,f31,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f0.f64));
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f8,f28,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f13.f64));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f7,f28,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f12.f64));
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f6,f28,f5
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f5.f64));
	// fmadds f30,f7,f29,f4
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f4.f64));
	// fmadds f31,f6,f29,f3
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f3.f64));
	// fmadds f29,f8,f29,f2
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f2.f64));
	// fadds f28,f1,f0
	ctx.f28.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f27,f13,f12
	ctx.f27.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f26,f11,f10
	ctx.f26.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// b 0x83065b7c
	goto loc_83065B7C;
loc_83065B3C:
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83065B50:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83065b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83065B50;
	// lfs f28,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f31.f64 = double(temp.f32);
	// lfs f27,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f26,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f26.f64 = double(temp.f32);
loc_83065B7C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// stfs f29,12(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// stfs f30,16(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmuls f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fneg f1,f4
	ctx.f1.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fneg f0,f5
	ctx.f0.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fadds f13,f26,f2
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f2.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f12,f27,f1
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f1.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f11,f28,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f5,f28,f10
	ctx.f5.f64 = double(float(ctx.f28.f64 + ctx.f10.f64));
	// fadds f7,f8,f26
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f26.f64));
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fadds f6,f9,f27
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f4,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,108(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b2c
	ctx.lr = 0x83065C28;
	__restfpr_26(ctx, base);
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

__attribute__((alias("__imp__sub_83065C3C"))) PPC_WEAK_FUNC(sub_83065C3C);
PPC_FUNC_IMPL(__imp__sub_83065C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83065C40"))) PPC_WEAK_FUNC(sub_83065C40);
PPC_FUNC_IMPL(__imp__sub_83065C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83065C48;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ab0
	ctx.lr = 0x83065C50;
	__savefpr_14(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83065e4c
	if (ctx.cr6.eq) goto loc_83065E4C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f12,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f8
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f1,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f31,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f28,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f29,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f25,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f24.f64 = double(temp.f32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmadds f7,f11,f3,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f23,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f5,f10,f3,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f5.f64));
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f30,f3,f4
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f3,f11,f1,f2
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f2,f10,f1,f9
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmadds f1,f30,f1,f8
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fmadds f0,f11,f31,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f13,f10,f31,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f12,f30,f31,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f26,f25,f29,f7
	ctx.f26.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 + ctx.f7.f64));
	// stfs f26,128(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f17,f24,f29,f5
	ctx.f17.f64 = double(float(ctx.f24.f64 * ctx.f29.f64 + ctx.f5.f64));
	// stfs f17,132(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f29,f23,f29,f4
	ctx.f29.f64 = double(float(ctx.f23.f64 * ctx.f29.f64 + ctx.f4.f64));
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f27,f25,f28,f3
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f28.f64 + ctx.f3.f64));
	// stfs f27,140(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f18,f24,f28,f2
	ctx.f18.f64 = double(float(ctx.f24.f64 * ctx.f28.f64 + ctx.f2.f64));
	// stfs f18,144(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f30,f23,f28,f1
	ctx.f30.f64 = double(float(ctx.f23.f64 * ctx.f28.f64 + ctx.f1.f64));
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f28,f25,f6,f0
	ctx.f28.f64 = double(float(ctx.f25.f64 * ctx.f6.f64 + ctx.f0.f64));
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f19,f24,f6,f13
	ctx.f19.f64 = double(float(ctx.f24.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f19,156(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f31,f23,f6,f12
	ctx.f31.f64 = double(float(ctx.f23.f64 * ctx.f6.f64 + ctx.f12.f64));
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83065D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83065e94
	if (ctx.cr6.eq) goto loc_83065E94;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83065D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83065D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,384(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f0,f27
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f11,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f0,f30
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f6,f0,f18
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f18.f64));
	// lfs f12,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f11,f18
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f18.f64));
	// lfs f10,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f13,f30
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f9,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f13,f18
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f18.f64));
	// lfs f8,380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f13,f27
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// lfs f7,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f30,f11,f30
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f13,f12,f28
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmadds f2,f10,f28,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f2.f64));
	// fmadds f5,f10,f31,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fmadds f6,f10,f19,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f19.f64 + ctx.f6.f64));
	// fmadds f10,f12,f19,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f19.f64 + ctx.f0.f64));
	// fmadds f3,f9,f31,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f3.f64));
	// fmadds f4,f9,f19,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f19.f64 + ctx.f4.f64));
	// fmadds f1,f9,f28,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmadds f9,f12,f31,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f30.f64));
	// lfs f0,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f0,f26,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fmadds f13,f8,f26,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f26.f64 + ctx.f2.f64));
	// fmadds f18,f8,f17,f6
	ctx.f18.f64 = double(float(ctx.f8.f64 * ctx.f17.f64 + ctx.f6.f64));
	// stfs f18,144(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f30,f8,f29,f5
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f5.f64));
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f31,f7,f29,f3
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f3.f64));
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f19,f7,f17,f4
	ctx.f19.f64 = double(float(ctx.f7.f64 * ctx.f17.f64 + ctx.f4.f64));
	// stfs f19,156(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f28,f7,f26,f1
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f26.f64 + ctx.f1.f64));
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f17,f17,f0,f10
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f17,132(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f29,f29,f0,f9
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f26,f11,f27,f12
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f12.f64));
	// stfs f26,128(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f27,f13
	ctx.f27.f64 = ctx.f13.f64;
	// stfs f27,140(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x83065e94
	goto loc_83065E94;
loc_83065E4C:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83065E5C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83065e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83065E5C;
	// lfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f31.f64 = double(temp.f32);
	// lfs f19,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f19.f64 = double(temp.f32);
	// lfs f28,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f18,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f18.f64 = double(temp.f32);
	// lfs f27,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f29.f64 = double(temp.f32);
	// lfs f17,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f17.f64 = double(temp.f32);
	// lfs f26,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f26.f64 = double(temp.f32);
loc_83065E94:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83066018
	if (ctx.cr6.eq) goto loc_83066018;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f25,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f25.f64 = double(temp.f32);
	// lfs f16,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f16.f64 = double(temp.f32);
	// lfs f22,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f7,f13,f3,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f21,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f5,f2,f13,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f20,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f4,f0,f13,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f3,f3,f10,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f1,f0,f10,f6
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f2,f2,f10,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmadds f0,f8,f12,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f13,f11,f12,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f12,f25,f12,f4
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f23,f8,f16,f3
	ctx.f23.f64 = double(float(ctx.f8.f64 * ctx.f16.f64 + ctx.f3.f64));
	// fmadds f25,f25,f16,f1
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f16.f64 + ctx.f1.f64));
	// fmadds f24,f11,f16,f2
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f16.f64 + ctx.f2.f64));
	// fadds f22,f0,f22
	ctx.f22.f64 = double(float(ctx.f0.f64 + ctx.f22.f64));
	// fadds f21,f21,f13
	ctx.f21.f64 = double(float(ctx.f21.f64 + ctx.f13.f64));
	// fadds f20,f20,f12
	ctx.f20.f64 = double(float(ctx.f20.f64 + ctx.f12.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83065F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83066054
	if (ctx.cr6.eq) goto loc_83066054;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83065F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83065F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,324(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f0,f21
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f21.f64));
	// lfs f12,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f13,f20
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f20.f64));
	// lfs f11,336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f12,f20
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f20.f64));
	// fmuls f3,f11,f24
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// lfs f10,348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f10,f24
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f24.f64));
	// lfs f8,332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f9,f25
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// lfs f7,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f9,f20,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f20.f64 + ctx.f5.f64));
	// fmadds f6,f8,f22,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f22.f64 + ctx.f6.f64));
	// fmadds f4,f7,f22,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f22.f64 + ctx.f4.f64));
	// fmadds f3,f13,f25,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f25.f64 + ctx.f3.f64));
	// fmadds f1,f12,f25,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f25.f64 + ctx.f1.f64));
	// lfs f13,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f13,f22,f5
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f22.f64 + ctx.f5.f64));
	// fmadds f2,f23,f13,f2
	ctx.f2.f64 = double(float(ctx.f23.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f12,f11,f21,f6
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f21.f64 + ctx.f6.f64));
	// lfs f11,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f5,f10,f21,f4
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f21.f64 + ctx.f4.f64));
	// lfs f6,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f8,f23,f3
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f23.f64 + ctx.f3.f64));
	// lfs f4,364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f25,f7,f23,f1
	ctx.f25.f64 = double(float(ctx.f7.f64 * ctx.f23.f64 + ctx.f1.f64));
	// fadds f22,f9,f11
	ctx.f22.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmadds f23,f0,f24,f2
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 + ctx.f2.f64));
	// fadds f21,f12,f6
	ctx.f21.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f20,f5,f4
	ctx.f20.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fmr f24,f13
	ctx.f24.f64 = ctx.f13.f64;
	// b 0x83066054
	goto loc_83066054;
loc_83066018:
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83066028:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83066028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83066028;
	// lfs f22,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f22.f64 = double(temp.f32);
	// lfs f25,444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	ctx.f25.f64 = double(temp.f32);
	// lfs f21,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f21.f64 = double(temp.f32);
	// lfs f24,432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f23.f64 = double(temp.f32);
	// lfs f20,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f20.f64 = double(temp.f32);
loc_83066054:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r9,9
	ctx.r9.s64 = 9;
	// lfs f0,6380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,6048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f23,f12
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f12.f64));
	// fmuls f10,f25,f12
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f12.f64));
	// fmuls f9,f24,f12
	ctx.f9.f64 = double(float(ctx.f24.f64 * ctx.f12.f64));
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fneg f6,f9
	ctx.f6.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fadds f25,f11,f22
	ctx.f25.f64 = double(float(ctx.f11.f64 + ctx.f22.f64));
	// fadds f24,f9,f21
	ctx.f24.f64 = double(float(ctx.f9.f64 + ctx.f21.f64));
	// fadds f23,f10,f20
	ctx.f23.f64 = double(float(ctx.f10.f64 + ctx.f20.f64));
	// fadds f22,f22,f8
	ctx.f22.f64 = double(float(ctx.f22.f64 + ctx.f8.f64));
	// fadds f20,f20,f7
	ctx.f20.f64 = double(float(ctx.f20.f64 + ctx.f7.f64));
	// fadds f21,f21,f6
	ctx.f21.f64 = double(float(ctx.f21.f64 + ctx.f6.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830660B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x830660b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830660B8;
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// fmuls f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// fmuls f12,f27,f0
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// ori r31,r11,255
	ctx.r31.u64 = ctx.r11.u64 | 255;
	// fmuls f11,f28,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// fmuls f10,f26,f0
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmuls f9,f27,f0
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f8,f28,f0
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fadds f7,f25,f13
	ctx.f7.f64 = double(float(ctx.f25.f64 + ctx.f13.f64));
	// stfs f7,240(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fadds f6,f24,f12
	ctx.f6.f64 = double(float(ctx.f24.f64 + ctx.f12.f64));
	// stfs f6,244(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fadds f5,f23,f11
	ctx.f5.f64 = double(float(ctx.f23.f64 + ctx.f11.f64));
	// stfs f5,248(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fadds f4,f10,f22
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f22.f64));
	// stfs f4,224(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f3,f9,f21
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f21.f64));
	// stfs f3,228(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fadds f2,f8,f20
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f20.f64));
	// stfs f2,232(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x831bfb50
	ctx.lr = 0x83066134;
	sub_831BFB50(ctx, base);
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f26
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmuls f13,f27,f1
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f1.f64));
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// fmuls f12,f28,f1
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// fmuls f11,f1,f26
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f10,f27,f1
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f1.f64));
	// fmuls f9,f28,f1
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// fsubs f8,f25,f0
	ctx.f8.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// stfs f8,256(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fsubs f7,f24,f13
	ctx.f7.f64 = double(float(ctx.f24.f64 - ctx.f13.f64));
	// stfs f7,260(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fsubs f6,f23,f12
	ctx.f6.f64 = double(float(ctx.f23.f64 - ctx.f12.f64));
	// stfs f6,264(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fsubs f5,f22,f11
	ctx.f5.f64 = double(float(ctx.f22.f64 - ctx.f11.f64));
	// stfs f5,304(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fsubs f4,f21,f10
	ctx.f4.f64 = double(float(ctx.f21.f64 - ctx.f10.f64));
	// stfs f4,308(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fsubs f3,f20,f9
	ctx.f3.f64 = double(float(ctx.f20.f64 - ctx.f9.f64));
	// stfs f3,312(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// bl 0x831bfb50
	ctx.lr = 0x83066194;
	sub_831BFB50(ctx, base);
	// lfs f2,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f29,f2
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f2.f64));
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmuls f0,f30,f2
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f2.f64));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// fmuls f13,f31,f2
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f2.f64));
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// fmuls f12,f29,f2
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f2.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f11,f30,f2
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f2.f64));
	// fmuls f10,f31,f2
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f2.f64));
	// fadds f9,f1,f25
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f25.f64));
	// stfs f9,192(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f8,f0,f24
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// stfs f8,196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f7,f13,f23
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f23.f64));
	// stfs f7,200(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f6,f12,f22
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f22.f64));
	// stfs f6,288(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fadds f5,f11,f21
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f21.f64));
	// stfs f5,292(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fadds f4,f10,f20
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f20.f64));
	// stfs f4,296(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// bl 0x831bfb50
	ctx.lr = 0x830661F4;
	sub_831BFB50(ctx, base);
	// lfs f3,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmuls f2,f29,f3
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f3.f64));
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// fmuls f1,f30,f3
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f3.f64));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f0,f31,f3
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f3.f64));
	// fmuls f13,f29,f3
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f3.f64));
	// fmuls f12,f30,f3
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f3.f64));
	// fmuls f11,f31,f3
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f3.f64));
	// fsubs f10,f25,f2
	ctx.f10.f64 = double(float(ctx.f25.f64 - ctx.f2.f64));
	// stfs f10,272(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fsubs f9,f24,f1
	ctx.f9.f64 = double(float(ctx.f24.f64 - ctx.f1.f64));
	// stfs f9,276(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fsubs f8,f23,f0
	ctx.f8.f64 = double(float(ctx.f23.f64 - ctx.f0.f64));
	// stfs f8,280(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fsubs f7,f22,f13
	ctx.f7.f64 = double(float(ctx.f22.f64 - ctx.f13.f64));
	// stfs f7,208(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fsubs f6,f21,f12
	ctx.f6.f64 = double(float(ctx.f21.f64 - ctx.f12.f64));
	// stfs f6,212(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fsubs f5,f20,f11
	ctx.f5.f64 = double(float(ctx.f20.f64 - ctx.f11.f64));
	// stfs f5,216(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x831bfb50
	ctx.lr = 0x83066254;
	sub_831BFB50(ctx, base);
	// fneg f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// fneg f13,f27
	ctx.f13.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fneg f12,f28
	ctx.f12.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f16,f17
	ctx.f16.u64 = ctx.f17.u64 ^ 0x8000000000000000;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fneg f15,f18
	ctx.f15.u64 = ctx.f18.u64 ^ 0x8000000000000000;
	// stfs f22,116(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f14,f19
	ctx.f14.u64 = ctx.f19.u64 ^ 0x8000000000000000;
	// stfs f21,120(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f20,124(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stfs f16,80(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f15,92(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f14,104(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x831c03d8
	ctx.lr = 0x830662C4;
	sub_831C03D8(ctx, base);
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lfs f0,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lfs f17,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f17.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f18,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f18.f64 = double(temp.f32);
	// lfs f19,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f19.f64 = double(temp.f32);
	// stfs f17,80(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f18,92(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f19,104(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f25,116(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f24,120(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f23,124(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831c03d8
	ctx.lr = 0x83066328;
	sub_831C03D8(ctx, base);
	// stfs f29,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f22,116(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f21,120(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f20,124(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f16,80(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f15,92(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f14,104(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f1,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831c03d8
	ctx.lr = 0x83066374;
	sub_831C03D8(ctx, base);
	// stfs f17,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f18,92(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stfs f19,104(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f25,116(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f24,120(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f23,124(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f1,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831c03d8
	ctx.lr = 0x830663C0;
	sub_831C03D8(ctx, base);
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f26,84(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f27,96(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stfs f28,108(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f17,88(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f18,100(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f19,112(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f22,116(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f21,120(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f20,124(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f1,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831c03d8
	ctx.lr = 0x8306640C;
	sub_831C03D8(ctx, base);
	// stfs f25,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f24,120(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f23,124(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c03d8
	ctx.lr = 0x83066434;
	sub_831C03D8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6afc
	ctx.lr = 0x83066440;
	__restfpr_14(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83066444"))) PPC_WEAK_FUNC(sub_83066444);
PPC_FUNC_IMPL(__imp__sub_83066444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83066448"))) PPC_WEAK_FUNC(sub_83066448);
PPC_FUNC_IMPL(__imp__sub_83066448) {
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
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306646C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830664dc
	if (ctx.cr6.eq) goto loc_830664DC;
	// addi r8,r31,-72
	ctx.r8.s64 = ctx.r31.s64 + -72;
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r8,12
	ctx.r11.s64 = ctx.r8.s64 + 12;
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83066494:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83066494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83066494;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stb r9,372(r10)
	PPC_STORE_U8(ctx.r10.u32 + 372, ctx.r9.u8);
	// beq cr6,0x830664fc
	if (ctx.cr6.eq) goto loc_830664FC;
	// bl 0x82d5ed58
	ctx.lr = 0x830664D8;
	sub_82D5ED58(ctx, base);
	// b 0x830664fc
	goto loc_830664FC;
loc_830664DC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24848
	ctx.r4.s64 = ctx.r11.s64 + 24848;
	// li r5,408
	ctx.r5.s64 = 408;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x830664FC;
	sub_82D17988(ctx, base);
loc_830664FC:
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

__attribute__((alias("__imp__sub_83066514"))) PPC_WEAK_FUNC(sub_83066514);
PPC_FUNC_IMPL(__imp__sub_83066514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83066518"))) PPC_WEAK_FUNC(sub_83066518);
PPC_FUNC_IMPL(__imp__sub_83066518) {
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
	// bl 0x83064410
	ctx.lr = 0x83066538;
	sub_83064410(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,28204
	ctx.r7.s64 = ctx.r10.s64 + 28204;
	// addi r6,r9,28356
	ctx.r6.s64 = ctx.r9.s64 + 28356;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r5,r8,28316
	ctx.r5.s64 = ctx.r8.s64 + 28316;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lfs f0,6048(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
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

__attribute__((alias("__imp__sub_830665C0"))) PPC_WEAK_FUNC(sub_830665C0);
PPC_FUNC_IMPL(__imp__sub_830665C0) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,28356
	ctx.r9.s64 = ctx.r11.s64 + 28356;
	// addi r8,r10,28316
	ctx.r8.s64 = ctx.r10.s64 + 28316;
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// beq cr6,0x8306661c
	if (ctx.cr6.eq) goto loc_8306661C;
	// bl 0x82d5f3b8
	ctx.lr = 0x83066600;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83066614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
loc_8306661C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,27832
	ctx.r9.s64 = ctx.r11.s64 + 27832;
	// addi r8,r10,27868
	ctx.r8.s64 = ctx.r10.s64 + 27868;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82ffca80
	ctx.lr = 0x8306663C;
	sub_82FFCA80(ctx, base);
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

__attribute__((alias("__imp__sub_83066654"))) PPC_WEAK_FUNC(sub_83066654);
PPC_FUNC_IMPL(__imp__sub_83066654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83066658"))) PPC_WEAK_FUNC(sub_83066658);
PPC_FUNC_IMPL(__imp__sub_83066658) {
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
	// bl 0x82cb6ab0
	ctx.lr = 0x83066670;
	__savefpr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830668bc
	if (ctx.cr6.eq) goto loc_830668BC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lfs f10,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f13,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f26,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f26.f64 = double(temp.f32);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f28,f10,f9
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f31,f11,f8
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f29,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f27,f10,f8
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f26,f9
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// lfs f25,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f8,f26,f8
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// lfs f24,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f23,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f5,f2,f13,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f19,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f4,f0,f13,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f4.f64));
	// lfs f30,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f7,f13,f3,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f21,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f17,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f6,f26,f6
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f6.f64));
	// lfs f26,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f1,f25,f3,f1
	ctx.f1.f64 = double(float(ctx.f25.f64 * ctx.f3.f64 + ctx.f1.f64));
	// lfs f18,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f28,f24,f3,f28
	ctx.f28.f64 = double(float(ctx.f24.f64 * ctx.f3.f64 + ctx.f28.f64));
	// lfs f16,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f16.f64 = double(temp.f32);
	// fmadds f9,f23,f3,f9
	ctx.f9.f64 = double(float(ctx.f23.f64 * ctx.f3.f64 + ctx.f9.f64));
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f25,f2,f31
	ctx.f31.f64 = double(float(ctx.f25.f64 * ctx.f2.f64 + ctx.f31.f64));
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmadds f27,f24,f2,f27
	ctx.f27.f64 = double(float(ctx.f24.f64 * ctx.f2.f64 + ctx.f27.f64));
	// fmadds f5,f29,f12,f5
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f3,f23,f2,f8
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f4,f19,f12,f4
	ctx.f4.f64 = double(float(ctx.f19.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f7,f30,f12,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f2,f25,f0,f11
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f12,f24,f0,f10
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f23,f0,f6
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f24,f17,f30,f28
	ctx.f24.f64 = double(float(ctx.f17.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f23,f18,f30,f1
	ctx.f23.f64 = double(float(ctx.f18.f64 * ctx.f30.f64 + ctx.f1.f64));
	// fmadds f25,f16,f30,f9
	ctx.f25.f64 = double(float(ctx.f16.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fadds f20,f21,f5
	ctx.f20.f64 = double(float(ctx.f21.f64 + ctx.f5.f64));
	// stfs f20,84(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f27,f17,f29,f27
	ctx.f27.f64 = double(float(ctx.f17.f64 * ctx.f29.f64 + ctx.f27.f64));
	// fadds f21,f26,f4
	ctx.f21.f64 = double(float(ctx.f26.f64 + ctx.f4.f64));
	// fmadds f26,f18,f29,f31
	ctx.f26.f64 = double(float(ctx.f18.f64 * ctx.f29.f64 + ctx.f31.f64));
	// fmadds f28,f16,f29,f3
	ctx.f28.f64 = double(float(ctx.f16.f64 * ctx.f29.f64 + ctx.f3.f64));
	// fadds f22,f13,f7
	ctx.f22.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fmadds f29,f18,f19,f2
	ctx.f29.f64 = double(float(ctx.f18.f64 * ctx.f19.f64 + ctx.f2.f64));
	// fmadds f30,f17,f19,f12
	ctx.f30.f64 = double(float(ctx.f17.f64 * ctx.f19.f64 + ctx.f12.f64));
	// fmadds f31,f16,f19,f11
	ctx.f31.f64 = double(float(ctx.f16.f64 * ctx.f19.f64 + ctx.f11.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830667A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83066914
	if (ctx.cr6.eq) goto loc_83066914;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830667C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x830667DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f12,f21
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f21.f64));
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f13,f20
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f20.f64));
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f0,f20
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f11,f25
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// fmuls f19,f8,f25
	ctx.f19.f64 = double(float(ctx.f8.f64 * ctx.f25.f64));
	// lfs f9,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f20,f11,f23
	ctx.f20.f64 = double(float(ctx.f11.f64 * ctx.f23.f64));
	// fmuls f18,f9,f26
	ctx.f18.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f25,f25,f7
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f7.f64));
	// lfs f16,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f17,f9,f27
	ctx.f17.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fmuls f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// fmadds f3,f8,f22,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f22.f64 + ctx.f3.f64));
	// fmadds f4,f11,f22,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f22.f64 + ctx.f4.f64));
	// fmadds f5,f7,f22,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f22.f64 + ctx.f5.f64));
	// fmadds f2,f13,f28,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f2.f64));
	// fmuls f22,f6,f30
	ctx.f22.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f15,f0,f26
	ctx.f15.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmadds f19,f9,f28,f19
	ctx.f19.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f19.f64));
	// fmadds f14,f10,f29,f20
	ctx.f14.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f20.f64));
	// fmadds f20,f12,f29,f18
	ctx.f20.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f18.f64));
	// fmadds f30,f12,f30,f17
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f17.f64));
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f3,f9,f16,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f16.f64 + ctx.f3.f64));
	// lfs f18,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f4,f10,f21,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f21.f64 + ctx.f4.f64));
	// fmadds f9,f0,f28,f25
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f25.f64));
	// fmadds f28,f10,f31,f2
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f2.f64));
	// fmadds f2,f0,f27,f22
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f22.f64));
	// fmadds f1,f13,f27,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f1.f64));
	// fmadds f5,f21,f6,f5
	ctx.f5.f64 = double(float(ctx.f21.f64 * ctx.f6.f64 + ctx.f5.f64));
	// lfs f21,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f17,f6,f29,f15
	ctx.f17.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f15.f64));
	// fmadds f0,f12,f31,f19
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f19.f64));
	// fmadds f29,f8,f23,f20
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f23.f64 + ctx.f20.f64));
	// fmadds f30,f8,f24,f30
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f24.f64 + ctx.f30.f64));
	// fadds f20,f7,f4
	ctx.f20.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmadds f25,f31,f6,f9
	ctx.f25.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fadds f21,f21,f3
	ctx.f21.f64 = double(float(ctx.f21.f64 + ctx.f3.f64));
	// fmadds f26,f13,f26,f14
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f14.f64));
	// fmadds f27,f11,f24,f1
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f24.f64 + ctx.f1.f64));
	// fadds f22,f18,f5
	ctx.f22.f64 = double(float(ctx.f18.f64 + ctx.f5.f64));
	// fmadds f23,f7,f23,f17
	ctx.f23.f64 = double(float(ctx.f7.f64 * ctx.f23.f64 + ctx.f17.f64));
	// fmadds f24,f24,f7,f2
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x83066914
	goto loc_83066914;
loc_830668BC:
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830668D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x830668d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830668D0;
	// lfs f22,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f22.f64 = double(temp.f32);
	// lfs f31,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f31.f64 = double(temp.f32);
	// lfs f20,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f20.f64 = double(temp.f32);
	// lfs f30,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f28.f64 = double(temp.f32);
	// lfs f21,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f21.f64 = double(temp.f32);
	// lfs f27,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f23.f64 = double(temp.f32);
loc_83066914:
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 + 112;
	// lfs f0,112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// lfs f10,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// lfs f9,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f11,f8,f7
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fadds f9,f5,f7
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f7,f4,f10
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f6,f3,f10
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f10,f4,f23
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f23.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f9,f4,f26
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// fmuls f6,f29,f4
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f4.f64));
	// fmuls f12,f5,f24
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f24.f64));
	// fmuls f11,f5,f27
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// fmuls f7,f5,f30
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fmuls f2,f8,f24
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f24.f64));
	// fmuls f5,f29,f3
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f3.f64));
	// fmuls f13,f8,f27
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fmuls f4,f0,f25
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f29,f0,f28
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f7,f7
	ctx.f7.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fmadds f2,f1,f25,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f25.f64 + ctx.f2.f64));
	// fmadds f8,f8,f30,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fmadds f13,f1,f28,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fabs f6,f6
	ctx.f6.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fabs f5,f4
	ctx.f5.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f4,f29
	ctx.f4.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmadds f2,f3,f23,f2
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f23.f64 + ctx.f2.f64));
	// fmadds f8,f1,f31,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fmadds f13,f3,f26,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fadds f10,f7,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fadds f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// fadds f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// fadds f7,f2,f22
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f22.f64));
	// fadds f2,f21,f8
	ctx.f2.f64 = double(float(ctx.f21.f64 + ctx.f8.f64));
	// fadds f6,f20,f13
	ctx.f6.f64 = double(float(ctx.f20.f64 + ctx.f13.f64));
	// fadds f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fsubs f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f12,f5,f7
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fsubs f0,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f11,f6,f4
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fadds f10,f2,f3
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6afc
	ctx.lr = 0x83066A78;
	__restfpr_14(ctx, base);
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

__attribute__((alias("__imp__sub_83066A8C"))) PPC_WEAK_FUNC(sub_83066A8C);
PPC_FUNC_IMPL(__imp__sub_83066A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83066A90"))) PPC_WEAK_FUNC(sub_83066A90);
PPC_FUNC_IMPL(__imp__sub_83066A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83066A98;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ab4
	ctx.lr = 0x83066AA0;
	__savefpr_15(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83066cdc
	if (ctx.cr6.eq) goto loc_83066CDC;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f30,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// lfs f5,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f27,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f31,f5,f13
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f28,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f4,f13
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f19,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f10,f9,f2,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f10.f64));
	// lfs f7,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f8,f11,f9,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f8.f64));
	// lfs f18,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f6,f30,f9,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f9.f64 + ctx.f6.f64));
	// lfs f26,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lfs f25,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f17,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f16,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f12,f27,f12
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// lfs f27,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f3,f26,f2,f3
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f2.f64 + ctx.f3.f64));
	// lfs f15,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f15.f64 = double(temp.f32);
	// fmadds f1,f9,f2,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f1.f64));
	// lfs f22,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f10,f28,f7,f10
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f7.f64 + ctx.f10.f64));
	// lfs f20,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f8,f19,f7,f8
	ctx.f8.f64 = double(float(ctx.f19.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f7,f18,f7,f6
	ctx.f7.f64 = double(float(ctx.f18.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f6,f25,f2,f0
	ctx.f6.f64 = double(float(ctx.f25.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f2,f25,f11,f13
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f31,f26,f11,f31
	ctx.f31.f64 = double(float(ctx.f26.f64 * ctx.f11.f64 + ctx.f31.f64));
	// fmadds f29,f9,f11,f29
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f29.f64));
	// fmadds f0,f26,f30,f5
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fmadds f12,f25,f30,f12
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmadds f13,f9,f30,f4
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fmadds f23,f17,f28,f3
	ctx.f23.f64 = double(float(ctx.f17.f64 * ctx.f28.f64 + ctx.f3.f64));
	// fadds f21,f27,f8
	ctx.f21.f64 = double(float(ctx.f27.f64 + ctx.f8.f64));
	// fmadds f24,f16,f28,f1
	ctx.f24.f64 = double(float(ctx.f16.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmadds f25,f15,f28,f6
	ctx.f25.f64 = double(float(ctx.f15.f64 * ctx.f28.f64 + ctx.f6.f64));
	// fadds f22,f22,f10
	ctx.f22.f64 = double(float(ctx.f22.f64 + ctx.f10.f64));
	// fmadds f26,f17,f19,f31
	ctx.f26.f64 = double(float(ctx.f17.f64 * ctx.f19.f64 + ctx.f31.f64));
	// fmadds f27,f16,f19,f29
	ctx.f27.f64 = double(float(ctx.f16.f64 * ctx.f19.f64 + ctx.f29.f64));
	// fadds f20,f20,f7
	ctx.f20.f64 = double(float(ctx.f20.f64 + ctx.f7.f64));
	// fmadds f28,f15,f19,f2
	ctx.f28.f64 = double(float(ctx.f15.f64 * ctx.f19.f64 + ctx.f2.f64));
	// fmadds f29,f17,f18,f0
	ctx.f29.f64 = double(float(ctx.f17.f64 * ctx.f18.f64 + ctx.f0.f64));
	// fmadds f30,f16,f18,f13
	ctx.f30.f64 = double(float(ctx.f16.f64 * ctx.f18.f64 + ctx.f13.f64));
	// fmadds f31,f15,f18,f12
	ctx.f31.f64 = double(float(ctx.f15.f64 * ctx.f18.f64 + ctx.f12.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83066BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83066d34
	if (ctx.cr6.eq) goto loc_83066D34;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83066BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83066C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f0,f20
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f13,f20
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f20.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f12,f20
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f20.f64));
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f20,f11,f27
	ctx.f20.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmuls f18,f10,f27
	ctx.f18.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f17,f10,f28
	ctx.f17.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f13,f29
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f19,f11,f28
	ctx.f19.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmadds f5,f9,f22,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f22.f64 + ctx.f5.f64));
	// fmadds f4,f8,f22,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f22.f64 + ctx.f4.f64));
	// fmadds f3,f7,f22,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f22.f64 + ctx.f3.f64));
	// fmuls f22,f0,f30
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmadds f20,f13,f30,f20
	ctx.f20.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f20.f64));
	// fmadds f30,f12,f30,f18
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f18.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmadds f12,f12,f31,f17
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f17.f64));
	// fmadds f2,f8,f23,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f23.f64 + ctx.f2.f64));
	// fmadds f13,f13,f31,f19
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f19.f64));
	// lfs f19,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f1,f7,f23,f1
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f23.f64 + ctx.f1.f64));
	// lfs f18,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f23,f9,f23,f29
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f23.f64 + ctx.f29.f64));
	// lfs f17,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f5,f6,f21,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f21.f64 + ctx.f5.f64));
	// fmadds f16,f24,f9,f22
	ctx.f16.f64 = double(float(ctx.f24.f64 * ctx.f9.f64 + ctx.f22.f64));
	// fmadds f3,f10,f21,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f21.f64 + ctx.f3.f64));
	// fmadds f4,f11,f21,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f21.f64 + ctx.f4.f64));
	// fmadds f9,f25,f9,f0
	ctx.f9.f64 = double(float(ctx.f25.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f31,f7,f25,f12
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f25.f64 + ctx.f12.f64));
	// fmadds f0,f8,f24,f20
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f24.f64 + ctx.f20.f64));
	// fmadds f13,f8,f25,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f25.f64 + ctx.f13.f64));
	// fmadds f12,f11,f26,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f2.f64));
	// fmadds f30,f7,f24,f30
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f24.f64 + ctx.f30.f64));
	// fmadds f29,f10,f26,f1
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f1.f64));
	// fmadds f23,f6,f26,f23
	ctx.f23.f64 = double(float(ctx.f6.f64 * ctx.f26.f64 + ctx.f23.f64));
	// fmadds f24,f6,f27,f16
	ctx.f24.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 + ctx.f16.f64));
	// fadds f22,f19,f5
	ctx.f22.f64 = double(float(ctx.f19.f64 + ctx.f5.f64));
	// fmadds f25,f6,f28,f9
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f9.f64));
	// fadds f21,f18,f4
	ctx.f21.f64 = double(float(ctx.f18.f64 + ctx.f4.f64));
	// fadds f20,f17,f3
	ctx.f20.f64 = double(float(ctx.f17.f64 + ctx.f3.f64));
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// fmr f26,f12
	ctx.f26.f64 = ctx.f12.f64;
	// b 0x83066d34
	goto loc_83066D34;
loc_83066CDC:
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83066CF0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83066cf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83066CF0;
	// lfs f22,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f22.f64 = double(temp.f32);
	// lfs f31,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f31.f64 = double(temp.f32);
	// lfs f21,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f21.f64 = double(temp.f32);
	// lfs f30,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f28.f64 = double(temp.f32);
	// lfs f20,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f20.f64 = double(temp.f32);
	// lfs f27,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f23.f64 = double(temp.f32);
loc_83066D34:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83066D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83066dbc
	if (!ctx.cr6.eq) goto loc_83066DBC;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83066d80
	if (ctx.cr6.gt) goto loc_83066D80;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83066d84
	if (!ctx.cr6.gt) goto loc_83066D84;
loc_83066D80:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_83066D84:
	// bl 0x82d5f3b8
	ctx.lr = 0x83066D88;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83066DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83066db4
	if (ctx.cr6.eq) goto loc_83066DB4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// b 0x83066db8
	goto loc_83066DB8;
loc_83066DB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83066DB8:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_83066DBC:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83066DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83066e54
	if (ctx.cr6.eq) goto loc_83066E54;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_83066DE8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f27
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f24
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// fmadds f8,f12,f31,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f7,f12,f28,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmadds f6,f12,f25,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f25.f64 + ctx.f9.f64));
	// fmadds f5,f29,f10,f8
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f5,8(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f4,f26,f10,f7
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f3,f23,f10,f6
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f10.f64 + ctx.f6.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// fmuls f1,f5,f20
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f20.f64));
	// fmadds f0,f4,f21,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f21.f64 + ctx.f1.f64));
	// fmadds f13,f22,f3,f0
	ctx.f13.f64 = double(float(ctx.f22.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fsubs f12,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// bne 0x83066de8
	if (!ctx.cr0.eq) goto loc_83066DE8;
loc_83066E54:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
	// lfs f0,-18268(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r9,348(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83066E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
	// lwz r7,348(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83066E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r5,r29,32
	ctx.r5.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// beq cr6,0x83066f18
	if (ctx.cr6.eq) goto loc_83066F18;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_83066EDC:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f7,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,92(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f0,f6,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,96(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x83066edc
	if (!ctx.cr0.eq) goto loc_83066EDC;
loc_83066F18:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f9,f13,f28
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f13,f25
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fmadds f8,f10,f29,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f6,f0,f27,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f9.f64));
	// fmadds f7,f10,f23,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f23.f64 + ctx.f11.f64));
	// fmadds f5,f13,f31,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fmadds f3,f10,f26,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f6.f64));
	// fmadds f4,f0,f24,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 + ctx.f7.f64));
	// fadds f2,f5,f20
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f20.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fadds f0,f3,f21
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f21.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fadds f1,f22,f4
	ctx.f1.f64 = double(float(ctx.f22.f64 + ctx.f4.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83066F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83066fd0
	if (ctx.cr6.eq) goto loc_83066FD0;
loc_83066F84:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f6,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f11,f10,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f4,f8,f9,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fadds f0,f4,f7
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x83066fc8
	if (!ctx.cr6.gt) goto loc_83066FC8;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
loc_83066FC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83066f84
	if (!ctx.cr6.eq) goto loc_83066F84;
loc_83066FD0:
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b00
	ctx.lr = 0x83066FE8;
	__restfpr_15(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83066FEC"))) PPC_WEAK_FUNC(sub_83066FEC);
PPC_FUNC_IMPL(__imp__sub_83066FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83066FF0"))) PPC_WEAK_FUNC(sub_83066FF0);
PPC_FUNC_IMPL(__imp__sub_83066FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x83066FF8;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6ab8
	ctx.lr = 0x83067000;
	__savefpr_16(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addic. r28,r11,156
	ctx.xer.ca = ctx.r11.u32 > 4294967139;
	ctx.r28.s64 = ctx.r11.s64 + 156;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x830673e0
	if (ctx.cr0.eq) goto loc_830673E0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306724c
	if (ctx.cr6.eq) goto loc_8306724C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f26,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f26.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f28,f10,f9
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f31,f11,f8
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f25,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f27,f10,f8
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f24,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f9,f26,f9
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// lfs f23,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f8,f26,f8
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f19,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f4,f0,f13,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f4.f64));
	// lfs f30,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f7,f13,f3,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f29,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f5,f2,f13,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f17,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f18,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f6,f26,f6
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f6.f64));
	// lfs f26,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f1,f25,f3,f1
	ctx.f1.f64 = double(float(ctx.f25.f64 * ctx.f3.f64 + ctx.f1.f64));
	// lfs f16,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f16.f64 = double(temp.f32);
	// fmadds f28,f24,f3,f28
	ctx.f28.f64 = double(float(ctx.f24.f64 * ctx.f3.f64 + ctx.f28.f64));
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f23,f3,f9
	ctx.f9.f64 = double(float(ctx.f23.f64 * ctx.f3.f64 + ctx.f9.f64));
	// lfs f21,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f31,f25,f2,f31
	ctx.f31.f64 = double(float(ctx.f25.f64 * ctx.f2.f64 + ctx.f31.f64));
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmadds f27,f24,f2,f27
	ctx.f27.f64 = double(float(ctx.f24.f64 * ctx.f2.f64 + ctx.f27.f64));
	// fmadds f3,f23,f2,f8
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f4,f19,f12,f4
	ctx.f4.f64 = double(float(ctx.f19.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f7,f30,f12,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f5,f29,f12,f5
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f2,f25,f0,f11
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f12,f24,f0,f10
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f23,f0,f6
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f24,f17,f30,f28
	ctx.f24.f64 = double(float(ctx.f17.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f23,f18,f30,f1
	ctx.f23.f64 = double(float(ctx.f18.f64 * ctx.f30.f64 + ctx.f1.f64));
	// fmadds f25,f16,f30,f9
	ctx.f25.f64 = double(float(ctx.f16.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fmadds f27,f17,f29,f27
	ctx.f27.f64 = double(float(ctx.f17.f64 * ctx.f29.f64 + ctx.f27.f64));
	// fadds f20,f26,f4
	ctx.f20.f64 = double(float(ctx.f26.f64 + ctx.f4.f64));
	// fmadds f26,f18,f29,f31
	ctx.f26.f64 = double(float(ctx.f18.f64 * ctx.f29.f64 + ctx.f31.f64));
	// fmadds f28,f16,f29,f3
	ctx.f28.f64 = double(float(ctx.f16.f64 * ctx.f29.f64 + ctx.f3.f64));
	// fadds f22,f13,f7
	ctx.f22.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f21,f21,f5
	ctx.f21.f64 = double(float(ctx.f21.f64 + ctx.f5.f64));
	// fmadds f29,f18,f19,f2
	ctx.f29.f64 = double(float(ctx.f18.f64 * ctx.f19.f64 + ctx.f2.f64));
	// fmadds f30,f17,f19,f12
	ctx.f30.f64 = double(float(ctx.f17.f64 * ctx.f19.f64 + ctx.f12.f64));
	// fmadds f31,f16,f19,f11
	ctx.f31.f64 = double(float(ctx.f16.f64 * ctx.f19.f64 + ctx.f11.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306713C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830672a4
	if (ctx.cr6.eq) goto loc_830672A4;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83067158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83067174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f0,f21
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f21.f64));
	// lfs f12,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f13,f21
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f21.f64));
	// fmuls f3,f12,f21
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f21.f64));
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f13,f26
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f13,f27
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f21,f12,f26
	ctx.f21.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f19,f12,f27
	ctx.f19.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmuls f26,f0,f26
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmadds f5,f11,f20,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f20.f64 + ctx.f5.f64));
	// fmadds f4,f10,f20,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f20.f64 + ctx.f4.f64));
	// fmadds f3,f9,f20,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f20.f64 + ctx.f3.f64));
	// fmuls f20,f0,f27
	ctx.f20.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f18,f0,f28
	ctx.f18.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmadds f0,f10,f31,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f2,f10,f29,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f2.f64));
	// fmadds f1,f10,f30,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f1.f64));
	// fmadds f13,f9,f29,f21
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f21.f64));
	// fmadds f10,f9,f30,f19
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f19.f64));
	// lfs f21,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f9,f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f12.f64));
	// lfs f19,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f16,f11,f29,f26
	ctx.f16.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f26.f64));
	// lfs f17,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f5,f8,f22,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f22.f64 + ctx.f5.f64));
	// fmadds f4,f7,f22,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f22.f64 + ctx.f4.f64));
	// fmadds f3,f6,f22,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f22.f64 + ctx.f3.f64));
	// fmadds f28,f7,f25,f0
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f25.f64 + ctx.f0.f64));
	// fmadds f26,f7,f23,f2
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f23.f64 + ctx.f2.f64));
	// fmadds f27,f7,f24,f1
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f24.f64 + ctx.f1.f64));
	// fmadds f29,f6,f23,f13
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f23.f64 + ctx.f13.f64));
	// fmadds f2,f11,f30,f20
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f20.f64));
	// fmadds f13,f6,f24,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f24.f64 + ctx.f10.f64));
	// fmadds f12,f6,f25,f9
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f25.f64 + ctx.f9.f64));
	// fmadds f1,f11,f31,f18
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f18.f64));
	// fadds f22,f21,f5
	ctx.f22.f64 = double(float(ctx.f21.f64 + ctx.f5.f64));
	// fadds f21,f19,f4
	ctx.f21.f64 = double(float(ctx.f19.f64 + ctx.f4.f64));
	// fadds f20,f17,f3
	ctx.f20.f64 = double(float(ctx.f17.f64 + ctx.f3.f64));
	// fmadds f23,f8,f23,f16
	ctx.f23.f64 = double(float(ctx.f8.f64 * ctx.f23.f64 + ctx.f16.f64));
	// fmadds f24,f24,f8,f2
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
	// fmadds f25,f8,f25,f1
	ctx.f25.f64 = double(float(ctx.f8.f64 * ctx.f25.f64 + ctx.f1.f64));
	// b 0x830672a4
	goto loc_830672A4;
loc_8306724C:
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83067260:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83067260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83067260;
	// lfs f22,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f22.f64 = double(temp.f32);
	// lfs f31,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f21,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f21.f64 = double(temp.f32);
	// lfs f30,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f28.f64 = double(temp.f32);
	// lfs f20,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f20.f64 = double(temp.f32);
	// lfs f27,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f23.f64 = double(temp.f32);
loc_830672A4:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830673e0
	if (ctx.cr6.eq) goto loc_830673E0;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r25,r11,32832
	ctx.r25.u64 = ctx.r11.u64 | 32832;
loc_830672C0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lhz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830673d4
	if (ctx.cr6.eq) goto loc_830673D4;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subfic r26,r27,1
	ctx.xer.ca = ctx.r27.u32 <= 1;
	ctx.r26.s64 = 1 - ctx.r27.s64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_830672E4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r8,r26,r31
	ctx.r8.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divwu r7,r8,r29
	ctx.r7.u32 = ctx.r8.u32 / ctx.r29.u32;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r4,r7,r29
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r4.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f25
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f11,f26,f13
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f31,f0
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f8,f24,f10,f12
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f7,f28,f0,f11
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f6,f29,f13,f9
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f5,f13,f23,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f23.f64 + ctx.f8.f64));
	// fmadds f4,f27,f10,f7
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f3,f30,f10,f6
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fadds f2,f22,f5
	ctx.f2.f64 = double(float(ctx.f22.f64 + ctx.f5.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f1,f21,f4
	ctx.f1.f64 = double(float(ctx.f21.f64 + ctx.f4.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f20,f3
	ctx.f0.f64 = double(float(ctx.f20.f64 + ctx.f3.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f25
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fmuls f8,f31,f13
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f10,f26,f11
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f11.f64));
	// fmadds f6,f24,f12,f9
	ctx.f6.f64 = double(float(ctx.f24.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f29,f11,f8
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f7,f28,f13,f10
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f3,f11,f23,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f23.f64 + ctx.f6.f64));
	// fmadds f2,f30,f12,f5
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f4,f27,f12,f7
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fadds f0,f22,f3
	ctx.f0.f64 = double(float(ctx.f22.f64 + ctx.f3.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f20,f2
	ctx.f13.f64 = double(float(ctx.f20.f64 + ctx.f2.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f1,f21,f4
	ctx.f1.f64 = double(float(ctx.f21.f64 + ctx.f4.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x831bfb50
	ctx.lr = 0x830673C8;
	sub_831BFB50(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x830672e4
	if (!ctx.cr0.eq) goto loc_830672E4;
loc_830673D4:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r23,r23,36
	ctx.r23.s64 = ctx.r23.s64 + 36;
	// bne 0x830672c0
	if (!ctx.cr0.eq) goto loc_830672C0;
loc_830673E0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6b04
	ctx.lr = 0x830673EC;
	__restfpr_16(ctx, base);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830673F0"))) PPC_WEAK_FUNC(sub_830673F0);
PPC_FUNC_IMPL(__imp__sub_830673F0) {
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
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// bl 0x82d5ecb0
	ctx.lr = 0x83067414;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83067484
	if (ctx.cr6.eq) goto loc_83067484;
	// addi r8,r31,-72
	ctx.r8.s64 = ctx.r31.s64 + -72;
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r8,12
	ctx.r11.s64 = ctx.r8.s64 + 12;
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8306743C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8306743c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8306743C;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stb r9,372(r10)
	PPC_STORE_U8(ctx.r10.u32 + 372, ctx.r9.u8);
	// beq cr6,0x830674a4
	if (ctx.cr6.eq) goto loc_830674A4;
	// bl 0x82d5ed58
	ctx.lr = 0x83067480;
	sub_82D5ED58(ctx, base);
	// b 0x830674a4
	goto loc_830674A4;
loc_83067484:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,26288
	ctx.r4.s64 = ctx.r11.s64 + 26288;
	// li r5,657
	ctx.r5.s64 = 657;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x830674A4;
	sub_82D17988(ctx, base);
loc_830674A4:
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

__attribute__((alias("__imp__sub_830674BC"))) PPC_WEAK_FUNC(sub_830674BC);
PPC_FUNC_IMPL(__imp__sub_830674BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830674C0"))) PPC_WEAK_FUNC(sub_830674C0);
PPC_FUNC_IMPL(__imp__sub_830674C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x830674C8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ad0
	ctx.lr = 0x830674D0;
	__savefpr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r5.u32);
	// bl 0x82ff4f88
	ctx.lr = 0x830674E4;
	sub_82FF4F88(ctx, base);
	// stw r3,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r3.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830677e8
	if (ctx.cr6.eq) goto loc_830677E8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f5,f12,f5,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f9.f64));
	// lfs f9,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f4,f13,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f6,f12,f3,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmadds f5,f0,f2,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f4,f12,f1,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmadds f3,f0,f11,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fadds f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f2,36(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fadds f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f1,40(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fadds f0,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f28,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f28.f64 = double(temp.f32);
	// lfs f11,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f30,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f25,f12,f13
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f24,f28,f13
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmuls f26,f11,f29
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f27,f28,f29
	ctx.f27.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// fmuls f23,f10,f9
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f28,f28,f4
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f4.f64));
	// fmuls f22,f5,f1
	ctx.f22.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmadds f25,f10,f6,f25
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f25.f64));
	// fmuls f29,f12,f29
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmadds f24,f8,f6,f24
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f24.f64));
	// fmadds f26,f3,f7,f26
	ctx.f26.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f26.f64));
	// fmadds f6,f3,f6,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fmadds f27,f8,f7,f27
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f27.f64));
	// fmadds f13,f2,f1,f23
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f23.f64));
	// fmadds f8,f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f28.f64));
	// fmadds f11,f11,f4,f22
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f22.f64));
	// fmadds f10,f10,f7,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f29.f64));
	// fmadds f29,f2,f30,f25
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f30.f64 + ctx.f25.f64));
	// stfs f29,12(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f28,f0,f30,f24
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f24.f64));
	// fmadds f7,f5,f31,f26
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f26.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f6,f5,f30,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 + ctx.f6.f64));
	// fmadds f27,f0,f31,f27
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f27.f64));
	// stfs f27,4(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f5,f12,f4,f13
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f4,f0,f1,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fmadds f3,f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f3,32(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmadds f2,f2,f31,f10
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f28,16(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f6,20(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f5,24(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f4,28(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306766C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83067828
	if (ctx.cr6.eq) goto loc_83067828;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83067688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x830676A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f5,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f3,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f4,f3,f9,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f1,f11,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f5,f3,f10,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f5.f64));
	// lfs f31,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f4,f1,f6,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f4.f64));
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f3,f3,f8,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f2,f1,f7,f5
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fadds f1,f31,f4
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// stfs f1,8(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fadds f5,f30,f3
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f3.f64));
	// stfs f5,0(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f4,f29,f2
	ctx.f4.f64 = double(float(ctx.f29.f64 + ctx.f2.f64));
	// stfs f4,4(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f30,f3,f13
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f28,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f3,f12
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f26,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f24,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f24.f64 = double(temp.f32);
	// lfs f25,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f25.f64 = double(temp.f32);
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f27,f5,f12
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f30,f28,f10,f30
	ctx.f30.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 + ctx.f30.f64));
	// fmadds f29,f28,f9,f29
	ctx.f29.f64 = double(float(ctx.f28.f64 * ctx.f9.f64 + ctx.f29.f64));
	// fmadds f3,f2,f11,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f4,f1,f10,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f27,f1,f9,f27
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f27.f64));
	// fmadds f5,f26,f11,f5
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f30,f2,f7,f30
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f30.f64));
	// stfs f30,12(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f2,f2,f6,f29
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f29.f64));
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmadds f3,f28,f8,f3
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f3.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f4,f26,f7,f4
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f7.f64 + ctx.f4.f64));
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmadds f4,f26,f6,f27
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f6.f64 + ctx.f27.f64));
	// stfs f4,28(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmadds f2,f1,f8,f5
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f13,f31,f12
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmadds f10,f24,f10,f1
	ctx.f10.f64 = double(float(ctx.f24.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f9,f24,f9,f13
	ctx.f9.f64 = double(float(ctx.f24.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f5,f25,f11,f12
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f4,f25,f7,f10
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmadds f2,f24,f8,f5
	ctx.f2.f64 = double(float(ctx.f24.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f3,f25,f6,f9
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,32(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r6,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r6.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b1c
	ctx.lr = 0x830677E4;
	__restfpr_22(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_830677E8:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_830677FC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x830677fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830677FC;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_83067828:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b1c
	ctx.lr = 0x8306783C;
	__restfpr_22(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83067840"))) PPC_WEAK_FUNC(sub_83067840);
PPC_FUNC_IMPL(__imp__sub_83067840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83067848;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306785C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830678c8
	if (ctx.cr6.eq) goto loc_830678C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,-68(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83067884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-72
	ctx.r3.s64 = ctx.r31.s64 + -72;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830674c0
	ctx.lr = 0x830678B0;
	sub_830674C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830678e8
	if (ctx.cr6.eq) goto loc_830678E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x830678C0;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_830678C8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,27008
	ctx.r4.s64 = ctx.r11.s64 + 27008;
	// li r5,709
	ctx.r5.s64 = 709;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x830678E8;
	sub_82D17988(ctx, base);
loc_830678E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830678F0"))) PPC_WEAK_FUNC(sub_830678F0);
PPC_FUNC_IMPL(__imp__sub_830678F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830678F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306790C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306795c
	if (ctx.cr6.eq) goto loc_8306795C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,-68(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83067930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,-72
	ctx.r3.s64 = ctx.r31.s64 + -72;
	// bl 0x830674c0
	ctx.lr = 0x83067944;
	sub_830674C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8306797c
	if (ctx.cr6.eq) goto loc_8306797C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83067954;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8306795C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,27248
	ctx.r4.s64 = ctx.r11.s64 + 27248;
	// li r5,716
	ctx.r5.s64 = 716;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306797C;
	sub_82D17988(ctx, base);
loc_8306797C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83067984"))) PPC_WEAK_FUNC(sub_83067984);
PPC_FUNC_IMPL(__imp__sub_83067984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067988"))) PPC_WEAK_FUNC(sub_83067988);
PPC_FUNC_IMPL(__imp__sub_83067988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83067990;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// bl 0x82d5ecb0
	ctx.lr = 0x830679A4;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83067a0c
	if (ctx.cr6.eq) goto loc_83067A0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,-68(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830679C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830679E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,-72
	ctx.r3.s64 = ctx.r31.s64 + -72;
	// bl 0x830674c0
	ctx.lr = 0x830679F4;
	sub_830674C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83067a2c
	if (ctx.cr6.eq) goto loc_83067A2C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83067A04;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83067A0C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,27488
	ctx.r4.s64 = ctx.r11.s64 + 27488;
	// li r5,723
	ctx.r5.s64 = 723;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83067A2C;
	sub_82D17988(ctx, base);
loc_83067A2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83067A34"))) PPC_WEAK_FUNC(sub_83067A34);
PPC_FUNC_IMPL(__imp__sub_83067A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067A38"))) PPC_WEAK_FUNC(sub_83067A38);
PPC_FUNC_IMPL(__imp__sub_83067A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83067A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// bl 0x82d5ecb0
	ctx.lr = 0x83067A54;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83067aa4
	if (ctx.cr6.eq) goto loc_83067AA4;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r29,-68(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83067A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,-72
	ctx.r3.s64 = ctx.r31.s64 + -72;
	// bl 0x830674c0
	ctx.lr = 0x83067A8C;
	sub_830674C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83067ac4
	if (ctx.cr6.eq) goto loc_83067AC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83067A9C;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83067AA4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,27728
	ctx.r4.s64 = ctx.r11.s64 + 27728;
	// li r5,731
	ctx.r5.s64 = 731;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83067AC4;
	sub_82D17988(ctx, base);
loc_83067AC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83067ACC"))) PPC_WEAK_FUNC(sub_83067ACC);
PPC_FUNC_IMPL(__imp__sub_83067ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067AD0"))) PPC_WEAK_FUNC(sub_83067AD0);
PPC_FUNC_IMPL(__imp__sub_83067AD0) {
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
	ctx.lr = 0x83067AE8;
	__savefpr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83067c7c
	if (ctx.cr6.eq) goto loc_83067C7C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f11,f6
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f9,f11,f8
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f31,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lfs f25,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f25.f64 = double(temp.f32);
	// lfs f28,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f7,f13,f3,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f27,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f5,f2,f13,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f26,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f4,f0,f13,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f3,f10,f3,f1
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f1,f10,f0,f6
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f2,f10,f2,f9
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmadds f0,f8,f12,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f13,f11,f12,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f12,f31,f12,f4
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f29,f25,f8,f3
	ctx.f29.f64 = double(float(ctx.f25.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f31,f25,f31,f1
	ctx.f31.f64 = double(float(ctx.f25.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmadds f30,f25,f11,f2
	ctx.f30.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fadds f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// fadds f27,f27,f13
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f13.f64));
	// fadds f26,f26,f12
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f12.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83067BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83067cbc
	if (ctx.cr6.eq) goto loc_83067CBC;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83067BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83067BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f0,f26
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f13,f26
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f12,f26
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmuls f1,f11,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f10,f30
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f9,f28,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f5.f64));
	// fmadds f4,f8,f28,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f4.f64));
	// fmadds f3,f7,f28,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f3.f64));
	// fmadds f1,f13,f31,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmadds f2,f29,f9,f2
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f13,f12,f31,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f6,f27,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 + ctx.f5.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f27,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f4.f64));
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f10,f27,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 + ctx.f3.f64));
	// fmadds f0,f8,f29,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f1.f64));
	// fmadds f31,f7,f29,f13
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f29,f6,f30,f2
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fadds f28,f12,f9
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f27,f5,f4
	ctx.f27.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f26,f11,f10
	ctx.f26.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x83067cbc
	goto loc_83067CBC;
loc_83067C7C:
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83067C90:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83067c90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83067C90;
	// lfs f28,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f31.f64 = double(temp.f32);
	// lfs f27,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f26,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f26.f64 = double(temp.f32);
loc_83067CBC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f29,f9
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// fmuls f7,f30,f9
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// fmuls f6,f31,f9
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// fneg f5,f8
	ctx.f5.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fneg f4,f7
	ctx.f4.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fadds f2,f8,f28
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fadds f1,f7,f27
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f27.f64));
	// fadds f0,f6,f26
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f26.f64));
	// fadds f13,f28,f5
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f5.f64));
	// fadds f9,f27,f4
	ctx.f9.f64 = double(float(ctx.f27.f64 + ctx.f4.f64));
	// fadds f8,f26,f3
	ctx.f8.f64 = double(float(ctx.f26.f64 + ctx.f3.f64));
	// fsubs f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsubs f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fsubs f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f5,8(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fadds f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f4,12(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fadds f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f3,16(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fadds f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fsubs f6,f2,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fsubs f3,f0,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fadds f5,f2,f8
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fsubs f4,f1,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// fsubs f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f9,f10,f3
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fadds f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// fsubs f13,f11,f4
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// fsel f8,f2,f6,f12
	ctx.f8.f64 = ctx.f2.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsel f6,f9,f3,f10
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f3.f64 : ctx.f10.f64;
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fsel f7,f13,f4,f11
	ctx.f7.f64 = ctx.f13.f64 >= 0.0 ? ctx.f4.f64 : ctx.f11.f64;
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f3,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f12,f3,f5
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fsel f8,f11,f4,f0
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f4.f64 : ctx.f0.f64;
	// stfs f8,20(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// fsel f10,f13,f2,f1
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f2.f64 : ctx.f1.f64;
	// stfs f10,16(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fsel f9,f12,f3,f5
	ctx.f9.f64 = ctx.f12.f64 >= 0.0 ? ctx.f3.f64 : ctx.f5.f64;
	// stfs f9,12(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b28
	ctx.lr = 0x83067DCC;
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

__attribute__((alias("__imp__sub_83067DE0"))) PPC_WEAK_FUNC(sub_83067DE0);
PPC_FUNC_IMPL(__imp__sub_83067DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067DE4"))) PPC_WEAK_FUNC(sub_83067DE4);
PPC_FUNC_IMPL(__imp__sub_83067DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067DE8"))) PPC_WEAK_FUNC(sub_83067DE8);
PPC_FUNC_IMPL(__imp__sub_83067DE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067DEC"))) PPC_WEAK_FUNC(sub_83067DEC);
PPC_FUNC_IMPL(__imp__sub_83067DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067DF0"))) PPC_WEAK_FUNC(sub_83067DF0);
PPC_FUNC_IMPL(__imp__sub_83067DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,27892
	ctx.r9.s64 = ctx.r10.s64 + 27892;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067E0C"))) PPC_WEAK_FUNC(sub_83067E0C);
PPC_FUNC_IMPL(__imp__sub_83067E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067E10"))) PPC_WEAK_FUNC(sub_83067E10);
PPC_FUNC_IMPL(__imp__sub_83067E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,27832
	ctx.r10.s64 = ctx.r11.s64 + 27832;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067E20"))) PPC_WEAK_FUNC(sub_83067E20);
PPC_FUNC_IMPL(__imp__sub_83067E20) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,27832
	ctx.r9.s64 = ctx.r11.s64 + 27832;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83067e54
	if (ctx.cr6.eq) goto loc_83067E54;
	// bl 0x822990f0
	ctx.lr = 0x83067E50;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83067E54:
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

__attribute__((alias("__imp__sub_83067E68"))) PPC_WEAK_FUNC(sub_83067E68);
PPC_FUNC_IMPL(__imp__sub_83067E68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,27988
	ctx.r9.s64 = ctx.r10.s64 + 27988;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067E84"))) PPC_WEAK_FUNC(sub_83067E84);
PPC_FUNC_IMPL(__imp__sub_83067E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067E88"))) PPC_WEAK_FUNC(sub_83067E88);
PPC_FUNC_IMPL(__imp__sub_83067E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,27832
	ctx.r10.s64 = ctx.r11.s64 + 27832;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067E98"))) PPC_WEAK_FUNC(sub_83067E98);
PPC_FUNC_IMPL(__imp__sub_83067E98) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,27832
	ctx.r9.s64 = ctx.r11.s64 + 27832;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83067ecc
	if (ctx.cr6.eq) goto loc_83067ECC;
	// bl 0x822990f0
	ctx.lr = 0x83067EC8;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83067ECC:
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

__attribute__((alias("__imp__sub_83067EE0"))) PPC_WEAK_FUNC(sub_83067EE0);
PPC_FUNC_IMPL(__imp__sub_83067EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r9,9
	ctx.r9.s64 = 9;
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
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83067F20:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83067f20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83067F20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067F38"))) PPC_WEAK_FUNC(sub_83067F38);
PPC_FUNC_IMPL(__imp__sub_83067F38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28084
	ctx.r9.s64 = ctx.r10.s64 + 28084;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067F54"))) PPC_WEAK_FUNC(sub_83067F54);
PPC_FUNC_IMPL(__imp__sub_83067F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067F58"))) PPC_WEAK_FUNC(sub_83067F58);
PPC_FUNC_IMPL(__imp__sub_83067F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,27832
	ctx.r10.s64 = ctx.r11.s64 + 27832;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067F68"))) PPC_WEAK_FUNC(sub_83067F68);
PPC_FUNC_IMPL(__imp__sub_83067F68) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,27832
	ctx.r9.s64 = ctx.r11.s64 + 27832;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83067f9c
	if (ctx.cr6.eq) goto loc_83067F9C;
	// bl 0x822990f0
	ctx.lr = 0x83067F98;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83067F9C:
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

__attribute__((alias("__imp__sub_83067FB0"))) PPC_WEAK_FUNC(sub_83067FB0);
PPC_FUNC_IMPL(__imp__sub_83067FB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067FB8"))) PPC_WEAK_FUNC(sub_83067FB8);
PPC_FUNC_IMPL(__imp__sub_83067FB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067FC0"))) PPC_WEAK_FUNC(sub_83067FC0);
PPC_FUNC_IMPL(__imp__sub_83067FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28204
	ctx.r9.s64 = ctx.r10.s64 + 28204;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067FDC"))) PPC_WEAK_FUNC(sub_83067FDC);
PPC_FUNC_IMPL(__imp__sub_83067FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067FE0"))) PPC_WEAK_FUNC(sub_83067FE0);
PPC_FUNC_IMPL(__imp__sub_83067FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,27832
	ctx.r10.s64 = ctx.r11.s64 + 27832;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83067FF0"))) PPC_WEAK_FUNC(sub_83067FF0);
PPC_FUNC_IMPL(__imp__sub_83067FF0) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,27832
	ctx.r9.s64 = ctx.r11.s64 + 27832;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83068024
	if (ctx.cr6.eq) goto loc_83068024;
	// bl 0x822990f0
	ctx.lr = 0x83068020;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83068024:
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

__attribute__((alias("__imp__sub_83068038"))) PPC_WEAK_FUNC(sub_83068038);
PPC_FUNC_IMPL(__imp__sub_83068038) {
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
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// beq cr6,0x83068060
	if (ctx.cr6.eq) goto loc_83068060;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_83068060:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068080
	if (ctx.cr6.eq) goto loc_83068080;
	// bl 0x82d5f3b8
	ctx.lr = 0x8306806C;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83068080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83068080:
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

__attribute__((alias("__imp__sub_83068098"))) PPC_WEAK_FUNC(sub_83068098);
PPC_FUNC_IMPL(__imp__sub_83068098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f5,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f4,52(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f5,56(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306811C"))) PPC_WEAK_FUNC(sub_8306811C);
PPC_FUNC_IMPL(__imp__sub_8306811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068120"))) PPC_WEAK_FUNC(sub_83068120);
PPC_FUNC_IMPL(__imp__sub_83068120) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-72
	ctx.r3.s64 = ctx.r3.s64 + -72;
	// b 0x83068888
	sub_83068888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83068128"))) PPC_WEAK_FUNC(sub_83068128);
PPC_FUNC_IMPL(__imp__sub_83068128) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-72
	ctx.r3.s64 = ctx.r3.s64 + -72;
	// b 0x830689d8
	sub_830689D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83068130"))) PPC_WEAK_FUNC(sub_83068130);
PPC_FUNC_IMPL(__imp__sub_83068130) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-72
	ctx.r3.s64 = ctx.r3.s64 + -72;
	// b 0x83068930
	sub_83068930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83068138"))) PPC_WEAK_FUNC(sub_83068138);
PPC_FUNC_IMPL(__imp__sub_83068138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f0,f5,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f10,f6,f4,f8
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f9,f6,f3,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fmadds f8,f6,f12,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f7,f13,f2,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f6,f13,f1,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f9.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f5,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmadds f0,f5,f6,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f13,f8,f4,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fsubs f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830681C0"))) PPC_WEAK_FUNC(sub_830681C0);
PPC_FUNC_IMPL(__imp__sub_830681C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_830681D4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x830681d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830681D4;
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// lfs f12,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// stb r10,372(r11)
	PPC_STORE_U8(ctx.r11.u32 + 372, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83068210"))) PPC_WEAK_FUNC(sub_83068210);
PPC_FUNC_IMPL(__imp__sub_83068210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83068218;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ad0
	ctx.lr = 0x83068220;
	__savefpr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068520
	if (ctx.cr6.eq) goto loc_83068520;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f5,f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f9.f64));
	// lfs f9,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f4,f12,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f6,f13,f3,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmadds f5,f0,f2,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f4,f0,f1,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmadds f3,f12,f11,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fadds f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f2,36(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fadds f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f1,40(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fadds f0,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// lfs f2,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f28,f29
	ctx.f27.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// fmuls f25,f11,f13
	ctx.f25.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f24,f28,f13
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmuls f23,f10,f9
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f26,f12,f29
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f28,f28,f5
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f5.f64));
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmadds f27,f8,f7,f27
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f27.f64));
	// fmuls f29,f11,f29
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmadds f25,f3,f6,f25
	ctx.f25.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f25.f64));
	// fmadds f24,f8,f6,f24
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f24.f64));
	// fmadds f5,f11,f5,f23
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f23.f64));
	// fmadds f6,f4,f6,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fmadds f26,f4,f7,f26
	ctx.f26.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f26.f64));
	// fmadds f11,f8,f31,f28
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f28.f64));
	// fmadds f8,f4,f31,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f13,f2,f1,f27
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f27.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f7,f3,f7,f29
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f29.f64));
	// fmadds f13,f10,f0,f25
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f25.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f12,f2,f0,f24
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f24.f64));
	// fmadds f5,f3,f31,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fmadds f6,f30,f0,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f4,f30,f1,f26
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f26.f64));
	// stfs f4,8(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f3,f2,f9,f11
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f2,f30,f9,f8
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmadds f1,f10,f1,f7
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f6,20(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f5,24(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830683AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83068560
	if (ctx.cr6.eq) goto loc_83068560;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830683C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x830683E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f5,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f2,f12
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f3,f2,f11,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f1,f5,f10,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f31,f4,f9,f31
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f31.f64));
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f4,f4,f8,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f3.f64));
	// lfs f28,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f3,f2,f7,f1
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f2,f5,f6,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f31.f64));
	// fadds f1,f30,f4
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f4.f64));
	// stfs f1,0(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f5,f29,f3
	ctx.f5.f64 = double(float(ctx.f29.f64 + ctx.f3.f64));
	// stfs f5,4(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fadds f4,f28,f2
	ctx.f4.f64 = double(float(ctx.f28.f64 + ctx.f2.f64));
	// stfs f4,8(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f28,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f28.f64 = double(temp.f32);
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f5,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f29,f2,f0
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f30,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f27,f3,f13
	ctx.f27.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f26,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f22,f28,f0
	ctx.f22.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f31,f4,f12
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f25,f30,f12
	ctx.f25.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// lfs f23,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f24,f26,f13
	ctx.f24.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmadds f29,f4,f11,f29
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f29.f64));
	// fmadds f31,f3,f9,f31
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f31.f64));
	// fmadds f27,f2,f10,f27
	ctx.f27.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f27.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f22,f30,f11,f22
	ctx.f22.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f22.f64));
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f13,f23,f13
	ctx.f13.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// fmadds f25,f26,f9,f25
	ctx.f25.f64 = double(float(ctx.f26.f64 * ctx.f9.f64 + ctx.f25.f64));
	// fmadds f24,f28,f10,f24
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 + ctx.f24.f64));
	// fmadds f3,f3,f8,f29
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f29.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f2,f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f31.f64));
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmadds f4,f4,f7,f27
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f27.f64));
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f0,f5,f11,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f11,f26,f8,f22
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f8.f64 + ctx.f22.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f9,f23,f9,f12
	ctx.f9.f64 = double(float(ctx.f23.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f4,f1,f10,f13
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f3,f28,f6,f25
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f6.f64 + ctx.f25.f64));
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmadds f2,f30,f7,f24
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f7.f64 + ctx.f24.f64));
	// stfs f2,16(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmadds f2,f1,f6,f9
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f9.f64));
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmadds f3,f23,f8,f0
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f8.f64 + ctx.f0.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f1,f5,f7,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f4.f64));
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b1c
	ctx.lr = 0x8306851C;
	__restfpr_22(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83068520:
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83068534:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83068534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83068534;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f13,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f12,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_83068560:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b1c
	ctx.lr = 0x8306856C;
	__restfpr_22(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83068570"))) PPC_WEAK_FUNC(sub_83068570);
PPC_FUNC_IMPL(__imp__sub_83068570) {
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
	// bl 0x82cb6ae0
	ctx.lr = 0x83068588;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068718
	if (ctx.cr6.eq) goto loc_83068718;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f13,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f11,f8
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f31,f10,f3
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f8,f11,f6
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f28,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f29,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f3,f13,f3,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f7,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f2,f13,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f26,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f4,f0,f13,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f2,f10,f2,f1
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fmadds f1,f10,f0,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f0,f28,f6,f31
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f6.f64 + ctx.f31.f64));
	// fmadds f13,f6,f12,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f10,f30,f12,f5
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f8,f29,f12,f4
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f30,f28,f30,f2
	ctx.f30.f64 = double(float(ctx.f28.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fmadds f31,f28,f29,f1
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 + ctx.f1.f64));
	// fmadds f29,f11,f9,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fadds f28,f27,f13
	ctx.f28.f64 = double(float(ctx.f27.f64 + ctx.f13.f64));
	// fadds f27,f7,f10
	ctx.f27.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fadds f26,f26,f8
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f8.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83068658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83068758
	if (ctx.cr6.eq) goto loc_83068758;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83068674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83068690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f0,f27
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f13,f27
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f3,f12,f27
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f13,f30
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f11,f26,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f5.f64));
	// fmadds f12,f10,f26,f4
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f4.f64));
	// fmadds f5,f9,f26,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f26.f64 + ctx.f3.f64));
	// fmadds f4,f10,f31,f2
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f2.f64));
	// fmadds f3,f9,f31,f1
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmadds f2,f11,f31,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f0.f64));
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f8,f28,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f13.f64));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f7,f28,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f12.f64));
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f6,f28,f5
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f5.f64));
	// fmadds f30,f7,f29,f4
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f4.f64));
	// fmadds f31,f6,f29,f3
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f3.f64));
	// fmadds f29,f29,f8,f2
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fadds f28,f1,f0
	ctx.f28.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f27,f13,f12
	ctx.f27.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f26,f11,f10
	ctx.f26.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// b 0x83068758
	goto loc_83068758;
loc_83068718:
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8306872C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8306872c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8306872C;
	// lfs f28,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f31.f64 = double(temp.f32);
	// lfs f27,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f26,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f26.f64 = double(temp.f32);
loc_83068758:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// stfs f29,12(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// stfs f30,16(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmuls f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fneg f1,f4
	ctx.f1.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fneg f0,f5
	ctx.f0.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fadds f13,f26,f2
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f2.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f12,f27,f1
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f1.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f11,f28,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f5,f10,f28
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// fadds f7,f8,f26
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f26.f64));
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fadds f6,f9,f27
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b2c
	ctx.lr = 0x830687FC;
	__restfpr_26(ctx, base);
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

__attribute__((alias("__imp__sub_83068810"))) PPC_WEAK_FUNC(sub_83068810);
PPC_FUNC_IMPL(__imp__sub_83068810) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,27868
	ctx.r10.s64 = ctx.r11.s64 + 27868;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82ffca80
	ctx.lr = 0x8306883C;
	sub_82FFCA80(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83068854
	if (ctx.cr6.eq) goto loc_83068854;
	// bl 0x822990f0
	ctx.lr = 0x83068850;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83068854:
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

__attribute__((alias("__imp__sub_8306886C"))) PPC_WEAK_FUNC(sub_8306886C);
PPC_FUNC_IMPL(__imp__sub_8306886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068870"))) PPC_WEAK_FUNC(sub_83068870);
PPC_FUNC_IMPL(__imp__sub_83068870) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83068884"))) PPC_WEAK_FUNC(sub_83068884);
PPC_FUNC_IMPL(__imp__sub_83068884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068888"))) PPC_WEAK_FUNC(sub_83068888);
PPC_FUNC_IMPL(__imp__sub_83068888) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,27940
	ctx.r8.s64 = ctx.r11.s64 + 27940;
	// addi r7,r10,27832
	ctx.r7.s64 = ctx.r10.s64 + 27832;
	// addi r6,r9,27868
	ctx.r6.s64 = ctx.r9.s64 + 27868;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// bl 0x82ffca80
	ctx.lr = 0x830688D0;
	sub_82FFCA80(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830688f8
	if (ctx.cr6.eq) goto loc_830688F8;
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
	ctx.lr = 0x830688F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830688F8:
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

__attribute__((alias("__imp__sub_83068914"))) PPC_WEAK_FUNC(sub_83068914);
PPC_FUNC_IMPL(__imp__sub_83068914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068918"))) PPC_WEAK_FUNC(sub_83068918);
PPC_FUNC_IMPL(__imp__sub_83068918) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306892C"))) PPC_WEAK_FUNC(sub_8306892C);
PPC_FUNC_IMPL(__imp__sub_8306892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068930"))) PPC_WEAK_FUNC(sub_83068930);
PPC_FUNC_IMPL(__imp__sub_83068930) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,28036
	ctx.r8.s64 = ctx.r11.s64 + 28036;
	// addi r7,r10,27832
	ctx.r7.s64 = ctx.r10.s64 + 27832;
	// addi r6,r9,27868
	ctx.r6.s64 = ctx.r9.s64 + 27868;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// bl 0x82ffca80
	ctx.lr = 0x83068978;
	sub_82FFCA80(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830689a0
	if (ctx.cr6.eq) goto loc_830689A0;
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
	ctx.lr = 0x830689A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830689A0:
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

__attribute__((alias("__imp__sub_830689BC"))) PPC_WEAK_FUNC(sub_830689BC);
PPC_FUNC_IMPL(__imp__sub_830689BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830689C0"))) PPC_WEAK_FUNC(sub_830689C0);
PPC_FUNC_IMPL(__imp__sub_830689C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830689D4"))) PPC_WEAK_FUNC(sub_830689D4);
PPC_FUNC_IMPL(__imp__sub_830689D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830689D8"))) PPC_WEAK_FUNC(sub_830689D8);
PPC_FUNC_IMPL(__imp__sub_830689D8) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,28144
	ctx.r8.s64 = ctx.r11.s64 + 28144;
	// addi r7,r10,27832
	ctx.r7.s64 = ctx.r10.s64 + 27832;
	// addi r6,r9,27868
	ctx.r6.s64 = ctx.r9.s64 + 27868;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// bl 0x82ffca80
	ctx.lr = 0x83068A20;
	sub_82FFCA80(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83068a48
	if (ctx.cr6.eq) goto loc_83068A48;
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
	ctx.lr = 0x83068A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83068A48:
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

__attribute__((alias("__imp__sub_83068A64"))) PPC_WEAK_FUNC(sub_83068A64);
PPC_FUNC_IMPL(__imp__sub_83068A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068A68"))) PPC_WEAK_FUNC(sub_83068A68);
PPC_FUNC_IMPL(__imp__sub_83068A68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83068A7C"))) PPC_WEAK_FUNC(sub_83068A7C);
PPC_FUNC_IMPL(__imp__sub_83068A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068A80"))) PPC_WEAK_FUNC(sub_83068A80);
PPC_FUNC_IMPL(__imp__sub_83068A80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-72
	ctx.r3.s64 = ctx.r3.s64 + -72;
	// b 0x83068a88
	sub_83068A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83068A88"))) PPC_WEAK_FUNC(sub_83068A88);
PPC_FUNC_IMPL(__imp__sub_83068A88) {
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
	// bl 0x830665c0
	ctx.lr = 0x83068AA8;
	sub_830665C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068ad0
	if (ctx.cr6.eq) goto loc_83068AD0;
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
	ctx.lr = 0x83068AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83068AD0:
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

__attribute__((alias("__imp__sub_83068AEC"))) PPC_WEAK_FUNC(sub_83068AEC);
PPC_FUNC_IMPL(__imp__sub_83068AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068AF0"))) PPC_WEAK_FUNC(sub_83068AF0);
PPC_FUNC_IMPL(__imp__sub_83068AF0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83068AFC"))) PPC_WEAK_FUNC(sub_83068AFC);
PPC_FUNC_IMPL(__imp__sub_83068AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068B00"))) PPC_WEAK_FUNC(sub_83068B00);
PPC_FUNC_IMPL(__imp__sub_83068B00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83068B08"))) PPC_WEAK_FUNC(sub_83068B08);
PPC_FUNC_IMPL(__imp__sub_83068B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83068B1C"))) PPC_WEAK_FUNC(sub_83068B1C);
PPC_FUNC_IMPL(__imp__sub_83068B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068B20"))) PPC_WEAK_FUNC(sub_83068B20);
PPC_FUNC_IMPL(__imp__sub_83068B20) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83068B44;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068ba4
	if (ctx.cr6.eq) goto loc_83068BA4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83068B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83068B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x830181f8
	ctx.lr = 0x83068B90;
	sub_830181F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83068bc4
	if (ctx.cr6.eq) goto loc_83068BC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83068BA0;
	sub_82D5ED58(ctx, base);
	// b 0x83068bc4
	goto loc_83068BC4;
loc_83068BA4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,28552
	ctx.r4.s64 = ctx.r11.s64 + 28552;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-120
	ctx.r8.s64 = ctx.r4.s64 + -120;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83068BC4;
	sub_82D17988(ctx, base);
loc_83068BC4:
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

__attribute__((alias("__imp__sub_83068BDC"))) PPC_WEAK_FUNC(sub_83068BDC);
PPC_FUNC_IMPL(__imp__sub_83068BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068BE0"))) PPC_WEAK_FUNC(sub_83068BE0);
PPC_FUNC_IMPL(__imp__sub_83068BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83068BF4"))) PPC_WEAK_FUNC(sub_83068BF4);
PPC_FUNC_IMPL(__imp__sub_83068BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068BF8"))) PPC_WEAK_FUNC(sub_83068BF8);
PPC_FUNC_IMPL(__imp__sub_83068BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83068C0C"))) PPC_WEAK_FUNC(sub_83068C0C);
PPC_FUNC_IMPL(__imp__sub_83068C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068C10"))) PPC_WEAK_FUNC(sub_83068C10);
PPC_FUNC_IMPL(__imp__sub_83068C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83068C18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83068C30;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068d14
	if (ctx.cr6.eq) goto loc_83068D14;
	// clrlwi r11,r30,29
	ctx.r11.u64 = ctx.r30.u32 & 0x7;
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83068c94
	if (ctx.cr6.eq) goto loc_83068C94;
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83068c80
	if (ctx.cr6.eq) goto loc_83068C80;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83068C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,29
	ctx.r9.u64 = ctx.r3.u32 & 0x7;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83068c94
	if (ctx.cr6.eq) goto loc_83068C94;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83068c94
	if (!ctx.cr6.eq) goto loc_83068C94;
loc_83068C80:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83068C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83068C94:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x83068cbc
	if (ctx.cr6.eq) goto loc_83068CBC;
	// bctrl 
	ctx.lr = 0x83068CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 | ctx.r30.u64;
	// b 0x83068cc4
	goto loc_83068CC4;
loc_83068CBC:
	// bctrl 
	ctx.lr = 0x83068CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// andc r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 & ~ctx.r30.u64;
loc_83068CC4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83068CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83068CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x830181f8
	ctx.lr = 0x83068CFC;
	sub_830181F8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83068d34
	if (ctx.cr6.eq) goto loc_83068D34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83068D0C;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83068D14:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,28776
	ctx.r4.s64 = ctx.r11.s64 + 28776;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83068D34;
	sub_82D17988(ctx, base);
loc_83068D34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83068D3C"))) PPC_WEAK_FUNC(sub_83068D3C);
PPC_FUNC_IMPL(__imp__sub_83068D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068D40"))) PPC_WEAK_FUNC(sub_83068D40);
PPC_FUNC_IMPL(__imp__sub_83068D40) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83068D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// and r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 & ctx.r31.u64;
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

__attribute__((alias("__imp__sub_83068D80"))) PPC_WEAK_FUNC(sub_83068D80);
PPC_FUNC_IMPL(__imp__sub_83068D80) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83068DA4;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068dd4
	if (ctx.cr6.eq) goto loc_83068DD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303dcf0
	ctx.lr = 0x83068DC0;
	sub_8303DCF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83068df4
	if (ctx.cr6.eq) goto loc_83068DF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83068DD0;
	sub_82D5ED58(ctx, base);
	// b 0x83068df4
	goto loc_83068DF4;
loc_83068DD4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,29000
	ctx.r4.s64 = ctx.r11.s64 + 29000;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83068DF4;
	sub_82D17988(ctx, base);
loc_83068DF4:
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

__attribute__((alias("__imp__sub_83068E0C"))) PPC_WEAK_FUNC(sub_83068E0C);
PPC_FUNC_IMPL(__imp__sub_83068E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068E10"))) PPC_WEAK_FUNC(sub_83068E10);
PPC_FUNC_IMPL(__imp__sub_83068E10) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83068E34;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068e64
	if (ctx.cr6.eq) goto loc_83068E64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303e280
	ctx.lr = 0x83068E50;
	sub_8303E280(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83068e84
	if (ctx.cr6.eq) goto loc_83068E84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83068E60;
	sub_82D5ED58(ctx, base);
	// b 0x83068e84
	goto loc_83068E84;
loc_83068E64:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,29232
	ctx.r4.s64 = ctx.r11.s64 + 29232;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83068E84;
	sub_82D17988(ctx, base);
loc_83068E84:
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

__attribute__((alias("__imp__sub_83068E9C"))) PPC_WEAK_FUNC(sub_83068E9C);
PPC_FUNC_IMPL(__imp__sub_83068E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068EA0"))) PPC_WEAK_FUNC(sub_83068EA0);
PPC_FUNC_IMPL(__imp__sub_83068EA0) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83068EC4;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068ef4
	if (ctx.cr6.eq) goto loc_83068EF4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303c900
	ctx.lr = 0x83068EE0;
	sub_8303C900(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83068f14
	if (ctx.cr6.eq) goto loc_83068F14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83068EF0;
	sub_82D5ED58(ctx, base);
	// b 0x83068f14
	goto loc_83068F14;
loc_83068EF4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,29464
	ctx.r4.s64 = ctx.r11.s64 + 29464;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83068F14;
	sub_82D17988(ctx, base);
loc_83068F14:
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

__attribute__((alias("__imp__sub_83068F2C"))) PPC_WEAK_FUNC(sub_83068F2C);
PPC_FUNC_IMPL(__imp__sub_83068F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068F30"))) PPC_WEAK_FUNC(sub_83068F30);
PPC_FUNC_IMPL(__imp__sub_83068F30) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83068F54;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068f84
	if (ctx.cr6.eq) goto loc_83068F84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303ce00
	ctx.lr = 0x83068F70;
	sub_8303CE00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83068fa4
	if (ctx.cr6.eq) goto loc_83068FA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83068F80;
	sub_82D5ED58(ctx, base);
	// b 0x83068fa4
	goto loc_83068FA4;
loc_83068F84:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,29688
	ctx.r4.s64 = ctx.r11.s64 + 29688;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83068FA4;
	sub_82D17988(ctx, base);
loc_83068FA4:
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

__attribute__((alias("__imp__sub_83068FBC"))) PPC_WEAK_FUNC(sub_83068FBC);
PPC_FUNC_IMPL(__imp__sub_83068FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068FC0"))) PPC_WEAK_FUNC(sub_83068FC0);
PPC_FUNC_IMPL(__imp__sub_83068FC0) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83068FE4;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069014
	if (ctx.cr6.eq) goto loc_83069014;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303e378
	ctx.lr = 0x83069000;
	sub_8303E378(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83069034
	if (ctx.cr6.eq) goto loc_83069034;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83069010;
	sub_82D5ED58(ctx, base);
	// b 0x83069034
	goto loc_83069034;
loc_83069014:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,29920
	ctx.r4.s64 = ctx.r11.s64 + 29920;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83069034;
	sub_82D17988(ctx, base);
loc_83069034:
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

__attribute__((alias("__imp__sub_8306904C"))) PPC_WEAK_FUNC(sub_8306904C);
PPC_FUNC_IMPL(__imp__sub_8306904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069050"))) PPC_WEAK_FUNC(sub_83069050);
PPC_FUNC_IMPL(__imp__sub_83069050) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83069074;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830690a4
	if (ctx.cr6.eq) goto loc_830690A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303d3a0
	ctx.lr = 0x83069090;
	sub_8303D3A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830690c4
	if (ctx.cr6.eq) goto loc_830690C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x830690A0;
	sub_82D5ED58(ctx, base);
	// b 0x830690c4
	goto loc_830690C4;
loc_830690A4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,30152
	ctx.r4.s64 = ctx.r11.s64 + 30152;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x830690C4;
	sub_82D17988(ctx, base);
loc_830690C4:
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

__attribute__((alias("__imp__sub_830690DC"))) PPC_WEAK_FUNC(sub_830690DC);
PPC_FUNC_IMPL(__imp__sub_830690DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830690E0"))) PPC_WEAK_FUNC(sub_830690E0);
PPC_FUNC_IMPL(__imp__sub_830690E0) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83069104;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069164
	if (ctx.cr6.eq) goto loc_83069164;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306912C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83069140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x830181f8
	ctx.lr = 0x83069150;
	sub_830181F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83069184
	if (ctx.cr6.eq) goto loc_83069184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83069160;
	sub_82D5ED58(ctx, base);
	// b 0x83069184
	goto loc_83069184;
loc_83069164:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,30376
	ctx.r4.s64 = ctx.r11.s64 + 30376;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83069184;
	sub_82D17988(ctx, base);
loc_83069184:
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

__attribute__((alias("__imp__sub_8306919C"))) PPC_WEAK_FUNC(sub_8306919C);
PPC_FUNC_IMPL(__imp__sub_8306919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830691A0"))) PPC_WEAK_FUNC(sub_830691A0);
PPC_FUNC_IMPL(__imp__sub_830691A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830691B4"))) PPC_WEAK_FUNC(sub_830691B4);
PPC_FUNC_IMPL(__imp__sub_830691B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830691B8"))) PPC_WEAK_FUNC(sub_830691B8);
PPC_FUNC_IMPL(__imp__sub_830691B8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x830691E0;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069240
	if (ctx.cr6.eq) goto loc_83069240;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8306921C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x830181f8
	ctx.lr = 0x8306922C;
	sub_830181F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83069260
	if (ctx.cr6.eq) goto loc_83069260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306923C;
	sub_82D5ED58(ctx, base);
	// b 0x83069260
	goto loc_83069260;
loc_83069240:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,30600
	ctx.r4.s64 = ctx.r11.s64 + 30600;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83069260;
	sub_82D17988(ctx, base);
loc_83069260:
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

__attribute__((alias("__imp__sub_8306927C"))) PPC_WEAK_FUNC(sub_8306927C);
PPC_FUNC_IMPL(__imp__sub_8306927C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069280"))) PPC_WEAK_FUNC(sub_83069280);
PPC_FUNC_IMPL(__imp__sub_83069280) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83069294"))) PPC_WEAK_FUNC(sub_83069294);
PPC_FUNC_IMPL(__imp__sub_83069294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069298"))) PPC_WEAK_FUNC(sub_83069298);
PPC_FUNC_IMPL(__imp__sub_83069298) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x830692BC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830692ec
	if (ctx.cr6.eq) goto loc_830692EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303db70
	ctx.lr = 0x830692D8;
	sub_8303DB70(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8306930c
	if (ctx.cr6.eq) goto loc_8306930C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x830692E8;
	sub_82D5ED58(ctx, base);
	// b 0x8306930c
	goto loc_8306930C;
loc_830692EC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,30832
	ctx.r4.s64 = ctx.r11.s64 + 30832;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306930C;
	sub_82D17988(ctx, base);
loc_8306930C:
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

__attribute__((alias("__imp__sub_83069324"))) PPC_WEAK_FUNC(sub_83069324);
PPC_FUNC_IMPL(__imp__sub_83069324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069328"))) PPC_WEAK_FUNC(sub_83069328);
PPC_FUNC_IMPL(__imp__sub_83069328) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83069390
	if (ctx.cr6.eq) goto loc_83069390;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306936C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8306937C;
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
loc_83069390:
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

__attribute__((alias("__imp__sub_830693A8"))) PPC_WEAK_FUNC(sub_830693A8);
PPC_FUNC_IMPL(__imp__sub_830693A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ff4f88
	sub_82FF4F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830693AC"))) PPC_WEAK_FUNC(sub_830693AC);
PPC_FUNC_IMPL(__imp__sub_830693AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830693B0"))) PPC_WEAK_FUNC(sub_830693B0);
PPC_FUNC_IMPL(__imp__sub_830693B0) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x830693D4;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069404
	if (ctx.cr6.eq) goto loc_83069404;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff8508
	ctx.lr = 0x830693F0;
	sub_82FF8508(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83069424
	if (ctx.cr6.eq) goto loc_83069424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83069400;
	sub_82D5ED58(ctx, base);
	// b 0x83069424
	goto loc_83069424;
loc_83069404:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,31056
	ctx.r4.s64 = ctx.r11.s64 + 31056;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83069424;
	sub_82D17988(ctx, base);
loc_83069424:
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

__attribute__((alias("__imp__sub_8306943C"))) PPC_WEAK_FUNC(sub_8306943C);
PPC_FUNC_IMPL(__imp__sub_8306943C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069440"))) PPC_WEAK_FUNC(sub_83069440);
PPC_FUNC_IMPL(__imp__sub_83069440) {
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
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8303e840
	ctx.lr = 0x8306945C;
	sub_8303E840(ctx, base);
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

__attribute__((alias("__imp__sub_83069474"))) PPC_WEAK_FUNC(sub_83069474);
PPC_FUNC_IMPL(__imp__sub_83069474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069478"))) PPC_WEAK_FUNC(sub_83069478);
PPC_FUNC_IMPL(__imp__sub_83069478) {
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
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8303eba8
	ctx.lr = 0x83069494;
	sub_8303EBA8(ctx, base);
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

__attribute__((alias("__imp__sub_830694AC"))) PPC_WEAK_FUNC(sub_830694AC);
PPC_FUNC_IMPL(__imp__sub_830694AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830694B0"))) PPC_WEAK_FUNC(sub_830694B0);
PPC_FUNC_IMPL(__imp__sub_830694B0) {
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
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8303ecb8
	ctx.lr = 0x830694CC;
	sub_8303ECB8(ctx, base);
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

__attribute__((alias("__imp__sub_830694E4"))) PPC_WEAK_FUNC(sub_830694E4);
PPC_FUNC_IMPL(__imp__sub_830694E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830694E8"))) PPC_WEAK_FUNC(sub_830694E8);
PPC_FUNC_IMPL(__imp__sub_830694E8) {
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
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8303ef80
	ctx.lr = 0x83069504;
	sub_8303EF80(ctx, base);
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

__attribute__((alias("__imp__sub_8306951C"))) PPC_WEAK_FUNC(sub_8306951C);
PPC_FUNC_IMPL(__imp__sub_8306951C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069520"))) PPC_WEAK_FUNC(sub_83069520);
PPC_FUNC_IMPL(__imp__sub_83069520) {
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
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8303d9a8
	ctx.lr = 0x8306953C;
	sub_8303D9A8(ctx, base);
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

__attribute__((alias("__imp__sub_83069554"))) PPC_WEAK_FUNC(sub_83069554);
PPC_FUNC_IMPL(__imp__sub_83069554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069558"))) PPC_WEAK_FUNC(sub_83069558);
PPC_FUNC_IMPL(__imp__sub_83069558) {
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
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8303f308
	ctx.lr = 0x83069574;
	sub_8303F308(ctx, base);
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

__attribute__((alias("__imp__sub_8306958C"))) PPC_WEAK_FUNC(sub_8306958C);
PPC_FUNC_IMPL(__imp__sub_8306958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069590"))) PPC_WEAK_FUNC(sub_83069590);
PPC_FUNC_IMPL(__imp__sub_83069590) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830695A4"))) PPC_WEAK_FUNC(sub_830695A4);
PPC_FUNC_IMPL(__imp__sub_830695A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830695A8"))) PPC_WEAK_FUNC(sub_830695A8);
PPC_FUNC_IMPL(__imp__sub_830695A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830695BC"))) PPC_WEAK_FUNC(sub_830695BC);
PPC_FUNC_IMPL(__imp__sub_830695BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830695C0"))) PPC_WEAK_FUNC(sub_830695C0);
PPC_FUNC_IMPL(__imp__sub_830695C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830695D4"))) PPC_WEAK_FUNC(sub_830695D4);
PPC_FUNC_IMPL(__imp__sub_830695D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830695D8"))) PPC_WEAK_FUNC(sub_830695D8);
PPC_FUNC_IMPL(__imp__sub_830695D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830695EC"))) PPC_WEAK_FUNC(sub_830695EC);
PPC_FUNC_IMPL(__imp__sub_830695EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830695F0"))) PPC_WEAK_FUNC(sub_830695F0);
PPC_FUNC_IMPL(__imp__sub_830695F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83069604"))) PPC_WEAK_FUNC(sub_83069604);
PPC_FUNC_IMPL(__imp__sub_83069604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069608"))) PPC_WEAK_FUNC(sub_83069608);
PPC_FUNC_IMPL(__imp__sub_83069608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83069610;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83069624;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069688
	if (ctx.cr6.eq) goto loc_83069688;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x830181f8
	ctx.lr = 0x83069658;
	sub_830181F8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83069670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830696a8
	if (ctx.cr6.eq) goto loc_830696A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83069680;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83069688:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,31280
	ctx.r4.s64 = ctx.r11.s64 + 31280;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x830696A8;
	sub_82D17988(ctx, base);
loc_830696A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830696B0"))) PPC_WEAK_FUNC(sub_830696B0);
PPC_FUNC_IMPL(__imp__sub_830696B0) {
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
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830696D8;
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

__attribute__((alias("__imp__sub_830696F0"))) PPC_WEAK_FUNC(sub_830696F0);
PPC_FUNC_IMPL(__imp__sub_830696F0) {
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
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306971C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8306972c
	if (ctx.cr6.eq) goto loc_8306972C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306972C:
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

__attribute__((alias("__imp__sub_83069744"))) PPC_WEAK_FUNC(sub_83069744);
PPC_FUNC_IMPL(__imp__sub_83069744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069748"))) PPC_WEAK_FUNC(sub_83069748);
PPC_FUNC_IMPL(__imp__sub_83069748) {
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
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83069784
	if (ctx.cr6.eq) goto loc_83069784;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83069784:
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

__attribute__((alias("__imp__sub_8306979C"))) PPC_WEAK_FUNC(sub_8306979C);
PPC_FUNC_IMPL(__imp__sub_8306979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830697A0"))) PPC_WEAK_FUNC(sub_830697A0);
PPC_FUNC_IMPL(__imp__sub_830697A0) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,-31376
	ctx.r9.s64 = ctx.r11.s64 + -31376;
	// addi r8,r10,-31396
	ctx.r8.s64 = ctx.r10.s64 + -31396;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8303dc48
	ctx.lr = 0x830697D4;
	sub_8303DC48(ctx, base);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// addi r6,r7,-23096
	ctx.r6.s64 = ctx.r7.s64 + -23096;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_830697F4"))) PPC_WEAK_FUNC(sub_830697F4);
PPC_FUNC_IMPL(__imp__sub_830697F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830697F8"))) PPC_WEAK_FUNC(sub_830697F8);
PPC_FUNC_IMPL(__imp__sub_830697F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83069800;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83069814;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830699c4
	if (ctx.cr6.eq) goto loc_830699C4;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,212(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83069850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,220(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 220);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83069868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,228(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 228);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x83069880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,244(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830698B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,252(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 252);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x830698C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,260(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 260);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830698E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r5,268(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 268);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83069918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r3,-32235
	ctx.r3.s64 = -2112552960;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r28,r3,-1496
	ctx.r28.s64 = ctx.r3.s64 + -1496;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stfs f10,144(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,276(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8306996C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lfs f9,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,152(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,156(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f7,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,160(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f6,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,164(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f5,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stfs f5,168(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// bl 0x8303f590
	ctx.lr = 0x830699AC;
	sub_8303F590(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830699e4
	if (ctx.cr6.eq) goto loc_830699E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x830699BC;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_830699C4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,31504
	ctx.r4.s64 = ctx.r11.s64 + 31504;
	// li r5,43
	ctx.r5.s64 = 43;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x830699E4;
	sub_82D17988(ctx, base);
loc_830699E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830699EC"))) PPC_WEAK_FUNC(sub_830699EC);
PPC_FUNC_IMPL(__imp__sub_830699EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830699F0"))) PPC_WEAK_FUNC(sub_830699F0);
PPC_FUNC_IMPL(__imp__sub_830699F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830699F8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x83069a88
	if (ctx.cr6.eq) goto loc_83069A88;
	// bctrl 
	ctx.lr = 0x83069A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,-12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83069A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,212(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 212);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83069A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fadds f3,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f1,6140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83069ac0
	goto loc_83069AC0;
loc_83069A88:
	// bctrl 
	ctx.lr = 0x83069A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,-12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83069AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfs f0,6380(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,6140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f31,f0
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_83069AC0:
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ffea60
	ctx.lr = 0x83069AD0;
	sub_82FFEA60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83069AE0"))) PPC_WEAK_FUNC(sub_83069AE0);
PPC_FUNC_IMPL(__imp__sub_83069AE0) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83069B04;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069b40
	if (ctx.cr6.eq) goto loc_83069B40;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83069b60
	if (ctx.cr6.eq) goto loc_83069B60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83069B3C;
	sub_82D5ED58(ctx, base);
	// b 0x83069b60
	goto loc_83069B60;
loc_83069B40:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,31728
	ctx.r4.s64 = ctx.r11.s64 + 31728;
	// li r5,94
	ctx.r5.s64 = 94;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83069B60;
	sub_82D17988(ctx, base);
loc_83069B60:
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

__attribute__((alias("__imp__sub_83069B78"))) PPC_WEAK_FUNC(sub_83069B78);
PPC_FUNC_IMPL(__imp__sub_83069B78) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83069B9C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069bd8
	if (ctx.cr6.eq) goto loc_83069BD8;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83069bf8
	if (ctx.cr6.eq) goto loc_83069BF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83069BD4;
	sub_82D5ED58(ctx, base);
	// b 0x83069bf8
	goto loc_83069BF8;
loc_83069BD8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,31960
	ctx.r4.s64 = ctx.r11.s64 + 31960;
	// li r5,101
	ctx.r5.s64 = 101;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83069BF8;
	sub_82D17988(ctx, base);
loc_83069BF8:
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

__attribute__((alias("__imp__sub_83069C10"))) PPC_WEAK_FUNC(sub_83069C10);
PPC_FUNC_IMPL(__imp__sub_83069C10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83069C24"))) PPC_WEAK_FUNC(sub_83069C24);
PPC_FUNC_IMPL(__imp__sub_83069C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069C28"))) PPC_WEAK_FUNC(sub_83069C28);
PPC_FUNC_IMPL(__imp__sub_83069C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83069C3C"))) PPC_WEAK_FUNC(sub_83069C3C);
PPC_FUNC_IMPL(__imp__sub_83069C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069C40"))) PPC_WEAK_FUNC(sub_83069C40);
PPC_FUNC_IMPL(__imp__sub_83069C40) {
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
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83069C68;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069cac
	if (ctx.cr6.eq) goto loc_83069CAC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,256(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83069C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83069ccc
	if (ctx.cr6.eq) goto loc_83069CCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83069CA8;
	sub_82D5ED58(ctx, base);
	// b 0x83069ccc
	goto loc_83069CCC;
loc_83069CAC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,32184
	ctx.r4.s64 = ctx.r11.s64 + 32184;
	// li r5,122
	ctx.r5.s64 = 122;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83069CCC;
	sub_82D17988(ctx, base);
loc_83069CCC:
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

__attribute__((alias("__imp__sub_83069CE4"))) PPC_WEAK_FUNC(sub_83069CE4);
PPC_FUNC_IMPL(__imp__sub_83069CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83069CE8"))) PPC_WEAK_FUNC(sub_83069CE8);
PPC_FUNC_IMPL(__imp__sub_83069CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83069CF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83069D04;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069d7c
	if (ctx.cr6.eq) goto loc_83069D7C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r11,-1496
	ctx.r30.s64 = ctx.r11.s64 + -1496;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83069d70
	if (ctx.cr6.eq) goto loc_83069D70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83069D70;
	sub_82D5ED58(ctx, base);
loc_83069D70:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83069D7C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,32432
	ctx.r4.s64 = ctx.r11.s64 + 32432;
	// li r5,130
	ctx.r5.s64 = 130;
	// addi r8,r4,-148
	ctx.r8.s64 = ctx.r4.s64 + -148;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83069D9C;
	sub_82D17988(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r10,-1496
	ctx.r9.s64 = ctx.r10.s64 + -1496;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83069DB0"))) PPC_WEAK_FUNC(sub_83069DB0);
PPC_FUNC_IMPL(__imp__sub_83069DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83069DB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83069DCC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069e44
	if (ctx.cr6.eq) goto loc_83069E44;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r11,-1496
	ctx.r30.s64 = ctx.r11.s64 + -1496;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83069e38
	if (ctx.cr6.eq) goto loc_83069E38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83069E38;
	sub_82D5ED58(ctx, base);
loc_83069E38:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83069E44:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,32672
	ctx.r4.s64 = ctx.r11.s64 + 32672;
	// li r5,141
	ctx.r5.s64 = 141;
	// addi r8,r4,-140
	ctx.r8.s64 = ctx.r4.s64 + -140;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83069E64;
	sub_82D17988(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r10,-1496
	ctx.r9.s64 = ctx.r10.s64 + -1496;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83069E78"))) PPC_WEAK_FUNC(sub_83069E78);
PPC_FUNC_IMPL(__imp__sub_83069E78) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83069E9C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069ed8
	if (ctx.cr6.eq) goto loc_83069ED8;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83069ef8
	if (ctx.cr6.eq) goto loc_83069EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83069ED4;
	sub_82D5ED58(ctx, base);
	// b 0x83069ef8
	goto loc_83069EF8;
loc_83069ED8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-32632
	ctx.r4.s64 = ctx.r11.s64 + -32632;
	// li r5,152
	ctx.r5.s64 = 152;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83069EF8;
	sub_82D17988(ctx, base);
loc_83069EF8:
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

__attribute__((alias("__imp__sub_83069F10"))) PPC_WEAK_FUNC(sub_83069F10);
PPC_FUNC_IMPL(__imp__sub_83069F10) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x83069F34;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83069f70
	if (ctx.cr6.eq) goto loc_83069F70;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83069f90
	if (ctx.cr6.eq) goto loc_83069F90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83069F6C;
	sub_82D5ED58(ctx, base);
	// b 0x83069f90
	goto loc_83069F90;
loc_83069F70:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-32408
	ctx.r4.s64 = ctx.r11.s64 + -32408;
	// li r5,159
	ctx.r5.s64 = 159;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83069F90;
	sub_82D17988(ctx, base);
loc_83069F90:
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

__attribute__((alias("__imp__sub_83069FA8"))) PPC_WEAK_FUNC(sub_83069FA8);
PPC_FUNC_IMPL(__imp__sub_83069FA8) {
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
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83069FD0;
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

__attribute__((alias("__imp__sub_83069FE8"))) PPC_WEAK_FUNC(sub_83069FE8);
PPC_FUNC_IMPL(__imp__sub_83069FE8) {
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
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A010;
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

__attribute__((alias("__imp__sub_8306A028"))) PPC_WEAK_FUNC(sub_8306A028);
PPC_FUNC_IMPL(__imp__sub_8306A028) {
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
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A050;
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

__attribute__((alias("__imp__sub_8306A068"))) PPC_WEAK_FUNC(sub_8306A068);
PPC_FUNC_IMPL(__imp__sub_8306A068) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306A07C"))) PPC_WEAK_FUNC(sub_8306A07C);
PPC_FUNC_IMPL(__imp__sub_8306A07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A080"))) PPC_WEAK_FUNC(sub_8306A080);
PPC_FUNC_IMPL(__imp__sub_8306A080) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306A094"))) PPC_WEAK_FUNC(sub_8306A094);
PPC_FUNC_IMPL(__imp__sub_8306A094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A098"))) PPC_WEAK_FUNC(sub_8306A098);
PPC_FUNC_IMPL(__imp__sub_8306A098) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306A0BC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306a0f8
	if (ctx.cr6.eq) goto loc_8306A0F8;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8306a118
	if (ctx.cr6.eq) goto loc_8306A118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306A0F4;
	sub_82D5ED58(ctx, base);
	// b 0x8306a118
	goto loc_8306A118;
loc_8306A0F8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-32176
	ctx.r4.s64 = ctx.r11.s64 + -32176;
	// li r5,198
	ctx.r5.s64 = 198;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306A118;
	sub_82D17988(ctx, base);
loc_8306A118:
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

__attribute__((alias("__imp__sub_8306A130"))) PPC_WEAK_FUNC(sub_8306A130);
PPC_FUNC_IMPL(__imp__sub_8306A130) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306A154;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306a190
	if (ctx.cr6.eq) goto loc_8306A190;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8306a1b0
	if (ctx.cr6.eq) goto loc_8306A1B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306A18C;
	sub_82D5ED58(ctx, base);
	// b 0x8306a1b0
	goto loc_8306A1B0;
loc_8306A190:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-31944
	ctx.r4.s64 = ctx.r11.s64 + -31944;
	// li r5,204
	ctx.r5.s64 = 204;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306A1B0;
	sub_82D17988(ctx, base);
loc_8306A1B0:
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

__attribute__((alias("__imp__sub_8306A1C8"))) PPC_WEAK_FUNC(sub_8306A1C8);
PPC_FUNC_IMPL(__imp__sub_8306A1C8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306A1EC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306a228
	if (ctx.cr6.eq) goto loc_8306A228;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8306a248
	if (ctx.cr6.eq) goto loc_8306A248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306A224;
	sub_82D5ED58(ctx, base);
	// b 0x8306a248
	goto loc_8306A248;
loc_8306A228:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-31720
	ctx.r4.s64 = ctx.r11.s64 + -31720;
	// li r5,210
	ctx.r5.s64 = 210;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306A248;
	sub_82D17988(ctx, base);
loc_8306A248:
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

__attribute__((alias("__imp__sub_8306A260"))) PPC_WEAK_FUNC(sub_8306A260);
PPC_FUNC_IMPL(__imp__sub_8306A260) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306A274"))) PPC_WEAK_FUNC(sub_8306A274);
PPC_FUNC_IMPL(__imp__sub_8306A274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A278"))) PPC_WEAK_FUNC(sub_8306A278);
PPC_FUNC_IMPL(__imp__sub_8306A278) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306A28C"))) PPC_WEAK_FUNC(sub_8306A28C);
PPC_FUNC_IMPL(__imp__sub_8306A28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A290"))) PPC_WEAK_FUNC(sub_8306A290);
PPC_FUNC_IMPL(__imp__sub_8306A290) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306A2A4"))) PPC_WEAK_FUNC(sub_8306A2A4);
PPC_FUNC_IMPL(__imp__sub_8306A2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A2A8"))) PPC_WEAK_FUNC(sub_8306A2A8);
PPC_FUNC_IMPL(__imp__sub_8306A2A8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306A2CC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306a308
	if (ctx.cr6.eq) goto loc_8306A308;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8306a328
	if (ctx.cr6.eq) goto loc_8306A328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306A304;
	sub_82D5ED58(ctx, base);
	// b 0x8306a328
	goto loc_8306A328;
loc_8306A308:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-31496
	ctx.r4.s64 = ctx.r11.s64 + -31496;
	// li r5,240
	ctx.r5.s64 = 240;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306A328;
	sub_82D17988(ctx, base);
loc_8306A328:
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

__attribute__((alias("__imp__sub_8306A340"))) PPC_WEAK_FUNC(sub_8306A340);
PPC_FUNC_IMPL(__imp__sub_8306A340) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306A354"))) PPC_WEAK_FUNC(sub_8306A354);
PPC_FUNC_IMPL(__imp__sub_8306A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A358"))) PPC_WEAK_FUNC(sub_8306A358);
PPC_FUNC_IMPL(__imp__sub_8306A358) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8306a3a0
	if (ctx.cr6.eq) goto loc_8306A3A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8306A3A0:
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

__attribute__((alias("__imp__sub_8306A3B4"))) PPC_WEAK_FUNC(sub_8306A3B4);
PPC_FUNC_IMPL(__imp__sub_8306A3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A3B8"))) PPC_WEAK_FUNC(sub_8306A3B8);
PPC_FUNC_IMPL(__imp__sub_8306A3B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306A3CC"))) PPC_WEAK_FUNC(sub_8306A3CC);
PPC_FUNC_IMPL(__imp__sub_8306A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A3D0"))) PPC_WEAK_FUNC(sub_8306A3D0);
PPC_FUNC_IMPL(__imp__sub_8306A3D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306A3E4"))) PPC_WEAK_FUNC(sub_8306A3E4);
PPC_FUNC_IMPL(__imp__sub_8306A3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A3E8"))) PPC_WEAK_FUNC(sub_8306A3E8);
PPC_FUNC_IMPL(__imp__sub_8306A3E8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306a414
	if (ctx.cr6.eq) goto loc_8306A414;
	// bl 0x8303f9b8
	ctx.lr = 0x8306A414;
	sub_8303F9B8(ctx, base);
loc_8306A414:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8306a480
	if (!ctx.cr6.eq) goto loc_8306A480;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,296(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8306A450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,268(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 268);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8306A468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,276(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8306A480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306A480:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_8306A498"))) PPC_WEAK_FUNC(sub_8306A498);
PPC_FUNC_IMPL(__imp__sub_8306A498) {
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
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-22368
	ctx.r9.s64 = ctx.r10.s64 + -22368;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8303fb30
	ctx.lr = 0x8306A4CC;
	sub_8303FB30(ctx, base);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// addi r6,r8,-31376
	ctx.r6.s64 = ctx.r8.s64 + -31376;
	// addi r5,r7,-31396
	ctx.r5.s64 = ctx.r7.s64 + -31396;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8306A4FC"))) PPC_WEAK_FUNC(sub_8306A4FC);
PPC_FUNC_IMPL(__imp__sub_8306A4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A500"))) PPC_WEAK_FUNC(sub_8306A500);
PPC_FUNC_IMPL(__imp__sub_8306A500) {
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
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303fb90
	ctx.lr = 0x8306A528;
	sub_8303FB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x82ff8508
	ctx.lr = 0x8306A534;
	sub_82FF8508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8306A550"))) PPC_WEAK_FUNC(sub_8306A550);
PPC_FUNC_IMPL(__imp__sub_8306A550) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x8306a558
	sub_8306A558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306A558"))) PPC_WEAK_FUNC(sub_8306A558);
PPC_FUNC_IMPL(__imp__sub_8306A558) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,-31376
	ctx.r9.s64 = ctx.r11.s64 + -31376;
	// addi r8,r10,-31396
	ctx.r8.s64 = ctx.r10.s64 + -31396;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8303dc48
	ctx.lr = 0x8306A594;
	sub_8303DC48(ctx, base);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// addi r5,r7,-23096
	ctx.r5.s64 = ctx.r7.s64 + -23096;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// beq cr6,0x8306a5c8
	if (ctx.cr6.eq) goto loc_8306A5C8;
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
	ctx.lr = 0x8306A5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306A5C8:
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

__attribute__((alias("__imp__sub_8306A5E4"))) PPC_WEAK_FUNC(sub_8306A5E4);
PPC_FUNC_IMPL(__imp__sub_8306A5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A5E8"))) PPC_WEAK_FUNC(sub_8306A5E8);
PPC_FUNC_IMPL(__imp__sub_8306A5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32780
	ctx.r11.u64 = ctx.r11.u64 | 32780;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306A5F8"))) PPC_WEAK_FUNC(sub_8306A5F8);
PPC_FUNC_IMPL(__imp__sub_8306A5F8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306A604"))) PPC_WEAK_FUNC(sub_8306A604);
PPC_FUNC_IMPL(__imp__sub_8306A604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A608"))) PPC_WEAK_FUNC(sub_8306A608);
PPC_FUNC_IMPL(__imp__sub_8306A608) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306A610"))) PPC_WEAK_FUNC(sub_8306A610);
PPC_FUNC_IMPL(__imp__sub_8306A610) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306A624"))) PPC_WEAK_FUNC(sub_8306A624);
PPC_FUNC_IMPL(__imp__sub_8306A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A628"))) PPC_WEAK_FUNC(sub_8306A628);
PPC_FUNC_IMPL(__imp__sub_8306A628) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306A64C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306a6ac
	if (ctx.cr6.eq) goto loc_8306A6AC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8306A688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x830181f8
	ctx.lr = 0x8306A698;
	sub_830181F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8306a6cc
	if (ctx.cr6.eq) goto loc_8306A6CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306A6A8;
	sub_82D5ED58(ctx, base);
	// b 0x8306a6cc
	goto loc_8306A6CC;
loc_8306A6AC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-30944
	ctx.r4.s64 = ctx.r11.s64 + -30944;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306A6CC;
	sub_82D17988(ctx, base);
loc_8306A6CC:
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

__attribute__((alias("__imp__sub_8306A6E4"))) PPC_WEAK_FUNC(sub_8306A6E4);
PPC_FUNC_IMPL(__imp__sub_8306A6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A6E8"))) PPC_WEAK_FUNC(sub_8306A6E8);
PPC_FUNC_IMPL(__imp__sub_8306A6E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306A6FC"))) PPC_WEAK_FUNC(sub_8306A6FC);
PPC_FUNC_IMPL(__imp__sub_8306A6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A700"))) PPC_WEAK_FUNC(sub_8306A700);
PPC_FUNC_IMPL(__imp__sub_8306A700) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306A714"))) PPC_WEAK_FUNC(sub_8306A714);
PPC_FUNC_IMPL(__imp__sub_8306A714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A718"))) PPC_WEAK_FUNC(sub_8306A718);
PPC_FUNC_IMPL(__imp__sub_8306A718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8306A720;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306A738;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306a81c
	if (ctx.cr6.eq) goto loc_8306A81C;
	// clrlwi r11,r30,29
	ctx.r11.u64 = ctx.r30.u32 & 0x7;
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8306a79c
	if (ctx.cr6.eq) goto loc_8306A79C;
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8306a788
	if (ctx.cr6.eq) goto loc_8306A788;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,29
	ctx.r9.u64 = ctx.r3.u32 & 0x7;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8306a79c
	if (ctx.cr6.eq) goto loc_8306A79C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8306a79c
	if (!ctx.cr6.eq) goto loc_8306A79C;
loc_8306A788:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306A79C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x8306a7c4
	if (ctx.cr6.eq) goto loc_8306A7C4;
	// bctrl 
	ctx.lr = 0x8306A7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 | ctx.r30.u64;
	// b 0x8306a7cc
	goto loc_8306A7CC;
loc_8306A7C4:
	// bctrl 
	ctx.lr = 0x8306A7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// andc r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 & ~ctx.r30.u64;
loc_8306A7CC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A7E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8306A7F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x830181f8
	ctx.lr = 0x8306A804;
	sub_830181F8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8306a83c
	if (ctx.cr6.eq) goto loc_8306A83C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306A814;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8306A81C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-30712
	ctx.r4.s64 = ctx.r11.s64 + -30712;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r8,r4,-128
	ctx.r8.s64 = ctx.r4.s64 + -128;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306A83C;
	sub_82D17988(ctx, base);
loc_8306A83C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306A844"))) PPC_WEAK_FUNC(sub_8306A844);
PPC_FUNC_IMPL(__imp__sub_8306A844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A848"))) PPC_WEAK_FUNC(sub_8306A848);
PPC_FUNC_IMPL(__imp__sub_8306A848) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306A870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// and r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 & ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8306A888"))) PPC_WEAK_FUNC(sub_8306A888);
PPC_FUNC_IMPL(__imp__sub_8306A888) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306A8AC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306a8dc
	if (ctx.cr6.eq) goto loc_8306A8DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303dcf0
	ctx.lr = 0x8306A8C8;
	sub_8303DCF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8306a8fc
	if (ctx.cr6.eq) goto loc_8306A8FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306A8D8;
	sub_82D5ED58(ctx, base);
	// b 0x8306a8fc
	goto loc_8306A8FC;
loc_8306A8DC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-30472
	ctx.r4.s64 = ctx.r11.s64 + -30472;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306A8FC;
	sub_82D17988(ctx, base);
loc_8306A8FC:
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

__attribute__((alias("__imp__sub_8306A914"))) PPC_WEAK_FUNC(sub_8306A914);
PPC_FUNC_IMPL(__imp__sub_8306A914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A918"))) PPC_WEAK_FUNC(sub_8306A918);
PPC_FUNC_IMPL(__imp__sub_8306A918) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306A93C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306a96c
	if (ctx.cr6.eq) goto loc_8306A96C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303e280
	ctx.lr = 0x8306A958;
	sub_8303E280(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8306a98c
	if (ctx.cr6.eq) goto loc_8306A98C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306A968;
	sub_82D5ED58(ctx, base);
	// b 0x8306a98c
	goto loc_8306A98C;
loc_8306A96C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-30232
	ctx.r4.s64 = ctx.r11.s64 + -30232;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306A98C;
	sub_82D17988(ctx, base);
loc_8306A98C:
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

__attribute__((alias("__imp__sub_8306A9A4"))) PPC_WEAK_FUNC(sub_8306A9A4);
PPC_FUNC_IMPL(__imp__sub_8306A9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306A9A8"))) PPC_WEAK_FUNC(sub_8306A9A8);
PPC_FUNC_IMPL(__imp__sub_8306A9A8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306A9CC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306a9fc
	if (ctx.cr6.eq) goto loc_8306A9FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303c900
	ctx.lr = 0x8306A9E8;
	sub_8303C900(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8306aa1c
	if (ctx.cr6.eq) goto loc_8306AA1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306A9F8;
	sub_82D5ED58(ctx, base);
	// b 0x8306aa1c
	goto loc_8306AA1C;
loc_8306A9FC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-29992
	ctx.r4.s64 = ctx.r11.s64 + -29992;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306AA1C;
	sub_82D17988(ctx, base);
loc_8306AA1C:
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

__attribute__((alias("__imp__sub_8306AA34"))) PPC_WEAK_FUNC(sub_8306AA34);
PPC_FUNC_IMPL(__imp__sub_8306AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306AA38"))) PPC_WEAK_FUNC(sub_8306AA38);
PPC_FUNC_IMPL(__imp__sub_8306AA38) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306AA5C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306aa8c
	if (ctx.cr6.eq) goto loc_8306AA8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303ce00
	ctx.lr = 0x8306AA78;
	sub_8303CE00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8306aaac
	if (ctx.cr6.eq) goto loc_8306AAAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306AA88;
	sub_82D5ED58(ctx, base);
	// b 0x8306aaac
	goto loc_8306AAAC;
loc_8306AA8C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-29752
	ctx.r4.s64 = ctx.r11.s64 + -29752;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306AAAC;
	sub_82D17988(ctx, base);
loc_8306AAAC:
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

__attribute__((alias("__imp__sub_8306AAC4"))) PPC_WEAK_FUNC(sub_8306AAC4);
PPC_FUNC_IMPL(__imp__sub_8306AAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306AAC8"))) PPC_WEAK_FUNC(sub_8306AAC8);
PPC_FUNC_IMPL(__imp__sub_8306AAC8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306AAEC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306ab1c
	if (ctx.cr6.eq) goto loc_8306AB1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303e378
	ctx.lr = 0x8306AB08;
	sub_8303E378(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8306ab3c
	if (ctx.cr6.eq) goto loc_8306AB3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306AB18;
	sub_82D5ED58(ctx, base);
	// b 0x8306ab3c
	goto loc_8306AB3C;
loc_8306AB1C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-29512
	ctx.r4.s64 = ctx.r11.s64 + -29512;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306AB3C;
	sub_82D17988(ctx, base);
loc_8306AB3C:
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

__attribute__((alias("__imp__sub_8306AB54"))) PPC_WEAK_FUNC(sub_8306AB54);
PPC_FUNC_IMPL(__imp__sub_8306AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306AB58"))) PPC_WEAK_FUNC(sub_8306AB58);
PPC_FUNC_IMPL(__imp__sub_8306AB58) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306AB7C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306abac
	if (ctx.cr6.eq) goto loc_8306ABAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303d3a0
	ctx.lr = 0x8306AB98;
	sub_8303D3A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8306abcc
	if (ctx.cr6.eq) goto loc_8306ABCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306ABA8;
	sub_82D5ED58(ctx, base);
	// b 0x8306abcc
	goto loc_8306ABCC;
loc_8306ABAC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-29264
	ctx.r4.s64 = ctx.r11.s64 + -29264;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r8,r4,-144
	ctx.r8.s64 = ctx.r4.s64 + -144;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306ABCC;
	sub_82D17988(ctx, base);
loc_8306ABCC:
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

__attribute__((alias("__imp__sub_8306ABE4"))) PPC_WEAK_FUNC(sub_8306ABE4);
PPC_FUNC_IMPL(__imp__sub_8306ABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306ABE8"))) PPC_WEAK_FUNC(sub_8306ABE8);
PPC_FUNC_IMPL(__imp__sub_8306ABE8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306AC0C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306ac6c
	if (ctx.cr6.eq) goto loc_8306AC6C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306AC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8306AC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x830181f8
	ctx.lr = 0x8306AC58;
	sub_830181F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8306ac8c
	if (ctx.cr6.eq) goto loc_8306AC8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306AC68;
	sub_82D5ED58(ctx, base);
	// b 0x8306ac8c
	goto loc_8306AC8C;
loc_8306AC6C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-29032
	ctx.r4.s64 = ctx.r11.s64 + -29032;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r8,r4,-128
	ctx.r8.s64 = ctx.r4.s64 + -128;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306AC8C;
	sub_82D17988(ctx, base);
loc_8306AC8C:
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

__attribute__((alias("__imp__sub_8306ACA4"))) PPC_WEAK_FUNC(sub_8306ACA4);
PPC_FUNC_IMPL(__imp__sub_8306ACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306ACA8"))) PPC_WEAK_FUNC(sub_8306ACA8);
PPC_FUNC_IMPL(__imp__sub_8306ACA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306ACBC"))) PPC_WEAK_FUNC(sub_8306ACBC);
PPC_FUNC_IMPL(__imp__sub_8306ACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306ACC0"))) PPC_WEAK_FUNC(sub_8306ACC0);
PPC_FUNC_IMPL(__imp__sub_8306ACC0) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306ACE8;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306ad48
	if (ctx.cr6.eq) goto loc_8306AD48;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306AD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8306AD24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x830181f8
	ctx.lr = 0x8306AD34;
	sub_830181F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8306ad68
	if (ctx.cr6.eq) goto loc_8306AD68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306AD44;
	sub_82D5ED58(ctx, base);
	// b 0x8306ad68
	goto loc_8306AD68;
loc_8306AD48:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-28792
	ctx.r4.s64 = ctx.r11.s64 + -28792;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306AD68;
	sub_82D17988(ctx, base);
loc_8306AD68:
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

__attribute__((alias("__imp__sub_8306AD84"))) PPC_WEAK_FUNC(sub_8306AD84);
PPC_FUNC_IMPL(__imp__sub_8306AD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306AD88"))) PPC_WEAK_FUNC(sub_8306AD88);
PPC_FUNC_IMPL(__imp__sub_8306AD88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8306AD9C"))) PPC_WEAK_FUNC(sub_8306AD9C);
PPC_FUNC_IMPL(__imp__sub_8306AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306ADA0"))) PPC_WEAK_FUNC(sub_8306ADA0);
PPC_FUNC_IMPL(__imp__sub_8306ADA0) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8306ADC4;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306adf4
	if (ctx.cr6.eq) goto loc_8306ADF4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8303db70
	ctx.lr = 0x8306ADE0;
	sub_8303DB70(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8306ae14
	if (ctx.cr6.eq) goto loc_8306AE14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8306ADF0;
	sub_82D5ED58(ctx, base);
	// b 0x8306ae14
	goto loc_8306AE14;
loc_8306ADF4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-28552
	ctx.r4.s64 = ctx.r11.s64 + -28552;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8306AE14;
	sub_82D17988(ctx, base);
loc_8306AE14:
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

__attribute__((alias("__imp__sub_8306AE2C"))) PPC_WEAK_FUNC(sub_8306AE2C);
PPC_FUNC_IMPL(__imp__sub_8306AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306AE30"))) PPC_WEAK_FUNC(sub_8306AE30);
PPC_FUNC_IMPL(__imp__sub_8306AE30) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306AE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8306ae98
	if (ctx.cr6.eq) goto loc_8306AE98;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306AE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8306AE84;
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
loc_8306AE98:
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

__attribute__((alias("__imp__sub_8306AEB0"))) PPC_WEAK_FUNC(sub_8306AEB0);
PPC_FUNC_IMPL(__imp__sub_8306AEB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ff4f88
	sub_82FF4F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306AEB4"))) PPC_WEAK_FUNC(sub_8306AEB4);
PPC_FUNC_IMPL(__imp__sub_8306AEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

