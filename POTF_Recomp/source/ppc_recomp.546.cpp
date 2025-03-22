#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8317F368"))) PPC_WEAK_FUNC(sub_8317F368);
PPC_FUNC_IMPL(__imp__sub_8317F368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,136(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f12,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F384"))) PPC_WEAK_FUNC(sub_8317F384);
PPC_FUNC_IMPL(__imp__sub_8317F384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F388"))) PPC_WEAK_FUNC(sub_8317F388);
PPC_FUNC_IMPL(__imp__sub_8317F388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,24152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-18264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8317f3a8
	if (!ctx.cr6.lt) goto loc_8317F3A8;
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// b 0x8317f3ac
	goto loc_8317F3AC;
loc_8317F3A8:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_8317F3AC:
	// stfs f0,136(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bge cr6,0x8317f3c4
	if (!ctx.cr6.lt) goto loc_8317F3C4;
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// blr 
	return;
loc_8317F3C4:
	// stfs f12,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F3CC"))) PPC_WEAK_FUNC(sub_8317F3CC);
PPC_FUNC_IMPL(__imp__sub_8317F3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F3D0"))) PPC_WEAK_FUNC(sub_8317F3D0);
PPC_FUNC_IMPL(__imp__sub_8317F3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F3F4"))) PPC_WEAK_FUNC(sub_8317F3F4);
PPC_FUNC_IMPL(__imp__sub_8317F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F3F8"))) PPC_WEAK_FUNC(sub_8317F3F8);
PPC_FUNC_IMPL(__imp__sub_8317F3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,152(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,156(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f1,144(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F418"))) PPC_WEAK_FUNC(sub_8317F418);
PPC_FUNC_IMPL(__imp__sub_8317F418) {
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831673e8
	ctx.lr = 0x8317F438;
	sub_831673E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8317F454"))) PPC_WEAK_FUNC(sub_8317F454);
PPC_FUNC_IMPL(__imp__sub_8317F454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F458"))) PPC_WEAK_FUNC(sub_8317F458);
PPC_FUNC_IMPL(__imp__sub_8317F458) {
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83167448
	ctx.lr = 0x8317F478;
	sub_83167448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8317F494"))) PPC_WEAK_FUNC(sub_8317F494);
PPC_FUNC_IMPL(__imp__sub_8317F494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F498"))) PPC_WEAK_FUNC(sub_8317F498);
PPC_FUNC_IMPL(__imp__sub_8317F498) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F4A0"))) PPC_WEAK_FUNC(sub_8317F4A0);
PPC_FUNC_IMPL(__imp__sub_8317F4A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,201(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F4A8"))) PPC_WEAK_FUNC(sub_8317F4A8);
PPC_FUNC_IMPL(__imp__sub_8317F4A8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,201(r3)
	PPC_STORE_U8(ctx.r3.u32 + 201, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F4B0"))) PPC_WEAK_FUNC(sub_8317F4B0);
PPC_FUNC_IMPL(__imp__sub_8317F4B0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F4B8"))) PPC_WEAK_FUNC(sub_8317F4B8);
PPC_FUNC_IMPL(__imp__sub_8317F4B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F4C0"))) PPC_WEAK_FUNC(sub_8317F4C0);
PPC_FUNC_IMPL(__imp__sub_8317F4C0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,202(r3)
	PPC_STORE_U8(ctx.r3.u32 + 202, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F4C8"))) PPC_WEAK_FUNC(sub_8317F4C8);
PPC_FUNC_IMPL(__imp__sub_8317F4C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,202(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 202);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F4D0"))) PPC_WEAK_FUNC(sub_8317F4D0);
PPC_FUNC_IMPL(__imp__sub_8317F4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8317F4D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r28,r3,192
	ctx.r28.s64 = ctx.r3.s64 + 192;
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r11,284
	ctx.r29.s64 = ctx.r11.s64 + 284;
	// bne cr6,0x8317f56c
	if (!ctx.cr6.eq) goto loc_8317F56C;
	// lhz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x8317f530
	if (ctx.cr6.eq) goto loc_8317F530;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x8317F514;
	sub_83166510(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_8317F530:
	// lhz r31,6(r28)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x8317f5c8
	if (ctx.cr6.eq) goto loc_8317F5C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x8317F548;
	sub_83166510(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8317F56C:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317f5c8
	if (ctx.cr6.eq) goto loc_8317F5C8;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8317F584:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r26,r11,r31
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83166510
	ctx.lr = 0x8317F598;
	sub_83166510(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r26,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r26,27
	ctx.r9.u64 = ctx.r26.u32 & 0x1F;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lhz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8317f584
	if (ctx.cr6.lt) goto loc_8317F584;
loc_8317F5C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F5D0"))) PPC_WEAK_FUNC(sub_8317F5D0);
PPC_FUNC_IMPL(__imp__sub_8317F5D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317f5f0
	if (!ctx.cr6.eq) goto loc_8317F5F0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// sth r11,198(r3)
	PPC_STORE_U16(ctx.r3.u32 + 198, ctx.r11.u16);
	// sth r11,196(r3)
	PPC_STORE_U16(ctx.r3.u32 + 196, ctx.r11.u16);
	// blr 
	return;
loc_8317F5F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,196(r3)
	PPC_STORE_U16(ctx.r3.u32 + 196, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F5FC"))) PPC_WEAK_FUNC(sub_8317F5FC);
PPC_FUNC_IMPL(__imp__sub_8317F5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F600"))) PPC_WEAK_FUNC(sub_8317F600);
PPC_FUNC_IMPL(__imp__sub_8317F600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r7,r11,31144
	ctx.r7.s64 = ctx.r11.s64 + 31144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,31272
	ctx.r6.s64 = ctx.r10.s64 + 31272;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lfs f13,-20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// ori r10,r5,65535
	ctx.r10.u64 = ctx.r5.u64 | 65535;
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f13,-16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// addi r9,r3,168
	ctx.r9.s64 = ctx.r3.s64 + 168;
	// lfs f13,-12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r3,180
	ctx.r8.s64 = ctx.r3.s64 + 180;
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lfs f13,-8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// lfs f13,-4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 + 100;
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f13,-20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,-16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,-12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f13,-8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f13,-4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f13,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f12,108(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r6,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r6.u32);
	// lfs f13,-18264(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -18264);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r5.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f13,136(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f13,140(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stw r9,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r9.u32);
	// stw r9,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r9.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r8,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r8.u32);
	// stw r8,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r8.u32);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// sth r31,196(r3)
	PPC_STORE_U16(ctx.r3.u32 + 196, ctx.r31.u16);
	// sth r30,198(r3)
	PPC_STORE_U16(ctx.r3.u32 + 198, ctx.r30.u16);
	// stb r11,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r11.u8);
	// stb r11,201(r3)
	PPC_STORE_U8(ctx.r3.u32 + 201, ctx.r11.u8);
	// stb r11,202(r3)
	PPC_STORE_U8(ctx.r3.u32 + 202, ctx.r11.u8);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F74C"))) PPC_WEAK_FUNC(sub_8317F74C);
PPC_FUNC_IMPL(__imp__sub_8317F74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F750"))) PPC_WEAK_FUNC(sub_8317F750);
PPC_FUNC_IMPL(__imp__sub_8317F750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8317F758;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addic. r11,r31,168
	ctx.xer.ca = ctx.r31.u32 > 4294967127;
	ctx.r11.s64 = ctx.r31.s64 + 168;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x8317f77c
	if (ctx.cr0.eq) goto loc_8317F77C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_8317F77C:
	// addic. r11,r31,180
	ctx.xer.ca = ctx.r31.u32 > 4294967115;
	ctx.r11.s64 = ctx.r31.s64 + 180;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8317f790
	if (ctx.cr0.eq) goto loc_8317F790;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_8317F790:
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// lfs f13,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// lfs f12,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lfs f11,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f10,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f10,44(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f9,48(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f8,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// stfs f8,52(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f7,56(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f6,60(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f5,64(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f4,68(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f3,72(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f2,100(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f1,104(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f11,120(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f10,124(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f9,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,128(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f8,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stfs f8,132(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f2,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317F860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f7,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,144(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f6,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,148(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f5,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,152(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f4,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,156(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// lwz r7,60(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stb r29,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r29.u8);
	// stb r29,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r29.u8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8317F8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r31.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F8C0"))) PPC_WEAK_FUNC(sub_8317F8C0);
PPC_FUNC_IMPL(__imp__sub_8317F8C0) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// bl 0x8317f4d0
	ctx.lr = 0x8317F8F0;
	sub_8317F4D0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f12,108(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f11,112(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f10,116(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f9,120(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f8,124(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
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

__attribute__((alias("__imp__sub_8317F944"))) PPC_WEAK_FUNC(sub_8317F944);
PPC_FUNC_IMPL(__imp__sub_8317F944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F948"))) PPC_WEAK_FUNC(sub_8317F948);
PPC_FUNC_IMPL(__imp__sub_8317F948) {
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
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,192
	ctx.r31.s64 = ctx.r3.s64 + 192;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317f9d4
	if (!ctx.cr6.eq) goto loc_8317F9D4;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317f984
	if (!ctx.cr6.eq) goto loc_8317F984;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// b 0x8317fa08
	goto loc_8317FA08;
loc_8317F984:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317f998
	if (!ctx.cr6.eq) goto loc_8317F998;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// b 0x8317fa08
	goto loc_8317FA08;
loc_8317F998:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317F9A0;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r8,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r30.u16);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// b 0x8317fa08
	goto loc_8317FA08;
loc_8317F9D4:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317f9ec
	if (ctx.cr6.lt) goto loc_8317F9EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179238
	ctx.lr = 0x8317F9EC;
	sub_83179238(ctx, base);
loc_8317F9EC:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r30,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
loc_8317FA08:
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

__attribute__((alias("__imp__sub_8317FA20"))) PPC_WEAK_FUNC(sub_8317FA20);
PPC_FUNC_IMPL(__imp__sub_8317FA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8317FA28;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r31,r3,192
	ctx.r31.s64 = ctx.r3.s64 + 192;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317fbac
	if (!ctx.cr6.eq) goto loc_8317FBAC;
	// lhz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// li r24,3
	ctx.r24.s64 = 3;
	// li r25,4
	ctx.r25.s64 = 4;
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// beq cr6,0x8317faf0
	if (ctx.cr6.eq) goto loc_8317FAF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317fabc
	if (!ctx.cr6.eq) goto loc_8317FABC;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317fa74
	if (!ctx.cr6.eq) goto loc_8317FA74;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// b 0x8317faf0
	goto loc_8317FAF0;
loc_8317FA74:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317fa88
	if (!ctx.cr6.eq) goto loc_8317FA88;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// b 0x8317faf0
	goto loc_8317FAF0;
loc_8317FA88:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317FA90;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r10,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r30.u16);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// sth r25,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r25.u16);
	// b 0x8317faf0
	goto loc_8317FAF0;
loc_8317FABC:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317fad4
	if (ctx.cr6.lt) goto loc_8317FAD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179238
	ctx.lr = 0x8317FAD4;
	sub_83179238(ctx, base);
loc_8317FAD4:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r30,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
loc_8317FAF0:
	// lhz r30,6(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 6);
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// beq cr6,0x8317fcb0
	if (ctx.cr6.eq) goto loc_8317FCB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317fb70
	if (!ctx.cr6.eq) goto loc_8317FB70;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317fb20
	if (!ctx.cr6.eq) goto loc_8317FB20;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317FB20:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317fb38
	if (!ctx.cr6.eq) goto loc_8317FB38;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317FB38:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317FB40;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r30.u16);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// sth r25,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r25.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317FB70:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317fb88
	if (ctx.cr6.lt) goto loc_8317FB88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179238
	ctx.lr = 0x8317FB88;
	sub_83179238(ctx, base);
loc_8317FB88:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r30,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317FBAC:
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317fcb0
	if (ctx.cr6.eq) goto loc_8317FCB0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r24,3
	ctx.r24.s64 = 3;
	// li r25,4
	ctx.r25.s64 = 4;
loc_8317FBC8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// bne cr6,0x8317fc38
	if (!ctx.cr6.eq) goto loc_8317FC38;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317fbf0
	if (!ctx.cr6.eq) goto loc_8317FBF0;
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
	// b 0x8317fc9c
	goto loc_8317FC9C;
loc_8317FBF0:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317fc04
	if (!ctx.cr6.eq) goto loc_8317FC04;
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// b 0x8317fc9c
	goto loc_8317FC9C;
loc_8317FC04:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317FC0C;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r10,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r29,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r29.u16);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// sth r25,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r25.u16);
	// b 0x8317fc9c
	goto loc_8317FC9C;
loc_8317FC38:
	// lhz r30,6(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317fc80
	if (ctx.cr6.lt) goto loc_8317FC80;
	// rlwinm r10,r11,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// rlwinm r3,r11,2,15,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFC;
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// bl 0x83161968
	ctx.lr = 0x8317FC5C;
	sub_83161968(ctx, base);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bl 0x82bea998
	ctx.lr = 0x8317FC70;
	sub_82BEA998(ctx, base);
	// rlwinm r4,r30,1,15,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1FFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83161838
	ctx.lr = 0x8317FC7C;
	sub_83161838(ctx, base);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
loc_8317FC80:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r29,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
loc_8317FC9C:
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317fbc8
	if (ctx.cr6.lt) goto loc_8317FBC8;
loc_8317FCB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FCB8"))) PPC_WEAK_FUNC(sub_8317FCB8);
PPC_FUNC_IMPL(__imp__sub_8317FCB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8317fcfc
	if (!ctx.cr6.eq) goto loc_8317FCFC;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8317fce4
	if (!ctx.cr6.eq) goto loc_8317FCE4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// blr 
	return;
loc_8317FCE4:
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// blr 
	return;
loc_8317FCFC:
	// lhz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8317FD14:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8317fd38
	if (ctx.cr6.eq) goto loc_8317FD38;
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8317fd14
	if (ctx.cr6.lt) goto loc_8317FD14;
	// blr 
	return;
loc_8317FD38:
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r6,-2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// sthx r6,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u16);
	// sth r7,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r7.u16);
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FD6C"))) PPC_WEAK_FUNC(sub_8317FD6C);
PPC_FUNC_IMPL(__imp__sub_8317FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317FD70"))) PPC_WEAK_FUNC(sub_8317FD70);
PPC_FUNC_IMPL(__imp__sub_8317FD70) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8317ff0c
	if (!ctx.cr6.eq) goto loc_8317FF0C;
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r5,r10,65535
	ctx.r5.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x8317fe3c
	if (ctx.cr6.eq) goto loc_8317FE3C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8317fdd4
	if (!ctx.cr6.eq) goto loc_8317FDD4;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317fdc0
	if (!ctx.cr6.eq) goto loc_8317FDC0;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// b 0x8317fe3c
	goto loc_8317FE3C;
loc_8317FDC0:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317fe3c
	if (!ctx.cr6.eq) goto loc_8317FE3C;
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// b 0x8317fe3c
	goto loc_8317FE3C;
loc_8317FDD4:
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8317fe3c
	if (ctx.cr6.eq) goto loc_8317FE3C;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8317FDEC:
	// lhz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8317fe10
	if (ctx.cr6.eq) goto loc_8317FE10;
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8317fdec
	if (ctx.cr6.lt) goto loc_8317FDEC;
	// b 0x8317fe3c
	goto loc_8317FE3C;
loc_8317FE10:
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r6,-2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// sthx r6,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u16);
	// sth r7,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r7.u16);
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
loc_8317FE3C:
	// lhz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x8317ffe4
	if (ctx.cr6.eq) goto loc_8317FFE4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8317fe90
	if (!ctx.cr6.eq) goto loc_8317FE90;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317fe74
	if (!ctx.cr6.eq) goto loc_8317FE74;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317FE74:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317ffe4
	if (!ctx.cr6.eq) goto loc_8317FFE4;
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317FE90:
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8317ffe4
	if (ctx.cr6.eq) goto loc_8317FFE4;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8317FEA8:
	// lhz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8317fed4
	if (ctx.cr6.eq) goto loc_8317FED4;
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8317fea8
	if (ctx.cr6.lt) goto loc_8317FEA8;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317FED4:
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r6,-2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// sthx r6,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u16);
	// sth r7,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r7.u16);
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// sth r3,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r3.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317FF0C:
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8317ffe4
	if (ctx.cr6.eq) goto loc_8317FFE4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r5,r10,65535
	ctx.r5.u64 = ctx.r10.u64 | 65535;
loc_8317FF28:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lhzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// bne cr6,0x8317ff68
	if (!ctx.cr6.eq) goto loc_8317FF68;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317ff54
	if (!ctx.cr6.eq) goto loc_8317FF54;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// b 0x8317ffd0
	goto loc_8317FFD0;
loc_8317FF54:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317ffd0
	if (!ctx.cr6.eq) goto loc_8317FFD0;
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// b 0x8317ffd0
	goto loc_8317FFD0;
loc_8317FF68:
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8317ffd0
	if (ctx.cr6.eq) goto loc_8317FFD0;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8317FF80:
	// lhz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8317ffa4
	if (ctx.cr6.eq) goto loc_8317FFA4;
	// lhz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8317ff80
	if (ctx.cr6.lt) goto loc_8317FF80;
	// b 0x8317ffd0
	goto loc_8317FFD0;
loc_8317FFA4:
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// lhzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// lhz r6,-2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// sthx r6,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u16);
	// sth r7,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r7.u16);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
loc_8317FFD0:
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8317ff28
	if (ctx.cr6.lt) goto loc_8317FF28;
loc_8317FFE4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FFF0"))) PPC_WEAK_FUNC(sub_8317FFF0);
PPC_FUNC_IMPL(__imp__sub_8317FFF0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180000"))) PPC_WEAK_FUNC(sub_83180000);
PPC_FUNC_IMPL(__imp__sub_83180000) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180010"))) PPC_WEAK_FUNC(sub_83180010);
PPC_FUNC_IMPL(__imp__sub_83180010) {
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
	// addi r10,r11,31272
	ctx.r10.s64 = ctx.r11.s64 + 31272;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83180050
	if (ctx.cr6.eq) goto loc_83180050;
	// lhz r11,198(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 198);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x83161838
	ctx.lr = 0x83180050;
	sub_83161838(ctx, base);
loc_83180050:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,31176
	ctx.r9.s64 = ctx.r11.s64 + 31176;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83180074
	if (ctx.cr6.eq) goto loc_83180074;
	// bl 0x822990f0
	ctx.lr = 0x83180070;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83180074:
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

__attribute__((alias("__imp__sub_8318008C"))) PPC_WEAK_FUNC(sub_8318008C);
PPC_FUNC_IMPL(__imp__sub_8318008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83180090"))) PPC_WEAK_FUNC(sub_83180090);
PPC_FUNC_IMPL(__imp__sub_83180090) {
	PPC_FUNC_PROLOGUE();
	// fsubs f0,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsel f13,f0,f1,f3
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f3.f64;
	// fsub f12,f13,f2
	ctx.f12.f64 = ctx.f13.f64 - ctx.f2.f64;
	// fsel f11,f12,f2,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f2.f64 : ctx.f13.f64;
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831800A8"))) PPC_WEAK_FUNC(sub_831800A8);
PPC_FUNC_IMPL(__imp__sub_831800A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f12,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-18284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18284);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fsel f10,f11,f2,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f2.f64 : ctx.f0.f64;
	// fadds f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f9,0(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fdivs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f7,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f3
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fdivs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// stfs f5,0(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831800E8"))) PPC_WEAK_FUNC(sub_831800E8);
PPC_FUNC_IMPL(__imp__sub_831800E8) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83180118
	if (ctx.cr6.lt) goto loc_83180118;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x83178f38
	ctx.lr = 0x83180118;
	sub_83178F38(ctx, base);
loc_83180118:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83180140"))) PPC_WEAK_FUNC(sub_83180140);
PPC_FUNC_IMPL(__imp__sub_83180140) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180148"))) PPC_WEAK_FUNC(sub_83180148);
PPC_FUNC_IMPL(__imp__sub_83180148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31388
	ctx.r10.s64 = ctx.r11.s64 + 31388;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180158"))) PPC_WEAK_FUNC(sub_83180158);
PPC_FUNC_IMPL(__imp__sub_83180158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83180160;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6adc
	ctx.lr = 0x83180168;
	__savefpr_25(ctx, base);
	// lbz r29,127(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwimi r29,r11,0,31,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r29.u64 & 0xFE);
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r29,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r29.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r31,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r31.u8);
	// beq cr6,0x8318019c
	if (ctx.cr6.eq) goto loc_8318019C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8318019C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831801ac
	if (ctx.cr6.eq) goto loc_831801AC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_831801AC:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r6,r11,60
	ctx.r6.s64 = ctx.r11.s64 + 60;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r5,60
	ctx.r6.s64 = ctx.r5.s64 + 60;
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,6048(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lbz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f3,120(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// rlwinm r4,r4,28,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0x1;
	// stfs f1,124(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// std r4,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r4.u64);
	// stfs f4,116(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f8,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f3
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmuls f12,f6,f8
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// lfs f13,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// lfs f11,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f2,f8,f8,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f2.f64));
	// lfs f31,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f10,f4,f5
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// lfs f30,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f30.f64 = double(temp.f32);
	// lfs f9,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lfs f29,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f25.f64 = double(temp.f32);
	// fmsubs f7,f7,f5,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 - ctx.f12.f64));
	// stfs f7,52(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fmsubs f1,f4,f8,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 - ctx.f1.f64));
	// lfd f8,-96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fmadds f5,f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmsubs f6,f6,f3,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 - ctx.f10.f64));
	// stfs f6,56(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fcfid f4,f8
	ctx.f4.f64 = double(ctx.f8.s64);
	// fmuls f3,f13,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f2,f11,f1
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f12,f31,f7
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// fmuls f11,f30,f1
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f1.f64));
	// fmuls f13,f9,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f10,f29,f7
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f7.f64));
	// fmuls f9,f28,f1
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// fmuls f8,f27,f6
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f6.f64));
	// fmuls f31,f26,f6
	ctx.f31.f64 = double(float(ctx.f26.f64 * ctx.f6.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fadds f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fadds f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f12,f9,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f11,88(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fadds f10,f2,f8
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f10,84(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fadds f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f9,80(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fmuls f8,f11,f6
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f6,f5,f25,f8
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f25.f64 + ctx.f8.f64));
	// fmadds f5,f10,f7,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f3,f9,f1,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f5.f64));
	// fmuls f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// lfs f1,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f7,f1,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f26,f8
	ctx.f26.f64 = ctx.f8.f64;
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lfs f3,68(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,80(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// std r7,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r7.u64);
	// lfs f31,76(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,72(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f28,60(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,88(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// fmsubs f4,f13,f12,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f7.f64));
	// lfs f7,92(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f25,84(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	ctx.f25.f64 = double(temp.f32);
	// stfs f4,68(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fmsubs f8,f11,f8,f6
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - ctx.f6.f64));
	// lfd f11,-96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfs f6,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f9,f1,f9,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 - ctx.f13.f64));
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fmadds f13,f12,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f9,72(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// fmuls f10,f3,f8
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f1,f31,f4
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f4.f64));
	// fmuls f3,f30,f8
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f12,f4,f29
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// fmuls f31,f8,f28
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmuls f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f30,f27,f9
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f9.f64));
	// fmadds f13,f26,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fadds f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fadds f5,f3,f1
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// fmuls f3,f25,f9
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f9.f64));
	// fadds f1,f31,f12
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f12.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// fadds f11,f10,f7
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f11,104(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fadds f10,f5,f30
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// stfs f10,100(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fadds f7,f1,f3
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f7,96(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fmuls f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmadds f3,f13,f6,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f1,f10,f4,f3
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f13,f7,f8,f1
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f13,f13,f12,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x831803f0
	if (ctx.cr6.eq) goto loc_831803F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_831803F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,11788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11788);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b28
	ctx.lr = 0x8318040C;
	__restfpr_25(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83180410"))) PPC_WEAK_FUNC(sub_83180410);
PPC_FUNC_IMPL(__imp__sub_83180410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6acc
	ctx.lr = 0x83180424;
	__savefpr_21(ctx, base);
	// lbz r31,111(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r31,r10,0,31,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r31.u64 & 0xFE);
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r31.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// beq cr6,0x83180458
	if (ctx.cr6.eq) goto loc_83180458;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_83180458:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83180464
	if (ctx.cr6.eq) goto loc_83180464;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_83180464:
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f3,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f4,116(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f1,124(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 + 60;
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// lfs f0,6048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,40(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f22,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// lbz r5,2(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lfs f21,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f21.f64 = double(temp.f32);
	// lfs f3,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r6,r5,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x1;
	// lfs f13,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lfs f4,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// std r6,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r6.u64);
	// lfs f2,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// std r5,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r5.u64);
	// lfs f5,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f27,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f27.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f26,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f25.f64 = double(temp.f32);
	// lfs f12,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f24,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f23.f64 = double(temp.f32);
	// lfs f10,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f28.f64 = double(temp.f32);
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f21,f21,f22
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f22.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f3,f3,f22
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f22.f64));
	// fmuls f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmuls f2,f2,f22
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f22.f64));
	// fmuls f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f31,f31,f10
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// fmuls f30,f30,f10
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fadds f6,f21,f6
	ctx.f6.f64 = double(float(ctx.f21.f64 + ctx.f6.f64));
	// fmuls f29,f29,f10
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// fadds f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fmuls f13,f27,f9
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f9.f64));
	// fadds f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fmuls f4,f26,f9
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// fmuls f27,f25,f8
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f8.f64));
	// fmuls f26,f24,f8
	ctx.f26.f64 = double(float(ctx.f24.f64 * ctx.f8.f64));
	// fmuls f25,f23,f8
	ctx.f25.f64 = double(float(ctx.f23.f64 * ctx.f8.f64));
	// fmuls f28,f28,f9
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f9.f64));
	// fadds f1,f6,f1
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fadds f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// lfd f3,-128(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fadds f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fadds f6,f26,f13
	ctx.f6.f64 = double(float(ctx.f26.f64 + ctx.f13.f64));
	// fadds f4,f25,f4
	ctx.f4.f64 = double(float(ctx.f25.f64 + ctx.f4.f64));
	// fmuls f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmadds f13,f5,f11,f7
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f7.f64));
	// lfd f2,-120(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// fadds f1,f27,f28
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fadds f7,f6,f30
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// fcfid f11,f2
	ctx.f11.f64 = double(ctx.f2.s64);
	// fadds f6,f4,f29
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f29.f64));
	// fcfid f5,f3
	ctx.f5.f64 = double(ctx.f3.s64);
	// fmadds f4,f22,f12,f13
	ctx.f4.f64 = double(float(ctx.f22.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fadds f2,f1,f31
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fmuls f1,f9,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fmadds f11,f10,f6,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmuls f12,f4,f3
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f10,f8,f2,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fmadds f13,f10,f13,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x831805fc
	if (ctx.cr6.eq) goto loc_831805FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_831805FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,11788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11788);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b18
	ctx.lr = 0x83180618;
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

__attribute__((alias("__imp__sub_83180628"))) PPC_WEAK_FUNC(sub_83180628);
PPC_FUNC_IMPL(__imp__sub_83180628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// lfs f3,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f7,f10,f11,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f7.f64));
	// fmsubs f5,f6,f12,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 - ctx.f5.f64));
	// fmsubs f4,f8,f9,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f4.f64));
	// fmadds f2,f6,f8,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f7,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f7,f5,f3
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f5,f4,f3
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f4,f11,f12,f2
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmuls f3,f6,f1
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f2,f9,f1
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f7,f10,f4
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f6,f12,f4
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fadds f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fadds f4,f2,f11
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fadds f3,f1,f9
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f13,f5,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f12,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831806E4"))) PPC_WEAK_FUNC(sub_831806E4);
PPC_FUNC_IMPL(__imp__sub_831806E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831806E8"))) PPC_WEAK_FUNC(sub_831806E8);
PPC_FUNC_IMPL(__imp__sub_831806E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831806F0"))) PPC_WEAK_FUNC(sub_831806F0);
PPC_FUNC_IMPL(__imp__sub_831806F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,31400
	ctx.r8.s64 = ctx.r9.s64 + 31400;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318071C"))) PPC_WEAK_FUNC(sub_8318071C);
PPC_FUNC_IMPL(__imp__sub_8318071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83180720"))) PPC_WEAK_FUNC(sub_83180720);
PPC_FUNC_IMPL(__imp__sub_83180720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31400
	ctx.r10.s64 = ctx.r11.s64 + 31400;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180730"))) PPC_WEAK_FUNC(sub_83180730);
PPC_FUNC_IMPL(__imp__sub_83180730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8318074c
	if (ctx.cr6.eq) goto loc_8318074C;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8318074C:
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x83180760
	if (ctx.cr6.eq) goto loc_83180760;
	// li r10,32
	ctx.r10.s64 = 32;
loc_83180760:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318076C"))) PPC_WEAK_FUNC(sub_8318076C);
PPC_FUNC_IMPL(__imp__sub_8318076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83180770"))) PPC_WEAK_FUNC(sub_83180770);
PPC_FUNC_IMPL(__imp__sub_83180770) {
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
	// addi r9,r11,31400
	ctx.r9.s64 = ctx.r11.s64 + 31400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x831807a4
	if (ctx.cr6.eq) goto loc_831807A4;
	// bl 0x822990f0
	ctx.lr = 0x831807A0;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831807A4:
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

__attribute__((alias("__imp__sub_831807B8"))) PPC_WEAK_FUNC(sub_831807B8);
PPC_FUNC_IMPL(__imp__sub_831807B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831807C0"))) PPC_WEAK_FUNC(sub_831807C0);
PPC_FUNC_IMPL(__imp__sub_831807C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31408
	ctx.r10.s64 = ctx.r11.s64 + 31408;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831807D0"))) PPC_WEAK_FUNC(sub_831807D0);
PPC_FUNC_IMPL(__imp__sub_831807D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,31536
	ctx.r9.s64 = ctx.r11.s64 + 31536;
	// addi r8,r10,31400
	ctx.r8.s64 = ctx.r10.s64 + 31400;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831807EC"))) PPC_WEAK_FUNC(sub_831807EC);
PPC_FUNC_IMPL(__imp__sub_831807EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831807F0"))) PPC_WEAK_FUNC(sub_831807F0);
PPC_FUNC_IMPL(__imp__sub_831807F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm r11,r8,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0xFC000000;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r7,144
	ctx.r3.s64 = ctx.r7.s64 + 9437184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180810"))) PPC_WEAK_FUNC(sub_83180810);
PPC_FUNC_IMPL(__imp__sub_83180810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83180818;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ab0
	ctx.lr = 0x83180820;
	__savefpr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f27,324(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stfs f31,128(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// beq cr6,0x8318085c
	if (ctx.cr6.eq) goto loc_8318085C;
	// li r9,16
	ctx.r9.s64 = 16;
loc_8318085C:
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83180870
	if (ctx.cr6.eq) goto loc_83180870;
	// li r10,32
	ctx.r10.s64 = 32;
loc_83180870:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r27,r10,24
	ctx.r27.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83180e5c
	if (!ctx.cr6.eq) goto loc_83180E5C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x831808a4
	if (ctx.cr6.lt) goto loc_831808A4;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83178f38
	ctx.lr = 0x831808A4;
	sub_83178F38(ctx, base);
loc_831808A4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f1,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,7676(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83180a14
	if (ctx.cr6.eq) goto loc_83180A14;
	// lfs f13,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// lfs f10,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// lfs f12,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f11,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f10,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f7,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f4,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// lfs f29,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f29.f64 = double(temp.f32);
	// fmr f25,f7
	ctx.f25.f64 = ctx.f7.f64;
	// lfs f22,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f30,f4,f4
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lfs f23,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f23.f64 = double(temp.f32);
	// fmr f19,f4
	ctx.f19.f64 = ctx.f4.f64;
	// fmuls f24,f29,f28
	ctx.f24.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// fmsubs f8,f11,f12,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmadds f3,f7,f9,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmsubs f6,f7,f10,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f6.f64));
	// fmsubs f5,f9,f13,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmuls f26,f29,f2
	ctx.f26.f64 = double(float(ctx.f29.f64 * ctx.f2.f64));
	// fmuls f20,f25,f22
	ctx.f20.f64 = double(float(ctx.f25.f64 * ctx.f22.f64));
	// fmuls f21,f23,f2
	ctx.f21.f64 = double(float(ctx.f23.f64 * ctx.f2.f64));
	// fmsubs f30,f30,f0,f1
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 - ctx.f1.f64));
	// fmsubs f24,f2,f22,f24
	ctx.f24.f64 = double(float(ctx.f2.f64 * ctx.f22.f64 - ctx.f24.f64));
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f18,f19,f19
	ctx.f18.f64 = double(float(ctx.f19.f64 * ctx.f19.f64));
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f4,f12,f13,f3
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f26,f23,f25,f26
	ctx.f26.f64 = double(float(ctx.f23.f64 * ctx.f25.f64 + ctx.f26.f64));
	// fmsubs f20,f23,f28,f20
	ctx.f20.f64 = double(float(ctx.f23.f64 * ctx.f28.f64 - ctx.f20.f64));
	// fmsubs f21,f25,f29,f21
	ctx.f21.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 - ctx.f21.f64));
	// fmuls f3,f30,f9
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f10,f30,f10
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f9,f30,f12
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmadds f12,f22,f28,f26
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f28.f64 + ctx.f26.f64));
	// fmuls f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmsubs f30,f18,f0,f1
	ctx.f30.f64 = double(float(ctx.f18.f64 * ctx.f0.f64 - ctx.f1.f64));
	// fmuls f26,f24,f19
	ctx.f26.f64 = double(float(ctx.f24.f64 * ctx.f19.f64));
	// fmuls f13,f20,f19
	ctx.f13.f64 = double(float(ctx.f20.f64 * ctx.f19.f64));
	// fmuls f24,f21,f19
	ctx.f24.f64 = double(float(ctx.f21.f64 * ctx.f19.f64));
	// fadds f8,f3,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f3,f10,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fadds f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f25,f12,f25
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmuls f11,f30,f23
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f23.f64));
	// fmuls f28,f26,f0
	ctx.f28.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f29,f30,f29
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f26,f24,f0
	ctx.f26.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fmuls f30,f30,f22
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f22.f64));
	// fadds f4,f3,f9
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f3,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fmuls f10,f25,f0
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f7,f11,f28
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f6,f29,f13
	ctx.f6.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// fadds f2,f30,f26
	ctx.f2.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// fadds f11,f7,f10
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fadds f10,f6,f9
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fadds f9,f2,f8
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// b 0x83180a2c
	goto loc_83180A2C;
loc_83180A14:
	// lfs f5,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
loc_83180A2C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f7,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83180b80
	if (ctx.cr6.eq) goto loc_83180B80;
	// lfs f13,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,112
	ctx.r9.s64 = ctx.r10.s64 + 112;
	// lfs f8,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f6,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f27,f7,f8
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmr f26,f8
	ctx.f26.f64 = ctx.f8.f64;
	// lfs f31,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f6,f12
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f29,f31,f8
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// lfs f28,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f28.f64 = double(temp.f32);
	// fmr f23,f13
	ctx.f23.f64 = ctx.f13.f64;
	// lfs f24,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f24.f64 = double(temp.f32);
	// fmr f21,f6
	ctx.f21.f64 = ctx.f6.f64;
	// lfs f19,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f25,f28,f28
	ctx.f25.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lfs f18,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f18.f64 = double(temp.f32);
	// fmr f15,f28
	ctx.f15.f64 = ctx.f28.f64;
	// fmsubs f2,f8,f12,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f2.f64));
	// fmadds f27,f31,f6,f27
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f27.f64));
	// fmuls f22,f24,f26
	ctx.f22.f64 = double(float(ctx.f24.f64 * ctx.f26.f64));
	// fmsubs f30,f31,f13,f30
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 - ctx.f30.f64));
	// fmsubs f29,f6,f7,f29
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 - ctx.f29.f64));
	// fmuls f20,f24,f23
	ctx.f20.f64 = double(float(ctx.f24.f64 * ctx.f23.f64));
	// fmuls f17,f19,f26
	ctx.f17.f64 = double(float(ctx.f19.f64 * ctx.f26.f64));
	// fmuls f16,f21,f18
	ctx.f16.f64 = double(float(ctx.f21.f64 * ctx.f18.f64));
	// fmsubs f25,f25,f0,f1
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 - ctx.f1.f64));
	// fmuls f14,f15,f15
	ctx.f14.f64 = double(float(ctx.f15.f64 * ctx.f15.f64));
	// fmuls f2,f2,f28
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f28.f64));
	// fmadds f22,f19,f21,f22
	ctx.f22.f64 = double(float(ctx.f19.f64 * ctx.f21.f64 + ctx.f22.f64));
	// fmuls f30,f30,f28
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmuls f29,f29,f28
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// fmadds f28,f12,f13,f27
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f27.f64));
	// fmsubs f20,f26,f18,f20
	ctx.f20.f64 = double(float(ctx.f26.f64 * ctx.f18.f64 - ctx.f20.f64));
	// fmsubs f17,f21,f24,f17
	ctx.f17.f64 = double(float(ctx.f21.f64 * ctx.f24.f64 - ctx.f17.f64));
	// fmsubs f16,f19,f23,f16
	ctx.f16.f64 = double(float(ctx.f19.f64 * ctx.f23.f64 - ctx.f16.f64));
	// fmuls f31,f25,f31
	ctx.f31.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f12,f25,f12
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f12.f64));
	// fmuls f7,f25,f7
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f7.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f6,f28,f6
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmadds f27,f18,f23,f22
	ctx.f27.f64 = double(float(ctx.f18.f64 * ctx.f23.f64 + ctx.f22.f64));
	// fmsubs f25,f14,f0,f1
	ctx.f25.f64 = double(float(ctx.f14.f64 * ctx.f0.f64 - ctx.f1.f64));
	// fmuls f8,f28,f8
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f8.f64));
	// fmuls f22,f20,f15
	ctx.f22.f64 = double(float(ctx.f20.f64 * ctx.f15.f64));
	// fmuls f28,f16,f15
	ctx.f28.f64 = double(float(ctx.f16.f64 * ctx.f15.f64));
	// fmuls f20,f17,f15
	ctx.f20.f64 = double(float(ctx.f17.f64 * ctx.f15.f64));
	// fadds f2,f31,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 + ctx.f2.f64));
	// fadds f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f30.f64));
	// fmuls f30,f27,f23
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f23.f64));
	// fmuls f21,f27,f21
	ctx.f21.f64 = double(float(ctx.f27.f64 * ctx.f21.f64));
	// fmuls f26,f27,f26
	ctx.f26.f64 = double(float(ctx.f27.f64 * ctx.f26.f64));
	// fmuls f29,f25,f19
	ctx.f29.f64 = double(float(ctx.f25.f64 * ctx.f19.f64));
	// fmuls f27,f22,f0
	ctx.f27.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
	// fmuls f24,f25,f24
	ctx.f24.f64 = double(float(ctx.f25.f64 * ctx.f24.f64));
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f23,f20,f0
	ctx.f23.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// fmuls f25,f25,f18
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f18.f64));
	// fmuls f31,f8,f0
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f8,f2,f6
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmuls f12,f21,f0
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// fmuls f2,f26,f0
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fadds f0,f29,f27
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// lfs f27,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f27.f64 = double(temp.f32);
	// fadds f13,f24,f28
	ctx.f13.f64 = double(float(ctx.f24.f64 + ctx.f28.f64));
	// fadds f29,f25,f23
	ctx.f29.f64 = double(float(ctx.f25.f64 + ctx.f23.f64));
	// fadds f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// fadds f12,f29,f30
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// b 0x83180b94
	goto loc_83180B94;
loc_83180B80:
	// lfs f8,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
loc_83180B94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83180ba4
	if (ctx.cr6.eq) goto loc_83180BA4;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x83180ba8
	goto loc_83180BA8;
loc_83180BA4:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_83180BA8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83180bb8
	if (ctx.cr6.eq) goto loc_83180BB8;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x83180bbc
	goto loc_83180BBC;
loc_83180BB8:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_83180BBC:
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwimi r27,r6,0,31,23
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r27.u64 & 0xFE);
	// lfs f28,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f28.f64 = double(temp.f32);
	// lfs f2,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfs f30,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f26,64(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	ctx.f26.f64 = double(temp.f32);
	// lfs f29,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f26,f28
	ctx.f28.f64 = double(float(ctx.f26.f64 * ctx.f28.f64));
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// stb r28,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r28.u8);
	// beq cr6,0x83180c08
	if (ctx.cr6.eq) goto loc_83180C08;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83180C08:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83180c14
	if (ctx.cr6.eq) goto loc_83180C14;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83180C14:
	// fmuls f26,f10,f3
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// fmuls f25,f9,f5
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// fmuls f24,f4,f11
	ctx.f24.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f23,f10,f10
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f22,f13,f6
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// stfs f30,120(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// fmuls f30,f12,f8
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f2,116(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// rlwinm r7,r9,28,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	// stfs f29,124(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// fmsubs f4,f9,f4,f26
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 - ctx.f26.f64));
	// stfs f28,28(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmsubs f2,f10,f5,f24
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 - ctx.f24.f64));
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// fmsubs f3,f3,f11,f25
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 - ctx.f25.f64));
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// fmadds f10,f9,f9,f23
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f23.f64));
	// lfs f21,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f28,f7,f0
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f29,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f29.f64 = double(temp.f32);
	// fmsubs f7,f12,f7,f22
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f22.f64));
	// lfs f26,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f26.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfs f25,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f25.f64 = double(temp.f32);
	// addi r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 + 60;
	// lfs f24,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f24.f64 = double(temp.f32);
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// lfs f5,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f23,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f22.f64 = double(temp.f32);
	// lfs f9,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f21,f21,f3
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f3.f64));
	// lfs f20,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f29,f29,f3
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f3.f64));
	// lfd f19,80(r1)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f26,f26,f4
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f4.f64));
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fmuls f25,f3,f25
	ctx.f25.f64 = double(float(ctx.f3.f64 * ctx.f25.f64));
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fmuls f24,f24,f4
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f4.f64));
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmadds f11,f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmuls f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmsubs f10,f6,f0,f30
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f30.f64));
	// fmuls f23,f23,f2
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f2.f64));
	// fmuls f22,f2,f22
	ctx.f22.f64 = double(float(ctx.f2.f64 * ctx.f22.f64));
	// fadds f9,f9,f21
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f21.f64));
	// fmsubs f8,f13,f8,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 - ctx.f28.f64));
	// fadds f6,f26,f29
	ctx.f6.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// fadds f30,f24,f25
	ctx.f30.f64 = double(float(ctx.f24.f64 + ctx.f25.f64));
	// fadds f5,f9,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f5,88(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// fadds f9,f6,f23
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f23.f64));
	// stfs f9,84(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fadds f6,f30,f22
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f22.f64));
	// stfs f6,80(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f29,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f30,f30,f10
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fcfid f2,f19
	ctx.f2.f64 = double(ctx.f19.s64);
	// fmuls f29,f29,f7
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f7.f64));
	// fmadds f11,f11,f20,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f20.f64 + ctx.f5.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// fmadds f3,f9,f3,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f11.f64));
	// lfs f9,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f2,f6,f4,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fadds f6,f29,f30
	ctx.f6.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmuls f11,f2,f5
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f4,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f0,f0,f12
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f3,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f4,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f9,f3,f7
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// lfs f3,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// lfs f12,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f4,f7,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// lfs f30,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f29,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f29.f64 = double(temp.f32);
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// stfs f8,72(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f7,64(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fmuls f30,f8,f30
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// stfs f10,68(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// fmadds f5,f13,f13,f2
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f6,104(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// fadds f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fadds f8,f2,f3
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f8,100(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// fadds f6,f4,f12
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fmadds f3,f5,f29,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f9.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// fadds f2,f6,f30
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// stfs f2,96(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// fmadds f0,f8,f10,f3
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmadds f13,f2,f7,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmadds f0,f13,f4,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83180dfc
	if (ctx.cr6.eq) goto loc_83180DFC;
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// b 0x83180e00
	goto loc_83180E00;
loc_83180DFC:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_83180E00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,11788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11788);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f13,-18264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83180e34
	if (!ctx.cr6.eq) goto loc_83180E34;
	// lfs f13,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x83181254
	if (!ctx.cr6.gt) goto loc_83181254;
loc_83180E34:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f13,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f12,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-18284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18284);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f10,f11,f12,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fmuls f8,f9,f27
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fdivs f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f8.f64));
	// b 0x83181248
	goto loc_83181248;
