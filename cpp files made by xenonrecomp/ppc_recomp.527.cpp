#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83083B28"))) PPC_WEAK_FUNC(sub_83083B28);
PPC_FUNC_IMPL(__imp__sub_83083B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83083B40"))) PPC_WEAK_FUNC(sub_83083B40);
PPC_FUNC_IMPL(__imp__sub_83083B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83083B58"))) PPC_WEAK_FUNC(sub_83083B58);
PPC_FUNC_IMPL(__imp__sub_83083B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83083B74"))) PPC_WEAK_FUNC(sub_83083B74);
PPC_FUNC_IMPL(__imp__sub_83083B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83083B78"))) PPC_WEAK_FUNC(sub_83083B78);
PPC_FUNC_IMPL(__imp__sub_83083B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83083B94"))) PPC_WEAK_FUNC(sub_83083B94);
PPC_FUNC_IMPL(__imp__sub_83083B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83083B98"))) PPC_WEAK_FUNC(sub_83083B98);
PPC_FUNC_IMPL(__imp__sub_83083B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83083BB4"))) PPC_WEAK_FUNC(sub_83083BB4);
PPC_FUNC_IMPL(__imp__sub_83083BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83083BB8"))) PPC_WEAK_FUNC(sub_83083BB8);
PPC_FUNC_IMPL(__imp__sub_83083BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
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
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83083BE4"))) PPC_WEAK_FUNC(sub_83083BE4);
PPC_FUNC_IMPL(__imp__sub_83083BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83083BE8"))) PPC_WEAK_FUNC(sub_83083BE8);
PPC_FUNC_IMPL(__imp__sub_83083BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83083BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,288
	ctx.r30.s64 = ctx.r3.s64 + 288;
loc_83083C00:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83083c28
	if (ctx.cr6.eq) goto loc_83083C28;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r10,-28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83083c28
	if (ctx.cr6.eq) goto loc_83083C28;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83081428
	ctx.lr = 0x83083C24;
	sub_83081428(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_83083C28:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x83083c00
	if (ctx.cr6.lt) goto loc_83083C00;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83083c5c
	if (ctx.cr6.eq) goto loc_83083C5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83083C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83083C5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83083C68"))) PPC_WEAK_FUNC(sub_83083C68);
PPC_FUNC_IMPL(__imp__sub_83083C68) {
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
	// bl 0x830812e8
	ctx.lr = 0x83083C88;
	sub_830812E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83083cb0
	if (ctx.cr6.eq) goto loc_83083CB0;
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
	ctx.lr = 0x83083CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83083CB0:
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

__attribute__((alias("__imp__sub_83083CCC"))) PPC_WEAK_FUNC(sub_83083CCC);
PPC_FUNC_IMPL(__imp__sub_83083CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83083CD0"))) PPC_WEAK_FUNC(sub_83083CD0);
PPC_FUNC_IMPL(__imp__sub_83083CD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83083D10"))) PPC_WEAK_FUNC(sub_83083D10);
PPC_FUNC_IMPL(__imp__sub_83083D10) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83083D28"))) PPC_WEAK_FUNC(sub_83083D28);
PPC_FUNC_IMPL(__imp__sub_83083D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83083d3c
	if (!ctx.cr6.gt) goto loc_83083D3C;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_83083D3C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83083d50
	if (!ctx.cr6.gt) goto loc_83083D50;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_83083D50:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83083d64
	if (!ctx.cr6.gt) goto loc_83083D64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_83083D64:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83083D7C"))) PPC_WEAK_FUNC(sub_83083D7C);
PPC_FUNC_IMPL(__imp__sub_83083D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83083D80"))) PPC_WEAK_FUNC(sub_83083D80);
PPC_FUNC_IMPL(__imp__sub_83083D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r5,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r5.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r10,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r9,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r8,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r8.u32);
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r7,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r7.u32);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r6,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r6.u32);
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r5,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83083DF4"))) PPC_WEAK_FUNC(sub_83083DF4);
PPC_FUNC_IMPL(__imp__sub_83083DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83083DF8"))) PPC_WEAK_FUNC(sub_83083DF8);
PPC_FUNC_IMPL(__imp__sub_83083DF8) {
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
	// bl 0x83135190
	ctx.lr = 0x83083E10;
	sub_83135190(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r10,-772
	ctx.r8.s64 = ctx.r10.s64 + -772;
	// addi r7,r9,-776
	ctx.r7.s64 = ctx.r9.s64 + -776;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
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

__attribute__((alias("__imp__sub_83083E84"))) PPC_WEAK_FUNC(sub_83083E84);
PPC_FUNC_IMPL(__imp__sub_83083E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83083E88"))) PPC_WEAK_FUNC(sub_83083E88);
PPC_FUNC_IMPL(__imp__sub_83083E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,-772
	ctx.r9.s64 = ctx.r11.s64 + -772;
	// addi r8,r10,-776
	ctx.r8.s64 = ctx.r10.s64 + -776;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x831352c0
	sub_831352C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83083EA4"))) PPC_WEAK_FUNC(sub_83083EA4);
PPC_FUNC_IMPL(__imp__sub_83083EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83083EA8"))) PPC_WEAK_FUNC(sub_83083EA8);
PPC_FUNC_IMPL(__imp__sub_83083EA8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83083EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f13,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f12,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f11,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,60(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f10,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,64(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f9,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,68(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f8,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,72(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f7,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,76(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f6,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,80(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
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

__attribute__((alias("__imp__sub_83083F44"))) PPC_WEAK_FUNC(sub_83083F44);
PPC_FUNC_IMPL(__imp__sub_83083F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83083F48"))) PPC_WEAK_FUNC(sub_83083F48);
PPC_FUNC_IMPL(__imp__sub_83083F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83083F50;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x83135200
	ctx.lr = 0x83083F78;
	sub_83135200(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x83084048
	if (ctx.cr6.eq) goto loc_83084048;
	// lfs f11,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r30,152
	ctx.r11.s64 = ctx.r30.s64 + 152;
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f8,172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f5,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// lfs f2,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 - ctx.f13.f64));
	// fmuls f10,f9,f2
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f8,f1,f6
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f5,f1,f4
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f7,f3,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f31,f11,f9
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f30,f11,f6
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmsubs f10,f3,f6,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 - ctx.f10.f64));
	// fmuls f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmsubs f8,f4,f2,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 - ctx.f8.f64));
	// fmadds f5,f3,f9,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmsubs f7,f1,f9,f7
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 - ctx.f7.f64));
	// fmuls f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f10,f8,f12
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f8,f2,f6,f5
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fsubs f7,f11,f4
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// fsubs f6,f31,f10
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fmuls f4,f8,f3
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f3,f8,f2
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f2,f1,f8
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fsubs f5,f30,f9
	ctx.f5.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// fadds f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fadds f11,f7,f2
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f12,f5,f3
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,60(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,56(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// b 0x8308405c
	goto loc_8308405C;
loc_83084048:
	// stfs f12,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,60(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_8308405C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83084128
	if (ctx.cr6.eq) goto loc_83084128;
	// lfs f12,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r29,152
	ctx.r11.s64 = ctx.r29.s64 + 152;
	// lfs f11,168(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,172(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f5,176(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// lfs f2,156(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,164(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,160(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 - ctx.f13.f64));
	// lfs f3,152(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f8,f1,f6
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f7,f2,f6
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmuls f5,f4,f3
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f31,f6,f11
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmsubs f10,f6,f3,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 - ctx.f10.f64));
	// fmuls f6,f4,f11
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmsubs f11,f2,f4,f8
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 - ctx.f8.f64));
	// fmadds f8,f1,f4,f7
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fmsubs f7,f1,f9,f5
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 - ctx.f5.f64));
	// fmuls f5,f10,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f11,f3,f9,f8
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmuls f10,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fsubs f9,f6,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fmuls f6,f2,f11
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f7,f11,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fsubs f4,f31,f10
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fmuls f5,f1,f11
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fadds f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83084128:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83084150"))) PPC_WEAK_FUNC(sub_83084150);
PPC_FUNC_IMPL(__imp__sub_83084150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ae8
	ctx.lr = 0x83084160;
	__savefpr_28(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfs f0,7676(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f13,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83084240
	if (ctx.cr6.eq) goto loc_83084240;
	// lfs f12,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,152
	ctx.r10.s64 = ctx.r11.s64 + 152;
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f10,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfs f3,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f31,f3,f3,f13
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 - ctx.f13.f64));
	// lfs f1,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f29.f64 = double(temp.f32);
	// fmsubs f7,f6,f10,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f7.f64));
	// fmadds f2,f6,f12,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmsubs f5,f9,f11,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f5.f64));
	// fmsubs f4,f8,f12,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f4.f64));
	// fmuls f28,f8,f31
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f3,f8,f11,f2
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fadds f2,f28,f7
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f7.f64));
	// fadds f8,f6,f5
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f7,f9,f4
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fmuls f6,f3,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f5,f3,f11
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f4,f3,f10
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fadds f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fadds f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fadds f12,f7,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f8,f1,f11
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f8,0(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fadds f7,f30,f10
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f10.f64));
	// stfs f7,4(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fadds f6,f29,f9
	ctx.f6.f64 = double(float(ctx.f29.f64 + ctx.f9.f64));
	// stfs f6,8(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
loc_83084240:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83084300
	if (ctx.cr6.eq) goto loc_83084300;
	// lfs f12,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,152
	ctx.r10.s64 = ctx.r11.s64 + 152;
	// lfs f11,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f6,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfs f3,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f1,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f13,f3,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 - ctx.f13.f64));
	// lfs f31,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f30.f64 = double(temp.f32);
	// fmsubs f7,f6,f10,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f7.f64));
	// fmsubs f5,f9,f11,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f5.f64));
	// fmsubs f4,f8,f12,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f4.f64));
	// fmadds f2,f6,f12,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f3,f9,f10,f2
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fadds f2,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f9,f6,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fmuls f6,f11,f3
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f7,f3,f12
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f5,f10,f3
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fadds f3,f2,f6
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f12.f64));
	// stfs f9,4(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fadds f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fadds f8,f30,f11
	ctx.f8.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// stfs f8,8(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_83084300:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x83084308;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084314"))) PPC_WEAK_FUNC(sub_83084314);
PPC_FUNC_IMPL(__imp__sub_83084314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084318"))) PPC_WEAK_FUNC(sub_83084318);
PPC_FUNC_IMPL(__imp__sub_83084318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f2,80(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f3,84(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f4,88(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f5,92(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084330"))) PPC_WEAK_FUNC(sub_83084330);
PPC_FUNC_IMPL(__imp__sub_83084330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f2,100(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f3,104(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f4,108(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084344"))) PPC_WEAK_FUNC(sub_83084344);
PPC_FUNC_IMPL(__imp__sub_83084344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084348"))) PPC_WEAK_FUNC(sub_83084348);
PPC_FUNC_IMPL(__imp__sub_83084348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x8308439c
	if (!ctx.cr6.gt) goto loc_8308439C;
	// lfs f13,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x830843dc
	if (!ctx.cr6.gt) goto loc_830843DC;
	// lfs f0,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x83084394
	if (!ctx.cr6.lt) goto loc_83084394;
	// lfs f11,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fdivs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmuls f1,f7,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// blr 
	return;
loc_83084394:
	// fneg f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_8308439C:
	// lfs f1,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x830843dc
	if (!ctx.cr6.gt) goto loc_830843DC;
	// lfs f0,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// fdivs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// blr 
	return;
loc_830843DC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830843E4"))) PPC_WEAK_FUNC(sub_830843E4);
PPC_FUNC_IMPL(__imp__sub_830843E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830843E8"))) PPC_WEAK_FUNC(sub_830843E8);
PPC_FUNC_IMPL(__imp__sub_830843E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8308442c
	if (!ctx.cr6.gt) goto loc_8308442C;
	// lfs f12,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83084424
	if (!ctx.cr6.lt) goto loc_83084424;
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
loc_83084424:
	// fneg f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_8308442C:
	// lfs f12,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83084450
	if (!ctx.cr6.gt) goto loc_83084450;
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
loc_83084450:
	// fmr f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f12.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084458"))) PPC_WEAK_FUNC(sub_83084458);
PPC_FUNC_IMPL(__imp__sub_83084458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f12,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f11,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f10,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084484"))) PPC_WEAK_FUNC(sub_83084484);
PPC_FUNC_IMPL(__imp__sub_83084484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084488"))) PPC_WEAK_FUNC(sub_83084488);
PPC_FUNC_IMPL(__imp__sub_83084488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f12,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f11,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830844AC"))) PPC_WEAK_FUNC(sub_830844AC);
PPC_FUNC_IMPL(__imp__sub_830844AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830844B0"))) PPC_WEAK_FUNC(sub_830844B0);
PPC_FUNC_IMPL(__imp__sub_830844B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830844CC"))) PPC_WEAK_FUNC(sub_830844CC);
PPC_FUNC_IMPL(__imp__sub_830844CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830844D0"))) PPC_WEAK_FUNC(sub_830844D0);
PPC_FUNC_IMPL(__imp__sub_830844D0) {
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
	ctx.lr = 0x830844E8;
	__savefpr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,7676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f8,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x83084620
	if (ctx.cr6.eq) goto loc_83084620;
	// lfs f11,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f2,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f31,f2,f2,f8
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 - ctx.f8.f64));
	// lfs f30,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f28.f64 = double(temp.f32);
	// fmr f27,f30
	ctx.f27.f64 = ctx.f30.f64;
	// lfs f29,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f29.f64 = double(temp.f32);
	// fmr f25,f28
	ctx.f25.f64 = ctx.f28.f64;
	// fmr f26,f29
	ctx.f26.f64 = ctx.f29.f64;
	// lfs f22,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f22.f64 = double(temp.f32);
	// lfs f24,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f5,f10,f12,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f5.f64));
	// lfs f23,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f23.f64 = double(temp.f32);
	// lfs f18,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f18.f64 = double(temp.f32);
	// fmsubs f4,f10,f3,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 - ctx.f4.f64));
	// lfs f21,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f21.f64 = double(temp.f32);
	// fmsubs f1,f6,f11,f1
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f1.f64));
	// lfs f19,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f19.f64 = double(temp.f32);
	// fmsubs f7,f9,f12,f7
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fmuls f20,f6,f31
	ctx.f20.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmadds f6,f6,f3,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmuls f5,f4,f2
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmuls f4,f1,f2
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fadds f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f5,f10,f4
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// fadds f2,f20,f7
	ctx.f2.f64 = double(float(ctx.f20.f64 + ctx.f7.f64));
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f7,f11,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fadds f3,f2,f1
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fadds f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f2,f9,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f10,f30,f12
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// fadds f12,f28,f9
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f9.f64));
	// fadds f11,f29,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f11.f64));
	// fsubs f7,f10,f27
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fsubs f3,f12,f25
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f25.f64));
	// fsubs f4,f11,f26
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f26.f64));
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmuls f2,f23,f7
	ctx.f2.f64 = double(float(ctx.f23.f64 * ctx.f7.f64));
	// fmuls f12,f22,f3
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f3.f64));
	// fmuls f1,f4,f24
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f24.f64));
	// fmsubs f11,f3,f24,f2
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f24.f64 - ctx.f2.f64));
	// fmsubs f4,f23,f4,f12
	ctx.f4.f64 = double(float(ctx.f23.f64 * ctx.f4.f64 - ctx.f12.f64));
	// fmsubs f7,f22,f7,f1
	ctx.f7.f64 = double(float(ctx.f22.f64 * ctx.f7.f64 - ctx.f1.f64));
	// fadds f3,f11,f19
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f19.f64));
	// fadds f12,f4,f18
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f18.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f2,f7,f21
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f21.f64));
	// b 0x83084638
	goto loc_83084638;
loc_83084620:
	// lfs f10,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// lfs f5,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// lfs f6,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_83084638:
	// stfs f6,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x8308474c
	if (ctx.cr6.eq) goto loc_8308474C;
	// lfs f7,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r30,152
	ctx.r11.s64 = ctx.r30.s64 + 152;
	// lfs f12,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f4,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f27,f9,f7
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f11,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f30,f9,f4
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// lfs f31,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f29,f11,f31
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f28,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f28.f64 = double(temp.f32);
	// fmsubs f8,f28,f28,f8
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 - ctx.f8.f64));
	// lfs f26,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f25.f64 = double(temp.f32);
	// fmr f23,f26
	ctx.f23.f64 = ctx.f26.f64;
	// lfs f24,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f24.f64 = double(temp.f32);
	// fmr f22,f25
	ctx.f22.f64 = ctx.f25.f64;
	// fmr f21,f24
	ctx.f21.f64 = ctx.f24.f64;
	// lfs f19,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f19.f64 = double(temp.f32);
	// lfs f20,140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	ctx.f20.f64 = double(temp.f32);
	// fmsubs f1,f9,f31,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 - ctx.f1.f64));
	// lfs f18,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f27,f11,f4,f27
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f27.f64));
	// lfs f17,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f17.f64 = double(temp.f32);
	// fmsubs f30,f11,f7,f30
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 - ctx.f30.f64));
	// lfs f16,132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f16.f64 = double(temp.f32);
	// lfs f14,136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f14.f64 = double(temp.f32);
	// fmsubs f29,f12,f4,f29
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 - ctx.f29.f64));
	// fmuls f4,f8,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f15,f8,f31
	ctx.f15.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f7,f1,f28
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fmadds f31,f12,f31,f27
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f27.f64));
	// fmuls f1,f30,f28
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmuls f30,f29,f28
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// fadds f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fadds f4,f15,f1
	ctx.f4.f64 = double(float(ctx.f15.f64 + ctx.f1.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fadds f1,f8,f30
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f8,f4,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fadds f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f4,f1,f9
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f11,f1,f26
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
	// fadds f0,f25,f12
	ctx.f0.f64 = double(float(ctx.f25.f64 + ctx.f12.f64));
	// fadds f12,f24,f9
	ctx.f12.f64 = double(float(ctx.f24.f64 + ctx.f9.f64));
	// fsubs f8,f11,f23
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f23.f64));
	// fsubs f7,f0,f22
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f22.f64));
	// fsubs f4,f12,f21
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f21.f64));
	// fmuls f1,f19,f8
	ctx.f1.f64 = double(float(ctx.f19.f64 * ctx.f8.f64));
	// fmuls f9,f18,f7
	ctx.f9.f64 = double(float(ctx.f18.f64 * ctx.f7.f64));
	// fmuls f31,f4,f20
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f20.f64));
	// fmsubs f7,f7,f20,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f20.f64 - ctx.f1.f64));
	// fmsubs f4,f19,f4,f9
	ctx.f4.f64 = double(float(ctx.f19.f64 * ctx.f4.f64 - ctx.f9.f64));
	// fmsubs f1,f18,f8,f31
	ctx.f1.f64 = double(float(ctx.f18.f64 * ctx.f8.f64 - ctx.f31.f64));
	// fadds f7,f7,f14
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f14.f64));
	// fadds f9,f4,f17
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f17.f64));
	// fadds f8,f1,f16
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f16.f64));
	// b 0x83084764
	goto loc_83084764;
