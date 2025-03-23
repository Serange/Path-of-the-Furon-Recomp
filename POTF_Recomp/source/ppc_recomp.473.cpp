#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EC3964"))) PPC_WEAK_FUNC(sub_82EC3964);
PPC_FUNC_IMPL(__imp__sub_82EC3964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC3968"))) PPC_WEAK_FUNC(sub_82EC3968);
PPC_FUNC_IMPL(__imp__sub_82EC3968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec3a1c
	if (!ctx.cr6.lt) goto loc_82EC3A1C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f13,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
loc_82EC39B4:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec39b4
	if (ctx.cr6.lt) goto loc_82EC39B4;
loc_82EC3A1C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3a38
	if (ctx.cr6.eq) goto loc_82EC3A38;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC3A38;
	sub_82EBAD18(ctx, base);
loc_82EC3A38:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3a54
	if (ctx.cr6.eq) goto loc_82EC3A54;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC3A54;
	sub_82EBB0F0(ctx, base);
loc_82EC3A54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC3A64"))) PPC_WEAK_FUNC(sub_82EC3A64);
PPC_FUNC_IMPL(__imp__sub_82EC3A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC3A68"))) PPC_WEAK_FUNC(sub_82EC3A68);
PPC_FUNC_IMPL(__imp__sub_82EC3A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec3b0c
	if (!ctx.cr6.lt) goto loc_82EC3B0C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f13,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16240);
	ctx.f0.f64 = double(temp.f32);
loc_82EC3AB4:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec3ab4
	if (ctx.cr6.lt) goto loc_82EC3AB4;
loc_82EC3B0C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3b28
	if (ctx.cr6.eq) goto loc_82EC3B28;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC3B28;
	sub_82EBAD18(ctx, base);
loc_82EC3B28:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3b44
	if (ctx.cr6.eq) goto loc_82EC3B44;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC3B44;
	sub_82EBB0F0(ctx, base);
loc_82EC3B44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC3B54"))) PPC_WEAK_FUNC(sub_82EC3B54);
PPC_FUNC_IMPL(__imp__sub_82EC3B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC3B58"))) PPC_WEAK_FUNC(sub_82EC3B58);
PPC_FUNC_IMPL(__imp__sub_82EC3B58) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec3c34
	if (!ctx.cr6.lt) goto loc_82EC3C34;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f13,-17496(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17496);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-17704(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17704);
	ctx.f0.f64 = double(temp.f32);
loc_82EC3BA4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,12,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3FF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,22,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3FF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec3ba4
	if (ctx.cr6.lt) goto loc_82EC3BA4;
loc_82EC3C34:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3c50
	if (ctx.cr6.eq) goto loc_82EC3C50;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC3C50;
	sub_82EBAD18(ctx, base);
loc_82EC3C50:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3c6c
	if (ctx.cr6.eq) goto loc_82EC3C6C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC3C6C;
	sub_82EBB0F0(ctx, base);
loc_82EC3C6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC3C7C"))) PPC_WEAK_FUNC(sub_82EC3C7C);
PPC_FUNC_IMPL(__imp__sub_82EC3C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC3C80"))) PPC_WEAK_FUNC(sub_82EC3C80);
PPC_FUNC_IMPL(__imp__sub_82EC3C80) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec3d5c
	if (!ctx.cr6.lt) goto loc_82EC3D5C;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,-16240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16240);
	ctx.f0.f64 = double(temp.f32);
loc_82EC3CC4:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicl r9,r9,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicl r9,r9,48,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 48) & 0xFFFFFFFFFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec3cc4
	if (ctx.cr6.lt) goto loc_82EC3CC4;
loc_82EC3D5C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3d78
	if (ctx.cr6.eq) goto loc_82EC3D78;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC3D78;
	sub_82EBAD18(ctx, base);
loc_82EC3D78:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3d94
	if (ctx.cr6.eq) goto loc_82EC3D94;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC3D94;
	sub_82EBB0F0(ctx, base);
loc_82EC3D94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC3DA4"))) PPC_WEAK_FUNC(sub_82EC3DA4);
PPC_FUNC_IMPL(__imp__sub_82EC3DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC3DA8"))) PPC_WEAK_FUNC(sub_82EC3DA8);
PPC_FUNC_IMPL(__imp__sub_82EC3DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec3e6c
	if (!ctx.cr6.lt) goto loc_82EC3E6C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f12,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-17496(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17496);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2056);
	ctx.f0.f64 = double(temp.f32);
loc_82EC3DF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r9,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r9,30,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec3df8
	if (ctx.cr6.lt) goto loc_82EC3DF8;
loc_82EC3E6C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3e88
	if (ctx.cr6.eq) goto loc_82EC3E88;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC3E88;
	sub_82EBAD18(ctx, base);
loc_82EC3E88:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3ea4
	if (ctx.cr6.eq) goto loc_82EC3EA4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC3EA4;
	sub_82EBB0F0(ctx, base);
loc_82EC3EA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC3EB4"))) PPC_WEAK_FUNC(sub_82EC3EB4);
PPC_FUNC_IMPL(__imp__sub_82EC3EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC3EB8"))) PPC_WEAK_FUNC(sub_82EC3EB8);
PPC_FUNC_IMPL(__imp__sub_82EC3EB8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec3f38
	if (!ctx.cr6.lt) goto loc_82EC3F38;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,-18120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82EC3F00:
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec3f00
	if (ctx.cr6.lt) goto loc_82EC3F00;
loc_82EC3F38:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3f54
	if (ctx.cr6.eq) goto loc_82EC3F54;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC3F54;
	sub_82EBAD18(ctx, base);
loc_82EC3F54:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec3f70
	if (ctx.cr6.eq) goto loc_82EC3F70;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC3F70;
	sub_82EBB0F0(ctx, base);
loc_82EC3F70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC3F80"))) PPC_WEAK_FUNC(sub_82EC3F80);
PPC_FUNC_IMPL(__imp__sub_82EC3F80) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec4060
	if (!ctx.cr6.lt) goto loc_82EC4060;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f12,-18120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-17496(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17496);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2056);
	ctx.f0.f64 = double(temp.f32);
loc_82EC3FD4:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r9,27,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r9,30,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec3fd4
	if (ctx.cr6.lt) goto loc_82EC3FD4;
loc_82EC4060:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec407c
	if (ctx.cr6.eq) goto loc_82EC407C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC407C;
	sub_82EBAD18(ctx, base);
loc_82EC407C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4098
	if (ctx.cr6.eq) goto loc_82EC4098;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC4098;
	sub_82EBB0F0(ctx, base);
loc_82EC4098:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC40A8"))) PPC_WEAK_FUNC(sub_82EC40A8);
PPC_FUNC_IMPL(__imp__sub_82EC40A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec4168
	if (!ctx.cr6.lt) goto loc_82EC4168;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f13,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16060);
	ctx.f0.f64 = double(temp.f32);
loc_82EC40F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r9,28,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec40f4
	if (ctx.cr6.lt) goto loc_82EC40F4;
loc_82EC4168:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4184
	if (ctx.cr6.eq) goto loc_82EC4184;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC4184;
	sub_82EBAD18(ctx, base);
loc_82EC4184:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec41a0
	if (ctx.cr6.eq) goto loc_82EC41A0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC41A0;
	sub_82EBB0F0(ctx, base);
loc_82EC41A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC41B0"))) PPC_WEAK_FUNC(sub_82EC41B0);
PPC_FUNC_IMPL(__imp__sub_82EC41B0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82ec4250
	if (!ctx.cr6.lt) goto loc_82EC4250;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-18120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
loc_82EC41F4:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec41f4
	if (ctx.cr6.lt) goto loc_82EC41F4;
loc_82EC4250:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec426c
	if (ctx.cr6.eq) goto loc_82EC426C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC426C;
	sub_82EBAD18(ctx, base);
loc_82EC426C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4288
	if (ctx.cr6.eq) goto loc_82EC4288;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC4288;
	sub_82EBB0F0(ctx, base);
loc_82EC4288:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC4298"))) PPC_WEAK_FUNC(sub_82EC4298);
PPC_FUNC_IMPL(__imp__sub_82EC4298) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82ec4304
	goto loc_82EC4304;
loc_82EC42CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
loc_82EC4304:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ec42cc
	if (ctx.cr6.lt) goto loc_82EC42CC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4328
	if (ctx.cr6.eq) goto loc_82EC4328;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC4328;
	sub_82EBAD18(ctx, base);
loc_82EC4328:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4344
	if (ctx.cr6.eq) goto loc_82EC4344;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC4344;
	sub_82EBB0F0(ctx, base);
loc_82EC4344:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC4354"))) PPC_WEAK_FUNC(sub_82EC4354);
PPC_FUNC_IMPL(__imp__sub_82EC4354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC4358"))) PPC_WEAK_FUNC(sub_82EC4358);
PPC_FUNC_IMPL(__imp__sub_82EC4358) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec43d8
	if (!ctx.cr6.lt) goto loc_82EC43D8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f13,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
loc_82EC43A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec43a0
	if (ctx.cr6.lt) goto loc_82EC43A0;
loc_82EC43D8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec43f4
	if (ctx.cr6.eq) goto loc_82EC43F4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC43F4;
	sub_82EBAD18(ctx, base);
loc_82EC43F4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4410
	if (ctx.cr6.eq) goto loc_82EC4410;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC4410;
	sub_82EBB0F0(ctx, base);
loc_82EC4410:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC4420"))) PPC_WEAK_FUNC(sub_82EC4420);
PPC_FUNC_IMPL(__imp__sub_82EC4420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec44b4
	if (!ctx.cr6.lt) goto loc_82EC44B4;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,-18120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
loc_82EC4464:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec4464
	if (ctx.cr6.lt) goto loc_82EC4464;
loc_82EC44B4:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec44d0
	if (ctx.cr6.eq) goto loc_82EC44D0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC44D0;
	sub_82EBAD18(ctx, base);
loc_82EC44D0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec44ec
	if (ctx.cr6.eq) goto loc_82EC44EC;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC44EC;
	sub_82EBB0F0(ctx, base);
loc_82EC44EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC44FC"))) PPC_WEAK_FUNC(sub_82EC44FC);
PPC_FUNC_IMPL(__imp__sub_82EC44FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC4500"))) PPC_WEAK_FUNC(sub_82EC4500);
PPC_FUNC_IMPL(__imp__sub_82EC4500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec4598
	if (!ctx.cr6.lt) goto loc_82EC4598;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,-16060(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16060);
	ctx.f0.f64 = double(temp.f32);
loc_82EC4540:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec4540
	if (ctx.cr6.lt) goto loc_82EC4540;
loc_82EC4598:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec45b4
	if (ctx.cr6.eq) goto loc_82EC45B4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC45B4;
	sub_82EBAD18(ctx, base);
loc_82EC45B4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec45d0
	if (ctx.cr6.eq) goto loc_82EC45D0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC45D0;
	sub_82EBB0F0(ctx, base);
loc_82EC45D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC45E0"))) PPC_WEAK_FUNC(sub_82EC45E0);
PPC_FUNC_IMPL(__imp__sub_82EC45E0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec4668
	if (!ctx.cr6.lt) goto loc_82EC4668;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f13,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16240);
	ctx.f0.f64 = double(temp.f32);
loc_82EC462C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec462c
	if (ctx.cr6.lt) goto loc_82EC462C;
loc_82EC4668:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4684
	if (ctx.cr6.eq) goto loc_82EC4684;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC4684;
	sub_82EBAD18(ctx, base);
loc_82EC4684:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec46a0
	if (ctx.cr6.eq) goto loc_82EC46A0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC46A0;
	sub_82EBB0F0(ctx, base);
loc_82EC46A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC46B0"))) PPC_WEAK_FUNC(sub_82EC46B0);
PPC_FUNC_IMPL(__imp__sub_82EC46B0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec4788
	if (!ctx.cr6.lt) goto loc_82EC4788;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// li r4,-128
	ctx.r4.s64 = -128;
	// lfs f13,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-17648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17648);
	ctx.f0.f64 = double(temp.f32);
loc_82EC4704:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// subf r7,r4,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r4.s64;
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r31,r5
	ctx.r31.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r7,r31,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec4704
	if (ctx.cr6.lt) goto loc_82EC4704;
loc_82EC4788:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec47a4
	if (ctx.cr6.eq) goto loc_82EC47A4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC47A4;
	sub_82EBAD18(ctx, base);
loc_82EC47A4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec47c0
	if (ctx.cr6.eq) goto loc_82EC47C0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC47C0;
	sub_82EBB0F0(ctx, base);
loc_82EC47C0:
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

__attribute__((alias("__imp__sub_82EC47D4"))) PPC_WEAK_FUNC(sub_82EC47D4);
PPC_FUNC_IMPL(__imp__sub_82EC47D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC47D8"))) PPC_WEAK_FUNC(sub_82EC47D8);
PPC_FUNC_IMPL(__imp__sub_82EC47D8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec48e8
	if (!ctx.cr6.lt) goto loc_82EC48E8;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// li r4,-16
	ctx.r4.s64 = -16;
	// lfs f12,2052(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2052);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16060(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -16060);
	ctx.f0.f64 = double(temp.f32);
loc_82EC4834:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r9,r9,30,2,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFF8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// srawi r8,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 3;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// subf r7,r4,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r4.s64;
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r31,r5
	ctx.r31.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r7,r31,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r9,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3FFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec4834
	if (ctx.cr6.lt) goto loc_82EC4834;
loc_82EC48E8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4904
	if (ctx.cr6.eq) goto loc_82EC4904;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC4904;
	sub_82EBAD18(ctx, base);
loc_82EC4904:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4920
	if (ctx.cr6.eq) goto loc_82EC4920;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC4920;
	sub_82EBB0F0(ctx, base);
loc_82EC4920:
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

__attribute__((alias("__imp__sub_82EC4934"))) PPC_WEAK_FUNC(sub_82EC4934);
PPC_FUNC_IMPL(__imp__sub_82EC4934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC4938"))) PPC_WEAK_FUNC(sub_82EC4938);
PPC_FUNC_IMPL(__imp__sub_82EC4938) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec4a30
	if (!ctx.cr6.lt) goto loc_82EC4A30;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// li r4,-128
	ctx.r4.s64 = -128;
	// lfs f12,-18120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-17648(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17648);
	ctx.f0.f64 = double(temp.f32);
loc_82EC4994:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// rlwinm r9,r8,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// subf r7,r4,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r4.s64;
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r31,r5
	ctx.r31.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r7,r31,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec4994
	if (ctx.cr6.lt) goto loc_82EC4994;
loc_82EC4A30:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4a4c
	if (ctx.cr6.eq) goto loc_82EC4A4C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC4A4C;
	sub_82EBAD18(ctx, base);
loc_82EC4A4C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4a68
	if (ctx.cr6.eq) goto loc_82EC4A68;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC4A68;
	sub_82EBB0F0(ctx, base);
loc_82EC4A68:
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

__attribute__((alias("__imp__sub_82EC4A7C"))) PPC_WEAK_FUNC(sub_82EC4A7C);
PPC_FUNC_IMPL(__imp__sub_82EC4A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC4A80"))) PPC_WEAK_FUNC(sub_82EC4A80);
PPC_FUNC_IMPL(__imp__sub_82EC4A80) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82ec4bb4
	if (!ctx.cr6.lt) goto loc_82EC4BB4;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r10,-128
	ctx.r10.s64 = -128;
	// lfs f0,-17648(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17648);
	ctx.f0.f64 = double(temp.f32);
loc_82EC4AD0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r8,r7,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// extsb r31,r8
	ctx.r31.s64 = ctx.r8.s8;
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r31,r31
	ctx.r31.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r31,r31,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r9,r7,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// extsb r31,r9
	ctx.r31.s64 = ctx.r9.s8;
	// extsb r30,r8
	ctx.r30.s64 = ctx.r8.s8;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r7,r7,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFF;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// cntlzw r31,r31
	ctx.r31.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r8,r31,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// add r9,r30,r7
	ctx.r9.u64 = ctx.r30.u64 + ctx.r7.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,8(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec4ad0
	if (ctx.cr6.lt) goto loc_82EC4AD0;
loc_82EC4BB4:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4bd0
	if (ctx.cr6.eq) goto loc_82EC4BD0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC4BD0;
	sub_82EBAD18(ctx, base);
loc_82EC4BD0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4bec
	if (ctx.cr6.eq) goto loc_82EC4BEC;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC4BEC;
	sub_82EBB0F0(ctx, base);
loc_82EC4BEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82EC4C04"))) PPC_WEAK_FUNC(sub_82EC4C04);
PPC_FUNC_IMPL(__imp__sub_82EC4C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC4C08"))) PPC_WEAK_FUNC(sub_82EC4C08);
PPC_FUNC_IMPL(__imp__sub_82EC4C08) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec4ce0
	if (!ctx.cr6.lt) goto loc_82EC4CE0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// li r4,-32768
	ctx.r4.s64 = -32768;
	// lfs f13,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18116(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18116);
	ctx.f0.f64 = double(temp.f32);
loc_82EC4C5C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// rlwinm r8,r9,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// subf r7,r4,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r4.s64;
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r31,r5
	ctx.r31.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r7,r31,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec4c5c
	if (ctx.cr6.lt) goto loc_82EC4C5C;
loc_82EC4CE0:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4cfc
	if (ctx.cr6.eq) goto loc_82EC4CFC;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC4CFC;
	sub_82EBAD18(ctx, base);
loc_82EC4CFC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4d18
	if (ctx.cr6.eq) goto loc_82EC4D18;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC4D18;
	sub_82EBB0F0(ctx, base);
loc_82EC4D18:
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

__attribute__((alias("__imp__sub_82EC4D2C"))) PPC_WEAK_FUNC(sub_82EC4D2C);
PPC_FUNC_IMPL(__imp__sub_82EC4D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC4D30"))) PPC_WEAK_FUNC(sub_82EC4D30);
PPC_FUNC_IMPL(__imp__sub_82EC4D30) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82ec4e70
	if (!ctx.cr6.lt) goto loc_82EC4E70;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r7,-512
	ctx.r7.s64 = -512;
	// lfs f13,-17496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17496);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-17708(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17708);
	ctx.f0.f64 = double(temp.f32);
loc_82EC4D88:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r8,r10,28,4,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFC0;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r4,r10,18,14,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFC0;
	// srawi r10,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 6;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// srawi r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// subf r4,r7,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r7.s64;
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// srawi r8,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 6;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subf r30,r7,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r7.s64;
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cntlzw r30,r30
	ctx.r30.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// subf r31,r7,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r7.s64;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r30,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x1;
	// cntlzw r31,r31
	ctx.r31.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r31,r31,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec4d88
	if (ctx.cr6.lt) goto loc_82EC4D88;
loc_82EC4E70:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4e8c
	if (ctx.cr6.eq) goto loc_82EC4E8C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC4E8C;
	sub_82EBAD18(ctx, base);
loc_82EC4E8C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec4ea8
	if (ctx.cr6.eq) goto loc_82EC4EA8;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC4EA8;
	sub_82EBB0F0(ctx, base);
loc_82EC4EA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82EC4EC0"))) PPC_WEAK_FUNC(sub_82EC4EC0);
PPC_FUNC_IMPL(__imp__sub_82EC4EC0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82ec5000
	if (!ctx.cr6.lt) goto loc_82EC5000;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// lfs f0,-18116(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18116);
	ctx.f0.f64 = double(temp.f32);
loc_82EC4F10:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// rldicl r8,r7,16,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFF;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subf r30,r10,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rldicl r31,r7,48,16
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u64, 48) & 0xFFFFFFFFFFFF;
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cntlzw r30,r30
	ctx.r30.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// rlwinm r31,r30,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x1;
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// subf r31,r10,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r10.s64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cntlzw r8,r31
	ctx.r8.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// rldicl r8,r7,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// add r9,r30,r7
	ctx.r9.u64 = ctx.r30.u64 + ctx.r7.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,8(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec4f10
	if (ctx.cr6.lt) goto loc_82EC4F10;
loc_82EC5000:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec501c
	if (ctx.cr6.eq) goto loc_82EC501C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC501C;
	sub_82EBAD18(ctx, base);
loc_82EC501C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec5038
	if (ctx.cr6.eq) goto loc_82EC5038;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC5038;
	sub_82EBB0F0(ctx, base);
loc_82EC5038:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82EC5050"))) PPC_WEAK_FUNC(sub_82EC5050);
PPC_FUNC_IMPL(__imp__sub_82EC5050) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec50d8
	if (!ctx.cr6.lt) goto loc_82EC50D8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f13,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16240);
	ctx.f0.f64 = double(temp.f32);
loc_82EC509C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec509c
	if (ctx.cr6.lt) goto loc_82EC509C;
loc_82EC50D8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec50f4
	if (ctx.cr6.eq) goto loc_82EC50F4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC50F4;
	sub_82EBAD18(ctx, base);
loc_82EC50F4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec5110
	if (ctx.cr6.eq) goto loc_82EC5110;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC5110;
	sub_82EBB0F0(ctx, base);
loc_82EC5110:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC5120"))) PPC_WEAK_FUNC(sub_82EC5120);
PPC_FUNC_IMPL(__imp__sub_82EC5120) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec5188
	if (!ctx.cr6.lt) goto loc_82EC5188;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82EC5164:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec5164
	if (ctx.cr6.lt) goto loc_82EC5164;
loc_82EC5188:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec51a4
	if (ctx.cr6.eq) goto loc_82EC51A4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC51A4;
	sub_82EBAD18(ctx, base);
loc_82EC51A4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec51c0
	if (ctx.cr6.eq) goto loc_82EC51C0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC51C0;
	sub_82EBB0F0(ctx, base);
loc_82EC51C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC51D0"))) PPC_WEAK_FUNC(sub_82EC51D0);
PPC_FUNC_IMPL(__imp__sub_82EC51D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EC51D8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82ec524c
	if (!ctx.cr6.lt) goto loc_82EC524C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
loc_82EC5220:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ece850
	ctx.lr = 0x82EC5230;
	sub_82ECE850(ctx, base);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stfs f31,4(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// blt cr6,0x82ec5220
	if (ctx.cr6.lt) goto loc_82EC5220;
loc_82EC524C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec526c
	if (ctx.cr6.eq) goto loc_82EC526C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC526C;
	sub_82EBAD18(ctx, base);
loc_82EC526C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec528c
	if (ctx.cr6.eq) goto loc_82EC528C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC528C;
	sub_82EBB0F0(ctx, base);
loc_82EC528C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC5298"))) PPC_WEAK_FUNC(sub_82EC5298);
PPC_FUNC_IMPL(__imp__sub_82EC5298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EC52A0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82ec5310
	if (!ctx.cr6.lt) goto loc_82EC5310;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
loc_82EC52E8:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ece850
	ctx.lr = 0x82EC52F8;
	sub_82ECE850(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82ec52e8
	if (ctx.cr6.lt) goto loc_82EC52E8;
loc_82EC5310:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec5330
	if (ctx.cr6.eq) goto loc_82EC5330;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC5330;
	sub_82EBAD18(ctx, base);
loc_82EC5330:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec5350
	if (ctx.cr6.eq) goto loc_82EC5350;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC5350;
	sub_82EBB0F0(ctx, base);
loc_82EC5350:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC535C"))) PPC_WEAK_FUNC(sub_82EC535C);
PPC_FUNC_IMPL(__imp__sub_82EC535C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC5360"))) PPC_WEAK_FUNC(sub_82EC5360);
PPC_FUNC_IMPL(__imp__sub_82EC5360) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ece850
	ctx.lr = 0x82EC53A8;
	sub_82ECE850(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec53c0
	if (ctx.cr6.eq) goto loc_82EC53C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC53C0;
	sub_82EBAD18(ctx, base);
loc_82EC53C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec53d8
	if (ctx.cr6.eq) goto loc_82EC53D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC53D8;
	sub_82EBB0F0(ctx, base);
loc_82EC53D8:
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

__attribute__((alias("__imp__sub_82EC53F0"))) PPC_WEAK_FUNC(sub_82EC53F0);
PPC_FUNC_IMPL(__imp__sub_82EC53F0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec5458
	if (!ctx.cr6.lt) goto loc_82EC5458;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82EC5434:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec5434
	if (ctx.cr6.lt) goto loc_82EC5434;
loc_82EC5458:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec5474
	if (ctx.cr6.eq) goto loc_82EC5474;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC5474;
	sub_82EBAD18(ctx, base);
loc_82EC5474:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec5490
	if (ctx.cr6.eq) goto loc_82EC5490;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC5490;
	sub_82EBB0F0(ctx, base);
loc_82EC5490:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC54A0"))) PPC_WEAK_FUNC(sub_82EC54A0);
PPC_FUNC_IMPL(__imp__sub_82EC54A0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec550c
	if (!ctx.cr6.lt) goto loc_82EC550C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82EC54E4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec54e4
	if (ctx.cr6.lt) goto loc_82EC54E4;
loc_82EC550C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec5528
	if (ctx.cr6.eq) goto loc_82EC5528;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC5528;
	sub_82EBAD18(ctx, base);
loc_82EC5528:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec5544
	if (ctx.cr6.eq) goto loc_82EC5544;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC5544;
	sub_82EBB0F0(ctx, base);
loc_82EC5544:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC5554"))) PPC_WEAK_FUNC(sub_82EC5554);
PPC_FUNC_IMPL(__imp__sub_82EC5554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC5558"))) PPC_WEAK_FUNC(sub_82EC5558);
PPC_FUNC_IMPL(__imp__sub_82EC5558) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EC55A0;
	sub_82CB1160(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec55b8
	if (ctx.cr6.eq) goto loc_82EC55B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC55B8;
	sub_82EBAD18(ctx, base);
loc_82EC55B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec55d0
	if (ctx.cr6.eq) goto loc_82EC55D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC55D0;
	sub_82EBB0F0(ctx, base);
loc_82EC55D0:
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

__attribute__((alias("__imp__sub_82EC55E8"))) PPC_WEAK_FUNC(sub_82EC55E8);
PPC_FUNC_IMPL(__imp__sub_82EC55E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec5684
	if (!ctx.cr6.lt) goto loc_82EC5684;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,-16240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16240);
	ctx.f0.f64 = double(temp.f32);
loc_82EC562C:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec562c
	if (ctx.cr6.lt) goto loc_82EC562C;
loc_82EC5684:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec56a0
	if (ctx.cr6.eq) goto loc_82EC56A0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC56A0;
	sub_82EBAD18(ctx, base);
loc_82EC56A0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec56bc
	if (ctx.cr6.eq) goto loc_82EC56BC;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC56BC;
	sub_82EBB0F0(ctx, base);
loc_82EC56BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC56CC"))) PPC_WEAK_FUNC(sub_82EC56CC);
PPC_FUNC_IMPL(__imp__sub_82EC56CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC56D0"))) PPC_WEAK_FUNC(sub_82EC56D0);
PPC_FUNC_IMPL(__imp__sub_82EC56D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec578c
	if (!ctx.cr6.lt) goto loc_82EC578C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f13,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16240);
	ctx.f0.f64 = double(temp.f32);
loc_82EC5718:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x82ec5718
	if (ctx.cr6.lt) goto loc_82EC5718;
loc_82EC578C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec57a8
	if (ctx.cr6.eq) goto loc_82EC57A8;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC57A8;
	sub_82EBAD18(ctx, base);
loc_82EC57A8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec57c4
	if (ctx.cr6.eq) goto loc_82EC57C4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC57C4;
	sub_82EBB0F0(ctx, base);
loc_82EC57C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC57D4"))) PPC_WEAK_FUNC(sub_82EC57D4);
PPC_FUNC_IMPL(__imp__sub_82EC57D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC57D8"))) PPC_WEAK_FUNC(sub_82EC57D8);
PPC_FUNC_IMPL(__imp__sub_82EC57D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EC57E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC57F8;
	sub_82EBA6B0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,2072
	ctx.r10.s64 = ctx.r10.s64 + 2072;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82299698
	ctx.lr = 0x82EC5854;
	sub_82299698(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ec5864
	if (!ctx.cr0.eq) goto loc_82EC5864;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
loc_82EC5864:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-75
	ctx.xer.ca = ctx.r11.u32 > 74;
	ctx.r11.s64 = ctx.r11.s64 + -75;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec58a4
	if (ctx.cr0.eq) goto loc_82EC58A4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82ec5894
	if (ctx.cr6.eq) goto loc_82EC5894;
	// addis r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -33030144;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ec58a4
	if (ctx.cr0.eq) goto loc_82EC58A4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ec58b0
	if (!ctx.cr6.eq) goto loc_82EC58B0;
loc_82EC5894:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// b 0x82ec58b0
	goto loc_82EC58B0;
loc_82EC58A4:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_82EC58B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC58BC"))) PPC_WEAK_FUNC(sub_82EC58BC);
PPC_FUNC_IMPL(__imp__sub_82EC58BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC58C0"))) PPC_WEAK_FUNC(sub_82EC58C0);
PPC_FUNC_IMPL(__imp__sub_82EC58C0) {
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
	// bl 0x82cb6ae8
	ctx.lr = 0x82EC58D4;
	__savefpr_28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ec5bc0
	if (ctx.cr6.eq) goto loc_82EC5BC0;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ec5bc0
	if (ctx.cr6.eq) goto loc_82EC5BC0;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r6,136(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// ori r4,r9,75
	ctx.r4.u64 = ctx.r9.u64 | 75;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mullw r8,r6,r3
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r31,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// blt cr6,0x82ec5bb8
	if (ctx.cr6.lt) goto loc_82EC5BB8;
	// lis r6,6184
	ctx.r6.s64 = 405274624;
	// ori r6,r6,76
	ctx.r6.u64 = ctx.r6.u64 | 76;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82ec5b04
	if (!ctx.cr6.gt) goto loc_82EC5B04;
	// addis r8,r8,-6688
	ctx.r8.s64 = ctx.r8.s64 + -438304768;
	// addi r8,r8,-75
	ctx.r8.s64 = ctx.r8.s64 + -75;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x82ec5bb8
	if (ctx.cr6.gt) goto loc_82EC5BB8;
	// lwz r8,140(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ec5bb8
	if (!ctx.cr6.lt) goto loc_82EC5BB8;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f6,2116(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2116);
	ctx.f6.f64 = double(temp.f32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lfs f7,2112(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2112);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f8,2108(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2108);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f9,2104(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,2100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,6380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,2096(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2096);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2092(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2092);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2088(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2088);
	ctx.f13.f64 = double(temp.f32);
loc_82EC59B4:
	// lfs f5,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// lfs f2,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// lfs f31,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f31,f12
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f28,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f5,f2,f12,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmsubs f3,f31,f10,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 - ctx.f3.f64));
	// fmadds f2,f31,f7,f1
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f1,f28,f13,f29
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f29.f64));
	// fmadds f5,f30,f13,f5
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fnmsubs f3,f28,f8,f3
	ctx.f3.f64 = double(float(-(ctx.f28.f64 * ctx.f8.f64 - ctx.f3.f64)));
	// fmsubs f2,f28,f10,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 - ctx.f2.f64));
	// fmadds f4,f4,f11,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fadds f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fctiwz f5,f5
	ctx.f5.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f5,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f5.u64);
	// fctiwz f5,f3
	ctx.f5.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// lwz r9,-60(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// fctiwz f3,f2
	ctx.f3.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f5,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f5.u64);
	// stfd f3,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f3.u64);
	// lwz r6,-52(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r8,-60(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// fctiwz f5,f4
	ctx.f5.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f5,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f5.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// addic. r5,r5,16
	ctx.xer.ca = ctx.r5.u32 > 4294967279;
	ctx.r5.s64 = ctx.r5.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r9,r6,128
	ctx.r9.s64 = ctx.r6.s64 + 128;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bge 0x82ec5a58
	if (!ctx.cr0.lt) goto loc_82EC5A58;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ec5a64
	goto loc_82EC5A64;
loc_82EC5A58:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// ble cr6,0x82ec5a64
	if (!ctx.cr6.gt) goto loc_82EC5A64;
	// li r5,255
	ctx.r5.s64 = 255;
loc_82EC5A64:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82ec5a74
	if (!ctx.cr6.lt) goto loc_82EC5A74;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ec5a80
	goto loc_82EC5A80;
loc_82EC5A74:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// ble cr6,0x82ec5a80
	if (!ctx.cr6.gt) goto loc_82EC5A80;
	// li r4,255
	ctx.r4.s64 = 255;
loc_82EC5A80:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82ec5a90
	if (!ctx.cr6.lt) goto loc_82EC5A90;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82ec5a9c
	goto loc_82EC5A9C;
loc_82EC5A90:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x82ec5a9c
	if (!ctx.cr6.gt) goto loc_82EC5A9C;
	// li r8,255
	ctx.r8.s64 = 255;
loc_82EC5A9C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82ec5aac
	if (!ctx.cr6.lt) goto loc_82EC5AAC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82ec5ab8
	goto loc_82EC5AB8;
loc_82EC5AAC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x82ec5ab8
	if (!ctx.cr6.gt) goto loc_82EC5AB8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_82EC5AB8:
	// lwz r6,168(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lwz r31,172(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// slw r8,r8,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r31.u8 & 0x3F));
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// sth r8,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// lwz r6,168(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// slw r6,r4,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// sth r9,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r9.u16);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ec59b4
	if (ctx.cr6.lt) goto loc_82EC59B4;
	// b 0x82ec5bb8
	goto loc_82EC5BB8;
loc_82EC5B04:
	// lwz r8,140(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ec5bb8
	if (!ctx.cr6.lt) goto loc_82EC5BB8;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,-18308(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18308);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
loc_82EC5B20:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,172(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f11,f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lwz r8,168(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f12.u64);
	// fctiwz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f12,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r5,-60(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// slw r8,r5,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// sth r8,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,168(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lwz r6,172(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// fmadds f11,f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f11.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// slw r8,r5,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f12.u64);
	// lwz r5,-60(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// sth r8,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r8,140(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ec5b20
	if (ctx.cr6.lt) goto loc_82EC5B20;
loc_82EC5BB8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
loc_82EC5BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b34
	ctx.lr = 0x82EC5BCC;
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

__attribute__((alias("__imp__sub_82EC5BDC"))) PPC_WEAK_FUNC(sub_82EC5BDC);
PPC_FUNC_IMPL(__imp__sub_82EC5BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC5BE0"))) PPC_WEAK_FUNC(sub_82EC5BE0);
PPC_FUNC_IMPL(__imp__sub_82EC5BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EC5BE8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ae8
	ctx.lr = 0x82EC5BF0;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ec5c1c
	if (!ctx.cr6.eq) goto loc_82EC5C1C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ec6010
	goto loc_82EC6010;
loc_82EC5C1C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ec5c4c
	if (ctx.cr6.lt) goto loc_82EC5C4C;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ec5c4c
	if (!ctx.cr6.lt) goto loc_82EC5C4C;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ec5c4c
	if (ctx.cr6.lt) goto loc_82EC5C4C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ec600c
	if (ctx.cr6.lt) goto loc_82EC600C;
loc_82EC5C4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ec58c0
	ctx.lr = 0x82EC5C54;
	sub_82EC58C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ec6010
	if (ctx.cr0.lt) goto loc_82EC6010;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// beq cr6,0x82ec600c
	if (ctx.cr6.eq) goto loc_82EC600C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,75
	ctx.r5.u64 = ctx.r5.u64 | 75;
	// rlwinm r8,r4,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// blt cr6,0x82ec600c
	if (ctx.cr6.lt) goto loc_82EC600C;
	// lis r7,6184
	ctx.r7.s64 = 405274624;
	// ori r7,r7,76
	ctx.r7.u64 = ctx.r7.u64 | 76;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82ec5f30
	if (!ctx.cr6.gt) goto loc_82EC5F30;
	// addis r8,r8,-6688
	ctx.r8.s64 = ctx.r8.s64 + -438304768;
	// addi r8,r8,-75
	ctx.r8.s64 = ctx.r8.s64 + -75;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x82ec600c
	if (ctx.cr6.gt) goto loc_82EC600C;
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ec600c
	if (!ctx.cr6.lt) goto loc_82EC600C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f11,6048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lfs f12,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f29,2136(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2136);
	ctx.f29.f64 = double(temp.f32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f30,2132(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2132);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2128);
	ctx.f31.f64 = double(temp.f32);
	// lfs f4,2124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,2120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2120);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-17348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17348);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,9080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9080);
	ctx.f3.f64 = double(temp.f32);
loc_82EC5D34:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// rlwinm r4,r8,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r6,r8,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r29,r7,8,16,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// stfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// rlwinm r28,r7,24,8,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 | ctx.r28.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r30,r8,8,16,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// srw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// or r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 | ctx.r8.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// srw r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// srw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r5.u8 & 0x3F));
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// rlwinm r8,r7,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// srw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fsubs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f5,f9,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmuls f28,f0,f4
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f6,f13,f29
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fsubs f13,f28,f9
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f9.f64));
	// fadds f0,f28,f8
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f8.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f10,f6,f28
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f28.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82ec5e40
	if (!ctx.cr6.lt) goto loc_82EC5E40;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x82ec5e4c
	goto loc_82EC5E4C;
loc_82EC5E40:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82ec5e4c
	if (!ctx.cr6.gt) goto loc_82EC5E4C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82EC5E4C:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82ec5e60
	if (!ctx.cr6.lt) goto loc_82EC5E60;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x82ec5e6c
	goto loc_82EC5E6C;
loc_82EC5E60:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82ec5e6c
	if (!ctx.cr6.gt) goto loc_82EC5E6C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82EC5E6C:
	// stfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82ec5e80
	if (!ctx.cr6.lt) goto loc_82EC5E80;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x82ec5e8c
	goto loc_82EC5E8C;
loc_82EC5E80:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x82ec5e8c
	if (!ctx.cr6.gt) goto loc_82EC5E8C;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_82EC5E8C:
	// fmuls f13,f5,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fadds f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fadds f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fsubs f13,f9,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82ec5ec4
	if (!ctx.cr6.lt) goto loc_82EC5EC4;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x82ec5ed0
	goto loc_82EC5ED0;
loc_82EC5EC4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82ec5ed0
	if (!ctx.cr6.gt) goto loc_82EC5ED0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82EC5ED0:
	// stfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82ec5ee4
	if (!ctx.cr6.lt) goto loc_82EC5EE4;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x82ec5ef0
	goto loc_82EC5EF0;
loc_82EC5EE4:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82ec5ef0
	if (!ctx.cr6.gt) goto loc_82EC5EF0;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82EC5EF0:
	// stfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82ec5f04
	if (!ctx.cr6.lt) goto loc_82EC5F04;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x82ec5f10
	goto loc_82EC5F10;
loc_82EC5F04:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x82ec5f10
	if (!ctx.cr6.gt) goto loc_82EC5F10;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_82EC5F10:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stfs f10,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ec5d34
	if (ctx.cr6.lt) goto loc_82EC5D34;
	// b 0x82ec600c
	goto loc_82EC600C;
loc_82EC5F30:
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ec600c
	if (!ctx.cr6.lt) goto loc_82EC600C;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,-18120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
loc_82EC5F4C:
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// lhz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// srw r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// stfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// srw r8,r8,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// srw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// srw r3,r7,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ec5f4c
	if (ctx.cr6.lt) goto loc_82EC5F4C;
loc_82EC600C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EC6010:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b34
	ctx.lr = 0x82EC601C;
	__restfpr_28(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6020"))) PPC_WEAK_FUNC(sub_82EC6020);
PPC_FUNC_IMPL(__imp__sub_82EC6020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EC6028;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ec6054
	if (ctx.cr6.eq) goto loc_82EC6054;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eb9da8
	ctx.lr = 0x82EC6050;
	sub_82EB9DA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EC6054:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec6070
	if (ctx.cr6.eq) goto loc_82EC6070;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebada8
	ctx.lr = 0x82EC606C;
	sub_82EBADA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EC6070:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82ec5be0
	ctx.lr = 0x82EC60A0;
	sub_82EC5BE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ec60d8
	if (ctx.cr0.lt) goto loc_82EC60D8;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EC60D0;
	sub_82CB1160(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_82EC60D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC60E0"))) PPC_WEAK_FUNC(sub_82EC60E0);
PPC_FUNC_IMPL(__imp__sub_82EC60E0) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x82ec5be0
	ctx.lr = 0x82EC6114;
	sub_82EC5BE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ec6174
	if (ctx.cr0.lt) goto loc_82EC6174;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EC6144;
	sub_82CB1160(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec615c
	if (ctx.cr6.eq) goto loc_82EC615C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebad18
	ctx.lr = 0x82EC615C;
	sub_82EBAD18(ctx, base);
loc_82EC615C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec6174
	if (ctx.cr6.eq) goto loc_82EC6174;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC6174;
	sub_82EBB0F0(ctx, base);
loc_82EC6174:
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

__attribute__((alias("__imp__sub_82EC618C"))) PPC_WEAK_FUNC(sub_82EC618C);
PPC_FUNC_IMPL(__imp__sub_82EC618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6190"))) PPC_WEAK_FUNC(sub_82EC6190);
PPC_FUNC_IMPL(__imp__sub_82EC6190) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC61B8;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,2140
	ctx.r11.s64 = ctx.r11.s64 + 2140;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-18
	ctx.xer.ca = ctx.r11.u32 > 17;
	ctx.r11.s64 = ctx.r11.s64 + -18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec6218
	if (ctx.cr0.eq) goto loc_82EC6218;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82ec6200
	if (ctx.cr6.eq) goto loc_82EC6200;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82ec6238
	if (!ctx.cr6.eq) goto loc_82EC6238;
	// lis r11,-32015
	ctx.r11.s64 = -2098135040;
	// lis r10,-32015
	ctx.r10.s64 = -2098135040;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,21728
	ctx.r11.s64 = ctx.r11.s64 + 21728;
	// addi r10,r10,21680
	ctx.r10.s64 = ctx.r10.s64 + 21680;
	// b 0x82ec622c
	goto loc_82EC622C;
loc_82EC6200:
	// lis r11,-32015
	ctx.r11.s64 = -2098135040;
	// lis r10,-32015
	ctx.r10.s64 = -2098135040;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,21704
	ctx.r11.s64 = ctx.r11.s64 + 21704;
	// addi r10,r10,21656
	ctx.r10.s64 = ctx.r10.s64 + 21656;
	// b 0x82ec622c
	goto loc_82EC622C;
loc_82EC6218:
	// lis r11,-32015
	ctx.r11.s64 = -2098135040;
	// lis r10,-32015
	ctx.r10.s64 = -2098135040;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,19056
	ctx.r11.s64 = ctx.r11.s64 + 19056;
	// addi r10,r10,17544
	ctx.r10.s64 = ctx.r10.s64 + 17544;
loc_82EC622C:
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
loc_82EC6238:
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82cb1160
	ctx.lr = 0x82EC6248;
	sub_82CB1160(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r8,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r8.u32);
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r7,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r7.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// subf r9,r8,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// stw r7,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// stw r7,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r7.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stw r6,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EC6338"))) PPC_WEAK_FUNC(sub_82EC6338);
PPC_FUNC_IMPL(__imp__sub_82EC6338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EC6340;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,2140
	ctx.r11.s64 = ctx.r11.s64 + 2140;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ec63ac
	if (ctx.cr6.eq) goto loc_82EC63AC;
	// lwz r28,248(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ec63ac
	if (ctx.cr6.eq) goto loc_82EC63AC;
	// lwz r29,212(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// b 0x82ec63a0
	goto loc_82EC63A0;
loc_82EC6374:
	// lwz r30,200(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// b 0x82ec6390
	goto loc_82EC6390;
loc_82EC637C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x822996c0
	ctx.lr = 0x82EC6388;
	sub_822996C0(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
loc_82EC6390:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ec637c
	if (ctx.cr6.lt) goto loc_82EC637C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82EC63A0:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ec6374
	if (ctx.cr6.lt) goto loc_82EC6374;
loc_82EC63AC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822996c0
	ctx.lr = 0x82EC63B8;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x822996c0
	ctx.lr = 0x82EC63C4;
	sub_822996C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eba930
	ctx.lr = 0x82EC63CC;
	sub_82EBA930(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC63D4"))) PPC_WEAK_FUNC(sub_82EC63D4);
PPC_FUNC_IMPL(__imp__sub_82EC63D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC63D8"))) PPC_WEAK_FUNC(sub_82EC63D8);
PPC_FUNC_IMPL(__imp__sub_82EC63D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 | 19;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82ec63fc
	if (!ctx.cr6.eq) goto loc_82EC63FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,15932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15932);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82ec6404
	goto loc_82EC6404;
loc_82EC63FC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18308);
	ctx.f13.f64 = double(temp.f32);
loc_82EC6404:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,128(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmadds f9,f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,-17864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17864);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f7,f11,f12,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lfs f12,-15844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15844);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fmadds f8,f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,2048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,2052(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2052);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f9
	ctx.f11.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// fctiwz f11,f7
	ctx.f11.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f11.u64);
	// lwa r11,-28(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -28));
	// lwa r9,-12(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -12));
	// fctiwz f11,f10
	ctx.f11.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// stfd f11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f11.u64);
	// lwa r10,-20(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -20));
	// fctiwz f11,f8
	ctx.f11.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwa r11,-20(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -20));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC64F4"))) PPC_WEAK_FUNC(sub_82EC64F4);
PPC_FUNC_IMPL(__imp__sub_82EC64F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC64F8"))) PPC_WEAK_FUNC(sub_82EC64F8);
PPC_FUNC_IMPL(__imp__sub_82EC64F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82EC6500;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// add r25,r11,r5
	ctx.r25.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r27,r4,r11
	ctx.r27.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bne cr6,0x82ec6564
	if (!ctx.cr6.eq) goto loc_82EC6564;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82299698
	ctx.lr = 0x82EC6540;
	sub_82299698(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ec6a74
	if (ctx.cr0.eq) goto loc_82EC6A74;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82cb16f0
	ctx.lr = 0x82EC6564;
	sub_82CB16F0(ctx, base);
loc_82EC6564:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// subf r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// subf r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ec65cc
	if (!ctx.cr6.eq) goto loc_82EC65CC;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82299698
	ctx.lr = 0x82EC65B0;
	sub_82299698(ctx, base);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ec6a74
	if (ctx.cr0.eq) goto loc_82EC6A74;
	// stw r22,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r22.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
loc_82EC65CC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ec6788
	if (!ctx.cr6.eq) goto loc_82EC6788;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r23,r27,0,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r23,4
	ctx.r10.s64 = ctx.r23.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ec65fc
	if (!ctx.cr6.lt) goto loc_82EC65FC;
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82ec6614
	if (ctx.cr6.gt) goto loc_82EC6614;
loc_82EC65FC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ec6690
	if (!ctx.cr6.gt) goto loc_82EC6690;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec6690
	if (!ctx.cr6.lt) goto loc_82EC6690;
loc_82EC6614:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r25
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82ec674c
	if (!ctx.cr6.lt) goto loc_82EC674C;
loc_82EC665C:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EC6670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ec665c
	if (ctx.cr6.lt) goto loc_82EC665C;
	// b 0x82ec674c
	goto loc_82EC674C;
loc_82EC6690:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec66ec
	if (!ctx.cr6.lt) goto loc_82EC66EC;
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82ec66ec
	if (!ctx.cr6.gt) goto loc_82EC66EC;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r8,r27,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82EC66EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EC66EC:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ec674c
	if (!ctx.cr6.gt) goto loc_82EC674C;
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82ec674c
	if (!ctx.cr6.lt) goto loc_82EC674C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r27,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82EC674C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EC674C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82EC6750:
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ec676c
	if (ctx.cr6.lt) goto loc_82EC676C;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ec677c
	if (ctx.cr6.lt) goto loc_82EC677C;
loc_82EC676C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// slw r9,r21,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82EC677C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82ec6750
	if (ctx.cr6.lt) goto loc_82EC6750;
loc_82EC6788:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ec67a4
	if (ctx.cr6.eq) goto loc_82EC67A4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb9da8
	ctx.lr = 0x82EC67A0;
	sub_82EB9DA8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82EC67A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec67c0
	if (ctx.cr6.eq) goto loc_82EC67C0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebada8
	ctx.lr = 0x82EC67BC;
	sub_82EBADA8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82EC67C0:
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r8,r8,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r8.s64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// b 0x82ec6828
	goto loc_82EC6828;
loc_82EC67E4:
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r6,r10,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_82EC6828:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ec67e4
	if (ctx.cr6.lt) goto loc_82EC67E4;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82ec6a74
	if (!ctx.cr6.eq) goto loc_82EC6A74;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r25
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82ec6a0c
	if (!ctx.cr6.lt) goto loc_82EC6A0C;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// rlwinm r27,r27,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
loc_82EC68A8:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// subf r6,r29,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r29.s64;
	// subf r4,r27,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r27.s64;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bge cr6,0x82ec6940
	if (!ctx.cr6.lt) goto loc_82EC6940;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ec6940
	if (ctx.cr6.eq) goto loc_82EC6940;
loc_82EC68CC:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bge cr6,0x82ec6940
	if (!ctx.cr6.lt) goto loc_82EC6940;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EC68E8:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// or r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blt cr6,0x82ec68e8
	if (ctx.cr6.lt) goto loc_82EC68E8;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82ec68cc
	if (ctx.cr6.lt) goto loc_82EC68CC;
loc_82EC6940:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x82ec69bc
	if (!ctx.cr6.lt) goto loc_82EC69BC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EC6958:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EC6968:
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// blt cr6,0x82ec6968
	if (ctx.cr6.lt) goto loc_82EC6968;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x82ec6958
	if (ctx.cr6.lt) goto loc_82EC6958;
loc_82EC69BC:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ec69d8
	if (!ctx.cr6.eq) goto loc_82EC69D8;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ec69dc
	if (ctx.cr6.eq) goto loc_82EC69DC;
loc_82EC69D8:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_82EC69DC:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EC69F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ec68a8
	if (ctx.cr6.lt) goto loc_82EC68A8;
loc_82EC6A0C:
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ec6a58
	if (!ctx.cr6.lt) goto loc_82EC6A58;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ec6a58
	if (!ctx.cr6.eq) goto loc_82EC6A58;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ec6a58
	if (!ctx.cr6.eq) goto loc_82EC6A58;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r22,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r22.u32);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// b 0x82ec6a70
	goto loc_82EC6A70;
loc_82EC6A58:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x822996c0
	ctx.lr = 0x82EC6A64;
	sub_822996C0(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
loc_82EC6A70:
	// stw r22,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r22.u32);
loc_82EC6A74:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6A7C"))) PPC_WEAK_FUNC(sub_82EC6A7C);
PPC_FUNC_IMPL(__imp__sub_82EC6A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6A80"))) PPC_WEAK_FUNC(sub_82EC6A80);
PPC_FUNC_IMPL(__imp__sub_82EC6A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EC6A88;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// add r26,r11,r4
	ctx.r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r30,r10,r5
	ctx.r30.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ec6acc
	if (!ctx.cr6.eq) goto loc_82EC6ACC;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82299698
	ctx.lr = 0x82EC6AC0;
	sub_82299698(ctx, base);
	// mr. r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r9.u32);
	// beq 0x82ec6d48
	if (ctx.cr0.eq) goto loc_82EC6D48;
loc_82EC6ACC:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// rlwinm r10,r26,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ec6ae8
	if (!ctx.cr6.eq) goto loc_82EC6AE8;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ec6b68
	if (ctx.cr6.eq) goto loc_82EC6B68;
loc_82EC6AE8:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r10,r5,r30
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r28,r10,r7
	ctx.r28.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82ec6b68
	if (!ctx.cr6.lt) goto loc_82EC6B68;
loc_82EC6B38:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EC6B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ec6b38
	if (ctx.cr6.lt) goto loc_82EC6B38;
loc_82EC6B68:
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r8,r8,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r8.s64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// b 0x82ec6bd4
	goto loc_82EC6BD4;
loc_82EC6B8C:
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwimi r6,r10,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
loc_82EC6BD4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ec6b8c
	if (ctx.cr6.lt) goto loc_82EC6B8C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec6d28
	if (ctx.cr6.eq) goto loc_82EC6D28;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r27,r10,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ec6d28
	if (!ctx.cr6.lt) goto loc_82EC6D28;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// lfs f6,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,2052(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2052);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-17864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17864);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2048);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,6380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15844(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15844);
	ctx.f13.f64 = double(temp.f32);
loc_82EC6C30:
	// lfs f9,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f8,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f5,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f5,f7,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f0.f64));
	// lfs f5,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f5,f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f0.f64));
	// lfs f4,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fctiwz f9,f9
	ctx.f9.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// fctiwz f9,f8
	ctx.f9.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwa r8,100(r1)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 100));
	// fctiwz f9,f7
	ctx.f9.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwa r10,84(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// fctiwz f9,f5
	ctx.f9.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwa r9,84(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lwa r9,92(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 92));
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f7,120(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lfd f5,128(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// fmuls f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f4,f2,f12
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// fmuls f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fcmpu cr6,f4,f3
	ctx.cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// fmuls f8,f5,f12
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// bne cr6,0x82ec6d1c
	if (!ctx.cr6.eq) goto loc_82EC6D1C;
	// lfs f5,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f9,f5
	ctx.cr6.compare(ctx.f9.f64, ctx.f5.f64);
	// bne cr6,0x82ec6d1c
	if (!ctx.cr6.eq) goto loc_82EC6D1C;
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bne cr6,0x82ec6d1c
	if (!ctx.cr6.eq) goto loc_82EC6D1C;
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// bne cr6,0x82ec6d1c
	if (!ctx.cr6.eq) goto loc_82EC6D1C;
	// stfs f6,0(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f6,4(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f6,8(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f6,12(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
loc_82EC6D1C:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ec6c30
	if (ctx.cr6.lt) goto loc_82EC6C30;
loc_82EC6D28:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec6d48
	if (ctx.cr6.eq) goto loc_82EC6D48;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r11.s64;
	// bl 0x82ebb0f0
	ctx.lr = 0x82EC6D48;
	sub_82EBB0F0(ctx, base);
loc_82EC6D48:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6D50"))) PPC_WEAK_FUNC(sub_82EC6D50);
PPC_FUNC_IMPL(__imp__sub_82EC6D50) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC6D70;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2156
	ctx.r11.s64 = ctx.r11.s64 + 2156;
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

__attribute__((alias("__imp__sub_82EC6D94"))) PPC_WEAK_FUNC(sub_82EC6D94);
PPC_FUNC_IMPL(__imp__sub_82EC6D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6D98"))) PPC_WEAK_FUNC(sub_82EC6D98);
PPC_FUNC_IMPL(__imp__sub_82EC6D98) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6D9C"))) PPC_WEAK_FUNC(sub_82EC6D9C);
PPC_FUNC_IMPL(__imp__sub_82EC6D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6DA0"))) PPC_WEAK_FUNC(sub_82EC6DA0);
PPC_FUNC_IMPL(__imp__sub_82EC6DA0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC6DC0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2172
	ctx.r11.s64 = ctx.r11.s64 + 2172;
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

__attribute__((alias("__imp__sub_82EC6DE4"))) PPC_WEAK_FUNC(sub_82EC6DE4);
PPC_FUNC_IMPL(__imp__sub_82EC6DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6DE8"))) PPC_WEAK_FUNC(sub_82EC6DE8);
PPC_FUNC_IMPL(__imp__sub_82EC6DE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6DEC"))) PPC_WEAK_FUNC(sub_82EC6DEC);
PPC_FUNC_IMPL(__imp__sub_82EC6DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6DF0"))) PPC_WEAK_FUNC(sub_82EC6DF0);
PPC_FUNC_IMPL(__imp__sub_82EC6DF0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC6E10;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2188
	ctx.r11.s64 = ctx.r11.s64 + 2188;
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

__attribute__((alias("__imp__sub_82EC6E34"))) PPC_WEAK_FUNC(sub_82EC6E34);
PPC_FUNC_IMPL(__imp__sub_82EC6E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6E38"))) PPC_WEAK_FUNC(sub_82EC6E38);
PPC_FUNC_IMPL(__imp__sub_82EC6E38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6E3C"))) PPC_WEAK_FUNC(sub_82EC6E3C);
PPC_FUNC_IMPL(__imp__sub_82EC6E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6E40"))) PPC_WEAK_FUNC(sub_82EC6E40);
PPC_FUNC_IMPL(__imp__sub_82EC6E40) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC6E60;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2204
	ctx.r11.s64 = ctx.r11.s64 + 2204;
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

__attribute__((alias("__imp__sub_82EC6E84"))) PPC_WEAK_FUNC(sub_82EC6E84);
PPC_FUNC_IMPL(__imp__sub_82EC6E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6E88"))) PPC_WEAK_FUNC(sub_82EC6E88);
PPC_FUNC_IMPL(__imp__sub_82EC6E88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6E8C"))) PPC_WEAK_FUNC(sub_82EC6E8C);
PPC_FUNC_IMPL(__imp__sub_82EC6E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6E90"))) PPC_WEAK_FUNC(sub_82EC6E90);
PPC_FUNC_IMPL(__imp__sub_82EC6E90) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC6EB0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
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

__attribute__((alias("__imp__sub_82EC6ED4"))) PPC_WEAK_FUNC(sub_82EC6ED4);
PPC_FUNC_IMPL(__imp__sub_82EC6ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6ED8"))) PPC_WEAK_FUNC(sub_82EC6ED8);
PPC_FUNC_IMPL(__imp__sub_82EC6ED8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6EDC"))) PPC_WEAK_FUNC(sub_82EC6EDC);
PPC_FUNC_IMPL(__imp__sub_82EC6EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6EE0"))) PPC_WEAK_FUNC(sub_82EC6EE0);
PPC_FUNC_IMPL(__imp__sub_82EC6EE0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC6F00;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2236
	ctx.r11.s64 = ctx.r11.s64 + 2236;
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

__attribute__((alias("__imp__sub_82EC6F24"))) PPC_WEAK_FUNC(sub_82EC6F24);
PPC_FUNC_IMPL(__imp__sub_82EC6F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6F28"))) PPC_WEAK_FUNC(sub_82EC6F28);
PPC_FUNC_IMPL(__imp__sub_82EC6F28) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6F2C"))) PPC_WEAK_FUNC(sub_82EC6F2C);
PPC_FUNC_IMPL(__imp__sub_82EC6F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6F30"))) PPC_WEAK_FUNC(sub_82EC6F30);
PPC_FUNC_IMPL(__imp__sub_82EC6F30) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC6F50;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2252
	ctx.r11.s64 = ctx.r11.s64 + 2252;
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

__attribute__((alias("__imp__sub_82EC6F74"))) PPC_WEAK_FUNC(sub_82EC6F74);
PPC_FUNC_IMPL(__imp__sub_82EC6F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6F78"))) PPC_WEAK_FUNC(sub_82EC6F78);
PPC_FUNC_IMPL(__imp__sub_82EC6F78) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6F7C"))) PPC_WEAK_FUNC(sub_82EC6F7C);
PPC_FUNC_IMPL(__imp__sub_82EC6F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6F80"))) PPC_WEAK_FUNC(sub_82EC6F80);
PPC_FUNC_IMPL(__imp__sub_82EC6F80) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC6FA0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2268
	ctx.r11.s64 = ctx.r11.s64 + 2268;
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

__attribute__((alias("__imp__sub_82EC6FC4"))) PPC_WEAK_FUNC(sub_82EC6FC4);
PPC_FUNC_IMPL(__imp__sub_82EC6FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6FC8"))) PPC_WEAK_FUNC(sub_82EC6FC8);
PPC_FUNC_IMPL(__imp__sub_82EC6FC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6FCC"))) PPC_WEAK_FUNC(sub_82EC6FCC);
PPC_FUNC_IMPL(__imp__sub_82EC6FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6FD0"))) PPC_WEAK_FUNC(sub_82EC6FD0);
PPC_FUNC_IMPL(__imp__sub_82EC6FD0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC6FF0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2284
	ctx.r11.s64 = ctx.r11.s64 + 2284;
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

__attribute__((alias("__imp__sub_82EC7014"))) PPC_WEAK_FUNC(sub_82EC7014);
PPC_FUNC_IMPL(__imp__sub_82EC7014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7018"))) PPC_WEAK_FUNC(sub_82EC7018);
PPC_FUNC_IMPL(__imp__sub_82EC7018) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC701C"))) PPC_WEAK_FUNC(sub_82EC701C);
PPC_FUNC_IMPL(__imp__sub_82EC701C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7020"))) PPC_WEAK_FUNC(sub_82EC7020);
PPC_FUNC_IMPL(__imp__sub_82EC7020) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7040;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2300
	ctx.r11.s64 = ctx.r11.s64 + 2300;
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

__attribute__((alias("__imp__sub_82EC7064"))) PPC_WEAK_FUNC(sub_82EC7064);
PPC_FUNC_IMPL(__imp__sub_82EC7064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7068"))) PPC_WEAK_FUNC(sub_82EC7068);
PPC_FUNC_IMPL(__imp__sub_82EC7068) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC706C"))) PPC_WEAK_FUNC(sub_82EC706C);
PPC_FUNC_IMPL(__imp__sub_82EC706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7070"))) PPC_WEAK_FUNC(sub_82EC7070);
PPC_FUNC_IMPL(__imp__sub_82EC7070) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7090;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2316
	ctx.r11.s64 = ctx.r11.s64 + 2316;
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

__attribute__((alias("__imp__sub_82EC70B4"))) PPC_WEAK_FUNC(sub_82EC70B4);
PPC_FUNC_IMPL(__imp__sub_82EC70B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC70B8"))) PPC_WEAK_FUNC(sub_82EC70B8);
PPC_FUNC_IMPL(__imp__sub_82EC70B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC70BC"))) PPC_WEAK_FUNC(sub_82EC70BC);
PPC_FUNC_IMPL(__imp__sub_82EC70BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC70C0"))) PPC_WEAK_FUNC(sub_82EC70C0);
PPC_FUNC_IMPL(__imp__sub_82EC70C0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC70E0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2332
	ctx.r11.s64 = ctx.r11.s64 + 2332;
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

__attribute__((alias("__imp__sub_82EC7104"))) PPC_WEAK_FUNC(sub_82EC7104);
PPC_FUNC_IMPL(__imp__sub_82EC7104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7108"))) PPC_WEAK_FUNC(sub_82EC7108);
PPC_FUNC_IMPL(__imp__sub_82EC7108) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC710C"))) PPC_WEAK_FUNC(sub_82EC710C);
PPC_FUNC_IMPL(__imp__sub_82EC710C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7110"))) PPC_WEAK_FUNC(sub_82EC7110);
PPC_FUNC_IMPL(__imp__sub_82EC7110) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7130;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2348
	ctx.r11.s64 = ctx.r11.s64 + 2348;
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

__attribute__((alias("__imp__sub_82EC7154"))) PPC_WEAK_FUNC(sub_82EC7154);
PPC_FUNC_IMPL(__imp__sub_82EC7154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7158"))) PPC_WEAK_FUNC(sub_82EC7158);
PPC_FUNC_IMPL(__imp__sub_82EC7158) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC715C"))) PPC_WEAK_FUNC(sub_82EC715C);
PPC_FUNC_IMPL(__imp__sub_82EC715C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7160"))) PPC_WEAK_FUNC(sub_82EC7160);
PPC_FUNC_IMPL(__imp__sub_82EC7160) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7180;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2364
	ctx.r11.s64 = ctx.r11.s64 + 2364;
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

__attribute__((alias("__imp__sub_82EC71A4"))) PPC_WEAK_FUNC(sub_82EC71A4);
PPC_FUNC_IMPL(__imp__sub_82EC71A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC71A8"))) PPC_WEAK_FUNC(sub_82EC71A8);
PPC_FUNC_IMPL(__imp__sub_82EC71A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC71AC"))) PPC_WEAK_FUNC(sub_82EC71AC);
PPC_FUNC_IMPL(__imp__sub_82EC71AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC71B0"))) PPC_WEAK_FUNC(sub_82EC71B0);
PPC_FUNC_IMPL(__imp__sub_82EC71B0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC71D0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2380
	ctx.r11.s64 = ctx.r11.s64 + 2380;
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

__attribute__((alias("__imp__sub_82EC71F4"))) PPC_WEAK_FUNC(sub_82EC71F4);
PPC_FUNC_IMPL(__imp__sub_82EC71F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC71F8"))) PPC_WEAK_FUNC(sub_82EC71F8);
PPC_FUNC_IMPL(__imp__sub_82EC71F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC71FC"))) PPC_WEAK_FUNC(sub_82EC71FC);
PPC_FUNC_IMPL(__imp__sub_82EC71FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7200"))) PPC_WEAK_FUNC(sub_82EC7200);
PPC_FUNC_IMPL(__imp__sub_82EC7200) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7220;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2396
	ctx.r11.s64 = ctx.r11.s64 + 2396;
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

__attribute__((alias("__imp__sub_82EC7244"))) PPC_WEAK_FUNC(sub_82EC7244);
PPC_FUNC_IMPL(__imp__sub_82EC7244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7248"))) PPC_WEAK_FUNC(sub_82EC7248);
PPC_FUNC_IMPL(__imp__sub_82EC7248) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC724C"))) PPC_WEAK_FUNC(sub_82EC724C);
PPC_FUNC_IMPL(__imp__sub_82EC724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7250"))) PPC_WEAK_FUNC(sub_82EC7250);
PPC_FUNC_IMPL(__imp__sub_82EC7250) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7270;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2412
	ctx.r11.s64 = ctx.r11.s64 + 2412;
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

__attribute__((alias("__imp__sub_82EC7294"))) PPC_WEAK_FUNC(sub_82EC7294);
PPC_FUNC_IMPL(__imp__sub_82EC7294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7298"))) PPC_WEAK_FUNC(sub_82EC7298);
PPC_FUNC_IMPL(__imp__sub_82EC7298) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC729C"))) PPC_WEAK_FUNC(sub_82EC729C);
PPC_FUNC_IMPL(__imp__sub_82EC729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC72A0"))) PPC_WEAK_FUNC(sub_82EC72A0);
PPC_FUNC_IMPL(__imp__sub_82EC72A0) {
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
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC72C0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2428
	ctx.r11.s64 = ctx.r11.s64 + 2428;
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

__attribute__((alias("__imp__sub_82EC72E4"))) PPC_WEAK_FUNC(sub_82EC72E4);
PPC_FUNC_IMPL(__imp__sub_82EC72E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC72E8"))) PPC_WEAK_FUNC(sub_82EC72E8);
PPC_FUNC_IMPL(__imp__sub_82EC72E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC72EC"))) PPC_WEAK_FUNC(sub_82EC72EC);
PPC_FUNC_IMPL(__imp__sub_82EC72EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC72F0"))) PPC_WEAK_FUNC(sub_82EC72F0);
PPC_FUNC_IMPL(__imp__sub_82EC72F0) {
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
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7310;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2444
	ctx.r11.s64 = ctx.r11.s64 + 2444;
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

__attribute__((alias("__imp__sub_82EC7334"))) PPC_WEAK_FUNC(sub_82EC7334);
PPC_FUNC_IMPL(__imp__sub_82EC7334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7338"))) PPC_WEAK_FUNC(sub_82EC7338);
PPC_FUNC_IMPL(__imp__sub_82EC7338) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC733C"))) PPC_WEAK_FUNC(sub_82EC733C);
PPC_FUNC_IMPL(__imp__sub_82EC733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7340"))) PPC_WEAK_FUNC(sub_82EC7340);
PPC_FUNC_IMPL(__imp__sub_82EC7340) {
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
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7360;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2460
	ctx.r11.s64 = ctx.r11.s64 + 2460;
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

__attribute__((alias("__imp__sub_82EC7384"))) PPC_WEAK_FUNC(sub_82EC7384);
PPC_FUNC_IMPL(__imp__sub_82EC7384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7388"))) PPC_WEAK_FUNC(sub_82EC7388);
PPC_FUNC_IMPL(__imp__sub_82EC7388) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC738C"))) PPC_WEAK_FUNC(sub_82EC738C);
PPC_FUNC_IMPL(__imp__sub_82EC738C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7390"))) PPC_WEAK_FUNC(sub_82EC7390);
PPC_FUNC_IMPL(__imp__sub_82EC7390) {
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
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC73B0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2476
	ctx.r11.s64 = ctx.r11.s64 + 2476;
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

__attribute__((alias("__imp__sub_82EC73D4"))) PPC_WEAK_FUNC(sub_82EC73D4);
PPC_FUNC_IMPL(__imp__sub_82EC73D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC73D8"))) PPC_WEAK_FUNC(sub_82EC73D8);
PPC_FUNC_IMPL(__imp__sub_82EC73D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC73DC"))) PPC_WEAK_FUNC(sub_82EC73DC);
PPC_FUNC_IMPL(__imp__sub_82EC73DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC73E0"))) PPC_WEAK_FUNC(sub_82EC73E0);
PPC_FUNC_IMPL(__imp__sub_82EC73E0) {
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
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7400;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2492
	ctx.r11.s64 = ctx.r11.s64 + 2492;
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

__attribute__((alias("__imp__sub_82EC7424"))) PPC_WEAK_FUNC(sub_82EC7424);
PPC_FUNC_IMPL(__imp__sub_82EC7424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7428"))) PPC_WEAK_FUNC(sub_82EC7428);
PPC_FUNC_IMPL(__imp__sub_82EC7428) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC742C"))) PPC_WEAK_FUNC(sub_82EC742C);
PPC_FUNC_IMPL(__imp__sub_82EC742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7430"))) PPC_WEAK_FUNC(sub_82EC7430);
PPC_FUNC_IMPL(__imp__sub_82EC7430) {
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
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7450;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2508
	ctx.r11.s64 = ctx.r11.s64 + 2508;
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

__attribute__((alias("__imp__sub_82EC7474"))) PPC_WEAK_FUNC(sub_82EC7474);
PPC_FUNC_IMPL(__imp__sub_82EC7474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7478"))) PPC_WEAK_FUNC(sub_82EC7478);
PPC_FUNC_IMPL(__imp__sub_82EC7478) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC747C"))) PPC_WEAK_FUNC(sub_82EC747C);
PPC_FUNC_IMPL(__imp__sub_82EC747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7480"))) PPC_WEAK_FUNC(sub_82EC7480);
PPC_FUNC_IMPL(__imp__sub_82EC7480) {
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
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC74A0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2524
	ctx.r11.s64 = ctx.r11.s64 + 2524;
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

__attribute__((alias("__imp__sub_82EC74C4"))) PPC_WEAK_FUNC(sub_82EC74C4);
PPC_FUNC_IMPL(__imp__sub_82EC74C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC74C8"))) PPC_WEAK_FUNC(sub_82EC74C8);
PPC_FUNC_IMPL(__imp__sub_82EC74C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC74CC"))) PPC_WEAK_FUNC(sub_82EC74CC);
PPC_FUNC_IMPL(__imp__sub_82EC74CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC74D0"))) PPC_WEAK_FUNC(sub_82EC74D0);
PPC_FUNC_IMPL(__imp__sub_82EC74D0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC74F0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2540
	ctx.r11.s64 = ctx.r11.s64 + 2540;
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

__attribute__((alias("__imp__sub_82EC7514"))) PPC_WEAK_FUNC(sub_82EC7514);
PPC_FUNC_IMPL(__imp__sub_82EC7514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7518"))) PPC_WEAK_FUNC(sub_82EC7518);
PPC_FUNC_IMPL(__imp__sub_82EC7518) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC751C"))) PPC_WEAK_FUNC(sub_82EC751C);
PPC_FUNC_IMPL(__imp__sub_82EC751C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7520"))) PPC_WEAK_FUNC(sub_82EC7520);
PPC_FUNC_IMPL(__imp__sub_82EC7520) {
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
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7540;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2556
	ctx.r11.s64 = ctx.r11.s64 + 2556;
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

__attribute__((alias("__imp__sub_82EC7564"))) PPC_WEAK_FUNC(sub_82EC7564);
PPC_FUNC_IMPL(__imp__sub_82EC7564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7568"))) PPC_WEAK_FUNC(sub_82EC7568);
PPC_FUNC_IMPL(__imp__sub_82EC7568) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC756C"))) PPC_WEAK_FUNC(sub_82EC756C);
PPC_FUNC_IMPL(__imp__sub_82EC756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7570"))) PPC_WEAK_FUNC(sub_82EC7570);
PPC_FUNC_IMPL(__imp__sub_82EC7570) {
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
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7590;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2572
	ctx.r11.s64 = ctx.r11.s64 + 2572;
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

__attribute__((alias("__imp__sub_82EC75B4"))) PPC_WEAK_FUNC(sub_82EC75B4);
PPC_FUNC_IMPL(__imp__sub_82EC75B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC75B8"))) PPC_WEAK_FUNC(sub_82EC75B8);
PPC_FUNC_IMPL(__imp__sub_82EC75B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC75BC"))) PPC_WEAK_FUNC(sub_82EC75BC);
PPC_FUNC_IMPL(__imp__sub_82EC75BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC75C0"))) PPC_WEAK_FUNC(sub_82EC75C0);
PPC_FUNC_IMPL(__imp__sub_82EC75C0) {
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
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC75E0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2588
	ctx.r11.s64 = ctx.r11.s64 + 2588;
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

__attribute__((alias("__imp__sub_82EC7604"))) PPC_WEAK_FUNC(sub_82EC7604);
PPC_FUNC_IMPL(__imp__sub_82EC7604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7608"))) PPC_WEAK_FUNC(sub_82EC7608);
PPC_FUNC_IMPL(__imp__sub_82EC7608) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC760C"))) PPC_WEAK_FUNC(sub_82EC760C);
PPC_FUNC_IMPL(__imp__sub_82EC760C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7610"))) PPC_WEAK_FUNC(sub_82EC7610);
PPC_FUNC_IMPL(__imp__sub_82EC7610) {
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
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7630;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2604
	ctx.r11.s64 = ctx.r11.s64 + 2604;
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

__attribute__((alias("__imp__sub_82EC7654"))) PPC_WEAK_FUNC(sub_82EC7654);
PPC_FUNC_IMPL(__imp__sub_82EC7654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7658"))) PPC_WEAK_FUNC(sub_82EC7658);
PPC_FUNC_IMPL(__imp__sub_82EC7658) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC765C"))) PPC_WEAK_FUNC(sub_82EC765C);
PPC_FUNC_IMPL(__imp__sub_82EC765C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7660"))) PPC_WEAK_FUNC(sub_82EC7660);
PPC_FUNC_IMPL(__imp__sub_82EC7660) {
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
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7680;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2620
	ctx.r11.s64 = ctx.r11.s64 + 2620;
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

__attribute__((alias("__imp__sub_82EC76A4"))) PPC_WEAK_FUNC(sub_82EC76A4);
PPC_FUNC_IMPL(__imp__sub_82EC76A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC76A8"))) PPC_WEAK_FUNC(sub_82EC76A8);
PPC_FUNC_IMPL(__imp__sub_82EC76A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC76AC"))) PPC_WEAK_FUNC(sub_82EC76AC);
PPC_FUNC_IMPL(__imp__sub_82EC76AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC76B0"))) PPC_WEAK_FUNC(sub_82EC76B0);
PPC_FUNC_IMPL(__imp__sub_82EC76B0) {
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
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC76D0;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2636
	ctx.r11.s64 = ctx.r11.s64 + 2636;
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

__attribute__((alias("__imp__sub_82EC76F4"))) PPC_WEAK_FUNC(sub_82EC76F4);
PPC_FUNC_IMPL(__imp__sub_82EC76F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC76F8"))) PPC_WEAK_FUNC(sub_82EC76F8);
PPC_FUNC_IMPL(__imp__sub_82EC76F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC76FC"))) PPC_WEAK_FUNC(sub_82EC76FC);
PPC_FUNC_IMPL(__imp__sub_82EC76FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7700"))) PPC_WEAK_FUNC(sub_82EC7700);
PPC_FUNC_IMPL(__imp__sub_82EC7700) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7720;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2652
	ctx.r11.s64 = ctx.r11.s64 + 2652;
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

__attribute__((alias("__imp__sub_82EC7744"))) PPC_WEAK_FUNC(sub_82EC7744);
PPC_FUNC_IMPL(__imp__sub_82EC7744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7748"))) PPC_WEAK_FUNC(sub_82EC7748);
PPC_FUNC_IMPL(__imp__sub_82EC7748) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC774C"))) PPC_WEAK_FUNC(sub_82EC774C);
PPC_FUNC_IMPL(__imp__sub_82EC774C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7750"))) PPC_WEAK_FUNC(sub_82EC7750);
PPC_FUNC_IMPL(__imp__sub_82EC7750) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eba6b0
	ctx.lr = 0x82EC7770;
	sub_82EBA6B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2668
	ctx.r11.s64 = ctx.r11.s64 + 2668;
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

__attribute__((alias("__imp__sub_82EC7794"))) PPC_WEAK_FUNC(sub_82EC7794);
PPC_FUNC_IMPL(__imp__sub_82EC7794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7798"))) PPC_WEAK_FUNC(sub_82EC7798);
PPC_FUNC_IMPL(__imp__sub_82EC7798) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba930
	sub_82EBA930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC779C"))) PPC_WEAK_FUNC(sub_82EC779C);
PPC_FUNC_IMPL(__imp__sub_82EC779C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC77A0"))) PPC_WEAK_FUNC(sub_82EC77A0);
PPC_FUNC_IMPL(__imp__sub_82EC77A0) {
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
	// bl 0x82ec6190
	ctx.lr = 0x82EC77B8;
	sub_82EC6190(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2684
	ctx.r11.s64 = ctx.r11.s64 + 2684;
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

__attribute__((alias("__imp__sub_82EC77DC"))) PPC_WEAK_FUNC(sub_82EC77DC);
PPC_FUNC_IMPL(__imp__sub_82EC77DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC77E0"))) PPC_WEAK_FUNC(sub_82EC77E0);
PPC_FUNC_IMPL(__imp__sub_82EC77E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ec6338
	sub_82EC6338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC77E4"))) PPC_WEAK_FUNC(sub_82EC77E4);
PPC_FUNC_IMPL(__imp__sub_82EC77E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC77E8"))) PPC_WEAK_FUNC(sub_82EC77E8);
PPC_FUNC_IMPL(__imp__sub_82EC77E8) {
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
	// bl 0x82ec6190
	ctx.lr = 0x82EC7800;
	sub_82EC6190(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2700
	ctx.r11.s64 = ctx.r11.s64 + 2700;
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

__attribute__((alias("__imp__sub_82EC7824"))) PPC_WEAK_FUNC(sub_82EC7824);
PPC_FUNC_IMPL(__imp__sub_82EC7824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7828"))) PPC_WEAK_FUNC(sub_82EC7828);
PPC_FUNC_IMPL(__imp__sub_82EC7828) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ec6338
	sub_82EC6338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC782C"))) PPC_WEAK_FUNC(sub_82EC782C);
PPC_FUNC_IMPL(__imp__sub_82EC782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7830"))) PPC_WEAK_FUNC(sub_82EC7830);
PPC_FUNC_IMPL(__imp__sub_82EC7830) {
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
	// bl 0x82ec6190
	ctx.lr = 0x82EC7848;
	sub_82EC6190(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2716
	ctx.r11.s64 = ctx.r11.s64 + 2716;
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

__attribute__((alias("__imp__sub_82EC786C"))) PPC_WEAK_FUNC(sub_82EC786C);
PPC_FUNC_IMPL(__imp__sub_82EC786C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7870"))) PPC_WEAK_FUNC(sub_82EC7870);
PPC_FUNC_IMPL(__imp__sub_82EC7870) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ec6338
	sub_82EC6338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC7874"))) PPC_WEAK_FUNC(sub_82EC7874);
PPC_FUNC_IMPL(__imp__sub_82EC7874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7878"))) PPC_WEAK_FUNC(sub_82EC7878);
PPC_FUNC_IMPL(__imp__sub_82EC7878) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7898;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec78ac
	if (ctx.cr0.eq) goto loc_82EC78AC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC78AC;
	sub_822996C0(ctx, base);
loc_82EC78AC:
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

__attribute__((alias("__imp__sub_82EC78C8"))) PPC_WEAK_FUNC(sub_82EC78C8);
PPC_FUNC_IMPL(__imp__sub_82EC78C8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,2072
	ctx.r11.s64 = ctx.r11.s64 + 2072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ec58c0
	ctx.lr = 0x82EC78EC;
	sub_82EC58C0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ec7900
	if (ctx.cr6.eq) goto loc_82EC7900;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EC7900;
	sub_822996C0(ctx, base);
loc_82EC7900:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eba930
	ctx.lr = 0x82EC7908;
	sub_82EBA930(ctx, base);
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

__attribute__((alias("__imp__sub_82EC791C"))) PPC_WEAK_FUNC(sub_82EC791C);
PPC_FUNC_IMPL(__imp__sub_82EC791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7920"))) PPC_WEAK_FUNC(sub_82EC7920);
PPC_FUNC_IMPL(__imp__sub_82EC7920) {
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
	// bl 0x82ec6338
	ctx.lr = 0x82EC7940;
	sub_82EC6338(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7954
	if (ctx.cr0.eq) goto loc_82EC7954;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7954;
	sub_822996C0(ctx, base);
loc_82EC7954:
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

__attribute__((alias("__imp__sub_82EC7970"))) PPC_WEAK_FUNC(sub_82EC7970);
PPC_FUNC_IMPL(__imp__sub_82EC7970) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7990;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec79a4
	if (ctx.cr0.eq) goto loc_82EC79A4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC79A4;
	sub_822996C0(ctx, base);
loc_82EC79A4:
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

__attribute__((alias("__imp__sub_82EC79C0"))) PPC_WEAK_FUNC(sub_82EC79C0);
PPC_FUNC_IMPL(__imp__sub_82EC79C0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC79E0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec79f4
	if (ctx.cr0.eq) goto loc_82EC79F4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC79F4;
	sub_822996C0(ctx, base);
loc_82EC79F4:
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

__attribute__((alias("__imp__sub_82EC7A10"))) PPC_WEAK_FUNC(sub_82EC7A10);
PPC_FUNC_IMPL(__imp__sub_82EC7A10) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7A30;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7a44
	if (ctx.cr0.eq) goto loc_82EC7A44;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7A44;
	sub_822996C0(ctx, base);
loc_82EC7A44:
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

__attribute__((alias("__imp__sub_82EC7A60"))) PPC_WEAK_FUNC(sub_82EC7A60);
PPC_FUNC_IMPL(__imp__sub_82EC7A60) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7A80;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7a94
	if (ctx.cr0.eq) goto loc_82EC7A94;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7A94;
	sub_822996C0(ctx, base);
loc_82EC7A94:
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

__attribute__((alias("__imp__sub_82EC7AB0"))) PPC_WEAK_FUNC(sub_82EC7AB0);
PPC_FUNC_IMPL(__imp__sub_82EC7AB0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7AD0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7ae4
	if (ctx.cr0.eq) goto loc_82EC7AE4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7AE4;
	sub_822996C0(ctx, base);
loc_82EC7AE4:
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

__attribute__((alias("__imp__sub_82EC7B00"))) PPC_WEAK_FUNC(sub_82EC7B00);
PPC_FUNC_IMPL(__imp__sub_82EC7B00) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7B20;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7b34
	if (ctx.cr0.eq) goto loc_82EC7B34;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7B34;
	sub_822996C0(ctx, base);
loc_82EC7B34:
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

__attribute__((alias("__imp__sub_82EC7B50"))) PPC_WEAK_FUNC(sub_82EC7B50);
PPC_FUNC_IMPL(__imp__sub_82EC7B50) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7B70;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7b84
	if (ctx.cr0.eq) goto loc_82EC7B84;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7B84;
	sub_822996C0(ctx, base);
loc_82EC7B84:
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

__attribute__((alias("__imp__sub_82EC7BA0"))) PPC_WEAK_FUNC(sub_82EC7BA0);
PPC_FUNC_IMPL(__imp__sub_82EC7BA0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7BC0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7bd4
	if (ctx.cr0.eq) goto loc_82EC7BD4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7BD4;
	sub_822996C0(ctx, base);
loc_82EC7BD4:
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

__attribute__((alias("__imp__sub_82EC7BF0"))) PPC_WEAK_FUNC(sub_82EC7BF0);
PPC_FUNC_IMPL(__imp__sub_82EC7BF0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7C10;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7c24
	if (ctx.cr0.eq) goto loc_82EC7C24;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7C24;
	sub_822996C0(ctx, base);
loc_82EC7C24:
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

__attribute__((alias("__imp__sub_82EC7C40"))) PPC_WEAK_FUNC(sub_82EC7C40);
PPC_FUNC_IMPL(__imp__sub_82EC7C40) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7C60;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7c74
	if (ctx.cr0.eq) goto loc_82EC7C74;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7C74;
	sub_822996C0(ctx, base);
loc_82EC7C74:
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

__attribute__((alias("__imp__sub_82EC7C90"))) PPC_WEAK_FUNC(sub_82EC7C90);
PPC_FUNC_IMPL(__imp__sub_82EC7C90) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7CB0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7cc4
	if (ctx.cr0.eq) goto loc_82EC7CC4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7CC4;
	sub_822996C0(ctx, base);
loc_82EC7CC4:
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

__attribute__((alias("__imp__sub_82EC7CE0"))) PPC_WEAK_FUNC(sub_82EC7CE0);
PPC_FUNC_IMPL(__imp__sub_82EC7CE0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7D00;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7d14
	if (ctx.cr0.eq) goto loc_82EC7D14;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7D14;
	sub_822996C0(ctx, base);
loc_82EC7D14:
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

__attribute__((alias("__imp__sub_82EC7D30"))) PPC_WEAK_FUNC(sub_82EC7D30);
PPC_FUNC_IMPL(__imp__sub_82EC7D30) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7D50;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7d64
	if (ctx.cr0.eq) goto loc_82EC7D64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7D64;
	sub_822996C0(ctx, base);
loc_82EC7D64:
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

__attribute__((alias("__imp__sub_82EC7D80"))) PPC_WEAK_FUNC(sub_82EC7D80);
PPC_FUNC_IMPL(__imp__sub_82EC7D80) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7DA0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7db4
	if (ctx.cr0.eq) goto loc_82EC7DB4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7DB4;
	sub_822996C0(ctx, base);
loc_82EC7DB4:
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

__attribute__((alias("__imp__sub_82EC7DD0"))) PPC_WEAK_FUNC(sub_82EC7DD0);
PPC_FUNC_IMPL(__imp__sub_82EC7DD0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7DF0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7e04
	if (ctx.cr0.eq) goto loc_82EC7E04;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7E04;
	sub_822996C0(ctx, base);
loc_82EC7E04:
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

__attribute__((alias("__imp__sub_82EC7E20"))) PPC_WEAK_FUNC(sub_82EC7E20);
PPC_FUNC_IMPL(__imp__sub_82EC7E20) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7E40;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7e54
	if (ctx.cr0.eq) goto loc_82EC7E54;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7E54;
	sub_822996C0(ctx, base);
loc_82EC7E54:
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

__attribute__((alias("__imp__sub_82EC7E70"))) PPC_WEAK_FUNC(sub_82EC7E70);
PPC_FUNC_IMPL(__imp__sub_82EC7E70) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7E90;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7ea4
	if (ctx.cr0.eq) goto loc_82EC7EA4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7EA4;
	sub_822996C0(ctx, base);
loc_82EC7EA4:
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

__attribute__((alias("__imp__sub_82EC7EC0"))) PPC_WEAK_FUNC(sub_82EC7EC0);
PPC_FUNC_IMPL(__imp__sub_82EC7EC0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7EE0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7ef4
	if (ctx.cr0.eq) goto loc_82EC7EF4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7EF4;
	sub_822996C0(ctx, base);
loc_82EC7EF4:
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

__attribute__((alias("__imp__sub_82EC7F10"))) PPC_WEAK_FUNC(sub_82EC7F10);
PPC_FUNC_IMPL(__imp__sub_82EC7F10) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7F30;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7f44
	if (ctx.cr0.eq) goto loc_82EC7F44;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7F44;
	sub_822996C0(ctx, base);
loc_82EC7F44:
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

__attribute__((alias("__imp__sub_82EC7F60"))) PPC_WEAK_FUNC(sub_82EC7F60);
PPC_FUNC_IMPL(__imp__sub_82EC7F60) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7F80;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7f94
	if (ctx.cr0.eq) goto loc_82EC7F94;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7F94;
	sub_822996C0(ctx, base);
loc_82EC7F94:
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

__attribute__((alias("__imp__sub_82EC7FB0"))) PPC_WEAK_FUNC(sub_82EC7FB0);
PPC_FUNC_IMPL(__imp__sub_82EC7FB0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC7FD0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec7fe4
	if (ctx.cr0.eq) goto loc_82EC7FE4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC7FE4;
	sub_822996C0(ctx, base);
loc_82EC7FE4:
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

__attribute__((alias("__imp__sub_82EC8000"))) PPC_WEAK_FUNC(sub_82EC8000);
PPC_FUNC_IMPL(__imp__sub_82EC8000) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC8020;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec8034
	if (ctx.cr0.eq) goto loc_82EC8034;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC8034;
	sub_822996C0(ctx, base);
loc_82EC8034:
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

__attribute__((alias("__imp__sub_82EC8050"))) PPC_WEAK_FUNC(sub_82EC8050);
PPC_FUNC_IMPL(__imp__sub_82EC8050) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC8070;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec8084
	if (ctx.cr0.eq) goto loc_82EC8084;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC8084;
	sub_822996C0(ctx, base);
loc_82EC8084:
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

__attribute__((alias("__imp__sub_82EC80A0"))) PPC_WEAK_FUNC(sub_82EC80A0);
PPC_FUNC_IMPL(__imp__sub_82EC80A0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC80C0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec80d4
	if (ctx.cr0.eq) goto loc_82EC80D4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC80D4;
	sub_822996C0(ctx, base);
loc_82EC80D4:
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

__attribute__((alias("__imp__sub_82EC80F0"))) PPC_WEAK_FUNC(sub_82EC80F0);
PPC_FUNC_IMPL(__imp__sub_82EC80F0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC8110;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec8124
	if (ctx.cr0.eq) goto loc_82EC8124;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC8124;
	sub_822996C0(ctx, base);
loc_82EC8124:
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

__attribute__((alias("__imp__sub_82EC8140"))) PPC_WEAK_FUNC(sub_82EC8140);
PPC_FUNC_IMPL(__imp__sub_82EC8140) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC8160;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec8174
	if (ctx.cr0.eq) goto loc_82EC8174;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC8174;
	sub_822996C0(ctx, base);
loc_82EC8174:
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

__attribute__((alias("__imp__sub_82EC8190"))) PPC_WEAK_FUNC(sub_82EC8190);
PPC_FUNC_IMPL(__imp__sub_82EC8190) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC81B0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec81c4
	if (ctx.cr0.eq) goto loc_82EC81C4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC81C4;
	sub_822996C0(ctx, base);
loc_82EC81C4:
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

__attribute__((alias("__imp__sub_82EC81E0"))) PPC_WEAK_FUNC(sub_82EC81E0);
PPC_FUNC_IMPL(__imp__sub_82EC81E0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC8200;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec8214
	if (ctx.cr0.eq) goto loc_82EC8214;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC8214;
	sub_822996C0(ctx, base);
loc_82EC8214:
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

__attribute__((alias("__imp__sub_82EC8230"))) PPC_WEAK_FUNC(sub_82EC8230);
PPC_FUNC_IMPL(__imp__sub_82EC8230) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC8250;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec8264
	if (ctx.cr0.eq) goto loc_82EC8264;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC8264;
	sub_822996C0(ctx, base);
loc_82EC8264:
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

__attribute__((alias("__imp__sub_82EC8280"))) PPC_WEAK_FUNC(sub_82EC8280);
PPC_FUNC_IMPL(__imp__sub_82EC8280) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC82A0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec82b4
	if (ctx.cr0.eq) goto loc_82EC82B4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC82B4;
	sub_822996C0(ctx, base);
loc_82EC82B4:
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

__attribute__((alias("__imp__sub_82EC82D0"))) PPC_WEAK_FUNC(sub_82EC82D0);
PPC_FUNC_IMPL(__imp__sub_82EC82D0) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC82F0;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec8304
	if (ctx.cr0.eq) goto loc_82EC8304;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC8304;
	sub_822996C0(ctx, base);
loc_82EC8304:
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

__attribute__((alias("__imp__sub_82EC8320"))) PPC_WEAK_FUNC(sub_82EC8320);
PPC_FUNC_IMPL(__imp__sub_82EC8320) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC8340;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec8354
	if (ctx.cr0.eq) goto loc_82EC8354;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC8354;
	sub_822996C0(ctx, base);
loc_82EC8354:
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

__attribute__((alias("__imp__sub_82EC8370"))) PPC_WEAK_FUNC(sub_82EC8370);
PPC_FUNC_IMPL(__imp__sub_82EC8370) {
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
	// bl 0x82eba930
	ctx.lr = 0x82EC8390;
	sub_82EBA930(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ec83a4
	if (ctx.cr0.eq) goto loc_82EC83A4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EC83A4;
	sub_822996C0(ctx, base);
loc_82EC83A4:
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

__attribute__((alias("__imp__sub_82EC83C0"))) PPC_WEAK_FUNC(sub_82EC83C0);
PPC_FUNC_IMPL(__imp__sub_82EC83C0) {
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
	// bl 0x82ec57d8
	ctx.lr = 0x82EC83D8;
	sub_82EC57D8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2732
	ctx.r11.s64 = ctx.r11.s64 + 2732;
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

__attribute__((alias("__imp__sub_82EC83FC"))) PPC_WEAK_FUNC(sub_82EC83FC);
PPC_FUNC_IMPL(__imp__sub_82EC83FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC8400"))) PPC_WEAK_FUNC(sub_82EC8400);
PPC_FUNC_IMPL(__imp__sub_82EC8400) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ec78c8
	sub_82EC78C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC8404"))) PPC_WEAK_FUNC(sub_82EC8404);
PPC_FUNC_IMPL(__imp__sub_82EC8404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC8408"))) PPC_WEAK_FUNC(sub_82EC8408);
PPC_FUNC_IMPL(__imp__sub_82EC8408) {
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
	// bl 0x82ec57d8
	ctx.lr = 0x82EC8420;
	sub_82EC57D8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2748
	ctx.r11.s64 = ctx.r11.s64 + 2748;
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

__attribute__((alias("__imp__sub_82EC8444"))) PPC_WEAK_FUNC(sub_82EC8444);
PPC_FUNC_IMPL(__imp__sub_82EC8444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC8448"))) PPC_WEAK_FUNC(sub_82EC8448);
PPC_FUNC_IMPL(__imp__sub_82EC8448) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ec78c8
	sub_82EC78C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC844C"))) PPC_WEAK_FUNC(sub_82EC844C);
PPC_FUNC_IMPL(__imp__sub_82EC844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC8450"))) PPC_WEAK_FUNC(sub_82EC8450);
PPC_FUNC_IMPL(__imp__sub_82EC8450) {
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
	// bl 0x82ec57d8
	ctx.lr = 0x82EC8468;
	sub_82EC57D8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2764
	ctx.r11.s64 = ctx.r11.s64 + 2764;
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

__attribute__((alias("__imp__sub_82EC848C"))) PPC_WEAK_FUNC(sub_82EC848C);
PPC_FUNC_IMPL(__imp__sub_82EC848C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC8490"))) PPC_WEAK_FUNC(sub_82EC8490);
PPC_FUNC_IMPL(__imp__sub_82EC8490) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ec78c8
	sub_82EC78C8(ctx, base);
	return;
}