loc_83180E5C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83181268
	if (!ctx.cr6.eq) goto loc_83181268;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83180e84
	if (ctx.cr6.lt) goto loc_83180E84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83178f38
	ctx.lr = 0x83180E84;
	sub_83178F38(ctx, base);
loc_83180E84:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// lfs f10,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f4,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,7676(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83180f54
	if (ctx.cr6.eq) goto loc_83180F54;
	// lfs f12,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f10,f11
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f7,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f13,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f3,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f2,f7,f9,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmsubs f6,f7,f10,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f6.f64));
	// fmsubs f5,f9,f13,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmsubs f8,f11,f12,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f1,f1,f0,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f4.f64));
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmadds f3,f12,f13,f2
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmuls f2,f1,f9
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f12,f3,f11
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fadds f7,f9,f6
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f6,f10,f5
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fadds f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fmuls f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f10,f6,f3
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fadds f11,f8,f5
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f9,f7,f2
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// b 0x83180f5c
	goto loc_83180F5C;
loc_83180F54:
	// lfs f11,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
loc_83180F5C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f12,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83181008
	if (ctx.cr6.eq) goto loc_83181008;
	// lfs f13,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f6,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f29,f7,f8
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f3,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f6,f8
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f30,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f28,f30,f30
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmsubs f5,f8,f12,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f5.f64));
	// fmadds f29,f3,f6,f29
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f29.f64));
	// fmsubs f2,f3,f7,f2
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f2.f64));
	// fmsubs f1,f6,f13,f1
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f1.f64));
	// fmsubs f28,f28,f0,f4
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 - ctx.f4.f64));
	// fmuls f5,f5,f30
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fmuls f2,f2,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmadds f30,f12,f13,f29
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f29.f64));
	// fmuls f6,f28,f6
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// fmuls f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// fmuls f7,f28,f7
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f7.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f8,f30,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// fmuls f3,f30,f3
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f3.f64));
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f5,f12,f2
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fadds f2,f7,f1
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f13,f2,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// fadds f12,f5,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fadds f0,f6,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// b 0x83181010
	goto loc_83181010;