loc_8308474C:
	// lfs f11,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lfs f12,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_83084764:
	// fsubs f4,f12,f6
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f4,f4
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f12,f6,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f0.f64));
	// fmadds f11,f5,f5,f12
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fsqrts f1,f11
	ctx.f1.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// beq cr6,0x830847ac
	if (ctx.cr6.eq) goto loc_830847AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
loc_830847AC:
	// fsubs f0,f7,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f10,f8,f2
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fmuls f9,f0,f4
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmadds f8,f11,f6,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f7,f10,f5,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fmuls f0,f7,f1
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83084804
	if (!ctx.cr6.gt) goto loc_83084804;
	// lfs f12,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x83084828
	if (!ctx.cr6.gt) goto loc_83084828;
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x830847fc
	if (!ctx.cr6.lt) goto loc_830847FC;
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x8308482c
	goto loc_8308482C;
loc_830847FC:
	// fneg f3,f12
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x8308482c
	goto loc_8308482C;
loc_83084804:
	// lfs f3,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// ble cr6,0x83084828
	if (!ctx.cr6.gt) goto loc_83084828;
	// lfs f13,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8308482c
	if (!ctx.cr6.gt) goto loc_8308482C;
	// fdivs f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 / ctx.f13.f64));
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x8308482c
	goto loc_8308482C;
loc_83084828:
	// fmr f3,f13
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f13.f64;
loc_8308482C:
	// bl 0x83084348
	ctx.lr = 0x83084830;
	sub_83084348(ctx, base);
	// fadds f0,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f30,f6,f0
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f29,f5,f0
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f28,f4,f0
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// bl 0x831353e0
	ctx.lr = 0x83084844;
	sub_831353E0(ctx, base);
	// lfs f31,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8308489c
	if (ctx.cr6.eq) goto loc_8308489C;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8308489c
	if (ctx.cr6.eq) goto loc_8308489C;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8308489c
	if (!ctx.cr6.eq) goto loc_8308489C;
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f28,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x83079d98
	ctx.lr = 0x8308489C;
	sub_83079D98(ctx, base);
loc_8308489C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830848ec
	if (ctx.cr6.eq) goto loc_830848EC;
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830848ec
	if (ctx.cr6.eq) goto loc_830848EC;
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830848ec
	if (!ctx.cr6.eq) goto loc_830848EC;
	// fmuls f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f29,f31
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83079d98
	ctx.lr = 0x830848EC;
	sub_83079D98(ctx, base);
loc_830848EC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6afc
	ctx.lr = 0x830848F8;
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