loc_83181008:
	// lfs f0,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
loc_83181010:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83181020
	if (ctx.cr6.eq) goto loc_83181020;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x83181024
	goto loc_83181024;
loc_83181020:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_83181024:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83181034
	if (ctx.cr6.eq) goto loc_83181034;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x83181038
	goto loc_83181038;
loc_83181034:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_83181038:
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,5
	ctx.r5.s64 = 5;
	// rlwimi r27,r6,0,31,23
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r27.u64 & 0xFE);
	// lfs f5,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfs f7,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f3,64(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// stb r28,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r28.u8);
	// beq cr6,0x83181084
	if (ctx.cr6.eq) goto loc_83181084;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83181084:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83181090
	if (ctx.cr6.eq) goto loc_83181090;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83181090:
	// stfs f7,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stfs f8,116(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f6,124(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// addi r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 + 60;
	// stfs f5,28(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f19,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f19.f64 = double(temp.f32);
	// lfs f20,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f20.f64 = double(temp.f32);
	// lfs f23,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f21,f21,f0
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// lfs f8,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lfs f7,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f19,f19,f11
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f11.f64));
	// lfs f30,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f29,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// rlwinm r5,r9,28,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	// lfs f6,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfs f25,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f20,f13,f20
	ctx.f20.f64 = double(float(ctx.f13.f64 * ctx.f20.f64));
	// lfs f3,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f3.f64 = double(temp.f32);
	// lfs f24,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f24.f64 = double(temp.f32);
	// lfd f18,80(r1)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfs f28,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f28.f64 = double(temp.f32);
	// lfs f5,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f2,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f26,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fmuls f30,f30,f12
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmuls f29,f29,f13
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f25,f25,f10
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f10.f64));
	// fmuls f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f2,f11,f24
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// fcfid f1,f18
	ctx.f1.f64 = double(ctx.f18.s64);
	// fmuls f26,f26,f12
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f12.f64));
	// fmuls f28,f0,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f30.f64));
	// fadds f29,f21,f29
	ctx.f29.f64 = double(float(ctx.f21.f64 + ctx.f29.f64));
	// fadds f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fadds f25,f19,f25
	ctx.f25.f64 = double(float(ctx.f19.f64 + ctx.f25.f64));
	// fmuls f30,f12,f23
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// fadds f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// frsp f2,f1
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// fmuls f8,f9,f22
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f22.f64));
	// fadds f28,f28,f20
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f20.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f1,f29,f26
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f26.f64));
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fadds f5,f25,f5
	ctx.f5.f64 = double(float(ctx.f25.f64 + ctx.f5.f64));
	// fadds f8,f3,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f7,f28,f30
	ctx.f7.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fmadds f6,f1,f12,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// fmadds f5,f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f3,f7,f0,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f8,f11,f5
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f0,f3,f2,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x831811ec
	if (ctx.cr6.eq) goto loc_831811EC;
	// fdivs f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 / ctx.f0.f64));
	// b 0x831811f0
	goto loc_831811F0;
loc_831811EC:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_831811F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,11788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11788);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f13,-18264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83181224
	if (!ctx.cr6.eq) goto loc_83181224;
	// lfs f13,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x83181254
	if (!ctx.cr6.gt) goto loc_83181254;
loc_83181224:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f13,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f12,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-18284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18284);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f10,f11,f12,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fmuls f8,f9,f27
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fdivs f1,f4,f8
	ctx.f1.f64 = double(float(ctx.f4.f64 / ctx.f8.f64));
loc_83181248:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fdivs f2,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// bl 0x831787e0
	ctx.lr = 0x83181254;
	sub_831787E0(ctx, base);
loc_83181254:
	// lbz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83181268
	if (ctx.cr6.eq) goto loc_83181268;
	// addi r11,r30,124
	ctx.r11.s64 = ctx.r30.s64 + 124;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83181268:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6afc
	ctx.lr = 0x83181274;
	__restfpr_14(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83181278"))) PPC_WEAK_FUNC(sub_83181278);
PPC_FUNC_IMPL(__imp__sub_83181278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,-12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318128C"))) PPC_WEAK_FUNC(sub_8318128C);
PPC_FUNC_IMPL(__imp__sub_8318128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181290"))) PPC_WEAK_FUNC(sub_83181290);
PPC_FUNC_IMPL(__imp__sub_83181290) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181298"))) PPC_WEAK_FUNC(sub_83181298);
PPC_FUNC_IMPL(__imp__sub_83181298) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831812A0"))) PPC_WEAK_FUNC(sub_831812A0);
PPC_FUNC_IMPL(__imp__sub_831812A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831812BC"))) PPC_WEAK_FUNC(sub_831812BC);
PPC_FUNC_IMPL(__imp__sub_831812BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831812C0"))) PPC_WEAK_FUNC(sub_831812C0);
PPC_FUNC_IMPL(__imp__sub_831812C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831812C8"))) PPC_WEAK_FUNC(sub_831812C8);
PPC_FUNC_IMPL(__imp__sub_831812C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831812E4"))) PPC_WEAK_FUNC(sub_831812E4);
PPC_FUNC_IMPL(__imp__sub_831812E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831812E8"))) PPC_WEAK_FUNC(sub_831812E8);
PPC_FUNC_IMPL(__imp__sub_831812E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831812F0"))) PPC_WEAK_FUNC(sub_831812F0);
PPC_FUNC_IMPL(__imp__sub_831812F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318130C"))) PPC_WEAK_FUNC(sub_8318130C);
PPC_FUNC_IMPL(__imp__sub_8318130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181310"))) PPC_WEAK_FUNC(sub_83181310);
PPC_FUNC_IMPL(__imp__sub_83181310) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181318"))) PPC_WEAK_FUNC(sub_83181318);
PPC_FUNC_IMPL(__imp__sub_83181318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181334"))) PPC_WEAK_FUNC(sub_83181334);
PPC_FUNC_IMPL(__imp__sub_83181334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181338"))) PPC_WEAK_FUNC(sub_83181338);
PPC_FUNC_IMPL(__imp__sub_83181338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181340"))) PPC_WEAK_FUNC(sub_83181340);
PPC_FUNC_IMPL(__imp__sub_83181340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181348"))) PPC_WEAK_FUNC(sub_83181348);
PPC_FUNC_IMPL(__imp__sub_83181348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181350"))) PPC_WEAK_FUNC(sub_83181350);
PPC_FUNC_IMPL(__imp__sub_83181350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181358"))) PPC_WEAK_FUNC(sub_83181358);
PPC_FUNC_IMPL(__imp__sub_83181358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181360"))) PPC_WEAK_FUNC(sub_83181360);
PPC_FUNC_IMPL(__imp__sub_83181360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181368"))) PPC_WEAK_FUNC(sub_83181368);
PPC_FUNC_IMPL(__imp__sub_83181368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181370"))) PPC_WEAK_FUNC(sub_83181370);
PPC_FUNC_IMPL(__imp__sub_83181370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181378"))) PPC_WEAK_FUNC(sub_83181378);
PPC_FUNC_IMPL(__imp__sub_83181378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f12,f13,f0
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsub f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 - ctx.f11.f64;
	// fsel f8,f9,f11,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318139C"))) PPC_WEAK_FUNC(sub_8318139C);
PPC_FUNC_IMPL(__imp__sub_8318139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831813A0"))) PPC_WEAK_FUNC(sub_831813A0);
PPC_FUNC_IMPL(__imp__sub_831813A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831813A8"))) PPC_WEAK_FUNC(sub_831813A8);
PPC_FUNC_IMPL(__imp__sub_831813A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831813B0"))) PPC_WEAK_FUNC(sub_831813B0);
PPC_FUNC_IMPL(__imp__sub_831813B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831813B8"))) PPC_WEAK_FUNC(sub_831813B8);
PPC_FUNC_IMPL(__imp__sub_831813B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831813C0"))) PPC_WEAK_FUNC(sub_831813C0);
PPC_FUNC_IMPL(__imp__sub_831813C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831813C8"))) PPC_WEAK_FUNC(sub_831813C8);
PPC_FUNC_IMPL(__imp__sub_831813C8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831813D0"))) PPC_WEAK_FUNC(sub_831813D0);
PPC_FUNC_IMPL(__imp__sub_831813D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,-8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831813D8"))) PPC_WEAK_FUNC(sub_831813D8);
PPC_FUNC_IMPL(__imp__sub_831813D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + -8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831813E0"))) PPC_WEAK_FUNC(sub_831813E0);
PPC_FUNC_IMPL(__imp__sub_831813E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,-4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831813E8"))) PPC_WEAK_FUNC(sub_831813E8);
PPC_FUNC_IMPL(__imp__sub_831813E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831813F0"))) PPC_WEAK_FUNC(sub_831813F0);
PPC_FUNC_IMPL(__imp__sub_831813F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,31408
	ctx.r9.s64 = ctx.r9.s64 + 31408;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lis r31,-32248
	ctx.r31.s64 = -2113404928;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r7,r7,31672
	ctx.r7.s64 = ctx.r7.s64 + 31672;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r6,r6,31536
	ctx.r6.s64 = ctx.r6.s64 + 31536;
	// lfs f0,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// addi r9,r31,31660
	ctx.r9.s64 = ctx.r31.s64 + 31660;
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stw r3,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r3.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// stb r8,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r8.u8);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831814C4"))) PPC_WEAK_FUNC(sub_831814C4);
PPC_FUNC_IMPL(__imp__sub_831814C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831814C8"))) PPC_WEAK_FUNC(sub_831814C8);
PPC_FUNC_IMPL(__imp__sub_831814C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r4,r3,-20
	ctx.r4.s64 = ctx.r3.s64 + -20;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83167a10
	sub_83167A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831814F8"))) PPC_WEAK_FUNC(sub_831814F8);
PPC_FUNC_IMPL(__imp__sub_831814F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83181500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83181534
	if (ctx.cr6.eq) goto loc_83181534;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83167958
	ctx.lr = 0x8318152C;
	sub_83167958(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x83181538
	goto loc_83181538;
loc_83181534:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_83181538:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83181554
	if (ctx.cr6.eq) goto loc_83181554;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83167958
	ctx.lr = 0x8318154C;
	sub_83167958(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x83181558
	goto loc_83181558;
loc_83181554:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_83181558:
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f10,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f9,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,56(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f8,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,60(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f7,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,64(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f6,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,68(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f5,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,72(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f4,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,76(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f3,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,80(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f2,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f2,84(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f1,88(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f13,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f12,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f11,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,104(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r6.u8);
	// lfs f10,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f9,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stb r3,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r3.u8);
	// beq cr6,0x83181644
	if (ctx.cr6.eq) goto loc_83181644;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83181648
	if (ctx.cr6.eq) goto loc_83181648;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83181648
	if (ctx.cr6.lt) goto loc_83181648;
loc_83181644:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83181648:
	// addi r9,r11,168
	ctx.r9.s64 = ctx.r11.s64 + 168;
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83181670"))) PPC_WEAK_FUNC(sub_83181670);
PPC_FUNC_IMPL(__imp__sub_83181670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181694"))) PPC_WEAK_FUNC(sub_83181694);
PPC_FUNC_IMPL(__imp__sub_83181694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181698"))) PPC_WEAK_FUNC(sub_83181698);
PPC_FUNC_IMPL(__imp__sub_83181698) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831816B4"))) PPC_WEAK_FUNC(sub_831816B4);
PPC_FUNC_IMPL(__imp__sub_831816B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831816B8"))) PPC_WEAK_FUNC(sub_831816B8);
PPC_FUNC_IMPL(__imp__sub_831816B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r10,31660
	ctx.r9.s64 = ctx.r10.s64 + 31660;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831816D8"))) PPC_WEAK_FUNC(sub_831816D8);
PPC_FUNC_IMPL(__imp__sub_831816D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831816f8
	if (ctx.cr6.eq) goto loc_831816F8;
	// lfs f0,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_831816F8:
	// lfs f0,112(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181708"))) PPC_WEAK_FUNC(sub_83181708);
PPC_FUNC_IMPL(__imp__sub_83181708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83181724
	if (ctx.cr6.eq) goto loc_83181724;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_83181724:
	// fadds f13,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181730"))) PPC_WEAK_FUNC(sub_83181730);
PPC_FUNC_IMPL(__imp__sub_83181730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181734"))) PPC_WEAK_FUNC(sub_83181734);
PPC_FUNC_IMPL(__imp__sub_83181734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181738"))) PPC_WEAK_FUNC(sub_83181738);
PPC_FUNC_IMPL(__imp__sub_83181738) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,168
	ctx.r11.s64 = ctx.r3.s64 + 168;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r4.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181758"))) PPC_WEAK_FUNC(sub_83181758);
PPC_FUNC_IMPL(__imp__sub_83181758) {
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
	// addi r9,r11,31536
	ctx.r9.s64 = ctx.r11.s64 + 31536;
	// addi r8,r10,31400
	ctx.r8.s64 = ctx.r10.s64 + 31400;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83181798
	if (ctx.cr6.eq) goto loc_83181798;
	// bl 0x822990f0
	ctx.lr = 0x83181794;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83181798:
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

__attribute__((alias("__imp__sub_831817AC"))) PPC_WEAK_FUNC(sub_831817AC);
PPC_FUNC_IMPL(__imp__sub_831817AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831817B0"))) PPC_WEAK_FUNC(sub_831817B0);
PPC_FUNC_IMPL(__imp__sub_831817B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831817B8;
	__savegprlr_29(ctx, base);
	// lbz r30,127(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r30,r29,0,31,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r30.u64 & 0xFE);
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r30.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// beq cr6,0x831817ec
	if (ctx.cr6.eq) goto loc_831817EC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_831817EC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831817fc
	if (ctx.cr6.eq) goto loc_831817FC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_831817FC:
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f9,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,6048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f2,60(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,68(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,72(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,76(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f2,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,96(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f1,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,100(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f4,116(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f3,120(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831818A4"))) PPC_WEAK_FUNC(sub_831818A4);
PPC_FUNC_IMPL(__imp__sub_831818A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831818A8"))) PPC_WEAK_FUNC(sub_831818A8);
PPC_FUNC_IMPL(__imp__sub_831818A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831818B0;
	__savegprlr_29(ctx, base);
	// lbz r30,143(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r30,r29,0,31,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r30.u64 & 0xFE);
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r30.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// beq cr6,0x831818e4
	if (ctx.cr6.eq) goto loc_831818E4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_831818E4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831818f4
	if (ctx.cr6.eq) goto loc_831818F4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_831818F4:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// fdivs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,40(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f2,44(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f3,60(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f4,92(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,64(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,68(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,72(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,76(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f1,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,96(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f6,116(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f5,120(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831819A4"))) PPC_WEAK_FUNC(sub_831819A4);
PPC_FUNC_IMPL(__imp__sub_831819A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831819A8"))) PPC_WEAK_FUNC(sub_831819A8);
PPC_FUNC_IMPL(__imp__sub_831819A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r10,31728
	ctx.r9.s64 = ctx.r10.s64 + 31728;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831819CC"))) PPC_WEAK_FUNC(sub_831819CC);
PPC_FUNC_IMPL(__imp__sub_831819CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831819D0"))) PPC_WEAK_FUNC(sub_831819D0);
PPC_FUNC_IMPL(__imp__sub_831819D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f5,f11,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f4,f8,f12,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmsubs f3,f12,f9,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f6.f64));
	// fnmsubs f2,f5,f0,f13
	ctx.f2.f64 = double(float(-(ctx.f5.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181A24"))) PPC_WEAK_FUNC(sub_83181A24);
PPC_FUNC_IMPL(__imp__sub_83181A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181A28"))) PPC_WEAK_FUNC(sub_83181A28);
PPC_FUNC_IMPL(__imp__sub_83181A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f5,f11,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f4,f11,f7,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmsubs f3,f7,f12,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f6.f64));
	// fnmsubs f2,f5,f0,f13
	ctx.f2.f64 = double(float(-(ctx.f5.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181A7C"))) PPC_WEAK_FUNC(sub_83181A7C);
PPC_FUNC_IMPL(__imp__sub_83181A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181A80"))) PPC_WEAK_FUNC(sub_83181A80);
PPC_FUNC_IMPL(__imp__sub_83181A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f11,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lfs f10,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// lfs f9,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f7
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f3,f11,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// lfs f4,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f1,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f6,f3,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmadds f9,f9,f7,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmsubs f5,f7,f10,f2
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f2.f64));
	// fmuls f2,f8,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f9,f1,f3,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f8,f4,f10,f9
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fadds f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f6,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmsubs f9,f5,f6,f1
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f1.f64));
	// lfs f10,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f6,f6
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lfs f8,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f6,f2
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f6,f3,f3,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fmadds f1,f3,f5,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f7.f64));
	// fmuls f12,f4,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fnmsubs f13,f6,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f6.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f8,f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f7,f10,f9,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181B5C"))) PPC_WEAK_FUNC(sub_83181B5C);
PPC_FUNC_IMPL(__imp__sub_83181B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181B60"))) PPC_WEAK_FUNC(sub_83181B60);
PPC_FUNC_IMPL(__imp__sub_83181B60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181B64"))) PPC_WEAK_FUNC(sub_83181B64);
PPC_FUNC_IMPL(__imp__sub_83181B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181B68"))) PPC_WEAK_FUNC(sub_83181B68);
PPC_FUNC_IMPL(__imp__sub_83181B68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181B6C"))) PPC_WEAK_FUNC(sub_83181B6C);
PPC_FUNC_IMPL(__imp__sub_83181B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181B70"))) PPC_WEAK_FUNC(sub_83181B70);
PPC_FUNC_IMPL(__imp__sub_83181B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31744
	ctx.r10.s64 = ctx.r11.s64 + 31744;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181B80"))) PPC_WEAK_FUNC(sub_83181B80);
PPC_FUNC_IMPL(__imp__sub_83181B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,31888
	ctx.r9.s64 = ctx.r11.s64 + 31888;
	// addi r8,r10,31400
	ctx.r8.s64 = ctx.r10.s64 + 31400;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181B9C"))) PPC_WEAK_FUNC(sub_83181B9C);
PPC_FUNC_IMPL(__imp__sub_83181B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181BA0"))) PPC_WEAK_FUNC(sub_83181BA0);
PPC_FUNC_IMPL(__imp__sub_83181BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm r11,r8,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0xFC000000;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r7,176
	ctx.r3.s64 = ctx.r7.s64 + 11534336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181BC0"))) PPC_WEAK_FUNC(sub_83181BC0);
PPC_FUNC_IMPL(__imp__sub_83181BC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,-12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181BD4"))) PPC_WEAK_FUNC(sub_83181BD4);
PPC_FUNC_IMPL(__imp__sub_83181BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181BD8"))) PPC_WEAK_FUNC(sub_83181BD8);
PPC_FUNC_IMPL(__imp__sub_83181BD8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83181BE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83181be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83181BE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181C00"))) PPC_WEAK_FUNC(sub_83181C00);
PPC_FUNC_IMPL(__imp__sub_83181C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181C40"))) PPC_WEAK_FUNC(sub_83181C40);
PPC_FUNC_IMPL(__imp__sub_83181C40) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,40
	ctx.r11.s64 = ctx.r4.s64 + 40;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83181C50:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83181c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83181C50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181C68"))) PPC_WEAK_FUNC(sub_83181C68);
PPC_FUNC_IMPL(__imp__sub_83181C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f10,56(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f9,60(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181CA8"))) PPC_WEAK_FUNC(sub_83181CA8);
PPC_FUNC_IMPL(__imp__sub_83181CA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181CB0"))) PPC_WEAK_FUNC(sub_83181CB0);
PPC_FUNC_IMPL(__imp__sub_83181CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181CCC"))) PPC_WEAK_FUNC(sub_83181CCC);
PPC_FUNC_IMPL(__imp__sub_83181CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181CD0"))) PPC_WEAK_FUNC(sub_83181CD0);
PPC_FUNC_IMPL(__imp__sub_83181CD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181CD8"))) PPC_WEAK_FUNC(sub_83181CD8);
PPC_FUNC_IMPL(__imp__sub_83181CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181CF4"))) PPC_WEAK_FUNC(sub_83181CF4);
PPC_FUNC_IMPL(__imp__sub_83181CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83181CF8"))) PPC_WEAK_FUNC(sub_83181CF8);
PPC_FUNC_IMPL(__imp__sub_83181CF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D00"))) PPC_WEAK_FUNC(sub_83181D00);
PPC_FUNC_IMPL(__imp__sub_83181D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D08"))) PPC_WEAK_FUNC(sub_83181D08);
PPC_FUNC_IMPL(__imp__sub_83181D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D10"))) PPC_WEAK_FUNC(sub_83181D10);
PPC_FUNC_IMPL(__imp__sub_83181D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D18"))) PPC_WEAK_FUNC(sub_83181D18);
PPC_FUNC_IMPL(__imp__sub_83181D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D20"))) PPC_WEAK_FUNC(sub_83181D20);
PPC_FUNC_IMPL(__imp__sub_83181D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D28"))) PPC_WEAK_FUNC(sub_83181D28);
PPC_FUNC_IMPL(__imp__sub_83181D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D30"))) PPC_WEAK_FUNC(sub_83181D30);
PPC_FUNC_IMPL(__imp__sub_83181D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D38"))) PPC_WEAK_FUNC(sub_83181D38);
PPC_FUNC_IMPL(__imp__sub_83181D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D40"))) PPC_WEAK_FUNC(sub_83181D40);
PPC_FUNC_IMPL(__imp__sub_83181D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D48"))) PPC_WEAK_FUNC(sub_83181D48);
PPC_FUNC_IMPL(__imp__sub_83181D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D50"))) PPC_WEAK_FUNC(sub_83181D50);
PPC_FUNC_IMPL(__imp__sub_83181D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D58"))) PPC_WEAK_FUNC(sub_83181D58);
PPC_FUNC_IMPL(__imp__sub_83181D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D60"))) PPC_WEAK_FUNC(sub_83181D60);
PPC_FUNC_IMPL(__imp__sub_83181D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D68"))) PPC_WEAK_FUNC(sub_83181D68);
PPC_FUNC_IMPL(__imp__sub_83181D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D70"))) PPC_WEAK_FUNC(sub_83181D70);
PPC_FUNC_IMPL(__imp__sub_83181D70) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D78"))) PPC_WEAK_FUNC(sub_83181D78);
PPC_FUNC_IMPL(__imp__sub_83181D78) {
	PPC_FUNC_PROLOGUE();
	// stb r4,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D80"))) PPC_WEAK_FUNC(sub_83181D80);
PPC_FUNC_IMPL(__imp__sub_83181D80) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,121(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 121);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D88"))) PPC_WEAK_FUNC(sub_83181D88);
PPC_FUNC_IMPL(__imp__sub_83181D88) {
	PPC_FUNC_PROLOGUE();
	// stb r4,121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 121, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D90"))) PPC_WEAK_FUNC(sub_83181D90);
PPC_FUNC_IMPL(__imp__sub_83181D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,-8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D98"))) PPC_WEAK_FUNC(sub_83181D98);
PPC_FUNC_IMPL(__imp__sub_83181D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + -8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181DA0"))) PPC_WEAK_FUNC(sub_83181DA0);
PPC_FUNC_IMPL(__imp__sub_83181DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,-4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181DA8"))) PPC_WEAK_FUNC(sub_83181DA8);
PPC_FUNC_IMPL(__imp__sub_83181DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181DB0"))) PPC_WEAK_FUNC(sub_83181DB0);
PPC_FUNC_IMPL(__imp__sub_83181DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83181DB8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6acc
	ctx.lr = 0x83181DC0;
	__savefpr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83181dec
	if (ctx.cr6.lt) goto loc_83181DEC;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83178f38
	ctx.lr = 0x83181DEC;
	sub_83178F38(ctx, base);
loc_83181DEC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83181e20
	if (ctx.cr6.eq) goto loc_83181E20;
	// li r9,16
	ctx.r9.s64 = 16;
loc_83181E20:
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83181e34
	if (ctx.cr6.eq) goto loc_83181E34;
	// li r10,32
	ctx.r10.s64 = 32;
loc_83181E34:
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// lfs f10,6140(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,7676(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x83181ef8
	if (ctx.cr6.eq) goto loc_83181EF8;
	// lfs f13,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f11,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f6,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfs f3,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmsubs f7,f11,f12,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fmadds f2,f6,f8,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmsubs f5,f6,f13,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmsubs f4,f8,f9,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f4.f64));
	// fmsubs f1,f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f10.f64));
	// fmuls f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f3,f12,f13,f2
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmuls f2,f6,f1
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f6,f12,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f5,f8,f3
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f4,f11,f3
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fadds f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fadds f1,f9,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f6,f7
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f28,f2,f9
	ctx.f28.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fadds f27,f1,f8
	ctx.f27.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// fadds f26,f11,f7
	ctx.f26.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// b 0x83181f04
	goto loc_83181F04;
loc_83181EF8:
	// lfs f28,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f26.f64 = double(temp.f32);
loc_83181F04:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83181fb0
	if (ctx.cr6.eq) goto loc_83181FB0;
	// lfs f13,120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f8,112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f11,116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfs f3,124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmsubs f7,f11,f12,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fmsubs f5,f6,f13,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmsubs f4,f8,f9,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f4.f64));
	// fmadds f2,f6,f8,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmsubs f1,f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f10.f64));
	// fmuls f10,f7,f3
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f7,f5,f3
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f5,f4,f3
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f4,f12,f13,f2
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmuls f3,f6,f1
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f2,f9,f1
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f13,f4
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f7,f11,f4
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fadds f5,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// fadds f4,f2,f10
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fadds f3,f1,f9
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f29,f3,f12
	ctx.f29.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// fadds f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fadds f30,f4,f13
	ctx.f30.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// b 0x83181fbc
	goto loc_83181FBC;
loc_83181FB0:
	// lfs f1,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f29.f64 = double(temp.f32);
loc_83181FBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83181fcc
	if (ctx.cr6.eq) goto loc_83181FCC;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x83181fd0
	goto loc_83181FD0;
loc_83181FCC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83181FD0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83181fe0
	if (ctx.cr6.eq) goto loc_83181FE0;
	// lwz r6,24(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// b 0x83181fe4
	goto loc_83181FE4;
loc_83181FE0:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_83181FE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83182068
	if (ctx.cr6.eq) goto loc_83182068;
	// lfs f13,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f25,f5,f10
	ctx.f25.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f3,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f24,f5,f8
	ctx.f24.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f22,f3,f13
	ctx.f22.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f21,f3,f12
	ctx.f21.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmsubs f10,f10,f0,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fmuls f23,f3,f0
	ctx.f23.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmsubs f9,f8,f13,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fmsubs f7,f11,f12,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f6.f64));
	// fmadds f6,f8,f12,f4
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fadds f4,f10,f24
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f24.f64));
	// fadds f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f13,f7,f25
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f25.f64));
	// fmadds f9,f11,f0,f6
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fadds f10,f4,f21
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f21.f64));
	// fadds f12,f2,f23
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f23.f64));
	// fadds f11,f13,f22
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f22.f64));
	// fmsubs f9,f5,f3,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f9.f64));
	// b 0x83182078
	goto loc_83182078;
loc_83182068:
	// lfs f12,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
loc_83182078:
	// lbz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 140);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r7,r4,0,31,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r7.u64 & 0xFE);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// beq cr6,0x83182164
	if (ctx.cr6.eq) goto loc_83182164;
	// lfs f2,64(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// li r3,3
	ctx.r3.s64 = 3;
	// lfs f0,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f0,f2
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f5,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f13,f2
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f2,f5,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// lfs f8,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// stb r7,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r7.u8);
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// beq cr6,0x831820ec
	if (ctx.cr6.eq) goto loc_831820EC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_831820EC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831820f8
	if (ctx.cr6.eq) goto loc_831820F8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_831820F8:
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// fdivs f25,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f28,16(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f27,20(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f26,24(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f1,32(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f30,36(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f29,40(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f5,60(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f6,92(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f25,112(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f10,72(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f9,76(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f4,96(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f3,100(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f2,104(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f8,116(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f7,120(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// b 0x8318221c
	goto loc_8318221C;
loc_83182164:
	// lfs f4,64(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f8,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f13,f4
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f7,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f8,f4
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f4,f7,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// lfs f0,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// stb r7,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r7.u8);
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// beq cr6,0x831821b0
	if (ctx.cr6.eq) goto loc_831821B0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_831821B0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831821bc
	if (ctx.cr6.eq) goto loc_831821BC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_831821BC:
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f28,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f27,20(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f26,24(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f1,32(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f30,36(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f29,40(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f8,60(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,92(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f10,72(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f9,76(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f6,96(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f5,100(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f4,104(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
loc_8318221C:
	// stfs f31,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// bl 0x831784a8
	ctx.lr = 0x83182230;
	sub_831784A8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lfs f13,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8318225c
	if (!ctx.cr6.lt) goto loc_8318225C;
	// lfs f0,136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8318225c
	if (!ctx.cr6.gt) goto loc_8318225C;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8318225C:
	// stfs f13,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lbz r11,141(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 141);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83182280
	if (ctx.cr6.eq) goto loc_83182280;
	// addi r11,r30,156
	ctx.r11.s64 = ctx.r30.s64 + 156;
	// stfs f31,168(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// stfs f31,164(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 164, temp.u32);
	// stfs f31,160(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83182280:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b18
	ctx.lr = 0x8318228C;
	__restfpr_21(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83182290"))) PPC_WEAK_FUNC(sub_83182290);
PPC_FUNC_IMPL(__imp__sub_83182290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r10,r10,31744
	ctx.r10.s64 = ctx.r10.s64 + 31744;
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r6,r6,31700
	ctx.r6.s64 = ctx.r6.s64 + 31700;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r9,r9,32032
	ctx.r9.s64 = ctx.r9.s64 + 32032;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r8,r8,31888
	ctx.r8.s64 = ctx.r8.s64 + 31888;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,6048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// addi r10,r3,144
	ctx.r10.s64 = ctx.r3.s64 + 144;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r5,r7,31728
	ctx.r5.s64 = ctx.r7.s64 + 31728;
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// addi r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 + 60;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// addi r9,r3,156
	ctx.r9.s64 = ctx.r3.s64 + 156;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r11.u8);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stb r11,141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 141, ctx.r11.u8);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stw r3,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r3.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stw r5,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831823A4"))) PPC_WEAK_FUNC(sub_831823A4);
PPC_FUNC_IMPL(__imp__sub_831823A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831823A8"))) PPC_WEAK_FUNC(sub_831823A8);
PPC_FUNC_IMPL(__imp__sub_831823A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r4,r3,-20
	ctx.r4.s64 = ctx.r3.s64 + -20;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r7,124(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83167b40
	sub_83167B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831823D8"))) PPC_WEAK_FUNC(sub_831823D8);
PPC_FUNC_IMPL(__imp__sub_831823D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831823E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8318240c
	if (ctx.cr6.eq) goto loc_8318240C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83167958
	ctx.lr = 0x83182404;
	sub_83167958(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x83182410
	goto loc_83182410;
loc_8318240C:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_83182410:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8318242c
	if (ctx.cr6.eq) goto loc_8318242C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83167958
	ctx.lr = 0x83182424;
	sub_83167958(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x83182430
	goto loc_83182430;
loc_8318242C:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_83182430:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// lfs f11,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lfs f10,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f8,56(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f7,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// stfs f7,60(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f6,64(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f5,68(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f4,72(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f3,76(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f2,80(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f1,84(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f13,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f12,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f11,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,100(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f10,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,104(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f9,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,108(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f8,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f8,112(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f7,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f7,116(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f6,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,120(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f5,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,124(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f4,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,128(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f3,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,132(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f2,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,136(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r6.u8);
	// lwz r5,120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r9,r3,1
	ctx.r9.u64 = ctx.r3.u64 ^ 1;
	// stb r9,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r9.u8);
	// lfs f1,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,12(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// beq cr6,0x83182578
	if (ctx.cr6.eq) goto loc_83182578;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8318257c
	if (ctx.cr6.eq) goto loc_8318257C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8318257c
	if (ctx.cr6.lt) goto loc_8318257C;
loc_83182578:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8318257C:
	// addi r9,r11,168
	ctx.r9.s64 = ctx.r11.s64 + 168;
	// addi r10,r31,144
	ctx.r10.s64 = ctx.r31.s64 + 144;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// lwz r8,148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831825A4"))) PPC_WEAK_FUNC(sub_831825A4);
PPC_FUNC_IMPL(__imp__sub_831825A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831825A8"))) PPC_WEAK_FUNC(sub_831825A8);
PPC_FUNC_IMPL(__imp__sub_831825A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831825B0"))) PPC_WEAK_FUNC(sub_831825B0);
PPC_FUNC_IMPL(__imp__sub_831825B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831825B8"))) PPC_WEAK_FUNC(sub_831825B8);
PPC_FUNC_IMPL(__imp__sub_831825B8) {
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
	// addi r9,r11,31888
	ctx.r9.s64 = ctx.r11.s64 + 31888;
	// addi r8,r10,31400
	ctx.r8.s64 = ctx.r10.s64 + 31400;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x831825f8
	if (ctx.cr6.eq) goto loc_831825F8;
	// bl 0x822990f0
	ctx.lr = 0x831825F4;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831825F8:
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

__attribute__((alias("__imp__sub_8318260C"))) PPC_WEAK_FUNC(sub_8318260C);
PPC_FUNC_IMPL(__imp__sub_8318260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182610"))) PPC_WEAK_FUNC(sub_83182610);
PPC_FUNC_IMPL(__imp__sub_83182610) {
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
	// bl 0x82cb5128
	ctx.lr = 0x83182620;
	sub_82CB5128(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182634"))) PPC_WEAK_FUNC(sub_83182634);
PPC_FUNC_IMPL(__imp__sub_83182634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182638"))) PPC_WEAK_FUNC(sub_83182638);
PPC_FUNC_IMPL(__imp__sub_83182638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182648"))) PPC_WEAK_FUNC(sub_83182648);
PPC_FUNC_IMPL(__imp__sub_83182648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182670"))) PPC_WEAK_FUNC(sub_83182670);
PPC_FUNC_IMPL(__imp__sub_83182670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831826A4"))) PPC_WEAK_FUNC(sub_831826A4);
PPC_FUNC_IMPL(__imp__sub_831826A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831826A8"))) PPC_WEAK_FUNC(sub_831826A8);
PPC_FUNC_IMPL(__imp__sub_831826A8) {
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
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f1,f10,f10,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831826CC"))) PPC_WEAK_FUNC(sub_831826CC);
PPC_FUNC_IMPL(__imp__sub_831826CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831826D0"))) PPC_WEAK_FUNC(sub_831826D0);
PPC_FUNC_IMPL(__imp__sub_831826D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182700"))) PPC_WEAK_FUNC(sub_83182700);
PPC_FUNC_IMPL(__imp__sub_83182700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f11,f10,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f4,f9,f8,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f1,f7,f6,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f4.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182734"))) PPC_WEAK_FUNC(sub_83182734);
PPC_FUNC_IMPL(__imp__sub_83182734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182738"))) PPC_WEAK_FUNC(sub_83182738);
PPC_FUNC_IMPL(__imp__sub_83182738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318275C"))) PPC_WEAK_FUNC(sub_8318275C);
PPC_FUNC_IMPL(__imp__sub_8318275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182760"))) PPC_WEAK_FUNC(sub_83182760);
PPC_FUNC_IMPL(__imp__sub_83182760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ad0
	ctx.lr = 0x83182770;
	__savefpr_22(ctx, base);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f7
	ctx.f4.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f23,f3,f10
	ctx.f23.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f30,f6,f12
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f1,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f7,f12
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f29,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f1,f4
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f27,f6,f2
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f26,f3,f2
	ctx.f26.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f25,f11,f4
	ctx.f25.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmsubs f13,f8,f0,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f8,f7,f4
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f22,f1,f10
	ctx.f22.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmadds f30,f11,f2,f30
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f30.f64));
	// fmuls f24,f7,f10
	ctx.f24.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmsubs f5,f6,f4,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 - ctx.f5.f64));
	// fmsubs f31,f3,f4,f31
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 - ctx.f31.f64));
	// fmsubs f27,f11,f12,f27
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f27.f64));
	// fmsubs f26,f1,f12,f26
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 - ctx.f26.f64));
	// fmsubs f25,f9,f2,f25
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 - ctx.f25.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f1,f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f8,f9,f4,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f30.f64));
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmsubs f7,f7,f2,f28
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 - ctx.f28.f64));
	// fmuls f30,f10,f27
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f27,f29,f12
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// fmuls f13,f25,f10
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f10.f64));
	// fmuls f25,f2,f29
	ctx.f25.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// fmadds f3,f3,f12,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmuls f28,f29,f4
	ctx.f28.f64 = double(float(ctx.f29.f64 * ctx.f4.f64));
	// fmuls f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f2,f8,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f8,f30,f0
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fadds f7,f7,f23
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f23.f64));
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f13,f26,f24
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f24.f64));
	// fadds f31,f31,f22
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f22.f64));
	// fmsubs f3,f29,f10,f3
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 - ctx.f3.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f5,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f12,f9,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fadds f9,f7,f27
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f27.f64));
	// fadds f11,f6,f4
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fadds f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fadds f8,f31,f25
	ctx.f8.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
	// fadds f7,f5,f2
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f6,f12,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f5,4(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f8,20(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f3,24(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b1c
	ctx.lr = 0x831828CC;
	__restfpr_22(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831828D8"))) PPC_WEAK_FUNC(sub_831828D8);
PPC_FUNC_IMPL(__imp__sub_831828D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r8,r11,0,25,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// rlwinm r7,r10,0,26,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// lwz r6,96(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r5,r9,0,27,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r9,r6,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r7,r4,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x6;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r5,r10,30
	ctx.r5.u64 = ctx.r10.u32 & 0x3;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182920"))) PPC_WEAK_FUNC(sub_83182920);
PPC_FUNC_IMPL(__imp__sub_83182920) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r4,r7,30
	ctx.r4.u64 = ctx.r7.u32 & 0x3;
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// rlwinm r10,r5,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182964"))) PPC_WEAK_FUNC(sub_83182964);
PPC_FUNC_IMPL(__imp__sub_83182964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182968"))) PPC_WEAK_FUNC(sub_83182968);
PPC_FUNC_IMPL(__imp__sub_83182968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,240(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// rlwinm r8,r11,0,25,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// rlwinm r7,r10,0,26,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// lwz r6,224(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// rlwinm r5,r9,0,27,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r4,208(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// rlwinm r9,r6,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r7,r4,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x6;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r5,r10,30
	ctx.r5.u64 = ctx.r10.u32 & 0x3;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831829B0"))) PPC_WEAK_FUNC(sub_831829B0);
PPC_FUNC_IMPL(__imp__sub_831829B0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// stw r8,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r8.u32);
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r4,r7,30
	ctx.r4.u64 = ctx.r7.u32 & 0x3;
	// stw r6,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r6.u32);
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// rlwinm r10,r5,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	// stw r4,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r4.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831829F4"))) PPC_WEAK_FUNC(sub_831829F4);
PPC_FUNC_IMPL(__imp__sub_831829F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831829F8"))) PPC_WEAK_FUNC(sub_831829F8);
PPC_FUNC_IMPL(__imp__sub_831829F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r10,32072
	ctx.r9.s64 = ctx.r10.s64 + 32072;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182A2C"))) PPC_WEAK_FUNC(sub_83182A2C);
PPC_FUNC_IMPL(__imp__sub_83182A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182A30"))) PPC_WEAK_FUNC(sub_83182A30);
PPC_FUNC_IMPL(__imp__sub_83182A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x83182a84
	if (!ctx.cr6.eq) goto loc_83182A84;
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x83182ad0
	goto loc_83182AD0;
loc_83182A84:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x83182ad0
	if (!ctx.cr6.eq) goto loc_83182AD0;
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f2,24(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
loc_83182AD0:
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x83182b04
	if (!ctx.cr6.eq) goto loc_83182B04;
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x83182b24
	if (!ctx.cr6.lt) goto loc_83182B24;
loc_83182B04:
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_83182B24:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,387(r11)
	PPC_STORE_U8(ctx.r11.u32 + 387, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182B30"))) PPC_WEAK_FUNC(sub_83182B30);
PPC_FUNC_IMPL(__imp__sub_83182B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182B34"))) PPC_WEAK_FUNC(sub_83182B34);
PPC_FUNC_IMPL(__imp__sub_83182B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182B38"))) PPC_WEAK_FUNC(sub_83182B38);
PPC_FUNC_IMPL(__imp__sub_83182B38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182B3C"))) PPC_WEAK_FUNC(sub_83182B3C);
PPC_FUNC_IMPL(__imp__sub_83182B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182B40"))) PPC_WEAK_FUNC(sub_83182B40);
PPC_FUNC_IMPL(__imp__sub_83182B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,32088
	ctx.r10.s64 = ctx.r11.s64 + 32088;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182B50"))) PPC_WEAK_FUNC(sub_83182B50);
PPC_FUNC_IMPL(__imp__sub_83182B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,32264
	ctx.r9.s64 = ctx.r11.s64 + 32264;
	// addi r8,r10,31400
	ctx.r8.s64 = ctx.r10.s64 + 31400;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182B6C"))) PPC_WEAK_FUNC(sub_83182B6C);
PPC_FUNC_IMPL(__imp__sub_83182B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182B70"))) PPC_WEAK_FUNC(sub_83182B70);
PPC_FUNC_IMPL(__imp__sub_83182B70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,386(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 386);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83182d84
	if (ctx.cr6.eq) goto loc_83182D84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f31,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x83182bd4
	if (!ctx.cr6.eq) goto loc_83182BD4;
	// lfs f0,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82cb5128
	ctx.lr = 0x83182BB8;
	sub_82CB5128(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f12,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82cb5128
	ctx.lr = 0x83182BCC;
	sub_82CB5128(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,376(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
loc_83182BD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f30,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x83182c10
	if (!ctx.cr6.eq) goto loc_83182C10;
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82cb5128
	ctx.lr = 0x83182BF4;
	sub_82CB5128(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,364(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// lfs f12,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82cb5128
	ctx.lr = 0x83182C08;
	sub_82CB5128(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,356(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
loc_83182C10:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83182c44
	if (!ctx.cr6.eq) goto loc_83182C44;
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82cb5128
	ctx.lr = 0x83182C28;
	sub_82CB5128(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,368(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f12,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82cb5128
	ctx.lr = 0x83182C3C;
	sub_82CB5128(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,360(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
loc_83182C44:
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r11,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x83182c6c
	if (!ctx.cr6.eq) goto loc_83182C6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83182C6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stb r11,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r11.u8);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x83182c88
	if (!ctx.cr6.eq) goto loc_83182C88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83182C88:
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stb r11,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r11.u8);
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cntlzw r4,r10
	ctx.r4.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stb r11,381(r31)
	PPC_STORE_U8(ctx.r31.u32 + 381, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x83182cb4
	if (!ctx.cr6.eq) goto loc_83182CB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83182CB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stb r11,381(r31)
	PPC_STORE_U8(ctx.r31.u32 + 381, ctx.r11.u8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x83182cd0
	if (!ctx.cr6.eq) goto loc_83182CD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83182CD0:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// stb r11,381(r31)
	PPC_STORE_U8(ctx.r31.u32 + 381, ctx.r11.u8);
	// beq cr6,0x83182cf0
	if (ctx.cr6.eq) goto loc_83182CF0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x83182cf0
	if (ctx.cr6.eq) goto loc_83182CF0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83182cf4
	if (!ctx.cr6.eq) goto loc_83182CF4;
loc_83182CF0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83182CF4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stb r11,382(r31)
	PPC_STORE_U8(ctx.r31.u32 + 382, ctx.r11.u8);
	// beq cr6,0x83182d14
	if (ctx.cr6.eq) goto loc_83182D14;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x83182d14
	if (ctx.cr6.eq) goto loc_83182D14;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83182d18
	if (!ctx.cr6.eq) goto loc_83182D18;
loc_83182D14:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83182D18:
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stb r11,383(r31)
	PPC_STORE_U8(ctx.r31.u32 + 383, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83182d44
	if (!ctx.cr6.eq) goto loc_83182D44;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83182d44
	if (!ctx.cr6.eq) goto loc_83182D44;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x83182d48
	if (ctx.cr6.eq) goto loc_83182D48;
loc_83182D44:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83182D48:
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stb r11,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83182d74
	if (!ctx.cr6.eq) goto loc_83182D74;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83182d74
	if (!ctx.cr6.eq) goto loc_83182D74;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x83182d78
	if (ctx.cr6.eq) goto loc_83182D78;
loc_83182D74:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83182D78:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,385(r31)
	PPC_STORE_U8(ctx.r31.u32 + 385, ctx.r11.u8);
	// stb r10,386(r31)
	PPC_STORE_U8(ctx.r31.u32 + 386, ctx.r10.u8);
loc_83182D84:
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

__attribute__((alias("__imp__sub_83182DA0"))) PPC_WEAK_FUNC(sub_83182DA0);
PPC_FUNC_IMPL(__imp__sub_83182DA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm r11,r8,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0xFC000000;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r7,160
	ctx.r3.s64 = ctx.r7.s64 + 10485760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182DC0"))) PPC_WEAK_FUNC(sub_83182DC0);
PPC_FUNC_IMPL(__imp__sub_83182DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,-12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182DD4"))) PPC_WEAK_FUNC(sub_83182DD4);
PPC_FUNC_IMPL(__imp__sub_83182DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182DD8"))) PPC_WEAK_FUNC(sub_83182DD8);
PPC_FUNC_IMPL(__imp__sub_83182DD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182DE0"))) PPC_WEAK_FUNC(sub_83182DE0);
PPC_FUNC_IMPL(__imp__sub_83182DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182E20"))) PPC_WEAK_FUNC(sub_83182E20);
PPC_FUNC_IMPL(__imp__sub_83182E20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182E28"))) PPC_WEAK_FUNC(sub_83182E28);
PPC_FUNC_IMPL(__imp__sub_83182E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f10,56(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f9,60(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182E68"))) PPC_WEAK_FUNC(sub_83182E68);
PPC_FUNC_IMPL(__imp__sub_83182E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r11,0,25,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// rlwinm r7,r10,0,26,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r5,r9,0,27,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r9,r6,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r7,r4,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x6;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r5,r10,30
	ctx.r5.u64 = ctx.r10.u32 & 0x3;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182EB0"))) PPC_WEAK_FUNC(sub_83182EB0);
PPC_FUNC_IMPL(__imp__sub_83182EB0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,30,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x7FF;
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r4,r7,30
	ctx.r4.u64 = ctx.r7.u32 & 0x3;
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// rlwinm r10,r5,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stb r9,366(r3)
	PPC_STORE_U8(ctx.r3.u32 + 366, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182EFC"))) PPC_WEAK_FUNC(sub_83182EFC);
PPC_FUNC_IMPL(__imp__sub_83182EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182F00"))) PPC_WEAK_FUNC(sub_83182F00);
PPC_FUNC_IMPL(__imp__sub_83182F00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r9,220(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// rlwinm r8,r11,0,25,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// rlwinm r7,r10,0,26,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// lwz r6,204(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm r5,r9,0,27,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r4,188(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// rlwinm r9,r6,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r7,r4,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x6;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r5,r10,30
	ctx.r5.u64 = ctx.r10.u32 & 0x3;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182F48"))) PPC_WEAK_FUNC(sub_83182F48);
PPC_FUNC_IMPL(__imp__sub_83182F48) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,30,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x7FF;
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// stw r8,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r8.u32);
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r4,r7,30
	ctx.r4.u64 = ctx.r7.u32 & 0x3;
	// stw r6,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r6.u32);
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// rlwinm r10,r5,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	// stw r4,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r10,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
	// stb r9,366(r3)
	PPC_STORE_U8(ctx.r3.u32 + 366, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182F94"))) PPC_WEAK_FUNC(sub_83182F94);
PPC_FUNC_IMPL(__imp__sub_83182F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83182F98"))) PPC_WEAK_FUNC(sub_83182F98);
PPC_FUNC_IMPL(__imp__sub_83182F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182FA8"))) PPC_WEAK_FUNC(sub_83182FA8);
PPC_FUNC_IMPL(__imp__sub_83182FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f1,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stb r10,366(r3)
	PPC_STORE_U8(ctx.r3.u32 + 366, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182FC0"))) PPC_WEAK_FUNC(sub_83182FC0);
PPC_FUNC_IMPL(__imp__sub_83182FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182FD0"))) PPC_WEAK_FUNC(sub_83182FD0);
PPC_FUNC_IMPL(__imp__sub_83182FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f1,100(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182FE0"))) PPC_WEAK_FUNC(sub_83182FE0);
PPC_FUNC_IMPL(__imp__sub_83182FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182FF0"))) PPC_WEAK_FUNC(sub_83182FF0);
PPC_FUNC_IMPL(__imp__sub_83182FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f1,104(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183000"))) PPC_WEAK_FUNC(sub_83183000);
PPC_FUNC_IMPL(__imp__sub_83183000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183010"))) PPC_WEAK_FUNC(sub_83183010);
PPC_FUNC_IMPL(__imp__sub_83183010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183020"))) PPC_WEAK_FUNC(sub_83183020);
PPC_FUNC_IMPL(__imp__sub_83183020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// bge cr6,0x83183030
	if (!ctx.cr6.lt) goto loc_83183030;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83183030:
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183040"))) PPC_WEAK_FUNC(sub_83183040);
PPC_FUNC_IMPL(__imp__sub_83183040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// bge cr6,0x83183050
	if (!ctx.cr6.lt) goto loc_83183050;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83183050:
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183060"))) PPC_WEAK_FUNC(sub_83183060);
PPC_FUNC_IMPL(__imp__sub_83183060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// bge cr6,0x83183070
	if (!ctx.cr6.lt) goto loc_83183070;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83183070:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183080"))) PPC_WEAK_FUNC(sub_83183080);
PPC_FUNC_IMPL(__imp__sub_83183080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// bge cr6,0x83183090
	if (!ctx.cr6.lt) goto loc_83183090;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83183090:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f1,180(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831830A0"))) PPC_WEAK_FUNC(sub_831830A0);
PPC_FUNC_IMPL(__imp__sub_831830A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// bge cr6,0x831830b0
	if (!ctx.cr6.lt) goto loc_831830B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831830B0:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831830C0"))) PPC_WEAK_FUNC(sub_831830C0);
PPC_FUNC_IMPL(__imp__sub_831830C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// bge cr6,0x831830d0
	if (!ctx.cr6.lt) goto loc_831830D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831830D0:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f1,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831830E0"))) PPC_WEAK_FUNC(sub_831830E0);
PPC_FUNC_IMPL(__imp__sub_831830E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,320(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831830E8"))) PPC_WEAK_FUNC(sub_831830E8);
PPC_FUNC_IMPL(__imp__sub_831830E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,320(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831830F0"))) PPC_WEAK_FUNC(sub_831830F0);
PPC_FUNC_IMPL(__imp__sub_831830F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,268
	ctx.r3.s64 = ctx.r3.s64 + 268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831830F8"))) PPC_WEAK_FUNC(sub_831830F8);
PPC_FUNC_IMPL(__imp__sub_831830F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,268
	ctx.r11.s64 = ctx.r3.s64 + 268;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,268(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stfs f13,272(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// stfs f12,276(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stfs f11,280(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stfs f10,284(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stfs f9,288(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stfs f8,292(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183138"))) PPC_WEAK_FUNC(sub_83183138);
PPC_FUNC_IMPL(__imp__sub_83183138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,304(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r8,308(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r7,312(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// lwz r6,316(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318316C"))) PPC_WEAK_FUNC(sub_8318316C);
PPC_FUNC_IMPL(__imp__sub_8318316C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83183170"))) PPC_WEAK_FUNC(sub_83183170);
PPC_FUNC_IMPL(__imp__sub_83183170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,296(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,300(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,304(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,308(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,312(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,316(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831831A4"))) PPC_WEAK_FUNC(sub_831831A4);
PPC_FUNC_IMPL(__imp__sub_831831A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831831A8"))) PPC_WEAK_FUNC(sub_831831A8);
PPC_FUNC_IMPL(__imp__sub_831831A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,324(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831831B0"))) PPC_WEAK_FUNC(sub_831831B0);
PPC_FUNC_IMPL(__imp__sub_831831B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,324(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831831B8"))) PPC_WEAK_FUNC(sub_831831B8);
PPC_FUNC_IMPL(__imp__sub_831831B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,328(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831831C0"))) PPC_WEAK_FUNC(sub_831831C0);
PPC_FUNC_IMPL(__imp__sub_831831C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,328(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831831C8"))) PPC_WEAK_FUNC(sub_831831C8);
PPC_FUNC_IMPL(__imp__sub_831831C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,400(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r8,404(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r7,408(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// lwz r6,412(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831831FC"))) PPC_WEAK_FUNC(sub_831831FC);
PPC_FUNC_IMPL(__imp__sub_831831FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83183200"))) PPC_WEAK_FUNC(sub_83183200);
PPC_FUNC_IMPL(__imp__sub_83183200) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,332(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 332);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183208"))) PPC_WEAK_FUNC(sub_83183208);
PPC_FUNC_IMPL(__imp__sub_83183208) {
	PPC_FUNC_PROLOGUE();
	// stb r4,332(r3)
	PPC_STORE_U8(ctx.r3.u32 + 332, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183210"))) PPC_WEAK_FUNC(sub_83183210);
PPC_FUNC_IMPL(__imp__sub_83183210) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,367(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 367);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183218"))) PPC_WEAK_FUNC(sub_83183218);
PPC_FUNC_IMPL(__imp__sub_83183218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,-8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183220"))) PPC_WEAK_FUNC(sub_83183220);
PPC_FUNC_IMPL(__imp__sub_83183220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + -8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183228"))) PPC_WEAK_FUNC(sub_83183228);
PPC_FUNC_IMPL(__imp__sub_83183228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,-4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183230"))) PPC_WEAK_FUNC(sub_83183230);
PPC_FUNC_IMPL(__imp__sub_83183230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183238"))) PPC_WEAK_FUNC(sub_83183238);
PPC_FUNC_IMPL(__imp__sub_83183238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,32088
	ctx.r9.s64 = ctx.r9.s64 + 32088;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lis r31,-32248
	ctx.r31.s64 = -2113404928;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r8,r8,32436
	ctx.r8.s64 = ctx.r8.s64 + 32436;
	// addi r7,r7,32264
	ctx.r7.s64 = ctx.r7.s64 + 32264;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r10,r3,396
	ctx.r10.s64 = ctx.r3.s64 + 396;
	// stb r11,380(r3)
	PPC_STORE_U8(ctx.r3.u32 + 380, ctx.r11.u8);
	// addi r9,r31,32072
	ctx.r9.s64 = ctx.r31.s64 + 32072;
	// stb r11,381(r3)
	PPC_STORE_U8(ctx.r3.u32 + 381, ctx.r11.u8);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lfs f0,6048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r3,408
	ctx.r11.s64 = ctx.r3.s64 + 408;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// stfs f0,416(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// stw r10,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r10.u32);
	// stfs f0,412(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// stw r10,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r10.u32);
	// stw r3,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r3.u32);
	// stfs f0,432(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 432, temp.u32);
	// stfs f0,428(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 428, temp.u32);
	// stw r9,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r9.u32);
	// stfs f0,424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// stw r3,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r3.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831832D8"))) PPC_WEAK_FUNC(sub_831832D8);
PPC_FUNC_IMPL(__imp__sub_831832D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831832E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8318330c
	if (ctx.cr6.eq) goto loc_8318330C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83167958
	ctx.lr = 0x83183304;
	sub_83167958(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x83183310
	goto loc_83183310;
loc_8318330C:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_83183310:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8318332c
	if (ctx.cr6.eq) goto loc_8318332C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83167958
	ctx.lr = 0x83183324;
	sub_83167958(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x83183330
	goto loc_83183330;
loc_8318332C:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_83183330:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// lfs f11,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lfs f10,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f8,56(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f7,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// stfs f7,60(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f6,64(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f5,68(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f4,72(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f3,76(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f2,80(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f1,84(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r4,r9,30
	ctx.r4.u64 = ctx.r9.u32 & 0x3;
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// clrlwi r3,r7,30
	ctx.r3.u64 = ctx.r7.u32 & 0x3;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// rlwinm r10,r5,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r8,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r4,r8,30
	ctx.r4.u64 = ctx.r8.u32 & 0x3;
	// stw r6,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
	// rlwinm r3,r5,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// stw r4,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r4.u32);
	// clrlwi r10,r5,30
	ctx.r10.u64 = ctx.r5.u32 & 0x3;
	// clrlwi r9,r3,30
	ctx.r9.u64 = ctx.r3.u32 & 0x3;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// rlwinm r8,r3,30,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// addi r11,r30,228
	ctx.r11.s64 = ctx.r30.s64 + 228;
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r11,r31,288
	ctx.r11.s64 = ctx.r31.s64 + 288;
	// lfs f13,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f12,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,124(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f11,132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,116(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f10,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,128(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f9,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,136(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f8,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,140(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f7,136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f7,132(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f6,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,144(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lfs f5,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,152(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f4,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,156(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f3,140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,148(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f2,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,160(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f1,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,168(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f0,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f13,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f12,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,176(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f11,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,184(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lfs f10,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,188(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lfs f9,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,180(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lfs f8,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,196(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f7,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,200(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lfs f6,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,204(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lfs f5,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,212(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f4,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,216(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f3,204(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,220(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f2,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,228(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f1,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,232(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f0,208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f13,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,244(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f12,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,248(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f11,212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,252(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f10,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,260(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lfs f9,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,264(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lfs f8,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,268(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// lfs f7,172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,276(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lfs f6,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,280(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lfs f5,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,284(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f4,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,340(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lfs f3,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// stfs f3,288(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f2,292(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f1,296(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stfs f12,308(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f13,304(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f11,312(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lfs f10,256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,316(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lfs f9,260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,320(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// lfs f8,264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,324(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lfs f7,268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,328(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// lfs f6,272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,332(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// lfs f5,276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,336(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// lfs f4,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,344(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lfs f3,284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f3.f64 = double(temp.f32);
	// stb r29,387(r31)
	PPC_STORE_U8(ctx.r31.u32 + 387, ctx.r29.u8);
	// stfs f3,348(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lwz r6,288(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 ^ 1;
	// stb r11,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r11.u8);
	// lfs f2,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f1,296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// stb r7,386(r31)
	PPC_STORE_U8(ctx.r31.u32 + 386, ctx.r7.u8);
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x83182b70
	ctx.lr = 0x83183628;
	sub_83182B70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83183650
	if (ctx.cr6.eq) goto loc_83183650;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83183654
	if (ctx.cr6.eq) goto loc_83183654;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83183654
	if (ctx.cr6.lt) goto loc_83183654;
loc_83183650:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83183654:
	// addi r9,r11,168
	ctx.r9.s64 = ctx.r11.s64 + 168;
	// addi r10,r31,396
	ctx.r10.s64 = ctx.r31.s64 + 396;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// lwz r8,400(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318367C"))) PPC_WEAK_FUNC(sub_8318367C);
PPC_FUNC_IMPL(__imp__sub_8318367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83183680"))) PPC_WEAK_FUNC(sub_83183680);
PPC_FUNC_IMPL(__imp__sub_83183680) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,376(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// addi r11,r3,376
	ctx.r11.s64 = ctx.r3.s64 + 376;
	// lwz r9,380(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// addi r4,r3,-20
	ctx.r4.s64 = ctx.r3.s64 + -20;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,380(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// lwz r7,376(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83167c98
	sub_83167C98(ctx, base);
	return;
}