__attribute__((alias("__imp__sub_8308490C"))) PPC_WEAK_FUNC(sub_8308490C);
PPC_FUNC_IMPL(__imp__sub_8308490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084910"))) PPC_WEAK_FUNC(sub_83084910);
PPC_FUNC_IMPL(__imp__sub_83084910) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084918"))) PPC_WEAK_FUNC(sub_83084918);
PPC_FUNC_IMPL(__imp__sub_83084918) {
	PPC_FUNC_PROLOGUE();
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084920"))) PPC_WEAK_FUNC(sub_83084920);
PPC_FUNC_IMPL(__imp__sub_83084920) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084928"))) PPC_WEAK_FUNC(sub_83084928);
PPC_FUNC_IMPL(__imp__sub_83084928) {
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
	// addi r9,r11,-772
	ctx.r9.s64 = ctx.r11.s64 + -772;
	// addi r8,r10,-776
	ctx.r8.s64 = ctx.r10.s64 + -776;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x831352c0
	ctx.lr = 0x83084960;
	sub_831352C0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83084988
	if (ctx.cr6.eq) goto loc_83084988;
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
	ctx.lr = 0x83084988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83084988:
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

__attribute__((alias("__imp__sub_830849A4"))) PPC_WEAK_FUNC(sub_830849A4);
PPC_FUNC_IMPL(__imp__sub_830849A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830849A8"))) PPC_WEAK_FUNC(sub_830849A8);
PPC_FUNC_IMPL(__imp__sub_830849A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,6380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830849D0"))) PPC_WEAK_FUNC(sub_830849D0);
PPC_FUNC_IMPL(__imp__sub_830849D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830849E0"))) PPC_WEAK_FUNC(sub_830849E0);
PPC_FUNC_IMPL(__imp__sub_830849E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830849E8"))) PPC_WEAK_FUNC(sub_830849E8);
PPC_FUNC_IMPL(__imp__sub_830849E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830849F0"))) PPC_WEAK_FUNC(sub_830849F0);
PPC_FUNC_IMPL(__imp__sub_830849F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830849F8"))) PPC_WEAK_FUNC(sub_830849F8);
PPC_FUNC_IMPL(__imp__sub_830849F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084A00"))) PPC_WEAK_FUNC(sub_83084A00);
PPC_FUNC_IMPL(__imp__sub_83084A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084A08"))) PPC_WEAK_FUNC(sub_83084A08);
PPC_FUNC_IMPL(__imp__sub_83084A08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,220
	ctx.r3.s64 = ctx.r3.s64 + 220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084A10"))) PPC_WEAK_FUNC(sub_83084A10);
PPC_FUNC_IMPL(__imp__sub_83084A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084A18"))) PPC_WEAK_FUNC(sub_83084A18);
PPC_FUNC_IMPL(__imp__sub_83084A18) {
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
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r5,296(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 296);
	// lhz r4,296(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 296);
	// lwz r8,380(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83084A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// lwz r5,292(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 292);
	// lwz r4,292(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 292);
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x831c44a8
	ctx.lr = 0x83084A7C;
	sub_831C44A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83084a94
	if (ctx.cr6.eq) goto loc_83084A94;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// or r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 | ctx.r31.u64;
	// rlwinm r3,r10,0,15,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFFE;
	// b 0x83084a98
	goto loc_83084A98;
loc_83084A94:
	// rlwinm r3,r31,0,15,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1FFFE;
loc_83084A98:
	// rlwinm r3,r3,0,24,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
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

__attribute__((alias("__imp__sub_83084AB4"))) PPC_WEAK_FUNC(sub_83084AB4);
PPC_FUNC_IMPL(__imp__sub_83084AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084AB8"))) PPC_WEAK_FUNC(sub_83084AB8);
PPC_FUNC_IMPL(__imp__sub_83084AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-388
	ctx.r10.s64 = ctx.r11.s64 + -388;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x831f2f08
	sub_831F2F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83084AC8"))) PPC_WEAK_FUNC(sub_83084AC8);
PPC_FUNC_IMPL(__imp__sub_83084AC8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83084ba4
	if (ctx.cr6.eq) goto loc_83084BA4;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fmuls f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f4,f9,f31
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8315f360
	ctx.lr = 0x83084B50;
	sub_8315F360(ctx, base);
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r9,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8315f360
	ctx.lr = 0x83084BA4;
	sub_8315F360(ctx, base);
loc_83084BA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_83084BC0"))) PPC_WEAK_FUNC(sub_83084BC0);
PPC_FUNC_IMPL(__imp__sub_83084BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83084BC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831f3a18
	ctx.lr = 0x83084BE4;
	sub_831F3A18(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-348
	ctx.r10.s64 = ctx.r11.s64 + -348;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831f3a60
	ctx.lr = 0x83084BFC;
	sub_831F3A60(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83084c10
	if (!ctx.cr6.eq) goto loc_83084C10;
	// lwz r5,280(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// b 0x83084c1c
	goto loc_83084C1C;
loc_83084C10:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83084c48
	if (!ctx.cr6.eq) goto loc_83084C48;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
loc_83084C1C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83084c48
	if (ctx.cr6.eq) goto loc_83084C48;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r4,r28,96
	ctx.r4.s64 = ctx.r28.s64 + 96;
	// bne cr6,0x83084c34
	if (!ctx.cr6.eq) goto loc_83084C34;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83084C34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83084C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83084C48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83084C54"))) PPC_WEAK_FUNC(sub_83084C54);
PPC_FUNC_IMPL(__imp__sub_83084C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084C58"))) PPC_WEAK_FUNC(sub_83084C58);
PPC_FUNC_IMPL(__imp__sub_83084C58) {
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
	// addi r10,r11,-348
	ctx.r10.s64 = ctx.r11.s64 + -348;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831f3ab0
	ctx.lr = 0x83084C7C;
	sub_831F3AB0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83084cd0
	if (!ctx.cr6.eq) goto loc_83084CD0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x83084c9c
	if (!ctx.cr6.eq) goto loc_83084C9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83084C9C:
	// lwz r5,284(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83084cd0
	if (ctx.cr6.eq) goto loc_83084CD0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bne cr6,0x83084cbc
	if (!ctx.cr6.eq) goto loc_83084CBC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83084CBC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83084CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83084CD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3a50
	ctx.lr = 0x83084CD8;
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

__attribute__((alias("__imp__sub_83084CEC"))) PPC_WEAK_FUNC(sub_83084CEC);
PPC_FUNC_IMPL(__imp__sub_83084CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084CF0"))) PPC_WEAK_FUNC(sub_83084CF0);
PPC_FUNC_IMPL(__imp__sub_83084CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83084CF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831f3a18
	ctx.lr = 0x83084D14;
	sub_831F3A18(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-328
	ctx.r10.s64 = ctx.r11.s64 + -328;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831f3a60
	ctx.lr = 0x83084D2C;
	sub_831F3A60(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r5,r30,96
	ctx.r5.s64 = ctx.r30.s64 + 96;
	// bne cr6,0x83084d3c
	if (!ctx.cr6.eq) goto loc_83084D3C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_83084D3C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// bne cr6,0x83084d4c
	if (!ctx.cr6.eq) goto loc_83084D4C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83084D4C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83084D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83084D6C"))) PPC_WEAK_FUNC(sub_83084D6C);
PPC_FUNC_IMPL(__imp__sub_83084D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084D70"))) PPC_WEAK_FUNC(sub_83084D70);
PPC_FUNC_IMPL(__imp__sub_83084D70) {
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
	// addi r10,r11,-328
	ctx.r10.s64 = ctx.r11.s64 + -328;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831f3ab0
	ctx.lr = 0x83084D94;
	sub_831F3AB0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r11,96
	ctx.r5.s64 = ctx.r11.s64 + 96;
	// bne cr6,0x83084da8
	if (!ctx.cr6.eq) goto loc_83084DA8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_83084DA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bne cr6,0x83084dbc
	if (!ctx.cr6.eq) goto loc_83084DBC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83084DBC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83084DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3a50
	ctx.lr = 0x83084DD8;
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

__attribute__((alias("__imp__sub_83084DEC"))) PPC_WEAK_FUNC(sub_83084DEC);
PPC_FUNC_IMPL(__imp__sub_83084DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084DF0"))) PPC_WEAK_FUNC(sub_83084DF0);
PPC_FUNC_IMPL(__imp__sub_83084DF0) {
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
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x82d62ee0
	ctx.lr = 0x83084E18;
	sub_82D62EE0(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83084E44"))) PPC_WEAK_FUNC(sub_83084E44);
PPC_FUNC_IMPL(__imp__sub_83084E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084E48"))) PPC_WEAK_FUNC(sub_83084E48);
PPC_FUNC_IMPL(__imp__sub_83084E48) {
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
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83084e88
	if (ctx.cr6.eq) goto loc_83084E88;
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
	ctx.lr = 0x83084E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
loc_83084E88:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82d632e0
	ctx.lr = 0x83084E90;
	sub_82D632E0(ctx, base);
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

__attribute__((alias("__imp__sub_83084EA4"))) PPC_WEAK_FUNC(sub_83084EA4);
PPC_FUNC_IMPL(__imp__sub_83084EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084EA8"))) PPC_WEAK_FUNC(sub_83084EA8);
PPC_FUNC_IMPL(__imp__sub_83084EA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r4,-96
	ctx.r3.s64 = ctx.r4.s64 + -96;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83084ECC"))) PPC_WEAK_FUNC(sub_83084ECC);
PPC_FUNC_IMPL(__imp__sub_83084ECC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084ED0"))) PPC_WEAK_FUNC(sub_83084ED0);
PPC_FUNC_IMPL(__imp__sub_83084ED0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83084ac8
	sub_83084AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83084EF0"))) PPC_WEAK_FUNC(sub_83084EF0);
PPC_FUNC_IMPL(__imp__sub_83084EF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084EF4"))) PPC_WEAK_FUNC(sub_83084EF4);
PPC_FUNC_IMPL(__imp__sub_83084EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084EF8"))) PPC_WEAK_FUNC(sub_83084EF8);
PPC_FUNC_IMPL(__imp__sub_83084EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83084EFC"))) PPC_WEAK_FUNC(sub_83084EFC);
PPC_FUNC_IMPL(__imp__sub_83084EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084F00"))) PPC_WEAK_FUNC(sub_83084F00);
PPC_FUNC_IMPL(__imp__sub_83084F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83084F08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83084f34
	if (ctx.cr6.gt) goto loc_83084F34;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83084f9c
	if (ctx.cr6.eq) goto loc_83084F9C;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83084f9c
	if (!ctx.cr6.lt) goto loc_83084F9C;
loc_83084F34:
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r29,100
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 100, ctx.xer);
	// bge cr6,0x83084f44
	if (!ctx.cr6.lt) goto loc_83084F44;
	// li r29,100
	ctx.r29.s64 = 100;
loc_83084F44:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83084f9c
	if (ctx.cr6.eq) goto loc_83084F9C;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83084f78
	if (ctx.cr6.eq) goto loc_83084F78;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83084F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
loc_83084F78:
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r29,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83084F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_83084F9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83084FA4"))) PPC_WEAK_FUNC(sub_83084FA4);
PPC_FUNC_IMPL(__imp__sub_83084FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83084FA8"))) PPC_WEAK_FUNC(sub_83084FA8);
PPC_FUNC_IMPL(__imp__sub_83084FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x83084FB0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r3,1416(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1416);
	// bl 0x8315f780
	ctx.lr = 0x83084FC8;
	sub_8315F780(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r3,1416(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1416);
	// bl 0x8315f780
	ctx.lr = 0x83084FD8;
	sub_8315F780(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x83084fec
	if (ctx.cr6.lt) goto loc_83084FEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83084FEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83084f00
	ctx.lr = 0x83084FF8;
	sub_83084F00(ctx, base);
	// lis r20,-31901
	ctx.r20.s64 = -2090663936;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8308536c
	if (ctx.cr6.eq) goto loc_8308536C;
	// lwz r23,28(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,1416(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1416);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8315f838
	ctx.lr = 0x83085020;
	sub_8315F838(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8308536c
	if (ctx.cr6.eq) goto loc_8308536C;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// addi r25,r23,12
	ctx.r25.s64 = ctx.r23.s64 + 12;
loc_83085030:
	// lwz r30,-4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83085058
	if (!ctx.cr6.eq) goto loc_83085058;
	// lwz r27,280(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// b 0x8308517c
	goto loc_8308517C;
loc_83085058:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x83085068
	if (!ctx.cr6.eq) goto loc_83085068;
	// lwz r27,100(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// b 0x8308517c
	goto loc_8308517C;
loc_83085068:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x83085170
	if (!ctx.cr6.eq) goto loc_83085170;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x83085360
	if (ctx.cr6.eq) goto loc_83085360;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x830850d4
	if (!ctx.cr6.eq) goto loc_830850D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8308509c
	if (ctx.cr6.eq) goto loc_8308509C;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83085360
	if (!ctx.cr6.eq) goto loc_83085360;
loc_8308509C:
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830850B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83085360
	if (ctx.cr6.eq) goto loc_83085360;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,240(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 240);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83084cf0
	ctx.lr = 0x830850D0;
	sub_83084CF0(ctx, base);
	// b 0x83085360
	goto loc_83085360;
loc_830850D4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8308511c
	if (!ctx.cr6.eq) goto loc_8308511C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83085360
	if (!ctx.cr6.eq) goto loc_83085360;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// li r5,130
	ctx.r5.s64 = 130;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83085100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83085360
	if (ctx.cr6.eq) goto loc_83085360;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,240(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 240);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83084bc0
	ctx.lr = 0x83085118;
	sub_83084BC0(ctx, base);
	// b 0x83085360
	goto loc_83085360;
loc_8308511C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8308517c
	if (ctx.cr6.eq) goto loc_8308517C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8308517c
	if (ctx.cr6.eq) goto loc_8308517C;
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085360
	if (ctx.cr6.eq) goto loc_83085360;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// li r5,130
	ctx.r5.s64 = 130;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83085154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83085360
	if (ctx.cr6.eq) goto loc_83085360;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,24(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83084bc0
	ctx.lr = 0x8308516C;
	sub_83084BC0(ctx, base);
	// b 0x83085360
	goto loc_83085360;
loc_83085170:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x83085360
	if (!ctx.cr6.eq) goto loc_83085360;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_8308517C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83085190
	if (!ctx.cr6.eq) goto loc_83085190;
	// lwz r28,280(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// b 0x83085268
	goto loc_83085268;
loc_83085190:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830851a0
	if (!ctx.cr6.eq) goto loc_830851A0;
	// lwz r28,100(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// b 0x83085268
	goto loc_83085268;
loc_830851A0:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x83085250
	if (!ctx.cr6.eq) goto loc_83085250;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x83085360
	if (ctx.cr6.eq) goto loc_83085360;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830851fc
	if (!ctx.cr6.eq) goto loc_830851FC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83085360
	if (!ctx.cr6.eq) goto loc_83085360;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// li r5,130
	ctx.r5.s64 = 130;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830851E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83085360
	if (ctx.cr6.eq) goto loc_83085360;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,240(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 240);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83084bc0
	ctx.lr = 0x830851F8;
	sub_83084BC0(ctx, base);
	// b 0x83085360
	goto loc_83085360;
loc_830851FC:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83085268
	if (ctx.cr6.eq) goto loc_83085268;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x83085268
	if (ctx.cr6.eq) goto loc_83085268;
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085360
	if (ctx.cr6.eq) goto loc_83085360;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// li r5,130
	ctx.r5.s64 = 130;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83085234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83085360
	if (ctx.cr6.eq) goto loc_83085360;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,24(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83084bc0
	ctx.lr = 0x8308524C;
	sub_83084BC0(ctx, base);
	// b 0x83085360
	goto loc_83085360;
loc_83085250:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x83085360
	if (!ctx.cr6.eq) goto loc_83085360;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// bne cr6,0x83085268
	if (!ctx.cr6.eq) goto loc_83085268;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_83085268:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830852a4
	if (ctx.cr6.eq) goto loc_830852A4;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8308528c
	if (ctx.cr6.eq) goto loc_8308528C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f2dc8
	ctx.lr = 0x8308528C;
	sub_831F2DC8(ctx, base);
loc_8308528C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x830852a4
	if (ctx.cr6.eq) goto loc_830852A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f2dc8
	ctx.lr = 0x830852A4;
	sub_831F2DC8(ctx, base);
loc_830852A4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8308532c
	if (ctx.cr6.eq) goto loc_8308532C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8308532c
	if (ctx.cr6.eq) goto loc_8308532C;
	// lwz r11,264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830852cc
	if (!ctx.cr6.eq) goto loc_830852CC;
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8308532c
	if (ctx.cr6.eq) goto loc_8308532C;
loc_830852CC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830852E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8308531c
	if (ctx.cr6.eq) goto loc_8308531C;
	// lwz r11,300(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83085308
	if (!ctx.cr6.eq) goto loc_83085308;
	// lwz r11,300(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8308531c
	if (ctx.cr6.eq) goto loc_8308531C;
loc_83085308:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83049410
	ctx.lr = 0x83085318;
	sub_83049410(ctx, base);
	// b 0x8308532c
	goto loc_8308532C;
loc_8308531C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83074598
	ctx.lr = 0x8308532C;
	sub_83074598(ctx, base);
loc_8308532C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83085360
	if (ctx.cr6.eq) goto loc_83085360;
	// lwz r11,-12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12);
	// addi r10,r25,-12
	ctx.r10.s64 = ctx.r25.s64 + -12;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r9,-8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8);
	// stw r9,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r9.u32);
	// lwz r8,-4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// stw r8,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r8.u32);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r7,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r7.u32);
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
loc_83085360:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// bne 0x83085030
	if (!ctx.cr0.eq) goto loc_83085030;
loc_8308536C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830455a8
	ctx.lr = 0x83085374;
	sub_830455A8(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x83085444
	if (ctx.cr6.eq) goto loc_83085444;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r23,12
	ctx.r28.s64 = ctx.r23.s64 + 12;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_83085388:
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x830853a8
	if (!ctx.cr6.eq) goto loc_830853A8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x830853b0
	goto loc_830853B0;
loc_830853A8:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_830853B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830853c4
	if (!ctx.cr6.eq) goto loc_830853C4;
	// lwz r29,280(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// b 0x830853d0
	goto loc_830853D0;
loc_830853C4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830853d0
	if (!ctx.cr6.eq) goto loc_830853D0;
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
loc_830853D0:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83085438
	if (ctx.cr6.eq) goto loc_83085438;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x83085438
	if (ctx.cr6.eq) goto loc_83085438;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x83085438
	if (ctx.cr6.eq) goto loc_83085438;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83085408
	if (!ctx.cr6.eq) goto loc_83085408;
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83085438
	if (ctx.cr6.eq) goto loc_83085438;
loc_83085408:
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83085424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83085438
	if (ctx.cr6.eq) goto loc_83085438;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830bf3e8
	ctx.lr = 0x83085438;
	sub_830BF3E8(ctx, base);
loc_83085438:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bne 0x83085388
	if (!ctx.cr0.eq) goto loc_83085388;
loc_83085444:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8308545c
	if (ctx.cr6.eq) goto loc_8308545C;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r5,28(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// lwz r3,1416(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1416);
	// bl 0x8315f838
	ctx.lr = 0x8308545C;
	sub_8315F838(ctx, base);
loc_8308545C:
	// stw r18,36(r19)
	PPC_STORE_U32(ctx.r19.u32 + 36, ctx.r18.u32);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085478
	if (ctx.cr6.eq) goto loc_83085478;
	// lwz r3,12(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83085478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83085478:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83085480"))) PPC_WEAK_FUNC(sub_83085480);
PPC_FUNC_IMPL(__imp__sub_83085480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83085484"))) PPC_WEAK_FUNC(sub_83085484);
PPC_FUNC_IMPL(__imp__sub_83085484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83085488"))) PPC_WEAK_FUNC(sub_83085488);
PPC_FUNC_IMPL(__imp__sub_83085488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83085490;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,1160
	ctx.r4.s64 = ctx.r30.s64 + 1160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831f3598
	ctx.lr = 0x830854B4;
	sub_831F3598(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-388
	ctx.r9.s64 = ctx.r10.s64 + -388;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8315f1e0
	ctx.lr = 0x830854D4;
	sub_8315F1E0(ctx, base);
	// lwz r6,760(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// beq cr6,0x830854f8
	if (ctx.cr6.eq) goto loc_830854F8;
	// lwz r11,764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_830854F8:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,1416(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// bl 0x8315f200
	ctx.lr = 0x83085508;
	sub_8315F200(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83085530
	if (!ctx.cr6.eq) goto loc_83085530;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-592
	ctx.r4.s64 = ctx.r11.s64 + -592;
	// li r5,69
	ctx.r5.s64 = 69;
	// addi r7,r4,-72
	ctx.r7.s64 = ctx.r4.s64 + -72;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82d17988
	ctx.lr = 0x83085530;
	sub_82D17988(ctx, base);
loc_83085530:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83084ac8
	ctx.lr = 0x8308553C;
	sub_83084AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83085548"))) PPC_WEAK_FUNC(sub_83085548);
PPC_FUNC_IMPL(__imp__sub_83085548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83085550;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r5,129
	ctx.r5.s64 = 129;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,104
	ctx.r4.s64 = 104;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83085580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830855a4
	if (ctx.cr6.eq) goto loc_830855A4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83085488
	ctx.lr = 0x83085598;
	sub_83085488(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bne cr6,0x830855a8
	if (!ctx.cr6.eq) goto loc_830855A8;
loc_830855A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830855A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830855B0"))) PPC_WEAK_FUNC(sub_830855B0);
PPC_FUNC_IMPL(__imp__sub_830855B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x830855B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r28,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x830855dc
	if (!ctx.cr6.eq) goto loc_830855DC;
	// lwz r29,332(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
loc_830855DC:
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830855ec
	if (ctx.cr6.eq) goto loc_830855EC;
	// bl 0x8315f270
	ctx.lr = 0x830855EC;
	sub_8315F270(ctx, base);
loc_830855EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8315f1e0
	ctx.lr = 0x830855F4;
	sub_8315F1E0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83085618
	if (ctx.cr6.eq) goto loc_83085618;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830856a4
	if (ctx.cr6.eq) goto loc_830856A4;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x830856bc
	goto loc_830856BC;
loc_83085618:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x83085670
	if (!ctx.cr6.eq) goto loc_83085670;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308563C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085670
	if (ctx.cr6.eq) goto loc_83085670;
loc_8308564C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,312(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 312);
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x83085664
	if (ctx.cr6.eq) goto loc_83085664;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83085664:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8308564c
	if (!ctx.cr0.eq) goto loc_8308564C;
loc_83085670:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83085684
	if (ctx.cr6.eq) goto loc_83085684;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83085684:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830856b0
	if (ctx.cr6.eq) goto loc_830856B0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830856a4
	if (ctx.cr6.eq) goto loc_830856A4;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x830856bc
	goto loc_830856BC;
loc_830856A4:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x830856bc
	goto loc_830856BC;
loc_830856B0:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r10,756(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_830856BC:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r10,1424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8308574c
	if (!ctx.cr6.eq) goto loc_8308574C;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8308574c
	if (ctx.cr6.eq) goto loc_8308574C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8308574c
	if (ctx.cr6.eq) goto loc_8308574C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8308570c
	if (!ctx.cr6.eq) goto loc_8308570C;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8308574c
	if (!ctx.cr6.eq) goto loc_8308574C;
loc_8308570C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83085728
	if (ctx.cr6.eq) goto loc_83085728;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8308574c
	if (!ctx.cr6.eq) goto loc_8308574C;
loc_83085728:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x830858d8
	if (ctx.cr6.eq) goto loc_830858D8;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// b 0x830858d0
	goto loc_830858D0;
loc_8308574C:
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83085778
	if (!ctx.cr6.eq) goto loc_83085778;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830857ac
	if (ctx.cr6.eq) goto loc_830857AC;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r8,280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830857ac
	if (ctx.cr6.eq) goto loc_830857AC;
loc_83085778:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8308578c
	if (ctx.cr6.eq) goto loc_8308578C;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_8308578C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830857AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830857AC:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f0,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// blt cr6,0x83085808
	if (ctx.cr6.lt) goto loc_83085808;
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// blt cr6,0x83085808
	if (ctx.cr6.lt) goto loc_83085808;
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// blt cr6,0x83085808
	if (ctx.cr6.lt) goto loc_83085808;
	// li r9,1
	ctx.r9.s64 = 1;
loc_83085808:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8308586c
	if (!ctx.cr6.eq) goto loc_8308586C;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fsubs f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8308586C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stfs f12,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bne cr6,0x830858ac
	if (!ctx.cr6.eq) goto loc_830858AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d630b0
	ctx.lr = 0x830858AC;
	sub_82D630B0(ctx, base);
loc_830858AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,256(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 256);
loc_830858D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8315f200
	ctx.lr = 0x830858D8;
	sub_8315F200(ctx, base);
loc_830858D8:
	// stw r3,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83085900
	if (!ctx.cr6.eq) goto loc_83085900;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-488
	ctx.r4.s64 = ctx.r11.s64 + -488;
	// li r5,403
	ctx.r5.s64 = 403;
	// addi r7,r4,-140
	ctx.r7.s64 = ctx.r4.s64 + -140;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82d17988
	ctx.lr = 0x83085900;
	sub_82D17988(ctx, base);
loc_83085900:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83085908"))) PPC_WEAK_FUNC(sub_83085908);
PPC_FUNC_IMPL(__imp__sub_83085908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83085910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83085928
	if (ctx.cr6.eq) goto loc_83085928;
	// bl 0x8315f270
	ctx.lr = 0x83085928;
	sub_8315F270(ctx, base);
loc_83085928:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8308596c
	if (ctx.cr6.eq) goto loc_8308596C;
loc_83085940:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83085960
	if (ctx.cr6.eq) goto loc_83085960;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83085960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83085960:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83085940
	if (!ctx.cr6.eq) goto loc_83085940;
loc_8308596C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f3728
	ctx.lr = 0x83085974;
	sub_831F3728(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308597C"))) PPC_WEAK_FUNC(sub_8308597C);
PPC_FUNC_IMPL(__imp__sub_8308597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83085980"))) PPC_WEAK_FUNC(sub_83085980);
PPC_FUNC_IMPL(__imp__sub_83085980) {
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
	// bl 0x82cb6ae8
	ctx.lr = 0x83085998;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// lwz r8,308(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,-18264(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r8,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lfs f13,-18268(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18268);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// beq cr6,0x83085b2c
	if (ctx.cr6.eq) goto loc_83085B2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83085af8
	if (ctx.cr6.eq) goto loc_83085AF8;
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83085af8
	if (ctx.cr6.eq) goto loc_83085AF8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83079b90
	ctx.lr = 0x83085A0C;
	sub_83079B90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x83085af8
	if (ctx.cr6.eq) goto loc_83085AF8;
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83085a40
	if (!ctx.cr6.eq) goto loc_83085A40;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085a74
	if (ctx.cr6.eq) goto loc_83085A74;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r8,280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83085a74
	if (ctx.cr6.eq) goto loc_83085A74;
loc_83085A40:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085a54
	if (ctx.cr6.eq) goto loc_83085A54;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_83085A54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83085A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83085A74:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f5,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f3,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f12,f5
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// lfs f1,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f31,f11,f3
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// lfs f30,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f29,f10,f1
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fsubs f28,f9,f30
	ctx.f28.f64 = double(float(ctx.f9.f64 - ctx.f30.f64));
	// fsel f0,f6,f8,f0
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsel f13,f4,f7,f13
	ctx.f13.f64 = ctx.f4.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsel f12,f2,f5,f12
	ctx.f12.f64 = ctx.f2.f64 >= 0.0 ? ctx.f5.f64 : ctx.f12.f64;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsel f11,f31,f11,f3
	ctx.f11.f64 = ctx.f31.f64 >= 0.0 ? ctx.f11.f64 : ctx.f3.f64;
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsel f10,f29,f10,f1
	ctx.f10.f64 = ctx.f29.f64 >= 0.0 ? ctx.f10.f64 : ctx.f1.f64;
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsel f9,f28,f9,f30
	ctx.f9.f64 = ctx.f28.f64 >= 0.0 ? ctx.f9.f64 : ctx.f30.f64;
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// b 0x83085b84
	goto loc_83085B84;
loc_83085AF8:
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83085b24
	if (!ctx.cr6.eq) goto loc_83085B24;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085b80
	if (ctx.cr6.eq) goto loc_83085B80;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r8,280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83085b80
	if (ctx.cr6.eq) goto loc_83085B80;
loc_83085B24:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// b 0x83085b50
	goto loc_83085B50;
loc_83085B2C:
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83085b50
	if (!ctx.cr6.eq) goto loc_83085B50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085b80
	if (ctx.cr6.eq) goto loc_83085B80;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r8,280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83085b80
	if (ctx.cr6.eq) goto loc_83085B80;
loc_83085B50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085b60
	if (ctx.cr6.eq) goto loc_83085B60;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_83085B60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83085B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83085B80:
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
loc_83085B84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83085b94
	if (ctx.cr6.eq) goto loc_83085B94;
	// lwz r31,76(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// b 0x83085b9c
	goto loc_83085B9C;
loc_83085B94:
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r31,72(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
loc_83085B9C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83085c3c
	if (ctx.cr6.eq) goto loc_83085C3C;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fsubs f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r9,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8315f360
	ctx.lr = 0x83085C24;
	sub_8315F360(ctx, base);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8315f360
	ctx.lr = 0x83085C3C;
	sub_8315F360(ctx, base);
loc_83085C3C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b34
	ctx.lr = 0x83085C48;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_83085C5C"))) PPC_WEAK_FUNC(sub_83085C5C);
PPC_FUNC_IMPL(__imp__sub_83085C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83085C60"))) PPC_WEAK_FUNC(sub_83085C60);
PPC_FUNC_IMPL(__imp__sub_83085C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83085C68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,768(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 768);
	// rlwinm r28,r11,25,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83085ca8
	if (ctx.cr6.eq) goto loc_83085CA8;
loc_83085C88:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bl 0x83085980
	ctx.lr = 0x83085CA0;
	sub_83085980(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83085c88
	if (!ctx.cr6.eq) goto loc_83085C88;
loc_83085CA8:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83085cc0
	if (ctx.cr6.eq) goto loc_83085CC0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83085CC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83085CC8"))) PPC_WEAK_FUNC(sub_83085CC8);
PPC_FUNC_IMPL(__imp__sub_83085CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83085CD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x83085cf0
	if (!ctx.cr6.eq) goto loc_83085CF0;
	// lwz r28,332(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 332);
loc_83085CF0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83085d40
	if (ctx.cr6.eq) goto loc_83085D40;
loc_83085D08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x83085d34
	if (!ctx.cr6.eq) goto loc_83085D34;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83085d34
	if (ctx.cr6.eq) goto loc_83085D34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83085D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83085D34:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83085d08
	if (!ctx.cr6.eq) goto loc_83085D08;
loc_83085D40:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83085db8
	if (ctx.cr6.eq) goto loc_83085DB8;
loc_83085D60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83085da0
	if (ctx.cr6.eq) goto loc_83085DA0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83085da0
	if (ctx.cr6.eq) goto loc_83085DA0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83085dac
	if (ctx.cr6.eq) goto loc_83085DAC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83085dac
	if (ctx.cr6.eq) goto loc_83085DAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83085D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83085dac
	goto loc_83085DAC;
loc_83085DA0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,268(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 268);
	// bl 0x83047780
	ctx.lr = 0x83085DAC;
	sub_83047780(ctx, base);
loc_83085DAC:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83085d60
	if (!ctx.cr6.eq) goto loc_83085D60;
loc_83085DB8:
	// lwz r30,64(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83086028
	if (ctx.cr6.eq) goto loc_83086028;
	// li r27,12
	ctx.r27.s64 = 12;
loc_83085DCC:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,64(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83085e48
	if (ctx.cr6.eq) goto loc_83085E48;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83085e0c
	if (!ctx.cr6.eq) goto loc_83085E0C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83085e08
	if (ctx.cr6.eq) goto loc_83085E08;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r29.u32);
	// b 0x83085e0c
	goto loc_83085E0C;
loc_83085E08:
	// stw r29,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r29.u32);
loc_83085E0C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83085e20
	if (ctx.cr6.eq) goto loc_83085E20;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_83085E20:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83085e34
	if (ctx.cr6.eq) goto loc_83085E34;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_83085E34:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r9)
	PPC_STORE_U32(ctx.r9.u32 + 68, ctx.r11.u32);
loc_83085E48:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085ebc
	if (ctx.cr6.eq) goto loc_83085EBC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83085e80
	if (!ctx.cr6.eq) goto loc_83085E80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085e7c
	if (ctx.cr6.eq) goto loc_83085E7C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// b 0x83085e80
	goto loc_83085E80;
loc_83085E7C:
	// stw r29,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r29.u32);
loc_83085E80:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085e94
	if (ctx.cr6.eq) goto loc_83085E94;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83085E94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83085ea8
	if (ctx.cr6.eq) goto loc_83085EA8;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83085EA8:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r11.u32);
loc_83085EBC:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83085ed4
	if (!ctx.cr6.eq) goto loc_83085ED4;
	// lwz r11,280(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// b 0x83085ee0
	goto loc_83085EE0;
loc_83085ED4:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83085ee0
	if (!ctx.cr6.eq) goto loc_83085EE0;
	// lwz r11,100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
loc_83085EE0:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r31,268(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83085f00
	if (ctx.cr6.eq) goto loc_83085F00;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83045b70
	ctx.lr = 0x83085F00;
	sub_83045B70(ctx, base);
loc_83085F00:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8308600c
	if (ctx.cr6.eq) goto loc_8308600C;
	// lwz r9,1596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r11,r31,1592
	ctx.r11.s64 = ctx.r31.s64 + 1592;
	// lwz r8,1592(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r6,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8308600c
	if (ctx.cr0.eq) goto loc_8308600C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_83085F34:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83085f64
	if (ctx.cr6.eq) goto loc_83085F64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83085f34
	if (ctx.cr6.lt) goto loc_83085F34;
	// b 0x8308600c
	goto loc_8308600C;
loc_83085F64:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83085fac
	if (ctx.cr6.eq) goto loc_83085FAC;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,-16(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	// addi r7,r9,-16
	ctx.r7.s64 = ctx.r9.s64 + -16;
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stwx r5,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r3,-12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
loc_83085FAC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r31,1572
	ctx.r7.s64 = ctx.r31.s64 + 1572;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// lwz r9,1572(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r8,r8,r27
	ctx.r8.s32 = ctx.r8.s32 / ctx.r27.s32;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83086000
	if (ctx.cr6.eq) goto loc_83086000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_83086000:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
loc_8308600C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x830744c8
	ctx.lr = 0x8308601C;
	sub_830744C8(ctx, base);
	// lwz r30,64(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83085dcc
	if (!ctx.cr6.eq) goto loc_83085DCC;
loc_83086028:
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83086054
	if (ctx.cr6.eq) goto loc_83086054;
	// lwz r11,264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8308604c
	if (ctx.cr6.eq) goto loc_8308604C;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83086054
	if (!ctx.cr6.eq) goto loc_83086054;
loc_8308604C:
	// bl 0x8315f270
	ctx.lr = 0x83086050;
	sub_8315F270(ctx, base);
	// stw r29,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r29.u32);
loc_83086054:
	// stw r29,220(r25)
	PPC_STORE_U32(ctx.r25.u32 + 220, ctx.r29.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addic. r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r7,16(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// blt 0x830860a4
	if (ctx.cr0.lt) goto loc_830860A4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8308606C:
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x83086098
	if (!ctx.cr6.eq) goto loc_83086098;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// lwz r6,16(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stwx r4,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u32);
loc_83086098:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x8308606c
	if (!ctx.cr0.lt) goto loc_8308606C;
loc_830860A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830860AC"))) PPC_WEAK_FUNC(sub_830860AC);
PPC_FUNC_IMPL(__imp__sub_830860AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830860B0"))) PPC_WEAK_FUNC(sub_830860B0);
PPC_FUNC_IMPL(__imp__sub_830860B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x830860B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x83085c60
	ctx.lr = 0x830860C8;
	sub_83085C60(ctx, base);
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83086588
	if (ctx.cr6.eq) goto loc_83086588;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r29,28(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// beq cr6,0x8308617c
	if (ctx.cr6.eq) goto loc_8308617C;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
loc_830860EC:
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8308610c
	if (!ctx.cr6.eq) goto loc_8308610C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8308611c
	goto loc_8308611C;
loc_8308610C:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x83086168
	if (!ctx.cr6.eq) goto loc_83086168;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8308611C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83086168
	if (ctx.cr6.eq) goto loc_83086168;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83086168
	if (ctx.cr6.eq) goto loc_83086168;
loc_83086134:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83086154
	if (ctx.cr6.eq) goto loc_83086154;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83086134
	if (!ctx.cr6.eq) goto loc_83086134;
	// b 0x83086168
	goto loc_83086168;
loc_83086154:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83086168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83086168:
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830860ec
	if (ctx.cr6.lt) goto loc_830860EC;
loc_8308617C:
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83086588
	if (!ctx.cr6.gt) goto loc_83086588;
	// addi r25,r29,12
	ctx.r25.s64 = ctx.r29.s64 + 12;
	// li r24,12
	ctx.r24.s64 = 12;
loc_83086194:
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r29,-4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// srawi r4,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x830861d0
	if (!ctx.cr6.gt) goto loc_830861D0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_830861D0:
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8308630c
	if (ctx.cr6.eq) goto loc_8308630C;
loc_830861E0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x830861fc
	if (!ctx.cr6.eq) goto loc_830861FC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x83086210
	if (ctx.cr6.eq) goto loc_83086210;
loc_830861FC:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8308622c
	if (!ctx.cr6.eq) goto loc_8308622C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8308622c
	if (!ctx.cr6.eq) goto loc_8308622C;
loc_83086210:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83086260
	if (ctx.cr6.eq) goto loc_83086260;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83086260
	if (ctx.cr6.eq) goto loc_83086260;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8308623c
	if (ctx.cr6.eq) goto loc_8308623C;
loc_8308622C:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830861e0
	if (!ctx.cr6.eq) goto loc_830861E0;
	// b 0x8308630c
	goto loc_8308630C;
loc_8308623C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8308630c
	if (ctx.cr6.eq) goto loc_8308630C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308625C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8308630c
	goto loc_8308630C;
loc_83086260:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83086300
	if (ctx.cr6.eq) goto loc_83086300;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83086300
	if (ctx.cr6.eq) goto loc_83086300;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r5,296(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 296);
	// lhz r4,296(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 296);
	// lwz r8,380(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830862A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// lwz r5,292(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 292);
	// lwz r4,292(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 292);
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x831c44a8
	ctx.lr = 0x830862CC;
	sub_831C44A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830862dc
	if (ctx.cr6.eq) goto loc_830862DC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_830862DC:
	// rlwinm r7,r30,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83086300
	if (ctx.cr6.eq) goto loc_83086300;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r26,220
	ctx.r5.s64 = ctx.r26.s64 + 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83074220
	ctx.lr = 0x83086300;
	sub_83074220(ctx, base);
loc_83086300:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83047780
	ctx.lr = 0x8308630C;
	sub_83047780(ctx, base);
loc_8308630C:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r10,68(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83086328
	if (!ctx.cr6.gt) goto loc_83086328;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_83086328:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83086574
	if (ctx.cr6.eq) goto loc_83086574;
loc_83086338:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83086354
	if (ctx.cr6.eq) goto loc_83086354;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83086338
	if (!ctx.cr6.eq) goto loc_83086338;
	// b 0x83086574
	goto loc_83086574;
loc_83086354:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830863c8
	if (ctx.cr6.eq) goto loc_830863C8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8308638c
	if (!ctx.cr6.eq) goto loc_8308638C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83086388
	if (ctx.cr6.eq) goto loc_83086388;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r23.u32);
	// b 0x8308638c
	goto loc_8308638C;
loc_83086388:
	// stw r23,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r23.u32);
loc_8308638C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830863a0
	if (ctx.cr6.eq) goto loc_830863A0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_830863A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830863b4
	if (ctx.cr6.eq) goto loc_830863B4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_830863B4:
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r11.u32);
loc_830863C8:
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8308643c
	if (ctx.cr6.eq) goto loc_8308643C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83086400
	if (!ctx.cr6.eq) goto loc_83086400;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830863fc
	if (ctx.cr6.eq) goto loc_830863FC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r23,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r23.u32);
	// b 0x83086400
	goto loc_83086400;
loc_830863FC:
	// stw r23,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r23.u32);
loc_83086400:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83086414
	if (ctx.cr6.eq) goto loc_83086414;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83086414:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83086428
	if (ctx.cr6.eq) goto loc_83086428;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_83086428:
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// stw r23,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r23.u32);
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r11.u32);
loc_8308643C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83086458
	if (ctx.cr6.eq) goto loc_83086458;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83045b70
	ctx.lr = 0x83086458;
	sub_83045B70(ctx, base);
loc_83086458:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83086564
	if (ctx.cr6.eq) goto loc_83086564;
	// lwz r9,1596(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1596);
	// addi r11,r26,1592
	ctx.r11.s64 = ctx.r26.s64 + 1592;
	// lwz r8,1592(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1592);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r6,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x83086564
	if (ctx.cr0.eq) goto loc_83086564;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8308648C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x830864bc
	if (ctx.cr6.eq) goto loc_830864BC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8308648c
	if (ctx.cr6.lt) goto loc_8308648C;
	// b 0x83086564
	goto loc_83086564;
loc_830864BC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83086504
	if (ctx.cr6.eq) goto loc_83086504;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,-16(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	// addi r7,r9,-16
	ctx.r7.s64 = ctx.r9.s64 + -16;
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stwx r5,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r3,-12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
loc_83086504:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r26,1572
	ctx.r7.s64 = ctx.r26.s64 + 1572;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,1576(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1576);
	// lwz r9,1572(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1572);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r8,r8,r24
	ctx.r8.s32 = ctx.r8.s32 / ctx.r24.s32;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83086558
	if (ctx.cr6.eq) goto loc_83086558;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_83086558:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
loc_83086564:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 308);
	// bl 0x830744c8
	ctx.lr = 0x83086574;
	sub_830744C8(ctx, base);
loc_83086574:
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83086194
	if (ctx.cr6.lt) goto loc_83086194;
loc_83086588:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x830744e0
	ctx.lr = 0x83086590;
	sub_830744E0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830865A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830865e4
	if (ctx.cr6.eq) goto loc_830865E4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830865C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830865D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830865e4
	if (ctx.cr6.eq) goto loc_830865E4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83043218
	ctx.lr = 0x830865E0;
	sub_83043218(ctx, base);
	// bl 0x8307f4a0
	ctx.lr = 0x830865E4;
	sub_8307F4A0(ctx, base);
loc_830865E4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830865fc
	if (ctx.cr6.eq) goto loc_830865FC;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830865FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830865FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086604"))) PPC_WEAK_FUNC(sub_83086604);
PPC_FUNC_IMPL(__imp__sub_83086604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086608"))) PPC_WEAK_FUNC(sub_83086608);
PPC_FUNC_IMPL(__imp__sub_83086608) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086610"))) PPC_WEAK_FUNC(sub_83086610);
PPC_FUNC_IMPL(__imp__sub_83086610) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086618"))) PPC_WEAK_FUNC(sub_83086618);
PPC_FUNC_IMPL(__imp__sub_83086618) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086620"))) PPC_WEAK_FUNC(sub_83086620);
PPC_FUNC_IMPL(__imp__sub_83086620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086624"))) PPC_WEAK_FUNC(sub_83086624);
PPC_FUNC_IMPL(__imp__sub_83086624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086628"))) PPC_WEAK_FUNC(sub_83086628);
PPC_FUNC_IMPL(__imp__sub_83086628) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086630"))) PPC_WEAK_FUNC(sub_83086630);
PPC_FUNC_IMPL(__imp__sub_83086630) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086638"))) PPC_WEAK_FUNC(sub_83086638);
PPC_FUNC_IMPL(__imp__sub_83086638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308663C"))) PPC_WEAK_FUNC(sub_8308663C);
PPC_FUNC_IMPL(__imp__sub_8308663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086640"))) PPC_WEAK_FUNC(sub_83086640);
PPC_FUNC_IMPL(__imp__sub_83086640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086644"))) PPC_WEAK_FUNC(sub_83086644);
PPC_FUNC_IMPL(__imp__sub_83086644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086648"))) PPC_WEAK_FUNC(sub_83086648);
PPC_FUNC_IMPL(__imp__sub_83086648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308664C"))) PPC_WEAK_FUNC(sub_8308664C);
PPC_FUNC_IMPL(__imp__sub_8308664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086650"))) PPC_WEAK_FUNC(sub_83086650);
PPC_FUNC_IMPL(__imp__sub_83086650) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086658"))) PPC_WEAK_FUNC(sub_83086658);
PPC_FUNC_IMPL(__imp__sub_83086658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308665C"))) PPC_WEAK_FUNC(sub_8308665C);
PPC_FUNC_IMPL(__imp__sub_8308665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086660"))) PPC_WEAK_FUNC(sub_83086660);
PPC_FUNC_IMPL(__imp__sub_83086660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086664"))) PPC_WEAK_FUNC(sub_83086664);
PPC_FUNC_IMPL(__imp__sub_83086664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086668"))) PPC_WEAK_FUNC(sub_83086668);
PPC_FUNC_IMPL(__imp__sub_83086668) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086670"))) PPC_WEAK_FUNC(sub_83086670);
PPC_FUNC_IMPL(__imp__sub_83086670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086674"))) PPC_WEAK_FUNC(sub_83086674);
PPC_FUNC_IMPL(__imp__sub_83086674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086678"))) PPC_WEAK_FUNC(sub_83086678);
PPC_FUNC_IMPL(__imp__sub_83086678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308667C"))) PPC_WEAK_FUNC(sub_8308667C);
PPC_FUNC_IMPL(__imp__sub_8308667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086680"))) PPC_WEAK_FUNC(sub_83086680);
PPC_FUNC_IMPL(__imp__sub_83086680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086694"))) PPC_WEAK_FUNC(sub_83086694);
PPC_FUNC_IMPL(__imp__sub_83086694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086698"))) PPC_WEAK_FUNC(sub_83086698);
PPC_FUNC_IMPL(__imp__sub_83086698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830866AC"))) PPC_WEAK_FUNC(sub_830866AC);
PPC_FUNC_IMPL(__imp__sub_830866AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830866B0"))) PPC_WEAK_FUNC(sub_830866B0);
PPC_FUNC_IMPL(__imp__sub_830866B0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-388
	ctx.r10.s64 = ctx.r11.s64 + -388;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831f2f08
	ctx.lr = 0x830866DC;
	sub_831F2F08(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83086704
	if (ctx.cr6.eq) goto loc_83086704;
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
	ctx.lr = 0x83086704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83086704:
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

__attribute__((alias("__imp__sub_83086720"))) PPC_WEAK_FUNC(sub_83086720);
PPC_FUNC_IMPL(__imp__sub_83086720) {
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
	// bl 0x83084c58
	ctx.lr = 0x83086740;
	sub_83084C58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83086768
	if (ctx.cr6.eq) goto loc_83086768;
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
	ctx.lr = 0x83086768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83086768:
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

__attribute__((alias("__imp__sub_83086784"))) PPC_WEAK_FUNC(sub_83086784);
PPC_FUNC_IMPL(__imp__sub_83086784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086788"))) PPC_WEAK_FUNC(sub_83086788);
PPC_FUNC_IMPL(__imp__sub_83086788) {
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
	// bl 0x83084d70
	ctx.lr = 0x830867A8;
	sub_83084D70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830867d0
	if (ctx.cr6.eq) goto loc_830867D0;
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
	ctx.lr = 0x830867D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830867D0:
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

__attribute__((alias("__imp__sub_830867EC"))) PPC_WEAK_FUNC(sub_830867EC);
PPC_FUNC_IMPL(__imp__sub_830867EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830867F0"))) PPC_WEAK_FUNC(sub_830867F0);
PPC_FUNC_IMPL(__imp__sub_830867F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086800"))) PPC_WEAK_FUNC(sub_83086800);
PPC_FUNC_IMPL(__imp__sub_83086800) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83086834
	if (ctx.cr6.eq) goto loc_83086834;
	// bl 0x822990f0
	ctx.lr = 0x83086830;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83086834:
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

__attribute__((alias("__imp__sub_83086848"))) PPC_WEAK_FUNC(sub_83086848);
PPC_FUNC_IMPL(__imp__sub_83086848) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8308687c
	if (!ctx.cr6.gt) goto loc_8308687C;
	// bl 0x82d629b8
	ctx.lr = 0x8308687C;
	sub_82D629B8(ctx, base);
loc_8308687C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830868AC"))) PPC_WEAK_FUNC(sub_830868AC);
PPC_FUNC_IMPL(__imp__sub_830868AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830868B0"))) PPC_WEAK_FUNC(sub_830868B0);
PPC_FUNC_IMPL(__imp__sub_830868B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830868B8"))) PPC_WEAK_FUNC(sub_830868B8);
PPC_FUNC_IMPL(__imp__sub_830868B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830868C0"))) PPC_WEAK_FUNC(sub_830868C0);
PPC_FUNC_IMPL(__imp__sub_830868C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830868C8"))) PPC_WEAK_FUNC(sub_830868C8);
PPC_FUNC_IMPL(__imp__sub_830868C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x830868D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83086930
	if (!ctx.cr6.eq) goto loc_83086930;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83086908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,392(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 392);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83086928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83086930:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 + 11;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83086954
	if (!ctx.cr6.gt) goto loc_83086954;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x83086954;
	sub_82D629B8(ctx, base);
loc_83086954:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,11
	ctx.r7.s64 = ctx.r11.s64 + 11;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830869C4"))) PPC_WEAK_FUNC(sub_830869C4);
PPC_FUNC_IMPL(__imp__sub_830869C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830869C8"))) PPC_WEAK_FUNC(sub_830869C8);
PPC_FUNC_IMPL(__imp__sub_830869C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x830869D0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83086a54
	if (!ctx.cr6.eq) goto loc_83086A54;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83086A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r8,348(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83086A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83086A54:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,14
	ctx.r9.s64 = ctx.r11.s64 + 14;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83086a78
	if (!ctx.cr6.gt) goto loc_83086A78;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x83086A78;
	sub_82D629B8(ctx, base);
loc_83086A78:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,252(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r6,r11,14
	ctx.r6.s64 = ctx.r11.s64 + 14;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r27,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086B00"))) PPC_WEAK_FUNC(sub_83086B00);
PPC_FUNC_IMPL(__imp__sub_83086B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83086B08;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83086b80
	if (!ctx.cr6.eq) goto loc_83086B80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83086B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,332(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 332);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83086B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_83086B80:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,13
	ctx.r9.s64 = ctx.r11.s64 + 13;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83086ba4
	if (!ctx.cr6.gt) goto loc_83086BA4;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x83086BA4;
	sub_82D629B8(ctx, base);
loc_83086BA4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stw r26,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086C20"))) PPC_WEAK_FUNC(sub_83086C20);
PPC_FUNC_IMPL(__imp__sub_83086C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83086C28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83086c88
	if (!ctx.cr6.eq) goto loc_83086C88;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83086C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,388(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 388);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83086C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83086C88:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83086cac
	if (!ctx.cr6.gt) goto loc_83086CAC;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x83086CAC;
	sub_82D629B8(ctx, base);
loc_83086CAC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 9;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086D08"))) PPC_WEAK_FUNC(sub_83086D08);
PPC_FUNC_IMPL(__imp__sub_83086D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83086D10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83086d70
	if (!ctx.cr6.eq) goto loc_83086D70;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83086D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,396(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 396);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83086D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83086D70:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83086d94
	if (!ctx.cr6.gt) goto loc_83086D94;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x83086D94;
	sub_82D629B8(ctx, base);
loc_83086D94:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,5
	ctx.r7.s64 = 5;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83086E08:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83086e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83086E08;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086E28"))) PPC_WEAK_FUNC(sub_83086E28);
PPC_FUNC_IMPL(__imp__sub_83086E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83086E30;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83086ec4
	if (!ctx.cr6.eq) goto loc_83086EC4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,-240
	ctx.r9.s64 = ctx.r10.s64 + -240;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83086E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,340(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83086EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_83086EC4:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,13
	ctx.r9.s64 = ctx.r11.s64 + 13;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83086ee8
	if (!ctx.cr6.gt) goto loc_83086EE8;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x83086EE8;
	sub_82D629B8(ctx, base);
loc_83086EE8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stw r27,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r27.u32);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086F64"))) PPC_WEAK_FUNC(sub_83086F64);
PPC_FUNC_IMPL(__imp__sub_83086F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086F68"))) PPC_WEAK_FUNC(sub_83086F68);
PPC_FUNC_IMPL(__imp__sub_83086F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83086F70;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83086ffc
	if (!ctx.cr6.eq) goto loc_83086FFC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,-232
	ctx.r9.s64 = ctx.r10.s64 + -232;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83086FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r6,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r6.u8);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83086FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83086FFC:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83087020
	if (!ctx.cr6.gt) goto loc_83087020;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x83087020;
	sub_82D629B8(ctx, base);
loc_83087020:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,7
	ctx.r8.s64 = 7;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 9;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308707C"))) PPC_WEAK_FUNC(sub_8308707C);
PPC_FUNC_IMPL(__imp__sub_8308707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087080"))) PPC_WEAK_FUNC(sub_83087080);
PPC_FUNC_IMPL(__imp__sub_83087080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83087088;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83087114
	if (!ctx.cr6.eq) goto loc_83087114;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,-232
	ctx.r9.s64 = ctx.r10.s64 + -232;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x830870D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r6,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r6.u8);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8308710C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83087114:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 + 11;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83087138
	if (!ctx.cr6.gt) goto loc_83087138;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x83087138;
	sub_82D629B8(ctx, base);
loc_83087138:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,11
	ctx.r7.s64 = ctx.r11.s64 + 11;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830871A8"))) PPC_WEAK_FUNC(sub_830871A8);
PPC_FUNC_IMPL(__imp__sub_830871A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x830871B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8308723c
	if (!ctx.cr6.eq) goto loc_8308723C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,-232
	ctx.r9.s64 = ctx.r10.s64 + -232;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83087200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r6,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r6.u8);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8308723C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83087260
	if (!ctx.cr6.gt) goto loc_83087260;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x83087260;
	sub_82D629B8(ctx, base);
loc_83087260:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,9
	ctx.r7.s64 = 9;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830872D4:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x830872d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830872D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830872F4"))) PPC_WEAK_FUNC(sub_830872F4);
PPC_FUNC_IMPL(__imp__sub_830872F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830872F8"))) PPC_WEAK_FUNC(sub_830872F8);
PPC_FUNC_IMPL(__imp__sub_830872F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83087300;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8308738c
	if (!ctx.cr6.eq) goto loc_8308738C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,-232
	ctx.r9.s64 = ctx.r10.s64 + -232;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83087350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r6,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r6.u8);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8308738C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x830873b0
	if (!ctx.cr6.gt) goto loc_830873B0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x830873B0;
	sub_82D629B8(ctx, base);
loc_830873B0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,10
	ctx.r8.s64 = 10;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83087428"))) PPC_WEAK_FUNC(sub_83087428);
PPC_FUNC_IMPL(__imp__sub_83087428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83087430;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830874b8
	if (!ctx.cr6.eq) goto loc_830874B8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r10,-232
	ctx.r8.s64 = ctx.r10.s64 + -232;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83087480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830874B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_830874B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830874C4"))) PPC_WEAK_FUNC(sub_830874C4);
PPC_FUNC_IMPL(__imp__sub_830874C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830874C8"))) PPC_WEAK_FUNC(sub_830874C8);
PPC_FUNC_IMPL(__imp__sub_830874C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x830874D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83087560
	if (!ctx.cr6.eq) goto loc_83087560;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,-228
	ctx.r9.s64 = ctx.r10.s64 + -228;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83087524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r11,376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_83087560:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83087584
	if (!ctx.cr6.gt) goto loc_83087584;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x83087584;
	sub_82D629B8(ctx, base);
loc_83087584:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,11
	ctx.r7.s64 = 11;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830875F4:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x830875f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830875F4;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stw r25,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83087630"))) PPC_WEAK_FUNC(sub_83087630);
PPC_FUNC_IMPL(__imp__sub_83087630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83087638;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830876c8
	if (!ctx.cr6.eq) goto loc_830876C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,-228
	ctx.r9.s64 = ctx.r10.s64 + -228;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8308768C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830876C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_830876C8:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x830876ec
	if (!ctx.cr6.gt) goto loc_830876EC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x830876EC;
	sub_82D629B8(ctx, base);
loc_830876EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r25,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r25.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,52(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,56(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r27,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308777C"))) PPC_WEAK_FUNC(sub_8308777C);
PPC_FUNC_IMPL(__imp__sub_8308777C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087780"))) PPC_WEAK_FUNC(sub_83087780);
PPC_FUNC_IMPL(__imp__sub_83087780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x83087788;
	__savegprlr_21(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83087d94
	if (ctx.cr6.eq) goto loc_83087D94;
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r11,r31
	ctx.r23.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x83087d7c
	if (ctx.cr6.eq) goto loc_83087D7C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r26,r11,-228
	ctx.r26.s64 = ctx.r11.s64 + -228;
	// addi r28,r10,-232
	ctx.r28.s64 = ctx.r10.s64 + -232;
	// addi r25,r9,-256
	ctx.r25.s64 = ctx.r9.s64 + -256;
	// addi r24,r8,-240
	ctx.r24.s64 = ctx.r8.s64 + -240;
loc_830877D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x83087d74
	if (ctx.cr6.gt) goto loc_83087D74;
	// lis r12,-31992
	ctx.r12.s64 = -2096627712;
	// addi r12,r12,30712
	ctx.r12.s64 = ctx.r12.s64 + 30712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8308782C;
	case 1:
		goto loc_83087894;
	case 2:
		goto loc_83087924;
	case 3:
		goto loc_83087988;
	case 4:
		goto loc_830879E8;
	case 5:
		goto loc_83087A48;
	case 6:
		goto loc_83087AA8;
	case 7:
		goto loc_83087B08;
	case 8:
		goto loc_83087B6C;
	case 9:
		goto loc_83087BD0;
	case 10:
		goto loc_83087C34;
	case 11:
		goto loc_83087C98;
	case 12:
		goto loc_83087D08;
	default:
		__builtin_unreachable();
	}
	// lwz r24,30764(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30764);
	// lwz r24,30868(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30868);
	// lwz r24,31012(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31012);
	// lwz r24,31112(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31112);
	// lwz r24,31208(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31208);
	// lwz r24,31304(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31304);
	// lwz r24,31400(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31400);
	// lwz r24,31496(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31496);
	// lwz r24,31596(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31596);
	// lwz r24,31696(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31696);
	// lwz r24,31796(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31796);
	// lwz r24,31896(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31896);
	// lwz r24,32008(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32008);
loc_8308782C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83087848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,48(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lfs f1,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,332(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087894:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830878B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,48(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,348(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830878E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x83087910
	if (ctx.cr6.eq) goto loc_83087910;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308790C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087910:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83087920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087924:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lfs f1,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,48(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,340(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087988:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830879A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,388(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 388);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830879C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830879E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_830879E8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83087A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,392(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 392);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087A48:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83087A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,396(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 396);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087AA8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83087AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,400(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 400);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087B08:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r27,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r11,352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087B6C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r27,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087BD0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r27,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087C34:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r27,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087C98:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r22,12(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r21,0(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,92(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r5,r29,80
	ctx.r5.s64 = ctx.r29.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lwz r11,376(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83087d74
	goto loc_83087D74;
loc_83087D08:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r22,12(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r21,0(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,60(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r5,r29,48
	ctx.r5.s64 = ctx.r29.s64 + 48;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lwz r11,380(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83087D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83087D74:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x830877d4
	if (!ctx.cr6.eq) goto loc_830877D4;
loc_83087D7C:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83087d94
	if (ctx.cr6.eq) goto loc_83087D94;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83087D94:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83087D9C"))) PPC_WEAK_FUNC(sub_83087D9C);
PPC_FUNC_IMPL(__imp__sub_83087D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087DA0"))) PPC_WEAK_FUNC(sub_83087DA0);
PPC_FUNC_IMPL(__imp__sub_83087DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83087DA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83087e08
	if (!ctx.cr6.eq) goto loc_83087E08;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83087DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,400(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 400);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83087E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83087E08:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83087e2c
	if (!ctx.cr6.gt) goto loc_83087E2C;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d629b8
	ctx.lr = 0x83087E2C;
	sub_82D629B8(ctx, base);
loc_83087E2C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,6
	ctx.r8.s64 = 6;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83087EA4"))) PPC_WEAK_FUNC(sub_83087EA4);
PPC_FUNC_IMPL(__imp__sub_83087EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087EA8"))) PPC_WEAK_FUNC(sub_83087EA8);
PPC_FUNC_IMPL(__imp__sub_83087EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087EB8"))) PPC_WEAK_FUNC(sub_83087EB8);
PPC_FUNC_IMPL(__imp__sub_83087EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087EC8"))) PPC_WEAK_FUNC(sub_83087EC8);
PPC_FUNC_IMPL(__imp__sub_83087EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-248
	ctx.r10.s64 = ctx.r11.s64 + -248;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087ED8"))) PPC_WEAK_FUNC(sub_83087ED8);
PPC_FUNC_IMPL(__imp__sub_83087ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-244
	ctx.r10.s64 = ctx.r11.s64 + -244;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087EE8"))) PPC_WEAK_FUNC(sub_83087EE8);
PPC_FUNC_IMPL(__imp__sub_83087EE8) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087F1C"))) PPC_WEAK_FUNC(sub_83087F1C);
PPC_FUNC_IMPL(__imp__sub_83087F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087F20"))) PPC_WEAK_FUNC(sub_83087F20);
PPC_FUNC_IMPL(__imp__sub_83087F20) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087F54"))) PPC_WEAK_FUNC(sub_83087F54);
PPC_FUNC_IMPL(__imp__sub_83087F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087F58"))) PPC_WEAK_FUNC(sub_83087F58);
PPC_FUNC_IMPL(__imp__sub_83087F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-240
	ctx.r10.s64 = ctx.r11.s64 + -240;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087F68"))) PPC_WEAK_FUNC(sub_83087F68);
PPC_FUNC_IMPL(__imp__sub_83087F68) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83087F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087FB0"))) PPC_WEAK_FUNC(sub_83087FB0);
PPC_FUNC_IMPL(__imp__sub_83087FB0) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83087fe4
	if (ctx.cr6.eq) goto loc_83087FE4;
	// bl 0x822990f0
	ctx.lr = 0x83087FE0;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83087FE4:
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

__attribute__((alias("__imp__sub_83087FF8"))) PPC_WEAK_FUNC(sub_83087FF8);
PPC_FUNC_IMPL(__imp__sub_83087FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-232
	ctx.r10.s64 = ctx.r11.s64 + -232;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088008"))) PPC_WEAK_FUNC(sub_83088008);
PPC_FUNC_IMPL(__imp__sub_83088008) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8308803C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r7,r3
	ctx.r7.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088054"))) PPC_WEAK_FUNC(sub_83088054);
PPC_FUNC_IMPL(__imp__sub_83088054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088058"))) PPC_WEAK_FUNC(sub_83088058);
PPC_FUNC_IMPL(__imp__sub_83088058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-228
	ctx.r10.s64 = ctx.r11.s64 + -228;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088068"))) PPC_WEAK_FUNC(sub_83088068);
PPC_FUNC_IMPL(__imp__sub_83088068) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8308809C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r7,r3
	ctx.r7.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830880B4"))) PPC_WEAK_FUNC(sub_830880B4);
PPC_FUNC_IMPL(__imp__sub_830880B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830880B8"))) PPC_WEAK_FUNC(sub_830880B8);
PPC_FUNC_IMPL(__imp__sub_830880B8) {
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
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830880F4"))) PPC_WEAK_FUNC(sub_830880F4);
PPC_FUNC_IMPL(__imp__sub_830880F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830880F8"))) PPC_WEAK_FUNC(sub_830880F8);
PPC_FUNC_IMPL(__imp__sub_830880F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// stw r4,24260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24260, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088104"))) PPC_WEAK_FUNC(sub_83088104);
PPC_FUNC_IMPL(__imp__sub_83088104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088108"))) PPC_WEAK_FUNC(sub_83088108);
PPC_FUNC_IMPL(__imp__sub_83088108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// stw r4,24264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24264, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088114"))) PPC_WEAK_FUNC(sub_83088114);
PPC_FUNC_IMPL(__imp__sub_83088114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088118"))) PPC_WEAK_FUNC(sub_83088118);
PPC_FUNC_IMPL(__imp__sub_83088118) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088120"))) PPC_WEAK_FUNC(sub_83088120);
PPC_FUNC_IMPL(__imp__sub_83088120) {
	PPC_FUNC_PROLOGUE();
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088128"))) PPC_WEAK_FUNC(sub_83088128);
PPC_FUNC_IMPL(__imp__sub_83088128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088138"))) PPC_WEAK_FUNC(sub_83088138);
PPC_FUNC_IMPL(__imp__sub_83088138) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,12
	ctx.r7.s64 = 12;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// divw r10,r11,r8
	ctx.r10.s32 = ctx.r11.s32 / ctx.r8.s32;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r4,r5,r7
	ctx.r4.s32 = ctx.r5.s32 / ctx.r7.s32;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088184"))) PPC_WEAK_FUNC(sub_83088184);
PPC_FUNC_IMPL(__imp__sub_83088184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088188"))) PPC_WEAK_FUNC(sub_83088188);
PPC_FUNC_IMPL(__imp__sub_83088188) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,288
	ctx.r3.s64 = ctx.r3.s64 + 288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088190"))) PPC_WEAK_FUNC(sub_83088190);
PPC_FUNC_IMPL(__imp__sub_83088190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// lfs f8,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f8
	ctx.f5.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f4,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fneg f2,f4
	ctx.f2.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// lfs f1,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fneg f6,f13
	ctx.f6.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmsubs f8,f1,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 - ctx.f0.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fneg f4,f12
	ctx.f4.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f13,f5,f9
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f12,f7,f3
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f6,f11,f5
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f31,f8,f3
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmsubs f13,f11,f3,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 - ctx.f13.f64));
	// fmsubs f12,f2,f9,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 - ctx.f12.f64));
	// fmadds f6,f7,f2,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f6.f64));
	// fmsubs f10,f7,f5,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 - ctx.f10.f64));
	// fmuls f5,f13,f1
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f2,f12,f1
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmadds f13,f9,f3,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmuls f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fsubs f12,f8,f5
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fsubs f10,f4,f2
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fmuls f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fsubs f8,f31,f1
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmuls f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088278"))) PPC_WEAK_FUNC(sub_83088278);
PPC_FUNC_IMPL(__imp__sub_83088278) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088280"))) PPC_WEAK_FUNC(sub_83088280);
PPC_FUNC_IMPL(__imp__sub_83088280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088290"))) PPC_WEAK_FUNC(sub_83088290);
PPC_FUNC_IMPL(__imp__sub_83088290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830882A0"))) PPC_WEAK_FUNC(sub_830882A0);
PPC_FUNC_IMPL(__imp__sub_830882A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x830882A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x830883ac
	if (ctx.cr0.lt) goto loc_830883AC;
	// rlwinm r30,r29,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_830882C8:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x830882e8
	if (ctx.cr6.eq) goto loc_830882E8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x830883a0
	if (!ctx.cr6.eq) goto loc_830883A0;
loc_830882E8:
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088304
	if (ctx.cr6.eq) goto loc_83088304;
	// bl 0x8315e3a8
	ctx.lr = 0x830882F8;
	sub_8315E3A8(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
loc_83088304:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x83088378
	if (ctx.cr6.eq) goto loc_83088378;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r8,8
	ctx.r8.s64 = 8;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83088338:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83088338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83088338;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83088378
	if (ctx.cr6.eq) goto loc_83088378;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8315ebe8
	ctx.lr = 0x83088378;
	sub_8315EBE8(ctx, base);
loc_83088378:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308838C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830883a0
	if (!ctx.cr6.eq) goto loc_830883A0;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x8311ac10
	ctx.lr = 0x830883A0;
	sub_8311AC10(ctx, base);
loc_830883A0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// bge 0x830882c8
	if (!ctx.cr0.lt) goto loc_830882C8;
loc_830883AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830883B4"))) PPC_WEAK_FUNC(sub_830883B4);
PPC_FUNC_IMPL(__imp__sub_830883B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830883B8"))) PPC_WEAK_FUNC(sub_830883B8);
PPC_FUNC_IMPL(__imp__sub_830883B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830883C8"))) PPC_WEAK_FUNC(sub_830883C8);
PPC_FUNC_IMPL(__imp__sub_830883C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830883D8"))) PPC_WEAK_FUNC(sub_830883D8);
PPC_FUNC_IMPL(__imp__sub_830883D8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,1160
	ctx.r4.s64 = ctx.r4.s64 + 1160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831f3598
	ctx.lr = 0x83088404;
	sub_831F3598(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,412
	ctx.r10.s64 = ctx.r11.s64 + 412;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83088430"))) PPC_WEAK_FUNC(sub_83088430);
PPC_FUNC_IMPL(__imp__sub_83088430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,412
	ctx.r10.s64 = ctx.r11.s64 + 412;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x831f2f08
	sub_831F2F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088440"))) PPC_WEAK_FUNC(sub_83088440);
PPC_FUNC_IMPL(__imp__sub_83088440) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088448"))) PPC_WEAK_FUNC(sub_83088448);
PPC_FUNC_IMPL(__imp__sub_83088448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308844C"))) PPC_WEAK_FUNC(sub_8308844C);
PPC_FUNC_IMPL(__imp__sub_8308844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088450"))) PPC_WEAK_FUNC(sub_83088450);
PPC_FUNC_IMPL(__imp__sub_83088450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088454"))) PPC_WEAK_FUNC(sub_83088454);
PPC_FUNC_IMPL(__imp__sub_83088454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088458"))) PPC_WEAK_FUNC(sub_83088458);
PPC_FUNC_IMPL(__imp__sub_83088458) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8308849c
	if (ctx.cr6.eq) goto loc_8308849C;
	// bl 0x830a4ba0
	ctx.lr = 0x83088498;
	sub_830A4BA0(ctx, base);
	// b 0x830884b8
	goto loc_830884B8;
loc_8308849C:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x83043e20
	ctx.lr = 0x830884A4;
	sub_83043E20(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830884b8
	if (ctx.cr6.eq) goto loc_830884B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830792b0
	ctx.lr = 0x830884B8;
	sub_830792B0(ctx, base);
loc_830884B8:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830884d0
	if (ctx.cr6.eq) goto loc_830884D0;
	// bl 0x8315fca0
	ctx.lr = 0x830884CC;
	sub_8315FCA0(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
loc_830884D0:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830884e4
	if (ctx.cr6.eq) goto loc_830884E4;
	// bl 0x8315fca0
	ctx.lr = 0x830884E0;
	sub_8315FCA0(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
loc_830884E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830884FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_83088514"))) PPC_WEAK_FUNC(sub_83088514);
PPC_FUNC_IMPL(__imp__sub_83088514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088518"))) PPC_WEAK_FUNC(sub_83088518);
PPC_FUNC_IMPL(__imp__sub_83088518) {
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
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83088540:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82d62fd0
	ctx.lr = 0x83088550;
	sub_82D62FD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83088540
	if (!ctx.cr6.eq) goto loc_83088540;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// beq cr6,0x83088584
	if (ctx.cr6.eq) goto loc_83088584;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83085cc8
	ctx.lr = 0x8308857C;
	sub_83085CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
loc_83088584:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088598;
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

__attribute__((alias("__imp__sub_830885AC"))) PPC_WEAK_FUNC(sub_830885AC);
PPC_FUNC_IMPL(__imp__sub_830885AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830885B0"))) PPC_WEAK_FUNC(sub_830885B0);
PPC_FUNC_IMPL(__imp__sub_830885B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,128(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
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

__attribute__((alias("__imp__sub_830885CC"))) PPC_WEAK_FUNC(sub_830885CC);
PPC_FUNC_IMPL(__imp__sub_830885CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830885D0"))) PPC_WEAK_FUNC(sub_830885D0);
PPC_FUNC_IMPL(__imp__sub_830885D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,112(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830885F4"))) PPC_WEAK_FUNC(sub_830885F4);
PPC_FUNC_IMPL(__imp__sub_830885F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830885F8"))) PPC_WEAK_FUNC(sub_830885F8);
PPC_FUNC_IMPL(__imp__sub_830885F8) {
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
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r4,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830886bc
	if (ctx.cr6.eq) goto loc_830886BC;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r30,r10,24,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// beq cr6,0x8308863c
	if (ctx.cr6.eq) goto loc_8308863C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ori r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 256;
	// b 0x83088660
	goto loc_83088660;
loc_8308863C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088654
	if (ctx.cr6.eq) goto loc_83088654;
	// bl 0x830a4440
	ctx.lr = 0x8308864C;
	sub_830A4440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83088664
	if (!ctx.cr6.eq) goto loc_83088664;
loc_83088654:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r10,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_83088660:
	// stw r9,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
loc_83088664:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r8,r9,24,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830886bc
	if (ctx.cr6.eq) goto loc_830886BC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8308869c
	if (ctx.cr6.eq) goto loc_8308869C;
	// lwz r30,220(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83085cc8
	ctx.lr = 0x83088694;
	sub_83085CC8(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x830886b0
	goto loc_830886B0;
loc_8308869C:
	// lwz r30,220(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83085cc8
	ctx.lr = 0x830886AC;
	sub_83085CC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_830886B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830855b0
	ctx.lr = 0x830886BC;
	sub_830855B0(ctx, base);
loc_830886BC:
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

__attribute__((alias("__imp__sub_830886D4"))) PPC_WEAK_FUNC(sub_830886D4);
PPC_FUNC_IMPL(__imp__sub_830886D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830886D8"))) PPC_WEAK_FUNC(sub_830886D8);
PPC_FUNC_IMPL(__imp__sub_830886D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,320(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830886E0"))) PPC_WEAK_FUNC(sub_830886E0);
PPC_FUNC_IMPL(__imp__sub_830886E0) {
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
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83088738
	if (ctx.cr6.eq) goto loc_83088738;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088714
	if (ctx.cr6.eq) goto loc_83088714;
	// bl 0x830886e0
	ctx.lr = 0x83088710;
	sub_830886E0(ctx, base);
	// b 0x83088738
	goto loc_83088738;
loc_83088714:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308872C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x83079c88
	ctx.lr = 0x83088738;
	sub_83079C88(ctx, base);
loc_83088738:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,476(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308874C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_83088760"))) PPC_WEAK_FUNC(sub_83088760);
PPC_FUNC_IMPL(__imp__sub_83088760) {
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
	// bl 0x82cb6abc
	ctx.lr = 0x83088774;
	__savefpr_17(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83088a88
	if (ctx.cr6.eq) goto loc_83088A88;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088a88
	if (ctx.cr6.eq) goto loc_83088A88;
	// lfs f0,220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lfs f7,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fneg f5,f7
	ctx.f5.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f4,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f4.f64 = double(temp.f32);
	// fneg f6,f9
	ctx.f6.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f2,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f4
	ctx.f1.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// lfs f11,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f13,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f29,f2,f2,f13
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 - ctx.f13.f64));
	// lfs f7,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fneg f4,f0
	ctx.f4.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
	// fmuls f28,f12,f8
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// fmuls f26,f10,f5
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f27,f10,f6
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f25,f5,f3
	ctx.f25.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f11,f1
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f23,f9,f7
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f22,f9,f11
	ctx.f22.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f19,f29,f8
	ctx.f19.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fmuls f21,f4,f31
	ctx.f21.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmsubs f20,f30,f30,f13
	ctx.f20.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 - ctx.f13.f64));
	// fmsubs f28,f6,f3,f28
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 - ctx.f28.f64));
	// fmadds f26,f3,f8,f26
	ctx.f26.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f26.f64));
	// fmsubs f27,f12,f5,f27
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 - ctx.f27.f64));
	// fmsubs f8,f10,f8,f25
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 - ctx.f25.f64));
	// fmsubs f25,f9,f31,f24
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 - ctx.f24.f64));
	// fmsubs f24,f4,f11,f23
	ctx.f24.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 - ctx.f23.f64));
	// fmuls f5,f5,f29
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fmadds f23,f4,f7,f22
	ctx.f23.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f22.f64));
	// fmuls f29,f6,f29
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// fmsubs f22,f7,f1,f21
	ctx.f22.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 - ctx.f21.f64));
	// fmuls f28,f28,f2
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f2.f64));
	// fmadds f6,f12,f6,f26
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f26.f64));
	// fmuls f27,f27,f2
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f2.f64));
	// fmuls f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f26,f31,f20
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f20.f64));
	// fmuls f2,f25,f30
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f30.f64));
	// fmuls f7,f7,f20
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f20.f64));
	// fmadds f31,f31,f1,f23
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 + ctx.f23.f64));
	// fmuls f25,f30,f24
	ctx.f25.f64 = double(float(ctx.f30.f64 * ctx.f24.f64));
	// fmuls f11,f11,f20
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f20.f64));
	// fsubs f5,f5,f28
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f28.f64));
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fsubs f28,f19,f27
	ctx.f28.f64 = double(float(ctx.f19.f64 - ctx.f27.f64));
	// fmuls f24,f22,f30
	ctx.f24.f64 = double(float(ctx.f22.f64 * ctx.f30.f64));
	// fmuls f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fsubs f8,f29,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f8.f64));
	// fadds f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fmuls f27,f4,f31
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f12,f31,f1
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// fadds f2,f26,f25
	ctx.f2.f64 = double(float(ctx.f26.f64 + ctx.f25.f64));
	// fadds f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fmuls f31,f9,f31
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f5,f28,f3
	ctx.f5.f64 = double(float(ctx.f28.f64 + ctx.f3.f64));
	// fadds f11,f11,f24
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f24.f64));
	// fadds f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fadds f8,f7,f27
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f27.f64));
	// fadds f7,f2,f12
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f5,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// fadds f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// lfs f11,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f29,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f9,f5
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f27,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f31,f30,f5
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f5.f64));
	// lfs f23,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f24,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f25,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f22,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f26,f5,f1
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// lfs f20,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f20.f64 = double(temp.f32);
	// lfs f21,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f21.f64 = double(temp.f32);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// lfs f19,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f19.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmadds f3,f29,f1,f3
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f1.f64 + ctx.f3.f64));
	// fmadds f28,f30,f29,f28
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f29.f64 + ctx.f28.f64));
	// fmadds f31,f11,f1,f31
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f31.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f8,f7,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f7,f6,f2
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fmsubs f26,f30,f11,f26
	ctx.f26.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 - ctx.f26.f64));
	// fmadds f6,f30,f27,f3
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f27.f64 + ctx.f3.f64));
	// fmadds f2,f4,f11,f28
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f28.f64));
	// fmadds f3,f4,f27,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f27.f64 + ctx.f31.f64));
	// fnmsubs f12,f4,f29,f26
	ctx.f12.f64 = double(float(-(ctx.f4.f64 * ctx.f29.f64 - ctx.f26.f64)));
	// fnmsubs f11,f4,f5,f6
	ctx.f11.f64 = double(float(-(ctx.f4.f64 * ctx.f5.f64 - ctx.f6.f64)));
	// fnmsubs f5,f27,f1,f2
	ctx.f5.f64 = double(float(-(ctx.f27.f64 * ctx.f1.f64 - ctx.f2.f64)));
	// fnmsubs f6,f9,f29,f3
	ctx.f6.f64 = double(float(-(ctx.f9.f64 * ctx.f29.f64 - ctx.f3.f64)));
	// fnmsubs f4,f9,f27,f12
	ctx.f4.f64 = double(float(-(ctx.f9.f64 * ctx.f27.f64 - ctx.f12.f64)));
	// fmuls f3,f11,f24
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// fmuls f1,f5,f23
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f23.f64));
	// fmuls f12,f5,f24
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f24.f64));
	// fmuls f2,f25,f6
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f6.f64));
	// fmuls f31,f11,f22
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f22.f64));
	// fmuls f29,f22,f6
	ctx.f29.f64 = double(float(ctx.f22.f64 * ctx.f6.f64));
	// fmsubs f9,f4,f4,f13
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 - ctx.f13.f64));
	// fmuls f13,f4,f22
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f22.f64));
	// fmuls f30,f4,f21
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f21.f64));
	// fmsubs f3,f5,f25,f3
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f25.f64 - ctx.f3.f64));
	// fmsubs f1,f24,f6,f1
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f6.f64 - ctx.f1.f64));
	// fmadds f12,f23,f6,f12
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmsubs f2,f11,f23,f2
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f23.f64 - ctx.f2.f64));
	// fmadds f31,f4,f19,f31
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f19.f64 + ctx.f31.f64));
	// fmuls f28,f23,f9
	ctx.f28.f64 = double(float(ctx.f23.f64 * ctx.f9.f64));
	// fmuls f27,f24,f9
	ctx.f27.f64 = double(float(ctx.f24.f64 * ctx.f9.f64));
	// fmuls f9,f9,f25
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// fmadds f13,f20,f6,f13
	ctx.f13.f64 = double(float(ctx.f20.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fmuls f3,f4,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmadds f12,f11,f25,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f25.f64 + ctx.f12.f64));
	// fmuls f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmsubs f4,f4,f20,f29
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f20.f64 - ctx.f29.f64));
	// fmadds f30,f19,f6,f30
	ctx.f30.f64 = double(float(ctx.f19.f64 * ctx.f6.f64 + ctx.f30.f64));
	// fmadds f31,f5,f20,f31
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f20.f64 + ctx.f31.f64));
	// fmadds f13,f5,f21,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f21.f64 + ctx.f13.f64));
	// fadds f3,f28,f3
	ctx.f3.f64 = double(float(ctx.f28.f64 + ctx.f3.f64));
	// fadds f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fmuls f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f29,f5,f12
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fadds f2,f27,f2
	ctx.f2.f64 = double(float(ctx.f27.f64 + ctx.f2.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fnmsubs f4,f5,f19,f4
	ctx.f4.f64 = double(float(-(ctx.f5.f64 * ctx.f19.f64 - ctx.f4.f64)));
	// fmadds f30,f11,f20,f30
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f20.f64 + ctx.f30.f64));
	// fnmsubs f6,f21,f6,f31
	ctx.f6.f64 = double(float(-(ctx.f21.f64 * ctx.f6.f64 - ctx.f31.f64)));
	// fnmsubs f13,f11,f19,f13
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f19.f64 - ctx.f13.f64)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f2,f2,f29
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f29.f64));
	// fadds f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fnmsubs f13,f11,f21,f4
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f21.f64 - ctx.f4.f64)));
	// fnmsubs f5,f5,f22,f30
	ctx.f5.f64 = double(float(-(ctx.f5.f64 * ctx.f22.f64 - ctx.f30.f64)));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// rldicr r8,r6,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// b 0x83088c3c
	goto loc_83088C3C;
loc_83088A88:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83088c44
	if (ctx.cr6.eq) goto loc_83088C44;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83088c18
	if (ctx.cr6.eq) goto loc_83088C18;
	// lfs f12,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// lfs f10,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// lfs f4,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f6.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f7,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f3,f4,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 - ctx.f0.f64));
	// lfs f5,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// lfs f1,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// lfs f2,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f30,f1,f13
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f21,f1,f10
	ctx.f21.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// lfs f29,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f26,f9,f6
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f27,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f28,f7,f11
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f25,f8,f7
	ctx.f25.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f24,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f23,f8,f5
	ctx.f23.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// lfs f22,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f31,f2,f10
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f20,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f18,f3,f5
	ctx.f18.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// fmuls f17,f3,f7
	ctx.f17.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f19,f2,f13
	ctx.f19.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmadds f30,f2,f4,f30
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f30.f64));
	// fmsubs f26,f5,f11,f26
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 - ctx.f26.f64));
	// fmsubs f28,f8,f6,f28
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 - ctx.f28.f64));
	// fmadds f5,f9,f5,f25
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f25.f64));
	// fmsubs f7,f9,f7,f23
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f23.f64));
	// fmadds f31,f27,f4,f31
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f4.f64 + ctx.f31.f64));
	// fmadds f25,f29,f4,f21
	ctx.f25.f64 = double(float(ctx.f29.f64 * ctx.f4.f64 + ctx.f21.f64));
	// fmsubs f23,f1,f4,f19
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 - ctx.f19.f64));
	// fmuls f26,f26,f4
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f4.f64));
	// fmuls f28,f28,f4
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f4.f64));
	// fmadds f6,f6,f11,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmuls f5,f7,f4
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmadds f4,f29,f12,f30
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fmadds f1,f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fmadds f7,f27,f13,f25
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f25.f64));
	// fnmsubs f31,f27,f12,f23
	ctx.f31.f64 = double(float(-(ctx.f27.f64 * ctx.f12.f64 - ctx.f23.f64)));
	// fadds f30,f18,f28
	ctx.f30.f64 = double(float(ctx.f18.f64 + ctx.f28.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fadds f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f28,f17,f26
	ctx.f28.f64 = double(float(ctx.f17.f64 + ctx.f26.f64));
	// fnmsubs f3,f29,f13,f1
	ctx.f3.f64 = double(float(-(ctx.f29.f64 * ctx.f13.f64 - ctx.f1.f64)));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmsubs f2,f2,f12,f7
	ctx.f2.f64 = double(float(-(ctx.f2.f64 * ctx.f12.f64 - ctx.f7.f64)));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fnmsubs f4,f27,f10,f4
	ctx.f4.f64 = double(float(-(ctx.f27.f64 * ctx.f10.f64 - ctx.f4.f64)));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fnmsubs f1,f29,f10,f31
	ctx.f1.f64 = double(float(-(ctx.f29.f64 * ctx.f10.f64 - ctx.f31.f64)));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f13,f30,f9
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f9.f64));
	// fadds f11,f5,f6
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f12,f28,f8
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f8.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f7,f24,f10
	ctx.f7.f64 = double(float(ctx.f24.f64 + ctx.f10.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f5,f8,f20
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f20.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f6,f22,f9
	ctx.f6.f64 = double(float(ctx.f22.f64 + ctx.f9.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// stw r5,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r5.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x83088c24
	goto loc_83088C24;
loc_83088C18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830cfd80
	ctx.lr = 0x83088C24;
	sub_830CFD80(ctx, base);
loc_83088C24:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_83088C3C:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83160600
	ctx.lr = 0x83088C44;
	sub_83160600(ctx, base);
loc_83088C44:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b08
	ctx.lr = 0x83088C50;
	__restfpr_17(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088C60"))) PPC_WEAK_FUNC(sub_83088C60);
PPC_FUNC_IMPL(__imp__sub_83088C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088C68"))) PPC_WEAK_FUNC(sub_83088C68);
PPC_FUNC_IMPL(__imp__sub_83088C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83088cc0
	if (ctx.cr6.eq) goto loc_83088CC0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r3,12
	ctx.r3.s64 = 12;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r9,r10,r9
	ctx.r9.s32 = ctx.r10.s32 / ctx.r9.s32;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r10,r4,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r9,r10,r7
	ctx.r9.s32 = ctx.r10.s32 / ctx.r7.s32;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r4,r5,r3
	ctx.r4.s32 = ctx.r5.s32 / ctx.r3.s32;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// blr 
	return;
loc_83088CC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088CD4"))) PPC_WEAK_FUNC(sub_83088CD4);
PPC_FUNC_IMPL(__imp__sub_83088CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088CD8"))) PPC_WEAK_FUNC(sub_83088CD8);
PPC_FUNC_IMPL(__imp__sub_83088CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83088cf4
	if (ctx.cr6.eq) goto loc_83088CF4;
	// lis r3,-1
	ctx.r3.s64 = -65536;
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// blr 
	return;
loc_83088CF4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088CFC"))) PPC_WEAK_FUNC(sub_83088CFC);
PPC_FUNC_IMPL(__imp__sub_83088CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088D00"))) PPC_WEAK_FUNC(sub_83088D00);
PPC_FUNC_IMPL(__imp__sub_83088D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83088d14
	if (ctx.cr6.eq) goto loc_83088D14;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x83088d2c
	goto loc_83088D2C;
loc_83088D14:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83088d28
	if (ctx.cr6.eq) goto loc_83088D28;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// b 0x83088d2c
	goto loc_83088D2C;
loc_83088D28:
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
loc_83088D2C:
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83088d5c
	if (ctx.cr6.eq) goto loc_83088D5C;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83088d5c
	if (ctx.cr6.eq) goto loc_83088D5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83088d5c
	if (ctx.cr6.eq) goto loc_83088D5C;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83088d60
	if (!ctx.cr6.eq) goto loc_83088D60;
loc_83088D5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83088D60:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088D68"))) PPC_WEAK_FUNC(sub_83088D68);
PPC_FUNC_IMPL(__imp__sub_83088D68) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83088da4
	if (ctx.cr6.eq) goto loc_83088DA4;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83088DA4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088db8
	if (ctx.cr6.eq) goto loc_83088DB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83088dc0
	goto loc_83088DC0;
loc_83088DB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83088DC0:
	// lwz r10,476(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088DCC;
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

__attribute__((alias("__imp__sub_83088DE0"))) PPC_WEAK_FUNC(sub_83088DE0);
PPC_FUNC_IMPL(__imp__sub_83088DE0) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r10,448
	ctx.r9.s64 = ctx.r10.s64 + 448;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,768(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// stw r7,768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 768, ctx.r7.u32);
	// bl 0x83088518
	ctx.lr = 0x83088E14;
	sub_83088518(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x83045ee8
	ctx.lr = 0x83088E20;
	sub_83045EE8(ctx, base);
	// lwz r6,268(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r3,236(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088e38
	if (ctx.cr6.eq) goto loc_83088E38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8307f428
	ctx.lr = 0x83088E38;
	sub_8307F428(ctx, base);
loc_83088E38:
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088e54
	if (ctx.cr6.eq) goto loc_83088E54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83088E54:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x831c68b0
	ctx.lr = 0x83088E5C;
	sub_831C68B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83088E7C"))) PPC_WEAK_FUNC(sub_83088E7C);
PPC_FUNC_IMPL(__imp__sub_83088E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088E80"))) PPC_WEAK_FUNC(sub_83088E80);
PPC_FUNC_IMPL(__imp__sub_83088E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83088ed8
	if (!ctx.cr6.eq) goto loc_83088ED8;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f11,100(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,104(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f9,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,108(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
loc_83088ED8:
	// b 0x83088d68
	sub_83088D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088EDC"))) PPC_WEAK_FUNC(sub_83088EDC);
PPC_FUNC_IMPL(__imp__sub_83088EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088EE0"))) PPC_WEAK_FUNC(sub_83088EE0);
PPC_FUNC_IMPL(__imp__sub_83088EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,124(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83089014
	if (!ctx.cr6.eq) goto loc_83089014;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f11,f8
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// li r9,9
	ctx.r9.s64 = 9;
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
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83088FDC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83088fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83088FDC;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83089000:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83089000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83089000;
loc_83089014:
	// bl 0x83088d68
	ctx.lr = 0x83089018;
	sub_83088D68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089028"))) PPC_WEAK_FUNC(sub_83089028);
PPC_FUNC_IMPL(__imp__sub_83089028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,112(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,116(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,120(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,124(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830891a8
	if (!ctx.cr6.eq) goto loc_830891A8;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stfs f10,56(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f12,100(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f9,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,104(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f8,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,108(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f4
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmuls f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f6,f6
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f6,f5
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// li r9,9
	ctx.r9.s64 = 9;
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f9,f4,f5
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f8,f7,f7
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f4,f13,f2
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fnmsubs f9,f8,f0,f13
	ctx.f9.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fsubs f5,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f6,f4,f1
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f4,f12,f3
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f3,f10,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f12,f7,f8
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f11,f9,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83089170:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83089170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83089170;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83089194:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83089194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83089194;
loc_830891A8:
	// bl 0x83088d68
	ctx.lr = 0x830891AC;
	sub_83088D68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830891BC"))) PPC_WEAK_FUNC(sub_830891BC);
PPC_FUNC_IMPL(__imp__sub_830891BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830891C0"))) PPC_WEAK_FUNC(sub_830891C0);
PPC_FUNC_IMPL(__imp__sub_830891C0) {
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
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830892a0
	if (!ctx.cr6.eq) goto loc_830892A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830892a0
	if (!ctx.cr6.eq) goto loc_830892A0;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r9,1424(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83089250
	if (!ctx.cr6.eq) goto loc_83089250;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x83089250
	if (ctx.cr6.eq) goto loc_83089250;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83089250
	if (ctx.cr6.eq) goto loc_83089250;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8308923c
	if (!ctx.cr6.eq) goto loc_8308923C;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x83089250
	if (!ctx.cr6.eq) goto loc_83089250;
loc_8308923C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r8,r9,24,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830892a0
	if (ctx.cr6.eq) goto loc_830892A0;
loc_83089250:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830892a0
	if (ctx.cr6.eq) goto loc_830892A0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83089284
	if (!ctx.cr6.eq) goto loc_83089284;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d630b0
	ctx.lr = 0x83089284;
	sub_82D630B0(ctx, base);
loc_83089284:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
loc_830892A0:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83089304
	if (!ctx.cr6.eq) goto loc_83089304;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830892dc
	if (!ctx.cr6.eq) goto loc_830892DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d630b0
	ctx.lr = 0x830892DC;
	sub_82D630B0(ctx, base);
loc_830892DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r7,308(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// ori r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 | 16;
	// stw r6,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r6.u32);
loc_83089304:
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

__attribute__((alias("__imp__sub_8308931C"))) PPC_WEAK_FUNC(sub_8308931C);
PPC_FUNC_IMPL(__imp__sub_8308931C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83089320"))) PPC_WEAK_FUNC(sub_83089320);
PPC_FUNC_IMPL(__imp__sub_83089320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ac0
	ctx.lr = 0x83089330;
	__savefpr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83089578
	if (ctx.cr6.eq) goto loc_83089578;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,22552
	ctx.r9.s64 = ctx.r11.s64 + 22552;
	// lfs f13,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83089578
	if (ctx.cr6.eq) goto loc_83089578;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8308956c
	if (ctx.cr6.eq) goto loc_8308956C;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8308956c
	if (ctx.cr6.eq) goto loc_8308956C;
	// lfs f12,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f7,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// fmr f30,f7
	ctx.f30.f64 = ctx.f7.f64;
	// fmuls f3,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f1,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f8,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f4,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f31,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f28.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f27,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f27.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f26,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f26.f64 = double(temp.f32);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// fmuls f25,f26,f10
	ctx.f25.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// lfs f13,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f4,f8,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f9.f64));
	// lfs f23,260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f21,f28,f30
	ctx.f21.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f0,7676(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f11,f8,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f3.f64));
	// lfs f22,264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f2,f31,f8,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f8.f64 + ctx.f2.f64));
	// lfs f20,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f20.f64 = double(temp.f32);
	// fmsubs f5,f6,f8,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 - ctx.f5.f64));
	// addi r10,r11,244
	ctx.r10.s64 = ctx.r11.s64 + 244;
	// fmuls f18,f27,f30
	ctx.f18.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// fmuls f19,f27,f29
	ctx.f19.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// fmsubs f24,f8,f8,f13
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 - ctx.f13.f64));
	// lfs f13,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f25,f28,f29,f25
	ctx.f25.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f25.f64));
	// fmadds f9,f6,f1,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmsubs f21,f27,f10,f21
	ctx.f21.f64 = double(float(ctx.f27.f64 * ctx.f10.f64 - ctx.f21.f64));
	// fmadds f3,f31,f1,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 + ctx.f3.f64));
	// fmadds f2,f4,f7,f2
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fnmsubs f5,f4,f1,f5
	ctx.f5.f64 = double(float(-(ctx.f4.f64 * ctx.f1.f64 - ctx.f5.f64)));
	// fmadds f18,f28,f10,f18
	ctx.f18.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 + ctx.f18.f64));
	// fmsubs f19,f26,f30,f19
	ctx.f19.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 - ctx.f19.f64));
	// fmuls f6,f26,f24
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f24.f64));
	// fmuls f27,f27,f24
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f24.f64));
	// fmuls f28,f28,f24
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f24.f64));
	// fnmsubs f9,f31,f7,f9
	ctx.f9.f64 = double(float(-(ctx.f31.f64 * ctx.f7.f64 - ctx.f9.f64)));
	// fmuls f7,f25,f8
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f8.f64));
	// fnmsubs f4,f4,f12,f3
	ctx.f4.f64 = double(float(-(ctx.f4.f64 * ctx.f12.f64 - ctx.f3.f64)));
	// fnmsubs f3,f11,f1,f2
	ctx.f3.f64 = double(float(-(ctx.f11.f64 * ctx.f1.f64 - ctx.f2.f64)));
	// fnmsubs f5,f31,f12,f5
	ctx.f5.f64 = double(float(-(ctx.f31.f64 * ctx.f12.f64 - ctx.f5.f64)));
	// fmuls f2,f21,f8
	ctx.f2.f64 = double(float(ctx.f21.f64 * ctx.f8.f64));
	// fmadds f12,f26,f29,f18
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 + ctx.f18.f64));
	// fmuls f1,f19,f8
	ctx.f1.f64 = double(float(ctx.f19.f64 * ctx.f8.f64));
	// fmuls f11,f9,f9
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fadds f8,f27,f7
	ctx.f8.f64 = double(float(ctx.f27.f64 + ctx.f7.f64));
	// fmuls f7,f9,f4
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f31,f3,f3
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmuls f27,f5,f3
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fadds f6,f6,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fmuls f2,f12,f29
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fadds f1,f28,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f1.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f30,f27,f0
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fadds f6,f6,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fadds f2,f1,f10
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// fsubs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f10,f7,f30
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f30.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f10,f3,f4
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fsubs f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f1,f5,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// fmuls f29,f4,f4
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// li r8,9
	ctx.r8.s64 = 9;
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fmuls f3,f2,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f12,f30,f7
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fnmsubs f7,f29,f0,f13
	ctx.f7.f64 = double(float(-(ctx.f29.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f13,f20,f3
	ctx.f13.f64 = double(float(ctx.f20.f64 + ctx.f3.f64));
	// fadds f0,f22,f2
	ctx.f0.f64 = double(float(ctx.f22.f64 + ctx.f2.f64));
	// fadds f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f1,f10,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f2,f7,f31
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f10,f5,f6
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f4,f23
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f23.f64));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83089540:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83089540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83089540;
	// stfs f12,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f13,44(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8308956C:
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// lwz r3,320(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// bl 0x830533e8
	ctx.lr = 0x83089578;
	sub_830533E8(ctx, base);
loc_83089578:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b0c
	ctx.lr = 0x83089584;
	__restfpr_18(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089590"))) PPC_WEAK_FUNC(sub_83089590);
PPC_FUNC_IMPL(__imp__sub_83089590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,320(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830896a4
	if (ctx.cr6.eq) goto loc_830896A4;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f11,f8
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// li r8,9
	ctx.r8.s64 = 9;
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f13,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
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
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83089670:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83089670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83089670;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x830530c0
	ctx.lr = 0x830896A4;
	sub_830530C0(ctx, base);
loc_830896A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830896B4"))) PPC_WEAK_FUNC(sub_830896B4);
PPC_FUNC_IMPL(__imp__sub_830896B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830896B8"))) PPC_WEAK_FUNC(sub_830896B8);
PPC_FUNC_IMPL(__imp__sub_830896B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,320(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830897c8
	if (ctx.cr6.eq) goto loc_830897C8;
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f11,f8
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// li r9,9
	ctx.r9.s64 = 9;
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
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
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83089794:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83089794
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83089794;
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x83052a08
	ctx.lr = 0x830897C8;
	sub_83052A08(ctx, base);
loc_830897C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830897D8"))) PPC_WEAK_FUNC(sub_830897D8);
PPC_FUNC_IMPL(__imp__sub_830897D8) {
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
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x83089828
	if (!ctx.cr6.eq) goto loc_83089828;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
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
loc_83089828:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8308988c
	if (!ctx.cr6.eq) goto loc_8308988C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83089844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8308988c
	if (ctx.cr6.eq) goto loc_8308988C;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_83089854:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bne cr6,0x8308987c
	if (!ctx.cr6.eq) goto loc_8308987C;
	// lwz r8,352(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 352);
	// lwz r7,348(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// rlwinm r5,r6,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x830898a4
	if (!ctx.cr6.eq) goto loc_830898A4;
loc_8308987C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x83089854
	if (ctx.cr6.lt) goto loc_83089854;
loc_8308988C:
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
loc_830898A4:
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
}

__attribute__((alias("__imp__sub_830898BC"))) PPC_WEAK_FUNC(sub_830898BC);
PPC_FUNC_IMPL(__imp__sub_830898BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830898C0"))) PPC_WEAK_FUNC(sub_830898C0);
PPC_FUNC_IMPL(__imp__sub_830898C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830898d4
	if (ctx.cr6.eq) goto loc_830898D4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x830898ec
	goto loc_830898EC;
loc_830898D4:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830898e8
	if (ctx.cr6.eq) goto loc_830898E8;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// b 0x830898ec
	goto loc_830898EC;
loc_830898E8:
	// lwz r11,332(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 332);
loc_830898EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8308990c
	if (ctx.cr6.eq) goto loc_8308990C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_8308990C:
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

__attribute__((alias("__imp__sub_83089920"))) PPC_WEAK_FUNC(sub_83089920);
PPC_FUNC_IMPL(__imp__sub_83089920) {
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
	ctx.lr = 0x83089938;
	__savefpr_16(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x83089aa4
	if (!ctx.cr6.eq) goto loc_83089AA4;
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308997c
	if (!ctx.cr6.eq) goto loc_8308997C;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830899b0
	if (ctx.cr6.eq) goto loc_830899B0;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r8,280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830899b0
	if (ctx.cr6.eq) goto loc_830899B0;
loc_8308997C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83089990
	if (ctx.cr6.eq) goto loc_83089990;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_83089990:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830899B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830899B0:
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f11,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f10,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,16(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// lfs f6,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// lfs f5,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// stfs f4,20(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f2,12(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f1,16(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f12,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// lfs f9,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f4,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,6048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f13,56(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// b 0x83089df0
	goto loc_83089DF0;
loc_83089AA4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-18264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,512(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 512);
	// lfs f13,-18268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18268);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83089AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fadds f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fadds f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fsubs f3,f9,f8
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f0,6380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f1,12(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83089d54
	if (ctx.cr6.eq) goto loc_83089D54;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83089d54
	if (ctx.cr6.eq) goto loc_83089D54;
	// lfs f12,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f7,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f3,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// fmr f28,f5
	ctx.f28.f64 = ctx.f5.f64;
	// lfs f1,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f3,f5
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f29,f1,f12
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f8,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// lfs f30,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f7
	ctx.f2.f64 = ctx.f7.f64;
	// lfs f27,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f27.f64 = double(temp.f32);
	// fmsubs f6,f8,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 - ctx.f0.f64));
	// lfs f26,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f26.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f25,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f25.f64 = double(temp.f32);
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// fmuls f24,f27,f10
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f30,f8,f9
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f8.f64 + ctx.f9.f64));
	// lfs f22,260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f4,f1,f8,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 - ctx.f4.f64));
	// lfs f20,264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f18,f27,f28
	ctx.f18.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f11,f8,f31
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f31.f64));
	// lfs f19,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f29,f3,f8,f29
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f29.f64));
	// addi r10,r11,244
	ctx.r10.s64 = ctx.r11.s64 + 244;
	// fmuls f21,f26,f2
	ctx.f21.f64 = double(float(ctx.f26.f64 * ctx.f2.f64));
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// fmuls f17,f25,f28
	ctx.f17.f64 = double(float(ctx.f25.f64 * ctx.f28.f64));
	// fmuls f23,f27,f6
	ctx.f23.f64 = double(float(ctx.f27.f64 * ctx.f6.f64));
	// fmuls f16,f25,f6
	ctx.f16.f64 = double(float(ctx.f25.f64 * ctx.f6.f64));
	// fmsubs f24,f26,f28,f24
	ctx.f24.f64 = double(float(ctx.f26.f64 * ctx.f28.f64 - ctx.f24.f64));
	// fmadds f9,f1,f5,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fnmsubs f4,f30,f5,f4
	ctx.f4.f64 = double(float(-(ctx.f30.f64 * ctx.f5.f64 - ctx.f4.f64)));
	// fmuls f6,f26,f6
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f6.f64));
	// fmadds f1,f1,f7,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f31.f64));
	// fmadds f31,f30,f7,f29
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f7.f64 + ctx.f29.f64));
	// fmadds f29,f26,f10,f18
	ctx.f29.f64 = double(float(ctx.f26.f64 * ctx.f10.f64 + ctx.f18.f64));
	// fmsubs f21,f25,f10,f21
	ctx.f21.f64 = double(float(ctx.f25.f64 * ctx.f10.f64 - ctx.f21.f64));
	// fmsubs f27,f27,f2,f17
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f2.f64 - ctx.f17.f64));
	// fmuls f26,f24,f8
	ctx.f26.f64 = double(float(ctx.f24.f64 * ctx.f8.f64));
	// fnmsubs f9,f3,f7,f9
	ctx.f9.f64 = double(float(-(ctx.f3.f64 * ctx.f7.f64 - ctx.f9.f64)));
	// fnmsubs f7,f3,f12,f4
	ctx.f7.f64 = double(float(-(ctx.f3.f64 * ctx.f12.f64 - ctx.f4.f64)));
	// fnmsubs f3,f30,f12,f1
	ctx.f3.f64 = double(float(-(ctx.f30.f64 * ctx.f12.f64 - ctx.f1.f64)));
	// fnmsubs f1,f11,f5,f31
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f5.f64 - ctx.f31.f64)));
	// fmadds f12,f25,f2,f29
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f2.f64 + ctx.f29.f64));
	// fmuls f4,f21,f8
	ctx.f4.f64 = double(float(ctx.f21.f64 * ctx.f8.f64));
	// fmuls f11,f27,f8
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f8.f64));
	// fadds f8,f16,f26
	ctx.f8.f64 = double(float(ctx.f16.f64 + ctx.f26.f64));
	// fmuls f5,f9,f9
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f31,f9,f3
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f29,f7,f1
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f28,f28,f12
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// fmuls f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f30,f1,f1
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fadds f4,f23,f4
	ctx.f4.f64 = double(float(ctx.f23.f64 + ctx.f4.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fmuls f5,f31,f0
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f31,f29,f0
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fadds f2,f8,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fmuls f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fadds f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// fsubs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fadds f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fmuls f30,f7,f9
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fsubs f12,f5,f31
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f31.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f8,f1,f3
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmuls f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmuls f9,f7,f3
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// fmuls f29,f3,f3
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// li r8,9
	ctx.r8.s64 = 9;
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f12,f20,f4
	ctx.f12.f64 = double(float(ctx.f20.f64 + ctx.f4.f64));
	// fmuls f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f3,f30,f0
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fadds f5,f31,f5
	ctx.f5.f64 = double(float(ctx.f31.f64 + ctx.f5.f64));
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fnmsubs f2,f29,f0,f13
	ctx.f2.f64 = double(float(-(ctx.f29.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fadds f0,f19,f6
	ctx.f0.f64 = double(float(ctx.f19.f64 + ctx.f6.f64));
	// fadds f13,f22,f7
	ctx.f13.f64 = double(float(ctx.f22.f64 + ctx.f7.f64));
	// fadds f8,f3,f4
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f6,f4,f3
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f5,f1,f9
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f7,f2,f11
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f4,f9,f1
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f4,140(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f3,f2,f10
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// stfs f3,144(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83089D28:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83089d28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83089D28;
	// stfs f13,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f12,40(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f0,44(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83089D54:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// li r9,9
	ctx.r9.s64 = 9;
	// lfs f5,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f6,f7,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f7,f9
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f9.f64));
	// lfs f10,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f4,f7,f8
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// lfs f8,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f3,f2,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f6,f1,f3,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f5,f0,f3,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fadds f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fadds f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f3,4(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83089DDC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83089ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83089DDC;
loc_83089DF0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b04
	ctx.lr = 0x83089DFC;
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

__attribute__((alias("__imp__sub_83089E10"))) PPC_WEAK_FUNC(sub_83089E10);
PPC_FUNC_IMPL(__imp__sub_83089E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83089E18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83089e3c
	if (ctx.cr6.eq) goto loc_83089E3C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x83089e54
	goto loc_83089E54;
loc_83089E3C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83089e50
	if (ctx.cr6.eq) goto loc_83089E50;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// b 0x83089e54
	goto loc_83089E54;
loc_83089E50:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
loc_83089E54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83089ed0
	if (ctx.cr6.eq) goto loc_83089ED0;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x83089ed0
	if (ctx.cr6.eq) goto loc_83089ED0;
loc_83089E6C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83089e84
	if (ctx.cr6.eq) goto loc_83089E84;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83089ec4
	if (!ctx.cr6.eq) goto loc_83089EC4;
loc_83089E84:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83089ea4
	if (ctx.cr6.eq) goto loc_83089EA4;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83089ea4
	if (ctx.cr6.eq) goto loc_83089EA4;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83089ec4
	if (!ctx.cr6.eq) goto loc_83089EC4;
loc_83089EA4:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83089ebc
	if (ctx.cr6.eq) goto loc_83089EBC;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
loc_83089EBC:
	// lwz r3,268(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// bl 0x830478d8
	ctx.lr = 0x83089EC4;
	sub_830478D8(ctx, base);
loc_83089EC4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83089e6c
	if (!ctx.cr6.eq) goto loc_83089E6C;
loc_83089ED0:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83089ee4
	if (ctx.cr6.eq) goto loc_83089EE4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x83089efc
	goto loc_83089EFC;
loc_83089EE4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83089ef8
	if (ctx.cr6.eq) goto loc_83089EF8;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// b 0x83089efc
	goto loc_83089EFC;
loc_83089EF8:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
loc_83089EFC:
	// lwz r31,64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83089f20
	if (ctx.cr6.eq) goto loc_83089F20;
loc_83089F08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,268(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// bl 0x83047a08
	ctx.lr = 0x83089F14;
	sub_83047A08(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83089f08
	if (!ctx.cr6.eq) goto loc_83089F08;
loc_83089F20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83089F28"))) PPC_WEAK_FUNC(sub_83089F28);
PPC_FUNC_IMPL(__imp__sub_83089F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83089F30;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83089f4c
	if (ctx.cr6.eq) goto loc_83089F4C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x83089f64
	goto loc_83089F64;
loc_83089F4C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83089f60
	if (ctx.cr6.eq) goto loc_83089F60;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// b 0x83089f64
	goto loc_83089F64;
loc_83089F60:
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
loc_83089F64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8308a098
	if (ctx.cr6.eq) goto loc_8308A098;
	// lwz r25,20(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r26,16(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8308a098
	if (ctx.cr6.eq) goto loc_8308A098;
	// li r27,0
	ctx.r27.s64 = 0;
loc_83089F80:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83089f98
	if (ctx.cr6.eq) goto loc_83089F98;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8308a08c
	if (!ctx.cr6.eq) goto loc_8308A08C;
loc_83089F98:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8308a08c
	if (ctx.cr0.lt) goto loc_8308A08C;
	// rlwinm r30,r29,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
loc_83089FA8:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83089fc8
	if (ctx.cr6.eq) goto loc_83089FC8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8308a080
	if (!ctx.cr6.eq) goto loc_8308A080;
loc_83089FC8:
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83089fe4
	if (ctx.cr6.eq) goto loc_83089FE4;
	// bl 0x8315e3a8
	ctx.lr = 0x83089FD8;
	sub_8315E3A8(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
loc_83089FE4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x8308a058
	if (ctx.cr6.eq) goto loc_8308A058;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r8,8
	ctx.r8.s64 = 8;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8308A018:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8308a018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8308A018;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8308a058
	if (ctx.cr6.eq) goto loc_8308A058;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8315ebe8
	ctx.lr = 0x8308A058;
	sub_8315EBE8(ctx, base);
loc_8308A058:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308A06C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8308a080
	if (!ctx.cr6.eq) goto loc_8308A080;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x8311ac10
	ctx.lr = 0x8308A080;
	sub_8311AC10(ctx, base);
loc_8308A080:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// bge 0x83089fa8
	if (!ctx.cr0.lt) goto loc_83089FA8;
loc_8308A08C:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x83089f80
	if (!ctx.cr6.eq) goto loc_83089F80;
loc_8308A098:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A0A0"))) PPC_WEAK_FUNC(sub_8308A0A0);
PPC_FUNC_IMPL(__imp__sub_8308A0A0) {
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
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8308a0e0
	if (ctx.cr6.lt) goto loc_8308A0E0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-152
	ctx.r4.s64 = ctx.r11.s64 + -152;
	// li r5,270
	ctx.r5.s64 = 270;
	// addi r7,r4,-24
	ctx.r7.s64 = ctx.r4.s64 + -24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17988
	ctx.lr = 0x8308A0DC;
	sub_82D17988(ctx, base);
	// b 0x8308a0e4
	goto loc_8308A0E4;
loc_8308A0E0:
	// sth r4,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r4.u16);
loc_8308A0E4:
	// lhz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 304);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83089e10
	ctx.lr = 0x8308A104;
	sub_83089E10(ctx, base);
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

__attribute__((alias("__imp__sub_8308A118"))) PPC_WEAK_FUNC(sub_8308A118);
PPC_FUNC_IMPL(__imp__sub_8308A118) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r3,272
	ctx.r9.s64 = ctx.r3.s64 + 272;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r7.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r6.u32);
	// b 0x83089e10
	sub_83089E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A14C"))) PPC_WEAK_FUNC(sub_8308A14C);
PPC_FUNC_IMPL(__imp__sub_8308A14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A150"))) PPC_WEAK_FUNC(sub_8308A150);
PPC_FUNC_IMPL(__imp__sub_8308A150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8308A158;
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
	// cmpwi cr6,r30,16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16384, ctx.xer);
	// bne cr6,0x8308a1c4
	if (!ctx.cr6.eq) goto loc_8308A1C4;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308a1a8
	if (!ctx.cr6.eq) goto loc_8308A1A8;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8308a1a0
	if (ctx.cr6.eq) goto loc_8308A1A0;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// addi r3,r11,288
	ctx.r3.s64 = ctx.r11.s64 + 288;
	// bl 0x831c6e88
	ctx.lr = 0x8308A19C;
	sub_831C6E88(ctx, base);
	// b 0x8308a1c4
	goto loc_8308A1C4;
loc_8308A1A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8308a1c4
	if (ctx.cr6.eq) goto loc_8308A1C4;
loc_8308A1A8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308a1c4
	if (!ctx.cr6.eq) goto loc_8308A1C4;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// addi r3,r11,288
	ctx.r3.s64 = ctx.r11.s64 + 288;
	// bl 0x831c6de0
	ctx.lr = 0x8308A1C4;
	sub_831C6DE0(ctx, base);
loc_8308A1C4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// or r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 | ctx.r30.u64;
	// bne cr6,0x8308a1dc
	if (!ctx.cr6.eq) goto loc_8308A1DC;
	// andc r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r30.u64;
loc_8308A1DC:
	// li r12,4247
	ctx.r12.s64 = 4247;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8308a200
	if (ctx.cr6.eq) goto loc_8308A200;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83089e10
	ctx.lr = 0x8308A200;
	sub_83089E10(ctx, base);
loc_8308A200:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A208"))) PPC_WEAK_FUNC(sub_8308A208);
PPC_FUNC_IMPL(__imp__sub_8308A208) {
	PPC_FUNC_PROLOGUE();
	// sth r4,306(r3)
	PPC_STORE_U16(ctx.r3.u32 + 306, ctx.r4.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83089e10
	sub_83089E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A218"))) PPC_WEAK_FUNC(sub_8308A218);
PPC_FUNC_IMPL(__imp__sub_8308A218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83089e10
	sub_83089E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A228"))) PPC_WEAK_FUNC(sub_8308A228);
PPC_FUNC_IMPL(__imp__sub_8308A228) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// stw r4,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8308a250
	if (ctx.cr6.eq) goto loc_8308A250;
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// b 0x83089e10
	sub_83089E10(ctx, base);
	return;
loc_8308A250:
	// b 0x83089e10
	sub_83089E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A254"))) PPC_WEAK_FUNC(sub_8308A254);
PPC_FUNC_IMPL(__imp__sub_8308A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A258"))) PPC_WEAK_FUNC(sub_8308A258);
PPC_FUNC_IMPL(__imp__sub_8308A258) {
	PPC_FUNC_PROLOGUE();
	// sth r4,296(r3)
	PPC_STORE_U16(ctx.r3.u32 + 296, ctx.r4.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83089e10
	sub_83089E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A268"))) PPC_WEAK_FUNC(sub_8308A268);
PPC_FUNC_IMPL(__imp__sub_8308A268) {
	PPC_FUNC_PROLOGUE();
	// sth r4,298(r3)
	PPC_STORE_U16(ctx.r3.u32 + 298, ctx.r4.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83089e10
	sub_83089E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A278"))) PPC_WEAK_FUNC(sub_8308A278);
PPC_FUNC_IMPL(__imp__sub_8308A278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8308A280;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,448
	ctx.r9.s64 = ctx.r11.s64 + 448;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// lfs f0,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r27,r31,64
	ctx.r27.s64 = ctx.r31.s64 + 64;
	// lfs f31,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f31,96(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f31,124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lfs f13,-18264(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -18264);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lfs f12,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,148(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r26,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r26.u32);
	// stw r26,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r26.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f31,172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// lfs f0,-18268(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -18268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f13,204(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r26,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r26.u32);
	// bl 0x831c6868
	ctx.lr = 0x8308A3CC;
	sub_831C6868(ctx, base);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// stw r24,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r24.u32);
	// li r8,14
	ctx.r8.s64 = 14;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// stw r25,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r25.u32);
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r11,r31,316
	ctx.r11.s64 = ctx.r31.s64 + 316;
	// stw r7,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r7.u32);
	// stw r6,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lhz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// sth r4,296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 296, ctx.r4.u16);
	// lhz r3,30(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// sth r3,298(r31)
	PPC_STORE_U16(ctx.r31.u32 + 298, ctx.r3.u16);
	// stw r26,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r26.u32);
	// sth r26,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r26.u16);
	// lhz r10,66(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 66);
	// sth r10,306(r31)
	PPC_STORE_U16(ctx.r31.u32 + 306, ctx.r10.u16);
	// stw r8,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r8.u32);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// stw r26,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r26.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r8.u32);
	// stw r26,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r26.u32);
	// stw r31,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r31.u32);
	// bne cr6,0x8308a440
	if (!ctx.cr6.eq) goto loc_8308A440;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_8308A440:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308a4a0
	if (!ctx.cr6.eq) goto loc_8308A4A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308a4a0
	if (!ctx.cr6.eq) goto loc_8308A4A0;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,126
	ctx.r5.s64 = 126;
	// li r4,104
	ctx.r4.s64 = 104;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8308A478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8308a494
	if (ctx.cr6.eq) goto loc_8308A494;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x830883d8
	ctx.lr = 0x8308A48C;
	sub_830883D8(ctx, base);
	// stw r3,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// b 0x8308a4a4
	goto loc_8308A4A4;
loc_8308A494:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r3,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// b 0x8308a4a4
	goto loc_8308A4A4;
loc_8308A4A0:
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
loc_8308A4A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 64);
	// bl 0x8308a0a0
	ctx.lr = 0x8308A4B0;
	sub_8308A0A0(ctx, base);
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// lis r9,-31991
	ctx.r9.s64 = -2096562176;
	// addi r10,r11,-31816
	ctx.r10.s64 = ctx.r11.s64 + -31816;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// stw r5,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r5.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r8,-31890
	ctx.r8.s64 = -2089943040;
	// lis r7,-31890
	ctx.r7.s64 = -2089943040;
	// addi r9,r9,-31800
	ctx.r9.s64 = ctx.r9.s64 + -31800;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,7676(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r4,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r4.u32);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r10,24264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24264, ctx.r10.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r9,24260(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24260, ctx.r9.u32);
	// stw r31,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r31.u32);
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// lfs f12,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,132(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f11,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,136(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f9,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f8,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,56(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f7,100(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f6,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,104(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f5,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,108(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f4,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
	// stfs f4,0(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f3,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fmr f11,f3
	ctx.f11.f64 = ctx.f3.f64;
	// stfs f3,4(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f2,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// stfs f2,8(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f13,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f6,f1,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f13,12(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// fmuls f7,f1,f1
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmuls f5,f1,f12
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f2,f1,f11
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fsubs f7,f31,f4
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// fnmsubs f6,f3,f0,f31
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fsubs f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f3,f1,f8
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f9,f7,f10
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f2,f8,f1
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// fsubs f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f12,f0,f5
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8308A618:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bdnz 0x8308a618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8308A618;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8308A638:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bdnz 0x8308a638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8308A638;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8308a694
	if (ctx.cr6.eq) goto loc_8308A694;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8308a698
	if (ctx.cr6.eq) goto loc_8308A698;
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// ori r9,r11,256
	ctx.r9.u64 = ctx.r11.u64 | 256;
	// stw r9,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_8308A694:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8308A698:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A6A4"))) PPC_WEAK_FUNC(sub_8308A6A4);
PPC_FUNC_IMPL(__imp__sub_8308A6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A6A8"))) PPC_WEAK_FUNC(sub_8308A6A8);
PPC_FUNC_IMPL(__imp__sub_8308A6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308A6B8"))) PPC_WEAK_FUNC(sub_8308A6B8);
PPC_FUNC_IMPL(__imp__sub_8308A6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6abc
	ctx.lr = 0x8308A6C8;
	__savefpr_17(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8308a8dc
	if (ctx.cr6.eq) goto loc_8308A8DC;
	// lwz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8308a8dc
	if (ctx.cr6.eq) goto loc_8308A8DC;
	// lfs f12,252(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f6,248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fmr f29,f6
	ctx.f29.f64 = ctx.f6.f64;
	// lfs f2,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// lfs f7,244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f30,f2,f12
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f8,256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f31.f64 = double(temp.f32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// lfs f28,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f28.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f27,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f27.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,6380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// lfs f26,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f28,f10
	ctx.f25.f64 = double(float(ctx.f28.f64 * ctx.f10.f64));
	// fmadds f9,f31,f8,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f8.f64 + ctx.f9.f64));
	// lfs f22,260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f24,f8,f8,f13
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 - ctx.f13.f64));
	// lfs f0,7676(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f11,f8,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f1.f64));
	// lfs f13,6140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f4,f8,f30
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f30.f64));
	// lfs f21,264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	ctx.f21.f64 = double(temp.f32);
	// fmsubs f5,f2,f8,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 - ctx.f5.f64));
	// lfs f20,268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f19,f27,f29
	ctx.f19.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// addi r9,r10,244
	ctx.r9.s64 = ctx.r10.s64 + 244;
	// fmuls f23,f28,f3
	ctx.f23.f64 = double(float(ctx.f28.f64 * ctx.f3.f64));
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// fmuls f18,f26,f10
	ctx.f18.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// fmadds f25,f26,f29,f25
	ctx.f25.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 + ctx.f25.f64));
	// fmadds f9,f2,f6,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmuls f17,f26,f24
	ctx.f17.f64 = double(float(ctx.f26.f64 * ctx.f24.f64));
	// fmadds f2,f2,f7,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f1,f31,f7,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f7.f64 + ctx.f30.f64));
	// fnmsubs f5,f31,f6,f5
	ctx.f5.f64 = double(float(-(ctx.f31.f64 * ctx.f6.f64 - ctx.f5.f64)));
	// fmsubs f30,f26,f3,f19
	ctx.f30.f64 = double(float(ctx.f26.f64 * ctx.f3.f64 - ctx.f19.f64));
	// fmsubs f23,f27,f10,f23
	ctx.f23.f64 = double(float(ctx.f27.f64 * ctx.f10.f64 - ctx.f23.f64));
	// fmuls f26,f28,f24
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f24.f64));
	// fmsubs f28,f28,f29,f18
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f18.f64));
	// fmadds f25,f27,f3,f25
	ctx.f25.f64 = double(float(ctx.f27.f64 * ctx.f3.f64 + ctx.f25.f64));
	// fnmsubs f9,f4,f7,f9
	ctx.f9.f64 = double(float(-(ctx.f4.f64 * ctx.f7.f64 - ctx.f9.f64)));
	// fmuls f7,f27,f24
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f24.f64));
	// fnmsubs f2,f31,f12,f2
	ctx.f2.f64 = double(float(-(ctx.f31.f64 * ctx.f12.f64 - ctx.f2.f64)));
	// fnmsubs f1,f11,f6,f1
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f6.f64 - ctx.f1.f64)));
	// fnmsubs f5,f4,f12,f5
	ctx.f5.f64 = double(float(-(ctx.f4.f64 * ctx.f12.f64 - ctx.f5.f64)));
	// fmuls f12,f30,f8
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f4,f23,f8
	ctx.f4.f64 = double(float(ctx.f23.f64 * ctx.f8.f64));
	// fmuls f11,f28,f8
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f8.f64));
	// fmuls f8,f29,f25
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// fmuls f6,f9,f9
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f10,f10,f25
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// fmuls f31,f9,f2
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f30,f1,f1
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmuls f29,f5,f1
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fadds f12,f26,f12
	ctx.f12.f64 = double(float(ctx.f26.f64 + ctx.f12.f64));
	// fadds f4,f17,f4
	ctx.f4.f64 = double(float(ctx.f17.f64 + ctx.f4.f64));
	// fmuls f3,f25,f3
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f3.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f7,f6,f0
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f6,f4,f8
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fmuls f4,f31,f0
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f8,f30,f0
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f31,f29,f0
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fsubs f10,f13,f7
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f30,f4,f31
	ctx.f30.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// stfs f30,-172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f10,-176(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// fmuls f10,f1,f2
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f30,f5,f9
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f9,f1,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// addi r10,r1,-176
	ctx.r10.s64 = ctx.r1.s64 + -176;
	// fmuls f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fmuls f29,f2,f2
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// li r7,9
	ctx.r7.s64 = 9;
	// fadds f3,f11,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f12,f31,f4
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// stfs f12,-164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f30,f0
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fnmsubs f6,f29,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f29.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f13,f20,f2
	ctx.f13.f64 = double(float(ctx.f20.f64 + ctx.f2.f64));
	// fadds f0,f21,f1
	ctx.f0.f64 = double(float(ctx.f21.f64 + ctx.f1.f64));
	// fadds f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f5,-168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// fsubs f2,f11,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f2,-152(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// fsubs f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// stfs f1,-156(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f12,-148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// fsubs f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// stfs f3,-160(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fsubs f11,f6,f7
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f11,-144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// fadds f12,f22,f9
	ctx.f12.f64 = double(float(ctx.f22.f64 + ctx.f9.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8308A8B0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8308a8b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8308A8B0;
	// stfs f12,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// stfs f13,44(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8308A8DC:
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b08
	ctx.lr = 0x8308A8E8;
	__restfpr_17(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308A8F4"))) PPC_WEAK_FUNC(sub_8308A8F4);
PPC_FUNC_IMPL(__imp__sub_8308A8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

